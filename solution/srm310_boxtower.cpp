/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6576
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

class BoxTower {
public:
    int tallestTower(vector<int> x, vector<int> y, vector<int> z);
};

int BoxTower::tallestTower(vector<int> x, vector<int> y, vector<int> z) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {10, 50, 40, 20, 30};
    vector<int> y = {10, 50, 40, 20, 30};
    vector<int> z = {10, 50, 40, 20, 30};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {20, 30};
    vector<int> y = {20, 30};
    vector<int> z = {20, 10};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {20, 30};
    vector<int> y = {20, 33};
    vector<int> z = {20, 10};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {100, 100};
    vector<int> y = {10, 12};
    vector<int> z = {10, 8};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {100, 90, 15};
    vector<int> y = {100, 88, 15};
    vector<int> z = {100, 12, 89};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {100, 89, 90};
    vector<int> y = {100, 2, 13};
    vector<int> z = {100, 17, 13};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {13};
    vector<int> y = {12};
    vector<int> z = {14};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {14};
    vector<int> y = {12};
    vector<int> z = {13};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {12};
    vector<int> y = {14};
    vector<int> z = {13};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> y = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> z = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {80, 110, 100, 80, 60, 80, 110, 10, 100, 20, 30, 80, 30, 80, 120};
    vector<int> y = {110, 10, 70, 50, 50, 120, 90, 40, 100, 30, 30, 30, 80, 80, 80};
    vector<int> z = {60, 70, 70, 70, 60, 40, 20, 50, 80, 110, 100, 100, 100, 120, 90};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1070;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {20, 30, 90, 120, 70, 60, 110, 80, 90, 90, 100, 30, 30, 50, 20};
    vector<int> y = {100, 100, 90, 40, 90, 60, 110, 100, 20, 60, 10, 40, 70, 100, 30};
    vector<int> z = {40, 30, 90, 40, 30, 80, 10, 10, 30, 90, 10, 40, 120, 30, 80};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {10, 10, 90, 10, 80, 50, 110, 70, 70, 120, 40, 110, 30, 110, 120};
    vector<int> y = {100, 60, 30, 100, 10, 50, 90, 20, 90, 30, 20, 100, 60, 50, 120};
    vector<int> z = {50, 100, 40, 20, 100, 120, 100, 120, 100, 80, 40, 50, 60, 100, 70};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1080;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {60, 110, 120, 120, 90, 50, 40, 90, 60, 40, 120, 70, 10, 50, 120};
    vector<int> y = {50, 100, 10, 120, 30, 20, 30, 40, 20, 120, 120, 50, 90, 90, 20};
    vector<int> z = {30, 20, 50, 30, 50, 10, 110, 120, 90, 40, 40, 120, 20, 40, 50};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1060;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {50, 120, 60, 50, 120, 120, 70, 20, 30, 80, 60, 20, 40, 20, 30};
    vector<int> y = {90, 40, 40, 10, 100, 90, 50, 80, 80, 60, 30, 30, 50, 50, 110};
    vector<int> z = {10, 10, 100, 100, 60, 10, 90, 40, 70, 120, 30, 120, 50, 60, 50};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {70, 60, 120, 30, 110, 100, 30, 70, 90, 20, 40, 40, 50, 90, 120};
    vector<int> y = {30, 10, 120, 40, 110, 90, 50, 110, 120, 110, 100, 20, 20, 70, 110};
    vector<int> z = {60, 10, 90, 50, 70, 70, 60, 90, 50, 70, 30, 90, 100, 70, 90};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {10, 10, 90, 120, 40, 110, 90, 120, 100, 120, 100, 110, 20, 30, 50};
    vector<int> y = {40, 80, 60, 120, 50, 40, 100, 20, 10, 30, 80, 30, 30, 90, 10};
    vector<int> z = {110, 90, 10, 70, 10, 80, 100, 10, 80, 70, 120, 90, 50, 50, 40};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {100, 90, 30, 70, 120, 70, 100, 20, 10, 20, 80, 120, 80, 100, 90};
    vector<int> y = {80, 80, 90, 120, 60, 10, 120, 30, 10, 110, 10, 50, 110, 60, 90};
    vector<int> z = {20, 70, 90, 50, 10, 90, 30, 20, 100, 30, 80, 50, 30, 30, 60};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {30, 30, 10, 30, 60, 100, 40, 50, 10, 80, 30, 50, 120, 60, 100};
    vector<int> y = {90, 70, 80, 50, 110, 120, 50, 20, 20, 60, 80, 90, 20, 20, 30};
    vector<int> z = {70, 40, 50, 110, 110, 30, 90, 20, 70, 10, 10, 20, 50, 10, 70};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1090;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {70, 10, 10, 20, 90, 40, 20, 20, 90, 70, 70, 80, 70, 90, 100};
    vector<int> y = {90, 70, 10, 60, 60, 110, 80, 20, 40, 60, 60, 50, 70, 100, 90};
    vector<int> z = {50, 80, 90, 100, 100, 50, 10, 30, 100, 10, 90, 90, 80, 30, 90};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 960;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {50, 30, 30, 100, 80, 80, 120, 30, 10, 40, 90, 60, 120, 70, 80};
    vector<int> y = {120, 120, 30, 80, 90, 40, 40, 10, 60, 20, 10, 60, 20, 120, 80};
    vector<int> z = {100, 50, 110, 120, 60, 100, 120, 50, 10, 120, 120, 10, 100, 110, 70};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {90, 100, 100, 30, 90, 60, 70, 10, 100, 40, 60, 100, 100, 70, 100};
    vector<int> y = {90, 40, 60, 70, 70, 110, 50, 60, 30, 90, 100, 30, 90, 110, 50};
    vector<int> z = {70, 70, 70, 50, 90, 70, 20, 70, 110, 120, 110, 40, 10, 120, 20};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {20, 80, 90, 110, 70, 80, 90, 30, 10, 40, 30, 20, 100, 30, 120};
    vector<int> y = {60, 90, 100, 40, 50, 110, 110, 110, 50, 90, 100, 70, 50, 20, 60};
    vector<int> z = {100, 80, 60, 70, 60, 40, 20, 30, 60, 60, 100, 80, 80, 70, 100};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {110, 40, 100, 10, 80, 30, 110, 60, 10, 70, 60, 20, 20, 100, 70};
    vector<int> y = {110, 80, 20, 80, 60, 80, 110, 110, 20, 80, 40, 110, 70, 30, 90};
    vector<int> z = {80, 60, 40, 60, 60, 110, 120, 80, 80, 40, 20, 60, 90, 70, 30};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1280;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {30, 60, 20, 50, 50, 110, 40, 40, 90, 50, 30, 50, 70, 100, 70};
    vector<int> y = {70, 50, 40, 100, 20, 90, 10, 10, 40, 120, 80, 100, 50, 40, 40};
    vector<int> z = {120, 110, 90, 50, 70, 60, 40, 100, 90, 40, 60, 30, 80, 40, 120};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {70, 20, 50, 100, 30, 100, 110, 30, 110, 60, 30, 100, 30, 110, 20};
    vector<int> y = {70, 100, 120, 70, 30, 100, 120, 60, 70, 120, 90, 40, 30, 90, 70};
    vector<int> z = {60, 30, 120, 20, 40, 20, 120, 20, 90, 100, 80, 30, 70, 20, 10};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 960;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {120, 120, 110, 30, 70, 10, 120, 100, 100, 100, 20, 100, 10, 80, 60};
    vector<int> y = {110, 10, 120, 100, 30, 40, 120, 20, 90, 80, 30, 80, 100, 10, 100};
    vector<int> z = {20, 10, 90, 120, 70, 70, 40, 70, 90, 50, 80, 100, 30, 90, 50};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1110;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {120, 70, 50, 40, 90, 110, 110, 120, 120, 70, 70, 20, 30, 80, 70};
    vector<int> y = {40, 90, 70, 40, 10, 50, 110, 40, 30, 70, 90, 110, 80, 30, 70};
    vector<int> z = {40, 60, 50, 80, 90, 50, 70, 70, 40, 100, 60, 100, 40, 80, 90};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {100, 110, 60, 80, 20, 60, 120, 40, 10, 30, 20, 10, 10, 10, 70};
    vector<int> y = {110, 40, 10, 70, 120, 10, 120, 100, 120, 30, 70, 50, 50, 20, 40};
    vector<int> z = {10, 110, 60, 100, 60, 110, 70, 60, 70, 80, 120, 80, 80, 120, 90};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {30, 20, 40, 70, 80, 30, 110, 70, 40, 100, 100, 30, 60, 20, 40};
    vector<int> y = {90, 60, 30, 60, 40, 120, 50, 100, 50, 110, 50, 40, 100, 50, 70};
    vector<int> z = {100, 110, 80, 20, 90, 40, 80, 70, 20, 40, 50, 110, 60, 20, 40};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {2139933, 6723383, 7895022, 9544267, 313564, 508861, 8903683, 7909212, 2277686, 3669087, 6564286, 8590931, 1735991, 794584, 5197315};
    vector<int> y = {2651477, 4754117, 4095821, 5641893, 37526, 7395529, 1538840, 7897526, 5897491, 651137, 1101361, 7889619, 6247644, 170338, 3080929};
    vector<int> z = {506583, 4826622, 9804311, 917956, 4370889, 2634226, 1426816, 3274571, 543438, 6220854, 9460009, 7107723, 4811784, 3712351, 418658};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 63250028;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {9098, 6363828, 7689127, 6621270, 4522072, 7726652, 6533150, 6060911, 8140529, 2430640, 9228399, 9241889, 2836611, 7992394, 1928578};
    vector<int> y = {8433891, 8498977, 6755200, 754553, 9416932, 1126088, 3388778, 3360100, 4400658, 6448567, 9580953, 6377018, 6072642, 4392736, 89369};
    vector<int> z = {6491299, 6918185, 6453196, 6696777, 6055806, 975267, 4423429, 2588955, 9552529, 5080309, 5019594, 1297279, 4322198, 372556, 9289673};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 64487475;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {6250775, 8806446, 305001, 5522326, 9560998, 2238284, 6648413, 5466128, 5598383, 3565422, 1914694, 5179335, 9942440, 7987335, 2088422};
    vector<int> y = {2548160, 6994986, 1522958, 9001355, 3691762, 7578763, 2492973, 631542, 167717, 4561853, 5711851, 7703663, 8375483, 2550400, 8076218};
    vector<int> z = {7665155, 8801174, 9399016, 486507, 6839852, 1476365, 2724791, 3488264, 6942492, 8323173, 9570038, 1373538, 6018860, 2028829, 9360872};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 76260701;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {8107281, 4576988, 6355857, 2146591, 3578342, 2563971, 9725353, 8587666, 3195512, 9893070, 3149518, 8907362, 113084, 4041352, 3974113};
    vector<int> y = {8189301, 1706507, 5291639, 104668, 4709365, 2131490, 1581033, 7434155, 8136105, 1039876, 8273680, 7706142, 2413413, 4292539, 9734970};
    vector<int> z = {4290637, 4916171, 4311957, 3162845, 7062761, 406650, 5726815, 9304466, 8994315, 8922327, 1713887, 4660184, 346040, 1826970, 8701536};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 60466867;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {4320153, 2532622, 2924394, 9611791, 2637290, 150110, 4259632, 6734674, 7584265, 2395736, 7774549, 8374296, 101878, 2704314, 2666834};
    vector<int> y = {2353199, 6994950, 99356, 6665156, 157794, 9678469, 9588157, 8400961, 8982934, 1098824, 7323287, 3213172, 8275359, 185678, 5040141};
    vector<int> z = {9493246, 7022182, 7572762, 4933991, 9150324, 210051, 5084101, 3409955, 9461076, 2668365, 8322043, 7235625, 1042660, 8423920, 2456290};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 78928482;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {6225845, 3293470, 9451239, 8841552, 2474977, 2125384, 8520020, 2063134, 526344, 19305, 3161957, 365982, 3232476, 3953667, 3068012};
    vector<int> y = {788968, 3446913, 90193, 8361730, 8380903, 1756869, 1088132, 3465003, 7683175, 549208, 8649719, 6005217, 301184, 9692378, 6945488};
    vector<int> z = {2757473, 8434574, 238958, 4725063, 7276126, 2713934, 9366798, 8312497, 7293419, 9893142, 848154, 2971727, 2775475, 6596981, 6925394};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 60236264;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {5843486, 7385949, 372306, 8450031, 8264030, 1269560, 206899, 9352161, 4734563, 406425, 2417720, 3384281, 6411642, 2718903, 5593011};
    vector<int> y = {5873481, 7992727, 4027584, 8628790, 5234141, 1303709, 1342724, 4600939, 2132558, 1152494, 7010432, 2980711, 4124221, 9785906, 9577691};
    vector<int> z = {1049614, 5629392, 6963639, 3938271, 4079422, 5227668, 5207830, 6802672, 7096181, 2458744, 7209096, 9513900, 5843025, 6137089, 4749155};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 57143983;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {3952387, 2010570, 5258233, 7979970, 3155711, 492374, 1800031, 4498434, 7609664, 3932588, 8167280, 4620095, 9429650, 2291500, 6922352};
    vector<int> y = {9007340, 5857465, 2551743, 8487331, 2312087, 9147516, 6231350, 7519916, 5950187, 5843882, 2495012, 5675635, 7874134, 854388, 1812723};
    vector<int> z = {2623288, 4806774, 6339644, 7881520, 2786743, 9495355, 890245, 7103125, 6510140, 1016260, 3552064, 4677419, 5636354, 2981713, 9485270};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 58372852;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {2558706, 4505405, 5342734, 7626800, 2992735, 7654820, 6774316, 1740436, 7691088, 5240854, 100670, 2702451, 916488, 7974803, 3556838};
    vector<int> y = {5245563, 598090, 8363611, 1585206, 995961, 3666705, 3596912, 4402558, 769830, 2623404, 5418817, 4321893, 7300822, 3571523, 7303606};
    vector<int> z = {9302444, 8646580, 4325362, 7161529, 6273379, 9834448, 7332701, 5564046, 1574883, 5023788, 804900, 1675552, 242590, 1721387, 9650354};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 81725341;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {3799427, 6966949, 2764795, 2163037, 1068507, 6277108, 8346093, 4665418, 679665, 9115922, 7288821, 6098481, 5954167, 7105995, 2186355};
    vector<int> y = {5774124, 6408438, 832934, 99485, 6086318, 7106313, 9933932, 3419018, 5186710, 4025166, 959157, 5991609, 8217070, 1201746, 7712996};
    vector<int> z = {7867423, 5001172, 7196296, 3148570, 9680560, 8264802, 9425677, 8026653, 5446572, 105341, 9658926, 5251744, 8720173, 5613092, 4874090};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 73283268;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {906528, 3903567, 3798879, 4255813, 4003051, 9885197, 1362125, 6453334, 3304214, 9065187, 478500, 4263371, 5056795, 8695569, 5465116};
    vector<int> y = {5286142, 9079343, 2982640, 2482438, 4744264, 2663199, 3263591, 4169940, 3206203, 1226514, 6791632, 2865129, 6478258, 5511805, 994572};
    vector<int> z = {1352347, 8934684, 4898139, 5151226, 3190496, 1417541, 5036422, 7068973, 387227, 8340635, 6134159, 865726, 5120357, 1190953, 2077646};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 52149462;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {585473, 8993447, 3673340, 3568112, 1475884, 8417604, 8747662, 7255826, 2587543, 4470217, 8482340, 9379175, 7335345, 4960597, 7407331};
    vector<int> y = {846268, 8829295, 6342014, 8260758, 3980520, 2048861, 2194651, 1533293, 9117833, 2581877, 2390280, 5251991, 5963954, 7510636, 8959296};
    vector<int> z = {8041599, 8096108, 7952742, 1714938, 4180571, 1944977, 132541, 5444585, 9200802, 2720084, 9914801, 199493, 4615610, 9766497, 7676441};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 69606142;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {2022940, 612764, 6505736, 881305, 1389874, 3002607, 2930165, 3584524, 7052252, 4564350, 8682752, 9442531, 9816340, 4646705, 6953166};
    vector<int> y = {1291987, 2688303, 7565626, 1761080, 6919592, 4262548, 6222408, 9568485, 9707132, 7939562, 4804920, 9621932, 8139054, 9420529, 9388428};
    vector<int> z = {5815495, 3959820, 2517544, 4837582, 4841124, 6423769, 7840188, 287640, 2524644, 4892439, 4851989, 1207395, 6851321, 7184681, 5854099};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 73920233;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {3804487, 993019, 1058753, 3886464, 2754099, 494696, 8149011, 8976506, 63180, 7856143, 6916067, 4868099, 9994426, 7571473, 6804979};
    vector<int> y = {9382854, 3386967, 764798, 4416749, 8224548, 8122273, 840517, 8581087, 8409913, 3365160, 5989878, 3261901, 4572554, 2841198, 2962933};
    vector<int> z = {2943004, 9162036, 3955952, 6518108, 3048499, 6710050, 9529155, 3713862, 8202907, 9592335, 1570004, 7635326, 6976785, 1564429, 5206798};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 66353531;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {3781764, 3463634, 1110116, 4546561, 7880382, 1851015, 5185186, 8720898, 432101, 3595098, 4602409, 8938330, 9373350, 1691314, 4295880};
    vector<int> y = {4852635, 4634317, 3457915, 8808586, 3668776, 9022766, 8034987, 3197931, 2736627, 6237893, 5306617, 4306630, 6389570, 4799753, 8387410};
    vector<int> z = {1596367, 8581516, 4367396, 5222834, 5644429, 2247777, 7073848, 829614, 3485027, 22301, 6941063, 603787, 8960630, 8830764, 2295101};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 75221644;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {3256509, 3683398, 6929417, 9230776, 2491983, 3114545, 8253541, 3043321, 8828827, 3506519, 1797566, 6651795, 329500, 8187135, 1451547};
    vector<int> y = {8716909, 2299854, 33063, 3084304, 7522687, 8193843, 7848433, 4596535, 1539808, 3849811, 4618835, 8480870, 4453597, 6095816, 9827985};
    vector<int> z = {6748697, 9352325, 3511383, 6194466, 1099452, 8519717, 1825362, 1869344, 1563038, 654188, 5375862, 3360603, 7305982, 5705361, 4064089};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 56487932;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {1273880, 6938621, 6363942, 3823294, 22925, 3886629, 2017136, 387709, 8483163, 3556943, 6753871, 3101997, 4554164, 1207467, 9197812};
    vector<int> y = {6898501, 472516, 1066488, 2926235, 9183333, 4682291, 1445951, 1008694, 6551634, 5525340, 1662881, 1927495, 1402294, 1485214, 7632855};
    vector<int> z = {5466383, 5275445, 4571476, 1830324, 9098739, 7110752, 5716952, 1115874, 14812, 6716466, 7189169, 6768682, 2334814, 4259684, 492500};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 36976344;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {4048978, 3674536, 965015, 5115465, 6600770, 148347, 2314108, 563073, 3673392, 8865741, 6088412, 7852624, 3309588, 7058, 9337837};
    vector<int> y = {3458794, 5473440, 4613282, 546621, 9820115, 6228372, 7657372, 8053419, 9860597, 188535, 4769884, 7049765, 9473568, 7104698, 3825801};
    vector<int> z = {9966068, 1153675, 7500336, 3447434, 8785491, 6617458, 6112133, 3615950, 7180530, 9785524, 2481691, 5785293, 7638148, 8307630, 5792350};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 64809145;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {9492336, 1766423, 3782141, 6621969, 2313044, 3602256, 2850340, 2486767, 4172026, 2710937, 5191654, 1458261, 2277053, 4665221, 8562958};
    vector<int> y = {8619205, 4631288, 2232984, 6119541, 8078722, 3534827, 2736998, 6707206, 9667128, 2433879, 6492729, 4665170, 8219171, 6647228, 2972799};
    vector<int> z = {4011521, 6139564, 4739222, 7793661, 5277884, 9568617, 3912268, 8128224, 2055383, 8084293, 3355512, 7247036, 9542554, 5632564, 4428609};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 48288092;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {621863, 4251769, 9059896, 5371199, 2887661, 9654969, 1422377, 8141010, 6362174, 1089504, 574888, 5371255, 5754674, 8794058, 2018482};
    vector<int> y = {1243824, 5321930, 674397, 5983045, 5631943, 5952281, 8068013, 9544210, 6596856, 2639748, 144855, 9952367, 2403135, 2203760, 8101282};
    vector<int> z = {6831743, 5341974, 4869402, 5891639, 713172, 273414, 8062959, 4651900, 8414423, 6941485, 8257756, 1505662, 4829091, 6528781, 2816072};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 62482042;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {1066859, 16, 185011, 188814, 16, 35048, 1692777, 122714, 13033, 347949, 31482, 387373, 17, 678, 16};
    vector<int> y = {248335, 2766, 1109, 787169, 3331, 29678, 1930886, 150476, 732862, 832546, 85906, 146, 5057, 966429, 423784};
    vector<int> z = {1775486, 908167, 16, 500027, 644022, 15211, 1289383, 907763, 21, 526649, 393426, 16, 713135, 24080, 118};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 10790561;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {16, 16, 816862, 1448342, 908814, 363895, 7409, 671313, 576413, 480, 224, 1898537, 16, 622399, 354748};
    vector<int> y = {181087, 1000364, 21714, 278980, 16, 60, 499866, 47887, 1713615, 106660, 957178, 1575198, 715403, 16, 487084};
    vector<int> z = {551, 7483, 1416659, 93190, 8790, 15857, 507281, 235, 377584, 136505, 16, 1594324, 129, 87, 583};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 10639749;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {169, 15726, 968031, 17, 38, 490570, 23, 69910, 622902, 4207, 422, 17, 1549676, 17, 7202};
    vector<int> y = {915771, 4754, 17, 264586, 2840, 5395, 356619, 18965, 6598, 936652, 570280, 787856, 1095060, 131, 358094};
    vector<int> z = {17, 107467, 586, 49, 963865, 39771, 805, 220012, 2179, 612, 4004, 103, 1999932, 130709, 51547};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 9693346;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {241965, 12245, 1276965, 1244985, 496715, 36372, 480124, 451500, 620844, 757796, 23022, 17, 8027, 332227, 1008};
    vector<int> y = {1061295, 91095, 1964683, 61528, 546424, 479841, 30, 45, 1072027, 100539, 61474, 6275, 285856, 19, 45707};
    vector<int> z = {268270, 62532, 1455306, 663831, 117074, 48, 11404, 23147, 58829, 66882, 902921, 291936, 20, 6367, 607488};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8482397;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {75818, 19, 269470, 395644, 265763, 1452551, 478858, 72281, 344, 18, 1333, 87, 16, 25, 376715};
    vector<int> y = {1393, 305499, 16, 16, 3632, 1151432, 92374, 671237, 807369, 3266, 17, 4140, 476996, 328776, 103296};
    vector<int> z = {13199, 16, 35, 16, 19, 1316437, 62237, 9359, 16, 128606, 354818, 241011, 70, 3694, 985407};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 7237823;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {285, 315624, 41, 813603, 45568, 241693, 917669, 1189, 959299, 1617505, 658522, 54878, 897, 499820, 32};
    vector<int> y = {188736, 23, 483416, 398464, 82724, 769355, 1122662, 10364, 232509, 1268139, 50, 298, 331801, 288611, 18};
    vector<int> z = {279, 16, 39, 446537, 13337, 738365, 1291770, 33311, 139528, 1755590, 58, 731, 337, 234130, 422924};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8294307;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {1962600, 53, 168660, 18, 188124, 220, 962926, 16, 16443, 488, 16, 694930, 162959, 16, 511781};
    vector<int> y = {1433452, 8005, 28157, 453376, 53227, 389107, 1856, 20, 1040, 921340, 99412, 43053, 87, 46, 194250};
    vector<int> z = {1532036, 749668, 1090, 289, 910973, 16, 33, 461659, 397981, 18, 33, 3985, 11763, 679179, 155550};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 9526551;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {59459, 18, 25, 14983, 5727, 360514, 11867, 514, 1295, 1402336, 37057, 16, 71, 16, 18};
    vector<int> y = {126631, 16, 750084, 239904, 356228, 117569, 83940, 310, 1038, 1262009, 36551, 18, 155, 18, 16};
    vector<int> z = {677372, 316640, 26, 8961, 10759, 888206, 6809, 799224, 575984, 1625210, 874819, 217672, 831396, 350713, 915385};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 9502777;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {402485, 373, 585579, 1352298, 863250, 2904, 48, 1547, 947732, 257255, 233205, 345625, 528944, 4247, 73033};
    vector<int> y = {228004, 455, 185503, 1280524, 413448, 232842, 26, 733506, 682172, 35760, 149049, 39099, 8407, 75431, 272754};
    vector<int> z = {188987, 245189, 17621, 1256190, 118581, 1004, 859958, 6658, 204631, 276226, 6826, 95273, 1872, 972504, 1973};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8199260;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {515363, 49, 7365, 325, 1210498, 304892, 276748, 16, 37, 329529, 550391, 483788, 20, 393303, 527567};
    vector<int> y = {2969, 905436, 96990, 70, 1518808, 639, 16, 22, 81, 13672, 1214843, 10423, 22, 599634, 1061922};
    vector<int> z = {1289, 23, 6783, 771152, 1448036, 327, 22, 70028, 219188, 48108, 331648, 37738, 553921, 1232993, 380370};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8874049;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {1308902, 36131, 402292, 1078033, 39730, 23, 22, 270289, 292134, 586335, 16327, 895238, 45909, 308285, 92832};
    vector<int> y = {1504794, 512215, 33, 581043, 46159, 33, 971682, 185, 77967, 1855, 765629, 293, 526035, 2225, 100428};
    vector<int> z = {1707556, 12774, 29, 106328, 512703, 63144, 31, 54, 15681, 425, 8434, 1636, 10681, 4813, 887731};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8974952;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {228593, 72450, 1000569, 10081, 1422867, 559, 3820, 26, 319, 35, 1069870, 335578, 466, 10495, 176438};
    vector<int> y = {40, 224677, 1655340, 972734, 1473678, 400358, 13512, 67, 79, 92, 419117, 244, 472, 641626, 481773};
    vector<int> z = {18, 107789, 1553541, 458077, 182261, 919, 359614, 809051, 644994, 542290, 876205, 56, 575100, 49032, 505425};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8502755;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {392, 782757, 508338, 1000783, 1826236, 630483, 14926, 16, 1325, 5223, 509267, 1753, 1418627, 13866, 16};
    vector<int> y = {4416, 45, 400, 201, 735118, 52, 6800, 45217, 22, 792, 387424, 310606, 1830857, 5510, 126};
    vector<int> z = {37284, 16, 4472, 16, 798355, 16, 868969, 225, 110237, 935433, 24412, 137, 1541312, 816355, 720873};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 10933695;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {514292, 898574, 41301, 69967, 227462, 355, 365115, 38360, 221388, 472951, 1334471, 16, 733618, 17, 26021};
    vector<int> y = {114, 51, 528157, 6940, 2547, 51905, 17, 423173, 86133, 17, 1149314, 624030, 527825, 620537, 170358};
    vector<int> z = {22, 17, 77571, 643417, 29, 678363, 54, 78, 361694, 23, 1645729, 16, 671267, 21, 70597};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8907470;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {27, 443483, 10404, 107328, 1241081, 299698, 431244, 26559, 41, 15470, 39539, 43002, 138047, 271796, 591728};
    vector<int> y = {41, 8976, 685105, 41536, 1035325, 523970, 77, 416, 35, 189, 552, 1012552, 227756, 608773, 347196};
    vector<int> z = {568955, 55939, 86, 97729, 1554098, 244173, 1114, 479911, 529934, 515236, 994857, 974545, 245379, 727027, 984580};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8441257;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {630430, 52385, 1133589, 1119, 6120, 603093, 1506571, 860543, 886982, 54, 91, 65, 744713, 33382, 316710};
    vector<int> y = {196593, 484762, 1593614, 1377, 45851, 653318, 562805, 45848, 282528, 846836, 315153, 676328, 45663, 120294, 109};
    vector<int> z = {68576, 9177, 1343768, 770235, 42919, 262941, 324720, 502557, 844958, 53, 185, 159, 279544, 2748, 57};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 8827079;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {394172, 378793, 1575055, 783339, 31366, 7433, 37, 70942, 973981, 724904, 22, 346503, 3746, 13965, 5500};
    vector<int> y = {1142, 225057, 1387090, 1176529, 17335, 16902, 2568, 200231, 309, 917154, 2489, 55372, 443518, 731120, 77};
    vector<int> z = {22, 623073, 1596963, 379633, 92195, 696763, 332532, 429805, 8611, 1508706, 637321, 91388, 41, 17205, 549036};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 10532217;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {18, 321776, 260573, 689262, 67522, 51, 16, 1152040, 9667, 317398, 48, 919365, 911958, 421898, 56104};
    vector<int> y = {16, 16, 638239, 287, 205362, 549848, 36272, 1344234, 694278, 44163, 25622, 16, 40671, 11778, 955082};
    vector<int> z = {937335, 16, 430, 16, 245, 16, 47, 1794427, 16, 1143967, 839204, 16, 380347, 19, 70};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 10231704;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {427260, 602, 781559, 441806, 5959, 180, 758720, 4076, 1673, 108, 65162, 78700, 108, 1938701, 180};
    vector<int> y = {994267, 68109, 5323, 1096507, 811052, 50, 254446, 719016, 826539, 585223, 86376, 525334, 706532, 1725218, 69426};
    vector<int> z = {366728, 522, 29305, 219933, 35321, 499114, 161498, 1794, 2851, 27, 14780, 90792, 23, 1160269, 44};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 9899468;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {391494, 673, 1000415, 586590, 390595, 16, 16, 1591281, 1522, 16, 775404, 37350, 409134, 18, 897982};
    vector<int> y = {11974, 369415, 16, 77621, 16, 16, 16, 1292122, 853, 752587, 253, 321131, 16, 52, 729};
    vector<int> z = {2068, 237, 16, 1291241, 16, 122297, 90154, 1323875, 564603, 16, 128, 199138, 22, 560551, 802};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 9528284;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {4648369, 1808487, 3649400, 9054142, 9571390, 4588711, 9147614, 8388081, 4742549, 9387366, 32929, 8163539, 4807610, 7868333, 4300052};
    vector<int> y = {4230513, 5898888, 2604805, 1873049, 8999862, 1523308, 5894590, 5556884, 575992, 100859, 6827376, 3248721, 8188381, 3997183, 5822692};
    vector<int> z = {7502745, 4390671, 2394065, 8357323, 1042249, 6996092, 2841551, 2100937, 9312728, 6217971, 8835464, 4178650, 3669753, 4984056, 3264064};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 47340249;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {1, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45};
    vector<int> y = {1, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45};
    vector<int> z = {1, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {10, 50, 40, 20, 30, 10, 50, 40, 20, 30, 10, 50, 40, 20, 30};
    vector<int> y = {10, 50, 40, 20, 30, 10, 50, 40, 20, 30, 10, 50, 40, 20, 30};
    vector<int> z = {10, 50, 40, 20, 30, 10, 50, 40, 20, 30, 10, 50, 40, 20, 30};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {432423, 234, 23, 4, 423, 423, 424, 23, 423, 423, 41243, 12, 441324, 999999, 1};
    vector<int> y = {1432423, 1234, 123, 4, 4123, 423, 4124, 123, 4223, 423, 414243, 12, 4441324, 999999, 1};
    vector<int> z = {432423, 2334, 230, 4, 4923, 423, 4824, 23, 4623, 423, 412243, 12, 4441324, 999999, 15};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 6304378;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> z = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {1, 313800, 8610485, 2025810, 2729213, 6716545, 3186913, 1617955, 3722384, 4256738, 820122, 4747941, 705694, 8408545, 597243};
    vector<int> y = {2932966, 9172848, 3679065, 7746649, 3279256, 6976750, 8441710, 7179829, 3066414, 1626259, 3294965, 4660205, 2466537, 8256765, 2790295};
    vector<int> z = {4817664, 1491850, 8743351, 2872943, 7727533, 9764599, 4925280, 8879361, 8272767, 202969, 1410563, 1435043, 5008078, 216759, 5929346};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 63010954;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> z = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> z = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {100, 100};
    vector<int> y = {10, 12};
    vector<int> z = {10, 8};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {1, 3, 2, 3, 2, 1, 3, 2, 3, 2, 1, 3, 2, 3, 2};
    vector<int> y = {3, 1, 2, 3, 3, 3, 3, 2, 3, 1, 3, 2, 1, 2, 3};
    vector<int> z = {2, 2, 2, 3, 2, 1, 2, 3, 2, 3, 3, 2, 3, 4, 3};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> y = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> z = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {5436, 6368, 4310, 32165, 25084, 3732, 23909, 19915, 153, 7797, 1453, 31403, 28365, 12778, 3833};
    vector<int> y = {18056, 12551, 20833, 24522, 29118, 27110, 27677, 31163, 25961, 28020, 20672, 29973, 23767, 19491, 8860};
    vector<int> z = {6706, 14766, 4488, 22458, 13458, 28381, 13017, 2982, 31679, 11843, 26919, 13057, 11745, 17698, 29532};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 190870;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {10, 10, 20, 20, 10, 30, 30, 30, 10, 20, 5000, 5000, 5000, 5000, 10000000};
    vector<int> y = {20, 20, 30, 10, 20, 20, 20, 10, 20, 30, 5000, 5000, 5000, 5000, 1000000};
    vector<int> z = {30, 30, 10, 30, 30, 10, 10, 20, 30, 10, 5000, 5000, 5000, 5000, 4999};
    BoxTower* pObj = new BoxTower();
    clock_t start = clock();
    int result = pObj->tallestTower(x, y, z);
    clock_t end = clock();
    delete pObj;
    int expected = 10000300;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=9990&pm=6576
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
int n; 
int a[15][3]; 
 
int p[6][3] = { {0,1,2}, {0,2,1}, {1,0,2}, {1,2,0}, {2,0,1}, {2,1,0} }; 
 
int memo[1<<15][15][6]; 
 
struct BoxTower { 
 
   int rec( int used, int last, int lastperm ) { 
      int & ret = memo[used][last][lastperm]; 
      if( ret >= 0 ) return ret; 
       
      ret = 0; 
 
      for( int next = 0; next < n; ++next ) { 
         if( (used>>next)&1 ) continue; 
 
         for( int perm = 0; perm < 6; ++perm ) { 
            if( a[next][p[perm][1]] > a[last][p[lastperm][1]] ) continue; 
            if( a[next][p[perm][2]] > a[last][p[lastperm][2]] ) continue; 
             
            ret >?= a[next][p[perm][0]] + rec( used | (1<<next), next, perm ); 
         } 
      } 
 
      return ret; 
   } 
 
   int tallestTower( vector <int> x, vector <int> y, vector <int> z ) { 
      n = x.size(); 
      for( int i = 0; i < n; ++i ) { 
         a[i][0] = x[i]; 
         a[i][1] = y[i]; 
         a[i][2] = z[i]; 
      } 
       
      memset( memo, -1, sizeof memo ); 
 
      int ret = 0; 
 
      for( int first = 0; first < n; ++first ) 
         for( int perm = 0; perm < 6; ++perm ) 
            ret >?= a[first][p[perm][0]] + rec( 1<<first, first, perm ); 
 
      return ret; 
   } 
 
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/