/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2299
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

class BagOfDevouring {
public:
    double expectedYield(vector<int> values, vector<int> weights);
};

double BagOfDevouring::expectedYield(vector<int> values, vector<int> weights) {
    double ret;
    return ret;
}


int test0() {
    vector<int> values = {100, 100};
    vector<int> weights = {100, 100};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> values = {100, 200, 300};
    vector<int> weights = {100, 200, 300};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 462.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> values = {100, 200, 300};
    vector<int> weights = {300, 200, 100};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 470.8333333333333;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> values = {};
    vector<int> weights = {};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> values = {10, 100, 150, 250, 500, 750, 1000, 2500, 5000, 7500, 10000};
    vector<int> weights = {100, 200, 300, 400, 500, 1000, 2000, 1500, 3000, 6000, 4000};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 20622.364509064962;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> values = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
    vector<int> weights = {20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 817.1404067662378;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> values = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
    vector<int> weights = {150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 900.8865923397088;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> values = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> weights = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 84.26482716444859;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> values = {1};
    vector<int> weights = {10000};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> values = {7810, 4740, 8990, 9520, 1850};
    vector<int> weights = {8600, 4700, 800, 2100, 6600};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 24670.9859615711;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> values = {2880, 3210, 3660, 5190, 520, 290, 7220, 1150, 720, 5210, 3980, 6150};
    vector<int> weights = {6400, 100, 600, 1500, 5200, 8100, 2200, 1500, 4000, 8500, 2200, 7900};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 30299.674342961192;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> values = {5660, 7590, 5240, 2130, 8340, 6510, 5920, 650, 540, 2470, 2120};
    vector<int> weights = {5700, 4600, 2700, 2800, 6500, 6200, 8300, 8000, 4500, 5400, 5500};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 33370.80090359164;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> values = {8620, 1590, 6760, 4610, 7140, 4030, 960, 7610, 5180, 4790, 440, 2930, 1300, 2510};
    vector<int> weights = {8800, 6900, 1800, 4300, 9600, 2100, 6200, 4700, 5200, 8500, 200, 5500, 2400, 5300};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 40090.867155965025;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> values = {4250, 8380, 6390};
    vector<int> weights = {1600, 500, 5800};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 13842.727272727274;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> values = {1820, 7910, 3960, 690, 6900, 4670, 9120, 4650, 9980, 3750};
    vector<int> weights = {8000, 7700, 2200, 1900, 1, 4900, 4600, 7500, 6000, 1700};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 38831.84517398913;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> values = {9360, 5530, 5500, 6150, 4920, 7810, 6500, 270};
    vector<int> weights = {9200, 9700, 1800, 5100, 2000, 900, 4200, 6300};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 29378.128133491537;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> values = {9430, 3480, 1410, 1220};
    vector<int> weights = {4300, 400, 2100, 3400};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 12845.164865491652;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> values = {8980, 9710, 4800, 1210, 7100, 7190, 7400, 50, 820, 2190, 2080, 570, 9500, 950};
    vector<int> weights = {6000, 4500, 600, 5500, 800, 4500, 4200, 6300, 8800, 3700, 9800, 6300, 2400, 9300};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 50314.93824698791;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> values = {6680, 130, 2420, 9070, 880, 2490, 1500, 4550, 3000, 4610, 9860};
    vector<int> weights = {9100, 9600, 6500, 7000, 7500, 6400, 6500, 9000, 5500, 400, 2500};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 34868.998754852844;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> values = {9270, 8440, 2530, 1780, 3710, 1040, 3450, 7420, 4950, 360, 4770};
    vector<int> weights = {1000, 3900, 400, 4900, 2200, 300, 1600, 8900, 3800, 1100, 3600};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 33019.94275135963;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> values = {7190, 4840, 8210, 6020, 1230, 9840, 1850, 7420, 1510, 120, 370};
    vector<int> weights = {8200, 1100, 1200, 4500, 3400, 9500, 3600, 5700, 3000, 7500, 4800};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 37502.07809967664;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> values = {3900, 150, 3400, 3970, 6020, 9950, 1920, 7530, 9340, 4790, 6760, 7250, 5380, 9710};
    vector<int> weights = {8400, 8900, 3000, 2300, 9600, 9700, 7400, 7100, 400, 9300, 600, 2700, 5200, 9300};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 54258.87996225185;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> values = {2730, 6380, 3190, 9240, 2930};
    vector<int> weights = {3800, 700, 400, 4100, 4600};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 18519.54091051541;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> values = {7010, 4340, 1550, 1200, 2330, 3260, 2070, 3000, 8050, 6100};
    vector<int> weights = {9100, 5600, 2900, 9000, 7900, 2400, 4500, 8200, 4700, 6400};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 26567.346220650146;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> values = {1590, 3800, 3090, 4980, 8110, 3920, 9850};
    vector<int> weights = {3800, 7500, 3200, 8100, 7000, 3100, 4400};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 24356.841328941027;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> values = {8390, 360, 4370, 8340, 6590, 8320, 250, 780, 3590, 2440, 6210, 4260, 9470};
    vector<int> weights = {2800, 7300, 4200, 1100, 6800, 2500, 2600, 6700, 5600, 5300, 9000, 8300, 8400};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 45831.328118810256;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> values = {2200, 5500, 7600, 7300, 5400, 2700, 7200, 4100, 3800, 5900, 2000, 4500, 8200, 5500};
    vector<int> weights = {600, 5010, 4420, 8750, 5600, 9050, 9500, 8710, 6600, 7410, 9060, 9870, 7280, 8010};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 44424.50213799366;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> values = {8400, 5300, 200, 7900, 7600, 4100, 200, 300};
    vector<int> weights = {8280, 2130, 7540, 4270, 1920, 4330, 3820, 2230};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 26519.03812311085;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> values = {6900, 1800, 8700, 2800, 6100, 4600, 700, 2800, 6500, 1800, 2700, 6400, 6500, 1800};
    vector<int> weights = {2390, 6120, 1650, 9700, 9070, 2800, 7530, 9020, 3750, 5800, 8210, 3060, 6430, 4960};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 41991.078864479205;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> values = {9100, 5600, 7300, 3000, 3100, 3600, 100, 4600, 6300, 4800, 6500, 7800, 4300, 800, 2100};
    vector<int> weights = {860, 7510, 3560, 9810, 5220, 350, 1520, 3850, 1260, 4230, 7560, 8370, 4580, 6910, 5600};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 47790.259652051594;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> values = {2200, 1500, 400, 7300, 9800, 1100, 1200, 2100, 8600, 5500, 5600};
    vector<int> weights = {9730, 6020, 6430, 6240, 1290, 7980, 3990, 4040, 850, 4500, 1150};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 36389.20217641977;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> values = {5300, 7400, 4700, 4400, 9700, 7000, 4700, 9600, 5300, 600, 7500, 9200, 3700, 8600};
    vector<int> weights = {190, 2160, 4010, 4220, 8710, 8360, 2770, 1940, 1310, 160, 1370, 2700, 4710, 6520};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 55018.24909824502;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> values = {1200, 500, 5800, 7500, 8000, 4900, 4200, 4300, 4000, 4100, 7400};
    vector<int> weights = {1670, 7880, 450, 2500, 1070, 2400, 9610, 3740, 3270, 7320, 6290};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 36092.7227363707;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> values = {2900, 3000, 8300, 9600, 7700, 6600, 1500, 8000, 7700, 5400, 5900};
    vector<int> weights = {4120, 1970, 6660, 510, 3120, 5690, 5420, 6710, 5240, 1890, 4340};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 43867.58180147144;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> values = {5200, 5300, 3000, 5900, 4000, 9300, 5400, 1900, 1200, 2100, 7800};
    vector<int> weights = {5670, 4440, 7970, 3460, 6750, 9760, 4890, 4620, 7190, 3880, 2130};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 34969.76692888281;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> values = {6000, 9300, 4200, 3100, 2800, 2100, 7800, 8700};
    vector<int> weights = {8000, 8170, 460, 9750, 2600, 4930, 8420, 8190};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 28432.877576890463;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> values = {8700, 400, 2100, 4200, 6300, 6400, 100, 9400, 5500, 6000, 2100, 5400, 5500};
    vector<int> weights = {1600, 6650, 6220, 8710, 8360, 8530, 5140, 670, 4160, 7290, 2940, 1110, 9000};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 44225.946070729726;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> values = {700, 8000, 6500, 2200, 2300, 8800, 4500, 5400, 7100};
    vector<int> weights = {1360, 9050, 9820, 5830, 8360, 3170, 7620, 1470, 5200};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 30645.359136286446;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> values = {8300, 4000, 900, 6600, 4300, 5600, 4900, 1400, 2300, 7200, 4900};
    vector<int> weights = {7540, 7230, 5600, 6330, 5980, 2310, 3640, 9730, 6260, 3390, 1680};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 35029.97221585395;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> values = {5100, 3200, 9700, 1800, 4300, 2800, 2100};
    vector<int> weights = {5580, 870, 4360, 3250, 6980, 30, 80};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 20926.476878358302;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> values = {6200, 9100, 3600, 500, 5000, 6700, 2800, 3700, 3000, 9500, 5600, 6900, 9800, 300};
    vector<int> weights = {9120, 4410, 2380, 8230, 9640, 3250, 9700, 2590, 2000, 9290, 7500, 7750, 1720, 1490};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 49004.96888375229;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> values = {3700, 6200, 1900, 6800, 100, 7400, 2700, 4400};
    vector<int> weights = {8250, 3020, 630, 920, 1090, 1460, 2510, 6000};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 22595.56685641356;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> values = {400, 7300, 6600, 6300, 8400, 3300, 4200};
    vector<int> weights = {9110, 2040, 9330, 9780, 9710, 1040, 2090};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 25341.691630278263;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> values = {1940, 1965, 9618, 7795, 7792, 7881, 7614, 4367, 6252, 8533, 7594};
    vector<int> weights = {3115, 9496, 7665, 5270, 1319, 1028, 1677, 3794, 3123, 6352, 2313};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 47000.37813399441;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> values = {6092, 197, 170, 9499, 2520, 4945, 3254, 9687, 6180};
    vector<int> weights = {5885, 8418, 6963, 8288, 2377, 4238, 6303, 4524, 8837};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 31660.84370843751;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> values = {6840, 9937, 2006, 9095, 9972, 829, 8386, 8099, 7264, 3529, 6238, 3055};
    vector<int> weights = {7900, 2421, 3226, 7051, 1352, 833, 6678, 5303, 9124, 3661, 3746, 467};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 47197.37576340851;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> values = {7406, 8399, 9900, 2981, 6778, 7227, 5256, 5617, 8294, 7127, 868, 637, 3362};
    vector<int> weights = {6755, 2704, 9481, 2014, 8063, 5196, 3045, 8874, 1803, 3480, 7553, 2822, 1927};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 48705.534120604;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> values = {243, 4736, 2793, 2526, 7647, 4876, 2885, 618, 4235, 344, 6897, 4838, 6503, 4660, 365};
    vector<int> weights = {9586, 2051, 3088, 3305, 3134, 4463, 3756, 7765, 5082, 1739, 9576, 9217, 6598, 2583, 9284};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 39104.667477161674;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> values = {8962, 2979, 1520, 1337, 8014, 3023, 9452, 9781, 1914, 3483, 9736, 9809};
    vector<int> weights = {4406, 3127, 7092, 1293, 866, 1699, 1808, 9273, 9454, 8639, 7804, 6997};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 49572.84751516502;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> values = {7425, 4982, 1463, 4340, 749, 3762, 2003, 112, 2457, 2462, 1967, 3836, 1509};
    vector<int> weights = {346, 5147, 392, 7873, 4534, 2183, 7764, 4957, 1250, 51, 6992, 89, 9246};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 28356.31372661328;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> values = {4476, 1413, 9418, 6763, 6776, 2209, 9718, 9335, 6484, 5725, 3970, 803, 128};
    vector<int> weights = {8009, 3822, 4847, 6684, 1573, 8538, 7803, 4952, 337, 4822, 23, 6484, 4909};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 50058.565050500954;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> values = {8649, 2846, 5215, 2060, 4645, 2794, 9003, 5864};
    vector<int> weights = {7441, 7318, 3543, 7924, 3421, 3522, 6803, 512};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 27553.532112261473;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> values = {5916, 85, 8410};
    vector<int> weights = {5723, 4440, 6641};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 11074.45310578482;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> values = {2279, 7860, 1309, 7538, 4851, 4144, 6281, 1710, 2447, 9996, 9637, 7226, 1675, 3128, 8129};
    vector<int> weights = {2710, 2599, 5668, 5005, 2946, 1235, 9536, 7529, 4686, 1359, 1548, 5525, 3066, 1579, 152};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 56073.89883787567;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> values = {9399, 6708, 925, 7202, 8355, 9008, 5449, 8414, 767, 4284};
    vector<int> weights = {4997, 2698, 6651, 4936, 7713, 1942, 7943, 5988, 4605, 8418};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 40347.94228624079;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> values = {6638, 1439, 156, 7573, 7610, 6443, 1768, 4209};
    vector<int> weights = {5798, 4759, 2644, 8893, 786, 3731, 8832, 9753};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 26408.81454164018;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> values = {9372, 3237, 378, 1499, 4280, 9825, 6774, 2183, 7252, 6605, 946, 2451, 3104};
    vector<int> weights = {2313, 1342, 111, 9468, 629, 4682, 7083, 1000, 977, 4310, 5607, 8196, 605};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 41654.55901081119;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> values = {6633, 3262, 2799, 2620, 5237, 7082, 2187, 2536, 3825, 6438};
    vector<int> weights = {3559, 4388, 3757, 6242, 9235, 2592, 969, 6942, 6159, 1068};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 27453.04794280261;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> values = {8922, 8667, 6184, 8001, 5206, 9415, 4340, 765, 8802, 3091};
    vector<int> weights = {9872, 9257, 8638, 7727, 9836, 8485, 3514, 9435, 4056, 5617};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 40327.031677324594;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> values = {5127, 9828, 9069, 8498, 1747, 9664, 5657, 3646, 8591, 396, 7701, 9802, 2059};
    vector<int> weights = {4040, 4049, 342, 7527, 2260, 7037, 9730, 5923, 9424, 3689, 9966, 7935, 3388};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 54848.20896675611;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> values = {10, 100, 150, 250, 500, 750, 1000, 2500, 5000, 7500, 10000, 111, 122, 1344, 111};
    vector<int> weights = {10, 100, 150, 250, 500, 750, 1000, 2500, 5000, 7500, 10000, 111, 122, 1344, 111};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 21293.241001363935;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> values = {99, 100, 101};
    vector<int> weights = {1, 100, 9000};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 249.2685581991035;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> weights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 14.110689301407396;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> values = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> weights = {10, 50, 100, 200, 350, 500, 400, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 1};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 919.730649295849;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> values = {123, 234, 123, 42, 23, 42, 234, 234, 21, 23, 41, 12, 32, 34, 54};
    vector<int> weights = {12, 12, 34, 23, 52, 62, 76, 45, 23, 65, 76, 12, 32, 53, 35};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 1055.830901576136;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> values = {10, 100, 150, 250, 500, 750, 1000, 2500, 5000, 7500, 10000, 100, 200, 300, 400};
    vector<int> weights = {100, 200, 300, 400, 500, 1000, 2000, 1500, 3000, 6000, 4000, 100, 200, 300, 400};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 21670.5054641836;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> values = {1000, 999};
    vector<int> weights = {1, 9999};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 1989.09900990099;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> values = {10, 100, 150, 250, 500, 750, 1000, 2500, 5000, 7500, 10000};
    vector<int> weights = {100, 200, 300, 400, 500, 1000, 2000, 1500, 3000, 6000, 4000};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 20622.364509064962;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> values = {10, 100, 150, 250, 500, 750, 1000, 2500, 5000, 7500, 10000, 1000, 100, 1000, 100};
    vector<int> weights = {100, 200, 300, 400, 500, 1000, 2000, 1500, 3000, 6000, 4000, 1000, 100, 1000, 100};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 22535.043985055374;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> values = {10, 100, 150, 250, 500, 750, 1000, 2500, 5000, 7500, 10000, 88, 56, 956, 57};
    vector<int> weights = {100, 200, 300, 400, 500, 1000, 2000, 1500, 3000, 6000, 4000, 88, 56, 72, 856};
    BagOfDevouring* pObj = new BagOfDevouring();
    clock_t start = clock();
    double result = pObj->expectedYield(values, weights);
    clock_t end = clock();
    delete pObj;
    double expected = 22091.1749048458;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4740&pm=2299
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define ALL(x) (x).begin(),(x).end()
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
VI values, weights;
int n;
double cache[1<<15];
 
double f(int s);
 
double f2(int s) {
  if(s==0) return 0.0;
  int tot = 100;
  REP(i,n) if(s&(1<<i)) tot+=weights[i];
  double best = 0.0;
  REP(i,n) if(s&(1<<i)) {
    int s2 = s&~(1<<i);
    int tot2 = tot-weights[i];
    double v = f(s2) * 100.0 / tot2;
    REP(j,n) if(s2&(1<<j)) {
      v += double(weights[j]) * f(s2&~(1<<j)) / tot2;
    }
    best = max(best,values[i] + v);
  }
  return best;
}
 
double f(int s) {
  if(cache[s]<0) cache[s] = f2(s);
  return cache[s];
}
 
struct BagOfDevouring {
  // MAIN
  double expectedYield(vector <int> v, vector <int> w) {
    values=v; weights = w;
    n=size(v);
    REP(i,1<<n) cache[i] = -1;
    return f((1<<n)-1);
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/