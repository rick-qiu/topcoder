/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10917
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

class LinearTravellingSalesman {
public:
    int findMinimumDistance(vector<int> x, vector<int> y);
};

int LinearTravellingSalesman::findMinimumDistance(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 3, 5};
    vector<int> y = {2, 2, 2};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {3, 2, 1};
    vector<int> y = {3, 2, 1};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 100, 1000, 10000};
    vector<int> y = {0, 10, 100, 1000};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {80, 60, 70, 50};
    vector<int> y = {50, 70, 60, 80};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {7, 7, 7, 7, 7, 7, 7};
    vector<int> y = {105, 1231, 5663, 295, 3062, 380, 7777};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7672;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {3, 9987};
    vector<int> y = {6843, 6843};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9984;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {6843, 6843};
    vector<int> y = {3, 9987};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9984;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {0, 10000};
    vector<int> y = {0, 10000};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 0};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {5000, 4900, 4800, 4700, 4600, 4500, 4400, 4300, 4200, 4100, 4000, 3900, 3800, 3700, 3600, 3500, 3400, 3300, 3200, 3100, 3000, 2900, 2800, 2700, 2600, 2500, 2400, 2300, 2200, 2100, 2000, 1900, 1800, 1700, 1600, 1500, 1400, 1300, 1200, 1100, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100};
    vector<int> y = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4900;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {5000, 4881, 4762, 4643, 4524, 4405, 4286, 4167, 4048, 3929, 3810, 3691, 3572, 3453, 3334, 3215, 3096, 2977, 2858, 2739, 2620, 2501, 2382, 2263, 2144, 2025, 1906, 1787, 1668, 1549, 1430, 1311, 1192, 1073, 954, 835, 716, 597, 478, 359, 240, 121};
    vector<int> y = {5000, 5119, 5238, 5357, 5476, 5595, 5714, 5833, 5952, 6071, 6190, 6309, 6428, 6547, 6666, 6785, 6904, 7023, 7142, 7261, 7380, 7499, 7618, 7737, 7856, 7975, 8094, 8213, 8332, 8451, 8570, 8689, 8808, 8927, 9046, 9165, 9284, 9403, 9522, 9641, 9760, 9879};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9758;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    vector<int> y = {5000, 4667, 4334, 4001, 3668, 3335, 3002, 2669, 2336, 2003, 1670, 1337, 1004, 671, 338};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4662;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    vector<int> y = {5000, 5185, 5370, 5555, 5740, 5925, 6110, 6295, 6480, 6665, 6850, 7035, 7220, 7405, 7590, 7775, 7960, 8145, 8330, 8515, 8700, 8885, 9070, 9255, 9440, 9625, 9810};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4810;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {5000, 6250, 7500, 8750};
    vector<int> y = {5000, 3750, 2500, 1250};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7500;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {5000, 5125, 5250, 5375, 5500, 5625, 5750, 5875, 6000, 6125, 6250, 6375, 6500, 6625, 6750, 6875, 7000, 7125, 7250, 7375, 7500, 7625, 7750, 7875, 8000, 8125, 8250, 8375, 8500, 8625, 8750, 8875, 9000, 9125, 9250, 9375, 9500, 9625, 9750, 9875};
    vector<int> y = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4875;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033};
    vector<int> y = {5022, 5560, 4209, 3753, 4974, 2054, 9209, 3801, 207, 240, 5239, 2009, 1545, 2160, 637, 6632, 123, 4187, 671, 8526, 6142, 6762, 6333, 739, 9290, 1766, 6751, 3174, 702, 2704, 8424, 3009, 8900, 3300, 7162, 2967, 2812, 6873, 5038, 1556, 9673, 4280, 9080, 6407, 6056, 7760, 5730, 8376, 9839, 2086};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9716;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {5022, 5560, 4209, 3753, 4974, 2054, 9209, 3801, 207, 240, 5239, 2009, 1545, 2160, 637, 6632, 123, 4187, 671, 8526, 6142, 6762, 6333, 739, 9290, 1766, 6751, 3174, 702, 2704, 8424, 3009, 8900, 3300, 7162, 2967, 2812, 6873, 5038, 1556, 9673, 4280, 9080, 6407, 6056, 7760, 5730, 8376, 9839, 2086};
    vector<int> y = {9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033, 9033};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9716;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709};
    vector<int> y = {7203, 4947, 7524, 9670, 8177, 5283, 2919, 7085, 1403, 848, 8443, 1070, 4236, 5734, 7824, 7, 3278, 3538, 2396, 2910, 639, 75, 4768, 2835, 7479, 6648, 9932, 6820, 2993, 7236, 7416, 1616, 7313, 2418, 8178, 2347, 3045, 5691, 2712, 6764, 5432, 3341, 4875, 4731, 1099, 2065, 6927, 4413, 7370, 3086};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9925;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {7203, 4947, 7524, 9670, 8177, 5283, 2919, 7085, 1403, 848, 8443, 1070, 4236, 5734, 7824, 7, 3278, 3538, 2396, 2910, 639, 75, 4768, 2835, 7479, 6648, 9932, 6820, 2993, 7236, 7416, 1616, 7313, 2418, 8178, 2347, 3045, 5691, 2712, 6764, 5432, 3341, 4875, 4731, 1099, 2065, 6927, 4413, 7370, 3086};
    vector<int> y = {6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709, 6709};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9925;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {5919, 8443};
    vector<int> y = {8269, 555};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10238;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {1188, 7588, 9988, 5988};
    vector<int> y = {8891, 6851, 6086, 7361};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11605;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {8948, 8029, 4353, 1596, 7110, 9867};
    vector<int> y = {7753, 6902, 3498, 945, 6051, 8604};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15930;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {1713, 7537, 4625, 621, 1349, 8629, 9721, 5353};
    vector<int> y = {5979, 5851, 5915, 6003, 5987, 5827, 5803, 5899};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9300;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {5953, 7265, 6609, 6937, 6445, 5625, 7593, 5461, 5789, 6281};
    vector<int> y = {2155, 7891, 5023, 6457, 4306, 721, 9325, 4, 1438, 3589};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11453;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {8189, 9279, 7971, 8843, 9715, 9061, 7535, 7753, 7317, 8625, 9933, 8407};
    vector<int> y = {2600, 5815, 1957, 4529, 7101, 5172, 671, 1314, 28, 3886, 7744, 3243};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10332;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {3101, 7266, 9646, 6671, 4886, 126, 1911, 4291, 6076, 9051, 721, 2506, 8456, 5481};
    vector<int> y = {1200, 1242, 1266, 1236, 1218, 1170, 1188, 1212, 1230, 1260, 1176, 1194, 1254, 1224};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9616;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {6388, 7088, 6738, 2888, 1138, 3063, 263, 6913, 613, 3763, 5513, 1838, 4463, 7263, 2188, 1663};
    vector<int> y = {9421, 9865, 9643, 7201, 6091, 7312, 5536, 9754, 5758, 7756, 8866, 6535, 8200, 9976, 6757, 6424};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11440;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {8052, 4972, 8612, 8332, 5252, 6372, 5812, 6652, 4692, 7212, 7492, 6932, 5532, 8892, 6092, 4412, 9172, 7772};
    vector<int> y = {7505, 1477, 8601, 8053, 2025, 4217, 3121, 4765, 929, 5861, 6409, 5313, 2573, 9149, 3669, 381, 9697, 6957};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14076;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {7367, 4357, 7152, 2422, 5217, 8227, 4787, 3497, 6077, 3712, 8657, 9947, 8012, 9087, 3282, 6937, 4572, 6507, 4142, 9732};
    vector<int> y = {6616, 2878, 6349, 475, 3946, 7684, 3412, 1810, 5014, 2077, 8218, 9820, 7417, 8752, 1543, 6082, 3145, 5548, 2611, 9553};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16870;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {82, 3007, 5932, 6257, 5607, 3332, 4307, 1707, 4632, 732, 4957, 2682, 2357, 1057, 6907, 2032, 5282, 407, 3657, 6582, 1382, 3982};
    vector<int> y = {4736, 2738, 740, 518, 962, 2516, 1850, 3626, 1628, 4292, 1406, 2960, 3182, 4070, 74, 3404, 1184, 4514, 2294, 296, 3848, 2072};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11487;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {2006, 4631, 3881, 5006, 8006, 9506, 6131, 5381, 9881, 7256, 1631, 506, 6881, 2381, 3131, 5756, 7631, 9131, 8381, 2756, 6506, 1256, 4256, 3506};
    vector<int> y = {1939, 2800, 2554, 2923, 3907, 4399, 3292, 3046, 4522, 3661, 1816, 1447, 3538, 2062, 2308, 3169, 3784, 4276, 4030, 2185, 3415, 1693, 2677, 2431};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12450;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {3241, 5386, 1591, 6046, 6211, 4396, 3901, 3736, 4726, 5716, 3571, 4066, 5551, 2086, 4891, 3406, 2911, 2416, 1921, 5221, 4561, 3076, 2251, 4231, 2581, 1756};
    vector<int> y = {3624, 8057, 214, 9421, 9762, 6011, 4988, 4647, 6693, 8739, 4306, 5329, 8398, 1237, 7034, 3965, 2942, 1919, 896, 7716, 6352, 3283, 1578, 5670, 2260, 555};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14168;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {6698, 4934, 7034, 8462, 3674, 2246, 8042, 8630, 4682, 2750, 7958, 734, 650, 6026, 5270, 62, 6866, 902, 5018, 7286, 5774, 7454, 1070, 4094, 5102, 7622, 8378, 1574};
    vector<int> y = {8759, 7709, 8959, 9809, 6959, 6109, 9559, 9909, 7559, 6409, 9509, 5209, 5159, 8359, 7909, 4809, 8859, 5309, 7759, 9109, 8209, 9209, 5409, 7209, 7809, 9309, 9759, 5709};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13668;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {6110, 2667, 8614, 3919, 9866, 8301, 4545, 6736, 9240, 5171, 3606, 2980, 4858, 1415, 2354, 4232, 476, 7675, 163, 1728, 3293, 2041, 6423, 8927, 7362, 7988, 5484, 9553, 7049, 789};
    vector<int> y = {5006, 6106, 4206, 5706, 3806, 4306, 5506, 4806, 4006, 5306, 5806, 6006, 5406, 6506, 6206, 5606, 6806, 4506, 6906, 6406, 5906, 6306, 4906, 4106, 4606, 4406, 5206, 3906, 4706, 6706};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12803;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {8726, 9734, 7286, 7478, 9014, 8534, 9830, 7574, 9158, 8294, 8054, 8630, 8246, 9590, 9782, 9638, 9926, 8486, 8918, 7718, 9494, 6710, 9446, 9542, 9686, 8678, 6326, 8966, 6950, 8342, 8102, 6422};
    vector<int> y = {6598, 9328, 2698, 3218, 7378, 6078, 9588, 3478, 7768, 5428, 4778, 6338, 5298, 8938, 9458, 9068, 9848, 5948, 7118, 3868, 8678, 1138, 8548, 8808, 9198, 6468, 98, 7248, 1788, 5558, 4908, 358};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13350;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {5699, 7337, 2150, 3515, 4334, 8429, 6518, 4880, 4061, 6791, 1604, 8156, 2423, 1877, 785, 7610, 3788, 239, 7883, 7064, 5972, 8702, 2696, 9248, 2969, 512, 1058, 5426, 8975, 3242, 9521, 1331, 5153, 6245};
    vector<int> y = {3981, 4947, 1888, 2693, 3176, 5591, 4464, 3498, 3015, 4625, 1566, 5430, 2049, 1727, 1083, 5108, 2854, 761, 5269, 4786, 4142, 5752, 2210, 6074, 2371, 922, 1244, 3820, 5913, 2532, 6235, 1405, 3659, 4303};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14756;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {7462, 1962, 9937, 3062, 6087, 6912, 6637, 8837, 5812, 8012, 4987, 8287, 2512, 9387, 1137, 312, 4437, 3612, 2237, 4712, 862, 5537, 37, 587, 8562, 5262, 2787, 1687, 1412, 4162, 7187, 9662, 3337, 6362, 3887, 9112};
    vector<int> y = {7887, 4887, 9237, 5487, 7137, 7587, 7437, 8637, 6987, 8187, 6537, 8337, 5187, 8937, 4437, 3987, 6237, 5787, 5037, 6387, 4287, 6837, 3837, 4137, 8487, 6687, 5337, 4737, 4587, 6087, 7737, 9087, 5637, 7287, 5937, 8787};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15300;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {4093, 6373, 7273, 6793, 6313, 4933, 4573, 6253, 7153, 5293, 6553, 5953, 4213, 4753, 4993, 7213, 6913, 7033, 4513, 5773, 5833, 6613, 6013, 4033, 5173, 5353, 5653, 5593, 5053, 6073, 5113, 4633, 4873, 5713, 5473, 5893, 6193, 4813};
    vector<int> y = {9717, 2839, 124, 1572, 3020, 7183, 8269, 3201, 486, 6097, 2296, 4106, 9355, 7726, 7002, 305, 1210, 848, 8450, 4649, 4468, 2115, 3925, 9898, 6459, 5916, 5011, 5192, 6821, 3744, 6640, 8088, 7364, 4830, 5554, 4287, 3382, 7545};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13014;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {3076, 2930, 4025, 6215, 6726, 5558, 6945, 8843, 8478, 9281, 9646, 8405, 4244, 6799, 8186, 4609, 3003, 6507, 8551, 9135, 9865, 8113, 4463, 8989, 7456, 9938, 8697, 4098, 7894, 8916, 8624, 5339, 8332, 6069, 6142, 9792, 9354, 3441, 6580, 5193};
    vector<int> y = {126, 72, 477, 1287, 1476, 1044, 1557, 2259, 2124, 2421, 2556, 2097, 558, 1503, 2016, 693, 99, 1395, 2151, 2367, 2637, 1989, 639, 2313, 1746, 2664, 2205, 504, 1908, 2286, 2178, 963, 2070, 1233, 1260, 2610, 2448, 261, 1422, 909};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9600;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {5083, 4966, 637, 520, 403, 3328, 2509, 52, 4381, 3445, 286, 4264, 4849, 2977, 3094, 2743, 2392, 988, 871, 4498, 2626, 2275, 5317, 4030, 754, 1924, 3562, 5200, 2860, 169, 4732, 4147, 3913, 1807, 1690, 1339, 1456, 1222, 3796, 1573, 2041, 3211};
    vector<int> y = {526, 746, 8886, 9106, 9326, 3826, 5366, 9986, 1846, 3606, 9546, 2066, 966, 4486, 4266, 4926, 5586, 8226, 8446, 1626, 5146, 5806, 86, 2506, 8666, 6466, 3386, 306, 4706, 9766, 1186, 2286, 2726, 6686, 6906, 7566, 7346, 7786, 2946, 7126, 6246, 4046};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15165;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {6938, 7814, 6719, 6135, 7960, 7741, 9712, 9420, 8325, 9055, 8982, 9493, 8544, 6500, 7011, 9128, 7449, 6354, 9931, 7157, 8690, 9566, 9858, 8909, 6573, 8252, 7595, 8617, 6208, 9347, 8471, 6792, 7303, 6062, 7230, 6281, 8398, 6646, 9201, 9639, 7084, 7376, 6427, 7887};
    vector<int> y = {1849, 3685, 1390, 166, 3991, 3532, 7663, 7051, 4756, 6286, 6133, 7204, 5215, 931, 2002, 6439, 2920, 625, 8122, 2308, 5521, 7357, 7969, 5980, 1084, 4603, 3226, 5368, 319, 6898, 5062, 1543, 2614, 13, 2461, 472, 4909, 1237, 6592, 7510, 2155, 2767, 778, 3838};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11978;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {4256, 3266, 5411, 3596, 2606, 5246, 626, 2276, 1946, 9701, 1286, 5741, 791, 6401, 7886, 5906, 2111, 2441, 1451, 3926, 956, 8876, 8711, 1121, 3761, 1616, 2771, 6566, 4421, 9206, 5081, 6896, 9536, 9866, 4091, 3101, 7721, 6236, 9371, 7391, 5576, 7061, 8051, 1781, 4751, 8546};
    vector<int> y = {7685, 8309, 6957, 8101, 8725, 7061, 9973, 8933, 9141, 4253, 9557, 6749, 9869, 6333, 5397, 6645, 9037, 8829, 9453, 7893, 9765, 4773, 4877, 9661, 7997, 9349, 8621, 6229, 7581, 4565, 7165, 6021, 4357, 4149, 7789, 8413, 5501, 6437, 4461, 5709, 6853, 5917, 5293, 9245, 7373, 4981};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15064;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {9286, 6066, 1726, 9706, 4386, 186, 8866, 9566, 6206, 7466, 7046, 7326, 8166, 606, 9846, 9426, 2846, 4526, 8726, 886, 3546, 5366, 8306, 8586, 5926, 3126, 1586, 2706, 3406, 8446, 7746, 4946, 3266, 9146, 9986, 5226, 1446, 1866, 2986, 9006, 466, 8026, 2006, 2426, 4106, 2146, 326, 3826};
    vector<int> y = {1386, 2950, 5058, 1182, 3766, 5806, 1590, 1250, 2882, 2270, 2474, 2338, 1930, 5602, 1114, 1318, 4514, 3698, 1658, 5466, 4174, 3290, 1862, 1726, 3018, 4378, 5126, 4582, 4242, 1794, 2134, 3494, 4310, 1454, 1046, 3358, 5194, 4990, 4446, 1522, 5670, 1998, 4922, 4718, 3902, 4854, 5738, 4038};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14560;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {6280, 5790, 3585, 7946, 3389, 3193, 9367, 8583, 4565, 5447, 3046, 7407, 8485, 2213, 7603, 5692, 2507, 6770, 8240, 5251, 7848, 7750, 8730, 2654, 5937, 3683, 9808, 3095, 1625, 7554, 7897, 5349, 3242, 9171, 9024, 1772, 1478, 8338, 7456, 5398, 3977, 8044, 4663, 3144, 9955, 9416, 9661, 8877, 3781, 4320};
    vector<int> y = {5047, 4547, 2297, 6747, 2097, 1897, 8197, 7397, 3297, 4197, 1747, 6197, 7297, 897, 6397, 4447, 1197, 5547, 7047, 3997, 6647, 6547, 7547, 1347, 4697, 2397, 8647, 1797, 297, 6347, 6697, 4097, 1947, 7997, 7847, 447, 147, 7147, 6247, 4147, 2697, 6847, 3397, 1847, 8797, 8247, 8497, 7697, 2497, 3047};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17127;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {2438, 6897, 4076, 7170, 5350, 6988, 5532, 7352, 3075, 7989, 4713, 3348, 3985, 8353, 6260, 6624, 2802, 4986, 5441, 5805, 8080, 6442, 2984, 7079, 6351, 6078, 7807, 7625, 6806, 3439, 5714, 3803, 4167, 5623, 6533, 5987, 6169, 4258, 4531, 6715, 7716, 3712, 5896, 2620, 3894, 2711, 7261, 8444, 8262, 3530};
    vector<int> y = {9900, 2599, 7218, 2152, 5132, 2450, 4834, 1854, 8857, 811, 6175, 8410, 7367, 215, 3642, 3046, 9304, 5728, 4983, 4387, 662, 3344, 9006, 2301, 3493, 3940, 1109, 1407, 2748, 8261, 4536, 7665, 7069, 4685, 3195, 4089, 3791, 6920, 6473, 2897, 1258, 7814, 4238, 9602, 7516, 9453, 2003, 66, 364, 8112};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15840;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {2234, 994, 3754, 8634, 3674, 834, 4114, 1914, 8354, 9834, 634, 6874, 4594, 2634, 5354, 8474, 9874, 8514, 7194, 8914, 4274, 1354, 5754, 5594, 1314, 2554, 6234, 5434, 4554, 3554, 7834, 9794, 5234, 4434, 7794, 9354, 4514, 9914, 8114, 5474, 5514, 6274, 1794, 5114, 2354, 3954, 2434, 3394, 4194, 2994};
    vector<int> y = {7484, 8104, 6724, 4284, 6764, 8184, 6544, 7644, 4424, 3684, 8284, 5164, 6304, 7284, 5924, 4364, 3664, 4344, 5004, 4144, 6464, 7924, 5724, 5804, 7944, 7324, 5484, 5884, 6324, 6824, 4684, 3704, 5984, 6384, 4704, 3924, 6344, 3644, 4544, 5864, 5844, 5464, 7704, 6044, 7424, 6624, 7384, 6904, 6504, 7104};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13920;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {6047, 6333, 4903, 5163, 6021, 4591, 7399, 6385, 7217, 6749, 5553, 6515, 6255, 5761, 7009, 4981, 6697, 7685, 7139, 7243, 5527, 5449, 5033, 4877, 5111, 6931, 5241, 7633, 5917, 4565, 5189, 7113, 6827, 5085, 6125, 5579, 7503, 6359, 6879, 6541, 5735, 7295, 5423, 5345, 5683, 6437, 7581, 5839, 5943, 6957};
    vector<int> y = {5267, 4365, 8875, 8055, 5349, 9859, 1003, 4201, 1577, 3053, 6825, 3791, 4611, 6169, 2233, 8629, 3217, 101, 1823, 1495, 6907, 7153, 8465, 8957, 8219, 2479, 7809, 265, 5677, 9941, 7973, 1905, 2807, 8301, 5021, 6743, 675, 4283, 2643, 3709, 6251, 1331, 7235, 7481, 6415, 4037, 429, 5923, 5595, 2397};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12960;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {6965, 6197, 5429, 9461, 6389, 6053, 6437, 6341, 7205, 5525, 8453, 9941, 6581, 5909, 7349, 9269, 5573, 9173, 8165, 8357, 7877, 6917, 5669, 6725, 9029, 9845, 9797, 7733, 5621, 5381, 9749, 8981, 9989, 9077, 5141, 8549, 9557, 6773, 7541, 8117, 9125, 8741, 7157, 8501, 7109, 9893, 8837, 5237, 5189, 9653};
    vector<int> y = {1028, 628, 228, 2328, 728, 553, 753, 703, 1153, 278, 1803, 2578, 828, 478, 1228, 2228, 303, 2178, 1653, 1753, 1503, 1003, 353, 903, 2103, 2528, 2503, 1428, 328, 203, 2478, 2078, 2603, 2128, 78, 1853, 2378, 928, 1328, 1628, 2153, 1953, 1128, 1828, 1103, 2553, 2003, 128, 103, 2428};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7373;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {5967, 1699, 8683, 7325, 1893, 923, 2863, 9459, 7713, 8877, 3833, 1117, 5773, 2087, 7131, 1505, 2669, 9071, 5385, 6549, 4609, 341, 8489, 8101, 8295, 6937, 3057, 9265, 9847, 6355, 3639, 1311, 7519, 4027, 6743, 9653, 5579, 2475, 7907, 5191, 4803, 147, 6161, 4221, 2281, 535, 3251, 4997, 3445, 729};
    vector<int> y = {3447, 3139, 3643, 3545, 3153, 3083, 3223, 3699, 3573, 3657, 3293, 3097, 3433, 3167, 3531, 3125, 3209, 3671, 3405, 3489, 3349, 3041, 3629, 3601, 3615, 3517, 3237, 3685, 3727, 3475, 3279, 3111, 3559, 3307, 3503, 3713, 3419, 3195, 3587, 3391, 3363, 3027, 3461, 3321, 3181, 3055, 3251, 3377, 3265, 3069};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10400;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {1063, 288};
    vector<int> y = {660, 1629};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1744;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {851, 953, 137, 647};
    vector<int> y = {598, 679, 31, 436};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1464;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {1370, 1725, 2080, 305, 1015, 660};
    vector<int> y = {1479, 900, 321, 3216, 2058, 2637};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4670;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {4201, 421, 3121, 2581, 4741, 961, 2041, 1501};
    vector<int> y = {4469, 3671, 4241, 4127, 4583, 3785, 4013, 3899};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5232;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {4936, 4832, 4754, 4468, 4364, 4338, 4676, 4910, 4572, 4650};
    vector<int> y = {253, 1829, 3011, 7345, 8921, 9315, 4193, 647, 5769, 4587};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9660;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {403, 327, 323, 319, 411, 115, 211, 427, 199, 179, 147, 451};
    vector<int> y = {8299, 6247, 6139, 6031, 8515, 523, 3115, 8947, 2791, 2251, 1387, 9595};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9408;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {3811, 3934, 490, 1228, 2089, 2950, 859, 2458, 1966, 3565, 5041, 736, 2581, 3196};
    vector<int> y = {3409, 3315, 5947, 5383, 4725, 4067, 5665, 4443, 4819, 3597, 2469, 5759, 4349, 3879};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8029;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {2508, 2211, 2379, 2371, 2546, 2190, 2415, 2463, 2485, 2361, 2401, 2543, 2290, 2489, 2397, 2419};
    vector<int> y = {996, 8124, 4092, 4284, 84, 8628, 3228, 2076, 1548, 4524, 3564, 156, 6228, 1452, 3660, 3132};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8900;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {7408, 118, 604, 6922, 928, 2386, 2872, 5140, 3358, 6598, 5788, 1414, 4816, 3844, 1900, 8380, 1576, 4006};
    vector<int> y = {810, 5940, 5598, 1152, 5370, 4344, 4002, 2406, 3660, 1380, 1950, 5028, 2634, 3318, 4686, 126, 4914, 3204};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14076;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {7192, 5182, 3574, 3306, 9604, 6924, 5048, 3440, 8934, 1162, 4780, 2100, 5852, 1564, 4646, 1832, 4914, 6120, 5450, 8800};
    vector<int> y = {7316, 5936, 4832, 4648, 8972, 7132, 5844, 4740, 8512, 3176, 5660, 3820, 6396, 3452, 5568, 3636, 5752, 6580, 6120, 8420};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14238;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {963, 2279, 3924, 2232, 2843, 1245, 4676, 4488, 1903, 2326, 164, 775, 3031, 1997, 1950, 1527, 2796, 3783, 2044, 5005, 1339, 1104};
    vector<int> y = {2911, 3275, 3730, 3262, 3431, 2989, 3938, 3886, 3171, 3288, 2690, 2859, 3483, 3197, 3184, 3067, 3418, 3691, 3210, 4029, 3015, 2950};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6180;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {856, 356, 1906, 756, 2156, 1356, 556, 2706, 2456, 2406, 906, 2206, 2906, 2756, 2006, 506, 406, 1306, 956, 1656, 1456, 1256, 156, 2256};
    vector<int> y = {2217, 2417, 1797, 2257, 1697, 2017, 2337, 1477, 1577, 1597, 2197, 1677, 1397, 1457, 1757, 2357, 2397, 2037, 2177, 1897, 1977, 2057, 2497, 1657};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3850;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {7733, 3413, 3503, 2963, 713, 1883, 7463, 7103, 6203, 3953, 2243, 4043, 5303, 2423, 2693, 1523, 2063, 2603, 1343, 6023, 5663, 6743, 6113, 3053, 7283, 6833};
    vector<int> y = {3599, 1391, 1437, 1161, 11, 609, 3461, 3277, 2817, 1667, 793, 1713, 2357, 885, 1023, 425, 701, 977, 333, 2725, 2541, 3093, 2771, 1207, 3369, 3139};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10608;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {46, 2750, 358, 1502, 5610, 6962, 2542, 2854, 3270, 2438, 4414, 5454, 3426, 5766, 7222, 1658, 6806, 4622, 2698, 3582, 5558, 4830, 6702, 6442, 7898, 7846, 6338, 1034};
    vector<int> y = {298, 2586, 562, 1530, 5006, 6150, 2410, 2674, 3026, 2322, 3994, 4874, 3158, 5138, 6370, 1662, 6018, 4170, 2542, 3290, 4962, 4346, 5930, 5710, 6942, 6898, 5622, 1134};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14496;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {1831, 3259, 1999, 2755, 1411, 1327, 2335, 2167, 2251, 3511, 3007, 2923, 991, 1495, 3175, 1243, 3091, 3763, 1663, 3679, 2671, 1579, 1075, 2503, 2083, 1915, 823, 907, 2419, 2839};
    vector<int> y = {1149, 2764, 1339, 2194, 674, 579, 1719, 1529, 1624, 3049, 2479, 2384, 199, 769, 2669, 484, 2574, 3334, 959, 3239, 2099, 864, 294, 1909, 1434, 1244, 9, 104, 1814, 2289};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6265;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {1873, 1509, 2321, 1985, 921, 2629, 1929, 1005, 1901, 837, 2349, 2377, 949, 1845, 1957, 1061, 2209, 2601, 977, 2713, 2769, 809, 2265, 1481, 2461, 1201, 1173, 1565, 1425, 2573, 1817, 1453};
    vector<int> y = {576, 381, 816, 636, 66, 981, 606, 111, 591, 21, 831, 846, 81, 561, 621, 141, 756, 966, 96, 1026, 1056, 6, 786, 366, 891, 216, 201, 411, 336, 951, 546, 351};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3010;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {1238, 1230, 1038, 1326, 30, 1094, 1054, 1390, 286, 310, 198, 1102, 246, 622, 374, 590, 182, 862, 46, 262, 838, 1278, 1366, 1270, 918, 654, 894, 1014, 1166, 702, 438, 1070, 486, 470};
    vector<int> y = {999, 1017, 1449, 801, 3717, 1323, 1413, 657, 3141, 3087, 3339, 1305, 3231, 2385, 2943, 2457, 3375, 1845, 3681, 3195, 1899, 909, 711, 927, 1719, 2313, 1773, 1503, 1161, 2205, 2799, 1377, 2691, 2727};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4420;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {5645, 5576, 6266, 5852, 6404, 4472, 7094, 6128, 7646, 6059, 7163, 4886, 7508, 6680, 6473, 4334, 7784, 7439, 6956, 7232, 4817, 6197, 7025, 5369, 4610, 6611, 7301, 5921, 6542, 5300, 4679, 4955, 6749, 6818, 5231, 5093};
    vector<int> y = {1197, 1139, 1719, 1371, 1835, 211, 2415, 1603, 2879, 1545, 2473, 559, 2763, 2067, 1893, 95, 2995, 2705, 2299, 2531, 501, 1661, 2357, 965, 327, 2009, 2589, 1429, 1951, 907, 385, 617, 2125, 2183, 849, 733};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6350;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {5218, 4856, 592, 3396, 2232, 8086, 7656, 1504, 8514, 7190, 2604, 876, 8806, 140, 9616, 7772, 7894, 4776, 6912, 4410, 1672, 2782, 3906, 8772, 5310, 9148, 6046, 6344, 9038, 7018, 8954, 3428, 8280, 5122, 1168, 886, 132, 3228};
    vector<int> y = {4521, 4702, 6834, 5432, 6014, 3087, 3302, 6378, 2873, 3535, 5828, 6692, 2727, 7060, 2322, 3244, 3183, 4742, 3674, 4925, 6294, 5739, 5177, 2744, 4475, 2556, 4107, 3958, 2611, 3621, 2653, 5416, 2990, 4569, 6546, 6687, 7064, 5516};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14226;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {942, 6042, 3407, 4002, 857, 3152, 2302, 1962, 262, 2557, 3662, 5192, 2217, 3747, 3917, 2812, 6552, 177, 3492, 5022, 2047, 5532, 4767, 5617, 1707, 6212, 6297, 6467, 6637, 5787, 5957, 1197, 4172, 2132, 4087, 7, 517, 1282, 6382, 1622};
    vector<int> y = {6057, 6897, 6463, 6561, 6043, 6421, 6281, 6225, 5945, 6323, 6505, 6757, 6267, 6519, 6547, 6365, 6981, 5931, 6477, 6729, 6239, 6813, 6687, 6827, 6183, 6925, 6939, 6967, 6995, 6855, 6883, 6099, 6589, 6253, 6575, 5903, 5987, 6113, 6953, 6169};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7722;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {1571, 979, 899, 595, 19, 1267, 1123, 99, 611, 403, 1379, 515, 323, 1155, 1475, 1635, 1459, 1539, 1619, 83, 995, 707, 259, 963, 1299, 563, 739, 435, 419, 691, 627, 3, 947, 659, 1075, 179, 227, 547, 643, 1283, 787, 1427};
    vector<int> y = {244, 2427, 2722, 3843, 5967, 1365, 1896, 5672, 3784, 4551, 952, 4138, 4846, 1778, 598, 8, 657, 362, 67, 5731, 2368, 3430, 5082, 2486, 1247, 3961, 3312, 4433, 4492, 3489, 3725, 6026, 2545, 3607, 2073, 5377, 5200, 4020, 3666, 1306, 3135, 775};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7650;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {5605, 7573, 6805, 7477, 6949, 6661, 6325, 3877, 4981, 4789, 4453, 7525, 4309, 6421, 5989, 6757, 5941, 4501, 4117, 4069, 6277, 4645, 5509, 5845, 6373, 6133, 4405, 4357, 5653, 5221, 3829, 3637, 5125, 5413, 4165, 5173, 5797, 5317, 3541, 3973, 6517, 3781, 6229, 7333};
    vector<int> y = {4798, 1, 1873, 235, 1522, 2224, 3043, 9010, 6319, 6787, 7606, 118, 7957, 2809, 3862, 1990, 3979, 7489, 8425, 8542, 3160, 7138, 5032, 4213, 2926, 3511, 7723, 7840, 4681, 5734, 9127, 9595, 5968, 5266, 8308, 5851, 4330, 5500, 9829, 8776, 2575, 9244, 3277, 586};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13860;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {2683, 4507, 1144, 1942, 4393, 6046, 3823, 1828, 5761, 61, 4450, 5134, 5077, 7471, 1315, 1543, 6673, 6160, 5419, 4906, 5989, 1771, 745, 973, 2740, 7756, 4621, 2911, 5191, 4, 6274, 2170, 6616, 118, 4222, 4279, 2968, 4108, 7528, 4165, 4564, 7585, 6445, 7870, 4963, 3082};
    vector<int> y = {6523, 7739, 5497, 6029, 7663, 8765, 7283, 5953, 8575, 4775, 7701, 8157, 8119, 9715, 5611, 5763, 9183, 8841, 8347, 8005, 8727, 5915, 5231, 5383, 6561, 9905, 7815, 6675, 8195, 4737, 8917, 6181, 9145, 4813, 7549, 7587, 6713, 7473, 9753, 7511, 7777, 9791, 9031, 9981, 8043, 6789};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13110;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {3765, 638, 1700, 4532, 4355, 3116, 3057, 2113, 107, 2349, 3824, 815, 4886, 2939, 4473, 1936, 1995, 2821, 3647, 3529, 166, 874, 2762, 3293, 2290, 4296, 3352, 2585, 3470, 4945, 520, 5417, 1346, 2703, 3942, 1759, 5476, 5122, 1405, 1582, 3234, 4237, 343, 2644, 5299, 1641, 1051, 402};
    vector<int> y = {6767, 1255, 3127, 8119, 7807, 5623, 5519, 3855, 319, 4271, 6871, 1567, 8743, 5311, 8015, 3543, 3647, 5103, 6559, 6351, 423, 1671, 4999, 5935, 4167, 7703, 6039, 4687, 6247, 8847, 1047, 9679, 2503, 4895, 7079, 3231, 9783, 9159, 2607, 2919, 5831, 7599, 735, 4791, 9471, 3023, 1983, 839};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14833;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {3781, 4087, 5345, 4257, 5787, 6331, 5583, 4835, 6297, 4359, 6535, 5753, 4597, 4053, 5651, 3645, 5821, 6195, 4121, 6433, 5073, 3747, 3543, 5481, 6059, 3815, 6365, 4563, 3679, 5311, 4461, 3509, 3849, 5141, 4291, 4801, 4937, 4155, 4529, 5957, 5277, 5243, 6501, 5005, 5413, 4223, 4495, 3883, 4427, 6229};
    vector<int> y = {932, 1913, 5946, 2458, 7363, 9107, 6709, 4311, 8998, 2785, 9761, 7254, 3548, 1804, 6927, 496, 7472, 8671, 2022, 9434, 5074, 823, 169, 6382, 8235, 1041, 9216, 3439, 605, 5837, 3112, 60, 1150, 5292, 2567, 4202, 4638, 2131, 3330, 7908, 5728, 5619, 9652, 4856, 6164, 2349, 3221, 1259, 3003, 8780};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12727;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {2407, 5180, 5697, 3394, 1561, 2125, 5791, 245, 2501, 2736, 5368, 715, 4804, 1467, 6120, 3629, 5509, 6167, 1749, 151, 3864, 3065, 5932, 527, 1655, 621, 5274, 1608, 433, 4569, 1138, 5650, 1514, 5415, 903, 2313, 4710, 4663, 809, 3817, 4099, 4945, 5556, 1843, 3958, 10, 1232, 3676, 3159, 4052};
    vector<int> y = {1926, 746, 526, 1506, 2286, 2046, 486, 2846, 1886, 1786, 666, 2646, 906, 2326, 346, 1406, 606, 326, 2206, 2886, 1306, 1646, 426, 2726, 2246, 2686, 706, 2266, 2766, 1006, 2466, 546, 2306, 646, 2566, 1966, 946, 966, 2606, 1326, 1206, 846, 586, 2166, 1266, 2946, 2426, 1386, 1606, 1226};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8777;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {7032, 6828, 7916, 4856, 8392, 7168, 5808, 7372, 5264, 7304, 8664, 8324, 6420, 8460, 8256, 5060, 5400, 6692, 8052, 5536, 8528, 5196, 6760, 4992, 8732, 8188, 4788, 8936, 8120, 6284, 7236, 7984, 7440, 6624, 6556, 4924, 8868, 5944, 7712, 8596, 5468, 5876, 6488, 7508, 5604, 7644, 5128, 6080, 7848, 6148};
    vector<int> y = {4549, 4153, 6265, 325, 7189, 4813, 2173, 5209, 1117, 5077, 7717, 7057, 3361, 7321, 6925, 721, 1381, 3889, 6529, 1645, 7453, 985, 4021, 589, 7849, 6793, 193, 8245, 6661, 3097, 4945, 6397, 5341, 3757, 3625, 457, 8113, 2437, 5869, 7585, 1513, 2305, 3493, 5473, 1777, 5737, 853, 2701, 6133, 2833};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12200;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {1313, 1047, 1117, 1327, 963, 235, 725, 263, 431, 1215, 1033, 655, 1439, 165, 305, 179, 837, 753, 669, 1397, 221, 1243, 1075, 991, 851, 39, 53, 529, 865, 1411, 949, 739, 515, 627, 81, 1103, 1061, 375, 879, 1355, 711, 1201, 1369, 683, 389, 95, 151, 1257, 193, 1271};
    vector<int> y = {427, 1301, 1071, 381, 1577, 3969, 2359, 3877, 3325, 749, 1347, 2589, 13, 4199, 3739, 4153, 1991, 2267, 2543, 151, 4015, 657, 1209, 1485, 1945, 4613, 4567, 3003, 1899, 105, 1623, 2313, 3049, 2681, 4475, 1117, 1255, 3509, 1853, 289, 2405, 795, 243, 2497, 3463, 4429, 4245, 611, 4107, 565};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {3474, 3648, 284, 574, 545, 1879, 1966, 3938, 603, 2865, 2488, 719, 4025, 1908, 2082, 1270, 1647, 139, 3184, 429, 4315, 1328, 1299, 2720, 3677, 3735, 2372, 1212, 3126, 3880, 1995, 3155, 1937, 1792, 3822, 3561, 3619, 661, 3097, 1821, 1241, 2227, 3010, 3068, 2343, 2111, 2923, 1067, 3445, 2517};
    vector<int> y = {532, 430, 2402, 2232, 2249, 1467, 1416, 260, 2215, 889, 1110, 2147, 209, 1450, 1348, 1824, 1603, 2487, 702, 2317, 39, 1790, 1807, 974, 413, 379, 1178, 1858, 736, 294, 1399, 719, 1433, 1518, 328, 481, 447, 2181, 753, 1501, 1841, 1263, 804, 770, 1195, 1331, 855, 1943, 549, 1093};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6624;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {3051, 4826, 1844, 5039, 2270, 7027, 779, 7098, 7169, 3974, 6317, 7737, 6459, 6104, 5607, 6814, 8092, 3335, 2128, 1489, 4471, 211, 6246, 3264, 1560, 5962, 6388, 6601, 1418, 7240, 850, 5536, 3761, 4968, 708, 3619, 6672, 5181, 2696, 1773, 637, 2199, 2483, 69, 4542, 5252, 4613, 2980, 3548, 4400};
    vector<int> y = {5183, 6158, 4520, 6275, 4754, 7367, 3935, 7406, 7445, 5690, 6977, 7757, 7055, 6860, 6587, 7250, 7952, 5339, 4676, 4325, 5963, 3623, 6938, 5300, 4364, 6782, 7016, 7133, 4286, 7484, 3974, 6548, 5573, 6236, 3896, 5495, 7172, 6353, 4988, 4481, 3857, 4715, 4871, 3545, 6002, 6392, 6041, 5144, 5456, 5924};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12430;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {210, 220, 230, 240, 250, 260, 270, 280};
    vector<int> y = {5062, 5061, 5060, 5059, 5058, 5057, 5056, 5055};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {80, 60, 70, 50};
    vector<int> y = {50, 70, 60, 80};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {1, 3, 2};
    vector<int> y = {1, 3, 2};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {7, 7, 7, 7, 7, 7, 7};
    vector<int> y = {105, 1231, 5663, 295, 3062, 380, 7777};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7672;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {1, 2, 3};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {1, 3, 2};
    vector<int> y = {1, 1, 1};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {1, 5, 4, 3, 2, 7, 8};
    vector<int> y = {1, 5, 4, 3, 2, 7, 8};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {10000, 10000, 10000};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {1, 100, 50};
    vector<int> y = {0, 0, 0};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {1, 1, 1};
    vector<int> y = {2, 1, 0};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {1, 7, 5};
    vector<int> y = {2, 2, 2};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {7, 7, 7, 7};
    vector<int> y = {5396, 290, 490, 380};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5106;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    vector<int> y = {105, 1231, 5663, 295, 3062, 380, 7777, 7778, 7779, 7780, 7781, 7785, 7783, 7782, 7784};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7680;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {1, 1};
    vector<int> y = {3, 1};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {1, 1, 1};
    vector<int> y = {2, 5, 3};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {7, 7, 7};
    vector<int> y = {777, 77, 7};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 770;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> y = {14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {1, 3, 2};
    vector<int> y = {3, 3, 3};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {5, 1, 3};
    vector<int> y = {2, 2, 2};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {2, 1};
    vector<int> y = {1, 2};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {1, 0, 2};
    vector<int> y = {0, 0, 0};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {7, 7, 7, 7, 7, 7, 7};
    vector<int> y = {105, 1231, 5663, 295, 3062, 380, 1};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5662;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {1, 1, 1};
    vector<int> y = {1, 3, 2};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {2, 2, 2, 2};
    vector<int> y = {3, 1, 5, 7};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 80};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {100, 1, 1000};
    vector<int> y = {100, 1, 1000};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1998;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {3, 1, 2};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {1, 10, 5};
    vector<int> y = {1, 10, 5};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {2, 3, 1, 4};
    vector<int> y = {3, 2, 4, 1};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {0, 10000, 1000, 100};
    vector<int> y = {0, 1000, 100, 10};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {1, 1, 1};
    vector<int> y = {4, 7, 5};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {105, 1231, 5663, 295, 3062, 380, 7777, 1};
    vector<int> y = {7, 7, 7, 7, 7, 7, 7, 7};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7776;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {5, 10};
    vector<int> y = {5, 3};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> y = {1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    LinearTravellingSalesman* pObj = new LinearTravellingSalesman();
    clock_t start = clock();
    int result = pObj->findMinimumDistance(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22760848&rd=14153&pm=10917
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <utility> 
#include <cstdlib> 
#include <cstdio> 
#include <cctype> 
#include <cmath> 
#include <functional> 
#include <algorithm> 
#include <numeric> 
#include <string> 
#include <vector> 
#include <queue> 
#include <stack> 
#include <list> 
#include <map> 
#include <set> 
using namespace std; 
 
#define FOR(i,a,b)  for(int i=(a);i<(b);++i) 
#define F(i,a)      FOR(i,0,a) 
#define ALL(x)      x.begin(),x.end() 
#define PB          push_back 
#define S           size() 
 
class LinearTravellingSalesman 
        { 
        public:  
        int findMinimumDistance(vector <int> x, vector <int> y)  
            { 
                int sum=0; 
    sort(x.begin(),x.end()); 
    sort(y.begin(),y.end()); 
    for(int c=0;c<(x.size()-1);c++) 
    { 
    sum=sum+(abs(x[c]-x[c+1])+abs(y[c]-y[c+1])); 
    } 
    return sum; 
            } 
         
 
        }; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/