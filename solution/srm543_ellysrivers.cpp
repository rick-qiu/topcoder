/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11912
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

class EllysRivers {
public:
    double getMin(int length, int walk, vector<int> width, vector<int> speed);
};

double EllysRivers::getMin(int length, int walk, vector<int> width, vector<int> speed) {
    double ret;
    return ret;
}


int test0() {
    int length = 10;
    int walk = 3;
    vector<int> width = {5, 2, 3};
    vector<int> speed = {5, 2, 7};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.231651964071508;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 10000;
    int walk = 211;
    vector<int> width = {911};
    vector<int> speed = {207};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 48.24623664712219;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 1337;
    int walk = 2;
    vector<int> width = {100, 200, 300, 400};
    vector<int> speed = {11, 12, 13, 14};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 128.57830549575695;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 77;
    int walk = 119;
    vector<int> width = {11, 12, 13, 14};
    vector<int> speed = {100, 200, 300, 400};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3842077071089629;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 7134;
    int walk = 1525;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393};
    vector<int> speed = {1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 214.6509731258811;
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
    int walk = 8;
    vector<int> width = {6, 2, 2};
    vector<int> speed = {5, 2, 7};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3189604889311655;
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
    int walk = 337;
    vector<int> width = {1, 1, 1};
    vector<int> speed = {1, 1, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1246290801186944;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {1, 1, 1};
    vector<int> speed = {1, 1, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1;
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
    vector<int> speed = {1000000, 1, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000014142135623;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000};
    vector<int> speed = {1000000, 1, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2000001.004987562;
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
    vector<int> speed = {1, 1000000, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000014142135623;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000};
    vector<int> speed = {1, 1000000, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2000001.004987562;
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
    vector<int> speed = {1, 1, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000014142135623;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000};
    vector<int> speed = {1, 1, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2000001.004987562;
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
    vector<int> speed = {1000000, 1000000, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000024142135624;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000};
    vector<int> speed = {1000000, 1000000, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1000002.0024984397;
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
    vector<int> speed = {1000000, 1, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000024142135624;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000};
    vector<int> speed = {1000000, 1, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1000002.0024984397;
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
    vector<int> speed = {1, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000024142135624;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000};
    vector<int> speed = {1, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1000002.0024984394;
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
    vector<int> speed = {1000000, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4142135623730953E-6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000};
    vector<int> speed = {1000000, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0016662039610598;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 100000;
    int walk = 2;
    vector<int> width = {1, 1, 1};
    vector<int> speed = {1, 1, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50002.74264068711;
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
    int walk = 1000000;
    vector<int> width = {1};
    vector<int> speed = {1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730952E-6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 1;
    int walk = 1000000;
    vector<int> width = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> speed = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.041421356237305E-5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> speed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.000009999990004E7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {100, 1100, 2100, 3100, 4100, 5100, 6100, 7100, 8100, 9100, 10100, 11100, 12100, 13100, 14100, 15100, 16100, 17100, 18100, 19100, 20100, 21100, 22100, 23100, 24100, 25100, 26100, 27100, 28100, 29100, 30100, 31100, 32100, 33100, 34100, 35100, 36100, 37100, 38100, 39100, 40100, 41100, 42100, 43100, 44100, 45100, 46100, 47100, 48100, 49100};
    vector<int> speed = {10, 110, 210, 310, 410, 510, 610, 710, 810, 910, 1010, 1110, 1210, 1310, 1410, 1510, 1610, 1710, 1810, 1910, 2010, 2110, 2210, 2310, 2410, 2510, 2610, 2710, 2810, 2910, 3010, 3110, 3210, 3310, 3410, 3510, 3610, 3710, 3810, 3910, 4010, 4110, 4210, 4310, 4410, 4510, 4610, 4710, 4810, 4910};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 500.09796687260206;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {100, 1100, 2100, 3100, 4100, 5100, 6100, 7100, 8100, 9100, 10100, 11100, 12100, 13100, 14100, 15100, 16100, 17100, 18100, 19100, 20100, 21100, 22100, 23100, 24100, 25100, 26100, 27100, 28100, 29100, 30100, 31100, 32100, 33100, 34100, 35100, 36100, 37100, 38100, 39100, 40100, 41100, 42100, 43100, 44100, 45100, 46100, 47100, 48100, 49100};
    vector<int> speed = {10, 110, 210, 310, 410, 510, 610, 710, 810, 910, 1010, 1110, 1210, 1310, 1410, 1510, 1610, 1710, 1810, 1910, 2010, 2110, 2210, 2310, 2410, 2510, 2610, 2710, 2810, 2910, 3010, 3110, 3210, 3310, 3410, 3510, 3610, 3710, 3810, 3910, 4010, 4110, 4210, 4310, 4410, 4510, 4610, 4710, 4810, 4910};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 501.2266606390837;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {1000, 6000, 11000, 16000, 21000, 26000, 31000, 36000, 41000, 46000, 51000, 56000, 61000, 66000, 71000, 76000, 81000, 86000, 91000, 96000, 101000, 106000, 111000, 116000, 121000, 126000, 131000, 136000, 141000, 146000, 151000, 156000, 161000, 166000, 171000, 176000, 181000, 186000, 191000, 196000, 201000, 206000, 211000, 216000, 221000, 226000, 231000, 236000, 241000, 246000};
    vector<int> speed = {10, 1010, 2010, 3010, 4010, 5010, 6010, 7010, 8010, 9010, 10010, 11010, 12010, 13010, 14010, 15010, 16010, 17010, 18010, 19010, 20010, 21010, 22010, 23010, 24010, 25010, 26010, 27010, 28010, 29010, 30010, 31010, 32010, 33010, 34010, 35010, 36010, 37010, 38010, 39010, 40010, 41010, 42010, 43010, 44010, 45010, 46010, 47010, 48010, 49010};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 349.2645017757457;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {10, 110, 210, 310, 410, 510, 610, 710, 810, 910, 1010, 1110, 1210, 1310, 1410, 1510, 1610, 1710, 1810, 1910, 2010, 2110, 2210, 2310, 2410, 2510, 2610, 2710, 2810, 2910, 3010, 3110, 3210, 3310, 3410, 3510, 3610, 3710, 3810, 3910, 4010, 4110, 4210, 4310, 4410, 4510, 4610, 4710, 4810, 4910};
    vector<int> speed = {1, 11, 21, 31, 41, 51, 61, 71, 81, 91, 101, 111, 121, 131, 141, 151, 161, 171, 181, 191, 201, 211, 221, 231, 241, 251, 261, 271, 281, 291, 301, 311, 321, 331, 341, 351, 361, 371, 381, 391, 401, 411, 421, 431, 441, 451, 461, 471, 481, 491};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 500.09998265700153;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 48926;
    int walk = 222393;
    vector<int> width = {595477, 275837, 569590, 157692, 680270, 141323, 144412, 245683, 904475, 454383, 508153, 724862, 373770, 127671, 464318, 623197, 418768, 388979, 205057, 459153, 8325, 474424, 900860, 894371, 311331, 691486, 766604, 51163, 939275, 998979, 744115, 85002, 510337, 916550, 873046, 53505, 959787, 393933};
    vector<int> speed = {82048, 269655, 187669, 410751, 267101, 279207, 658544, 118090, 2240, 830992, 444430, 858783, 366045, 897139, 646247, 671537, 14992, 588088, 988120, 387002, 176212, 469962, 85023, 461813, 345485, 227478, 301728, 986533, 708351, 475408, 357987, 202189, 971540, 333102, 353812, 1974, 826778, 82283};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 521.0146751963994;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 62241;
    int walk = 941612;
    vector<int> width = {620741, 120032, 907073, 24994, 351807, 408006, 717192, 356916, 131808, 137329, 990107, 750677, 817010, 805503, 624982, 676615, 918661, 730548, 129498, 541680, 618729, 419128, 816907, 709848, 238455, 664919, 20434, 514927, 641801, 25215, 481244, 741956, 140029, 954502, 605913, 396111, 479478, 553185, 257726, 768104, 821658, 801838, 270595, 467470, 380885, 221739, 668646, 178466, 217941, 119356};
    vector<int> speed = {67174, 662889, 600781, 314602, 697928, 886541, 611762, 788702, 951126, 671644, 92609, 767402, 861851, 276615, 130806, 346048, 203560, 681124, 760214, 779641, 82898, 684525, 64615, 692239, 526961, 193279, 208306, 762211, 244195, 337244, 98952, 712633, 58055, 988970, 166010, 236087, 96067, 234738, 902880, 601898, 201087, 428129, 458899, 263552, 515559, 696330, 707826, 803599, 542637, 708898};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 106.40531548972129;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 1153;
    int walk = 510796;
    vector<int> width = {620098, 123973, 433301, 979878, 840041, 235274, 318632, 531855, 692279, 170205, 447593, 889343, 227891, 431794, 805857, 372924, 442311, 188735, 641145, 255310, 706431, 940991};
    vector<int> speed = {448323, 600002, 124621, 744113, 77937, 518888, 550087, 484118, 313436, 602964, 272807, 505014, 571839, 575328, 372747, 57628, 934073, 150249, 344435, 85525, 921294, 172046};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 47.78070167229568;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 45765;
    int walk = 462389;
    vector<int> width = {295668, 176844, 304529, 332365, 422532, 768692, 46662};
    vector<int> speed = {80114, 449067, 221648, 157873, 743528, 942169, 582677};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 9.028642265470275;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 81781;
    int walk = 676456;
    vector<int> width = {672989, 536633, 732621, 919201, 186917, 963943, 598614, 181233, 570894, 773294, 652904, 308146, 165279, 989825, 440009, 258602, 609858, 876310, 859557, 220512, 922371, 910759, 93517, 220322, 660116, 854836, 714932, 773761, 393739, 708671, 748656, 374352, 354850, 109327, 593471, 506664, 50999};
    vector<int> speed = {99246, 93183, 308967, 120010, 920042, 272181, 777517, 587010, 242136, 285575, 545374, 539943, 837516, 419330, 990754, 364073, 41059, 665045, 378728, 67416, 367929, 919251, 757982, 295786, 337523, 338677, 686843, 963320, 486518, 713686, 976438, 139009, 686510, 120821, 197324, 850854, 421385};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 80.74901999321995;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 81943;
    int walk = 113214;
    vector<int> width = {271161, 407266, 33872, 7549, 781557, 293987, 701899, 48680, 736248, 762120, 950780, 501532, 537345, 205447, 339698, 490481, 233681, 177206, 43140, 868831, 689776, 254673, 725321, 637444};
    vector<int> speed = {1833, 913335, 948447, 315170, 963849, 779181, 409829, 876319, 239460, 931225, 458560, 393284, 609040, 229256, 244570, 492606, 856552, 143081, 885086, 622688, 895946, 82511, 877949, 741215};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 171.29804259020696;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 86233;
    int walk = 72947;
    vector<int> width = {462101, 47996, 292080, 973987, 171199, 751838, 591813, 677088};
    vector<int> speed = {19519, 24940, 201175, 356322, 16282, 780761, 930540, 312047};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 44.069685980434;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 21114;
    int walk = 913309;
    vector<int> width = {652943};
    vector<int> speed = {298158};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1910674507909613;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 35250;
    int walk = 775349;
    vector<int> width = {619877, 767638, 432299, 71869, 700535, 309708, 240172, 739122, 466012, 902619, 405491, 86467, 894002, 532429, 35551, 67343, 450043, 807665, 710453, 211126, 639453, 672281, 113307, 164956, 289761, 78685, 710558, 621034, 80053, 30806, 253485, 32396, 87786, 168868, 730908, 993460, 197302, 978537, 69474, 965718, 754931, 615243, 834331, 734250};
    vector<int> speed = {463518, 312310, 300102, 815789, 629721, 723928, 244296, 277920, 2921, 383907, 167271, 608199, 221496, 731278, 186320, 346859, 112917, 374805, 225106, 351577, 117167, 939892, 860193, 858209, 334942, 89136, 742356, 977304, 182874, 141966, 608999, 863318, 131777, 974426, 650041, 442809, 143062, 427553, 596303, 684064, 121981, 823927, 603919, 761521};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 219.6397720584072;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 15040;
    int walk = 255346;
    vector<int> width = {8083, 757260, 978285, 670051, 81460, 851829};
    vector<int> speed = {195527, 361914, 672581, 458734, 847009, 100290};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 13.638804521334915;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 3737;
    int walk = 943889;
    vector<int> width = {354263, 210697, 425373, 36664, 271992, 644915, 332723, 879693, 56266, 798711, 122649, 396758, 791251, 699480, 594359, 695113, 991808, 737121, 771293, 656416, 236000, 830494, 29946, 677660, 437607, 586590, 122918, 953661, 259308, 18488, 957593};
    vector<int> speed = {482251, 682475, 107651, 596338, 127632, 979716, 40732, 365169, 315995, 319545, 716515, 85821, 428734, 658804, 959934, 423711, 500369, 734911, 195285, 900869, 367726, 33866, 63637, 664256, 533875, 276457, 606702, 803846, 745667, 257363, 967829};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 71.12032998988114;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 49105;
    int walk = 966084;
    vector<int> width = {225666, 753150, 372066, 763227, 843250, 99471, 115723, 356125, 741094, 653866};
    vector<int> speed = {906161, 959920, 519075, 441783, 813644, 741313, 96944, 486085, 279829, 645728};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.236324968366723;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 91035;
    int walk = 943814;
    vector<int> width = {80062, 79476, 408335, 55603, 595829, 959632, 23321, 768400, 607104, 59912, 664259, 78831, 50943, 638327, 185677, 965405, 861365, 548991, 907614, 220911, 238793, 242437, 832511, 986425, 273032, 103409, 305566, 384151, 567842, 43183, 430541, 94440, 4840, 847536, 478208, 56205, 730836, 640234, 123474, 701806};
    vector<int> speed = {989762, 634387, 790720, 954550, 480367, 991466, 966508, 858962, 223297, 443823, 940379, 293750, 863423, 360486, 251064, 612056, 899540, 797912, 215823, 946611, 447824, 477649, 346195, 721029, 735975, 708323, 84121, 96466, 778352, 348578, 834650, 689503, 265703, 26150, 97525, 627831, 250540, 168716, 157483, 351849};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 79.33144646850417;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 20929;
    int walk = 134901;
    vector<int> width = {418312, 279760, 771525, 979681, 624042, 628579, 71141, 315225, 892969, 913002, 280898, 801882, 402405, 429881, 119180, 956698, 963777, 161735, 83512, 252659, 478561, 903728, 939390, 947427, 1906, 548084, 251995, 617738, 536290};
    vector<int> speed = {24246, 860369, 744110, 162788, 724734, 804322, 189818, 132013, 964023, 858968, 140538, 423674, 996337, 290689, 855521, 495176, 320928, 361131, 297604, 457946, 578907, 315052, 911709, 25014, 672158, 574429, 207176, 607144, 637577};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 89.78944185627572;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 27161;
    int walk = 899017;
    vector<int> width = {513887, 813059, 721988, 304394, 258952, 160573, 483587, 938403};
    vector<int> speed = {299023, 986482, 175412, 530085, 841508, 291790, 716457, 499436};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.645026998356725;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 34459;
    int walk = 375104;
    vector<int> width = {718941, 354923, 525631, 456790, 756061, 974256, 799297, 886950, 797592, 156522, 689093, 475048, 771259, 641788, 329483, 892578, 894906, 701230, 332887, 130749, 218444, 235691, 455090, 22150, 445354, 833987, 958185, 24624, 222675, 717802, 893004, 425360, 259595, 638584, 505135, 905696, 496727, 127463, 428909, 787965, 136386, 435032, 808928, 930408, 436699, 586894, 536938, 336712, 129717, 497584};
    vector<int> speed = {539311, 864423, 290918, 650828, 704537, 328241, 128073, 896015, 722002, 858296, 779644, 614350, 404942, 242803, 605154, 402304, 899775, 805114, 26722, 116929, 167518, 502283, 559462, 561425, 432425, 156872, 957982, 638995, 706335, 696823, 576954, 950415, 723333, 241409, 429363, 695728, 605221, 851955, 229506, 765639, 93450, 373696, 977831, 424070, 675526, 844029, 235684, 663877, 532204, 754788};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 74.59836959823546;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 84096;
    int walk = 743744;
    vector<int> width = {183698, 15301, 800279, 112671, 255369, 538050, 591757, 30570, 20974, 79433, 54794, 37466, 675019, 854258, 730713, 564120, 404622, 806486, 299499, 602960, 681929, 833749, 205010, 162100, 639856, 356689, 428550, 401208, 432478, 815792, 796515, 964756, 973457, 472606, 821865, 611781, 150505, 72521, 349563, 813323, 500717, 623395};
    vector<int> speed = {662369, 974317, 656582, 257187, 808838, 549873, 293633, 543108, 399547, 408165, 971985, 671237, 322610, 596569, 733643, 218791, 394179, 427681, 143017, 327027, 723691, 575320, 705480, 560049, 439944, 450072, 975978, 346226, 58718, 731075, 536692, 436935, 219093, 751998, 468337, 571655, 388728, 485872, 232013, 430669, 274935, 711879};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 53.13909435877781;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 22202;
    int walk = 55927;
    vector<int> width = {919859, 921551, 158568, 271229, 708777, 727940, 132039, 928598, 980642, 808120, 918719, 128114, 840474, 107211, 222013, 139956, 120273, 517060, 88245, 27364, 830285, 732620, 292700, 7022, 726102, 625456, 153199, 860384};
    vector<int> speed = {319096, 372387, 344427, 394543, 511300, 921659, 459475, 855859, 452368, 557679, 736046, 728614, 643123, 82527, 857478, 413097, 852490, 645132, 870058, 870655, 9973, 260507, 936493, 565904, 328986, 313623, 353700, 56872};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 125.5271384169284;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 8609;
    int walk = 703404;
    vector<int> width = {463349, 80119, 750061, 971362, 674124, 180812, 530062, 261481, 989477, 853908, 342699, 435175, 945178, 619466, 604415, 50184, 834092, 731880, 30702, 251450, 606014, 416816, 89660, 836847, 719128, 322662, 637075, 380831};
    vector<int> speed = {140390, 21843, 289600, 761283, 436598, 86980, 644214, 391579, 457214, 725769, 301067, 593768, 820947, 670455, 2550, 152755, 543091, 954087, 174999, 190980, 73788, 31668, 364847, 118316, 8690, 337088, 954340, 246780};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 378.99905362068915;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 157;
    int walk = 865456;
    vector<int> width = {725579, 617960, 805548, 64365, 838580, 54884, 255520, 67584, 654422, 351043, 636285, 645423, 948818, 224382, 482744, 313234, 701264, 245487, 252810, 255336, 150331, 417047};
    vector<int> speed = {932079, 506641, 817088, 81369, 107239, 529684, 668947, 927870, 999224, 504730, 79594, 706415, 743082, 531633, 134336, 703742, 776074, 823947, 952595, 73629, 193383, 150204};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 36.63776611114864;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 88646;
    int walk = 479652;
    vector<int> width = {645183, 4032, 566352, 494452};
    vector<int> speed = {744881, 458603, 546623, 502552};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8986958394135534;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 73364;
    int walk = 34358;
    vector<int> width = {854629, 830989, 265908};
    vector<int> speed = {248218, 941951, 789735};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.664195375033834;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 28891;
    int walk = 635066;
    vector<int> width = {207886, 607205, 723396, 982530, 860437, 982866, 297739, 821640, 127857, 954853, 813512, 790549, 192507};
    vector<int> speed = {939138, 294293, 317668, 653874, 920726, 99955, 538031, 473270, 313103, 932550, 530360, 631758, 187744};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 24.364510141314003;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int length = 78260;
    int walk = 669956;
    vector<int> width = {848702, 587977, 810522, 47939, 457510, 499382, 516104};
    vector<int> speed = {980832, 487124, 126669, 736542, 165454, 160269, 956647};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.958328986182275;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 91089;
    int walk = 907464;
    vector<int> width = {361406, 86618, 652395, 681659, 472692, 976884, 389113, 659722, 892746, 581538, 848984, 146197, 382121, 237382, 75536, 856052, 474653, 250571, 830353, 225792, 691796, 874460, 615978, 998296, 782372, 460971, 222931, 79328, 848770, 743211, 566117};
    vector<int> speed = {641213, 7180, 538198, 947292, 546395, 687616, 130344, 647260, 166375, 722563, 508514, 190633, 225813, 9627, 235208, 431789, 278811, 831732, 46563, 797046, 563316, 849951, 18687, 635062, 422111, 48335, 726830, 756225, 93789, 573146, 553092};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 138.19483562236647;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 6066;
    int walk = 660406;
    vector<int> width = {3801, 208646, 209076, 42137, 486026, 381343, 519655, 51888, 405816, 672003, 621919, 524841, 397831, 141243, 534005, 535952, 376160, 242932, 10563, 51990, 446384, 468993, 258663, 884366, 540519, 725335, 409092, 487598, 503226, 954191};
    vector<int> speed = {816321, 816148, 318690, 545000, 925448, 690046, 355162, 516035, 33224, 850641, 27940, 66533, 968244, 812115, 21317, 727992, 731394, 705841, 371844, 24522, 120492, 429177, 249712, 888653, 799090, 237793, 568471, 266389, 406998, 806399};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 91.6908484667679;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int length = 79983;
    int walk = 379229;
    vector<int> width = {732814, 781425, 175554};
    vector<int> speed = {840598, 961520, 741657};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9233143906977168;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int length = 52135;
    int walk = 491916;
    vector<int> width = {600615, 258511, 460115, 768281, 938369, 539814, 738816, 767317, 211279, 789369, 48303, 92425, 795261, 357721, 609023, 552072, 882685, 560827, 293010, 887371, 331394, 909691, 440526, 153197, 63430, 692501, 177503, 846573, 374917, 632427, 791346, 101360, 911040, 21378, 214844, 761276, 26939, 67972, 764337, 707838, 576063, 943167};
    vector<int> speed = {994381, 558341, 855321, 778149, 561422, 676228, 83929, 875914, 448888, 944852, 932564, 596201, 161040, 140400, 176290, 864224, 695842, 806391, 742432, 123311, 618107, 800558, 53871, 272189, 362223, 851771, 505076, 791314, 93972, 535211, 643862, 780830, 753477, 421421, 731011, 515249, 189216, 602836, 277035, 458625, 465416, 336601};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 68.36918134556402;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int length = 60835;
    int walk = 18216;
    vector<int> width = {966679, 660356, 282851, 618654, 445645, 737449, 483859, 416870};
    vector<int> speed = {619680, 980213, 817152, 601516, 178326, 316266, 135633, 353769};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 13.185628402499336;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int length = 35260;
    int walk = 547091;
    vector<int> width = {722583, 747393, 998011, 823614, 267060, 730104, 161076, 445088, 855427, 662298, 191377, 259062, 866827, 531362, 43564, 618462, 58198, 414320, 232801, 429656, 939763, 770438, 653584, 606027, 644404, 899918, 227743};
    vector<int> speed = {448704, 477233, 886354, 78134, 979237, 311171, 229121, 186818, 781515, 844234, 566961, 742579, 729768, 627752, 443544, 670461, 898197, 489667, 139474, 931866, 496017, 434055, 997278, 572486, 237885, 16866, 157345};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 92.10641433748859;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int length = 74210;
    int walk = 830431;
    vector<int> width = {155169, 666515, 320095, 57642, 888971, 271168};
    vector<int> speed = {524236, 203210, 350382, 873047, 643544, 342882};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.730359627541844;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int length = 80542;
    int walk = 138728;
    vector<int> width = {844407, 632530, 937032, 822405, 412750, 206694, 820367, 651133, 727411, 393625, 244122, 107714, 367475, 541232, 836747, 505594, 491810, 652113, 268804, 64814, 962966, 703497, 852976, 277580, 873706, 738503, 390650, 873253, 681213, 228959, 454291, 652591, 161712, 816456, 539120};
    vector<int> speed = {938756, 415851, 619934, 831370, 192289, 423449, 757152, 526173, 414632, 919975, 277427, 679273, 888670, 608969, 947485, 10804, 305262, 786485, 866571, 406854, 194148, 104997, 844492, 897195, 758003, 281370, 26772, 904757, 739439, 797588, 594938, 332023, 486548, 938651, 278522};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 104.37900168238993;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int length = 29035;
    int walk = 887933;
    vector<int> width = {934452};
    vector<int> speed = {938957};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9956824161202962;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int length = 75918;
    int walk = 459197;
    vector<int> width = {360222, 863883, 155065, 683846, 176098, 774494, 396165, 902354, 307074, 888661, 822843, 74174, 824810, 761409, 192633, 668254, 496652, 505432, 88610, 776617, 281884, 758260, 760924, 389179, 83026, 748242, 673683, 948243, 211820, 566996, 298869, 379158, 601385, 171967, 116340, 130827, 126286, 127678, 516360, 732765};
    vector<int> speed = {522276, 766813, 194922, 649244, 331192, 719951, 156890, 35259, 863514, 537641, 383706, 608596, 924191, 222500, 838704, 949536, 424736, 25311, 825256, 677823, 348729, 372442, 158223, 762614, 595594, 860924, 368378, 349100, 112120, 65102, 433085, 332908, 877549, 607166, 761716, 426342, 266516, 580829, 288957, 800493};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 96.2733306093386;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int length = 44639;
    int walk = 181282;
    vector<int> width = {932283, 577601, 975140, 17302, 297321, 607476, 827556, 148343, 695159, 210036, 149569, 64012, 279882, 712065, 606017, 897417, 960873, 77153, 274703, 805220, 403199, 857884, 749879, 240024, 791004, 755647, 82220, 912675, 518196, 804633, 990659, 271433, 412830, 810433, 517621, 703631, 331926, 544526, 472609, 722368, 363132, 766941, 515719, 506155};
    vector<int> speed = {626323, 529039, 422478, 415203, 641474, 657480, 489536, 533438, 107414, 386737, 326088, 555670, 952446, 230775, 269691, 495435, 926606, 149962, 442060, 516799, 440829, 105183, 593174, 193817, 809128, 325422, 388758, 483395, 638988, 199669, 362734, 93228, 58959, 866547, 469156, 489863, 111416, 894893, 332001, 178313, 727922, 818029, 807026, 941807};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 76.65176262978477;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int length = 27213;
    int walk = 783934;
    vector<int> width = {524854, 776509, 165105, 57022, 842465, 197849, 218843, 572231, 411190, 210205, 478101, 442692, 412545, 49449, 577659, 275062, 511824, 436992, 368301, 794114, 996981, 398602, 458257, 633458, 607751, 75922, 591567, 774644, 357026, 908168, 330963, 995609, 886434, 158784, 987599, 631640, 421100, 41649};
    vector<int> speed = {830518, 165257, 750181, 356536, 59266, 95466, 929465, 100946, 728559, 726557, 108309, 82917, 887166, 523368, 340909, 707128, 840243, 434356, 996984, 204470, 806999, 732942, 550895, 297199, 578550, 768617, 2257, 274967, 767394, 302106, 249185, 637446, 213615, 357338, 68519, 180214, 596917, 762952};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 347.4668330243062;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int length = 15339;
    int walk = 574408;
    vector<int> width = {170597, 602109, 208511, 583204, 737750, 847984, 163202, 127827, 533349, 181210, 121311, 576517, 296640, 998358, 385411, 278696, 729529};
    vector<int> speed = {856066, 248771, 60140, 962820, 368321, 408534, 948870, 760636, 695162, 887961, 180526, 324319, 188055, 623753, 959202, 179277, 954247};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 20.430950343119818;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int length = 34572;
    int walk = 243745;
    vector<int> width = {53693, 487337, 395505, 3655, 819247, 748427, 614425, 420619, 867031, 558339, 687272, 198473, 320885, 412803, 983020, 651671, 193035, 954531, 440827, 876655, 553376, 993759, 854446, 260909, 363262, 513559, 321377, 369877, 785844, 372878, 479732, 146379, 735252, 674668, 345037, 742170, 295414, 126396, 98452, 268718, 115571, 123503, 138166, 606297, 445931};
    vector<int> speed = {210519, 157218, 263058, 994368, 182444, 139151, 415857, 4888, 286218, 642676, 935540, 26143, 397617, 21326, 470398, 574339, 11460, 242334, 998354, 944438, 576715, 305128, 658268, 170287, 373746, 710133, 148393, 526249, 950023, 723474, 207530, 522339, 622015, 699919, 965941, 539358, 757425, 448321, 330564, 972899, 246618, 458432, 665716, 223418, 122520};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 187.99432930124428;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int length = 15529;
    int walk = 712838;
    vector<int> width = {878447, 560542, 232802, 425761, 672263, 592193, 747215, 926427, 203371, 528892, 805372, 574009, 763467, 973629, 564091, 82973, 57916, 748658, 425345, 66279, 520883, 399953, 683815, 720895, 532493, 653394, 592747, 727183, 711050, 979123, 21744, 75719, 361933, 770804, 41337, 681879, 230942, 116888, 533042};
    vector<int> speed = {575288, 832169, 818218, 612648, 877412, 47676, 882421, 446924, 517209, 367308, 289611, 424948, 956890, 687153, 914943, 108122, 204846, 690597, 944235, 935899, 715295, 42441, 68523, 432569, 887100, 575328, 516896, 439193, 104664, 247890, 580910, 716102, 17544, 136811, 239422, 832364, 9641, 528281, 914748};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 119.97566089845492;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int length = 3294;
    int walk = 292376;
    vector<int> width = {558554, 178896, 351096, 679531, 992140, 732061, 270127, 25953, 649802, 254531, 509033, 139476, 929553, 418978, 885268, 586920, 684386, 519681, 582114, 58275, 894977};
    vector<int> speed = {17033, 912075, 686769, 892152, 288328, 589256, 139875, 777426, 404079, 314264, 564331, 189152, 888916, 212607, 32161, 454071, 926001, 356355, 921538, 617839, 251491};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 83.28404898429555;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int length = 93664;
    int walk = 945766;
    vector<int> width = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> speed = {1495, 999977, 999987, 999131, 2, 578, 974063, 999992, 61, 462198, 2093, 987141, 999989, 994346, 942737, 2735, 11618, 999831, 999957, 995595, 999992, 999976, 8505, 2, 169, 999904, 993266, 1, 998098, 999992, 6221, 999799, 999987, 109523, 727765, 151, 1, 994031, 73570, 105921, 275968, 15, 999962, 999080};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1929115458550874;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int length = 99540;
    int walk = 1000000;
    vector<int> width = {999976, 324424, 1510, 999945, 978019, 872074, 982625, 999972, 11015, 597, 999974, 698864, 190, 999248, 999730, 993698, 12, 6, 827, 851, 1021, 442722, 145763, 706928, 100, 999975, 637467};
    vector<int> speed = {1, 1, 4, 6, 31, 20, 12, 38, 37, 37, 34, 4, 8, 38, 37, 29, 37, 13, 26, 2, 37, 38, 37, 9, 2, 38, 14};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 2133355.8864363628;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int length = 100000;
    int walk = 1525;
    vector<int> width = {90120, 4363, 56262, 84672, 88078, 59494, 50815, 13815, 58283, 76277, 17977, 77441, 80970, 46347, 88603, 82682, 73, 36177, 56149, 7292, 87559, 98815, 26708, 97544, 89659, 64696, 83523, 69262, 2348, 74997, 49131, 17521, 74848, 64569, 8599, 3586, 49720, 37581, 56758, 22026, 2288, 22088, 94226, 52852, 41525, 55972, 10588, 4562, 25122, 64255};
    vector<int> speed = {65201, 6267, 41162, 52971, 80605, 50224, 10367, 21473, 28634, 32581, 95297, 22060, 40221, 73029, 6820, 13830, 50452, 7176, 96853, 16571, 61769, 76360, 88108, 13648, 75442, 8818, 25819, 55485, 28615, 58319, 20377, 3162, 91463, 24893, 72341, 54494, 37041, 37053, 39696, 21511, 29711, 38598, 27548, 94728, 9786, 56522, 88714, 6823, 45454, 38750};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 102.42425459503178;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 55555, 100000, 100000, 100000, 100000, 100000, 11111, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> speed = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 55555, 100000, 100000, 100000, 100000, 100000, 11111, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.01034637095963;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 999999};
    vector<int> speed = {200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 999999, 100000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 17.072493025989594;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> speed = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 48.000104166559;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int length = 100000;
    int walk = 2000;
    vector<int> width = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> speed = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 453.7671629098141;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int length = 100000;
    int walk = 1525;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393};
    vector<int> speed = {1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 221.95424957580602;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int length = 100000;
    int walk = 330000;
    vector<int> width = {714501, 423725, 325359, 808465, 588146, 8828, 752492, 851943, 469437, 526605, 864154, 356383, 490717, 995896, 325727, 683539, 827913, 370300, 129895, 519812, 334334, 540665, 519712, 102869, 531645, 216758, 196860, 145742, 928779, 115036, 81843, 246107, 288943, 470649, 295806, 486730, 855351, 223102, 579549, 140624, 707955, 203841, 919377, 818309, 240440, 43324, 205539, 778083, 744542, 687116};
    vector<int> speed = {477659, 537931, 266307, 558387, 700746, 587073, 645830, 879574, 120513, 565291, 170637, 384768, 975575, 4053, 201151, 133725, 915431, 454192, 235338, 636288, 106384, 248910, 697759, 90589, 528947, 205031, 245169, 832592, 385656, 126360, 988538, 542484, 44042, 288351, 342837, 979021, 96022, 159200, 400485, 996735, 698000, 403939, 803789, 64468, 310894, 758484, 826422, 926618, 25515, 895617};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 357.56331935486463;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> speed = {2, 8, 15, 1, 10, 5, 19, 19, 3, 5, 6, 6, 2, 8, 2, 12, 16, 3, 8, 17, 12, 5, 3, 14, 13, 3, 2, 17, 19, 16, 8, 7, 12, 19, 10, 13, 8, 20, 16, 15, 4, 12, 3, 14, 14, 5, 2, 12, 14, 9};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 9184212.314022698;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int length = 100000;
    int walk = 2;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895};
    vector<int> speed = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.27331072303792;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int length = 100000;
    int walk = 38;
    vector<int> width = {7719, 21238, 2437, 8855, 11797, 8365, 32285, 10450, 30612, 5853, 28100, 1142, 281, 20537, 15921, 8945, 26285, 2997, 14680, 20976, 31891, 21655, 25906, 18457, 1323, 28881, 2240, 9725, 32278, 2446, 590, 840, 18587, 16907, 21237, 23611, 12617, 12456, 867, 29533, 6878, 28223, 17887, 31597, 20584, 12212, 31111, 7578, 17066, 7629};
    vector<int> speed = {29404, 12279, 13505, 24388, 11649, 12329, 7176, 2331, 19264, 22114, 14136, 26928, 1102, 21652, 8404, 24337, 27856, 5598, 24772, 14097, 13213, 4683, 16703, 15260, 15942, 2747, 27375, 28871, 18004, 16673, 3152, 11819, 23504, 239, 4186, 2804, 28937, 3023, 10335, 20533, 21393, 16020, 11574, 25983, 13961, 624, 7065, 27569, 12830, 24167};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 170.88726220997665;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int length = 71340;
    int walk = 1525;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393};
    vector<int> speed = {1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057, 1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 431.12935569413264;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int length = 100000;
    int walk = 111;
    vector<int> width = {1010, 1002, 1006, 1000, 1000, 1015, 1019, 1012, 1012, 1017, 1004, 1005, 1009, 1012, 1013, 1008, 1005, 1015, 1004, 1018, 1008, 1018, 1000, 1012, 1004, 1009, 1007, 1002, 1007, 1012, 1002, 1010, 1018, 1017, 1002, 1011, 1019, 1001, 1017, 1012, 1009, 1015, 1001, 1011, 1006, 1018, 1000, 1014, 1010, 1001};
    vector<int> speed = {100, 97, 98, 99, 96, 98, 95, 95, 98, 99, 96, 97, 95, 98, 96, 96, 98, 97, 97, 100, 97, 95, 99, 99, 95, 100, 97, 96, 99, 96, 98, 97, 95, 98, 96, 96, 95, 95, 100, 99, 96, 95, 95, 96, 100, 96, 100, 100, 95, 99};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1151.5826189058726;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    vector<int> speed = {25547, 27644, 32662, 32757, 20037, 12859, 8723, 9741, 27529, 778, 12316, 3035, 22190, 1842, 288, 30106, 9040, 8942, 19264, 22648, 27446, 23805, 15890, 6729, 24370, 15350, 15006, 31101, 24393, 3548, 19629, 12623, 24084, 19954, 18756, 11840, 4966, 7376, 13931, 26308, 16944, 32439, 24626, 11323, 5537, 21538, 16118, 2082, 22929, 16541};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 140.11196889011424;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int length = 100000;
    int walk = 22;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> speed = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.334488951394675;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> speed = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.000099999899945;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000};
    vector<int> speed = {1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1004987.562112089;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1234, 123, 41, 234, 123, 41, 234, 1, 234, 123, 4, 1234, 12, 34, 1234, 1, 41, 324, 14, 12, 34, 123, 41, 234, 12, 34, 1234, 12, 34, 1243, 12, 43, 1234, 12, 431, 234, 1243, 1, 234, 1243, 12, 34, 1243, 123, 4, 1234, 123, 41, 243, 1234};
    vector<int> speed = {11234, 123, 41234, 12, 341, 234, 12, 34, 1234, 1, 234, 12, 41, 234, 123, 41, 234, 123, 41, 234, 1234, 12, 34, 1234, 123, 41, 234, 1234, 1, 24, 123, 41, 234, 1234, 12, 34, 1234, 123, 41, 234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 451.2461327894735;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int length = 100000;
    int walk = 123;
    vector<int> width = {100000, 1000000};
    vector<int> speed = {123, 456};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 3016.642921511225;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int length = 100000;
    int walk = 555555;
    vector<int> width = {309242, 922385, 206224, 48504, 623997, 467068, 268614, 622523, 842042, 177295, 858985, 646151, 291468, 118876, 795713, 713671, 374877, 362597, 671543, 264826, 305866, 519208, 494843, 66759, 250500, 295806, 383239, 451905, 391064, 139754, 70176, 332862, 557162, 42126, 435536, 805987, 183096, 416793, 968158, 370442, 725456, 507880, 890923, 145918, 465871, 772451, 78295, 310513, 484521, 732854};
    vector<int> speed = {549071, 204462, 406102, 600171, 423929, 932743, 212439, 621629, 752080, 929138, 395538, 925810, 453694, 224720, 90948, 454828, 910062, 354683, 219835, 349139, 476648, 849779, 723749, 926933, 930867, 534824, 233098, 521720, 241838, 188271, 5169, 329518, 887451, 955904, 12055, 802549, 85949, 578070, 992921, 936529, 882230, 470783, 286662, 377620, 951822, 29232, 414361, 897280, 847117, 332570};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 130.7534909166713;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1000000};
    vector<int> speed = {1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.004987562112089;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int length = 10;
    int walk = 3;
    vector<int> width = {5, 2, 1000000};
    vector<int> speed = {5, 2, 7};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 142859.1428642857;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int length = 100000;
    int walk = 948900;
    vector<int> width = {948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922};
    vector<int> speed = {948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948924, 948925, 948923, 948912, 948915, 948929, 948931, 948935, 948928, 948922, 948913, 948991, 948924};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.000052048634124;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int length = 100000;
    int walk = 999999;
    vector<int> width = {89384, 30887, 92778, 36916, 47794, 38336, 85387, 60493, 16650, 41422, 2363, 90028, 68691, 20060, 97764, 13927, 80541, 83427, 89173, 55737, 5212, 95369, 2568, 56430, 65783, 21531, 22863, 65124, 74068, 3136, 13930, 79803, 34023, 23059, 33070, 98168, 61394, 18457, 75012, 78043, 76230, 77374, 84422, 44920, 13785, 98538, 75199, 94325, 98316, 64371};
    vector<int> speed = {66414, 3527, 76092, 68981, 59957, 41874, 6863, 99171, 6997, 97282, 2306, 20926, 77085, 36328, 60337, 26506, 50847, 21730, 61314, 25858, 16125, 53896, 19583, 546, 98815, 33368, 15435, 90365, 44044, 13751, 71088, 26809, 17277, 47179, 95789, 93585, 5404, 2652, 92755, 12400, 99933, 95061, 49677, 93369, 47740, 10013, 36227, 98587, 48095, 97540};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 210.47867551386378;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> speed = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.000099999899945;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int length = 100000;
    int walk = 1654;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 6656, 2303, 1185, 77414, 5363};
    vector<int> speed = {1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057, 1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057, 4423, 1729, 6605, 8353, 1277};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 448.1367839921127;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {757147, 851000, 413356, 971124, 598368, 567225, 749387, 890851, 766290, 239572, 38164, 597006, 615544, 51436, 289610, 341522, 427798, 215528, 16433, 544290, 447133, 90226, 426872, 752251, 41604, 221268, 909134, 655783, 970743, 417562, 379060, 873980, 670528, 835680, 291072, 352030, 923810, 79500, 701606, 546364, 776867, 572136, 71040, 629216, 496748, 646416, 840198, 255906, 557676, 268589};
    vector<int> speed = {757147, 851000, 413356, 971124, 598368, 567225, 749387, 890851, 766290, 239572, 38164, 597006, 615544, 51436, 289610, 341522, 427798, 215528, 16433, 544290, 447133, 90226, 426872, 752251, 41604, 221268, 909134, 655783, 970743, 417562, 379060, 873980, 670528, 835680, 291072, 352030, 923810, 79500, 701606, 546364, 776867, 572136, 71040, 629216, 496748, 646416, 840198, 255906, 557676, 268589};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.000294070037974;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {100000};
    vector<int> speed = {100000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int length = 100000;
    int walk = 1525;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    vector<int> speed = {1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 251.95424957580602;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int length = 1337;
    int walk = 2;
    vector<int> width = {1000000, 1000000, 1000000, 1000000};
    vector<int> speed = {11, 12, 13, 14};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 322594.09046977374;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {605416, 88034, 962834, 293459, 219599, 968623, 576920, 861200, 736725, 774327, 93596, 746320, 408042, 643729, 403579, 409872, 480222, 339036, 461596, 768558, 761569, 206125, 770182, 633769, 867915, 482810, 729575, 848198, 833848, 646455, 301538, 787796, 929897, 394355, 713921, 128059, 316806, 86407, 980952, 143569, 24812, 456154, 752349, 72510, 102554, 483267, 315358, 496113, 46129, 233024};
    vector<int> speed = {16808, 475250, 650074, 943659, 108931, 211273, 27545, 850879, 777924, 237710, 564441, 438166, 484493, 243043, 807988, 522504, 282328, 531730, 378841, 542613, 544304, 833170, 817710, 97158, 129561, 570934, 493100, 280279, 351817, 795336, 899098, 807827, 613513, 929268, 723811, 877634, 580980, 379150, 236580, 558822, 511968, 10673, 901394, 819337, 125486, 91746, 425229, 894092, 640195, 186358};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 168.69492069507504;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int length = 100000;
    int walk = 500000;
    vector<int> width = {805565, 503129, 462, 53848, 792248, 20063, 58917, 882932, 814151, 334826, 699964, 477030, 640125, 845840, 275010, 767686, 835583, 369218, 595239, 410288, 925025, 467373, 372942, 138855, 584733, 153902, 415574, 91345, 273849, 917391, 754665, 560348, 517755, 101526, 338055, 984377, 394544, 554881, 391434, 636585, 643582, 120957, 63965, 390564, 214530, 977542, 512794, 147009, 5891, 54183};
    vector<int> speed = {152578, 990356, 4051, 757538, 398642, 911133, 26940, 16592, 866230, 977588, 800863, 223220, 653295, 169271, 154704, 988287, 30602, 695613, 702649, 759454, 590453, 514109, 504681, 254099, 664095, 935608, 843587, 349225, 607974, 658278, 437812, 539949, 380222, 307195, 121461, 329172, 681356, 573078, 265889, 943213, 816917, 341563, 991728, 581704, 354846, 783518, 525887, 4753, 596663, 237213};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 162.63097983056846;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int length = 100000;
    int walk = 123;
    vector<int> width = {396733, 307727, 431168, 381771, 744898, 730411, 444684, 245646, 348269, 678204, 995188, 260475, 679533, 439055, 959929, 468393, 846919, 876521, 421520, 138328, 423870, 180782, 305897, 637840, 71160, 501314, 647967, 48809, 544020, 633130, 613115, 191570, 193442, 671661, 935030, 105854, 868664, 825752, 743738, 451958, 206957, 383928, 852486, 741819, 657174, 165991, 448084, 787262, 225135, 660172};
    vector<int> speed = {396733, 307727, 431168, 381771, 744898, 730411, 444684, 245646, 348269, 678204, 995188, 260475, 679533, 439055, 959929, 468393, 846919, 876521, 421520, 138328, 423870, 180782, 305897, 637840, 71160, 501314, 647967, 48809, 544020, 633130, 613115, 191570, 193442, 671661, 935030, 105854, 868664, 825752, 743738, 451958, 206957, 383928, 852486, 741819, 657174, 165991, 448084, 787262, 225135, 660172};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0003058102113;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int length = 71340;
    int walk = 1525;
    vector<int> width = {999999, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 266970, 18812, 25655, 13620, 28926, 923930};
    vector<int> speed = {1620, 1477, 2837, 2590, 1692, 2270, 1655, 1078, 2683, 1475, 1383, 1153, 1862, 1770, 1671, 2318, 2197, 1768, 1979, 1057};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1831.6275474963156;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int length = 100000;
    int walk = 5000;
    vector<int> width = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    vector<int> speed = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 53.851648071345075;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int length = 100000;
    int walk = 135643;
    vector<int> width = {861653, 116132, 361674, 343683, 847447, 829067, 229654, 596490, 949863, 602541, 590350, 38799, 969264, 861671, 626818, 925911, 181873, 774132, 730727, 980167, 929921, 885891, 330603, 809858, 51120, 227201, 229375, 769132, 973894, 488212, 300667, 332117, 158288, 535414, 992725, 984154, 743525, 740633, 489839, 33436, 399780, 895085, 797140, 646009, 153053, 636504, 213811, 928215, 658073, 335391};
    vector<int> speed = {383090, 149474, 12367, 326743, 212787, 876673, 722046, 370992, 767121, 787123, 386378, 131970, 98417, 624203, 779652, 413472, 445399, 320896, 899057, 283732, 681268, 764823, 418476, 410049, 606434, 892349, 137890, 795079, 244995, 519009, 815668, 841884, 443940, 362115, 316136, 901679, 568733, 667784, 121360, 939721, 898623, 783576, 283547, 687191, 628333, 165475, 720836, 222360, 258130, 242733};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 109.68643062624503;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {100000};
    vector<int> speed = {1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> speed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.01249999915;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int length = 100000;
    int walk = 20;
    vector<int> width = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10344, 24588, 22264, 12709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895};
    vector<int> speed = {11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10344, 24588, 22264, 12709, 11181, 15292, 28895, 15039, 18744, 19985, 13795, 26697, 18812, 25655, 13620, 28926, 12393, 11567, 19763, 11026, 10444, 24588, 22263, 17709, 11181, 15292, 28895};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.27562291816409;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int length = 100000;
    int walk = 999995;
    vector<int> width = {999997, 999996, 999997, 999993, 999999, 999993, 1000000, 999997, 999994, 999992, 999996, 999998, 999994, 999999, 999991, 999996, 999998, 999994, 999992, 999999, 999993, 999995, 999999, 1000000, 999993, 999997, 999999, 999994, 999992, 999991, 999999, 1000000, 999994, 999994, 999995, 999998, 999998, 999995, 999999, 999991, 999998, 999997, 999996, 999997, 999996, 999996, 999993, 999998, 999997, 999992};
    vector<int> speed = {999998, 999991, 999992, 999998, 999992, 999994, 999996, 999998, 999994, 999991, 999996, 999994, 999996, 999998, 999998, 999992, 999994, 999998, 1000000, 999996, 999995, 1000000, 999993, 999994, 999999, 999992, 999992, 999991, 999992, 999995, 999998, 999999, 999993, 999995, 999992, 999991, 999999, 999998, 999994, 999997, 1000000, 999995, 999996, 999996, 999993, 999992, 999994, 999996, 999991, 1000000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.00013300139701;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {20771, 905, 35269, 42465, 6664, 13683, 4891, 41554, 4967, 39042, 35720, 35397, 39461, 29532, 20047, 16014, 32436, 7881, 46515, 20613, 4414, 49902, 17379, 14254, 25307, 19911, 4132, 18422, 18450, 433, 27020, 17707, 27099, 11057, 36970, 40152, 7043, 14772, 43764, 43916, 19193, 48260, 36904, 9430, 11461, 20372, 34196, 11791, 15448, 30025};
    vector<int> speed = {20771, 905, 35269, 42465, 6664, 13683, 4891, 41554, 4967, 39042, 35720, 35397, 39461, 29532, 20047, 16014, 32436, 7881, 46515, 20613, 4414, 49902, 17379, 14254, 25307, 19911, 4132, 18422, 18450, 433, 27020, 17707, 27099, 11057, 36970, 40152, 7043, 14772, 43764, 43916, 19193, 48260, 36904, 9430, 11461, 20372, 34196, 11791, 15448, 30025};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.13401895825042;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> speed = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 20450.403859215756;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int length = 100000;
    int walk = 42;
    vector<int> width = {18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869, 25548};
    vector<int> speed = {27645, 32663, 32758, 20038, 12860, 8724, 9742, 27530, 779, 12317, 3036, 22191, 1843, 289, 30107, 9041, 8943, 19265, 22649, 27447, 23806, 15891, 6730, 24371, 15351, 15007, 31102, 24394, 3549, 19630, 12624, 24085, 19955, 18757, 11841, 4967, 7377, 13932, 26309, 16945, 32440, 24627, 11324, 5538, 21539, 16119, 2083, 22930, 16542, 4834};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 145.2253757274194;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {551252, 2, 51251, 521, 521, 53251, 632, 623, 432, 63, 632, 532, 632, 523, 632521, 521, 61, 632, 7834, 623, 532, 623, 623, 53263, 252, 52, 523, 6, 2632, 62, 62, 623, 62, 62, 632, 62, 62, 623, 623, 62, 62, 732, 72, 623623, 6236, 236, 6326, 63};
    vector<int> speed = {551252, 2, 512, 521, 521, 53251, 632, 623, 432, 63, 632, 532, 632, 523, 632521, 521, 61, 632, 7834, 623, 532, 623, 623, 53263, 252, 52, 523, 6, 2632, 62, 62, 623, 62, 62, 632, 62, 62, 623, 623, 62, 62, 732, 72, 623623, 6236, 236, 6326, 63};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 147.10415671397095;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int length = 100000;
    int walk = 1;
    vector<int> width = {1};
    vector<int> speed = {100000};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00000000005;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int length = 100000;
    int walk = 1000000;
    vector<int> width = {435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34};
    vector<int> speed = {435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34, 435, 345, 435, 134, 5435, 459, 432, 234, 42, 34};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0999261693261;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int length = 30898;
    int walk = 654581;
    vector<int> width = {303818, 455633, 968965, 837052, 916114, 343566, 206166, 486891, 434517, 189690, 324390, 971311, 413942, 423129, 611912, 423107, 886981, 605919, 236105, 231980, 176434, 642571, 336129, 659489, 175137, 366527, 454784, 473464, 228605, 355675, 935344, 102526, 888643, 629547, 417329, 90206, 71841, 159905, 831973, 313908, 107540, 525646, 758062, 394612, 925187, 219579, 789684, 467614, 169256, 991562};
    vector<int> speed = {719051, 445418, 736622, 365090, 277048, 616571, 437483, 678179, 673369, 720000, 990127, 888733, 234412, 920421, 706481, 479387, 20474, 106448, 578089, 173130, 772790, 388001, 868561, 646635, 42723, 888574, 103774, 649794, 76125, 372021, 23150, 219551, 158496, 44012, 563466, 955075, 392378, 147334, 213447, 6979, 829056, 369472, 537338, 394014, 642002, 257554, 456467, 5004, 567724, 712600};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 298.9340377522674;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int length = 100000;
    int walk = 100;
    vector<int> width = {42, 6335, 19170, 11479, 26963, 5706, 23282, 9962, 2996, 4828, 32392, 3903, 293, 17422, 19719, 5448, 14772, 1870, 25668, 17036, 28704, 31323, 17674, 15142, 28254, 25548, 32663, 20038, 8724, 27530, 12317, 22191, 289, 9041, 19265, 27447, 15891, 24371, 15007, 24394, 19630, 24085, 18757, 4967, 13932, 16945, 24627, 5538, 16119, 22930};
    vector<int> speed = {18468, 26501, 15725, 29359, 24465, 28146, 16828, 492, 11943, 5437, 14605, 154, 12383, 18717, 19896, 21727, 11539, 19913, 26300, 9895, 23812, 30334, 4665, 7712, 6869, 27645, 32758, 12860, 9742, 779, 3036, 1843, 30107, 8943, 22649, 23806, 6730, 15351, 31102, 3549, 12624, 19955, 11841, 7377, 26309, 32440, 11324, 21539, 2083, 16542};
    EllysRivers* pObj = new EllysRivers();
    clock_t start = clock();
    double result = pObj->getMin(length, walk, width, speed);
    clock_t end = clock();
    delete pObj;
    double expected = 159.9935775516666;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=303644&rd=14735&pm=11912
********************************************************************************
// Another ugly solution by Olexiy  
#include <map>  
#include <set>  
#include <iostream>  
#include <sstream>  
#include <queue>  
#include <vector>  
#include <string>  
#include <math.h>  
#include <algorithm>  
#include <numeric>  
 
#ifdef __GNUC__  
typedef long long lint;  
typedef unsigned long long ulint;  
#else  
typedef __int64 lint;  
typedef unsigned __int64 ulint;  
#endif  
 
using namespace std;  
 
#define FOR(i, b) for(int i=0; i < b;i++)  
#define SFOR(i, i1, b) for(int i=i1; i < b;i++)  
#define ALL(C) C.begin(), C.end()  
 
typedef vector<string> VS;  
typedef vector<int> VI;  
typedef vector<double> VD;  
 
 
class EllysRivers  {  
public:  
  int N, L, walk; 
  VD speed, width; 
  double getMin(int length, int walk1, vector <int> width1, vector <int> speed1) {  
    
    N = width1.size(); 
    walk = walk1; 
    L = length; 
    double res = 0; 
    speed = VD(N); 
    width = VD(N, 0); 
    FOR(i, N) speed[i] = speed1[i]; 
    FOR(i, N) width[i] = width1[i]; 
    FOR(i, N) res += width[i] / speed1[i]; 
    VI have(N, 0); 
    FOR(q, L) { 
      int bi = -1; 
      double T = 1. / walk; 
      FOR(i, N) { 
        double delta = hypot(width[i], have[i] + 1) - hypot(width[i], have[i]); 
        delta /= speed[i]; 
        if (delta < T) { 
          bi = i; 
          T = delta; 
        } 
 
      } 
      if (bi != -1) { 
        have[bi]++; 
      } 
      res += T; 
    } 
    return res; 
  }  
 
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/