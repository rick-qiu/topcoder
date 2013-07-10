/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3447
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

class PointLifeGame {
public:
    string simulate(vector<int> xs, vector<int> ys, int rnds);
};

string PointLifeGame::simulate(vector<int> xs, vector<int> ys, int rnds) {
    string ret;
    return ret;
}


int test0() {
    vector<int> xs = {0, 0, 10, 10};
    vector<int> ys = {0, 10, 0, 10};
    int rnds = 1;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0005.0000 0010.0000";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> xs = {0, 0, 10, 10};
    vector<int> ys = {0, 10, 0, 10};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0005.0097 0007.5000";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> xs = {0, 10, 20};
    vector<int> ys = {0, 10, 0};
    int rnds = 1;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0015.0000 0005.0000";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> xs = {0, 10, 20};
    vector<int> ys = {0, 10, 0};
    int rnds = 1;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0015.0000 0005.0000";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> xs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ys = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0009.0009 0005.0000";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> xs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> ys = {5000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int rnds = 1;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0024.5000 2500.0000";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> xs = {0, 1, 2, 3, 4, 5};
    vector<int> ys = {0, 1, 2, 3, 4, 5};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0004.0009 0004.0009";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> xs = {9, 8, 5, 0};
    vector<int> ys = {1, 2, 9, 9};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0003.9423 0007.1875";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> xs = {3, 3, 7, 7};
    vector<int> ys = {1, 7, 0, 10};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0005.1875 0006.6933";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> xs = {8, 8, 3, 9};
    vector<int> ys = {1, 9, 4, 4};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0007.1308 0006.0625";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> xs = {3, 3, 5, 10};
    vector<int> ys = {0, 10, 10, 1};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0005.0644 0007.6875";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> xs = {0, 6, 4, 4};
    vector<int> ys = {7, 9, 7, 10};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0004.1289 0008.9375";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> xs = {0, 1, 7, 5};
    vector<int> ys = {8, 4, 2, 4};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0002.1171 0005.6875";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> xs = {3, 4, 0, 2};
    vector<int> ys = {0, 7, 1, 7};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0002.4394 0005.4375";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> xs = {6, 9, 10, 7};
    vector<int> ys = {5, 4, 1, 1};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0007.5654 0003.6875";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> xs = {3, 3, 8, 0};
    vector<int> ys = {2, 1, 1, 3};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0002.4658 0002.1875";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> xs = {7, 7, 3, 10};
    vector<int> ys = {6, 2, 2, 9};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0007.8164 0006.3125";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> xs = {5, 0, 1, 1};
    vector<int> ys = {8, 0, 9, 7};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0002.3310 0008.0019";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> xs = {4, 6, 3, 8, 3, 9, 7, 1};
    vector<int> ys = {0, 6, 0, 0, 4, 8, 3, 1};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0006.9306 0006.2734";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> xs = {4976, 716, 2470, 3322, 1249, 2196, 4886, 3536, 1844, 1734, 3212, 2524, 2892, 3837, 2688, 472, 576, 1363, 2687, 3079, 304, 4010, 4720, 4781, 2908, 2598, 1101, 4331, 312, 3023, 1075, 3512, 3943, 4934, 4365, 3831, 786, 3419, 3442, 4678, 4416, 2240, 522, 4552, 1479, 4461, 3245, 4687, 3122, 619};
    vector<int> ys = {4214, 1566, 567, 942, 4108, 1602, 4609, 1519, 854, 2509, 83, 4713, 3454, 1702, 3479, 1588, 3400, 2403, 4733, 3560, 4257, 3009, 2897, 2038, 917, 4637, 4814, 3304, 4246, 752, 1159, 1515, 4300, 1190, 200, 251, 1084, 923, 1410, 2725, 856, 1403, 3634, 2377, 3317, 4406, 864, 4333, 631, 4870};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1273.7871 4816.0380";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> xs = {2775, 3873, 3122, 336, 2123, 876, 3649, 261, 1748, 3932, 3139, 3650, 443, 4703, 3470, 3149, 4154, 1900, 927, 3019, 2044, 184, 3743, 2149, 760, 2176, 828, 1591, 4808, 1713, 635, 3942, 1364, 3495, 4265, 4247, 3971, 3229, 326, 4006, 1523, 3456, 777, 1316, 1652, 3293, 1960, 1101, 1150, 444};
    vector<int> ys = {3305, 4922, 311, 946, 2721, 4844, 3180, 1306, 2535, 422, 1497, 3862, 2942, 1934, 1793, 4428, 1314, 1620, 2469, 1565, 408, 2836, 899, 4077, 1442, 4695, 4550, 2684, 4266, 2006, 4881, 3146, 1359, 2041, 3303, 1527, 186, 953, 4795, 2675, 4521, 3455, 1879, 461, 4714, 4726, 4515, 2783, 4507, 3368};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2039.1689 4885.5351";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> xs = {143, 863, 2946, 3628, 2545, 887, 4120, 4059, 3405, 1638, 4950, 3222, 1456, 4332, 2039, 1042, 880, 558, 2593, 1961, 3196, 819, 1806, 3069, 207, 4937, 4681, 1992, 4717, 1257, 4156, 442, 621, 4378, 4578, 4956, 4665, 914, 22, 1571, 3650, 4612, 701, 853, 3093, 1005, 2697, 3975, 1403, 2674};
    vector<int> ys = {1573, 4289, 2425, 4083, 3989, 2162, 3824, 4923, 3315, 3664, 4137, 2872, 359, 1082, 2487, 659, 3769, 123, 1889, 3421, 1364, 95, 4802, 340, 3635, 4340, 3070, 4704, 3917, 3646, 3706, 3655, 1301, 443, 1982, 3035, 2156, 1084, 4210, 3959, 4264, 2651, 4141, 959, 3958, 4318, 4384, 1815, 1309, 1441};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2751.4658 4812.9921";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> xs = {2404, 1454, 1388, 3264, 4624, 1656, 852, 2306, 1919, 4611, 3605, 247, 325, 1817, 2116, 1425, 2086, 148, 2024, 826, 4268, 4445, 2034, 3815, 38, 397, 3757, 4722, 1362, 3031, 2052, 768, 1336, 4640, 636, 1790, 4544, 1577, 244, 4652, 4871, 1920, 2326, 4228, 1977, 656, 387, 391, 179, 715};
    vector<int> ys = {3341, 2461, 1864, 1848, 915, 4184, 1656, 93, 4980, 3405, 2486, 3335, 2911, 1284, 385, 3232, 4476, 1029, 1314, 634, 2548, 902, 556, 437, 4891, 426, 3288, 2737, 4631, 2556, 3691, 26, 539, 2833, 4617, 153, 167, 4424, 163, 1720, 3984, 274, 4686, 2615, 2102, 527, 3712, 3413, 1876, 4793};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1110.1162 4896.7431";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> xs = {4930, 445, 4652, 4796, 946, 3449, 3192, 3441, 4768, 4838, 2884, 1352, 4045, 1790, 4629, 1490, 941, 3572, 448, 1562, 1135, 4704, 4218, 2528, 2859, 4887, 4633, 4677, 66, 3837, 428, 415, 2796, 3549, 4153, 136, 2552, 1828, 292, 4260, 1039, 4339, 1316, 837, 1915, 2809, 1351, 3877, 2333, 4491};
    vector<int> ys = {1493, 2949, 3880, 2455, 3442, 4411, 1223, 2808, 4054, 4083, 1174, 3433, 2622, 65, 138, 4484, 161, 2882, 3873, 3396, 760, 3135, 315, 1867, 4101, 4349, 3738, 3898, 576, 777, 1914, 2680, 1049, 1487, 2009, 4859, 2180, 3212, 919, 3444, 443, 50, 1373, 447, 3372, 3306, 1669, 2115, 353, 4492};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1693.4023 4661.9755";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> xs = {4087, 3532, 2257, 3705, 126, 184, 4534, 4417, 4472, 2060, 1956, 3990, 4219, 746, 53, 2093, 257, 2004, 3441, 1520, 3862, 290, 4654, 2868, 3493, 2744, 3788, 915, 4506, 3216, 4281, 1524, 3002, 2034, 3375, 3380, 4300, 4332, 2401, 3913, 1600, 3909, 1817, 3284, 1236, 835, 4060, 4422, 2553, 4175};
    vector<int> ys = {3673, 716, 2847, 1531, 3809, 1096, 988, 4355, 1205, 4943, 2331, 2294, 2927, 1473, 2250, 1231, 2723, 4957, 1186, 3020, 2596, 3466, 398, 342, 1316, 4572, 4698, 2587, 931, 1837, 1343, 3082, 4979, 736, 2897, 4564, 3040, 2093, 1328, 3273, 450, 28, 813, 2672, 4511, 4871, 2735, 339, 4265, 4505};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2371.7060 4959.9062";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> xs = {3134, 1270, 4987, 113, 435, 2462, 836, 4357, 4622, 2341, 4755, 1624, 3162, 4352, 3579, 1061, 3872, 1758, 3483, 3804, 624, 504, 1375, 960, 4264, 3819, 1540, 3629, 3326, 1074, 3904, 483, 2222, 4308, 539, 2209, 3336, 3750, 638, 421, 4098, 3588, 1038, 1469, 453, 1257, 4520, 2975, 4312, 2479};
    vector<int> ys = {1522, 2785, 4517, 363, 2623, 1495, 3562, 4926, 4120, 636, 808, 4513, 2321, 4123, 2233, 2704, 3678, 587, 1790, 3490, 2757, 3759, 331, 3676, 3125, 2172, 4640, 4706, 2639, 3062, 1550, 1350, 4281, 3493, 309, 2019, 1659, 4416, 310, 4735, 4512, 597, 1074, 4204, 4064, 1051, 1884, 3763, 911, 958};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3086.9716 4810.6728";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> xs = {4809, 1440, 4155, 1770, 1929, 1764, 4890, 1619, 446, 4474, 4776, 2961, 3056, 2770, 1365, 3811, 349, 2300, 1043, 2849, 2258, 2623, 2931, 2132, 1574, 524, 2879, 4167, 4302, 4169, 693, 2576, 4238, 3757, 1119, 2696, 2444, 3026, 4658, 0, 1471, 1694, 3234, 361, 4047, 1680, 2860, 1838, 1666, 4734};
    vector<int> ys = {950, 2823, 4960, 923, 4610, 1122, 9, 1293, 3303, 2766, 2754, 3876, 4547, 3140, 2511, 166, 4908, 1311, 165, 4103, 392, 1284, 2007, 2587, 491, 1260, 1332, 581, 3569, 3914, 1851, 4850, 2950, 2089, 4693, 3513, 3099, 299, 4279, 3632, 3498, 2918, 2619, 1247, 4431, 4952, 1660, 2387, 3659, 857};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2281.7714 4940.9667";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> xs = {4150, 4811, 1120, 930, 111, 3452, 165, 3457, 3421, 2799, 3508, 3907, 1195, 1727, 31, 179, 2626, 634, 4823, 96, 3682, 2073, 4338, 4093, 4624, 4451, 1356, 2329, 3579, 3805, 527, 1233, 1527, 1092, 4617, 4865, 1928, 1896, 4221, 1310, 1872, 2001, 4650, 3742, 1069, 787, 2869, 4720, 226, 4981};
    vector<int> ys = {4891, 736, 1352, 2922, 4746, 2037, 4312, 4097, 254, 252, 1524, 395, 3094, 3436, 1023, 4221, 1336, 4699, 2261, 4324, 1437, 1735, 3900, 2966, 3917, 187, 3557, 2849, 2361, 4000, 931, 4021, 4145, 584, 2963, 4866, 3283, 2897, 2778, 2133, 1098, 4280, 2881, 2892, 4012, 246, 2764, 1256, 4589, 4197};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3424.7119 4842.7568";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> xs = {1392, 4671, 2114, 1455, 1221, 3596, 2423, 2881, 2345, 4422, 3389, 777, 3060, 3579, 2473, 735, 1675, 836, 981, 3598, 3641, 1984, 1267, 1706, 3167, 217, 2904, 3169, 4306, 1745, 1975, 1996, 3153, 4391, 4038, 502, 165, 3184, 968, 3620, 4850, 4257, 4855, 2349, 3984, 2666, 3357, 862, 4324, 1115};
    vector<int> ys = {431, 3469, 1275, 4942, 4167, 3960, 1294, 4148, 4514, 621, 2933, 681, 3063, 578, 4248, 3688, 4691, 1971, 3019, 1935, 1781, 1885, 604, 1140, 947, 1861, 532, 4556, 4686, 1309, 3876, 2701, 1125, 2117, 282, 2813, 4099, 271, 1077, 244, 3107, 2366, 4191, 2703, 3323, 1487, 4827, 4005, 4718, 3016};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2435.3623 4852.3681";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> xs = {634, 1725, 1513, 1630, 892, 2945, 3667, 871, 665, 4118, 806, 1438, 3115, 4916, 1036, 3558, 1227, 1803, 2374, 2573, 3988, 16, 3117, 211, 1682, 2552, 4307, 1801, 301, 1758, 2631, 2104, 1278, 3127, 479, 4308, 4630, 1927, 1606, 3165, 1386, 1392, 829, 4223, 4600, 1265, 4457, 1585, 2606, 2662};
    vector<int> ys = {4686, 1662, 3172, 4352, 1047, 4938, 3100, 1775, 75, 1850, 4419, 3320, 777, 2515, 737, 3667, 3154, 3157, 505, 1274, 4967, 4819, 2905, 1420, 3188, 2094, 1849, 2549, 1090, 1403, 4082, 2075, 4724, 4602, 3702, 3188, 3619, 4493, 2527, 1680, 4882, 4188, 3586, 1259, 2547, 2093, 3670, 2349, 4913, 3733};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3229.8955 4941.7246";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> xs = {352, 2902, 1841, 512, 4057, 325, 1442, 4030, 1797, 1224, 1382, 2498, 958, 306, 4049, 3383, 4086, 1433, 2173, 3429, 3968, 2537, 2106, 3808, 2435, 1821, 840, 4250, 1205, 419, 26, 688, 3793, 1504, 728, 1091, 3965, 2639, 1331, 3909, 3483, 2011, 3111, 2766, 4907, 86, 3201, 4829, 4030, 1138};
    vector<int> ys = {3314, 3590, 1141, 4036, 4427, 4618, 650, 3668, 2771, 211, 4802, 3379, 902, 807, 4120, 4848, 4315, 2382, 4955, 4885, 4083, 97, 3002, 3757, 4223, 3888, 945, 1757, 4078, 1755, 3444, 4925, 817, 1052, 3521, 1988, 260, 2155, 1036, 2859, 640, 2520, 1345, 4259, 3578, 2286, 426, 325, 4500, 256};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2018.9638 4924.7783";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> xs = {1722, 402, 971, 1296, 4698, 2544, 1919, 2957, 665, 4663, 3547, 374, 2702, 654, 3771, 4309, 3627, 1280, 1435, 2559, 3838, 4090, 4135, 4787, 4501, 3126, 4467, 269, 992, 2746, 3664, 1942, 1743, 426, 4114, 3638, 3612, 1052, 2994, 355, 1710, 4790, 3314, 3954, 4150, 2347, 981, 3714, 562, 81};
    vector<int> ys = {2126, 2790, 2318, 3177, 3801, 2695, 2322, 2860, 3350, 3626, 2918, 3390, 2199, 3589, 1945, 1422, 3538, 4029, 4180, 4167, 421, 3875, 3502, 3661, 1044, 2724, 4864, 2366, 1618, 2167, 4805, 293, 4036, 2100, 4571, 792, 749, 1244, 1094, 1162, 2618, 2985, 3010, 302, 2277, 4082, 1618, 3656, 479, 4746};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3004.0546 4806.4257";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> xs = {175, 844, 1187, 4100, 4218, 3475, 2727, 35, 661, 4827, 2114, 2052, 4248, 4258, 2823, 4751, 1597, 2447, 2618, 3256, 444, 3825, 2764, 19, 4911, 4842, 2882, 101, 1581, 1032, 1937, 4278, 905, 2212, 386, 1029, 4021, 3498, 1297, 4764, 1356, 282, 4320, 3427, 1489, 2710, 783, 3984, 1625, 4732};
    vector<int> ys = {787, 4126, 4689, 4252, 4130, 2974, 2486, 4481, 1078, 2441, 4596, 2167, 1486, 4424, 3663, 940, 1550, 1952, 4535, 2708, 1499, 4970, 2274, 1634, 4895, 3461, 2372, 3980, 779, 2240, 682, 2798, 3837, 2821, 440, 4216, 4895, 3452, 4456, 1850, 4534, 3570, 2034, 2718, 1326, 3636, 2416, 1846, 3236, 577};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "4214.3691 4920.3437";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> xs = {4572, 3684, 1011, 2806, 2002, 1315, 964, 2125, 773, 4449, 1425, 2633, 4417, 4093, 2263, 4132, 456, 886, 325, 4443, 279, 39, 303, 1443, 1789, 3967, 590, 1615, 2758, 3756, 1867, 2404, 2110, 2745, 2806, 673, 1405, 4708, 2013, 4128, 4646, 254, 3512, 1661, 1166, 3348, 4438, 2175, 3743, 85};
    vector<int> ys = {3258, 4611, 2291, 4139, 4843, 4570, 2445, 2646, 4899, 155, 3103, 2613, 817, 1353, 2523, 1350, 3777, 3626, 3881, 4818, 3038, 2105, 3308, 241, 2694, 3186, 1283, 3810, 3819, 144, 1910, 812, 855, 3818, 4079, 4050, 290, 3325, 3688, 2016, 2171, 236, 2133, 842, 746, 2640, 3056, 3731, 4599, 3035};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2344.6542 4853.6396";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> xs = {1870, 3196, 3949, 1059, 982, 170, 3414, 3646, 2701, 4733, 2416, 1308, 1770, 1006, 2587, 4917, 127, 3518, 1986, 2510, 2974, 4196, 4670, 373, 2492, 2956, 1189, 1900, 3552, 787, 851, 1489, 4615, 2112, 213, 4047, 1585, 3167, 4086, 3529, 2761, 106, 499, 1264, 4191, 4564, 4483, 1774, 1687, 442};
    vector<int> ys = {2251, 169, 3444, 3747, 2319, 1206, 733, 2419, 3392, 568, 3431, 228, 382, 3955, 2168, 2977, 4758, 4117, 4771, 1430, 3528, 89, 1279, 3643, 2562, 1439, 4202, 4607, 4619, 3558, 3926, 3416, 408, 2654, 3085, 2494, 2249, 1348, 3517, 4754, 4400, 2501, 4919, 2966, 1933, 184, 649, 1018, 1122, 2500};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1188.2236 4840.0068";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> xs = {3217, 4183, 3640, 1321, 4870, 18, 4535, 3839, 2344, 2996, 4863, 267, 4298, 4528, 4058, 934, 150, 609, 4611, 4479, 55, 1906, 2392, 1855, 2521, 755, 4999, 3370, 3758, 1198, 2850, 3046, 1167, 1879, 3335, 1176, 2518, 2349, 2244, 2051, 2270, 1100, 3870, 4515, 2184, 3409, 1604, 3162, 4821, 3940};
    vector<int> ys = {4627, 2689, 808, 2850, 3272, 2210, 3753, 81, 954, 54, 531, 390, 4146, 2914, 4219, 1654, 3720, 1033, 2395, 935, 1126, 3494, 4603, 1811, 1322, 4564, 4777, 2532, 1025, 3486, 2123, 2589, 898, 1075, 2429, 454, 3499, 1949, 1118, 2309, 411, 1287, 4347, 801, 1770, 4508, 366, 4034, 4527, 2418};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3768.9980 4688.8642";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> xs = {4938, 3237, 2189, 2921, 2031, 2814, 3423, 3601, 4212, 3755, 4901, 2116, 1090, 742, 4957, 3584, 3967, 4586, 4180, 882, 333, 71, 1851, 29, 3193, 4644, 3191, 3669, 2289, 886, 1796, 974, 2164, 122, 4222, 2168, 669, 1096, 4641, 277, 950, 1125, 1686, 1632, 181, 2747, 2078, 111, 4303, 1477};
    vector<int> ys = {1407, 3121, 4805, 4906, 1479, 4815, 1165, 60, 981, 4110, 890, 4622, 1799, 1680, 3246, 3338, 2262, 1154, 2653, 3723, 703, 485, 3414, 4922, 3236, 4553, 3944, 446, 3332, 4838, 855, 4330, 2837, 1208, 1364, 1156, 4353, 4654, 1234, 3292, 3469, 3108, 90, 3655, 1227, 322, 1332, 4257, 2301, 137};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1277.6074 4894.1210";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> xs = {4996, 4848, 2837, 392, 3874, 1958, 3580, 2147, 930, 1750, 3887, 834, 4518, 181, 537, 1489, 2234, 1103, 1743, 193, 4249, 2107, 1641, 3439, 2864, 4102, 3619, 1213, 1617, 3857, 2250, 3209, 4692, 3981, 3264, 726, 575, 2123, 3943, 4496, 2860, 470, 2571, 896, 867, 3009, 68, 742, 3266, 1366};
    vector<int> ys = {4759, 1122, 4200, 470, 2285, 1568, 3532, 2740, 2041, 1160, 662, 3959, 4153, 3052, 66, 508, 1943, 2301, 1127, 1186, 4027, 1808, 40, 2396, 2672, 4648, 2597, 3097, 819, 4051, 3409, 537, 4208, 4828, 4724, 4465, 2393, 2089, 1301, 1206, 3018, 4687, 1970, 4710, 2644, 1935, 3378, 4452, 4564, 2806};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3676.7695 4781.0449";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> xs = {2134, 4841, 4528, 1984, 3024, 2629, 3997, 1881, 3221, 2642, 2598, 3934, 447, 3076, 1721, 1306, 1866, 4470, 4811, 3410, 53, 1454, 1716, 502, 2804, 3320, 4663, 3968, 4676, 3493, 1790, 4832, 84, 4006, 916, 4426, 531, 4153, 1177, 2151, 2018, 2613, 3467, 717, 2968, 4451, 2119, 4316, 3086, 3579};
    vector<int> ys = {136, 4696, 4384, 2461, 3368, 4219, 2259, 4048, 415, 3600, 1896, 1237, 4752, 158, 3474, 1369, 3455, 106, 3610, 2673, 3220, 622, 229, 868, 3830, 4162, 3594, 2532, 2026, 3790, 2517, 2275, 4870, 4052, 1897, 3175, 960, 2327, 581, 4437, 587, 374, 2216, 1728, 1789, 282, 1201, 4187, 3480, 2876};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1530.1044 4775.3681";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> xs = {1051, 2686, 4322, 161, 3501, 1504, 1767, 1341, 3460, 228, 4747, 4485, 2478, 4351, 814, 2968, 1741, 1727, 4159, 2408, 4743, 2797, 4802, 4923, 4660, 215, 1445, 3201, 2195, 3333, 923, 2031, 1059, 4815, 917, 4684, 588, 479, 4627, 763, 2943, 4385, 1375, 898, 1228, 4084, 721, 2000, 4401, 877};
    vector<int> ys = {4496, 4609, 263, 1943, 1339, 1226, 3950, 172, 1710, 1448, 1297, 3597, 3082, 1126, 4159, 4388, 4986, 3750, 3289, 2463, 1857, 2750, 3633, 922, 3169, 3416, 1977, 4662, 193, 2715, 2735, 4726, 1790, 4362, 4276, 4180, 3088, 105, 606, 1562, 513, 1369, 1400, 228, 4652, 3036, 2366, 1263, 3613, 3404};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1966.1962 4835.4501";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> xs = {2655, 3952, 4094, 1063, 1569, 1225, 165, 728, 3146, 2850, 833, 877, 4270, 1662, 1839, 1351, 4856, 2537, 4767, 3978, 2301, 356, 2466, 3658, 1830, 1739, 3994, 1272, 4603, 912, 4787, 3276, 1426, 2632, 3503, 777, 1710, 4788, 1049, 3481, 4873, 4916, 4643, 884, 4738, 3572, 342, 4733, 1586, 3255};
    vector<int> ys = {1383, 2860, 1462, 4294, 1856, 140, 2977, 3949, 661, 2543, 3358, 1749, 4463, 4919, 2733, 2980, 359, 2409, 3665, 3105, 4272, 4184, 1774, 3804, 4673, 1457, 2865, 1290, 3082, 4611, 2379, 4517, 2940, 1612, 4126, 4909, 1891, 1800, 2184, 282, 4176, 570, 2606, 3705, 4864, 1410, 40, 3135, 887, 2292};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2376.7646 4897.3828";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> xs = {3672, 4813, 419, 3371, 1950, 2558, 1922, 2583, 1415, 1305, 2360, 4748, 1553, 1442, 407, 3446, 37, 789, 190, 3071, 877, 3319, 4051, 1147, 1972, 3064, 4035, 3194, 3346, 3001, 1351, 4201, 2821, 2080, 828, 2003, 2248, 3993, 3484, 3696, 4477, 3711, 4672, 1540, 4146, 2310, 2924, 4671, 4004, 2094};
    vector<int> ys = {527, 2359, 2949, 2589, 1064, 3460, 2144, 3536, 1655, 174, 1625, 3610, 3386, 2231, 1538, 3251, 2459, 128, 4767, 1617, 1952, 3122, 1007, 1418, 4639, 4236, 1493, 1057, 1268, 697, 3499, 1323, 824, 3830, 4396, 3623, 4783, 2646, 1543, 3588, 1087, 61, 1527, 2732, 587, 4921, 307, 1734, 4009, 1789};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1826.4511 4830.9531";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> xs = {4620, 1807, 1065, 3762, 4615, 598, 194, 1407, 3045, 1004, 2564, 3288, 2512, 333, 2396, 441, 4199, 3250, 2343, 3607, 4230, 25, 2686, 2966, 2321, 1736, 1349, 631, 1650, 1148, 3283, 1177, 3940, 2229, 2607, 35, 4609, 2394, 4002, 3665, 4440, 4844, 1247, 4056, 1655, 3602, 443, 3222, 1459, 1141};
    vector<int> ys = {3464, 1076, 4080, 2818, 3353, 2245, 2095, 3698, 2949, 4168, 3353, 1711, 810, 45, 2140, 1512, 4556, 1064, 3282, 873, 1153, 2634, 1825, 878, 1270, 4220, 4510, 2747, 792, 1809, 3779, 2614, 1734, 925, 191, 1182, 2343, 1595, 197, 2766, 1886, 4660, 2948, 2880, 4714, 1357, 2422, 172, 487, 117};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3054.2011 4652.8632";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> xs = {4454, 2231, 3081, 1169, 2425, 501, 4574, 601, 236, 2290, 2891, 1226, 1898, 2675, 2125, 2738, 3551, 905, 3319, 3396, 937, 4766, 466, 4686, 3434, 2248, 1829, 4203, 4536, 2781, 216, 291, 3260, 245, 2753, 4825, 1371, 1936, 793, 2877, 2419, 1676, 4053, 4915, 579, 1320, 4774, 3612, 4953, 2930};
    vector<int> ys = {2659, 3309, 3529, 4063, 4642, 647, 259, 679, 69, 4950, 3787, 1395, 1705, 1454, 2192, 2979, 1098, 4580, 4760, 218, 3217, 2081, 4175, 3541, 4948, 4021, 735, 81, 3, 3233, 4160, 3180, 4010, 1119, 3290, 1673, 3097, 4396, 4546, 3705, 2047, 4655, 1296, 223, 4205, 3434, 3389, 737, 4683, 801};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3077.2578 4896.9394";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> xs = {3989, 3434, 1007, 355, 4503, 3222, 1348, 2926, 2821, 4827, 4596, 179, 320, 3642, 4095, 2830, 4085, 4623, 2584, 1112, 2572, 4166, 4940, 2717, 508, 1553, 2664, 454, 2173, 268, 4648, 3463, 1316, 204, 2655, 1947, 889, 4532, 2117, 1024, 1463, 4805, 4322, 4492, 3632, 4689, 4768, 4010, 2023, 1560};
    vector<int> ys = {4511, 3427, 1491, 1100, 1611, 1786, 4950, 2920, 3368, 1823, 1847, 218, 1889, 3625, 1687, 3417, 694, 466, 3155, 1771, 3456, 760, 1340, 2947, 2711, 1483, 3258, 3668, 1319, 4384, 404, 4613, 2778, 1802, 1320, 4885, 2975, 3923, 2241, 534, 844, 3876, 4727, 2838, 3481, 1143, 805, 219, 2663, 2380};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2251.9628 4864.1103";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> xs = {3564, 2995, 4399, 1912, 4325, 2409, 1075, 1805, 1492, 4721, 2032, 3682, 915, 2502, 2866, 1150, 3156, 3632, 1616, 3003, 4349, 3951, 1010, 3158, 4437, 1935, 365, 3641, 4454, 3245, 3319, 1769, 3171, 4530, 3548, 2118, 2861, 4374, 4789, 2757, 4173, 4871, 3988, 3730, 1078, 4900, 2172, 3718, 3664, 827};
    vector<int> ys = {1658, 3374, 4103, 1994, 575, 866, 4446, 2075, 1278, 1735, 4065, 3106, 3097, 1325, 4428, 1743, 2078, 3663, 4600, 2102, 806, 856, 2349, 1343, 123, 1799, 2941, 3040, 1596, 3206, 797, 4221, 4881, 4766, 2948, 4929, 2686, 3536, 2861, 4042, 2931, 498, 3544, 2124, 2820, 4603, 34, 1054, 2968, 1509};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3049.7109 4863.0009";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> xs = {3285, 1219, 1441, 642, 194, 153, 2530, 194, 3032, 1579, 3378, 148, 775, 972, 3091, 3446, 4957, 2886, 3827, 4983, 3465, 1537, 1440, 2181, 2337, 4321, 4666, 4522, 3040, 3207, 1503, 2580, 881, 1276, 4388, 4751, 4173, 927, 2021, 2106, 3549, 1709, 186, 3536, 1316, 4036, 1737, 4624, 2087, 530};
    vector<int> ys = {1973, 4488, 3007, 4136, 10, 185, 4755, 1645, 4378, 3116, 3199, 2783, 2013, 1289, 965, 3537, 4000, 219, 3455, 2990, 3925, 3699, 4809, 512, 451, 3698, 1109, 4809, 4777, 1114, 691, 2989, 984, 1236, 4743, 1489, 2861, 4277, 546, 1466, 4723, 2535, 4569, 3966, 867, 1326, 3355, 33, 3808, 1052};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2966.8847 4799.6250";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> xs = {1580, 2685, 151, 2462, 3943, 1575, 4957, 1419, 546, 2022, 803, 3239, 4273, 3022, 1258, 6, 3226, 3782, 415, 2063, 1712, 304, 209, 2298, 4368, 2565, 716, 3687, 4994, 3859, 301, 2037, 4373, 1962, 2486, 1797, 4844, 1849, 4674, 3322, 3696, 1875, 399, 4988, 2499, 4445, 1629, 3109, 345, 3433};
    vector<int> ys = {717, 1705, 586, 3819, 3041, 2788, 3073, 4274, 988, 955, 2087, 720, 2946, 3805, 4111, 3199, 2159, 1869, 4364, 4761, 4847, 3494, 1533, 4438, 4770, 1424, 1457, 1802, 2517, 3576, 2616, 3051, 2127, 894, 4147, 3043, 338, 11, 776, 4195, 4628, 2836, 3481, 1728, 465, 4148, 4934, 285, 640, 1698};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2168.2460 4865.1416";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> xs = {4755, 4571, 334, 1358, 1415, 1284, 602, 2341, 164, 1287, 326, 4597, 4723, 4638, 2242, 2066, 4598, 1866, 2594, 1590, 4783, 2598, 1093, 2940, 301, 2454, 3357, 576, 4514, 949, 1699, 2504, 2372, 1983, 2190, 800, 2811, 4386, 1183, 2170, 3323, 2920, 3095, 209, 4304, 44, 3080, 3873, 1181, 774};
    vector<int> ys = {3385, 4022, 3470, 1943, 595, 1810, 1834, 3223, 2675, 4137, 1969, 340, 4710, 2304, 2615, 1009, 508, 550, 4279, 1257, 3773, 1138, 337, 3969, 2398, 2235, 2996, 2673, 2510, 3906, 3253, 1831, 339, 1172, 1383, 143, 4596, 1209, 2660, 661, 51, 4477, 2027, 852, 4208, 1753, 1126, 2075, 3500, 802};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3639.9501 4601.7714";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> xs = {1692, 1340, 3219, 2677, 562, 3618, 1490, 3472, 3722, 431, 1935, 2660, 4605, 4917, 2342, 4032, 591, 84, 2546, 4649, 1040, 495, 3966, 1153, 441, 3207, 695, 1242, 1239, 1385, 2842, 1091, 2716, 3654, 1826, 2075, 4821, 3899, 4711, 2130, 4233, 4937, 219, 3756, 4033, 210, 3001, 1715, 3290, 388};
    vector<int> ys = {4882, 4173, 3548, 1601, 2278, 1200, 655, 3783, 2693, 4238, 2668, 1527, 251, 4422, 2539, 679, 471, 1389, 3158, 1855, 3131, 2520, 1896, 1974, 3870, 411, 2161, 1924, 357, 3709, 655, 2433, 2267, 3391, 951, 1299, 995, 2940, 1720, 3194, 53, 1887, 1463, 3338, 332, 2644, 847, 3506, 978, 601};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2104.3222 4582.8750";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> xs = {3849, 2970, 1454, 1993, 4734, 3193, 3469, 3155, 4510, 3296, 2848, 3380, 2940, 3615, 1086, 1758, 349, 1904, 4303, 1049, 2457, 1117, 3509, 3850, 1200, 4011, 4657, 3074, 53, 3219, 4728, 23, 3664, 840, 1162, 4127, 3719, 4066, 1354, 3806, 823, 2818, 1516, 2719, 834, 1871, 188, 109, 3556, 3521};
    vector<int> ys = {834, 2868, 1871, 2371, 481, 403, 428, 1458, 2107, 1379, 4772, 3545, 2534, 3956, 4368, 3092, 4921, 3168, 1310, 3094, 546, 685, 631, 1721, 3475, 3344, 3062, 1439, 3877, 2438, 1734, 3096, 1195, 969, 821, 4250, 2139, 780, 1367, 4917, 456, 693, 2551, 4742, 756, 598, 489, 3565, 2223, 4716};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2258.6865 4880.3789";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> xs = {1241, 2257, 4932, 88, 80, 2715, 1620, 3755, 238, 4881, 1160, 3934, 1274, 4712, 1741, 1966, 4930, 98, 1697, 2768, 4855, 1815, 4209, 2001, 847, 3739, 3669, 3200, 3320, 722, 1291, 2664, 4565, 3720, 699, 4003, 4997, 4974, 588, 2828, 4967, 1343, 1235, 261, 935, 1136, 4601, 1579, 3751, 4140};
    vector<int> ys = {3979, 3552, 1541, 879, 3689, 763, 252, 530, 2082, 2472, 1179, 2334, 2227, 2390, 1941, 2787, 4008, 4085, 215, 366, 3972, 4573, 3196, 1077, 239, 3093, 225, 1620, 3948, 950, 1185, 2559, 1219, 1808, 4334, 1492, 374, 4787, 3970, 815, 3205, 243, 920, 1396, 1411, 190, 2177, 2105, 4928, 1870};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3561.4667 4775.5390";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> xs = {143, 944, 2780, 4128, 1822, 1205, 4237, 1889, 4032, 944, 3531, 4202, 2142, 830, 119, 1052, 2098, 4309, 3483, 3356, 3549, 4893, 1770, 4366, 691, 3298, 2149, 3969, 2017, 2119, 2619, 248, 587, 2679, 153, 18, 2537, 2736, 3467, 1935, 3516, 4718, 440, 2258, 462, 2291, 151, 4228, 4599, 3114};
    vector<int> ys = {2813, 2608, 856, 2801, 2396, 4878, 3941, 4257, 1575, 180, 2182, 2772, 1759, 1183, 1823, 445, 2317, 2647, 1936, 3833, 2834, 3620, 3232, 931, 139, 2899, 3070, 2983, 3119, 4560, 3701, 2931, 2829, 2157, 1301, 705, 3208, 1402, 4683, 981, 3800, 2011, 4660, 1465, 226, 4680, 2915, 4256, 807, 4058};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1637.0878 4776.1806";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> xs = {2869, 4329, 3652, 2969, 4522, 2741, 2735, 2080, 402, 2717, 3959, 2642, 813, 4383, 2995, 2970, 3323, 3547, 707, 1811, 3996, 1594, 4309, 3827, 1249, 2258, 3028, 4008, 2288, 1748, 917, 3926, 2042, 1493, 1637, 3426, 147, 2533, 504, 1494, 3063, 2414, 2797, 4783, 584, 4306, 4368, 1495, 4107, 3929};
    vector<int> ys = {885, 2129, 2790, 2813, 612, 1854, 3341, 1325, 2486, 2167, 4552, 1920, 1420, 1816, 3867, 2050, 1151, 3887, 169, 2210, 1667, 2387, 4745, 2676, 3255, 2604, 849, 2605, 2427, 37, 1572, 2263, 1597, 2694, 813, 3366, 4146, 1118, 2967, 3654, 4662, 4608, 3569, 113, 529, 677, 572, 443, 693, 2980};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3580.0283 4679.9316";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> xs = {4084, 4742, 412, 615, 1391, 3620, 2005, 3881, 3827, 368, 1168, 3381, 2589, 3155, 1176, 559, 1909, 3665, 3419, 3638, 87, 1010, 2041, 3207, 1776, 4250, 3104, 1599, 3546, 3353, 4648, 4601, 4210, 1968, 3168, 2964, 1610, 956, 4578, 4642, 3568, 4224, 3435, 1669, 2468, 3050, 3301, 3154, 525, 1734};
    vector<int> ys = {3415, 2859, 1125, 1130, 2460, 1478, 757, 2320, 4119, 4810, 947, 463, 1271, 4690, 316, 3636, 1134, 4714, 3342, 3312, 2415, 2506, 4645, 1955, 2508, 4529, 676, 4124, 3118, 3192, 4474, 375, 1238, 4344, 3766, 3181, 4293, 1048, 3063, 1111, 3373, 1931, 1549, 1476, 1938, 4272, 510, 2710, 4047, 3445};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1807.6484 4747.6240";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> xs = {1773, 822, 1176, 1286, 2104, 4353, 4945, 1448, 2822, 4426, 4606, 4826, 3942, 597, 3016, 2710, 2991, 4465, 2875, 4373, 285, 1200, 1450, 4471, 4850, 4384, 1638, 3729, 3370, 1911, 211, 4108, 3504, 4945, 295, 1826, 2660, 3337, 4659, 3397, 3880, 4267, 4196, 1056, 1745, 1283, 2047, 4819, 3369, 3373};
    vector<int> ys = {3190, 3711, 2373, 3184, 1931, 3583, 2421, 4980, 711, 3342, 1329, 1517, 2771, 335, 1956, 4551, 3786, 4102, 2143, 1305, 3266, 712, 2670, 3864, 639, 2385, 4841, 118, 3203, 4214, 2596, 3586, 3794, 1340, 3209, 168, 4859, 1065, 512, 2625, 2846, 67, 307, 3411, 2235, 2003, 4048, 3248, 2295, 562};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1909.1230 4894.4941";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> xs = {4193, 1751, 1663, 2213, 2583, 2230, 1123, 1729, 2085, 759, 3574, 1811, 1287, 4533, 2004, 1027, 2428, 1499, 1448, 1606, 3900, 2271, 4324, 567, 597, 1379, 249, 4050, 3101, 2961, 1413, 722, 207, 1123, 2870, 586, 3559, 2317, 3643, 572, 3241, 1258, 4369, 2833, 4013, 3092, 320, 751, 3489, 2752};
    vector<int> ys = {44, 1294, 995, 2720, 4510, 499, 4000, 2660, 4626, 1533, 3010, 3761, 1225, 2013, 536, 1931, 1116, 4006, 314, 2407, 620, 1376, 4240, 3737, 4068, 1, 1595, 1545, 4114, 1667, 2997, 1965, 3342, 2361, 189, 1142, 2594, 43, 2204, 738, 613, 945, 3655, 4944, 2118, 1874, 1931, 2112, 2174, 4013};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2697.5683 4716.6289";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> xs = {1820, 3754, 3764, 1234, 3688, 308, 2820, 2972, 4640, 1786, 553, 3332, 1272, 2125, 1842, 4186, 2465, 3847, 589, 683, 1421, 4396, 3420, 2781, 2568, 2360, 1837, 1095, 1238, 637, 4950, 4639, 2032, 4474, 199, 1780, 624, 247, 3090, 4028, 3334, 767, 3787, 171, 4174, 4901, 3564, 548, 242, 3294};
    vector<int> ys = {2570, 3243, 3271, 3009, 1994, 345, 2849, 1994, 3792, 3415, 347, 4372, 4318, 2785, 1860, 4689, 4825, 346, 3532, 3418, 1563, 16, 3481, 2210, 1372, 4197, 1171, 635, 10, 3124, 2484, 1365, 168, 2165, 1916, 3096, 4044, 4820, 2327, 4791, 1609, 1364, 2385, 1189, 211, 4842, 2406, 2917, 3942, 2369};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2898.9384 4829.4726";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> xs = {597, 4942, 2289, 530, 3791, 4557, 1958, 3982, 4662, 4570, 3375, 1242, 1046, 3875, 4317, 1044, 2441, 1116, 2311, 1576, 3981, 2741, 4941, 3362, 4165, 4327, 2953, 4574, 4434, 3714, 113, 49, 1215, 1127, 1084, 2359, 4425, 175, 4215, 4876, 547, 4341, 9, 2881, 3282, 1343, 3241, 4411, 492, 2515};
    vector<int> ys = {2100, 2738, 2599, 1201, 1521, 2056, 4882, 2998, 4847, 2239, 4101, 1565, 3285, 2254, 3749, 1633, 1182, 167, 1779, 808, 2014, 476, 50, 3706, 129, 1922, 897, 1007, 1702, 763, 3154, 2025, 48, 996, 2698, 2482, 467, 3923, 1056, 4256, 3014, 4965, 4931, 1026, 3157, 680, 4543, 2900, 130, 3436};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2522.2929 4930.2509";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> xs = {4530, 4288, 860, 348, 2790, 2537, 3782, 1649, 45, 89, 1489, 1844, 1092, 211, 4149, 4672, 2685, 671, 1841, 109, 2733, 1097, 3479, 3380, 1050, 3118, 2797, 2255, 3178, 2819, 2940, 4654, 921, 2479, 572, 3993, 1100, 3049, 3055, 4500, 2688, 317, 3166, 3181, 1930, 1270, 33, 4030, 274, 2713};
    vector<int> ys = {2450, 3528, 928, 1827, 1508, 4485, 1654, 2965, 3512, 2799, 3978, 1654, 1488, 3753, 2304, 490, 4210, 1072, 601, 2290, 538, 3070, 4192, 3685, 4062, 865, 4885, 2078, 3486, 3840, 4153, 741, 2905, 2202, 1323, 670, 3193, 778, 1745, 3685, 963, 1931, 3774, 4218, 165, 3797, 2929, 2123, 3262, 2870};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2807.9482 4615.4912";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> xs = {2023, 874, 4035, 2357, 2185, 4472, 2515, 4583, 1651, 2488, 4225, 2195, 1895, 656, 925, 3860, 4212, 4626, 3292, 634, 4102, 1537, 2537, 4225, 910, 3291, 2772, 2920, 985, 1582, 4069, 20, 4274, 2966, 2529, 3269, 1657, 2513, 3364, 1896, 3536, 1878, 925, 569, 4126, 1951, 895, 1781, 699, 1586};
    vector<int> ys = {4314, 4930, 2512, 2308, 963, 1618, 500, 4298, 674, 2517, 887, 1423, 508, 1469, 3763, 2522, 3390, 2370, 1313, 2708, 4693, 3781, 4841, 1950, 2491, 136, 4938, 3796, 4669, 1889, 142, 4689, 1855, 4919, 1249, 3954, 4180, 2067, 942, 1229, 2197, 1681, 1822, 1759, 2925, 4703, 4973, 767, 839, 2884};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1550.0712 4951.1542";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> xs = {1174, 793, 827, 1403, 2498, 774, 582, 4329, 3555, 2364, 3626, 1095, 3852, 2931, 1189, 1359, 796, 497, 1456, 4455, 1672, 3811, 3278, 2889, 2532, 718, 3311, 2211, 2279, 4935, 659, 1945, 1432, 358, 1570, 4152, 1949, 3091, 3388, 2656, 2251, 4409, 1978, 1897, 37, 3031, 99, 4885, 4828, 2159};
    vector<int> ys = {755, 4751, 2174, 933, 4366, 3945, 2359, 1140, 1735, 4209, 3021, 3254, 1157, 4098, 2551, 1110, 2701, 3928, 4286, 1857, 653, 763, 508, 2099, 1323, 3221, 4999, 2536, 2970, 2638, 3438, 1761, 2358, 3415, 2241, 319, 3567, 1165, 3532, 3539, 4025, 2608, 1824, 1181, 377, 1049, 1621, 3391, 2718, 666};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2373.4843 4761.0166";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> xs = {4628, 1042, 4947, 1747, 438, 4092, 1451, 2517, 579, 4182, 1120, 1141, 2612, 2360, 3727, 4056, 3479, 4448, 1048, 3818, 4711, 300, 700, 1231, 1172, 3887, 4561, 2668, 4958, 3944, 828, 4124, 1761, 4680, 4195, 3720, 3444, 2867, 2403, 4103, 2859, 1509, 4393, 423, 4960, 1140, 627, 3340, 2072, 2730};
    vector<int> ys = {4685, 4813, 773, 1138, 2146, 2289, 3226, 4991, 2862, 4239, 1960, 2934, 1194, 1915, 4018, 2162, 448, 3621, 3137, 3299, 2770, 3759, 2099, 714, 3991, 4398, 1692, 4558, 4491, 2144, 2787, 4928, 1961, 2636, 3853, 4799, 51, 4095, 2899, 1550, 3304, 4960, 206, 2206, 3426, 3785, 1413, 4789, 4910, 2282};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2472.6025 4963.7587";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> xs = {4501, 2495, 4256, 4575, 3941, 3769, 1562, 2488, 846, 4732, 1041, 2968, 4232, 829, 3117, 4542, 635, 2018, 84, 38, 2173, 289, 4994, 2695, 1810, 4811, 4325, 2149, 4026, 3567, 4210, 740, 4305, 867, 2480, 4042, 1853, 2775, 4539, 2498, 1764, 2083, 155, 3589, 366, 1169, 552, 991, 892, 4719};
    vector<int> ys = {828, 3799, 674, 87, 1587, 4977, 1026, 765, 873, 3874, 1637, 3254, 2926, 2801, 2772, 4464, 4030, 2399, 823, 575, 2726, 4748, 821, 4230, 1983, 1968, 3261, 4804, 4469, 1338, 2276, 1469, 3955, 822, 2490, 718, 994, 1253, 3095, 4070, 4482, 3306, 4609, 2662, 2363, 3852, 1492, 3551, 4772, 2227};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2456.0332 4875.9423";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> xs = {2309, 2616, 1133, 2443, 3403, 1124, 4318, 2410, 2105, 2137, 4779, 768, 1357, 4186, 662, 1035, 4246, 2829, 1346, 1391, 4354, 980, 1482, 1558, 1021, 1201, 575, 927, 2588, 2436, 4405, 4293, 431, 57, 4064, 3301, 2133, 1449, 1216, 2969, 3464, 4785, 4247, 3491, 914, 1092, 4351, 2820, 4423, 4179};
    vector<int> ys = {3207, 430, 3583, 4516, 4867, 2039, 53, 1676, 3638, 4017, 4131, 552, 2265, 4647, 4423, 4130, 458, 2428, 1351, 257, 2857, 4104, 2790, 1506, 2893, 2174, 3474, 913, 4557, 3230, 3928, 2127, 3034, 4578, 4610, 234, 2287, 2238, 1620, 4340, 3177, 3637, 1803, 4785, 4383, 2963, 2323, 1749, 467, 1448};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "3471.9960 4784.2177";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> xs = {2837, 2861, 1671, 3591, 2183, 369, 3640, 3632, 1105, 3337, 2131, 4461, 2918, 2359, 2886, 3463, 164, 3241, 293, 1754, 2256, 2187, 139, 4639, 1814, 3053, 1786, 2138, 923, 2374, 3302, 3874, 2794, 4979, 4701, 2673, 4393, 2180, 4216, 767, 1451, 719, 669, 1569, 3870, 3883, 1395, 3641, 1978, 1463};
    vector<int> ys = {4825, 1581, 2245, 2502, 4820, 1273, 68, 4133, 60, 4133, 1967, 1117, 1314, 1734, 71, 4122, 2224, 3477, 3084, 154, 300, 757, 26, 1031, 4195, 1445, 904, 259, 968, 3336, 2139, 157, 2963, 4636, 4009, 4658, 3135, 3502, 2575, 3744, 149, 2071, 4592, 3107, 334, 3454, 645, 2239, 2618, 2660};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2701.5976 4780.0126";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> xs = {4344, 834, 4926, 4491, 3755, 2070, 1090, 3030, 350, 2084, 1255, 3450, 693, 2685, 913, 2548, 1737, 4165, 4144, 4567, 2118, 1874, 415, 3579, 4028, 4095, 1258, 2974, 3343, 4606, 3480, 1325, 4438, 1269, 4127, 2263, 759, 1909, 4271, 3786, 2575, 731, 3859, 4810, 4494, 2525, 3255, 3683, 2275, 2966};
    vector<int> ys = {3830, 4796, 1168, 1359, 4941, 384, 1544, 2320, 2886, 131, 1825, 4970, 3995, 1174, 3822, 2436, 3838, 706, 1399, 605, 2626, 2416, 48, 3329, 3297, 1668, 2313, 1538, 3432, 2430, 2253, 986, 119, 1673, 1050, 2712, 3088, 4158, 643, 1613, 1006, 2283, 2808, 1936, 3552, 1918, 2398, 3908, 3044, 981};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2691.6875 4902.4560";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> xs = {566, 3147, 3691, 2834, 1667, 4005, 4213, 1457, 1183, 4487, 499, 4735, 1475, 3933, 4154, 1148, 2355, 204, 301, 3611, 4510, 763, 3734, 2185, 545, 1616, 1615, 4931, 1027, 4785, 3181, 3217, 1220, 3667, 2582, 4384, 3329, 1362, 4841, 785, 4009, 4803, 2108, 4877, 2546, 2338, 2825, 202, 1608, 4189};
    vector<int> ys = {161, 2839, 4706, 4126, 3099, 2114, 2551, 1514, 3842, 3158, 4285, 859, 3784, 2200, 4178, 891, 2176, 3310, 4746, 2221, 1715, 2692, 3413, 1600, 3761, 3507, 1764, 1860, 2538, 659, 4181, 4688, 2698, 915, 1117, 3483, 2881, 4245, 1583, 671, 4447, 2274, 4471, 3041, 4386, 4308, 4159, 4840, 4540, 477};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "1205.8720 4777.2226";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> xs = {2526, 1603, 632, 146, 1842, 2942, 4294, 1926, 1246, 4831, 4240, 4250, 3460, 1216, 3939, 2736, 3147, 1153, 2696, 2279, 3867, 1054, 4825, 3090, 1867, 2033, 2669, 705, 2069, 4790, 3615, 338, 4483, 3964, 3862, 800, 2918, 362, 2626, 2621, 2316, 3055, 4697, 3928, 1257, 3858, 1719, 1117, 2169, 4350};
    vector<int> ys = {3336, 4319, 3574, 202, 3417, 212, 1248, 4252, 3861, 1774, 3544, 3472, 4144, 1157, 220, 681, 3614, 2986, 4044, 4625, 749, 1040, 140, 1854, 4014, 1430, 4480, 605, 2732, 138, 217, 799, 3353, 1992, 3546, 112, 1828, 1944, 4640, 4000, 1389, 2807, 3741, 2528, 1850, 1474, 2939, 3789, 1744, 2972};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "2492.0048 4585.0478";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> xs = {500, 500, 500};
    vector<int> ys = {0, 2500, 5000};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0500.0000 2502.4414";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> xs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ys = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0009.0009 0005.0000";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> xs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ys = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int rnds = 9;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0009.0019 0005.0000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> xs = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 1000};
    vector<int> ys = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 1000};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0735.0097 0735.0097";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> xs = {50, 55, 60, 65, 70, 80, 90, 100, 101, 102, 104, 105, 110, 113, 117, 118, 905, 879, 393, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 450, 451, 452, 453, 455, 454, 456, 467, 478, 490, 498, 499};
    vector<int> ys = {100, 200, 300, 400, 500, 600, 700, 800, 900, 10, 20, 30, 40, 50, 60, 70, 80, 90, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 777, 888, 999, 101, 102, 103, 104, 105};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0334.8935 0934.6054";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> xs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 4, 41, 42, 43, 45, 44, 46, 47, 48, 49, 50};
    vector<int> ys = {50, 40, 30, 20, 10, 49, 39, 29, 19, 9, 48, 38, 28, 18, 8, 47, 37, 27, 17, 7, 46, 36, 26, 16, 6, 45, 35, 25, 15, 5, 44, 34, 24, 14, 4, 43, 33, 23, 13, 3, 42, 32, 22, 12, 2, 41, 31, 21, 1, 50};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0020.9853 0049.6875";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> xs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ys = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0009.0009 0005.0000";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> xs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ys = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int rnds = 9;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0009.0019 0005.0000";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> xs = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 1000};
    vector<int> ys = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 1000};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0735.0097 0735.0097";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> xs = {50, 55, 60, 65, 70, 80, 90, 100, 101, 102, 104, 105, 110, 113, 117, 118, 905, 879, 393, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 450, 451, 452, 453, 455, 454, 456, 467, 478, 490, 498, 499};
    vector<int> ys = {100, 200, 300, 400, 500, 600, 700, 800, 900, 10, 20, 30, 40, 50, 60, 70, 80, 90, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 777, 888, 999, 101, 102, 103, 104, 105};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0334.8935 0934.6054";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> xs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 4, 41, 42, 43, 45, 44, 46, 47, 48, 49, 50};
    vector<int> ys = {50, 40, 30, 20, 10, 49, 39, 29, 19, 9, 48, 38, 28, 18, 8, 47, 37, 27, 17, 7, 46, 36, 26, 16, 6, 45, 35, 25, 15, 5, 44, 34, 24, 14, 4, 43, 33, 23, 13, 3, 42, 32, 22, 12, 2, 41, 31, 21, 1, 50};
    int rnds = 10;
    PointLifeGame* pObj = new PointLifeGame();
    clock_t start = clock();
    string result = pObj->simulate(xs, ys, rnds);
    clock_t end = clock();
    delete pObj;
    string expected = "0020.9853 0049.6875";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10598704&rd=5867&pm=3447
********************************************************************************
/* 
*/ 
#include <string> 
#include <vector> 
#include <map> 
#include <set> 
#include <iostream> 
#include <list> 
#include <algorithm> 
#include <cmath> 
#include <cstdlib> 
#include <sstream> 
using namespace std; 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef VI::iterator VII; 
typedef VS::iterator VSI; 
typedef string::iterator SI; 
 
template<typename T> void sort(T t) { sort(t.begin(), t.end()); } 
template<typename T, typename C> void sort(T t, C c = less<T>()) { sort(t.begin(), t.end(), c); } 
 
#ifdef MSVC 
typedef __int64 LL; 
#else 
typedef long long LL; 
#endif 
 
class PointLifeGame 
{ 
    typedef pair<size_t, size_t> P; 
    typedef vector<P> VP; 
 
    struct PS 
    { 
        bool operator()(const P& a, const P& b) 
        { 
            if(a.second != b.second) 
            { 
                return a.second > b.second; 
            } 
 
            return a.first > b.first; 
        } 
         
    }; 
 
    P mid(const P& a, const P& b) 
    { 
        P m; 
        m.first = a.first + b.first; 
        m.second = a.second + b.second; 
        return m; 
    } 
     
    VP round(const VP& vp) 
    { 
        VP r; 
        for(size_t i = 0; i < vp.size(); ++i) 
        { 
            for(size_t j = i+1; j < vp.size(); ++j) 
            { 
                r.push_back(mid(vp[i], vp[j])); 
            } 
        } 
 
        sort(r.begin(), r.end(), PS()); 
         
        VP rt; 
        unique_copy(r.begin(), r.end(), back_inserter(rt)); 
 
        if(rt.size() > 10) 
        { 
            VP rtt(rt.begin(), rt.begin() + 10); 
            return rtt; 
        } 
 
        return rt; 
    } 
     
  public: 
    string 
    simulate(vector <int> xs, vector <int> ys, int rnds) 
    { 
        VP vp; 
 
        for(size_t i = 0; i < xs.size(); ++i) 
        { 
            vp.push_back(make_pair(xs[i], ys[i])); 
        } 
         
         
        for(int r = 0; r < rnds; ++r) 
        { 
            vp = round(vp); 
            //cout << "round done" << endl; 
        } 
 
        char buffer[50]; 
        { 
             
            double p = pow(2.0, rnds); 
            double x = vp[0].first / p; 
            double y = vp[0].second / p; 
            x = floor(x * 10000) / 10000; 
            y = floor(y * 10000) / 10000; 
            //cout << x << " " << y << endl; 
            sprintf(buffer, "%09.04f %09.04f", x, y); 
        } 
 
        string s = buffer; 
        return s; 
    } 
 
     
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/