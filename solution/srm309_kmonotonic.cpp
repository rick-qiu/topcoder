/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6516
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

class KMonotonic {
public:
    int transform(vector<int> sequence, int k);
};

int KMonotonic::transform(vector<int> sequence, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<int> sequence = {1, 1};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sequence = {1, 1, 1, 1};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
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
    vector<int> sequence = {1, 1, 1, 1};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sequence = {1, 1, 1, 1};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sequence = {1, 1, 1, 1};
    int k = 4;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sequence = {1, 2, 3, 3, 2, 1};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sequence = {1, 2, 3, 3, 2, 1};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sequence = {1, 3, 2, 3, 2, 4};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sequence = {1, 3, 2, 3, 2, 4};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sequence = {1, 2, 3, 4, 1, 2, 3, 4};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
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
    vector<int> sequence = {1, 2, 3, 3, 1, 2, 3, 3};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sequence = {-2268, -1010, 52, 4847, 559, 1872, 1031, 4887, -3004, 652, -334, -4966, -4915, -2853};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10903;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sequence = {4484, 4840, 4005, -3476, -4726, 2288, -3197, -3059, 1437, -3173, -4469, -1867, -4989, -2773, -4813, 564, 4846, 3658, -1087, 1483, -203, -345, 1325, -3513, -3142, 3313, 2207, -3205, -3160, 4971, -3517, -842, 3205, -1368, -829, -3395, -2258, -4784, -3907, -1751, -3028, 1912, 3119, 1861, 1257, 2111, -2752, -428, -3719, 2540};
    int k = 22;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sequence = {4169, -712, -2911, -4794, 723, -4039, -134, 3075, 3294, 3520, -850, 4307, 4460, -3901, 3313, -3639, -2029, -3792, -2834, 777, -3615, -3019, 136, -1495, 3013, 2799, -1042, -4315, -4115, 2284, 1681, 442, -2318, -1361};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18270;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sequence = {-1574, -3783, 3503, -4979, 1308, 2114, -780, 3572, -2204, -4269, -4677, 3479, -3375, -1307, 681, 3499, 1596, 2352, -4472, -3992, -4295, -2211, -1462, -1390, -1093, -1245, 4435, -158, 3188, -3297, -4888, -3899, 2263, -1846, 1857, 4605, 1050, 2905, 1194, -2827, -4783, 3529, 276, -2482, 445, -1063, -3964, 1941, 2509, 319};
    int k = 19;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 457;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sequence = {-224, -4348, -1525, 4608, 1342, -2969, -4135, -2475, 3022, 2544, 3402, -670, 1457, -4943, 494, -508, 1532, 877, -4457, 1884, 130, 883, 4538, -4551, 1188};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 41228;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sequence = {-112, -2336, -4839, -3117, -2497, 1745, -4978, -7, -4569, 2295, -1359, -3188, 3633, -3344, 2527, -3541, 3489, 2159, -3337, 1160, -772, -3221, 3848, 1480, 2734, 1157, -3305, 657, 1647, -550, 1920, 2488, -2320, -1939, 4841, -1960, 3350, -1324, -4336, 3052};
    int k = 12;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12785;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sequence = {4329, 471, 1243, 284, -3090, 1056, -2485, 4684, -839, -340, 3530, 1366, -2004, 2480, 3014, 2796, -3683, 769, 2361, -3626, -3120, -1169, -1615, -1141, -3467, -3095, -1765, -1822, 1879, -884, -2477, 1219, 4054, -2080, -1926, -2767, 491, 1640, 4139, 1804, -3754, -4787, -1541, 1467, 4041, -2008, -196, -2472, 1551, 2131};
    int k = 21;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sequence = {-1486, 4743, 4391, 4916, 2162, -272, 1603, -3297, 1858, -1616, 2950, -4140, 1459, -4642, -3512, 3082, -3572, -4780, -2890, -2308, -2993, 3864, -4219, -1722, -3409, -3798, 1208, 2001, -3822, -2882, 3201, -2018, 2778, -3929, -1953, -1990, -961, 641, 2007, 188, -1665, 2559, -1245, 2363, -2301, 1339, 3488, -3279, 3477, 2014};
    int k = 7;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 47171;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sequence = {-1959, 2306, 1901, -3696, 2030, -435, -3649, 4260, 430, 3226, 96, -1259, -4304, 4639, 3791, 4092, -2483, -3867, -1827, 1705, -361, -3451, 4580, 2765, 2085, 2298, -3756, -4118, 4933, -1790, 2223, -783, -4840, -3179, 2336, 594, 633, -3497, -143, 4807, 3754, -2460, -2189, -749, -1107, -704, 1549, -3967, -3896, -4952};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 44786;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sequence = {-304, 2296, 3851, 3267, 1436, 1500, -3426, 545, -2020, -204, -3014, 3368, -2137, 4344, -4462, -4961, -23, -3055, -1572, 1074, -717, 3324, -370, -1084, 4059, 4868, -4960, 1933, -4712, -357, -2386, -3799, -4735, -2287, 2725, 2531, -3745, -1616, -1832, -467, -2889, -4039, -2186, -3922, 4864, 4160, 4605, -4217, -3996, -3210};
    int k = 10;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 23717;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sequence = {4894, -4864, -4819, 3213, 1246, -2320, 713, -1478, -2463, 3470, -157, -4711, -4061, 4980, 3914, 3381, -3735, -782, -2347, 4980, -354, 4640, -894, -2779, 4088, -4855, -2730, 3336, 1957, -3796, -3235, -2103, 4915, 3717, -2968, -1836, -2189, 34, -140, 2225, -3760, -3741, 1919, 3568, -3093, -3282, 1151, 37, -2366, -4614};
    int k = 9;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 33160;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sequence = {1271, -4739, -2007, -226, 2680, -3171, 3148, -2303, -3323, 1325, 1235, -4806, 122, -3374, 2390, 341, -4998, -4273, 978, -3606, -3236, 97, 4070, -399, -2102, -4652, -3569, -2524, -1486, -3839, -2100, -4555, 4972};
    int k = 12;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2354;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sequence = {-2536, 4235, -3381, -2449, -2293, -2632, -4678, -2585, -17, -3960, -685, -4134, -378, 3078, 2828, 1879, 4075, -3542, 3895, -1599, -4733, -4706, -739, -1698, 1013, -3731, 3166, -2113, 226, 2100};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15262;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sequence = {-110, -2912, 3223, 2141, -4487, -4230, 1810, 4365, 1573, -3653, 2348, 1189, -801, -3817, -153, 1401, 2477, 3593, 2742, 1660, 223, 20, 54, -4727, -524, -815};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 47601;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sequence = {-1780, -3163, 753, -2057, 1873, -2263, -2947, -1251, 3814, -2481, -4099, 1108, 1729, -534, -4118, -4983, 42, 1302, -4911, 1110, -4262, 3945, -1447, 3527, -2562, -1404, 1889, 708, -2432, 3059};
    int k = 12;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1804;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sequence = {2584, 670, 330, -4422, 2396, -2582, -2944, -621, -4152, 2786, -257, -1249, -3619, -4202, -3746, -1344, 4730, -4517, -2695, 4657, -2312, -3023, -1638, -2733, 3193, 374, -3399, -2072, 2447, -2630, -2634, -2623, 1490, -1025, -3344, -2652, 4607, -3413, 1119, -4856, -1829, -2661, -1312, 3897, -1613, 3906, 1095, -4717, -4675, -1392};
    int k = 18;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 838;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sequence = {-3067, 3062, 2620, 1448, 3781, -4504, -3843, -1014, -4668, -2379, 1198, 300, -836, -3544, -1062, 3347, 2735, -2455, 4072, -3125, 866, 1530, -206, 2300, -1533, -3792, -2546, -2894, 809, -3560};
    int k = 7;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10904;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sequence = {3747, -2881, -1070, 715, 3846, -541, -3559, -3777, 3822, 2378, 4623, 2094, -3590, 4786, 4124, -3437, -2381, -3278, -4031, -3456, -716, -1672, -1068, -1873, 201, 2065, 605, -655, -30, 3751, 2850, 4557, -461, -3032, -2664, 4649, -3595, 1974, 3372, -2317, -3898, 429, 2443, -17, 2005, -3948, -3456, 558, -2820, -2163};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 112804;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sequence = {-2435, -3472, -4208, -4572, 3601};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sequence = {-4786, -2741, -4865, 2077, -2926, 2242, 3179, 491, -3112, -4030, -1655, 925, -375, -4586, 247, -2568, 2129, 3479, -2438, -4752, -3616, -2902, -74, 3038, 3666};
    int k = 8;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3426;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sequence = {4385, -2405, -3965, -2453, -1496, -2857, -4706, 2641, -1483, 1873, 3577, -1220, 1324, -3809, -4482, -43, -4089, 4281, -3977, 4469, 3287, 752, -1467, -72, 4879, -640, -4865, 4481, 241, -1366, -2205, -5, -2917, 2932, -4101, -2026, -2769, -4560, -3138, -2847, -2299, 2257, 1817, 963, -1845, 908, -1160, -4029, 3503, -150};
    int k = 11;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 17704;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sequence = {-3260, 1489, 2277, 1546, -2619, -3694, -982, -2843, -4317, 1064, 3921, 1882, -3669, -460, -4626, -707, -2061, -1698, 1099, 2872, -3713, -4201};
    int k = 7;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3395;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sequence = {2345, 2798, -1803, -2843, -1059, -3959, 535, -2108, -2845, -3200, -1068, -3115, -2464, 2784, 1321, -2223, -197, 3367, -4506, -2648, 2931, 4259, 4901, -4394, 4804, 749, -4396, 4539, 2705, 3281, 4055, -1511, -2124, -2315, -2277, 1004, 299, -3175, -4680, -4699, -3071, 2561, -4348, -1802, 1250, -2443, 1820, 1382, -3280, -1401};
    int k = 17;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1509;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sequence = {-6722376, -12580455, 1616105, -2125375, -10741996, -13371102, -19904123, 17342112, -5072528, 14235414, -1525862, -3007066, -19798698, 5721166};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 38101508;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sequence = {7375036, -15973132, 11458404, 3037760, -1961265, -11390053, -1353418, -10057707, 2227791, 3345473, 14317415, -11899671, 11521457, 1724416, 7682270, -6870056, 3255277, 10544278, 9140293, 1556450, 1298177, -3134237, 19402891, -6631318, 5085804, -705171, -4459166, 1846712};
    int k = 4;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 90579926;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sequence = {-3234593, 16029634, 6479223, -15726880, 14936709, 6205028, 11147575, -14315266, -13083438, -6511032, -5194004, -15013218, 8244187, 17236784, -15104659, 18596437, 6133210, 19324451, 19948278, 1133884, -1383509, -7812630, -15961177, -13883025, 17702226, 3321238, 16098307, -2308466, -8092557, -8323336, -3595406, 4977215, 2655448, -11934936, 1933503, -10329942, 9224943, 1305343, 13851802, 1588475, -14111158, 15176605, 7178263, -8444956, 11140125, -944925, -7201491, -4734440, 4385731, 11741690};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 200160301;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sequence = {-10161455, 1143097, 12279754, 4829560, -1329077, -16615007, -16760444, -14690416, -5943225, 4769729, 15023385, -13795832, 1532553, -4606334, -5718080, -6115637, -1664678, 9076593, -9018252, 3627945, -11067898, -4384959, 13828212, -19073834, -2294945};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 90927234;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sequence = {4406850, 10813691, 10554686, 7184366, -4408416, 7000757, 2846583, 6171120, -10297973, -9116468, -12447852, 4760278, 2229929, 16389137, -17319941, 11093829, 19747267, 17578139, 4270201, 840807, 11336775, 15268933, -16740163, -17536409, 4216518, -5648083, -1597733, -11462410, -7741578, -18271177};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 147146538;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sequence = {17152970, 18160305, -1487480, -1492506, 11029273, -10931340, -13316853, 10687342, -15292382, 4079073, 19856623, -18356473, -7699548, -2079811, -19039193, -15097801, 16656485, -12501773, -10219287, 9220587, -9304147, 15630863, 880944, 16390386, -15907384, -2407228, -2616006, 8120960, 19774088, -4642202, -13655542, -2637652, 1161664, -788879, -12193817, 3823346, 6927306, 18800896, -7898917, 8814258, 11770882, -9888425, -17574091, -9021522, -11817143, 5808730, 10759176, 346768, -6018429, 9909523};
    int k = 9;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 126106430;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sequence = {-6245022, 1921305, -9997009, 7505973, -16133612, 8199544, 14650242};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sequence = {18174714, -2045552, 4996223, 7360584, -11645109, -752298, -12665151, 1741657, -5667421, 7805762, -14983803, 18052966, -17828735, 4523217, 16061741, -10746659, -4112182, 18788612, -17939010, -2657549, 14040133, 12781279};
    int k = 9;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1258855;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sequence = {7895068, -5891043, -9841684, -960280, -19843947, -5042334, 17917622, 4572736, 18383578, 7496071, 3752782, -5884160, 3177520, 11499237, 7126473, -15620383, 10503453, 4741432, 14486719, 1676353, -19396630, 5078045, -19510834, 13892771, -7765720, -7886438, 1716245, 7513387};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 141937885;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sequence = {-9484651, -8466246, -1838301, 19176321, -8038052, 13893477, 8610425, -4117106, 15957020, -18916670, 17957950, 6868718, -13847191, -51454, 2154792, -3972350, 5686973, 1861722, -2313199, 16365171, 18702577, 3170691, 5768822, -2110551, -18343739, -11540423, 19301625, -5420203, -11674786, 7442365, -14250528, 7687911, -1927997};
    int k = 13;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4543654;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sequence = {17731476, 4171545, 292447, 16251588, -7438558, -12752286, 7795586, 747740, 683709, 16471940, -11955232, -16846867, 11265594, -16478209, 237584, -8282038, 14893970, 10251931, 15987726, 11341005, 432996, 16765410, -3643462, -5702317, 8445296, -11781981, 8603478, -3095750, 1799453, -844687, -2062836, -1810966, -8080396, 16716322, -15930266, -12553911, 100899, -12003759, -3249964, 3859525};
    int k = 4;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 174129772;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sequence = {174044, -12566486, -15580850, 11643251, -11285402, 7463455, 12854488, -5802333, -17191210, 10151376, -12219938, -15731639, -10421290, -185798, -4932518, 5392199, 13054037, -19204413, -3582514, 4361763, -7988219, 6716338, -13201473, 17376646, -15865890, -7033678, -5302732, -19168067, -1069927, -12054701, 10262075, 1729595, -15277770, 14912905, 16180325, -13671915, -3299465, -19154901, -10625211, 14896772, 865378, -18114187, 728052, -14585753, -1849149, 16562055, 8391824, 6283199, -15710808};
    int k = 9;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 156745004;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sequence = {-8047943, 1641521, 18308835, -11024652, -11630062, -17157753, -12255860, -3887486, 9090246, 11446319, 13038204, -16486850, -645120, 19831226, -9484589, -15238852, -17122702, 1321311, 5436018, 11774323, -17561905, 11799670, -5837694, -10303424, 8144977, 10825469, -1831957, -1909536, 2996020};
    int k = 9;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4543311;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sequence = {-2349090, 11882233, 613177, -14291321, -5428148, -2808558, -13964252, -5822664, 19902572, -9368298, -18783170, -10048583, -8055495, -18131755, -5712684, 15191738, -8117263, 18312323, -1476938, -9514351, -14031208, -16992456, -480584, -19857481, 17802355, -6562962, -14147020, -2954421, -15160179, 15478662, -15223929, -13516402, 4179510, -14022077, -6662000, 17350245, -11341953, 8446796, -2597068, -750118, -7281729, 9864623, -10452516, -1944421, -3911152, 6819929, -1363467, 1649274, -5744174, 2393759};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 342354699;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sequence = {-10112277, -356568, -7418696, -3254721, 2151817, 6641015, 14951488, 2503390, 18414738, -15423510, 1121463, 15006407, 17679718, -7881232, -14156800, -1008643, 5264652, 8786875, -16508189, 17166978, -1111892, 11968195, -1548917, 9772257, 4523030, 14644290, 10138121, -16931675, -7369158, 18477494, -16611121, -11613473, 12535214, -19317406, -11813579, -8376667, -18564820, -5090612, -5067785, 3983757, 14815248, -18975424, -17175115, -17110986, -3439394, -3264436, 10493298, 3477696, -18132550, 14444099};
    int k = 7;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 131446248;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sequence = {2176257, 19097255, 6775114, -10645043, -8916517, -12667457, -9621462, 16800975, -2827453, 1807751, -11279845, -7907430, -16519135, 10158361, 15264279, -4540950, -19483360, 1403255, 11225626, 11306659, 6188845, -17369598, -3588188, -3195831, -9049604, 3823875, -3898309, 13099910, 13796996, -8559578, -17996825, -17245272, -19875971, -9789702, -1378379, -2149599, 19600361, -2168462, 6915125, -16754171, -12487288, -13228441, 19067387, 3369103};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 143855785;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sequence = {-1613805, -27615, 7430556};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sequence = {-2336104, 10493636, 7893294, 4671797, -9463177, 17665411, 11869931, 10775567, 9809177, -15451133, 7306908, 6047718, -16364726, -3449235, 10253486, -12277868, 1579961, -13260306, 9778868, -4046791, -9288327, -12208842, 17873379, -10711112, 13538435, -4622086, -12855404, 12148533, -8021455, -19851150, 15719366, 15263645, 10378693, 1316828, -16261734, 3418655, -8557856, -17679113, -14159403, 7075499, -14091253, 2655625, -8870559, -6594950, -12767950, -12570151, -18127412, -2566523, 3232804, 2568501};
    int k = 13;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 46105380;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sequence = {-18225652, 15662356, -18753426, -8644695, -15677679, 4733723, -5745065, 6073322, -9943845, -19374924, 17552969, -18887768, 16397940, -3435970, 2074786, 11643685, 17712938, 17782397, -7056062, -12207033, -13196526, -10762470, 5528589, -6709481, -508544, -11896033, 16433003, -4791741, 3036561, 9060219, 10605771, 8070555, -9083743, -3827836, -9149669, 2949271, 11490005, 18492272, -19786926, -19970864, 11234194, -19521318, -3341593, -6228349, 1283588, 18499908, -3539881, -12644591, -4299879};
    int k = 11;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 75981341;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sequence = {15044003, -1864318, 19082883, 4723588, -9620273, 7151357, -5640135, -17513393};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 37718833;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sequence = {3202385, -10456586, -3427585, -15275025, -18268304};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sequence = {1124360, 4003455};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sequence = {31299, 14133440, 4822827, 14972294, 1706140, 17955813, -1679990, 1902486, 16824207, -19346410, 15434298, 2836638, 12679849, 10211925, 18703194, -6538043, 15899710, 12787851, -16006385, 8984147, -10818076, 447492, -13278205, 8418360, 18248950, 7111663, 5295585, 6744196, -7664366, -15235616, -18998310, 4066029, 451739, -17724339, 5115171, 18227533, 1261880, 17482516, 7060852, 12426785, -13859756, -5419020, 15206283, -13633782, 4314012, 4857615, -6391385, -2579120, -19575933, 1664367};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 378796155;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sequence = {12035162, 8879553, 14866813, -14526072, -17040841, 13227984, 14914955, -8776223, 4840985, -19869330, -5636532, 1729642, 6791380, 10427678, -10245289, 13532281, 12481891, 19165351, -6942808};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6720771;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sequence = {-6499996, -7236205, 19716638, 14221194, -15207529, 1708465, 12922366, -6851637, -845213, -14470253, -3176594, 3625739, 13448273, -5310191, -17575941, -6071757, -18917746, -7497788, 9630484, -10574545, -17606802, -18507892, -832884, -1855631, 777444, 16286987, -12843748, 2088557, -14972662, 2657319, 16523999, -13711845, 12093599, 14848140, -4077611, 12026744, 3153796, 8896552, -16019872, 3703557, 3217214, 2774957, 14870474, 1979206, -17592968, 2389779, -10547011, -563900, -4303234, -18981869};
    int k = 11;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 90770417;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sequence = {16438028, -15494717, -14381908, -6069791, -10708434, -3451813, 12301730, -11167522, 14854719, 2711938, -2205958, -5602309, 13764440, -363757, -11525504, 15181912, 7874196, -10862575, 13678145, 12868471, 14451861, 17846050, -10805487, -19694142, 14669824, 3424015, -6799609, -19883261, 4628988, -7295162, -8251909, -17711382, 18305719, -18323368, -13655537, 16204170, -388126, 12604539, -3473373, -2147364, -19493584, -7122935, 4299871, 11071547, -3359014, -16045569, -15785810, 13163239, -13623266, 10216063};
    int k = 18;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5448319;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sequence = {12434562, -15676484, 19256142, -16235264, 17317014, 8119927, -6833577, 15431213, -8526835, 16809370};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 76219689;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sequence = {-18667329, 7389623, 10678129, -16004498, -14581516, 9082568, -10977333, -16269693, 19056079, -7237289, 11518591, 14015457, -8528489, -15343904, -9325596, 15687331, -18512810, -6538046, 8364887, -13373939, 13159515, -9030462, -5809736, 4024067, -4818247, 15486342, -4290579, 17084047, 5237701, -13861093, 17802590, -16272290, -16482404, 2206064, -10302344, 5365572, -11728229, 6021337, -14696661, 5556, -14571547, -15867763, 8195436, -19080631, -13384736, 2948904, 469427, 15079488, -17441096, -16527062};
    int k = 9;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 183825988;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sequence = {-9143301, -12823845, 416117, 6190027, -14941313, 10858875, 7208915, 4765090, 7666423, 4284688, -8038546, 15798921, 764207, 15025107, -19814570, 17593102, 19148314, -15831996, 1742591, -8355519, -16335028, 14044069, 15507136, -5343433, 12985985, -4310916, -19278251, -19829367, -10470380, -8117995, 15130462, -14933550, 2272649, -7662082, -19273251, -9496780, 13903876, -3846519, -18739012, 5393620, 2814159, -7933619, -9314235, -11635622, -14634024, 1262245};
    int k = 13;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 47241663;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sequence = {6313074, -4091344, 3571504, 6346873, -7480499, -2596723, -8654257, 12440367, 2900257, 4958153, -5727574, 9867686, -10682716, -1622175, -16616788, -4203362, 6950293, 13363191, -10693374, -19429062, -19975372, 178641, -9925344, 5909377, 3984581, 18322776, -14752324, 3547360, 14544401, 3862937, -5275311, -14655834, 3217380, 1557191, -980835, 5345927, -12186992, 15971511, 10701092, 1767706, -2114967, 7894370, 50091, -7292325, 9603143, -3493529, 8061629, -5867478, -18372089, 15187078};
    int k = 16;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25631453;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sequence = {-16003382, 9901834, 15410726, -7036798, 18236259, -17694028, 7997392, -10822242, 11436160, 1970414, 1285554, 4980503, 15619217, 3527845, -5857506, -15669299, -10255254, 5337161, -3066616, 15230307, -16714814, 3253839, -7558005, -8059715, 1151413, 5600175, -15839900, -5847416, -15081661, -17109914, 4361845, 18499506, -1116209, -11033098, 12492356, 13071342, 18992032, -703519};
    int k = 4;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 193013449;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sequence = {19666481, 12265059, 4589618, -5246620, -7070408, 11827624, -13799948, 2881141, -6214144, -2428575, 8249784, 7589058, 14139980, -9493914, 12303891, 13755012, -15776478, -18384653, 18064926, -15472998, -16555186, 153896, 15810548, 8640261, 2556894, -5686904, 14801720, 11355498, -6003036, 12808058, -14937203, 8503187, 13724343, -9802805, -2384613, -13137426, -8537357, -19737813, -962287, -1694708, -8071564, -16830292, -18942947, 2261796, -2903265, 10677318, 4517110, 14964366, -15777767, 18591061};
    int k = 17;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14116224;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sequence = {1190472, -4197810, -16104679, -1724431, -16215180, -3849493, 5582645, -9616880, 17408728, -11781147, 12063280, -2344202, 17240924, -11983760, 14856184, -8376597, -1961328, -13553272, -13968294, -14842564, -9464028, 17265259, -3869301, 19465913, 11524974, 7648541, -9365342, 16496695, 10467303, 17911011, -9810917, -13031154, 13145006, 18046152, -16955818, -12947045, 10097412, -9613797, -10710506, 12503487, -17820210, 16028911, -6094589, 16425310, 11747350, 14552730, 7970344, -9834270, 10006154, -10066377};
    int k = 19;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11538384;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sequence = {15620021, -6588676, 14323492, -8281282, 18739403, -7024928, -5458556, 996539, -3065066, 8361937, 15819966, -68986, 9640975, -11865075, 5040637, -14182368, -8276940, 19985140, -10702674, 9103212, 11656068, 2771341, 13146372, -915150, 14340101, 17028352, -9211785, 14097821, 7189566, -148195};
    int k = 8;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 57142828;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sequence = {8497341, -9698371};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sequence = {18271200, -5475066, -12027501, 10573499, -19515497};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 22601001;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sequence = {13257427, -13615732, 16472812, 18476501, -16269545, -2296157, -19698901, 19988918, -6883589, 12039812, 4828642, -10056586, 5389983, 10694483, 11589987, 7956988, 6654505, 17711451, 427334, -9194090, 2020417, -2279032, -7930652, -15016847, -15575917, -13945876, 1184733, -3623390, -14265775, -14744514, -12355437, 14816545, 2462383, -19883946, 11336876, -5570744, -12802715, 5402290, -17180268, 5436504, -2394320, -476427, 7625465, -16181644, 19264081, 3956322, -437427, 17209508, 2965772, -8796059};
    int k = 15;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 22242603;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sequence = {-20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 960000024;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sequence = {1, 10, 4, 2, 5, 1, 3, 2, 4, 6, 1};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> sequence = {-913, -4158, -146, -2625, -2926, 3071, 297, 4049, -4566, 3581, -2070, -1794, 1953, 4434, 4351, -710, -3124, 2148, 1192, 1802, 644};
    int k = 8;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 611;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> sequence = {-2268, -1010, 52, 4847, 559, 1872, 1031, 4887, -3004, 652, -334, -4966, -4915, -2853};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> sequence = {-2268, -1010, 52, 4847, 559, 1872, 1031, 4887, -3004, 652, -334, -4966, -4915, -2853};
    int k = 10;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sequence = {-2268, -1010, 52, 4847, 559, 1872, 1031, 4887, -3004, 652, -334, -4966, -4915, -2853};
    int k = 11;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sequence = {-2268, -1010, 52, 4847, 559, 1872, 1031, 4887, -3004, 652, -334, -4966, -4915, -2853};
    int k = 13;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> sequence = {-2268, -1010, 52, 4847, 559, 1872, 1031, 4887, -3004, 652, -334, -4966, -4915, -2853};
    int k = 14;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> sequence = {786899, -15150096, -9602598, -18779751, -12197700, -11044854, 3037696, 12551184, 281846, -16889179, -9550192, 16775526, -2232461, -16276665};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> sequence = {18094652, 2248204, 648732, 17809706, 5739878, -16347970, -4166054, 14715169, -18602688, -10196727, 439202, -15500195, 3324856, 10165064, -8836060, 7831437, 19346400, -7879142, -387468, 8323295, 18496108, -16233248, 13618185, -18515319, 9324087, 6455362, -5627969, -15390908, 13530302, 6962859, -10329002, 2337996, 16161955, -8173880, 17889520, -18912158, 6829611, 10676749, -11881577, -14268087, 16878017, -16969936, 9301429, -18390196, -19134351, 16272556, 18910362, -1010889, -14554002, 10872640};
    int k = 50;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> sequence = {18094652, 2248204, 648732, 17809706, 5739878, -16347970, -4166054, 14715169, -18602688, -10196727, 439202, -15500195, 3324856, 10165064, -8836060, 7831437, 19346400, -7879142, -387468, 8323295, 18496108, -16233248, 13618185, -18515319, 9324087, 6455362, -5627969, -15390908, 13530302, 6962859, -10329002, 2337996, 16161955, -8173880, 17889520, -18912158, 6829611, 10676749, -11881577, -14268087, 16878017, -16969936, 9301429, -18390196, -19134351, 16272556, 18910362, -1010889, -14554002, 10872640};
    int k = 20;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> sequence = {301211, 17167160, 7240602, -14337123, 5644573, -11876429, 12371753, -7326011, 4796816, -2460082, 8520130, -18660245, 13990118, -10516847, 6328362, 11886715, 17727319, -17851033, -13209176, -1685118, -5185316, 1965473, -3398006, -15764687, 5445045, 837233, 11894432, 6916319, 8512739};
    int k = 14;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> sequence = {79, 79, -50, -164, -188, -90, 77, 28, -61, -150, 191, 44, -3, 121};
    int k = 6;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> sequence = {82, 82, -92};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> sequence = {2, 2, 1};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> sequence = {8, 2, 3, 4, 5, 0, 7};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> sequence = {586565, 6474966, -550846, -18504669, -10461379, -8607878, -3436284, 15302409, 4376829, 12149071, 3974164, 18296306, -4801793, 13019889, 4150708, -9339500, -8049737, -8004821, -5725466, -347856, -9945179, 366877, 15276366, -3507248, 14899466, 1428744, -15534283, -16821473, 10920118, 8366010, -2009686, 446948, 1739776, -9949551, -10171709, 14584349, -4904496, 741421, -16349516, -2255658, 13968822, -14809391, 4725472, -16570147, -18542906, -11011281, 5291803, 13411130, 4083701, 1993829};
    int k = 7;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 149810981;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> sequence = {-11040607, -7098987, 16085873, 8533630, -3449721, -10865669, -12614805, 16889022, -4831574, -11155999, 13699824, -10087332, -13388079, -2188709, 12905316, -14966619, -1995291, -8572793, -7219354, 15994993, -11947074, -1794635, 2530699, -11452009, -6201024, -9143122, 9573116, -19664852, 2214255, -12476628, 1141485, 11173648, 424385, -2772642, 12223631, -10508983, 6361689, 19608826, -13619961, -18469884, 969180, -7403785, -8557216, 7581101, 10407507, -3135548, -14869166, 928568, -19191989, -2088520};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 317536368;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> sequence = {20000000, 18744803, -14441938, 11896762, 9083150, -6866176, 7252350, 13528182, 5110466, 2973050, 16719514, 1008238, 17177227, -13634177, 17611031, 8268138, -16691388, 5283741, -10986595, 6882979, -7906998, -13766838, -8719314, 7734348, 13494966, 6820142, 1359182, 10133855, -13027056, 8838821, 729348, 14032603, -14973400, 8508232, -10910130, -19058395, 298881, -15517440, -13091065, 19188125, 14357752, 14259831, -32310, 19132966, -3717380, 19614041, -10979120, -6026305, -10819547, -8324278};
    int k = 3;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 300858132;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> sequence = {-20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, -20000000, 20000000, 20000000, 20000000, 20000000, 20000000, 20000000};
    int k = 8;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> sequence = {2424, -2342, 235235, 2342, 346464, 223542, -34534, 634664, 34345, -25234, 345634, 3534535, 686, -23432, -1241423, 345, -20000000, 20000000, 0, 200000, -234235, 53465, 44575, 8934, -234234, 3463, 590359, 7457, -25235, 34646, 2352562, -24234, 36446, 353, -9898, -235895, 2359};
    int k = 1;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 50691601;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> sequence = {0, 10, 20, 30, 40, 10, 10, 10, 70, 80, 90, 10};
    int k = 2;
    KMonotonic* pObj = new KMonotonic();
    clock_t start = clock();
    int result = pObj->transform(sequence, k);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=9989&pm=6516
********************************************************************************
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
 
int qsort_comp(const void *p1,const void *p2)
{
  return *(int *)p1-*(int *)p2;
}
class KMonotonic {
public:
  int n,A[60],f[60][60],g[60][60],size,B[60];
  int m,Q[5600],dp0[5600],dp1[5600];
  int solve2()
  {
    //inc
    int i,j;
    m=0;
    for (i=1;i<=size;i++)
      for (j=-size;j<=size;j++)
        Q[++m]=B[i]+j;
    qsort(Q+1,m,sizeof(int),qsort_comp);
    int tm=m;
    m=0;
    for (i=1;i<=tm;i++)
      if (i==1 || Q[i]!=Q[i-1])
        Q[++m]=Q[i];
    for (j=1;j<=m;j++)
      dp0[j]=abs(B[1]-Q[j]);
    for (i=2;i<=size;i++)
    {
      int minv=1050000000;
      for (j=1;j<=m;j++)
      {
        if (j>1 && dp0[j-1]<minv)
          minv=dp0[j-1];
        dp1[j]=minv+abs(Q[j]-B[i]);
      }
      for (j=1;j<=m;j++)
        dp0[j]=dp1[j];
    }
    int res=2000000000;
    for (j=1;j<=m;j++)
      if (dp0[j]<res)
        res=dp0[j];
    return res;
  }
  void solve(int s,int t,int &v)
  {
    int i;
    size=t-s+1;
    for (i=s;i<=t;i++)
      B[i-s+1]=A[i];
    int v1=solve2();
    size=t-s+1;
    for (i=s;i<=t;i++)
      B[i-s+1]=-A[i];
    int v2=solve2();
    if (v1<v2)
      v=v1;
    else
      v=v2;
  }
  int transform(vector <int> vi, int k)
  {
    int i,j,v;
    n=vi.size();
    for (i=1;i<=n;i++)
      A[i]=vi[i-1];
    for (i=1;i<=n;i++)
      for (j=i;j<=n;j++)
        solve(i,j,g[i][j]);
    for (i=0;i<=n;i++)
      for (j=0;j<=n;j++)
        f[i][j]=-1;
    f[0][0]=0;
    for (i=1;i<=n;i++)
      for (j=1;j<=i;j++)
        for (v=1;v<=i;v++)
          if (f[v-1][j-1]!=-1)
          {
            int t=f[v-1][j-1]+g[v][i];
            if (f[i][j]==-1 || t<f[i][j])
              f[i][j]=t;
          }
    return f[n][k];
  }
};

********************************************************************************
*******************************************************************************/