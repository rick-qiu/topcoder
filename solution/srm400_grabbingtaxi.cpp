/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8753
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

class GrabbingTaxi {
public:
    int minTime(vector<int> tXs, vector<int> tYs, int gX, int gY, int walkTime, int taxiTime);
};

int GrabbingTaxi::minTime(vector<int> tXs, vector<int> tYs, int gX, int gY, int walkTime, int taxiTime) {
    int ret;
    return ret;
}


int test0() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 3;
    int gY = 2;
    int walkTime = 10;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> tXs = {-2, -2};
    vector<int> tYs = {0, -2};
    int gX = -4;
    int gY = -2;
    int walkTime = 15;
    int taxiTime = 3;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> tXs = {3};
    vector<int> tYs = {0};
    int gX = 5;
    int gY = 0;
    int walkTime = 10;
    int taxiTime = 20;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> tXs = {3};
    vector<int> tYs = {3};
    int gX = 5;
    int gY = 5;
    int walkTime = 10;
    int taxiTime = 4;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> tXs = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    vector<int> tYs = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5};
    int gX = 5;
    int gY = 5;
    int walkTime = 7;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> tXs = {-10000};
    vector<int> tYs = {0};
    int gX = -10000;
    int gY = -10000;
    int walkTime = 1000;
    int taxiTime = 100;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 11000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> tXs = {-200};
    vector<int> tYs = {-100};
    int gX = 1000;
    int gY = 1000;
    int walkTime = 100;
    int taxiTime = 10;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 53000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> tXs = {-1};
    vector<int> tYs = {-1};
    int gX = 2;
    int gY = 2;
    int walkTime = 10;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> tXs = {926, -3297, -8283, -7076, 1493, 1448, -8563, -1423, -4740, -1120, 982, -95, 364, 8845, 6692, -2032, 8974, -4195, 8603, 1865, -6826, -5905, 1335, 348, 2458, 7783, -4607, 7450, 1658, -4791, -9808};
    vector<int> tYs = {4965, 356, -28, -2368, -6247, 9618, -1736, -5702, 1579, -3936, -7615, -6556, -437, 9462, 2301, 5916, 9348, -8604, 4783, 6874, -7953, -7560, -1965, 4109, 4663, 525, -3383, -3970, -9123, -1269, 6110};
    int gX = -5294;
    int gY = 52;
    int walkTime = 657;
    int taxiTime = 410;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3046527;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> tXs = {1445};
    vector<int> tYs = {-5730};
    int gX = 779;
    int gY = 8797;
    int walkTime = 62;
    int taxiTime = 394;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 593712;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> tXs = {2575, 5602, 992, -367, 7068, 8866, -9012, -1711, -1387, 4724, 2520, 6984, 1471, -550, -1656, 3993, 2131, -5206, 8309};
    vector<int> tYs = {-7394, -1060, 2650, 7030, -9770, -6342, -2955, -1273, 3931, 3323, 3655, -6154, -3618, -4653, -9942, -4963, -7580, 7959, 3924};
    int gX = -6592;
    int gY = -4033;
    int walkTime = 186;
    int taxiTime = 582;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1976250;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> tXs = {34, -12, 1, 0, 21, -43, -98, 11, 86, -31};
    vector<int> tYs = {11, 5, -68, 69, -78, -49, -36, -2, 1, 70};
    int gX = -97;
    int gY = -39;
    int walkTime = 47;
    int taxiTime = 13;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2476;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> tXs = {82, -60, 57, 98, 30, -67, 84, -42, -100, 62};
    vector<int> tYs = {-7, 90, 53, -56, -15, -87, 22, -3, -61, -30};
    int gX = 21;
    int gY = 15;
    int walkTime = 53;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1908;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> tXs = {0};
    vector<int> tYs = {0};
    int gX = 10000;
    int gY = -10000;
    int walkTime = 1000;
    int taxiTime = 1000;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20000000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> tXs = {0, 10000};
    vector<int> tYs = {0, -10000};
    int gX = 10000;
    int gY = -10000;
    int walkTime = 1000;
    int taxiTime = 500;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 2938;
    int gY = 1938;
    int walkTime = 183;
    int taxiTime = 38;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 892308;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> tXs = {8940, -7313, 40, -264, -2983, 9248, 8640, 1562, 2175, -3544, 3885, 9948, 9095, -284, -831, 5962, -107};
    vector<int> tYs = {-9339, -3884, -2215, 1069, -852, -7135, 369, 5901, -300, -3980, 3066, -2160, -2171, -1066, 492, 641, 2160};
    int gX = 636;
    int gY = -4658;
    int walkTime = 300;
    int taxiTime = 110;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 901320;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> tXs = {8286, 5245, 8376, 9967, 6828, -1673, -4821, 4110, 4861, -3921, -584, -3109, -2631, -7689, 8911, -3024, -7274, -7310};
    vector<int> tYs = {-66, 6744, -441, 7414, -1084, 1725, -818, -3031, 2623, -2176, 1472, -6147, -4283, -2945, 9105, 8792, 978, -7151};
    int gX = 697;
    int gY = 3119;
    int walkTime = 161;
    int taxiTime = 598;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 614376;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> tXs = {5378, 8800, -8387, 9316, 8375, -3877, -7267, 2861, -7182, -3504, 4850, 3961, 3864, 1894, 1801, -6140, 6279, 8083, -3887};
    vector<int> tYs = {-4538, 748, -8705, -361, -3785, -9363, 1872, -7663, -2324, -1586, -6454, -7519, -9423, -4059, 9348, 4295, -3407, 9973, -9847};
    int gX = -9438;
    int gY = -9560;
    int walkTime = 277;
    int taxiTime = 968;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5262446;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> tXs = {-763, -6423, -5487, -5313, -5216, 1864, 4812, -4330, 5868, -2723, -5855, -5759, -1377, 8513, -4543, 4654, -186, -3348, -1995, 220, 2912, -5831, -6101, -779, -1238, -4502, 9727, 1026, -1880, 2693, 3055, 8418, -1690};
    vector<int> tYs = {-1937, 6168, 3081, -548, 3498, 3864, 1165, -4579, 8284, -1344, -2357, -7476, -7711, -8973, -3893, 380, 782, 7629, 1771, 1828, -3867, 8165, -1527, 7910, -2270, 2606, 7208, -398, -7037, 7872, 1561, -2023, 7215};
    int gX = -5313;
    int gY = -1880;
    int walkTime = 928;
    int taxiTime = 523;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4915061;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> tXs = {9413, 5698, 7793, 3559, -2500, 5071, -8461, -162, -1715, -2298, -9810, 4506, 491, -3528, -3112, 4890, -2647};
    vector<int> tYs = {-8719, -6339, 3609, -1210, -4685, 7052, 7868, 7735, -2333, 8698, -2969, 8622, 385, 7657, -4890, 4952, 6596};
    int gX = -6982;
    int gY = -1809;
    int walkTime = 627;
    int taxiTime = 262;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3082006;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> tXs = {-4943, 9503, 9459, 3675, 6384, -8624, -1599, 6867, 4125, 4798, -5637, 6187, -4796, -6592, 8956, -9745, -6360, -5541, 9664, -465, -1710, -9600, 742, 2980, -991, 1784};
    vector<int> tYs = {1713, 7294, 4705, 7932, 1016, -8646, 9118, 5342, -6156, -4763, -2105, -2032, -5374, 7848, 3650, 8998, -1826, -9276, -6385, 6833, 677, 7587, -7079, 3926, -1202, -2450};
    int gX = -121;
    int gY = 1167;
    int walkTime = 76;
    int taxiTime = 879;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 97888;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> tXs = {-6486, 4900, 1438, 8227, -9662};
    vector<int> tYs = {-1248, 4185, -1907, -8088, -6633};
    int gX = 3312;
    int gY = 3977;
    int walkTime = 795;
    int taxiTime = 456;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5794755;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> tXs = {7137, 58, 7917, -3020, 1893, -3563, 7987, 8471, -1436, 1766, -2163, 8861, -9182};
    vector<int> tYs = {-7436, -2584, 7098, -3774, 9179, 9592, 9142, -386, 4073, 4881, -2136, 6306, -1791};
    int gX = -4674;
    int gY = -8085;
    int walkTime = 650;
    int taxiTime = 207;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3835531;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> tXs = {622, 1363, 2748, -526, -4012, -4903, -529, 8017, -4286, -6394, 528, 4144, -5701, -5938, 4592, 9737, 9617, -6886, -5090, -9696, 1389, -8825, -7990, -5902, -3659, -8861, 7644, 3343, 5416, 3170, -2126, 1738, 3452, -7805, -1812, 7367, 6704, 9767, 8528, 5146};
    vector<int> tYs = {-2966, 1966, 6567, 6925, -9751, -2915, -1383, -6402, 5663, 8326, 3289, -8881, -8311, -3764, 1629, 9593, -4406, 1166, -6024, 7569, -277, 8670, -9702, -889, 9336, -9328, 2024, -5366, -1941, 4676, -6119, -9718, 1991, -1746, -744, 5622, -1556, -8876, 7591, -5606};
    int gX = 8606;
    int gY = -9626;
    int walkTime = 345;
    int taxiTime = 102;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2264502;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> tXs = {-2669, -1878, 2484, -7219, -7052, -2694, 28, 6512, 9540, -1, 6346, 2759, -6472, -7491, 114, -3714, -7013, 2012, -1644, -7876, -3918, 5817, -3790, -5970, 1173, 7081, -517};
    vector<int> tYs = {-2025, -840, 9522, 9062, 701, -1650, 3287, -1642, 6059, -1040, -822, -8375, -3278, -805, -3250, -3979, 2600, -9503, 6547, -6495, 7532, -9059, -1653, -3772, -5499, -399, 6894};
    int gX = 8630;
    int gY = -5028;
    int walkTime = 853;
    int taxiTime = 677;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 9431036;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> tXs = {-7717, 1737, -6471, 1421, 4015, -7159, 6891, 7335, 8671, 8584, 6165, 3629, -8855, 7797, -1907, 5806, -7559, -7512, -7935, -9120, -6923, -7117, -7477, 8263, 5212, 1429, -365, 2294, 8848};
    vector<int> tYs = {-9010, 2521, -3045, 6194, -3282, -5406, -5452, 1275, 2800, -9157, -4092, -9043, -656, -6076, 5516, 1900, -7886, 4734, -9928, -7222, 8087, -1727, 8565, 8453, 5894, 1057, 2092, -1307, 7173};
    int gX = -2605;
    int gY = 2340;
    int walkTime = 807;
    int taxiTime = 100;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2231599;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> tXs = {6221, 9832, -3574, -256, -6158, 9261, -1685, 7247, 5440, -1517, -29, 858, 573, 3279, -540, 7837, 7476, -6706, 235, -1370, 4193, -4858, 2829, -6455, 2643, -1480};
    vector<int> tYs = {-7456, 8725, 3285, 7262, 3993, 2763, -6385, 5362, 872, 2510, -6260, -2641, -2643, -9961, -5283, -1889, 6688, 3724, -6885, -717, 5169, 898, -9430, 9422, 8008, 2621};
    int gX = -3781;
    int gY = 4748;
    int walkTime = 366;
    int taxiTime = 440;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3121614;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> tXs = {-7621, 2148, -401, 3187, 8092, 3791, 7800, 5699, 1272, 3764, 3267, 819, 1433};
    vector<int> tYs = {-8639, 1135, -9903, 9671, 5026, 2567, 8344, -889, -4449, -6249, -5808, 6796, -8012};
    int gX = 9699;
    int gY = -1112;
    int walkTime = 831;
    int taxiTime = 338;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6039897;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> tXs = {543, 7818, 6860, -6070, 4514, -3516, -6777, 8137, -2885, -2956, -7269, -5364, 9957, 965, 9652, 5822, 7605, -3935, -1844, 61, -7083, 8633, -9967, 8593, 7707, 9729, -7994, -1011, 3516, -3309, -100, -1297, 2260, 5855, 1947, 7222, -8499, -2496, 8479, -9680, 4129, -922, -9721, -5036, -2800, -2367, -7137, 8347, 9718};
    vector<int> tYs = {7334, 431, -8423, 1487, -7987, -7265, 4925, -2109, -7608, 6610, -1656, 8370, -6174, 5792, -5401, 1827, 5019, -4890, -3783, -9076, 3660, 1341, 9460, 7475, -1800, 9187, 1489, -6828, -3853, 9038, -6362, -5206, -5733, -1856, -1351, -2002, -8910, 1839, -5212, -1111, 7106, 6465, -5280, -2538, 3039, 631, -7958, 2083, -8391};
    int gX = -2412;
    int gY = 6448;
    int walkTime = 447;
    int taxiTime = 168;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2324922;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> tXs = {-863, 3138, 7381, 8748, 7001, -9578, 4361, -1327, -1549, 3246, -3203, -50, 682, 7930, -9882, -1066, 7051, -7691, -3490, 4662, -304, 1524, 459, -117, 7180, -4984, 5766, -7122, 6278, 132, 5657, -2068, 2073, 2701, 2637, -2624, 5483, 7, 9732, 3075, -7635, 6522, 9746, 260, -6652, 7795, -5811, 1581};
    vector<int> tYs = {4100, 4769, -3677, 7642, 1122, 2753, -6397, 3821, 3076, -7446, -9253, 2628, 4933, -8363, -3007, -754, -1740, -6703, -6757, -2713, -2330, -7588, 1254, -4699, 4550, 8578, 6859, 5552, 7862, 2654, 9522, -6418, 6753, 7733, -4542, -7917, 4763, 533, -3388, 7577, -9621, 4254, 2734, 3441, 3715, -1107, -1151, 7777};
    int gX = 8515;
    int gY = -5929;
    int walkTime = 645;
    int taxiTime = 503;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 7878210;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> tXs = {5356, -354, -1854, -7775, 3042, -7814, -6330, 7628, -9732, -3872, 8212, 6525, 4597, -7782, 7935, 131, 6121, 6073, -3926, 2049, 4770, 3979, -4116, -697, -1154, -6853, -2170, -1046, -2935, -5051, -4203, -8681, 1369, 4632, 2067, -4169, -7236, -3948, -4159, 513, 7469, -5075, 5069, -8869, -4391, 9112};
    vector<int> tYs = {4293, 6085, 849, -4735, 8445, 9247, 1256, -8108, -1024, 264, -5166, 4693, -393, -3994, 3926, 5686, -8593, -5958, 8571, 3981, -6056, -6566, 8456, 8286, -8106, -617, -3836, 2213, -4987, 5850, 2082, -992, 4343, -4692, -3609, 7357, 2571, -242, -1496, 4899, -8598, -7848, 9355, 1092, 3859, 2365};
    int gX = 6348;
    int gY = 6924;
    int walkTime = 50;
    int taxiTime = 304;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 663600;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> tXs = {4384, -3154, -9603, 7154, -5353, 6113, 3344, -428, 7940, 9202, -8706, 3189, 51, 9233, -5863, 1713, 9513, -773, -1305, 6134, 5109, 2308, 1884, 8988};
    vector<int> tYs = {9456, -7339, -2520, -4387, -300, 3725, 6182, 1882, -1028, -1307, -1122, -7981, 5383, -3987, -3846, 4679, -5768, -9835, 804, -4599, 9348, 83, 2992, -3290};
    int gX = 3542;
    int gY = -8925;
    int walkTime = 272;
    int taxiTime = 949;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3391024;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> tXs = {3194, -1103, 9424, 467, -6067, 8767, -4107, 416, 6326, 8594, -7504, -162, -7547, 2577, 1487, -1961, -420, 3040, 4312, -8873, -2777, -6353, 3311, -4474};
    vector<int> tYs = {1101, 5128, -9148, 3461, -2549, 445, -5772, 5575, 3786, 5792, 3913, -9585, 638, -9637, 168, 520, 6388, 3041, -1322, 1589, 5992, -8334, 7431, -9334};
    int gX = 3102;
    int gY = -2954;
    int walkTime = 96;
    int taxiTime = 136;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 581376;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> tXs = {-8892, -1983, 9805, -5774, -7854, -1890, 2794, -55, 2577, -9914, 683, 7463, 5816, -6894, 6024, -1644, -7470, 6966, 1523, 3143, -278, -6622, 4473, 8978, 7167, -1703, -4, 2959, -9635, 693, 4722, 8962, -5879, -1849, -2438, 859};
    vector<int> tYs = {1283, -1032, -1758, 6119, -5072, -7650, 3813, -2010, -3335, 5209, -5494, -9015, 1645, -4465, -6788, 9330, 91, 2897, 7726, -7268, -3955, -6049, -3468, -4296, 9507, 8942, 9731, -2263, -8293, -4806, 7367, 2866, 8317, -1375, 2439, -7869};
    int gX = -4089;
    int gY = -9684;
    int walkTime = 735;
    int taxiTime = 963;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10123155;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> tXs = {845, -2554, -2664, 1908, -4463, -9603, 3191, -2371, -2861, 4491, -1599, -2370, 8310, -5651, 9459, 4988, -5897, 392, -397, -4407, 5601, -7497, 868};
    vector<int> tYs = {49, -6827, 1255, 6989, -9846, -6345, 4047, -3244, 6807, -7028, 1478, 8393, 5387, 8502, -5265, -3370, -5373, 3770, 2592, -6211, 8959, 2458, -4226};
    int gX = 4186;
    int gY = -3914;
    int walkTime = 453;
    int taxiTime = 375;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3143982;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> tXs = {-3823, -8716, -9837};
    vector<int> tYs = {-7824, -3455, -2082};
    int gX = -7463;
    int gY = 9846;
    int walkTime = 258;
    int taxiTime = 662;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4465722;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> tXs = {3822, 9749, 6349, 9021, 47, -4316, -2017, 4559, 8826, -5663, -2275, -5134, -9769, 7620, -4306, -280, 3915, 687, -5809, -1924, 9455, -6730, 9856, 1889, 9940, 4671, 1447, -5906, 9837, -324};
    vector<int> tYs = {1455, 5518, -4071, 2452, -8942, 3221, 5336, -5378, -7269, 2232, 4676, 6747, 6670, 4462, 3470, -2089, -8312, 1656, -3228, -9603, 2469, 1773, 5241, -5357, 3496, -4874, 2104, -2710, -3670, 3181};
    int gX = 6777;
    int gY = -3848;
    int walkTime = 27;
    int taxiTime = 884;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 286875;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> tXs = {1862, -2112, 4911, 3321, 4178, 4459, -2887, -646, 7690, 5460, 8640, -6997, 4155, 9121, 1040, -2198, -8754, 9756, -3200, 8356, 9296, -6826, -9523, 895, 7854, 4980, -149, 42, -1277, 4651, 6236, 7178};
    vector<int> tYs = {7668, -2694, -9470, -7304, -7819, 3913, 6041, 7166, -6807, -7639, 3886, 5870, 9384, -8027, 1088, 8311, -7335, 6032, -2078, 8923, -7780, -2581, -1494, 3205, -9680, 8012, -6330, -3741, -2796, -4648, 5897, 9720};
    int gX = -2917;
    int gY = -2742;
    int walkTime = 165;
    int taxiTime = 255;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 933735;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> tXs = {1074, 8111, 3790, 2796, -3158, -9363, 4636, -6570, 2287, -574, 5890, 2363, 8764, 233, 6002, -3921, -3405, -3360, -2475, 6318};
    vector<int> tYs = {-9215, -2640, 7896, -2961, 4189, -4519, 185, -9456, 1045, -5848, 2620, 198, 4012, -7202, 9764, -55, 6955, 8812, 7724, 3286};
    int gX = 7426;
    int gY = -3895;
    int walkTime = 687;
    int taxiTime = 587;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 7133979;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> tXs = {9608, 3614, 539, -2928, -116, -3159, 7392, -8768, -4461, 447, 2178, 4463, -3091, 8082, -383, -6802, 6098, 3883, -4647, -1404, -4148};
    vector<int> tYs = {6079, -3010, -7654, 2617, -8972, 8070, -281, -5184, -5189, 8384, 7851, -1076, -8196, 3205, -4698, -9734, 5795, -2549, -6381, 6112, 8134};
    int gX = 5631;
    int gY = 7021;
    int walkTime = 199;
    int taxiTime = 717;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2517748;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> tXs = {4358, -6141, 4133, -2384, 7974, 9307, 6456};
    vector<int> tYs = {-3208, -9112, -6350, 9973, -4103, 5267, -7038};
    int gX = -1560;
    int gY = -7461;
    int walkTime = 375;
    int taxiTime = 706;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3382875;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> tXs = {-3041, -9971, -8704, -3990, 6680, 9605, -996, 9327, 7146, -1641, 5318, -2646, -8748, -6197, 4294, -7996, -6922, -2774, -8826, 466, -9151, 6053, -9918, 3353, 6025, 5993, -733, 7210, -2376, 8388, 5557, 9289, -4049, 3137, 4635, -2521, 4845, 2598, 8803, -6723, 6606, -3151, 8855, -9314, 8732, 5709, 1711, 8951, -3387};
    vector<int> tYs = {4761, -8467, -1220, -9578, 8899, 876, -1598, -55, -3165, 4908, 3780, 8803, -3467, -6583, -9521, -7729, -4564, -2868, 3836, -9220, -2679, 6027, 7221, -3612, -8717, -2642, -5802, -1112, 2629, -542, 6833, -9962, 425, 2282, 7430, 9435, 1491, -9258, -4036, 553, -4422, 1832, -9542, -9532, 1520, -8436, -7409, -8240, 9105};
    int gX = -2105;
    int gY = 2736;
    int walkTime = 523;
    int taxiTime = 789;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2531843;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> tXs = {-9860, 6451, 9532, -1967, 6289, -2371, -11, 6799, 5447, 328, 2333, 8115, -6743, -1707, 6204, -2699, 1374, 8337, -5216, -6535, -8635, 6659, 8854, 5089, -9580, 4269, 8772, -1038, -2635};
    vector<int> tYs = {1314, -7272, 8401, -7519, -3409, 4750, 3847, 3340, 4295, -3337, 7152, 4720, -7727, -9013, 6764, -812, -6057, -4207, 5861, -6890, 3655, 4947, -3775, 7091, 6993, -1784, -8994, 3355, -9845};
    int gX = 6246;
    int gY = -8342;
    int walkTime = 770;
    int taxiTime = 151;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4471423;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> tXs = {-7018, -2441, -6340, 136, -9141, -8211, 7035, -5353, -8743, -4930, 2556, 7860, 1931, -3644, -5671, -3070, -397, -6781, -7621, -4629, -5245, 2651, -7141, 3930};
    vector<int> tYs = {2524, -5366, -3920, -7690, 9924, -290, 6379, 4465, -4634, 9410, 4114, -8233, -1116, -8335, -3816, -7746, -4919, 9431, 4511, 3008, 9909, -6855, 2012, -4046};
    int gX = -1400;
    int gY = -2660;
    int walkTime = 496;
    int taxiTime = 521;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2013760;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> tXs = {-5361, -4877, -5483};
    vector<int> tYs = {-6526, -9876, 9682};
    int gX = -2298;
    int gY = 9000;
    int walkTime = 524;
    int taxiTime = 327;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5920152;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> tXs = {6099, -1681, 8841, 9130, 1944, 1910, -570, 9515, -3655, 8723, -5559, 5517, -2502, 503, -3337, 7071, -6115, 1679, 2435, 5610, -2523, -9400, 6826, 6943, -7772, -8032, -5067, 9274, 5785, -5400, 9715};
    vector<int> tYs = {-1164, 3668, 1996, 5770, -4484, -848, -7735, 2106, 9160, -6669, 1486, 5454, -2186, 958, -5487, -606, -6941, -9601, -4403, -9044, -5368, 7251, 1277, 1619, -6900, 3282, 7467, -2100, -893, 5494, 1741};
    int gX = 2992;
    int gY = 8816;
    int walkTime = 863;
    int taxiTime = 635;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 7831188;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> tXs = {5042, -3165, 2457, -8724, -9210, 6382, -1028, -412, -2724, 8891, 2195, -9540, 1828, -8998, -2798, 9591, -9373, 6009, 6067, 3039, -1538, 8675, -949, -9113, -8059, -7626, 3540, -4395, -9056, -451, -2055, 8601, 8063, 1506};
    vector<int> tYs = {-8285, -6129, -907, 1461, -8890, -3671, -4475, -3870, -2571, 8384, 6176, 2012, -2637, 4940, 7020, 1215, -3945, -8944, 7005, 289, 2240, 1834, 3089, 1221, 2645, 551, 1604, -9120, -3961, -8290, 8832, -1932, 2310, -9385};
    int gX = 2867;
    int gY = -1316;
    int walkTime = 676;
    int taxiTime = 115;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2368249;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> tXs = {6973};
    vector<int> tYs = {8580};
    int gX = -3866;
    int gY = 6781;
    int walkTime = 20;
    int taxiTime = 989;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 212940;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> tXs = {-3725, -3341, 8493, 4882, -6704, 1118, 3658, 8869, -8623, -5873, 7606, 9801, 1661, 6414, -8252, -6671, -597, -569, -4166, -4816, 2807, -1003, 3311, -30, 7982, 6397, -7928, -5178, 4789, 7956, -2160, -8577, 3334};
    vector<int> tYs = {6490, -1726, -5973, 6303, 4807, -2769, 6934, -268, -3524, -4474, 8650, -6593, -3222, 9898, 7522, 2580, 4214, -5434, -3282, -5826, 5771, -7472, 2587, -6353, 353, -3483, -6754, 6701, 753, 6257, 296, -4998, -422};
    int gX = 9131;
    int gY = -6323;
    int walkTime = 123;
    int taxiTime = 78;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1374432;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> tXs = {-9959, 9493, -7293, -2374, -5729, -6801, -4710, 436, 3669, 3524, 276, -3781};
    vector<int> tYs = {5876, 4097, 4361, 3118, 3919, -3122, -6519, 4891, 5254, -4990, -2137, -9385};
    int gX = -9141;
    int gY = 710;
    int walkTime = 450;
    int taxiTime = 589;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4432950;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> tXs = {-5757, -6150, 5384, -1990, -125, 7350, -5881, 9497, 7848, 2086, -4011, 977, -6822, 2743, -2439, 2778, -8065, -1767, 9694, 1082, 663, -9277, -2347, 7850, 8366, -8292, -709, -8588, -1673, -1371, 1063, -6250, 2025, -9437, 6659, 5475, -7593, 6503, -2012, -5474, 8792, -5278};
    vector<int> tYs = {-8746, -7056, 5394, 8915, -7002, -6826, -1601, -7255, 4581, -9396, 8162, 3434, -4446, -3123, -9242, -7117, 6770, 4267, -2828, 5322, -7708, -5862, -4883, 2201, 6227, -56, 4091, -6916, 7352, 3917, 9070, 4170, -541, -8416, 3207, 1090, -9721, -6746, -5041, 7619, -3111, 6615};
    int gX = -6684;
    int gY = 0;
    int walkTime = 980;
    int taxiTime = 847;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6550320;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> tXs = {-9515};
    vector<int> tYs = {6777};
    int gX = -424;
    int gY = -7714;
    int walkTime = 666;
    int taxiTime = 717;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5419908;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> tXs = {2626, -5385, 2620, -6763, -2212, -5647, 8239, -4577, -8183, 5199, 3595, 7123, 4976, -2937, 3955, 9013, -5644};
    vector<int> tYs = {-1568, -2489, 1973, -2655, 6447, 4022, 3638, 6821, 8841, 9379, 1750, 2534, -312, 5780, -7765, 7972, 2819};
    int gX = 5365;
    int gY = -6452;
    int walkTime = 820;
    int taxiTime = 622;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 8180586;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> tXs = {9154, 3529, 7443, 7623, -278, 9895, -2813, -4712, 1706, -3415, 1382, 2951, -6384, 9062, -1070, -481, 2490, -8951, 7125, 5811, 1542, 3188, 522};
    vector<int> tYs = {3615, -3467, 1422, 9061, 2456, -7250, -475, -588, -6872, 9426, 3193, 8922, 6214, 3926, -1614, -119, -7044, -917, 5712, 897, 6412, 9982, -4115};
    int gX = -5447;
    int gY = 6330;
    int walkTime = 503;
    int taxiTime = 933;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5923831;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> tXs = {7556, -713, -1328, 6458, -2500, 4371, 4877, 2266, -1981, 4695, 2650, -6532, 4924, -668, -2270, -3497, -2410, -3565, -1834, -1511, 4310, -5282, -3396, 3513, -9477, 2619, -3392, 5861, -1522, -95, 4025, 7448, -8196, -8500, 9411, 1724, 3546, 8289, -7471};
    vector<int> tYs = {9765, -4733, -2811, 3190, 4475, -5592, -3788, -6150, 9372, 6179, 1037, -8030, 7746, -5609, 1454, -4365, -8569, -9235, -1145, -1882, 1427, 64, 9034, 5632, 8288, 7451, 3715, 9387, 6450, 8460, -2549, 4822, 1609, 6972, -8477, -4080, -4691, -8420, -8503};
    int gX = -8687;
    int gY = 7484;
    int walkTime = 57;
    int taxiTime = 294;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 921747;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> tXs = {5750, 64, -6738, 9802, -7857, -8189, -7166, -7157, -3476, 1566, -4881};
    vector<int> tYs = {4951, -8341, 6858, 7534, -8250, -2068, -2699, -3231, -1666, -2523, -9696};
    int gX = 4772;
    int gY = 1456;
    int walkTime = 580;
    int taxiTime = 170;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3593070;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> tXs = {-4947, -7059, 2134, 4062, 3143, 9031, -6460, 4134, -5409, 9702, 7700, 1605, -160, -4467, 2114, -3685, -3978, -6227, -7170, 3849, 183, -844, -2859, 6661, 3902, -8162, -4323, -1553, -8441, -9033, 8679, -7213};
    vector<int> tYs = {-8579, -2889, 6264, -1227, 5892, 7891, -9541, 9958, -3707, 2595, -8672, -5458, 2974, 5434, 761, -6502, 8925, -9908, -93, 4951, -1183, 4082, -9028, -6556, 9919, 5841, -8283, 5920, -7240, -1264, 3030, -8984};
    int gX = 9542;
    int gY = 4466;
    int walkTime = 869;
    int taxiTime = 55;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2012494;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> tXs = {4973, 3355, 2620, -3647, 1699, -564, -7429, -7331, 614, -3200, 6059, 5787, -3812, -6918, -5948, 4643, -6198, 6610, 1703, 3654, -5976, 5176, -1712, -9122, 2690, -5363, 40, 6210, -2795, 3971, 8757, -1292, 4440, 8433, -5925, -2756, -9394, -2537, -7687, -6426};
    vector<int> tYs = {-7945, -1378, 4032, -3047, -2361, 6811, -2551, 5772, 7457, 4916, -925, -5907, -8188, -7909, -325, 3588, 3582, 3648, 5532, 7496, 3768, -1635, -138, -511, 8417, 7602, 7997, -5168, 7935, -6557, 9828, 3597, -5200, 8179, 8050, 698, 703, -7660, 5693, 2522};
    int gX = 8527;
    int gY = 9116;
    int walkTime = 448;
    int taxiTime = 180;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4337540;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> tXs = {-8513, 4903, -5687, -6216, -3448, 2224, 2869, -3763, -9064, -7601, -1376, -9132, -6468, -2490, -2839, -926, -6141, -5147, 787, 5848, 9250, -1824, -9950, -8668};
    vector<int> tYs = {1991, -7342, -3380, 3254, 4700, -2707, 1853, -3863, -2950, -1709, 7119, -7866, -8233, 3775, -7884, -4608, 6329, 4139, -395, 9358, 2619, -3207, 2438, -7531};
    int gX = 5949;
    int gY = -6998;
    int walkTime = 193;
    int taxiTime = 801;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2498771;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> tXs = {8465, -6477, -8030, 3313, -5055, 4615};
    vector<int> tYs = {-931, -2359, 1789, -3200, 3223, -81};
    int gX = -2521;
    int gY = -4229;
    int walkTime = 433;
    int taxiTime = 347;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2922750;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> tXs = {2045, 4210, 3108, -6972, 9837, -318, 8239, -850, 4674, -3362, -9854, -9266, -5818, 9915, 8294, 190, 6591, 5806, -3123, -2775, -636, 1019, -7852, -5175, 2664, 7194, 2575, 6932, -105, -527, -3396, 8804, -7368, -7322, 7801, -3888, 2155, -6433, 2108, 3761, 4887, 2719, -2973, -9551, 3990, 4542, 7445};
    vector<int> tYs = {-5449, -8860, -1940, -3490, -9389, -8608, 7732, 3793, 1562, -1203, -9588, 7555, -201, -2397, 4082, 5906, 5528, 2717, -1447, -5621, 854, 6217, -9704, -7162, 6686, 2560, 891, -4989, 339, -3383, 9497, -2689, -3278, 3668, -5259, 8557, 1016, -4480, 6401, 7254, 5715, -8135, -7722, -1924, 9929, 1037, -9338};
    int gX = 15;
    int gY = 4178;
    int walkTime = 719;
    int taxiTime = 692;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3014767;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> tXs = {-712, 3755, -3021, 6239, 2753, -7532, -9921, 7887, -8785, -2025, 8922, -1152, 7829, 401, -7146, 2428, 3934, -9949, -8765, 3764, 3110, -8430, 219, 5900, 3600, 6410, -8143, -8751, 3255, 4010, -7836, -8660, -3870, -2927, 9787, -7278, -5118, 1335, 1908, -8062, -1900, 5203, 9050, -2562, 6723, -326, -4624};
    vector<int> tYs = {-2095, -4465, 3447, -6900, 6075, 7246, -5303, -2939, 7170, 249, 6659, -8669, -5889, -6933, 4240, 330, -6816, 3024, 4858, -9998, -62, -508, 6579, -6808, 5134, -8993, -9460, -8742, 5465, -2718, 4929, -4526, -1152, 2110, 2765, -3294, 9029, 8199, -9227, -3101, 9275, -59, -8404, 884, -70, 5130, 6621};
    int gX = 1340;
    int gY = -7991;
    int walkTime = 433;
    int taxiTime = 479;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4040323;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> tXs = {-8355, -8317, 135, -5383, 122, 2913, -4522, -3080, -1383, -5012, 6856, 4503, -9710, -936, 7808, 4800, -9884, -7357, -854, 5425, -8366, -1353, 1424, 2130, 9770, -4039, -4151, -1250, -9276, 8716, -2841, -1110, 4963, 6573};
    vector<int> tYs = {-3814, 8919, -4197, 6858, -809, -1284, 2483, -9675, -8753, -8838, -369, 3877, 7178, 8603, 3680, 6952, 2310, -5387, 4400, -1391, -4610, 5505, 798, 259, -6495, -8105, -783, 1806, -4354, -6741, 2784, 6562, -3431, -6686};
    int gX = 6973;
    int gY = 6335;
    int walkTime = 206;
    int taxiTime = 268;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2741448;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> tXs = {-2418, 9174, -4022, -4844, -4099, -7877, -2592, 2767, 9223, 2926, 2134, -1277, -2859, 9556, 5758, -7969, 6066, 226, -2565, 1000, 9265, 9626, 4663, 595, -1316, 1247, 2544, -8291, -9813, -6313, 1652, -7279, 8840, 3826, -6344};
    vector<int> tYs = {-6729, 1123, -1558, 9122, 5718, 9512, 3820, -3263, -9133, -8032, -3518, 6890, -7330, -1341, -1176, 5432, 6356, 8544, 6637, -7807, 2302, 4401, -3560, 4047, 6775, 7941, 2693, 9191, -8209, 3511, 9624, -6333, -8625, 3927, 7479};
    int gX = -1235;
    int gY = 6126;
    int walkTime = 794;
    int taxiTime = 823;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5844634;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> tXs = {-3073, 7923, -8154, 5790, -4225, -1622, -7943, -5178, 2529, 62, 9529, -9661, -2520, -517, 6492, 2588, -6706, 8171, 5878, -7515, -2640, -9605, -8102, -3940, -9144, 3650, -9011, -6583, -1935, 1660, -882, 4480, 4443, -5321, 6492, -1215};
    vector<int> tYs = {-1175, -939, 4118, 1422, 4576, 7737, -6922, -8345, 9183, 8501, 1072, 5845, 9805, -1422, -4711, 2775, -1031, 2283, 6891, 4748, -1357, 9630, 2614, -205, 6043, 378, 9573, 3887, -9685, -1123, 4859, 1032, 4246, -9864, 6625, 4148};
    int gX = 6958;
    int gY = 103;
    int walkTime = 842;
    int taxiTime = 124;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2748638;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> tXs = {8251, 4606, 3803, 7199, 2269, 3331, 6495, -9430, 5658, 1358, -2269, -1332, 3169, -7288};
    vector<int> tYs = {-8409, 5216, -4632, -5957, 3569, 6895, 1272, 6895, 6334, 5990, 6542, 1716, 1093, -2602};
    int gX = 9357;
    int gY = -2653;
    int walkTime = 515;
    int taxiTime = 507;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6185150;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 2672;
    int gY = 7545;
    int walkTime = 318;
    int taxiTime = 713;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3249006;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> tXs = {-1442, 2675, -1638, 9114, 6201, 3099, 7291, -4725, 5499, 3573, -2769, -3053, 7712, 3248, -5192, 778, -7290, 9366, -1993, 6011};
    vector<int> tYs = {-1730, 6177, -3784, 6590, 1598, -1429, 3169, 3451, 5323, 2425, -8726, -1740, -3718, 4107, 6477, -5505, -2599, 3669, -6987, 4642};
    int gX = -5900;
    int gY = 703;
    int walkTime = 135;
    int taxiTime = 936;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 891405;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> tXs = {776, 9705, -106, -467, -2872, 2966, -1453, -2376, -8297, 2752, -5114, -4847, 7687, 3973, 9201, 7313, -1894, 3212, 4890, -4965, -9355, -2888, -827, -9739, 9496, -1159, 4461, 1044, 7754, 2393, 6415, -1266, 8899, 9491, 9712, -5453, 847, -1137, 7519, -2261};
    vector<int> tYs = {-650, 241, -5946, -3273, -6343, 6549, 3789, -7883, 4646, -525, 449, -2830, 4687, -2446, 720, -2533, -2106, -97, -3019, 5996, 5606, -2424, 4238, 4504, -3583, 8154, 3042, -7331, -97, -1040, -9954, 2969, 8164, 9303, -7166, 4135, -5657, 7121, -9343, 1093};
    int gX = -8899;
    int gY = 2260;
    int walkTime = 633;
    int taxiTime = 522;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6197292;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> tXs = {7737, 4269, 6278, 8990, -9245, 6167, 5577, 6478, 7187, 8086, 1958, 8737, 6099, 4892};
    vector<int> tYs = {-7311, -3466, -263, -2181, -2870, 6276, 678, -8230, 8810, 1275, 4160, -5625, -7160, -997};
    int gX = -4693;
    int gY = 9578;
    int walkTime = 915;
    int taxiTime = 732;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 13057965;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> tXs = {7003, -3155, -4386, -8149, 7269, -7315, -468, -447, 816, 6195, -3032, 1283, -1208, 9350, 6990, 9229, 6092, -307, -7837, 1733, -9572, -5159, 8433, 690, -2056, -8227, 4539, -5154, 7640, -595, -4228, -9976, 1884, -2040, 1806, -7718, -4730, 3666, 3390, -4982, 9081, 2284, -2345, 6052, 3632};
    vector<int> tYs = {718, -4114, 745, -4086, -6511, -2434, -6906, 2675, -8839, 1163, 9865, -1173, 7574, 2001, -3039, 5037, -9218, 858, 8921, 2289, 1798, 2421, 9856, -4032, 6590, -9601, 3495, -4460, 9261, -6560, -7281, -3523, -720, 972, -6034, -3933, -9326, -6863, -3084, -253, -3959, -6064, 4825, -405, 3311};
    int gX = -13;
    int gY = 1731;
    int walkTime = 341;
    int taxiTime = 296;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 594704;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> tXs = {-8366, 8121, -3742, -8757, 3580, -298, 6269, -710, 9671, 3169, 6962, -7079, -5772, 6107};
    vector<int> tYs = {5761, 5101, 4, -8269, -6278, -768, -6955, -7349, 6756, 1287, -4109, -5417, -8407, -7093};
    int gX = 1333;
    int gY = 2513;
    int walkTime = 443;
    int taxiTime = 177;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1341662;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> tXs = {3181};
    vector<int> tYs = {2335};
    int gX = -1168;
    int gY = 4590;
    int walkTime = 650;
    int taxiTime = 759;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3742700;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> tXs = {7025, -9248, -4234, -2741, -3648, -7859, 5686, -2623, -9221, -8169, -4595, 8660, 8726, 1112, 4287, 8466, 5189, -4728, -8166, 1787, 2330, -8822, 2436, 9976, 1913, -7735, 7156, -4782, 6231, -6164, 1710, 6141, -830, 6567, 4773, -5074, 4043, 1086, 5757, 1348, -158, 1560, -3810, 4101, 2542, 1121};
    vector<int> tYs = {1854, 702, 2678, -2957, -5734, 7825, -2136, -1860, -9690, -6586, -6723, 5162, -6686, 9823, -9388, -6761, 5759, 1272, 3205, -6943, -2190, -2384, -3510, 6753, -9097, -2363, -964, 6983, -6334, -4614, -6083, 5185, -7571, 8111, 5189, 29, 3610, 9245, -767, 2096, 208, -4980, 5735, -4223, 9711, -1826};
    int gX = 3859;
    int gY = 8069;
    int walkTime = 741;
    int taxiTime = 722;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 8677452;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> tXs = {5642, 7302, -2161, 9838, 47, -4650, -6636, 1810, 9157, 5773, 6849, -719, 9517, 9864, -9976, 8558, 6828, -6212, -6982, 9965, 4785, -1179, -3786, 8816, 6154, 3303, -122, -8258, 3377, -150, 1300, -5597};
    vector<int> tYs = {-2916, -6171, -4771, -1201, 8794, 5504, 2633, -450, 6031, -143, -5552, -4170, 843, -4028, 6858, -127, 703, 1040, 8158, -3247, 5886, 2945, -7859, 7014, -1058, -403, 1898, 7474, -822, 4122, 9433, 1856};
    int gX = 960;
    int gY = 17;
    int walkTime = 815;
    int taxiTime = 5;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 796255;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> tXs = {1496, -2125, -7862, 5857, 7011, -7573, 286, -7713, 6482, -8472};
    vector<int> tYs = {-8431, -3097, -6017, -9575, 5628, -4544, 1666, 7856, -5505, 8439};
    int gX = 6638;
    int gY = 8942;
    int walkTime = 640;
    int taxiTime = 287;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5160516;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> tXs = {4973, 7425, 7339, -9313, 2550, -5976, -7202, 4207, -6323, 552, 7999, 5855, 1519, -1670, 8046, -7790, 1208, -4094, 8040, -3804, 5610, -5559, -3955, -3412, -2380, -7458, -32, -7517, -9993, -2207, 1865, -7532, -1188, 7264, -1807, -6726, 1325, 4249, 9519, 7676, -5338, 3513, 8206, 6400, -4063, 2308};
    vector<int> tYs = {-3379, -1383, -9871, 5758, -6078, 4055, 8621, -131, 8423, 1575, 6597, 5546, 9200, -899, 7576, 9363, -2334, -1620, 4679, -405, -4584, 8403, -2677, 491, -6708, -4377, 4326, -8345, 8317, 3856, -7423, -2063, 136, 1754, 5418, 215, 3615, 745, -148, 2466, -786, -8670, 6756, -4492, 7805, -9375};
    int gX = -2415;
    int gY = -6797;
    int walkTime = 690;
    int taxiTime = 641;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6030773;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 1546;
    int gY = -591;
    int walkTime = 452;
    int taxiTime = 557;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 965924;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> tXs = {2101, -3788};
    vector<int> tYs = {-1217, 7479};
    int gX = 9470;
    int gY = 8977;
    int walkTime = 761;
    int taxiTime = 550;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 12184648;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> tXs = {-5152, 5473, -6530, 6001, -6159, 7160, 7611, -6335, -2028};
    vector<int> tYs = {8868, 4922, 3754, 7805, -5370, 2723, -1432, 6843, -9347};
    int gX = 7505;
    int gY = -1813;
    int walkTime = 534;
    int taxiTime = 187;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4920031;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> tXs = {-5469, -4207, -6814};
    vector<int> tYs = {836, 5653, 1862};
    int gX = 7547;
    int gY = 2533;
    int walkTime = 914;
    int taxiTime = 441;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 9213120;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> tXs = {-3320};
    vector<int> tYs = {-9031};
    int gX = 7476;
    int gY = -9494;
    int walkTime = 568;
    int taxiTime = 748;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 9638960;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> tXs = {6324, -5115, 3043, 8304, -8542, -6746, -8719, -6903, 2660, -2331, 4483, 5670, 240, 6988, 2648, 5663, 6734, -5730, 7799, -1262, -4601, -1044, -2550, -4984, -455, -8496, 3792, -6995, -1303, 2808};
    vector<int> tYs = {914, 2523, -407, -7781, 2437, -5464, -4819, -8309, -6569, 2567, 8348, 9370, 6003, 9220, 623, -6436, -1881, 8618, -4362, 3363, 5304, 8194, 5873, 6860, -5265, 7197, -5493, 1912, 3381, -196};
    int gX = 7098;
    int gY = 6504;
    int walkTime = 190;
    int taxiTime = 491;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2584380;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> tXs = {6810, -4270, 8065, -2635, -9671, -3778, -1398, 7453, -915, 8328, 4373, 3987, 8752, 5345, 7903, 1133, 3481, 6316, -7649, -7499, -7279, -7524, 4956, 593, 3568, 3548, 8692, -8098, -9728, 1757, -3704};
    vector<int> tYs = {-4392, -3127, -4708, -762, 209, -741, 1190, -2616, 1723, -5792, 4576, 527, -8853, -9052, -9201, -7631, -2487, -4755, 9456, 398, 3376, 6994, -9787, 8385, -9071, -8369, 2266, -6148, -9012, -6090, 2168};
    int gX = -1920;
    int gY = -8475;
    int walkTime = 878;
    int taxiTime = 106;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3352086;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> tXs = {7529, -179, 8778, -7852, -850, -2626, 4092, -566, -9689, 811, 4556, -4050, 5752, 8979, 3394, -321};
    vector<int> tYs = {5790, 8526, -607, 7376, 1638, 4825, -182, 8985, -9304, -7605, 7543, 4536, 7078, 9764, 878, 1999};
    int gX = 1661;
    int gY = 5080;
    int walkTime = 991;
    int taxiTime = 541;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5038203;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> tXs = {4686, -9809, 4318, 526, 5984, -2153, -3796, 9296, -170, 3548, 5904, -3308, -7857, 9398, 8927, -414, -8906, -3669, 6476, 5315, 3701, 3957, 8709, -4818, -715, 2814, 40, 8700, 6416, -8063, 5641, -6054, -5013};
    vector<int> tYs = {8423, -7623, -1339, -1546, -7626, -956, -1945, 5595, 7676, 8740, 4382, -5412, 8253, -2407, -9458, -4921, -1819, -3580, -238, -4109, -8147, 2363, -9802, -8679, -5795, 5081, -4892, -4400, -1724, 987, 8366, -8466, 2369};
    int gX = -377;
    int gY = -5941;
    int walkTime = 662;
    int taxiTime = 4;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1392856;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> tXs = {4359, -5938, 6727, -7943, -3202, -6641, 9365, 7972, 6366, -7778, 1901};
    vector<int> tYs = {69, -9716, 9485, 8047, 9174, 5293, -5286, -2152, -424, -9323, 5734};
    int gX = -2167;
    int gY = 1163;
    int walkTime = 46;
    int taxiTime = 367;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 153180;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> tXs = {9603, 296, 6306, -5381, 2486, 2683};
    vector<int> tYs = {6053, 1706, -6585, -8591, -8285, 2315};
    int gX = -7050;
    int gY = 2111;
    int walkTime = 854;
    int taxiTime = 556;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6019264;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> tXs = {6004, 1371, 6833, 9221, -1518, -656, -2268, -7095, 1079, -6526, -2709, -348, 6221, -6224, 1691, 4980, -8323, 1800, -7472, 4686, 5662, 1922, 4914, 3874, -9325, -79, 2950, -9977, 9634, 8621, -1373};
    vector<int> tYs = {-5542, -3655, -2201, 502, -481, 770, -594, -6204, 7610, -7352, -8709, 7434, 5427, 8688, -6806, -9874, 9460, -550, 2031, 1159, -295, -6264, 3544, 5009, -1599, -5819, -4598, -3244, 2909, -557, 3411};
    int gX = 2386;
    int gY = 6162;
    int walkTime = 638;
    int taxiTime = 845;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5453624;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> tXs = {-6616, -2545, -6709, 8996, 6627, -1165, -6396, -7075, 886, -4378, -4627, 8494, -8546, 7676, -2663, 7332, 8244, 7969, -524, -7314, 766, -8141, 4798, 7340, -2551, -9056, -4973, 8810, -5330, -6855, 8084, 5976, -4093, -4344, -9744, -3735, 6394, 2406};
    vector<int> tYs = {-4878, -5048, 8843, -9035, 552, -4732, 9183, 5306, 3160, 6363, -1959, -1342, 3982, 4055, 7807, 4192, 7996, 6898, 2591, 1009, -245, 1037, -1317, 2616, -5446, 7244, -4588, -9420, 1113, 2379, 4915, -1871, -3195, -7429, -5671, -6533, 1456, 366};
    int gX = 934;
    int gY = -1055;
    int walkTime = 877;
    int taxiTime = 379;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1257309;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> tXs = {707, -6898, 9797, -3783, -5018, 4804, 4242, -8947, -4948};
    vector<int> tYs = {2660, -7181, -6149, 9412, -7577, -4517, -884, -7055, 5261};
    int gX = 8829;
    int gY = -4823;
    int walkTime = 152;
    int taxiTime = 900;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2075104;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> tXs = {1827, 4198, 8776, 8034, -131, -8669, -5252, -7928, -1969, -3218, 9051, -4576, 8536, -6348, -1177, 6570, -2381, -9386, -8212, -4257, 7304, -1240, 4243};
    vector<int> tYs = {-9773, 3554, 2362, -2386, 190, -1634, -5493, 7791, 6480, -7794, -4588, -7530, 4648, 1954, 2895, 7247, 3101, 2899, -6104, 5942, -357, 8586, -5681};
    int gX = -9512;
    int gY = -1836;
    int walkTime = 579;
    int taxiTime = 87;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1178268;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> tXs = {2272, -40, 4003, 1479, -2708, 2067, -4387, 1384, 8570, -3982};
    vector<int> tYs = {-4477, -7688, -2635, 4311, 1849, -6402, 5724, 5410, 7425, -1102};
    int gX = 480;
    int gY = -6426;
    int walkTime = 92;
    int taxiTime = 249;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 635352;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> tXs = {-4305, -230, 1443, -6486, 8642, -2720, -2452, 6789, 7021, -8684, -6351, -1557, 9413, 859, -6967, -9845, -7002, 4344, 6044, -9218, 3939, -5739, -6469, 1188, -9757, 5127, 3624, 6395, -4966, -1028, -7801};
    vector<int> tYs = {-3344, 6104, 6428, -2125, 8778, -9113, 5976, -6120, 6304, -9009, 7471, 9491, -1352, -2095, -1238, -535, 7785, 6525, -4875, 457, 4550, -1511, -1324, 4071, -2322, -9467, 6665, -786, -5901, 2641, -353};
    int gX = -8306;
    int gY = -9011;
    int walkTime = 155;
    int taxiTime = 201;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2684135;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> tXs = {5753, 5575, 8404, 9202, -6205, 795, -1836, -1736, 9799, -6009, 6808, -2983, 867, 4074, -1546, 7842, 1772, 8034};
    vector<int> tYs = {2462, 4368, -1477, -5026, 4006, 7633, -3396, -8792, -3248, -1510, -2581, 8413, -9837, 6084, -5550, 1432, -6885, -7772};
    int gX = 430;
    int gY = -4138;
    int walkTime = 317;
    int taxiTime = 264;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1448056;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> tXs = {1947, -790, 2567, 5305, 5181, 1642, 2046, 0, 849, -816, 2573, -619, -491, 3324, 2042, 0, 0, -478, -133, 1782, 1438, 0, 0, 0};
    vector<int> tYs = {-642, 1080, 3141, 0, 526, -694, -625, -975, 4858, 927, -535, 2081, 2831, 2383, 3665, -975, -975, 2907, 4928, -670, 4269, -975, -975, -975};
    int gX = 5222;
    int gY = 8408;
    int walkTime = 624;
    int taxiTime = 442;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 7063004;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> tXs = {-2635, 1705, -5781, 0, 0, 470, 0, 0};
    vector<int> tYs = {-4048, 0, 0, 1705, 1705, -4840, 1705, 1705};
    int gX = -5471;
    int gY = -4966;
    int walkTime = 844;
    int taxiTime = 501;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 7521206;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> tXs = {805, 0, 0, -2795, 1173, 22, -3466, 0, -3466, 301, 1173, 0, 1173, 0, -92, 0, 1173, -2066, -319, 0, 0, -3274, -1235, 1173, 0, 1173, -3466, -2438, 984};
    vector<int> tYs = {1266, -1173, -1173, 1242, 0, 3962, 0, 4038, 0, 3001, 0, -1173, 0, 4038, 3946, -1173, 0, 1972, 3719, 4038, -1173, -192, -814, 0, -1173, 0, 0, 1600, 650};
    int gX = -3231;
    int gY = 4313;
    int walkTime = 713;
    int taxiTime = 392;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4253125;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> tXs = {0, 0, -983, -6083, 513, 0, 513, -3645, 0, -6083, -3398, 0, 513, 513, -2108, 0, -5932, -2844, 513, 513, 0, 513, -359, 0, 0, 513, 513, 431, 513, -4473, 0, 0};
    vector<int> tYs = {-514, -513, 1469, 0, 0, -513, 0, 1273, 1542, 0, -262, 1542, 0, 0, -357, -513, 1023, 1332, 0, 0, 1542, 0, 1515, 1542, -513, 0, 0, 1103, 0, 1212, -513, 1542};
    int gX = -6013;
    int gY = 1111;
    int walkTime = 277;
    int taxiTime = 239;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1966926;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> tXs = {1503, 1028, 0, 0, -2093, 0, 0};
    vector<int> tYs = {0, 475, -1902, -1902, -262, -1902, -1902};
    int gX = -1715;
    int gY = -926;
    int walkTime = 739;
    int taxiTime = 203;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1951699;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> tXs = {255, 270, 162, -53, 229, 125, -290, 179, -319, -57, -148, 0, 270, -58, 270, 180, 0, 0, 175, 270, 256, -319, 149, 260, 0, 0, -289, 243, 199, -177, -163, -125, -163, -319, 0, -319, -319, 0, -42};
    vector<int> tYs = {29, 0, -109, 468, -41, 279, -29, -91, 0, 464, -171, -270, 0, 463, 0, -90, -270, 521, 183, 0, -14, 0, -121, -10, -270, -270, 57, 52, 137, 273, 300, 373, 300, 0, -270, 0, 0, -270, -248};
    int gX = -101;
    int gY = 868;
    int walkTime = 63;
    int taxiTime = 20;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 41752;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> tXs = {-400, -401, 5, 44, -337, -88, 44, 21, 44, 18, 44, 44, 44, -270, -289, 12, 27, 44, 4, 44, 0, -262, 0, 0, 0, 0, 0, 44, -130};
    vector<int> tYs = {0, 0, 355, 0, 62, 312, 0, -23, 0, 234, 0, 0, 0, 130, -12, 289, 151, 0, 363, 0, -44, -15, -44, -44, 400, -44, -44, 0, 270};
    int gX = -773;
    int gY = 441;
    int walkTime = 51;
    int taxiTime = 41;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 53764;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> tXs = {0, 0};
    vector<int> tYs = {92, 92};
    int gX = -322;
    int gY = -298;
    int walkTime = 62;
    int taxiTime = 46;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 38440;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> tXs = {0, 6, 6, 0, 0, -261, 3, 0, -186, 0, 5, 0, 0, 0, 5, -31, 0, 0, -31, 5, 5, -31, -187, 5, 0, 5, 5, 5, 0, 5, -33, 0, -238, 0, -211, -238, 5, 0};
    vector<int> tYs = {-5, 0, 0, 261, 261, 0, 83, -5, -1, -5, 0, 239, 239, -5, 0, -4, -5, 239, -4, 0, 0, -4, -1, 0, -5, 0, 0, 0, -5, 0, 204, 238, 0, -5, 27, 0, 0, -5};
    int gX = -889;
    int gY = 736;
    int walkTime = 53;
    int taxiTime = 51;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 83349;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> tXs = {0, 222, 223, 63, -402, 140, 64, -119, 107, -10, 222, -269, 0, -544, -136, 0, 0, -544, -544, 0, 222, 219, 206, 222, 153, 0, -155, -447, 21, 122};
    vector<int> tYs = {223, 0, 0, -412, 80, -232, -411, 180, -326, 218, 0, -361, 222, 0, -427, 222, 222, 0, 0, -475, 0, -8, -44, 0, -195, 222, 167, -182, -454, 100};
    int gX = -497;
    int gY = -391;
    int walkTime = 48;
    int taxiTime = 23;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 36149;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> tXs = {-2, -4, 1, 0, -4, 0, -4, -4, -4, 0, -4, 34, 0, 0, 0, -4, 0, 34, 34, -4, -4, 0, 0, 0, -4, 0, -3, -2, 27, 0, -1, -3, 0, -3, 8, 4, 0, 26, 0, 26, 26, 19, 26, 4};
    vector<int> tYs = {1, 0, 3, -34, 0, -34, 0, 0, 0, -34, 0, 0, 4, -34, 4, 0, 4, 0, 0, 0, 0, 4, -34, -34, 0, 4, -1, -4, 0, -27, -14, 0, -26, 0, -18, 2, -26, 0, 3, 0, 0, -7, 0, -22};
    int gX = 83;
    int gY = -97;
    int walkTime = 6;
    int taxiTime = 5;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 925;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> tXs = {1, 0, -5, 0};
    vector<int> tYs = {-25, 5, 0, -27};
    int gX = 42;
    int gY = -51;
    int walkTime = 7;
    int taxiTime = 5;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 517;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> tXs = {-48, -23, 0, -1, 13, 22, 22};
    vector<int> tYs = {-6, 36, -22, -21, 26, 0, 0};
    int gX = -50;
    int gY = 33;
    int walkTime = 6;
    int taxiTime = 3;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> tXs = {-27, 0, 18, 7, 18, 5, -23, 9, 0, 0, -27, -4, 0, 18, 14, -22};
    vector<int> tYs = {0, -29, 0, -17, 0, 13, 4, -14, 18, -29, 0, -25, -29, 0, 3, -7};
    int gX = -23;
    int gY = -37;
    int walkTime = 8;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> tXs = {-16, -40, -40, 0, -17, 0, 49, -4};
    vector<int> tYs = {-23, 0, 0, -40, 28, -40, 0, 44};
    int gX = 80;
    int gY = 81;
    int walkTime = 9;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 551;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> tXs = {2, 0, 2, -5, 1, 1, 1, -5, 0, 0, 0, 0, 0, 1, -3, 1, 0, 1, 1, -2, 0, -4, 0, 1, 1, 1, 0, 0, -4, 1, 0, 0, 0, 0, 1, 0, 0, 0, -6, -2, 1, 0, 0, 1};
    vector<int> tYs = {0, -1, 0, 1, 0, 0, 0, 0, -1, -1, -1, -1, 6, 0, 3, 0, 6, 0, 0, 4, -1, 2, -1, 0, 0, 0, -1, -1, 2, 0, -1, 6, 6, -1, 0, -1, -1, -1, 0, 4, 0, -1, -1, 0};
    int gX = -8;
    int gY = 8;
    int walkTime = 4;
    int taxiTime = 3;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> tXs = {3, 0, -1, 0, 1, 1, -2, 0, 0, -2, 0, 0, -2, 6, 0, 0, -2, 3, 0, 0, 0, 7, 0, -1, 0, 3, -2, 7, 6, 0, -1, 2, 2, 0, 8, 1, 0, 1, 8, -2, 0, 7, -2, 0, 6};
    vector<int> tYs = {4, -2, 3, -2, 4, 4, 0, -2, -2, 0, -2, -2, 0, 3, -2, -2, 0, -1, -2, 4, -2, 3, -2, -1, -2, -1, 0, 1, 3, -2, -1, -1, -1, -1, 0, -1, 4, -1, 0, 0, 4, 1, 0, 4, 2};
    int gX = 9;
    int gY = 3;
    int walkTime = 4;
    int taxiTime = 3;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> tXs = {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, -5, 0, 0, -5, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, -5, 1, -5, 0, 1, 0, -5};
    vector<int> tYs = {1, 0, -1, -1, 1, 1, 0, -1, -1, 0, -1, 1, 0, 1, 1, 0, 1, 0, 0, -1, 0, 1, -1, 1, 1, 0, -1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0};
    int gX = -4;
    int gY = 0;
    int walkTime = 3;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> tXs = {0, -2, 1, -2, -1, 0, -2, -2, -1, -2, -2, 0, 5, 1, -2, -2, 0, 5, 8, -1, -1, -1, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1, 0};
    vector<int> tYs = {2, 0, 1, 0, 0, -7, 0, 0, -1, 0, 0, 2, -5, 1, 0, 0, 2, -5, 0, 0, 0, 0, 1, 1, -2, 0, 1, -7, 1, 1, 0, -7, 0, 0, 0, 1};
    int gX = 8;
    int gY = -6;
    int walkTime = 5;
    int taxiTime = 4;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> tXs = {-2, -2, -1, 0, 3, -3, -3, 3, 0, 2, 2, 0, -3, 3, 2, -3, 3};
    vector<int> tYs = {-1, -1, -6, 3, 0, 0, 0, 0, 3, 1, -1, 3, 0, 0, -1, 0, 0};
    int gX = 0;
    int gY = -10;
    int walkTime = 3;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> tXs = {82, -60, 57, 98, 30, -67, 84, -42, -100, 62};
    vector<int> tYs = {-7, 90, 53, -56, -15, -87, 22, -3, -61, -30};
    int gX = 21;
    int gY = 15;
    int walkTime = 53;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1908;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> tXs = {34, -12, 1, 0, 21, -43, -98, 11, 86, -31};
    vector<int> tYs = {11, 5, -68, 69, -78, -49, -36, -2, 1, 70};
    int gX = -97;
    int gY = -39;
    int walkTime = 47;
    int taxiTime = 13;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2476;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 10000;
    int gY = 10000;
    int walkTime = 1000;
    int taxiTime = 1000;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20000000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = -1;
    int gY = 1;
    int walkTime = 12;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 30;
    int gY = -30;
    int walkTime = 1;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 10000;
    int gY = 10000;
    int walkTime = 1000;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20000000;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 3;
    int gY = -3;
    int walkTime = 10;
    int taxiTime = 100;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> tXs = {3};
    vector<int> tYs = {0};
    int gX = 5;
    int gY = 0;
    int walkTime = 10;
    int taxiTime = 20;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 10;
    int gY = -10;
    int walkTime = 1;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> tXs = {44};
    vector<int> tYs = {44};
    int gX = -1;
    int gY = -1;
    int walkTime = 2;
    int taxiTime = 7;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = -2;
    int gY = 2;
    int walkTime = 5;
    int taxiTime = 5;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = -5;
    int gY = -5;
    int walkTime = 1;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 9999;
    int gY = 10000;
    int walkTime = 999;
    int taxiTime = 10;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 19979001;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> tXs = {-1};
    vector<int> tYs = {0};
    int gX = 2;
    int gY = 0;
    int walkTime = 1;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> tXs = {-99};
    vector<int> tYs = {-99};
    int gX = 1;
    int gY = 0;
    int walkTime = 2;
    int taxiTime = 4;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> tXs = {1};
    vector<int> tYs = {0};
    int gX = -4;
    int gY = -5;
    int walkTime = 10;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> tXs = {-100};
    vector<int> tYs = {-100};
    int gX = -101;
    int gY = 100;
    int walkTime = 2;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 402;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> tXs = {1};
    vector<int> tYs = {1};
    int gX = 3;
    int gY = 2;
    int walkTime = 1000;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2003;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = -5;
    int gY = -5;
    int walkTime = 10;
    int taxiTime = 50;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> tXs = {10, 10};
    vector<int> tYs = {10, -10};
    int gX = 10;
    int gY = -11;
    int walkTime = 10;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> tXs = {-1, 2};
    vector<int> tYs = {-1, 2};
    int gX = 3;
    int gY = 3;
    int walkTime = 10;
    int taxiTime = 9;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 100;
    int gY = 100;
    int walkTime = 10;
    int taxiTime = 10;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> tXs = {50};
    vector<int> tYs = {50};
    int gX = 50;
    int gY = 50;
    int walkTime = 1000;
    int taxiTime = 1000;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> tXs = {0, 0};
    vector<int> tYs = {-1, 2};
    int gX = 0;
    int gY = 4;
    int walkTime = 2;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> tXs = {2};
    vector<int> tYs = {-1};
    int gX = 5;
    int gY = -3;
    int walkTime = 100;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = -1;
    int gY = 1;
    int walkTime = 4;
    int taxiTime = 3;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 10000;
    int gY = 10000;
    int walkTime = 10;
    int taxiTime = 2;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = -10000;
    int gY = -10000;
    int walkTime = 1000;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20000000;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> tXs = {34, -12, 1, 0, 21, -43, -98, 11, 86, -31};
    vector<int> tYs = {11, 5, -68, 69, -78, -49, -36, -2, 1, 70};
    int gX = -97;
    int gY = -39;
    int walkTime = 1;
    int taxiTime = 50;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 3;
    int gY = -3;
    int walkTime = 10;
    int taxiTime = 5;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> tXs = {1};
    vector<int> tYs = {0};
    int gX = 10;
    int gY = 0;
    int walkTime = 1000;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1009;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> tXs = {1};
    vector<int> tYs = {-1};
    int gX = -1;
    int gY = 1;
    int walkTime = 1;
    int taxiTime = 1000;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = 2;
    int gY = -1;
    int walkTime = 100;
    int taxiTime = 1;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> tXs = {};
    vector<int> tYs = {};
    int gX = -10;
    int gY = 10;
    int walkTime = 100;
    int taxiTime = 200;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> tXs = {-2, -2};
    vector<int> tYs = {0, -2};
    int gX = 4;
    int gY = 2;
    int walkTime = 15;
    int taxiTime = 3;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> tXs = {1};
    vector<int> tYs = {0};
    int gX = 7;
    int gY = 0;
    int walkTime = 10;
    int taxiTime = 3;
    GrabbingTaxi* pObj = new GrabbingTaxi();
    clock_t start = clock();
    int result = pObj->minTime(tXs, tYs, gX, gY, walkTime, taxiTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22695552&rd=12172&pm=8753
********************************************************************************
#include<iostream> 
#include<vector> 
#include<algorithm> 
#include<list> 
#include<map> 
using namespace std; 
class GrabbingTaxi{ 
public: 
    int minTime(vector <int> xx, vector <int> yy, int x, int y, int wt, int tt){ 
  int min,i,p,t; 
  min=wt*(abs(x)+abs(y)); 
  for(i=0;i<xx.size();i++){ 
      p=wt*(abs(xx[i])+abs(yy[i])); 
      t=tt*(abs(xx[i]-x)+abs(yy[i]-y)); 
      if((p+t)<min) 
    min=p+t; 
  } 
  return min; 
    } 
};

********************************************************************************
*******************************************************************************/