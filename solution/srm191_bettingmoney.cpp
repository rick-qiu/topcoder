/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2297
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

class BettingMoney {
public:
    int moneyMade(vector<int> amounts, vector<int> centsPerDollar, int finalResult);
};

int BettingMoney::moneyMade(vector<int> amounts, vector<int> centsPerDollar, int finalResult) {
    int ret;
    return ret;
}


int test0() {
    vector<int> amounts = {10, 20, 30};
    vector<int> centsPerDollar = {20, 30, 40};
    int finalResult = 1;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 3400;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> amounts = {200, 300, 100};
    vector<int> centsPerDollar = {10, 10, 10};
    int finalResult = 2;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 49000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> amounts = {100, 100, 100, 100};
    vector<int> centsPerDollar = {5, 5, 5, 5};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 29500;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> amounts = {5000, 5000};
    vector<int> centsPerDollar = {100, 2};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> amounts = {5000, 5000};
    vector<int> centsPerDollar = {100, 2};
    int finalResult = 1;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 490000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> amounts = {123, 342, 424, 524, 234, 634, 1000};
    vector<int> centsPerDollar = {12, 32, 42, 62, 12, 53, 5000};
    int finalResult = 6;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -4771900;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> amounts = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    vector<int> centsPerDollar = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -500000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> amounts = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    vector<int> centsPerDollar = {0, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 24500000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> amounts = {100, 0, 0, 20};
    vector<int> centsPerDollar = {10, 100, 1000, 1};
    int finalResult = 1;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 12000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> amounts = {0, 0, 0, 0};
    vector<int> centsPerDollar = {0, 0, 0, 0};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> amounts = {100, 20, 20, 20};
    vector<int> centsPerDollar = {10, 10, 5000, 10};
    int finalResult = 2;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -86000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> amounts = {100};
    vector<int> centsPerDollar = {10};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> amounts = {100, 2000};
    vector<int> centsPerDollar = {10, 100};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 199000;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> amounts = {1249, 1495, 1060, 2165, 2147, 872, 1033, 3364, 613, 3030, 3306, 1267, 2973, 1997, 2183, 1820, 3308, 2167, 1471, 3005, 2265, 4612, 3592, 2485, 1189, 993, 4185, 2681, 1642, 1978, 2735, 1211, 1514, 572, 4450, 4231, 1306, 1161, 748, 4222, 2585, 2450, 2764, 3697, 3849, 571, 2732, 4828, 2400, 1856};
    vector<int> centsPerDollar = {2055, 654, 3243, 3537, 3040, 3274, 2424, 4773, 1207, 3325, 1110, 3448, 466, 3846, 3118, 1708, 16, 2260, 1607, 1452, 778, 834, 2925, 4370, 470, 4445, 2112, 4850, 4245, 3194, 1432, 1506, 2034, 4910, 3384, 1608, 288, 4811, 4014, 2088, 2403, 113, 1176, 1814, 3267, 2205, 2033, 1434, 859, 1706};
    int finalResult = 49;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 8250964;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> amounts = {3689, 4194, 3775, 4890, 1886, 725, 753, 2556, 1433, 1626, 3933, 424, 4060, 3348, 3620, 3130, 4219, 335, 4432, 3445, 3914, 3204, 2116, 576, 1481, 2495, 1690, 1938, 506, 2076, 811, 2747, 3761, 3273, 2294, 1379, 2358, 4454, 2062, 3297, 2731, 4415, 2954, 3225, 1283, 4509, 2506, 3380, 4179, 4928};
    vector<int> centsPerDollar = {2969, 4303, 4184, 4097, 3013, 3222, 1677, 4035, 695, 631, 2511, 1862, 465, 4055, 3724, 1542, 1083, 3207, 3784, 1777, 2052, 2837, 1275, 4910, 3049, 1761, 2242, 1611, 1730, 382, 1521, 307, 1182, 4369, 1805, 1963, 1734, 4317, 4983, 2924, 3009, 2758, 1592, 164, 4212, 3490, 4178, 3041, 341, 2396};
    int finalResult = 3;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -6821830;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> amounts = {4903, 1493, 387, 3110, 4677, 1967, 3417, 4251, 3389, 3840, 1586, 992, 376, 292, 4161, 4015, 2910, 1727, 640, 3613, 948, 3312, 2489, 1795, 3114, 3329, 4685, 3949, 544, 4560, 1902, 386, 2910, 3581, 312, 4357, 204, 3105, 2659, 538, 3326, 1250, 1637, 1439, 4458, 4347, 4699, 3872, 3643, 3035};
    vector<int> centsPerDollar = {354, 1983, 3711, 1382, 4360, 4085, 2302, 1743, 3838, 1199, 3903, 417, 1704, 2555, 418, 453, 2247, 2765, 2864, 1214, 4620, 1224, 3053, 4566, 224, 2669, 4466, 536, 3356, 1653, 1482, 3179, 1241, 3998, 4816, 3903, 3388, 2614, 1943, 1494, 143, 1273, 1216, 2680, 1244, 1480, 4824, 78, 554, 3367};
    int finalResult = 14;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 11057702;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> amounts = {3723, 4236, 3304, 1238, 4106, 1897, 686, 234, 581, 482, 3577, 4817, 955, 2458, 2176, 3908, 26, 4676, 1506, 3697, 1234, 1225, 4639, 3292, 122, 1984, 4450, 3290, 3083, 4370, 2899, 1137, 2742, 494, 2947, 4831, 1119, 2756, 4399, 3748, 2269, 630, 4623, 3896, 4994, 3870, 774, 4473, 1248, 4206};
    vector<int> centsPerDollar = {1567, 298, 1818, 3650, 1642, 3451, 2689, 181, 3205, 2668, 1813, 1333, 2196, 1334, 1381, 4196, 3946, 1111, 1899, 415, 4115, 12, 3446, 3715, 1418, 2404, 1288, 2818, 3799, 2009, 2598, 2433, 4081, 3290, 1740, 3398, 2769, 3713, 3353, 4121, 3781, 2675, 1936, 1092, 31, 2127, 3378, 2932, 3244, 4946};
    int finalResult = 8;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 11482495;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> amounts = {1116, 2005, 1789, 3516, 4713, 598, 545, 1438, 3776, 4549, 1717, 242, 81, 1978, 2091, 1122, 438, 3499, 4220, 934, 2961, 2170, 698, 896, 1792, 3046, 3874, 2448, 4990, 4566, 393, 4656, 2024, 2435, 661, 1022, 2244, 798, 1429, 4745, 2521, 3190, 4672, 3720, 2749, 3122, 4744, 2900, 3365, 37};
    vector<int> centsPerDollar = {72, 925, 1368, 3509, 2965, 269, 2832, 4474, 524, 3704, 4356, 3246, 3018, 978, 878, 1773, 2787, 718, 1800, 3497, 2117, 1245, 3100, 3023, 1981, 2674, 3256, 1594, 2375, 3245, 3378, 369, 728, 351, 1535, 4993, 1473, 4297, 2648, 4274, 2176, 2957, 2196, 2523, 1456, 4844, 4628, 3654, 2370, 631};
    int finalResult = 34;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 10842765;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> amounts = {3795, 4950, 1210, 1947, 361, 1102, 2110, 381, 2864, 1869, 3330, 1070, 361, 1969, 3823, 3978, 2328, 2084, 1156, 3964, 4054, 2007, 2370, 1478, 1513, 148, 1706, 3992, 1051, 1234, 75, 1361, 2369, 1180, 2007, 4223, 4379, 3941, 1451, 1327, 4125, 700, 3616, 3068, 3178, 2148, 4000, 2677, 962, 2169};
    vector<int> centsPerDollar = {3866, 4452, 1202, 875, 1637, 1557, 2294, 1496, 378, 2089, 2193, 413, 4958, 4573, 4094, 1217, 787, 4982, 3615, 3858, 3696, 4766, 2986, 607, 346, 570, 261, 1074, 1763, 3372, 3064, 479, 3464, 4375, 2423, 677, 346, 2242, 691, 4963, 1016, 2439, 2479, 3887, 4682, 2871, 4470, 4877, 1448, 3765};
    int finalResult = 9;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 7224859;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> amounts = {1529, 2590, 4953, 3810, 1384, 1106, 3009, 3552, 2774, 1476, 3101, 3958, 3656, 1564, 1118, 4114, 4112, 1991, 2504, 3921, 3274, 4351, 2253, 3421, 4210, 3398, 2452, 688, 4494, 2234, 4512, 2444, 2872, 2550, 4286, 1362, 2265, 2550, 4446, 1825, 3671, 2999, 1516, 3556, 1939, 1597, 1494, 3596, 3885, 3830};
    vector<int> centsPerDollar = {2368, 780, 3790, 1491, 187, 4232, 3178, 1835, 1823, 994, 2272, 3429, 1990, 4872, 2872, 1358, 77, 2764, 2257, 474, 4811, 4748, 4342, 4995, 3873, 4034, 72, 4362, 2710, 4244, 373, 2998, 4884, 4932, 172, 863, 3990, 1653, 2725, 3736, 3172, 2012, 793, 919, 2755, 4578, 2616, 1132, 668, 4512};
    int finalResult = 7;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 7546080;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> amounts = {3161, 2375, 4699, 4953, 2237, 3000, 1374, 4923, 2459, 3256, 3254, 4246, 1472, 4060, 3393, 4901, 1510, 1398, 3599, 4071, 1563, 989, 4876, 3796, 3749, 562, 2190, 2552, 3033, 3031, 910, 796, 1823, 2138, 2313, 4629, 3807, 3280, 2491, 2023, 3237, 4189, 952, 1699, 2456, 4917, 426, 3039, 4417, 3510};
    vector<int> centsPerDollar = {2806, 4383, 925, 1350, 4212, 1711, 506, 2569, 3515, 2342, 4654, 679, 2241, 1730, 2182, 4923, 1291, 3858, 1799, 4006, 2197, 153, 962, 276, 1467, 2091, 2986, 2012, 4023, 4720, 914, 4615, 639, 2805, 4486, 1970, 2738, 4821, 38, 1168, 3624, 492, 3086, 3585, 2503, 4411, 3034, 3380, 4239, 4149};
    int finalResult = 42;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 11340328;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> amounts = {557, 1811, 161, 3342, 3728, 1061, 605, 1786, 21, 1172, 4270, 250, 3488, 1759, 3701, 2788, 1769, 1578, 537, 2620, 4929, 2596, 4058, 4413, 987, 2372, 3097, 3, 3681, 1350, 1770, 2172, 860, 4486, 3715, 4481, 4463, 1189, 4935, 4033, 2107, 4625, 4358, 2206, 3415, 846, 988, 260, 1661, 486};
    vector<int> centsPerDollar = {720, 4681, 3245, 565, 2567, 1725, 2348, 1292, 264, 4979, 670, 3146, 1103, 4076, 1109, 397, 2681, 568, 2402, 1896, 599, 651, 3186, 4461, 4780, 2379, 4982, 4731, 928, 3210, 2520, 3125, 4800, 671, 845, 1376, 378, 4394, 4750, 1996, 1850, 3697, 4634, 4949, 278, 3400, 3666, 3434, 3826, 1713};
    int finalResult = 30;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 7117200;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> amounts = {2479, 2853, 902, 3770, 1652, 4142, 611, 4149, 1500, 122, 1683, 1685, 4989, 2783, 3, 3030, 3254, 45, 332, 2302, 462, 727, 4082, 1151, 2076, 992, 1166, 25, 67, 3715, 4531, 785, 1453, 1089, 2796, 1084, 487, 2520, 4883, 4685, 83, 2319, 4103, 2594, 4699, 1058, 189, 4151, 3908, 1427};
    vector<int> centsPerDollar = {4403, 312, 4449, 1378, 3749, 2534, 2779, 2849, 1315, 645, 3550, 211, 2885, 4245, 142, 1541, 3388, 3007, 375, 2618, 2281, 3128, 3984, 3784, 3654, 3803, 1669, 2864, 3318, 4507, 2454, 2393, 2540, 3944, 3665, 1925, 1676, 344, 970, 3103, 2278, 2897, 3141, 536, 1487, 865, 3833, 1039, 3024, 2445};
    int finalResult = 21;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 8212544;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> amounts = {735, 716, 4448, 3307, 674, 4204, 2520, 1021, 1803, 4219, 4101, 607, 3372, 1466, 1056, 3917, 2059, 4203, 977, 1978, 107, 1486, 3775, 625, 826, 658, 2769, 1948, 2602, 1481, 539, 2310, 2841, 4506, 2909, 1435, 1754, 2744, 4300, 2595, 2154, 3856, 360, 3581, 2350, 4710, 3384, 405, 1712, 1640};
    vector<int> centsPerDollar = {352, 3138, 4654, 982, 1400, 2769, 1766, 1721, 3243, 3708, 2910, 213, 3863, 1419, 18, 875, 47, 2418, 4469, 272, 4317, 1675, 4122, 801, 2023, 2686, 3562, 1735, 1942, 2355, 2843, 85, 4912, 305, 1142, 377, 4769, 3938, 592, 3469, 1582, 798, 2095, 2000, 1211, 4909, 4340, 680, 1337, 4400};
    int finalResult = 10;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -969510;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> amounts = {521, 4954, 1166, 1377, 4679, 1999, 4610, 4228, 4828, 3607, 4143, 107, 4745, 4295, 1080, 3732, 1879, 446, 2012, 779, 2825, 4787, 3151, 4726, 4656, 98, 789, 3025, 1166, 405, 2607, 3653, 1022, 3022, 3139, 2593, 163, 1001, 4005, 626, 3281, 120, 2622, 293, 3498, 3734, 122, 712, 100, 4385};
    vector<int> centsPerDollar = {3571, 1952, 2814, 177, 315, 3817, 3006, 1846, 577, 234, 4738, 564, 3014, 450, 2923, 4607, 7, 3064, 2378, 3185, 1327, 90, 4586, 279, 4002, 2075, 2065, 4650, 2441, 4803, 2675, 68, 2663, 1984, 4355, 3884, 2569, 4223, 1794, 356, 143, 3988, 4178, 1144, 3101, 2393, 563, 2043, 2601, 536};
    int finalResult = 29;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 10165585;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> amounts = {975, 3146, 4530, 62, 1821, 3174, 4096, 300, 1604, 2798, 2508, 252, 13, 4035, 3603, 1822, 2484, 3273, 4615, 1981, 3297, 4374, 2232, 926, 3080, 3867, 2298, 2021, 3111, 1751, 1536, 4174, 2842, 2762, 3711, 2976, 2132, 729, 4669, 4932, 2235, 4245, 422, 4807, 1118, 18, 513, 2544, 3352, 274};
    vector<int> centsPerDollar = {3823, 3022, 1715, 368, 2491, 4518, 2140, 2506, 4668, 1827, 3277, 3828, 3775, 3399, 2980, 4919, 1848, 3945, 3395, 1881, 4141, 1715, 4548, 645, 2217, 4488, 986, 526, 1950, 2570, 1251, 1026, 436, 814, 1641, 1388, 3958, 2585, 3144, 3227, 2615, 4675, 86, 2119, 2871, 700, 523, 1889, 2748, 1651};
    int finalResult = 2;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 4182050;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> amounts = {640, 2525, 348, 4273, 4228, 2918, 830, 1571, 3673, 3040, 1128, 3484, 2570, 4904, 4374, 511, 2649, 2862, 3870, 4782, 787, 2115, 4083, 1262, 4686, 1310, 4562, 539, 4032, 2780, 2980, 1062, 98, 4538, 2966, 3589, 679, 1639, 1175, 1858, 1550, 184, 3028, 2696, 519, 4957, 3619, 942, 3367, 911};
    vector<int> centsPerDollar = {2551, 4615, 3973, 983, 4716, 4700, 2751, 1631, 3394, 2794, 1370, 4639, 4080, 4279, 2725, 3963, 779, 4105, 1836, 4186, 3287, 11, 2185, 3499, 3214, 3970, 3247, 4799, 3361, 1035, 2027, 3815, 668, 4350, 615, 3498, 157, 1001, 4267, 2467, 795, 1495, 4114, 2709, 2213, 2811, 4465, 4638, 4714, 6};
    int finalResult = 25;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 7037600;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> amounts = {245, 506, 4196, 4302, 2903, 1756, 3610, 1012, 3145, 2156, 4569, 136, 2921, 430, 4713, 3648, 1270, 530, 2758, 1597, 1116, 2544, 830, 1955, 2684, 2620, 3484, 4674, 2879, 3886, 4621, 4683, 1243, 1298, 3513, 1782, 2445, 3669, 475, 4553, 4984, 1414, 3668, 4681, 4288, 325, 2811, 3030, 2214, 524};
    vector<int> centsPerDollar = {927, 1191, 3670, 4752, 4643, 3449, 4718, 4400, 3358, 4625, 3149, 1210, 3854, 967, 1508, 2549, 640, 1726, 4152, 1145, 4127, 3851, 4660, 1042, 4780, 2649, 1454, 2872, 2908, 3483, 4215, 516, 4026, 3078, 666, 3796, 2224, 66, 3154, 2633, 756, 952, 2240, 2715, 1394, 2766, 4369, 2727, 4666, 3955};
    int finalResult = 32;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 7800982;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> amounts = {3213, 736, 3748, 2545, 700, 2813, 869, 3189, 4350, 4339, 279, 1367, 3771, 1935, 3529, 2424, 4469, 1958, 3446, 3884, 1497, 2805, 1191, 2027, 1360, 2694, 4692, 2100, 3997, 2958, 4341, 249, 4541, 463, 492, 1267, 1697, 4509, 3969, 113, 1867, 2322, 1840, 756, 2061, 4893, 2060, 2446, 3708, 3760};
    vector<int> centsPerDollar = {1699, 2909, 4059, 54, 865, 2877, 3410, 2229, 2070, 4099, 4907, 3445, 2195, 2258, 4400, 94, 2581, 4352, 4989, 3979, 2547, 1629, 173, 322, 4925, 2434, 2827, 4224, 4183, 2629, 3585, 2201, 2561, 4076, 4086, 4848, 4704, 1964, 2662, 3378, 3346, 2342, 1056, 845, 4361, 1713, 1513, 692, 2733, 1228};
    int finalResult = 29;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 4551518;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> amounts = {65, 2996, 2882, 81, 3452, 2544, 2419, 940, 987, 932, 4478, 3717, 4137, 224, 1358, 3678, 1709, 4528, 3571, 4141, 1222, 1697, 2183, 4103, 3432, 1996, 3128, 4953, 2193, 4049, 1063, 838, 1249, 4519, 1848, 71, 657, 192, 2567, 539, 2871, 1798, 2975, 242, 2759, 2554, 846, 2024, 3245, 4002};
    vector<int> centsPerDollar = {861, 1604, 4328, 3033, 808, 4531, 4846, 1101, 1969, 414, 4225, 4717, 1887, 4350, 85, 2755, 4747, 685, 1691, 1710, 2618, 4413, 4659, 4050, 725, 4328, 3202, 1115, 949, 3297, 4622, 2011, 1977, 3085, 4787, 4646, 3279, 2607, 257, 3231, 458, 2993, 4742, 4310, 3423, 1449, 4115, 1690, 3561, 2943};
    int finalResult = 34;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 2434224;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> amounts = {2299, 3339, 4008, 2281, 4837, 663, 2769, 4570, 194, 2937, 1135, 48, 3311, 2104, 3826, 4586, 3512, 4124, 912, 3058, 4684, 4277, 111, 1164, 3509, 4129, 4853, 103, 1965, 2120, 150, 1375, 2329, 3374, 3815, 1077, 4427, 2258, 2370, 2902, 3126, 934, 4778, 2762, 1238, 855, 137, 2602, 4118, 2565};
    vector<int> centsPerDollar = {3039, 150, 2681, 1222, 660, 3841, 919, 625, 275, 3873, 2802, 2039, 1387, 1537, 638, 2216, 1252, 3620, 1641, 422, 3169, 3990, 4980, 4928, 4544, 2889, 2770, 2693, 3851, 4533, 4658, 1196, 1648, 1772, 4576, 4283, 4111, 4486, 541, 1938, 519, 4136, 2306, 4166, 4457, 1076, 4964, 4820, 1269, 3037};
    int finalResult = 18;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 11274208;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> amounts = {4295, 2120, 2933, 689, 2579, 1234, 4149, 3228, 1881, 2881, 1784, 960, 1312, 3830, 904, 2202, 3910, 393, 2061, 2685, 664, 4369, 1278, 2418, 3363, 522, 2470, 1911, 431, 4669, 4794, 3939, 554, 4476, 2340, 1625, 70, 635, 1031, 2306, 2431, 2730, 1274, 1089, 3593, 17, 1035, 256, 1136, 4467};
    vector<int> centsPerDollar = {590, 3431, 3176, 2028, 2647, 4384, 4071, 707, 4394, 214, 3677, 2030, 4091, 998, 2557, 2276, 3981, 432, 1676, 2672, 2302, 4950, 2472, 4195, 1213, 481, 3184, 4728, 19, 4830, 2009, 279, 2253, 398, 88, 4871, 3290, 4452, 573, 758, 3678, 3758, 3040, 1342, 1629, 3183, 3959, 4802, 529, 3722};
    int finalResult = 7;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 8187304;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> amounts = {2934, 3728, 1276, 3954, 203, 66, 454, 2551, 1122, 4179, 2533, 2021, 2336, 2613, 656, 145, 1703, 2502, 3336, 1797, 3153, 2993, 757, 1771, 4815, 3466, 4093, 2865, 2539, 1433, 3866, 3889, 1056, 4717, 2455, 2291, 3053, 3471, 886, 2832, 2951, 855, 2514, 770, 4687, 1833, 2535, 2502, 4915, 4925};
    vector<int> centsPerDollar = {2240, 4693, 2487, 2035, 4800, 3816, 2900, 2287, 2767, 4265, 2504, 723, 762, 1870, 4105, 864, 3249, 249, 2620, 4872, 2986, 2645, 1984, 2852, 2257, 2183, 1621, 803, 3600, 1230, 116, 431, 2195, 3856, 2028, 4621, 1278, 1774, 3510, 272, 1233, 3216, 4031, 4927, 4229, 1728, 3183, 1843, 3385, 3907};
    int finalResult = 45;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 9148976;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> amounts = {3412, 2638, 1836, 186, 4821, 1536, 1292, 2219, 4161, 3746, 3652, 3208, 4213, 1209, 3778, 2816, 1443, 4236, 2236, 3447, 4091, 2308, 3781, 879, 262, 2755, 1906, 2891, 835, 3987, 3809, 1556, 465, 4028, 2258, 1018, 2915, 3980, 2223, 1550, 2910, 3838, 358, 108, 2389, 2843, 2790, 2849, 4257, 2465};
    vector<int> centsPerDollar = {2929, 1022, 3952, 3071, 3671, 3491, 4688, 4877, 470, 2508, 1795, 1366, 4113, 2995, 3598, 3288, 1617, 752, 4862, 166, 1452, 617, 4467, 1162, 2873, 38, 169, 338, 4106, 1092, 4789, 4041, 3491, 116, 583, 753, 3792, 4885, 4691, 4225, 3408, 4750, 723, 4914, 829, 3798, 487, 4957, 324, 4971};
    int finalResult = 29;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 8086396;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> amounts = {411, 546, 2189, 968, 2003, 4217, 1442, 4722, 1148, 346, 193, 1433, 4160, 3311, 922, 280, 2937, 866, 290, 883, 44, 4883, 1347, 426, 2094, 3372, 4581, 304, 3565, 1862, 2462, 522, 2152, 3044, 519, 2133, 4789, 196, 2628, 4826, 710, 3813, 1715, 4849, 4145, 2003, 2688, 1260, 2605, 2716};
    vector<int> centsPerDollar = {253, 4890, 3759, 808, 4947, 4442, 2790, 664, 4268, 2353, 1638, 1346, 1886, 2251, 515, 3669, 1362, 4899, 3197, 2557, 2671, 626, 4335, 4956, 3578, 2389, 2797, 2108, 3703, 2542, 1586, 4762, 3330, 1884, 1665, 1802, 1956, 2373, 1196, 2466, 933, 3267, 4655, 607, 4311, 2722, 3069, 200, 1963, 2118};
    int finalResult = 30;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 6401068;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> amounts = {2467, 3853, 4518, 149, 4098, 1079, 438, 3795, 4525, 3128, 2603, 3069, 2896, 229, 698, 3026, 2319, 1384, 1476, 499, 1543, 3496, 2662, 4733, 852, 645, 4096, 4215, 2186, 1214, 4772, 2308, 382, 523, 2605, 162, 3615, 2339, 476, 242, 1123, 4175, 2363, 3899, 156, 532, 3791, 3157, 4107, 4619};
    vector<int> centsPerDollar = {1031, 1342, 2496, 3529, 3555, 1796, 122, 4582, 934, 3953, 3568, 2920, 4701, 4720, 3151, 4289, 2183, 4925, 1844, 3926, 4992, 2133, 3874, 4307, 3810, 3585, 1875, 4935, 1136, 52, 3171, 4527, 894, 3612, 3876, 1978, 4761, 3498, 96, 3961, 4536, 3639, 1892, 1156, 919, 4800, 3042, 1571, 673, 2403};
    int finalResult = 46;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -187622;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> amounts = {1210, 707, 600, 3728, 491, 4446, 3906, 4506, 2809, 1723, 176, 4227, 769, 2237, 2190, 4705, 4659, 2864, 2810, 2101, 1445, 4978, 2184, 4231, 118, 3561, 3956, 1740, 1062, 4279, 4312, 2375, 660, 2472, 1711, 3826, 3431, 2136, 4075, 1638, 947, 856, 1709, 4186, 3642, 1885, 534, 4165, 1365, 4185};
    vector<int> centsPerDollar = {453, 4743, 2813, 545, 4449, 2302, 4796, 2260, 1473, 4743, 153, 411, 4566, 3459, 1313, 4694, 2091, 458, 4759, 2303, 659, 27, 4467, 3930, 2795, 863, 3799, 3152, 1756, 2270, 4388, 967, 164, 4601, 1712, 4060, 154, 382, 2145, 1190, 1479, 1639, 2578, 3731, 3769, 4546, 3680, 1420, 3474, 4438};
    int finalResult = 45;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 4095090;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> amounts = {2209, 3926, 698, 3427, 4631, 4215, 2273, 349, 4336, 1980, 3259, 3596, 756, 1649, 3052, 4940, 4051, 3171, 1713, 2735, 4464, 1556, 4401, 4118, 2111, 1002, 947, 3050, 2025, 923, 1784, 238, 952, 1384, 2422, 4801, 802, 3706, 1465, 659, 4481, 369, 4781, 2590, 1202, 2907, 3345, 388, 1181, 3181};
    vector<int> centsPerDollar = {4485, 3730, 3733, 414, 618, 1169, 3180, 1028, 1647, 25, 3205, 4068, 720, 2505, 1899, 396, 1935, 239, 2296, 124, 4038, 48, 2926, 3407, 1829, 124, 2552, 3432, 3962, 4379, 3119, 2445, 4557, 1019, 963, 3936, 641, 607, 1891, 4483, 344, 4728, 261, 4811, 4090, 3804, 2859, 2460, 4549, 4545};
    int finalResult = 40;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 10430536;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> amounts = {4963, 4686, 1, 3755, 2379, 1362, 4685, 3183, 2456, 799, 4720, 4561, 472, 4966, 1340, 3107, 3934, 2821, 1017, 4366, 23, 301, 2868, 4803, 4174, 3665, 1639, 1312, 118, 3053, 2127, 870, 4629, 3597, 3755, 1925, 261, 2282, 226, 3980, 324, 2338, 319, 17, 212, 2764, 4431, 872, 3222, 3423};
    vector<int> centsPerDollar = {3206, 3248, 1039, 1453, 1722, 1334, 2486, 3446, 2816, 1802, 1823, 3967, 3657, 2595, 566, 720, 4229, 381, 2834, 383, 306, 2928, 4332, 3708, 4116, 550, 732, 3308, 2292, 4037, 1891, 4368, 986, 4515, 4868, 2015, 3854, 3310, 452, 4515, 2242, 1454, 3341, 1002, 4469, 4535, 3625, 684, 2875, 1282};
    int finalResult = 29;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -319961;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> amounts = {1599, 238, 4572, 292, 4343, 2767, 2176, 4829, 4415, 907, 3975, 2027, 702, 3434, 451, 2178, 4950, 4175, 3050, 3048, 1469, 3442, 3238, 910, 2572, 899, 1800, 1206, 3140, 2477, 138, 4781, 1426, 2688, 155, 2581, 2906, 649, 4389, 1776, 874, 73, 2725, 1115, 1501, 1311, 2900, 3413, 135, 4120};
    vector<int> centsPerDollar = {540, 2571, 933, 1499, 4079, 2185, 2509, 478, 78, 2164, 2692, 4125, 2916, 1774, 2529, 1955, 3985, 2048, 4236, 3312, 4739, 142, 499, 4958, 3798, 4486, 2776, 4859, 4344, 1372, 2661, 3239, 2439, 1340, 484, 4891, 4172, 572, 2239, 177, 2183, 4194, 4548, 272, 4456, 2868, 3093, 3073, 2864, 4440};
    int finalResult = 25;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 7370886;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> amounts = {2051, 1316, 348, 3180, 3765, 1205, 1743, 1093, 1374, 1290, 1092, 1444, 4422, 3411, 691, 2584, 3033, 1502, 1454, 47, 760, 141, 1411, 1593, 1805, 2193, 984, 2893, 2668, 4720, 1800, 2311, 3973, 447, 3413, 2218, 4333, 2123, 3634, 4512, 1768, 950, 1132, 4363, 4339, 2881, 3564, 2431, 256, 2270};
    vector<int> centsPerDollar = {359, 2204, 555, 814, 616, 3575, 3999, 3837, 2389, 4452, 4449, 3792, 4577, 3327, 1312, 4600, 1142, 2818, 4347, 2531, 2982, 1889, 4106, 3773, 1342, 4350, 4546, 2053, 4132, 4310, 4368, 1818, 709, 4487, 3096, 412, 2131, 1225, 601, 376, 2304, 4887, 4935, 3555, 978, 579, 4658, 2368, 3663, 558};
    int finalResult = 30;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 2850700;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> amounts = {2125, 4624, 4535, 2386, 570, 2169, 474, 2147, 4822, 2980, 3393, 3583, 4327, 2771, 2121, 1933, 1717, 1618, 442, 1562, 72, 3197, 3163, 1911, 353, 2652, 1297, 95, 2352, 3396, 3498, 1573, 81, 3075, 3219, 4264, 454, 122, 1333, 3807, 2801, 1721, 4793, 3765, 790, 1004, 1597, 2448, 1006, 3441};
    vector<int> centsPerDollar = {3798, 3921, 4523, 3847, 3159, 1956, 1609, 592, 4391, 3366, 1140, 2409, 1088, 4493, 2052, 2011, 670, 2319, 1680, 3651, 121, 1383, 1647, 1821, 3471, 234, 4368, 1677, 2038, 4554, 967, 1810, 4311, 2126, 3134, 986, 1678, 2363, 3552, 4411, 1408, 1585, 1710, 1041, 4694, 4206, 4752, 1598, 3986, 2058};
    int finalResult = 38;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 6489784;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> amounts = {1501, 1411, 3938, 2123, 3105, 3084, 164, 3916, 4480, 1350, 207, 208, 1513, 3300, 1214, 3288, 999, 3708, 4330, 4362, 4973, 1610, 644, 3650, 1204, 3358, 863, 2798, 3101, 4184, 2485, 3318, 166, 2832, 1646, 1374, 2858, 4909, 621, 4052, 415, 1584, 4532, 4720, 2635, 1827, 3344, 2294, 3906, 4939};
    vector<int> centsPerDollar = {3415, 4630, 787, 3987, 560, 1215, 4754, 2653, 924, 2367, 4061, 3188, 3384, 4668, 4714, 1545, 926, 749, 4546, 596, 167, 121, 637, 3391, 1864, 2711, 1976, 2597, 1437, 1720, 631, 3526, 1520, 3427, 2513, 2439, 1659, 2913, 3905, 4129, 2625, 3635, 3688, 3181, 1702, 1177, 3063, 2990, 3126, 874};
    int finalResult = 7;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 2123552;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> amounts = {100, 100, 100, 100};
    vector<int> centsPerDollar = {5, 5, 5, 5};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 29500;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> amounts = {200, 300, 100};
    vector<int> centsPerDollar = {10, 10, 10};
    int finalResult = 2;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = 49000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> amounts = {1};
    vector<int> centsPerDollar = {1};
    int finalResult = 0;
    BettingMoney* pObj = new BettingMoney();
    clock_t start = clock();
    int result = pObj->moneyMade(amounts, centsPerDollar, finalResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=300003&rd=4775&pm=2297
********************************************************************************
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <ctype.h>
#include <cstdlib>
#include <set>
#include <map>
#include <queue> 
#include <deque>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef long long i64;
#define debug(x) cout << #x << " = " << x << endl
#define sz size()
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) reverse(b2e(A))
#define s(A) sort(b2e(A))
#define ss(A) stable_sort(b2e(A))
#define un(A) unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define contains(A,B) (find(b2e(A),B)!=(A).end()) 
 
int gcd(int a, int b) { return (b==0) ? a : gcd(b,a%b); }
vs tok(string a){vs r; char b[100],*s; strcpy(b,a.c_str()); for(s=strtok(b," ");s;s=strtok(0," ")) r.push_back(s); return r;}
vs tokS(string a, string d){vs r; char b[100],*s; strcpy(b,a.c_str()); for(s=strtok(b,d.c_str());s;s=strtok(0,d.c_str())) r.push_back(s); return r;}
#include <string>
#include <vector>
class BettingMoney {
  public:
  int moneyMade(vector <int> amounts, vector <int> centsPerDollar, int finalResult) {
    int intake=0;
    for(int i=0;i<amounts.sz;i++)
    {
      if(i==finalResult)
      {
        intake-=amounts[i]*centsPerDollar[i];  
      }
      else intake+=100*amounts[i];
    }
    return intake;  
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/