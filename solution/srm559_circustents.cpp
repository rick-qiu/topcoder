/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12244
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

class CircusTents {
public:
    double findMaximumDistance(vector<int> x, vector<int> y, vector<int> r);
};

double CircusTents::findMaximumDistance(vector<int> x, vector<int> y, vector<int> r) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 3};
    vector<int> y = {0, 0};
    vector<int> r = {1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7390603609952078;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 3, -3, 3, -3};
    vector<int> y = {0, 3, 3, -3, -3};
    vector<int> r = {1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6055512754639887;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {3, 7, 7, 7, 3};
    vector<int> y = {4, 6, 1, -3, 0};
    vector<int> r = {2, 2, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4.3264459099620725;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {10, -1};
    vector<int> y = {0, 0};
    vector<int> r = {8, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 24.63092458664212;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 4, -4};
    vector<int> y = {0, 4, -4};
    vector<int> r = {1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4.745474963675133;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {100, 103, 102, 102};
    vector<int> y = {100, 100, 102, 98};
    vector<int> r = {1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7925165983687448;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {5000, -5000};
    vector<int> y = {5000, -5000};
    vector<int> r = {1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 14142.706455413081;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-5000, 5000};
    vector<int> y = {5000, -5000};
    vector<int> r = {5000, 5000};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 17889.57380883097;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0, 2, 3, 2, -1, -1, -3};
    vector<int> y = {0, 2, 0, -2, -2, 2, 1};
    vector<int> r = {1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0418915905971091;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-5000, 5000};
    vector<int> y = {-5000, 5000};
    vector<int> r = {1, 5000};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9143.706455413081;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {-5000, 5000};
    vector<int> y = {-5000, 5000};
    vector<int> r = {5000, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 22888.57380883097;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-10, -7, -4, -1, 2, 5, 8, 11, 14, 17};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> r = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3.739060360995208;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {0, 5000, 0, -5000, 0};
    vector<int> y = {0, 0, 5000, 0, -5000};
    vector<int> r = {1000, 200, 300, 400, 500};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4101.992346298006;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {0, -5000, 5000};
    vector<int> y = {0, -5000, 5000};
    vector<int> r = {20, 1, 3};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7069.096271191245;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {0, -5000, 5000};
    vector<int> y = {0, -5000, 5000};
    vector<int> r = {1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7070.067882576152;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {20, -962, 886, -3459, -2675, 1912, 3166, -1612, -1168, -3918, -37, -2650, -3727, 3478, 3961, 3007, -3596, -2255, -2107, 3789, -3577, -3398, -3498, 134, -3903, -2170, -234, -637, 3559, 3995, -1109, 2608, -2734, -247, 2120, 144, 3551, 1922, 3374, 1653, -441, -3680, -668, 2644, 3917, -967, -3755, 96, -691, 340};
    vector<int> y = {2612, -3038, -3190, -2502, -2893, -1826, 54, -3662, -1304, -401, -2695, -1119, 1253, -2180, -2524, -3893, 816, -2457, -1773, 415, -1551, -3780, 589, -1386, 696, -1185, -3929, -2181, -588, -1206, -1961, -3376, -2999, -1384, -3941, -1683, -1202, -500, -2496, -3471, -2283, -3268, -1394, -3689, 842, -1681, 1621, -1278, -1564, -1947};
    vector<int> r = {3592, 184, 358, 793, 19, 1206, 269, 708, 324, 893, 428, 350, 66, 23, 144, 335, 73, 253, 246, 345, 48, 452, 11, 48, 126, 114, 437, 79, 92, 23, 48, 150, 60, 309, 331, 11, 176, 51, 208, 24, 3, 4, 27, 65, 95, 81, 303, 50, 36, 199};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6842.753797599014;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-2703, 3384, 2536, -2730, -10, 288, -1623, -3287, 1551, 3981, -3524, -1087, -1621, -2520, -1562, -3394, -58, 124, -2961, -2807, 756, 1096, 68, 1056, 348, -171, 2916, 832, 551, -476, -3778, 1645, -246, -2978, 3070, 480, 2109, 722, 498, 3424, -240, -701, -737, -3928, 844, 1597, 1250, -3152, 3662, 456};
    vector<int> y = {461, -540, 3857, -2728, -3779, 2899, -3930, -2908, -3945, -3981, -2454, -2018, -2652, 3636, 3741, 3716, 3827, -1900, -3646, -3507, -2818, 1748, 1529, -2077, -2876, 3407, -3820, -2978, 193, -3162, -3818, 1845, -3219, -3941, -3421, -618, 1738, -868, 2030, -3260, 2541, -1548, -2506, -2996, 729, -2465, -2625, -3398, 2195, -887};
    vector<int> r = {2803, 2550, 1834, 175, 22, 448, 1161, 327, 1050, 775, 102, 151, 22, 79, 539, 505, 278, 742, 111, 34, 158, 387, 143, 147, 30, 142, 55, 16, 303, 2, 324, 112, 43, 62, 99, 145, 32, 56, 135, 57, 73, 8, 65, 255, 36, 18, 207, 106, 83, 54};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3549.578231200123;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {1796, -3489, -1629, -2294, -3273, 2637, -3961, -801, 42, -358, 3961, -1441, 250, -3786, 1771, 1213, 3872, 1514, 2987, -990, -962, -2376, 2056, 1554, 3528, 3077, -1506, -3473, -3286, -3455, -1937, 865, 3833, 1710, -3936, -3947, -1991, 612, 202, 3372, -126, -2889, -2806, -1460, -2607, -3652, -3617, -3314, -2995, 3897};
    vector<int> y = {229, -2881, 3836, -503, 1797, -3855, 119, -2491, 3896, -3272, -2725, -1906, -3330, 3365, -3592, -3820, -3197, -3957, 3949, -3555, -2893, 1092, -3248, 3986, -3000, -3349, 2030, 670, 3441, -125, 1948, -3738, -3771, -3289, 3592, 3004, 7, 3977, -3803, 3689, -2772, -11, -468, 1656, 925, 3625, -485, -494, 446, 3164};
    vector<int> r = {3429, 2220, 1480, 299, 1033, 634, 467, 274, 61, 295, 74, 19, 275, 94, 179, 4, 169, 222, 340, 317, 79, 7, 54, 157, 208, 30, 257, 97, 158, 71, 175, 341, 172, 60, 64, 260, 157, 456, 197, 118, 53, 212, 102, 4, 45, 143, 177, 92, 95, 140};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3176.6494122664517;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {1010, -3307, 2319, 2966, -3860, -2272, -3146, -200, -2964, -405, 211, 3782, -3812, -3504, -1807, -3, 2006, 3403, -1141, -3878, -3659, -3060, -2895, 3659, 3938, -2929, -2749, 3787, -50, 797, -2697, -2112, -521, -3988, -1026, -3369, -2460, -3417, 1441, 1587, -1501, -1061, -1511, -3931, 2589, -3594, 99, -3590, 3778, -2478};
    vector<int> y = {-2393, 3926, 3464, 1649, -1819, 855, 2287, 1659, -135, 2841, 1857, 527, -3193, -3412, 2662, 1232, 1660, 647, 1513, 666, -2959, 2979, 3674, 18, 1639, -534, -2128, 794, 1520, 1593, -1440, 2220, 1141, 1939, 1846, -802, -1182, 404, 1401, 1528, 1747, 651, 3707, 3953, 1731, -326, 3749, -503, 2096, 2087};
    vector<int> r = {3434, 260, 1528, 246, 832, 924, 433, 42, 196, 960, 60, 164, 31, 185, 392, 140, 265, 159, 208, 68, 106, 22, 188, 112, 278, 189, 306, 103, 66, 225, 201, 81, 239, 265, 17, 155, 104, 53, 93, 67, 133, 161, 285, 102, 109, 130, 13, 1, 101, 179};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6436.037308147514;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {2986, -2637, -3586, -2741, -2270, -546, -3974, -1805, -3799, -3719, -2910, -2429, -2341, -1932, -848, -3862, -1323, -563, -2767, -2556, -2844, -1688, -3344, -1172, -2774, -2257, -3665, -2500, -2492, -2236, -1519, -1973, -1479, -1874, -1581, 271, -1022, -3574, -1515, -2030, -2908, -1441, -1881, -1770, -1668, 427, -1605, -3972, -3180, -2217};
    vector<int> y = {392, -2370, 1246, -3896, 2844, -3921, -3387, -3858, 3269, -2073, -1213, 3915, 3501, -1379, -3002, 3569, -2581, 3850, 3028, -3360, 3401, 1708, 3949, 3555, 3359, -467, 3491, -742, 3300, -1647, 3846, -1910, -1498, -2833, -1919, -3883, -3158, 3150, 2851, -2793, -3728, -2007, -2549, -3119, -2741, -3882, 3639, 3188, 3348, 3602};
    vector<int> r = {4833, 613, 1757, 143, 171, 547, 1017, 679, 160, 297, 535, 336, 62, 349, 96, 66, 217, 27, 25, 103, 52, 12, 508, 255, 25, 45, 9, 69, 77, 52, 56, 29, 9, 99, 42, 58, 58, 43, 121, 10, 40, 67, 73, 59, 47, 44, 57, 17, 93, 12};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10810.287575161494;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {1907, -1474, -3358, 2335, -644, 3634, -1074, 3998, -2983, -1489, 1173, 2853, 3994, -1189, -205, -3714, -3423, -1874, -2719, -2399, -2676, 662, -3495, 493, 500, 3099, 1017, 227, 123, 1042, 2948, -3694, -2770, 803, -873, 470, 2440, -1745, -3576, -2410, 697, 3705, -3311, -2268, 3089, -605, 212, -2688, 2727, 265};
    vector<int> y = {-2830, 2847, -1990, 3743, -1786, 524, 1079, -1027, 2257, -2968, 80, 473, 1119, -1305, -2719, 298, -3727, 1294, 670, -1396, 82, 1763, 1353, -2434, 2613, -3131, 2233, -1241, -1831, 1540, 1675, -2689, 3983, -3026, -631, -1945, -1564, -272, 3419, 3273, -1465, -3740, -794, 1352, -2713, -375, -3191, 1224, -3743, 2202};
    vector<int> r = {988, 753, 755, 1663, 348, 73, 688, 1198, 702, 889, 1379, 79, 466, 366, 45, 526, 824, 61, 326, 337, 188, 230, 229, 289, 257, 119, 93, 163, 251, 41, 435, 2, 239, 27, 76, 62, 95, 316, 318, 126, 115, 477, 61, 218, 155, 58, 5, 96, 83, 91};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1067.7431282129792;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {3159, -3817, 3944, 3741, 1164, 138, 2485, 1588, 392, 2398, -587, 1227, 1180, 21, 3796, 2735, 3462, -1073, 2401, 3156, 3759, 3181, 2910, -299, 3031, 168, 1775, 809, 3041, -891, 2800, 3739, 2713, 3883, 1992, 817, -70, 1845, 2178, 1379, 843, 3090, 2596, -383, 3001, 3562, -2555, 218, 1995, 914};
    vector<int> y = {2436, 67, -3793, 1976, 2149, -1398, 2676, -239, -2920, 3740, 3999, -1466, -2518, -3800, 2584, 1490, -696, -3890, 1219, 1735, 3461, 1304, 3785, -3195, 314, -944, -1762, -2004, 3513, -3085, 3010, 427, -803, 1346, 988, -3808, -2656, 909, -1481, 3799, -3353, 2151, 1743, -3478, 3950, 2412, -3993, -2091, -1101, 3601};
    vector<int> r = {181, 3966, 2740, 157, 1292, 188, 122, 880, 519, 387, 709, 173, 62, 339, 174, 137, 194, 640, 66, 277, 251, 147, 72, 61, 317, 91, 80, 174, 174, 168, 92, 118, 111, 478, 13, 108, 7, 45, 6, 283, 104, 85, 82, 22, 76, 109, 26, 179, 21, 138};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 409.5320972557525;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {-3514, 1360, 3117, 3083, -2411, 247, 3818, 1014, -867, 152, 2831, 2419, 3545, 607, 1876, 3895, -1667, -164, 3762, 2095, 148, -552, 2512, 1546, -619, -3839, 108, -783, -3890, -1372, -398, -261, -704, 515, -113, 1054, 299, 1073, -472, -432, -329, -3829, -625, 108, 618, 612, 1077, 310, 479, 639};
    vector<int> y = {1507, 2212, -2278, 1213, -3643, 677, 2629, 835, -3185, -2977, 3948, 695, 610, -590, 456, 438, -2248, -498, 1127, 3706, 3855, -1196, 133, -155, -1774, -2593, 3222, -2309, -3353, -1739, -1517, -1472, -2731, -3583, -1636, 3882, -595, -120, -3827, 3898, -2135, -3039, -898, -850, -1660, 3963, 3490, -3937, -26, 3871};
    vector<int> r = {3539, 1072, 2362, 239, 1338, 180, 1234, 290, 256, 592, 97, 137, 40, 20, 358, 232, 23, 26, 109, 447, 195, 45, 89, 116, 158, 294, 191, 36, 39, 105, 22, 111, 187, 107, 102, 121, 89, 24, 243, 315, 170, 59, 178, 6, 38, 19, 98, 244, 233, 51};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6880.511876857279;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-2513, 3361, 3840, 2279, 648, 2646, 3209, 3670, 1368, 3456, 3763, 1294, 1134, 3706, 2230, 2526, 2989, 3624, 2485, 2311, 1819, 3706, 405, 1790, 2342, 2782, 682, 2030, 3905, 2109, 2271, 2337, 474, 3658, 1993, 3974, 3718, 3053, 2679, 2694, 1230, 3417, 3335, 2991, 2236, 1665, 3358, 1344, 838, 1349};
    vector<int> y = {282, -1344, 999, -3619, 3930, 2344, -2412, 3795, 3935, 3120, -739, -3288, 3360, -3246, 219, 157, 2750, -3780, -2477, 1405, 3321, -2458, -3940, -2201, 822, -956, -3612, -1578, -2368, 2763, -778, -1978, 3651, 3054, 2244, 2560, -2627, -1594, 3961, 3390, 2993, 2349, -37, -1936, -1189, 2488, -3146, -2967, -3265, -2523};
    vector<int> r = {4473, 157, 984, 861, 124, 303, 283, 654, 268, 3, 453, 175, 56, 142, 237, 16, 221, 262, 142, 95, 245, 16, 345, 379, 54, 442, 52, 219, 67, 116, 60, 160, 20, 12, 153, 186, 113, 168, 210, 259, 111, 198, 126, 3, 108, 26, 122, 146, 60, 143};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9898.533025630268;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-402, 2846, -1966, -3348, -2067, 1139, -3592, 3820, -1904, -3260, -3524, 2464, -56, -867, 3689, -2770, -1175, 806, 1339, 3549, -3616, 3276, -555, 1407, 3362, -2937, -2544, -3280, 746, 1544, -1008, 790, 2641, -2035, -2807, 3241, 3223, 2058, -2321, -1624, -747, 493, 443, 3834, -1338, 1615, -3250, 3816, 2406, -227};
    vector<int> y = {1, -2753, -1003, -62, 2875, 3139, 1176, 2015, 1486, 3666, -2616, -628, -3232, -2224, -372, -3688, 3816, -2066, 610, 3656, -1089, 773, -3849, -153, 3302, -1439, -2408, 2180, -1000, -1709, 2891, -3611, 1251, -3810, 1241, 3253, 1239, -75, -1973, -3475, 2308, -1755, -1957, 794, -3675, -3478, -1002, 3348, -1348, -1306};
    vector<int> r = {1195, 1317, 560, 776, 146, 1882, 241, 426, 805, 885, 538, 175, 202, 1016, 773, 601, 320, 192, 362, 121, 237, 223, 288, 365, 99, 427, 74, 573, 24, 119, 102, 52, 225, 41, 129, 28, 175, 104, 78, 87, 178, 18, 96, 160, 33, 50, 16, 257, 5, 24};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 648.9330815047399;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-3337, -3576, 622, 2274, 709, 217, -1855, -508, 1626, 3249, -735, -3960, -320, -286, 770, -2347, -1415, 3189, -3823, 3776, 3897, -1924, 3891, 726, -3175, -2895, -2999, 145, 1641, 2890, 3773, 2274, 753, 3111, 1331, 235, -711, 1907, -3934, 1803, 2667, -3180, 2325, 3851, 1474, 2802, -1132, -1497, 2387, -644};
    vector<int> y = {-2666, 3063, 3837, -131, 1015, -2711, -2709, -1507, -2418, 2027, -3891, -1240, 2330, 1176, -246, -1311, 2, 3966, -3194, -2754, -1403, 324, 442, -3755, -1465, -577, -3900, 1583, -1312, -3635, -3928, 3505, 223, -1690, 1639, 494, 2179, 2193, -171, -3795, -2086, -2202, 3136, 1399, -3888, -2882, 339, -479, -3818, 144};
    vector<int> r = {6, 2782, 1484, 1217, 166, 253, 331, 1092, 978, 422, 788, 474, 174, 310, 171, 358, 66, 714, 275, 688, 365, 221, 346, 188, 194, 133, 450, 198, 104, 121, 284, 198, 225, 77, 102, 155, 152, 219, 367, 183, 39, 367, 160, 146, 66, 141, 205, 2, 53, 53};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 132.30333617746305;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {31, -3193, -3052, 3928, -2806, 928, 2328, 86, -818, -3510, -1985, 3028, 2495, -3699, 258, -3701, 2531, -1267, -1791, -2867, -3830, -1472, -2473, -372, -3922, -2055, 3720, -2331, -1564, -1099, -2346, 1267, 3974, 3787, 259, -927, 1529, 3351, -3102, 1515, 564, -2133, 3322, 2907, 955, -2521, -3844, -2058, -269, 3583};
    vector<int> y = {-580, 1957, -472, 3124, -3454, -3669, -3163, 2638, 1722, 1053, 1415, -1021, -216, -1418, 3019, 3973, -829, 3390, -2591, -2618, -2888, 2002, -1248, -3461, -900, 81, -1115, 500, -3230, -3772, -224, -2387, -3799, -2434, -3730, -2902, 1276, -3924, 3068, -2435, 3695, 2340, -3486, 70, -2589, -1976, 524, -2041, -2654, -45};
    vector<int> r = {2012, 561, 398, 2925, 229, 237, 909, 109, 388, 58, 440, 330, 96, 447, 81, 529, 12, 818, 321, 169, 518, 43, 271, 575, 65, 103, 132, 392, 55, 19, 229, 105, 535, 101, 58, 120, 65, 55, 341, 89, 251, 331, 108, 86, 110, 172, 448, 103, 29, 179};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 945.1841661979971;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {-1534, -1945, 1031, -75, -1018, 3336, -3754, 828, 2428, -3620, 3571, -497, 3359, 457, -1258, 3751, 12, 1972, 1946, -2949, -3431, -153, -583, 943, 50, 565, 1948, -1517, 3049, 2958, -729, -747, -674, 2965, 12, 3917, 756, 2089, -402, -330, -219, -925, 609, -1430, 3563, -170, 2596, -1434, -3984, -1600};
    vector<int> y = {-834, 1805, 2063, -51, -2532, -2592, -2413, 3488, 1792, 3926, 3742, -1475, 1575, -269, -3951, 1764, -724, 1011, 3113, 3848, 147, -1140, -2960, 288, -1839, 2028, 2965, -1930, 3963, 2445, -3314, -3890, 14, 1056, -1497, 1200, 1233, 1937, -3782, -1468, -3156, -3527, -596, -1704, 911, -2706, 3253, 3933, 1166, -3931};
    vector<int> r = {522, 2047, 136, 478, 362, 3159, 2027, 1082, 63, 310, 394, 112, 143, 26, 69, 212, 52, 645, 50, 79, 147, 283, 21, 480, 184, 53, 6, 8, 37, 681, 152, 225, 89, 126, 108, 241, 405, 218, 32, 54, 169, 39, 211, 86, 185, 143, 54, 116, 1, 27};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 668.2595334263605;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-3354, 2071, 830, 2160, -3818, -448, 3366, -187, -646, -874, 3420, -1014, 317, 337, 2749, -914, 3870, -1871, 3810, 3830, -1128, 1208, -718, -2691, -1883, -1513, -2281, -924, -1324, -3545, -1107, -130, -3529, 3090, -2719, 601, -2626, -1116, -2343, -1380, 1042, -248, 2184, -2520, 1855, 1448, -1745, -3926, -1870, -753};
    vector<int> y = {-3412, 2749, -1202, -2436, 2076, -2645, -2555, -2266, -1826, -648, -1358, -3196, -3359, -1118, -1417, -2190, -1259, -343, -2184, -3873, 309, -1025, -2378, -740, -1479, -1955, -1296, -1185, -1616, -1350, -1150, -1727, -481, -2666, -196, -2489, -1461, -1823, -153, 1031, -1481, -225, -3983, -982, -1121, -772, 3588, -1120, 3947, -1241};
    vector<int> r = {1798, 3492, 189, 910, 2353, 89, 132, 46, 201, 283, 1, 357, 819, 163, 232, 212, 328, 397, 335, 1253, 457, 167, 1, 189, 146, 261, 52, 37, 66, 179, 123, 214, 12, 32, 29, 19, 97, 27, 45, 231, 60, 252, 128, 93, 149, 14, 110, 197, 197, 97};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4081.5897869350106;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-1500, -2601, 3381, -2649, 360, 3026, 276, 2077, 3930, 3925, 3864, -2236, -2971, 1185, 3030, 793, 2591, 1637, 3900, -3869, -2674, -3796, 2173, 887, 3089, -2157, -3666, -3723, -2153, 1311, -259, 2219, -3921, 2954, -2050, 1540, 2263, 3582, 2065, -2360, -3624, -3924, 2060, -793, 2406, -3624, 1156, 1824, 3650, 2339};
    vector<int> y = {-2747, 2131, -1711, 3783, 718, 2100, 3118, -3903, 3266, 1448, -3963, 552, -454, -2780, -3106, -1867, 1193, -2244, 797, 3005, -1237, -2310, -726, -3923, -2565, -148, -1302, -257, 371, 3288, 3711, -613, -894, 277, 934, -983, 3913, -2697, -3264, 367, 528, -3572, -172, 2520, 2208, -652, 2822, 2531, -305, -2587};
    vector<int> r = {1841, 751, 660, 743, 1529, 253, 691, 563, 1060, 171, 350, 37, 371, 217, 323, 333, 197, 484, 156, 586, 46, 132, 37, 222, 122, 198, 357, 129, 124, 147, 93, 40, 25, 598, 250, 242, 446, 280, 30, 30, 396, 669, 125, 437, 122, 188, 184, 355, 179, 79};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2123.505638499206;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-1564, -2306, 2670, -3621, -1386, 2670, 1059, 3747, 853, 1594, 1212, -241, 962, 154, 2393, 3964, -1561, -1298, -1232, -729, 1704, 3148, 1368, 2998, -823, 2470, -1253, 1418, 1930, -2896, 276, 951, -836, 1602, -1786, 3902, 1109, -2083, -340, -3343, 711, 360, -3169, 3973, 805, 3505, -182, -1877, 1513, 3318};
    vector<int> y = {-2594, 3054, -3725, -2173, -3578, 1745, 893, 3080, -17, 106, 1500, -414, -678, -1013, 3927, 2441, -1694, -2400, -862, -3066, 451, 2974, 2857, 3984, -3206, 3463, -1134, 2475, 3615, -745, 39, -888, -1206, 2941, -451, 142, 2142, -2428, -2403, -585, -1128, 404, -3804, 848, 1415, 2833, -2384, -2335, 3871, -59};
    vector<int> r = {25, 3424, 3132, 1347, 637, 1251, 354, 142, 171, 307, 48, 90, 151, 472, 198, 150, 345, 237, 149, 146, 19, 4, 6, 312, 8, 78, 58, 21, 37, 178, 106, 58, 345, 16, 101, 147, 87, 168, 61, 40, 62, 91, 291, 25, 4, 64, 1, 15, 54, 175};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 132.44895453854645;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {1243, -1180, -2009, -2832, -3386, 3266, -2071, -3021, -2743, -197, -338, -3882, 1972, 728, -3981, 212, -2524, -524, 3980, 1414, 3869, -1840, -844, -3708, -2064, 566, -3723, 1112, -1929, -3161, 403, 3890, -3549, -611, -2758, -1442, -3957, -3669, -3887, 2440, 61, -1512, 1565, -3275, 1678, 919, -1982, 65, -2984, -3337};
    vector<int> y = {2352, -1541, -455, -3472, -1237, -3448, -2772, 73, -786, -1762, -3125, 3887, -2461, -2394, 305, -3770, -177, -1710, -2226, -2164, -1730, -837, -2798, 2197, -2074, -3293, 1412, -3317, -3444, 925, -1964, -976, -2627, -3742, 451, -2492, 1992, -3144, -3186, -1854, -1692, -3769, -3920, 2308, -2893, -3871, -1139, -2203, 2482, -2075};
    vector<int> r = {4038, 469, 137, 506, 404, 1186, 280, 112, 70, 42, 365, 1205, 3, 343, 643, 198, 305, 200, 176, 130, 189, 9, 85, 18, 372, 207, 94, 309, 48, 118, 127, 135, 488, 126, 296, 77, 144, 18, 77, 306, 43, 8, 429, 230, 203, 83, 32, 261, 68, 40};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7233.084031046158;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-1793, 3426, 2489, 758, 733, 1541, 2364, -3035, 3163, 2813, 723, -350, -2762, -3767, -2579, 3455, -1002, 88, -3198, 1157, -1363, 1759, 365, -2657, -1627, -766, -3836, 1593, -3999, 1275, -398, -1535, 479, 2350, 363, 962, 98, -328, 3112, 1697, 82, -1881, -329, 2722, 1295, 1558, -1210, -2484, 1782, -1701};
    vector<int> y = {293, 1802, 2140, -731, 2559, 828, 3560, -2560, -680, -3124, 3914, 2932, 2763, 3038, 2615, 3870, -3367, -2423, -3880, -3421, 3879, -1675, -2059, -3711, -2155, 2888, -2031, 2618, -3103, 1572, -2686, -2645, -2601, 1294, -1525, -1266, 2412, 3231, 841, -1134, 2887, -2468, -3376, 2792, -2343, -2463, -2540, -2643, -2067, -3084};
    vector<int> r = {2408, 463, 395, 101, 484, 45, 357, 437, 1349, 1002, 864, 184, 173, 781, 28, 709, 425, 201, 271, 655, 660, 25, 73, 19, 22, 93, 498, 299, 194, 421, 145, 124, 66, 15, 271, 365, 5, 60, 143, 170, 34, 223, 10, 75, 192, 50, 1, 61, 270, 138};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1928.0224518910416;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-3247, 3844, -2183, 2626, 1221, -3585, -2648, -1207, 1919, -731, 797, -60, -66, -2803, -873, -3420, -265, 2809, 342, 3810, -715, -417, 268, -1006, -1228, -1296, 1376, 1306, -1694, 3777, -863, 353, -1940, 678, 496, -3907, -2140, -3002, 1072, 665, -1750, -970, -3840, -3921, 2249, 1680, 269, -2535, -1327, 860};
    vector<int> y = {3945, 2061, -780, -1726, -3458, -3884, 1036, 1500, -371, 537, 1032, -1493, 399, -3169, 1385, -2014, -166, -1044, -831, -2912, 2619, -840, 3347, -3751, 423, -3103, -1071, -507, 1243, -1225, 882, 926, -3911, -227, 1525, -2484, -2786, 1410, 155, 704, -2709, 2166, -673, 744, -817, 3948, -1401, -2931, -3662, 1337};
    vector<int> r = {2289, 2601, 1393, 22, 2166, 939, 252, 174, 12, 57, 196, 100, 272, 77, 151, 155, 291, 135, 500, 312, 192, 88, 839, 4, 111, 224, 170, 73, 320, 630, 173, 180, 288, 135, 18, 149, 5, 44, 81, 152, 178, 215, 156, 65, 160, 183, 20, 177, 222, 19};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5521.296747357771;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {-2770, 1929, 2222, -12, 798, -3332, -2606, -1253, -2304, -3869, -1098, -2778, -1150, 1656, 3300, -1276, 1252, -1200, 1106, -3338, -3707, -2619, -3902, -3920, -2542, -446, -3636, 499, -1301, -3819, 817, -1364, 3571, -1994, -3508, -31, -631, 436, 3788, 3169, -3859, -2563, -1769, -2155, -3572, -2360, -3210, -1797, 2888, -3800};
    vector<int> y = {-2238, 2934, -2865, -2892, -2133, 3858, 1889, -863, 419, 1465, -1296, 2892, -189, -1447, -1208, 139, -3876, -1811, -2625, -1005, 823, -3979, -3892, -3382, -448, -1664, 2588, -3837, -3751, -574, -1417, -2775, -3081, -842, 507, -991, -681, -1839, -1712, -1950, 3020, 3843, -3383, -3941, -991, 3539, -596, -250, -1401, -148};
    vector<int> r = {1210, 4005, 1093, 900, 155, 349, 533, 163, 628, 236, 266, 256, 277, 247, 107, 18, 234, 161, 10, 67, 149, 229, 34, 91, 46, 398, 310, 75, 491, 251, 185, 170, 243, 116, 101, 215, 230, 196, 81, 87, 131, 166, 79, 15, 20, 29, 91, 174, 285, 108};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1177.4866867941412;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {3641, -2491, 3484, -1916, -768, -1989, -895, -2794, -2066, -3171, 179, -3867, 1059, -1173, 1338, -479, 92, -1016, 171, 1813, -3900, -1112, -1632, 1206, -3692, -1759, -3646, -3729, 1905, -2289, -3863, -2151, -436, -2713, -1190, -165, -513, -3405, -3644, -1986, 675, -1326, -446, -2267, 2555, -3364, 1441, -320, -564, -716};
    vector<int> y = {-3333, 1386, 3007, -1256, -3814, -3164, -2192, 3975, 2932, -3146, -769, -845, -2864, 222, -1664, -2862, -1809, 2749, -3227, -2315, 3619, -384, 3022, -2761, -2108, -2928, 164, 2527, -1177, -3632, -2705, 3549, -146, 3311, -2868, 406, -1029, 3065, -151, -31, -3934, 3492, -3528, 3881, -1873, -1551, -3590, -2983, -2029, -1680};
    vector<int> r = {1623, 1407, 4188, 1149, 256, 82, 171, 335, 136, 609, 439, 226, 4, 44, 629, 52, 547, 206, 470, 72, 687, 9, 103, 30, 336, 10, 40, 53, 57, 40, 160, 171, 300, 68, 473, 195, 51, 6, 175, 68, 274, 338, 27, 16, 6, 272, 188, 70, 14, 96};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3708.7885077201813;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {-1838, 2084, 3240, 2152, -2090, 1781, -2148, 3955, 3466, -3723, 2041, -269, 675, -2990, 486, 3929, 2529, 1357, 2021, -780, 2213, -3196, 3919, 776, 3667, -2551, 1916, 1716, 153, 1965, -637, 2123, -29, 1230, 1751, 158, 3945, 2673, -147, 3481, -1376, 1204, 489, 3364, 1271, 1702, -1423, -1122, -2806, 349};
    vector<int> y = {-614, 3931, -1296, -3905, 3883, 2071, 3113, -3071, 1617, 3467, 277, 3586, -3997, 3302, 3368, -3888, -2330, -2594, -2003, 3548, -210, 2974, 3723, 2865, 3288, 3455, 1124, -2315, 2643, -1072, 3169, 745, 2910, 1623, -2467, -3812, 3936, -2363, 3903, -3, 3618, 2694, -3808, 3415, -2734, -2155, 3166, 3302, 3506, 2441};
    vector<int> r = {3642, 1235, 1157, 1292, 510, 305, 23, 341, 1427, 561, 230, 298, 123, 31, 146, 26, 40, 66, 211, 61, 215, 32, 16, 149, 226, 7, 126, 66, 62, 30, 70, 169, 128, 58, 68, 25, 76, 32, 29, 116, 176, 45, 133, 8, 10, 27, 15, 5, 14, 67};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5844.05162412645;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {726, -737, -3378, 2938, 3170, 3886, 3761, 3941, 3253, -1740, 1317, -1541, -2573, 707, 3320, 3813, 3643, -2463, -1838, -3634, 3293, 3394, -3911, 3432, -1959, -1552, -750, 249, -2067, 3405, -1041, -1243, -1753, 3160, 867, 3679, 3368, 2950, 2707, -225, -1548, -150, 3616, 1258, 3367, -1746, 3505, -1552, -626, 3646};
    vector<int> y = {-3262, 3521, -2680, -230, -2844, 1914, 3266, -2370, 1419, -569, -612, -1344, -111, -220, 2531, -3848, 2856, -912, -1355, -279, -3047, 3283, 645, -2693, -1598, -2020, -1196, -807, -496, 2689, -892, -551, -1924, -2373, -82, 1374, 3174, 1600, 1256, -683, -312, -1003, 3912, 92, 2174, -3864, 2896, -2111, -467, 3619};
    vector<int> r = {2253, 3810, 1648, 1411, 27, 373, 274, 443, 133, 72, 239, 162, 77, 183, 141, 634, 12, 299, 76, 581, 133, 93, 47, 107, 53, 4, 248, 86, 33, 21, 65, 211, 140, 299, 4, 159, 12, 112, 86, 21, 75, 59, 4, 149, 51, 251, 94, 73, 134, 62};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2889.072830594092;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {-2924, 3046, 1437, 2846, -3979, 1076, -358, -1411, 3688, 3687, -1983, -1060, 3802, -549, -2114, -1159, 2354, -408, -3946, 2601, 3681, 2003, 2246, 3805, -3147, 2679, -2602, 1304, -3683, 3722, 1681, 1730, 2107, 3105, 1637, -1474, 1743, 2536, -2631, 3097, -1010, 3916, -521, 3346, -2682, 2790, 3255, 3384, -74, -2300};
    vector<int> y = {-3945, -605, 3977, -2872, 2704, 477, 2874, 3907, 2580, 1047, 2882, 1782, -2860, 112, 1309, 2442, -1157, 3735, 3402, -3433, -3855, -1072, -2161, -2459, 3840, -2149, 2236, -1467, 1140, -1119, -2022, -986, -1667, 3061, -3946, 725, -3660, 1926, 942, -3322, 196, 2438, 969, 3524, 1760, -1143, -2775, 2878, 1437, 781};
    vector<int> r = {4392, 501, 1683, 51, 630, 1326, 120, 406, 45, 915, 729, 216, 27, 206, 61, 174, 331, 137, 63, 30, 499, 10, 155, 208, 453, 136, 97, 23, 484, 127, 396, 226, 126, 144, 119, 120, 102, 342, 14, 185, 75, 60, 11, 233, 327, 76, 82, 175, 51, 12};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9872.27229151253;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-2803, 2998, 1880, -1548, 3643, 1198, -391, 3893, 3740, 3139, 1176, 3690, 3807, 1307, 1628, 1369, 1489, 3765, -2929, 2735, 1277, -915, 2310, 2531, 1123, -2411, 3186, -382, 893, -3851, 965, 3582, 3774, 60, 1594, 3341, -781, 2971, 211, 791, 1838, 1260, 2211, 2996, -2085, 1179, -10, 3481, 2910, 1940};
    vector<int> y = {418, -245, 3475, -3942, -3626, -3702, 3623, -2277, -2817, -3031, -1565, 1988, 3736, -1256, 1201, -1073, 766, 3138, -3950, -2646, 813, -3295, 1627, -2247, 620, -3636, 2131, 3742, -1278, -3793, -1054, 3721, 1406, 3110, -1829, -3191, -3993, -2607, 3433, -1635, -1622, 442, -1889, -3189, -3895, 203, 3575, -2440, 1618, 1263};
    vector<int> r = {3801, 1685, 1611, 375, 383, 1802, 44, 161, 181, 104, 138, 485, 147, 64, 124, 96, 73, 276, 197, 6, 97, 114, 184, 148, 125, 122, 33, 26, 68, 457, 77, 40, 103, 63, 7, 135, 45, 54, 41, 148, 86, 13, 56, 63, 28, 129, 65, 247, 161, 145};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6592.375377622003;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-1892, 3655, 3384, -479, 3795, 981, -3437, 2579, -1864, 3826, 683, 3303, -3879, -1603, 3724, -2753, 1474, 1871, -2593, 2624, 1153, 2366, 1342, 2306, -3067, 3328, 1427, 609, 516, -3749, -3415, 2441, 2441, 1224, -3347, -2250, 2559, 1394, -3315, -3299, -1234, -3426, 2345, 3420, 2743, -3843, 2550, 1408, 2910, 843};
    vector<int> y = {1458, -2346, 1974, -2908, 957, -3998, -3088, 3156, -2867, 3739, -1785, 2350, -2111, -3995, 2694, -3195, -899, 1906, -3622, 109, -3117, 102, -2784, 720, -3325, 2119, -1723, -2867, -2424, -3750, -2432, 1785, 1679, -1437, -2261, -2502, 1726, -1478, -3521, -2167, -2490, -3776, -203, 2225, 2004, -2493, 1371, -608, 1633, -1268};
    vector<int> r = {3747, 2201, 21, 826, 1050, 749, 268, 895, 288, 380, 334, 10, 206, 50, 210, 273, 237, 24, 171, 193, 43, 16, 96, 266, 62, 5, 93, 198, 254, 59, 26, 41, 45, 117, 32, 37, 15, 46, 50, 45, 10, 150, 3, 61, 164, 163, 225, 43, 45, 7};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6922.126832134733;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {2280, -1789};
    vector<int> y = {-2926, -1323};
    vector<int> r = {13, 532};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3861.810227447864;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-1980, -2290, 1254};
    vector<int> y = {1256, 3828, -2420};
    vector<int> r = {386, 929, 1703};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2296.752423771451;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-1116, 3726, -475, 3381};
    vector<int> y = {-1968, 3135, 1046, -2526};
    vector<int> r = {1217, 3103, 383, 1204};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4225.18622732717;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {209, 1027, -1495, 3808, -3699};
    vector<int> y = {1426, 2411, -3330, -3015, 1089};
    vector<int> r = {202, 963, 878, 2401, 1429};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 650.6392566040017;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {1485, -2103, 1514, -179, 3775, -2663};
    vector<int> y = {3588, -3082, -3762, -1224, -3719, -1236};
    vector<int> r = {4450, 1361, 1097, 609, 425, 203};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12912.733221567063;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {872, -2664, -3483, 3780, 3079, -3879, -1557};
    vector<int> y = {-70, -3532, 3069, 2470, 2503, -994, 3753};
    vector<int> r = {3155, 1313, 1723, 582, 19, 856, 159};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4581.175244661056;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {455, -2958, 1920, 403, 2992, -2243, -3468, -1799};
    vector<int> y = {2805, -1015, -2866, 220, -1170, 3723, 2708, 2640};
    vector<int> r = {1560, 1813, 1406, 653, 45, 88, 641, 244};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3795.064130216957;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-917, 1491, -3125, -3879, 3124, -249, 2487, 3731, 3601};
    vector<int> y = {-3612, 1226, 3645, 411, 3388, 2605, 756, 451, -2041};
    vector<int> r = {4635, 358, 2607, 198, 730, 298, 54, 1224, 145};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10112.393617091158;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {1451, -1820, 2089, -1978, -3738, 3948, 3633, -480, -628, -3721};
    vector<int> y = {-3183, 3630, 3027, 857, -1202, 467, -328, 1928, 370, 2454};
    vector<int> r = {3047, 1384, 2046, 737, 1913, 405, 21, 216, 615, 386};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6688.444596425208;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-870, 1844, -3775, 555, 1793, -2, -3887, -3953, 2839, -217, 2221};
    vector<int> y = {-600, 3173, 2145, 3224, -3334, 3658, -1546, -72, 3208, -3666, -1849};
    vector<int> r = {2398, 806, 754, 226, 762, 152, 63, 413, 17, 635, 648};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1956.3008909108605;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {2089, -1314, -2601, 1763, -3490, 2302, 456, 2751, -1620, 2080, 3659, 3238};
    vector<int> y = {921, 3767, -3762, -1339, 2471, -761, 3595, -3895, 1873, 2658, -3236, -1961};
    vector<int> r = {1180, 1375, 4653, 91, 1013, 332, 298, 577, 274, 170, 494, 487};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1818.6061465970126;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {2405, -3070, -3967, -3047, -3838, -3026, -3117, -1062, -3797, -3876, -1849, -3367, -2936};
    vector<int> y = {-123, -3999, 1507, 1602, -94, 3932, 982, 3856, -1864, 2749, -3478, -2123, -1529};
    vector<int> r = {4875, 1031, 458, 443, 1125, 1118, 119, 215, 296, 166, 9, 165, 149};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11619.726454679017;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {2547, -2640, -2376, -3985, -3789, -3921, -2537, 260, -2681, -1574, -3157, -727, -2697, -2133};
    vector<int> y = {438, -3364, 742, 2076, -894, -2479, 3945, -3478, 2458, 3166, -3616, -3929, -953, -809};
    vector<int> r = {3990, 379, 693, 851, 585, 936, 423, 397, 153, 358, 122, 495, 123, 338};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9200.219885041928;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {3739, -3025, -1457, -2644, -3113, -37, 687, 1828, -9, 3015, -145, -88, 863, 1625, 1960};
    vector<int> y = {-1319, -3393, 3072, 64, 2308, 3713, 3563, 3189, 70, 2711, -2531, -3537, 1700, 1617, 2307};
    vector<int> r = {3428, 1499, 517, 1211, 566, 589, 112, 445, 63, 128, 577, 390, 226, 183, 49};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7575.400163334328;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-3414, -2395, 3322, 630, 3421, -1858, -1431, -2941, 3283, 2773, -474, -1478, 2105, 406, -674, -1461};
    vector<int> y = {-3834, 3591, 2457, 948, -2935, 165, 2434, 2400, 388, -739, 3203, 1856, 1001, -2409, 153, -1344};
    vector<int> r = {2148, 549, 1229, 704, 165, 777, 65, 547, 535, 284, 1010, 416, 127, 1385, 322, 396};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6137.111914737083;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-1521, -3522, 588, 1969, 3961, -3990, 2733, -2762, 1383, -860, -828, 732, -1989, 3944, -849, -201, -170};
    vector<int> y = {-3200, 1871, 3740, 1707, 573, -3672, -1500, -3736, -3427, -1396, -2304, 60, -1920, 3990, 642, -2532, -293};
    vector<int> r = {562, 2361, 647, 1620, 463, 445, 1301, 192, 881, 5, 86, 218, 732, 615, 260, 165, 322};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1367.5259084713127;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {1438, -3091, -2247, 2541, -954, -3801, 3705, -403, 1250, -2021, -3644, -1950, 3525, -1405, 3575, -1283, -3959, -3070};
    vector<int> y = {-896, 1570, -3988, 2631, -2872, -2841, -2811, 3230, -3980, -1661, -1650, 3232, 1047, 633, -2081, 1363, -551, -3272};
    vector<int> r = {1910, 1261, 355, 1506, 894, 565, 490, 1294, 606, 696, 470, 21, 15, 177, 104, 477, 439, 24};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1524.2898617792284;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-2156, 1740, 3704, 3444, 3764, 3470, 2947, 2763, 3803, -391, 2834, -1048, -3539, 2974, 3056, 3721, 2930, 3451, 916};
    vector<int> y = {-1341, 3531, -2427, 3138, 161, -3592, 1891, 753, 3664, 3909, -3836, 3406, 3577, -1419, 730, -3974, -3432, -1391, 2759};
    vector<int> r = {4810, 1011, 729, 316, 606, 136, 752, 27, 186, 716, 223, 20, 196, 192, 141, 234, 188, 195, 12};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9519.127335549878;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-855, 3385, 1841, 450, 1107, -3925, -412, -1725, -3466, -3529, -3630, -1295, 1108, 3848, 2722, 2142, -2729, 3869, 1508, 78};
    vector<int> y = {992, 687, 2923, 32, -2902, -3182, 3959, -2653, 3326, 854, -675, 2721, -199, 2075, 352, 1158, -1452, 2998, 284, 2640};
    vector<int> r = {1258, 456, 838, 44, 2556, 1847, 854, 26, 161, 725, 570, 122, 100, 80, 40, 471, 89, 679, 29, 344};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1395.0910116030113;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-2891, 3949, -3893, -899, 1397, 3420, -68, 884, -2611, -1734, -180, 1163, -3391, 695, -2903, 3797, 150, 1886, 695, -788, -42};
    vector<int> y = {-529, 2056, -3810, -3327, -3051, -3054, 3448, -1004, 3409, 3664, 1330, -3959, 3764, -3258, 2439, -1471, 2116, -1497, -2131, 833, -1473};
    vector<int> r = {1873, 3393, 1442, 902, 45, 806, 278, 363, 84, 704, 458, 654, 632, 51, 279, 4, 355, 470, 139, 103, 465};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2626.844097632553;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {759, -3778, -3802, 3790, -3676, -1982, -2671, 3067, -2906, 3903, -2205, -3942, -2903, -3562, -3804, -3381, -3363, 3632, -2500, -3881, -3111, -2315};
    vector<int> y = {10, -710, 3963, -3968, 602, -3987, -3232, -3615, -2658, -3081, 3689, 1666, 2471, 1329, -2895, 479, -2949, 3167, -3422, 20, 2202, 2773};
    vector<int> r = {4016, 438, 1505, 425, 214, 689, 70, 238, 496, 28, 67, 171, 193, 169, 361, 42, 17, 151, 72, 118, 88, 95};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3226.698368362572;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-1977, 1351, 277, 2649, 114, -3437, -2328, -1259, -902, -3832, 3690, -2361, -1614, -3931, 411, 604, 3837, -3643, -3678, -2774, -1628, 1126, 32};
    vector<int> y = {3156, -3802, 3854, 3024, 3147, 114, 1663, 1347, 1971, 3727, 803, 137, 1989, 2321, 2302, 1222, 1600, -1328, -2651, 2206, 440, 2005, 974};
    vector<int> r = {1004, 4707, 613, 1630, 37, 894, 471, 405, 102, 493, 347, 116, 150, 798, 253, 282, 18, 345, 360, 24, 372, 65, 12};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1538.0957595276793;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-2801, 3634, 464, 3838, -89, 2501, -3952, -3938, 3798, 1269, 1923, 735, -3510, 629, -2874, -2350, 1234, 3139, 407, -2724, -212, 1154, -1512, -1500};
    vector<int> y = {-3964, -3717, 3845, -102, -1478, -1537, 20, 1125, -963, -2756, -1306, -1164, -918, -2689, -283, -797, -1254, -685, -3872, -1523, -2747, -1872, -1665, -985};
    vector<int> r = {2108, 1980, 4729, 228, 257, 351, 417, 386, 188, 403, 167, 33, 162, 147, 250, 314, 144, 292, 630, 125, 523, 443, 405, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4948.788668933403;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {286, -3024, -1312, 3998, 3965, -3885, 2971, 756, -2432, -1400, -857, 3541, 1762, -2882, -2498, -3069, -3669, -3416, -3586, 1126, 1770, -2900, -3963, -1619, -2594};
    vector<int> y = {-3802, -646, 3857, 3172, 81, -2986, 3504, -132, -554, -1283, -483, 3833, -881, -3640, -1341, -1620, -748, -3964, 211, -949, -686, -2947, -1265, -1480, -793};
    vector<int> r = {2827, 101, 4002, 380, 2204, 893, 63, 2, 39, 32, 78, 297, 59, 282, 239, 324, 282, 40, 178, 144, 18, 31, 230, 14, 98};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5309.378380411501;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-2585, 2302, 2744, -1239, 3854, 1267, -762, 3956, -3635, 139, 846, -3439, -753, -2758, 1709, 2551, 1139, 860, 397, -696, 871, -2459, 1240, 3981, -2894, 948};
    vector<int> y = {2369, 2841, -1466, -2926, 1406, -3499, -1621, -3945, -1763, -2320, 3400, -3865, -3440, -3492, 696, 1137, 2947, 2192, -739, -815, 1068, -3035, -76, 3002, -3521, -2961};
    vector<int> r = {3226, 1095, 1583, 636, 655, 21, 350, 388, 941, 628, 269, 163, 7, 26, 404, 192, 70, 183, 447, 110, 248, 320, 324, 251, 35, 228};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6421.39830501464;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-3436, 2475, 2941, -1404, -944, -1017, -2235, 1067, -1764, -2236, -115, 478, 3820, -3405, 417, -967, -3334, -3775, -2636, 3722, -1705, -2901, 3492, -3722, -2523, -1466, 1562};
    vector<int> y = {908, -2495, 2493, -786, 2291, -3782, 2499, -1453, -2830, 3666, 3390, -2991, -955, -3667, 192, 3117, 2886, -2449, 3417, -3782, 1299, -3832, -1531, -819, 3067, 2103, -2411};
    vector<int> r = {1045, 846, 2857, 1374, 253, 870, 345, 483, 198, 124, 300, 95, 25, 248, 335, 255, 135, 920, 58, 62, 497, 230, 323, 634, 113, 122, 3};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1724.7686719945718;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {3380, -2768, 16, -3917, -1878, 594, 3232, -3346, -1911, -322, -3986, 1130, -918, 465, 1319, -1545, -3602, 1144, -2085, 126, -2424, 114, -2954, -365, -946, -512, 23, 1998};
    vector<int> y = {3253, -294, -2153, 3751, -3234, -1000, -3962, -2843, -3896, -3668, -3893, -1285, -3355, -268, -1349, 3188, -3044, -2327, 2569, -379, -3871, -3251, -3551, -1090, -3573, 645, -739, -1596};
    vector<int> r = {4427, 2296, 681, 1788, 597, 547, 2433, 5, 5, 422, 627, 60, 50, 7, 108, 242, 275, 129, 377, 188, 166, 52, 444, 42, 137, 10, 79, 122};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9922.47488782627;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {2399, -2585, -2358, -1471, -924, -2289, 2141, -3314, 357, 1148, 742, -3702, -779, -347, 3590, 1357, -2826, 3122, 1195, 3403, -1130, 3587, 894, 1499, -1775, 59, -2258, 3843, 663};
    vector<int> y = {-1247, -1870, -3850, -1092, -95, 3362, 1834, 926, 2054, -3114, -3764, -2488, -3140, -725, 1784, 3883, 249, -3895, -89, 2145, -2229, 3948, 861, -2931, -2608, -2768, 587, 3019, -2925};
    vector<int> r = {1364, 608, 1064, 690, 79, 2377, 916, 12, 477, 151, 284, 546, 444, 190, 172, 702, 12, 1189, 77, 5, 6, 732, 507, 134, 223, 188, 65, 87, 68};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2067.3147281016827;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {2646, -2719, 469, 2827, 194, -1277, -619, -3713, -361, -2288, 1336, -3936, -958, -2105, -1271, -1692, 2000, -583, -3957, 1628, 2474, -1564, 1278, -339, -912, 1585, -3065, 1910, 1473, 3451};
    vector<int> y = {2382, 2805, -960, -2421, -2560, 905, 178, -57, 495, -3147, -3472, 3100, -1238, 1170, 3507, -1988, -3689, -466, -2384, -825, -3425, -187, -2210, -3878, 1008, -1898, -3672, -2992, -3715, -3240};
    vector<int> r = {3178, 43, 600, 964, 969, 352, 223, 1411, 183, 607, 169, 949, 523, 349, 815, 499, 349, 7, 850, 154, 97, 363, 155, 95, 22, 213, 270, 87, 14, 58};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6749.817545625303;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {2827, -72, 1517, 2028, -3774, -3405, 3508, 2644, -3653, -2240, 3889, 3955, -954, -1051, -2820, -1242, 3865, -1600, -514, -1412, -1696, -1610, 537, 2033, 2511, 1345, 2172, 2969, 2708, -227, 181};
    vector<int> y = {2580, -3885, 3662, 5, -2717, 439, -1650, -1877, 2574, -1391, -257, -3415, 2365, 1301, -526, 3267, 2795, 409, -1071, -1140, 1331, -328, -1130, 1686, -3802, -1752, -2751, -1413, 639, 2227, -302};
    vector<int> r = {16, 2329, 1608, 134, 1212, 360, 57, 227, 1254, 386, 596, 478, 282, 597, 488, 574, 221, 342, 431, 301, 11, 240, 70, 279, 147, 176, 27, 67, 94, 340, 58};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 116.2737028818086;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {-3554, 1011, 1133, -2459, 3878, 993, 3474, 101, -3588, 3352, 3191, 3755, 3978, 2109, -3973, 2966, 5, -1172, 3078, 3018, -3043, 2241, 253, -1100, -2431, 2301, 3091, 3193, 2352, 1872, 3413, -235};
    vector<int> y = {-1553, 3558, -3817, 2583, -2090, -1105, 193, 169, 2299, -3321, -2155, -502, -3459, -2061, 3866, -1138, -2020, 903, -407, -1802, 3613, -504, -287, 738, 1459, -1845, -2955, -3910, -847, -1105, -2751, -1471};
    vector<int> r = {3156, 3412, 1941, 172, 553, 521, 389, 31, 657, 64, 82, 343, 54, 4, 917, 339, 112, 22, 276, 118, 10, 191, 213, 15, 25, 75, 25, 32, 95, 130, 1, 89};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6172.805642608601;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {-97, 1630, 2810, -3852, -1692, 2779, 3846, 3285, -2302, 121, 3995, 924, 224, 3741, -3927, 3683, -2740, 356, 30, -3692, 3751, 1589, 3348, -1682, 3443, 2163, -3631, -3734, 2839, -362, 3943, 3029, 2870};
    vector<int> y = {-2844, 3280, 2407, 84, 2860, -4, -2335, 483, 838, 2763, -627, 1260, 3990, 3940, 961, 3564, 126, 1422, 1902, 3488, 2261, 1231, 2884, 1368, 3136, 1137, 2503, 1837, 919, 2037, 3826, 1491, -122};
    vector<int> r = {3904, 1225, 233, 566, 1344, 12, 14, 463, 68, 242, 374, 239, 297, 8, 221, 60, 7, 11, 133, 512, 315, 116, 125, 43, 86, 183, 276, 144, 155, 89, 139, 176, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7563.470013574649;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {1553, 2312, -2, 3322, -3397, -2714, -2598, -614, -3395, 1100, -910, -3460, 2599, 347, -618, -1483, -3000, 3128, -1996, -2125, 3559, 1278, 1986, -1129, 3941, -1337, 1870, 3616, 3959, -1763, -1635, -627, -535, -355};
    vector<int> y = {-1482, 3207, 2166, 3955, 3361, -28, -3304, 1966, -2454, 2708, 3257, -1852, 2235, 3842, 2905, 899, -1876, 2897, -1649, 833, 1983, 3827, 3967, 1590, 1505, -3642, 2247, 2300, 1209, 83, -456, 3756, 3629, 3421};
    vector<int> r = {3311, 373, 473, 715, 2312, 884, 997, 157, 32, 754, 115, 104, 521, 233, 250, 154, 322, 34, 123, 29, 22, 184, 158, 44, 248, 91, 36, 282, 47, 30, 30, 55, 14, 147};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5543.065235880296;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {3688, -3093, 1671, -665, 3001, -3011, 1096, 3010, -2861, 557, -715, -2515, 3357, 2285, -3815, -121, 3292, 3225, 2564, 2480, 1482, 1657, 3458, -3541, 692, 531, 19, -1223, 3931, 2985, -3654, -780, -2463, 1133, 550};
    vector<int> y = {76, 2962, 1491, -1493, 3779, -3676, -3864, 1277, -1677, 3085, -3183, -996, -998, -1723, -66, 2329, 2698, -1899, -90, 1904, -548, 2848, 2140, -1256, 2185, 781, 1023, -2999, 1010, 377, -1650, 319, 180, 885, 3644};
    vector<int> r = {419, 2126, 437, 1199, 625, 1014, 1701, 26, 157, 263, 65, 318, 487, 403, 808, 368, 305, 147, 13, 229, 1020, 603, 143, 285, 141, 49, 131, 122, 40, 48, 26, 603, 246, 165, 123};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 876.0412287158722;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {659, -2755, 3563, -3390, 3287, 1249, 422, 2609, 2206, 3171, 3327, 3608, 1707, 2774, 1740, 2203, 3286, 2992, 1322, -304, 696, 3846, 3976, 687, 612, 2241, 692, 3419, 132, 757, 1261, 760, 764, 931, 3811, 3485};
    vector<int> y = {3218, -3958, -1743, -94, -2425, -2989, -2678, -2000, -1783, -3558, -1247, -3584, -2383, -3905, -3971, -2887, -1729, -3202, -2143, -1875, -3431, -2108, -1142, -3707, -1970, -1273, -1824, -1860, -2276, -3955, -3567, -2522, -1656, -2786, -1942, -2945};
    vector<int> r = {4741, 3094, 56, 397, 421, 238, 144, 201, 256, 129, 3, 254, 38, 370, 547, 560, 49, 93, 393, 91, 108, 91, 509, 95, 43, 15, 6, 119, 203, 156, 74, 96, 126, 67, 13, 133};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11000.69618355774;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {2976, 3267, -2970, -1328, -3327, 3935, -1201, -3026, -3787, 1945, -2941, 629, -244, 1135, 1593, -3566, -162, -2645, -1005, -418, 1646, -1631, 252, 1033, -1935, 3647, 1065, 1476, 669, 2194, -1751, 948, -1175, 904, -3825, 682, -3598};
    vector<int> y = {-1919, 3373, -970, 3682, 995, 338, -2427, 2339, -3550, 592, 1392, -209, -663, 308, 556, 1952, 1080, -3489, 1719, -3604, 1977, 1649, -2144, -3285, 1020, 862, 2199, 1337, 1644, 379, -3417, -3809, -1595, 2960, 3470, -1975, 2512};
    vector<int> r = {2022, 2037, 1714, 1720, 224, 193, 303, 189, 430, 113, 165, 335, 284, 221, 143, 470, 589, 226, 43, 983, 43, 126, 216, 110, 269, 173, 12, 233, 400, 174, 148, 138, 159, 170, 192, 27, 25};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3706.3730916602703;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-1750, -3494, 3408, 2342, 3760, 3719, 959, 1194, -430, 1704, -2730, -3687, -2813, -314, -3443, -1587, -2369, 1924, -683, 1191, 624, 896, 3163, 857, 3249, 3714, 1510, -3731, 323, 3847, -3545, 3410, 2749, 132, 397, 8, 1257, 1428};
    vector<int> y = {2502, -3333, 1382, -3022, -1775, -3151, 398, 3676, 3073, -2204, 1756, 3822, 3106, 1331, 1471, 711, 3647, -1446, 145, -2138, 2732, 1693, -1707, -948, -2365, 3986, -886, 2171, 573, -2189, 2052, -3939, -1433, 2195, 318, -83, -1839, -3894};
    vector<int> r = {972, 4421, 2352, 723, 333, 453, 46, 698, 418, 132, 168, 932, 23, 652, 111, 12, 288, 620, 40, 215, 65, 38, 13, 202, 371, 155, 16, 23, 191, 53, 55, 289, 36, 179, 25, 122, 5, 140};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 759.2731287112861;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {783, -2229, 3931, 3686, -3813, -373, -1288, -786, 2248, 612, -3795, -1750, 1973, -2340, 2270, -2575, -293, -1824, 141, -228, -1300, 850, 1265, -2499, 3701, 2903, -3048, 793, 3500, -1797, 901, -1794, -1020, 1045, 2684, -3743, -330, -3964, -2299};
    vector<int> y = {3582, 3945, -1795, 1858, -633, -2300, 850, 167, 1203, -370, 2985, 1804, 815, -3098, 3114, -3460, 1918, 1501, 651, -807, -703, -3887, -192, -2115, 3736, 1460, 1298, 1535, 2753, -3816, 1968, -1287, 2126, 1024, 2594, -3468, -3635, 2156, 41};
    vector<int> r = {1378, 1496, 3045, 94, 1613, 1250, 172, 45, 380, 94, 94, 59, 81, 373, 65, 14, 263, 232, 539, 214, 253, 292, 12, 246, 44, 10, 379, 149, 331, 527, 187, 229, 1, 244, 356, 701, 81, 205, 39};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2134.698051496491;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {3961, -3875, -2564, -1995, 874, -402, 1982, 3286, -507, -1631, -3289, -1653, -3777, -713, -1245, -198, -3056, -1335, -1144, 3985, 1430, 48, -1196, -233, 1549, 454, -808, -3567, 751, -1178, -195, 2114, -918, 935, -2377, -2107, -3988, -1477, -2365, -138};
    vector<int> y = {-1437, 3102, -3041, -222, 3442, 2024, 3822, 3505, -342, -580, -479, 575, -948, -2216, -1770, 3788, -1620, 89, -903, 3513, 1884, 1288, 711, -3804, 2787, 1617, -3900, -1289, 1156, -3332, -2921, 2836, -1468, 2417, -965, -977, -3842, -3843, -1206, 391};
    vector<int> r = {3959, 2932, 1076, 75, 291, 621, 820, 326, 555, 331, 609, 346, 13, 103, 329, 504, 391, 216, 39, 14, 178, 182, 91, 387, 12, 107, 79, 54, 111, 340, 179, 149, 23, 294, 48, 112, 530, 206, 88, 247};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 8484.124173406082;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {-2977, 2392, 2249, 1318, -2574, 3601, 1253, 3854, 337, 2597, 3608, 2555, 1367, 1729, 2466, -232, 3187, 3168, 3914, 2518, 1577, 195, 1375, 2839, 2849, 2224, 3490, 1852, 3394, -980, -3686, 3929, 1943, 3535, 2460, -1128, 2320, 3514, 3707, 1775, 2707};
    vector<int> y = {2319, 2888, 299, -3270, -3733, -275, -1172, -3860, -298, -1983, -2697, 1163, 1158, 1263, 448, -2826, -1330, 2787, -1657, -3128, -1895, -3714, 236, -588, 3686, 2155, 3377, 3859, 924, -1286, -2258, 171, -540, 2237, -3895, -1534, -267, -1046, -900, 746, 2873};
    vector<int> r = {4049, 115, 21, 773, 1656, 23, 587, 368, 155, 817, 355, 83, 153, 156, 237, 826, 48, 92, 510, 161, 79, 24, 522, 473, 198, 619, 43, 588, 134, 5, 45, 145, 159, 5, 94, 190, 4, 36, 68, 2, 180};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 8603.461247274045;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {680, -3988, -3784, 3252, -1421, -2853, -3527, -2154, -2489, -2817, -3870, -3311, -3977, -3633, -3258, 2008, -3841, 747, -3814, -3732, -1758, -3042, 454, -1951, -2196, -3262, -2217, -1557, -2062, 1605, -3597, -3690, -3316, -3913, -2806, -3654, -493, -2752, -3147, -3699, -3096, -1004};
    vector<int> y = {928, 3861, 2985, -3770, -3966, -2470, -3552, -2864, -3462, -1846, -2402, -2491, 2041, -620, -1944, -3402, -800, -3674, -2945, -1787, -3223, -1630, -3685, -2636, -3813, 3291, -3675, -3470, -2611, -3963, -3230, 2554, -2757, -1285, -3567, -1769, -3572, -3727, -3128, -6, 3858, -3456};
    vector<int> r = {4381, 507, 272, 814, 314, 336, 319, 118, 255, 81, 284, 52, 302, 125, 148, 61, 39, 64, 187, 65, 133, 46, 41, 42, 25, 138, 34, 70, 64, 390, 9, 47, 76, 168, 53, 9, 49, 24, 25, 1, 295, 29};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7477.643980423387;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {3538, -2043, 3056, -1686, 3169, 918, 179, -3836, -1153, -3806, -2716, 1308, -1733, -2351, -356, -2823, 1892, 612, -703, 1640, -1757, -611, -3562, 1879, 1815, -1527, -79, 1830, 1780, -742, 145, 1207, -3472, 533, -1027, 1443, -3763, -2280, -3842, 3240, -3151, 1092, -2452};
    vector<int> y = {2524, -3898, -539, 3358, -2795, 1942, 3937, 3578, 792, 2420, 1049, 637, 1460, 1699, 1414, 1474, 1022, 3258, 910, 3806, 770, 641, 1030, -32, 1646, 1582, 265, 551, 3459, 667, 1398, -20, 1124, 593, 1309, 2995, 3882, 921, 3273, -3851, 1246, 3624, 1500};
    vector<int> r = {1729, 4507, 1245, 1731, 726, 871, 69, 144, 248, 566, 292, 266, 84, 42, 429, 48, 307, 434, 50, 173, 107, 62, 16, 15, 56, 50, 50, 109, 91, 2, 34, 205, 57, 245, 178, 132, 42, 142, 98, 149, 152, 36, 99};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3559.274811930471;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {-983, 1894, -1025, -3330, -1494, 641, -3608, 2675, 3851, 3233, 2054, 2989, -3757, 1112, 497, 270, 1348, 3780, 2016, 1379, -2113, 3176, 1982, 2412, -1536, -1369, 1245, -3161, -248, 2911, -3163, 326, 2916, 1873, -2490, 3219, 3702, -295, 2151, -656, 1499, 2283, -521, 1613};
    vector<int> y = {-3347, 1998, 2188, 3244, 3782, -832, 108, -889, -2267, 456, 932, 3850, -2155, -3984, 3963, 1830, -3415, 2302, -1579, -2897, 906, 1345, -298, -1830, 368, -1082, 619, -966, 454, -3569, 975, 822, 1742, 249, -1265, -589, 185, 909, -1055, -857, -2047, -2661, 3014, 222};
    vector<int> r = {1749, 949, 539, 1487, 144, 1117, 784, 299, 1077, 78, 90, 1031, 1053, 138, 1221, 623, 336, 52, 41, 47, 757, 199, 206, 332, 19, 466, 282, 174, 207, 91, 109, 30, 20, 98, 290, 302, 165, 166, 91, 104, 251, 85, 20, 6};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2739.9645708599887;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {-456, 1865, 39, -1705, -3398, 3940, 1938, -518, -1116, -3665, 3564, -3131, -3962, 3923, -3980, 2915, -1874, 3493, -2637, 3308, 2373, 3887, 1631, -3745, 1235, 3475, 3815, -3313, 3660, -3990, 8, 3168, 2634, -3393, 3953, 3713, -514, 3487, -922, 3606, 3925, -1233, 1485, -3690, -3779};
    vector<int> y = {2002, -3437, -3516, -3861, -3199, 70, -1579, -2704, -1996, -1407, 1594, -2447, -1003, -3489, 3212, -473, -2845, 3996, -1782, -2400, -1543, -1585, -1308, -247, -2115, 2656, -2535, -3729, -3661, -2164, -2854, 3028, -1436, -475, 3443, 2317, -2038, 968, -3752, 2861, -958, -2352, -1416, -2216, -3723};
    vector<int> r = {3616, 1265, 534, 339, 230, 769, 257, 373, 37, 237, 294, 365, 27, 109, 104, 168, 688, 452, 296, 52, 120, 470, 43, 323, 197, 23, 91, 25, 24, 236, 73, 4, 91, 42, 24, 156, 112, 216, 298, 105, 43, 84, 95, 25, 255};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4131.797996361019;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {-444, 3654, -632, 3910, -1485, -3555, -3956, 376, 3359, -3260, -2709, 1440, 1860, 3317, 776, 2744, -3767, 1678, 2667, -2108, 1421, -3894, -3797, 2205, 1841, -3777, -3540, -1687, 2423, -2382, 3868, 3935, 3984, 2383, 2760, -3668, 1787, -1982, 3451, -3820, 2227, 2505, 3111, 206, -3297, -2457};
    vector<int> y = {2085, 982, -3336, -2796, -2362, -1131, -3973, -1616, 3073, 3917, -2827, -2515, -1157, 3666, -3775, 3147, -3832, -491, -3499, -3967, -3682, 418, 2744, -3940, -3267, -2946, -3628, -3596, -657, -2053, -1374, -937, 2258, -2211, -3964, 3289, -3982, -2094, -644, -3664, -3474, 3927, 2329, -2660, -3416, -519};
    vector<int> r = {3018, 1090, 898, 1147, 327, 800, 173, 742, 436, 278, 477, 544, 498, 140, 215, 133, 45, 158, 97, 122, 51, 561, 355, 153, 66, 480, 143, 111, 78, 81, 28, 180, 18, 80, 282, 48, 85, 95, 297, 15, 243, 29, 85, 13, 32, 112};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3005.032247029298;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1996, -3536, -1696, -1853, -2648, 3967, 1289, -3428, -3849, -1151, 1847, -3574, -398, 140, -2315, -3965, -3631, -1482, -3699, -172, 2371, -570, 1354, -2775, -275, -843, -743, -1000, -3667, -2607, -1960, -3530, -1044, 470, 3935, 28, -1488, -877, 2833, 700, -212, -3391, 1328, -1466, 3696, -1287, 457};
    vector<int> y = {-1211, -1377, 2268, -2859, 599, 3518, 2666, -3924, 3731, 149, 3783, -3230, 427, 3243, -3454, 2849, 2143, -732, 1279, 2786, 2409, 964, -3890, 3796, 1069, -2032, -3760, -122, 781, -3671, -2256, -3568, -2991, -3938, -3703, 1616, 414, 381, -3984, -3772, 3989, 1273, 3750, -1599, -3846, -158, 3855};
    vector<int> r = {2644, 1634, 1475, 499, 444, 1855, 953, 125, 517, 116, 85, 113, 64, 291, 146, 120, 376, 264, 80, 59, 75, 11, 69, 244, 260, 280, 616, 126, 190, 189, 112, 154, 181, 76, 225, 196, 143, 162, 140, 5, 365, 166, 8, 289, 3, 76, 202};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2649.8552435066663;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {2391, 2145, -2427, -2515, 3810, 2078, 875, 1900, -964, -1128, -1135, -1739, -276, -402, 3942, -2713, 2074, 2987, 3734, -1574, -364, -948, -3791, 318, -3629, -1132, 1744, -1976, 1390, 2573, -3509, 3942, -3937, 2306, -2471, -2486, 3624, -1014, 1490, -2369, 1908, -2744, -547, 501, -3992, 751, -515, 1460};
    vector<int> y = {3613, -3263, -2241, 2134, 2083, -1566, -1107, 1346, -3327, -2695, 189, -143, 1299, -1808, 3091, -2915, -2552, -3180, 353, -3087, 3880, -1889, -198, -2846, 2201, 3132, -1964, -1409, -3333, 1785, -3835, -3794, 3911, -3928, -1287, -3499, -1385, -707, -1522, 614, -1011, 3799, -502, 2509, 2844, 3911, -1723, -2507};
    vector<int> r = {1077, 332, 273, 998, 576, 71, 439, 624, 254, 10, 13, 299, 1206, 18, 211, 282, 30, 484, 895, 9, 374, 337, 1176, 955, 67, 304, 25, 30, 92, 151, 148, 212, 58, 6, 294, 141, 336, 18, 27, 198, 118, 400, 4, 182, 550, 158, 8, 88};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1910.8030223452793;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {-16, 3469, -3803, 538, 3820, -2883, -3736, 3117, 181, -3708, 1819, -1409, 3526, 2699, 3827, -2585, 687, -2598, 54, -1372, -1175, 3567, -492, 744, -1311, -3946, -2118, -506, 1412, -457, -1413, -1644, 3889, 2200, 2135, 1694, 1645, 3430, -978, -313, 1437, 1164, 1626, -1292, -338, -1689, 2099, -1490, -1401};
    vector<int> y = {3731, -472, -3295, 1493, 2323, 538, 3895, 3753, -1427, 1421, -2738, 2823, 1880, 1894, -3740, 2440, 3570, 1897, -3306, -1074, 1360, 2474, -3322, -3801, 1095, 13, -357, 225, 3322, 118, 3710, 12, 2798, 3116, -3748, 3149, -1477, 2695, -556, -3899, 13, 3843, -1313, -315, -3398, 692, 2554, -295, -84};
    vector<int> r = {140, 1852, 2965, 1471, 56, 783, 1731, 1043, 1282, 362, 718, 588, 373, 52, 1434, 60, 329, 450, 232, 286, 148, 159, 53, 234, 10, 263, 68, 89, 123, 6, 108, 19, 38, 12, 49, 187, 106, 29, 109, 135, 5, 218, 12, 3, 43, 290, 290, 16, 30};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 625.7434920474478;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {1050, 2210, -3451, -1266, -2492, -1078, -3122, 3447, -3055, -2223, 3907, -1976, -890, 68, -1265, -1001, -1361, -1039, 675, 458, -436, -1556, 3690, 1428, 3899, 1262, -1559, -1183, -3742, 3379, 2120, -1994, -1010, -249, -1960, -1338, -1987, -377, -3341, 3895, 1048, -1115, 537, -253, -485, 458, -1954, 889, -1259, 3887};
    vector<int> y = {-3555, 3868, -2352, 3076, -3916, -431, 3591, -456, 1097, -408, -3488, 1308, 3834, -1362, -1334, 2244, -3329, 1255, -1335, 795, 528, -1860, -3952, 896, 1374, -507, 450, -2511, -195, -2391, 685, 416, -1862, 1999, -3832, 3907, -3150, -1231, -536, 1593, 653, -3197, -76, -678, -1523, 1141, -1690, 1414, 1178, -3205};
    vector<int> r = {2092, 2739, 1371, 411, 414, 492, 1472, 1365, 812, 608, 31, 270, 272, 247, 117, 447, 74, 74, 13, 152, 620, 177, 336, 292, 65, 751, 44, 220, 309, 407, 113, 169, 34, 292, 48, 120, 196, 44, 100, 4, 2, 84, 81, 287, 266, 107, 76, 29, 25, 201};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3208.5542457936126;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {-1019, 4688, 4410, -1652, -4505, 2448, 4951, 1644, 4872, -3992, 4358, 4289, -4552, -1648, 3129, 4451, 4602, -3340, 4967, 3323, 4199, 4961, 4494, -513, 4867, -2874, 3941, 3495, -3760, 4633};
    vector<int> y = {-1226, 3598, -927, 4225, 2395, 3960, -2415, 4230, -2121, 4047, -2290, 4071, 4706, 4790, 4487, -4164, 1780, 4693, 632, 3159, 4978, -297, 1007, 4024, 2442, 4162, -3791, 4188, 3834, -1844};
    vector<int> r = {5000, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 8760.199529627846;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {930, 4330, -3768, -2697, 2301, 3847, -1819, 4589, -4398};
    vector<int> y = {2705, -1039, -2628, -1055, -2259, -2656, -1847, -4216, -1098};
    vector<int> r = {5000, 1, 1, 1, 1, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11847.965120364363;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {-2880, 58, 4049, 399, 2027, 4909, 2022, -1505, 3758, 4818, -1983, -183, 1819, -3306, -2915, 2389, 963, 2573, 2356, 4584, 4121, 1024, 1842, 4747, 3965, 4656, 3316};
    vector<int> y = {2600, -3740, 4728, -1439, -1393, -1656, -1470, -2907, 3336, -3683, -3639, -2512, 4449, -3211, -2859, 1418, -2898, 4987, -4687, 2087, -4561, -3181, -566, -2159, -1613, 4959, 4723};
    vector<int> r = {5000, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10809.982973696988;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {3516, -4880, -422, -1607, -787, -1482, 581, -3386, -1566, -2384, -3662, -1758, -2222, 1833, -2541, 1767, -4393, -2860, -1678, -2331, -3047, -2861, 2372, -2057, -2295, -3956, -4679, -4058, 920, -3164, -2741, -787, -1621, -2070, -2891, 2263, -4703, -315, -1935, -2632, -1498};
    vector<int> y = {1407, 2326, -4558, -4497, 4882, 323, -4895, 2899, 3893, -1899, -3630, 1279, 2144, -4811, 453, -3409, -2222, -451, -4980, 4381, -1109, 1650, -4218, 4465, -2379, -1349, -2108, 3139, -3532, 789, 4214, -3523, 3554, -1117, 4257, -4370, 909, -4924, 1832, 4939, -2973};
    vector<int> r = {5000, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10786.758766694467;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {1911, -4887, -2567, 2502, -1531, -3912};
    vector<int> y = {2789, -515, -4417, -2556, -2248, 1002};
    vector<int> r = {5000, 1, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12515.583263193075;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {3007, -1988, -1584, -2460, -4632, -3415, 1065, -3222, -3347, -2720, 55, -3492, 4664, -3886, -3530, -1981, -2696, -3673, 3101, -3466, -1143, -3370, -3134};
    vector<int> y = {-2525, -3028, 1846, 825, -1473, 2344, 2389, -4585, 4367, 1506, 2001, 2780, 4712, -2467, 3758, -1378, -669, -4726, 2702, 4699, 4456, 3168, 1788};
    vector<int> r = {5000, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11321.828036313733;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {-3469, -2813, 4055, 1456, 2800, 3738, 2416, 4989, 3888, 3531, 1904, 3250, 126, 4499, -923, 625, -1165, 3345, 2964, -1009, 4776, 3757, 2646, 2550, -918, 2514, 934, 1387, -219, 4320, 4196, -229, -2396, 4188, 4589, 3735, 2091, 2360, -4033};
    vector<int> y = {-1610, 3654, -3239, 2392, 2955, 2683, -1278, -659, -3472, 659, 341, -1547, 3282, -4887, 4588, 4552, 4828, 1577, -1850, 3095, -587, 4556, 2957, 4806, 3671, 2812, 945, 2439, 4618, -1821, 2822, 3036, 3673, -3136, 579, 479, 4679, -991, 4729};
    vector<int> r = {5000, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11964.631699692165;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {-1538, 4101, 1793, 3866, 3198, 3102, 2181, 4482, 2056, -3895};
    vector<int> y = {448, -113, -3595, 77, -3865, -2821, -2997, 2440, -3063, -4208};
    vector<int> r = {5000, 2, 2, 1, 1, 1, 2, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10123.569015902693;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {-696, -4210, -2741, 2531, 3212, -3616, 120, -2594, -1817, 4641, -2374, -337, 2551, 1389, 12, 1224, 3654, -4557, -3430, -3212, 2715, 3840, 3143, 4408, 3885, 4556, 3748, 3433, -1506, -2906, 4373, -4273};
    vector<int> y = {-2272, 4423, 4354, 4439, 3492, 3360, 4431, 4028, 3947, -3724, 3976, 2864, 4524, 3628, 3433, 2519, 2985, 1873, 4797, 3967, 4628, 2950, 941, -4783, -4648, -1370, 116, 3947, 2918, 4285, 3949, 2115};
    vector<int> r = {5000, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 8829.789349658386;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {4849, -3281, -3425, -4446, -574, -1337, -3262, -3480, 571, -1112, -2036, -292, -4378, -672, -4123, 1787, -3056, -4574, -4151};
    vector<int> y = {-1349, 1019, -4764, -4664, -4762, -3337, -724, -3612, -4413, -763, -906, -875, 2073, -1349, -4133, 4969, 825, -4292, 1342};
    vector<int> r = {5000, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11900.839278237683;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {2385, -212, 2943, -3716, -45, -2528, -2666};
    vector<int> y = {-1889, 3579, 3655, -3273, 4867, -4952, 1359};
    vector<int> r = {5000, 2, 2, 2, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10359.755683523343;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {-2627, 3050, 4674, 4437, 4835, -3191, -1165, 2382, 643, 4198, 2042, 795, 1868, 3699, 2175, -762, -973, 2535, -1201, -143, 3710, -2526, 3946};
    vector<int> y = {-3667, -2252, 2405, -2022, 2472, 4643, 4064, -4506, 1101, 3981, 610, 4743, 3727, -774, -1006, 3216, 3201, 1221, 4013, 924, 4761, 4620, 1349};
    vector<int> r = {5000, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12213.70034321261;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {1399, -4135, -4283, -3942, 3961, 4540};
    vector<int> y = {-3863, -1505, -1127, 4384, 4824, 1238};
    vector<int> r = {5000, 2, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11795.993353856773;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {3643, 4944, -2377, -4273, 118, -4094, -915, -4376, 1130, -1570, -312, 3125, -1414, 4626, -1445, -4247, -2271, -4343, -1260, -605, -4603, -3316, -1991, -4322, -4362, -3402, -2823, 308, 819, -4144, 4204, 1239, -2804};
    vector<int> y = {-2502, 4996, -2319, 1179, 1357, 4395, -4603, 626, 3680, 4767, 4680, 4041, 1776, 4737, -2591, -3272, 1953, 421, 3488, 715, -253, -787, -2554, 2595, 4590, 4949, -3197, 3171, 2934, -3073, 2641, 3954, -78};
    vector<int> r = {5000, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10443.595548421503;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {-1414, -4608, -3690, 4532, -4030, 2582, 3093, 3608, 3427, 4206, 3014, -1365, -4138, 2481, -4553, -3736, 4666, 4827, 3542, -3651, 3880, 4375, 4431, 4929};
    vector<int> y = {-1506, 4317, 3737, -2205, 3265, 3074, -4238, -780, 1770, 3634, 3303, 4196, 3338, 3840, 2506, 3907, 2608, -2636, -3561, 4512, -2737, -944, 3221, 3552};
    vector<int> r = {5000, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 8792.294128321304;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {2476, -529, -3396, -4082, -2782, -3571, -1387, -3510, 1773, -1455, -3515, -2974, -4442, -1482, -2717, 4487, -1494, -2322, -3360, -2705, -3341, -4966, -4929, 1036};
    vector<int> y = {1980, -4990, -1503, -3319, -4256, 3304, -1435, 2539, -3823, -2359, 2240, -4253, -3265, -2995, -2010, -3802, -2059, 4027, 1411, 4683, -1867, -1932, 3831, -4457};
    vector<int> r = {5000, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10121.749357729777;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {3819, -1506, -923, -2790, -3734, -985, -3528, 19, -2602, 539, -1601, 1639, -1903, -916, -4993, -2234, -2076, -2115, -3274, -2689, -593, -2666, -3990, -3077, -3352, -1484, -3946, -1177, -866, -896, -1960, -3723, -3261, -1255, 1845, -3597};
    vector<int> y = {136, -2802, 4623, 3075, 1863, 1891, -2129, -4286, -988, 4499, 263, 4884, -4426, 3840, -53, -4468, 4039, -3307, 2200, -3572, -4909, 4368, -788, 3175, 844, 4797, -988, -3252, 3254, -1835, 4726, -3592, 3726, 3033, 4780, 2225};
    vector<int> r = {5000, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10782.424047217624;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {2755, -4692};
    vector<int> y = {-4179, 4226};
    vector<int> r = {5000, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 20215.22040136111;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {1733, -2814, -1348};
    vector<int> y = {-4206, -1670, -135};
    vector<int> r = {5000, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 14698.054487427957;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {-392, 1142, -1649, -2799, -2231, -2840, 4374, 4909, 3157, 1074, 4328};
    vector<int> y = {-637, 4479, 4285, 4008, 4353, 4020, 3058, 3810, 2968, 4708, 2501};
    vector<int> r = {5000, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12172.630679909751;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {267, -1863, -1003, 2454, 4094, -4864, 4384, 4636, -1276, -3261, -4147, 2657, -3931, 2722, 2034, 4640, -743, -4203, -3803, -4634, -2080, -1769, 4881, 911, -1730, 1309};
    vector<int> y = {-4215, 2224, 2292, 4669, -578, 4294, 344, 2232, 2766, 4324, 4302, 3227, 3159, 4186, 4809, 3956, 2604, 4410, -551, 2341, 1981, 3120, 3048, 4007, 3014, 2113};
    vector<int> r = {5000, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11681.142730331556;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {-1052, 18, 3828, 2944, 4180, 363, 4609};
    vector<int> y = {2647, -3622, -4586, -2249, -3175, -4877, 4534};
    vector<int> r = {5000, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11881.965218593918;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {2208, -4590, -4955, -2350, -537, -3821, -2225, 739, 4705, -3606, 299, -3804, -4940, -4087, -4266, 4699, -3137, 4933, -2231, -4265, -4310, -4353, -4990, 2770, 4009, -4403, -4129, -1656, -650, -4809, 1086, -4088, 2074, 4855, -3504, -4960, -4853, -3053, -3542, 2816, -4397, 2046, -3116, -4187, -4114, 4028, -3681, 2354, -4019, -1828};
    vector<int> y = {-2321, -1702, 1323, 1232, 2278, -2180, 4047, 3079, 2168, 2130, 4441, 4912, -3096, -665, 1733, 4110, -3422, 4020, 3176, 253, -1780, -3007, 4785, 3983, 3004, 3424, 1358, 2132, 4153, -2586, 3977, -4351, 4568, 2577, -4793, -564, -1093, -2838, -461, 4192, 2110, 2766, -700, 2235, 2952, 3341, -3891, 3167, 4284, 2281};
    vector<int> r = {5000, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 9758.809399591593;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {-160, -4518, 2241, 1692, 4740, 4598, 2627, -3326, -3772, 1799, 2404, 4436, 3668, -2458, 3247, 2570, 3186, -4669, 4613, 4788, 3460, -126, 4887, 2006, -4101, -98, 4747, 4812};
    vector<int> y = {1487, 4833, -4744, -3755, 2710, 3109, -3987, -3554, -2845, -4506, -3397, -4825, -2483, -3852, -2367, -4050, -2282, -3126, -3118, 71, -4483, -4422, 4486, -4652, -2976, -4806, -1862, -3949};
    vector<int> r = {5000, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5104.148189470925;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {4942, -4950, -3651, 501, -3024, 2266, -4755, -368, -1786, 1194, -805, -4478, 51, -3626, -873, -1407, -1806, -1864, -4426, -388, -4387, 1337, -3525};
    vector<int> y = {-1027, -3719, -3031, 3709, 4730, 4561, 3846, -943, 4993, 4317, -119, -134, -3863, 4952, -3160, 2387, 3595, 433, 1349, -1981, 2350, 2821, -4565};
    vector<int> r = {5000, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11938.337376655541;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {-2050, 4586, 3680, 4890, -2858, 3595, -1756, 3911, -2710, 2958, 983, 2987};
    vector<int> y = {-1764, 400, -2035, 3419, 3484, -138, 4351, 2831, 3788, 3552, 2572, -506};
    vector<int> r = {5000, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11439.994186168013;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {2308, 3793, 1307, 4303, 4982, 4106, 766, -4772, -4256, -4005, -4790, -4226, -4955, -3074, -4758, 3224, -4151, 4320, -1368, -3039, -3736, -2335, -2202, -3714, -3541, -3044, -3283, -4313, 309, 323, -2937, -3782, -2959, -3523, -1162, -3181};
    vector<int> y = {-2932, 3407, 4945, 4263, 1976, 3734, 3740, 4915, -2282, 3854, -4959, -2611, -739, -1617, 3651, 1999, -3441, 4566, 569, 4644, 4946, 498, 1806, -1055, 1456, -3058, 4936, -4906, 2293, 4553, 3167, -2547, -346, 3397, 2973, 4009};
    vector<int> r = {5000, 2, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10378.479543993642;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {-2787, 3031};
    vector<int> y = {408, 3939};
    vector<int> r = {5000, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 16596.013559834944;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {23, -288, -4044, 400, 3724, 1556, -1013, 3736, 4974, 2718, 4908, -1382, -2621, -4697, -1652, 4798, -4346, 4611, 3282, 609, 3870, 4734, -3797, -4328, 2491, 3381, 1178, 2106, 4297, 4712, -4227, 4003, 462, -1782, -914, -3786, -3292, -473, -3969, -4461, 1469, 2888, 600, -1071, 4075, 2584, 1461, -124};
    vector<int> y = {-4747, 1635, 4880, 4797, -1190, 3511, 2955, 2283, -1432, 212, 2004, 3480, 4464, -520, 1350, 1171, 3337, 3615, 4510, 2683, -103, -659, 3664, 616, 2681, -621, 4087, 3271, 4658, 3429, -1524, 4917, 3368, 2450, 2717, 53, -704, 4081, 607, -1583, 1627, 2451, 1053, 4405, 4432, 1640, 893, 3639};
    vector<int> r = {5000, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11114.773201847556;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {3836, -1824, 4563, -2404, -4538, -3756, -3527, -3508, -3752, 1038};
    vector<int> y = {2947, -1746, -2970, -4370, -427, 2996, -4470, -1623, -4476, -3186};
    vector<int> r = {5000, 1, 1, 2, 2, 2, 1, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12368.162833640063;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {-1073, -875, 3509, 4831, 155, 4600, -1175, 2231, 4546};
    vector<int> y = {-3708, 1560, 4805, -3641, 3825, 3204, 4236, 3331, -1773};
    vector<int> r = {5000, 1, 2, 2, 1, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12099.080191069928;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {4567, -981, -4535, -958, -4477, -3551, -4465, -30, -1676, -3085, -3309, -2955};
    vector<int> y = {1379, -2743, -725, -1620, -1416, 4155, 3117, -2584, -213, -4022, -229, 3490};
    vector<int> r = {5000, 1, 1, 2, 1, 2, 2, 2, 1, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 14268.071212743056;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {97, 4914, -3583, -4071, -4590, -4737, 2853, -3584, 4868, 4818, -4735, 4325, 811, 2553, 1693, 493, 1746, -4229, 4263, -2816, -2312, -4104, 2750, 4673, 2728, -4235, -4264, 1026, -2770, 2885, 4516, -4034, -4798};
    vector<int> y = {-967, 2528, 3682, 4939, -3326, -4165, 3403, -4602, -4852, 4368, 3648, 4128, 4232, 4178, 4822, 4714, 4950, -4416, -3948, 4541, 4513, -4939, 3653, 4106, 4033, 2270, 3006, 4167, 3580, 3583, 3188, -4623, 3190};
    vector<int> r = {5000, 1, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4375.920199306447;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {-3404, 2503, -1308, -1506, 107, 1557, -4833, 975, 324, -4347, 1137, -3036, -601, -3667, 4268, -4105};
    vector<int> y = {4812, -2114, -2568, -1524, -1267, 2457, -4755, -3179, -4242, -2309, -3072, -365, -2869, -1706, -1804, -831};
    vector<int> r = {5000, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12761.762154846008;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {236, -4019, 4271, 3172, -1127, 3592, -4711, -4708, -2451, 1805, 2648, -4054, -4879, -2559, 4759, 3011, 429, -827, 2142, -3812, 4093, -4114, 913, -221, -1664, -4471, 3709, -4102, 991, 3158, -4805, 641, 1923, 4565, 4802, -1724, -4391, 1728};
    vector<int> y = {-2200, 2418, 1721, 3981, 4501, 3353, 3207, 2027, 2337, 2840, 3986, 2555, -1609, 4691, 3952, 2683, 3780, 2841, 2503, 2933, 2042, 667, 3508, 4897, 3388, 1678, 3529, 3995, 3081, 4506, -4659, 3847, 2565, 4483, 91, 4265, 4450, 4049};
    vector<int> r = {5000, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7983.035541249738;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {1844, 1135, -1698, -1252, -3874, -228, 4731, 3736, 4522, 142, 4116, 117, -1012, -3767, -2173, 2628};
    vector<int> y = {-2935, 4687, 1385, 3262, -1133, 3018, 1508, 4935, 4405, 4858, 2515, 2794, 3268, 1026, 1613, 3918};
    vector<int> r = {5000, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11328.930773432494;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {-3804, 4071, 1736, 4588};
    vector<int> y = {4986, 1268, -1581, 2498};
    vector<int> r = {5000, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 16556.981830631164;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {2076, -2499, 4194, -3537, -3098, 470, -4087, -1744, -2397, -3239, 4809, -152, -2564, -676, -4107, -2316, 4575, -4297, -4066, 1547, -2871, -1541};
    vector<int> y = {-3972, 3424, 978, 4157, -4531, 1126, -3299, 1336, -1721, 2938, 3904, 1781, 657, 1112, 4303, 552, 3117, 2218, -739, 1738, 124, 1072};
    vector<int> r = {5000, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10567.276867731507;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {3734, 3026, -2276, -2042, -76, 4533, -1273, -2540, -4953, -4020, -3884, -1257, -2642, -319, -4626, -1793};
    vector<int> y = {4461, -3601, -1279, 3424, -2053, -3436, -2909, 4881, 1063, -3515, 4756, 1771, 3723, -4617, 4305, -4914};
    vector<int> r = {5000, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 12496.932521185901;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {4132, 363, -3176, 927, -3073, -4407, -2018, 535, -4710, 301, -2622, 4330, 1576, -2109, -4965, -2663, 4785, 68, -3833, -211, -4140, 1555, 6, -2194, -2662, 707, -3047, -4386, -2588, -899, -1525, 3390, -3992, 3848, -4061, -2938, -2362, -1969, -2717, 1587, 404, -1212, -1930, 3293, -4616};
    vector<int> y = {-3446, 4101, -4282, 1963, -4647, -16, 773, 4767, 1139, 490, 3881, 2625, 4416, 3119, 298, 1746, 3249, 3625, 1235, 1663, 2967, 1614, -149, 3602, -4228, 4421, 4868, -3426, -2883, 3590, -4655, 4753, 993, 2063, 1779, -3670, 4843, -3076, -4778, 4119, 3612, 4131, 4696, 3987, 2639};
    vector<int> r = {5000, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11523.186183559128;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {-2266, 2789, 4427, -3996, 3167, -3633, -2511, -3779, 2916, 3804, 2945, 3298, 720, 4040, -194, 2362, 3882, 772, 222, -87, 3292, 3556, 21, -1194, 3144, 4610, -1929, 4327, 4230, 4578, 4948, -2277, -3077, 1832};
    vector<int> y = {-3383, 3284, 657, 3314, 630, 4015, 3749, 2249, 3725, -2903, 1712, -1743, 1509, 3350, 2938, 4900, -2798, 2558, 2931, 2653, -2441, 3711, 1979, 2986, 984, 4640, 2898, 2784, -4477, -2629, 2656, 1665, 3740, 1578};
    vector<int> r = {5000, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 11227.352443078415;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {0, 4954, -427, -1332, -4463, 3689, 1392, 1035, 2162, -2092, 2307, -4662, 3365, -328, -4681, -2583, -4233, -1047, 1269, 587, 3034, 197, -1781};
    vector<int> y = {0, 0, 2509, 2169, 0, 0, 2132, 2326, 1344, 1451, 1078, 0, 0, 2523, 0, 0, 0, 2321, 2207, 2477, 0, 2539, 1821};
    vector<int> r = {575, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2753.125143852293;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {0, 2471, -363, 4963, 1493, -4886, -4254, -1177, 3611, -600, 4188, -4861, -3623, -3092, -256, -2069, -1235, -3262, 1030, -2156, -3916, 2897, -621, 4907, -4197, -3477, 867, -337, 202, 1937, 490, -2984, -2575, 2367};
    vector<int> y = {0, 2072, 3205, 0, 2856, 0, 0, 3002, 0, 3168, 0, 0, 0, 913, 3214, 2472, 2977, 0, 3055, 2397, 0, 1414, 3164, 0, 0, 0, 3105, 3208, 3218, 2576, 3187, 1222, 1941, 2190};
    vector<int> r = {2438, 2, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4346.467041702945;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {0, 2548, 4417, -2293, 836, 1219, 4391, 2899, -4452, 3133, 1456, -1386, 607, -1426, 4191, -2635, 4929, 628, -1440, -4472, 86, 2365, -1053};
    vector<int> y = {0, 0, 0, 0, 1158, 746, 0, 0, 0, 0, 0, 349, 1295, 92, 0, 0, 0, 1284, 0, 0, 1427, 0, 967};
    vector<int> r = {548, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1551.494095129615;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {0, 4305, -1660, 2908, -3717, -1501, 4411, 2725, 1463, 3651, 4641, -4345, -1199, -3197, 4107, -26, 144, -2386, -4311, -2650, 2021, 4472, -153, -4866, 2769, 820, 4629, 4973, 619, -1247, -1541, -3388, 2524, -2034, 838, -2100, -1543, 3947, -4187};
    vector<int> y = {0, 0, 1757, 0, 0, 1894, 0, 0, 1924, 0, 0, 0, 2097, 0, 0, 2415, 2411, 380, 0, 0, 1323, 0, 2412, 0, 0, 2272, 0, 0, 2334, 2071, 1862, 0, 0, 1305, 2266, 1195, 1858, 0, 0};
    vector<int> r = {1027, 2, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2766.0012186884856;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {0, 2978, -313, 0, -681, -4867, 341, 1041, 435, -800, 97, 3715, 2125, 2446, 4958, -657, -1957, 1899, 4409, -129, 812, 116, -1244, 833, -215, 190, -2493, -2544, 3385, 2592, -2559, -4601, 2431, 1033, -3097, 2066, -176, 1299, -4463, -3988, 778, -4020, -4046, -3889, -865};
    vector<int> y = {0, 0, 2136, 2159, 2050, 0, 2133, 1891, 2115, 2006, 2157, 0, 382, 0, 0, 2057, 913, 1026, 0, 2155, 2001, 2156, 1764, 1991, 2149, 2151, 0, 0, 0, 0, 0, 0, 0, 1895, 0, 628, 2152, 1724, 0, 0, 2015, 0, 0, 0, 1977};
    vector<int> r = {1786, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3142.8567271236107;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x = {0, -4527, -753, -1725, -4255, -2384};
    vector<int> y = {0, 0, 309, 0, 0, 0};
    vector<int> r = {84, 1, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 949.220136820762;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x = {0, -3422, -1018};
    vector<int> y = {0, 0, 3234};
    vector<int> r = {2482, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6685.393960125715;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x = {0, -1470, -4083, -3468, 3347, 33, 1227, 75, -2075, -2443, -1238, 2155, -4243, 1865, -4890, 2359, 1040, 3545, 249, 3307, -818, -1640, -3398, -274, -4903, -4586, -3154, -1945, 4457, -2459, -3711, 2944, -4633, -1667, 787, 531, 3031, 4888, -1391, -3333, 2172, -319, 4201, 1176, 1427, -990};
    vector<int> y = {0, 4150, 1641, 2710, 2856, 4399, 4227, 4402, 3881, 3660, 4224, 3837, 1169, 3986, 0, 3715, 4277, 2609, 4394, 2903, 4323, 4083, 2797, 4394, 0, 0, 3069, 3949, 0, 3650, 2366, 3271, 0, 4074, 4329, 4369, 3191, 0, 4175, 2875, 3827, 4389, 1313, 4241, 4162, 4288};
    vector<int> r = {2791, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5413.282251191737;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x = {0, -3119, 511, -808, -4794, 4426, 4783, -4926, -4358, 940, 2803, -1452, -936, 2266, 662, -2488, -1609, 4858, 2210, -1789, -23, 4530, -3127, -3959, -2047, 4963, -3514, 1750, 1608, -656, -527, 1496, -1563, 3610, 4832, 451, -3071, -374, -299, 532, -3167, 1066, 2701, 3474};
    vector<int> y = {0, 0, 1411, 1266, 0, 0, 0, 0, 0, 1173, 0, 384, 1174, 0, 1348, 0, 0, 0, 0, 0, 1503, 0, 0, 0, 0, 0, 0, 0, 0, 1352, 1407, 134, 0, 0, 0, 1432, 0, 1455, 1472, 1404, 0, 1059, 0, 0};
    vector<int> r = {196, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1547.3529716325477;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x = {0, 4030, 1029, 680, -3488, -1767, 2022, 1331, -1549, 3231, 54, -183, 1197, -2650, -3191, 2966, -4717, 4957, -2574, -3457, 3743, 326, -3401, -798, -3681, 3662, -2454, 523};
    vector<int> y = {0, 0, 2082, 2220, 0, 1507, 1145, 1903, 1730, 0, 2322, 2317, 1990, 0, 0, 0, 0, 0, 0, 0, 0, 2299, 0, 2183, 0, 0, 0, 2263};
    vector<int> r = {1085, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2918.497018047541;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> x = {0, 228, -801, -1254, -926, -1085, -1110, -1078, 1219, -489, -356, 354, -1135, 946, 1406, -584, -954, 847, -933, -408, 431, 694, 1363, -431, -527, -1158, 834, 1248, -1293, 1055, 643, -549, 1223, 302, 1328, 249, 232, 873};
    vector<int> y = {0, 2913, 2810, 2642, 2773, 2715, 2704, 2718, 2658, 2883, 2900, 2902, 2694, 2766, 2561, 2864, 2762, 2797, 2771, 2896, 2892, 2840, 2585, 2891, 2875, 2683, 2802, 2642, 2621, 2727, 2851, 2872, 2656, 2907, 2604, 2912, 2913, 2789};
    vector<int> r = {1470, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4902.495833026053;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> x = {0, -206, 991, 1252, 835, -82, 544, 35, 760, 1433, -632, 382, -896, -870, -18, -1449, 433, 1195, -246, 560, -45, 630, -31, -1054, -1344, 1263, -240, 812, -467, -554, 701, 857, -150, -406, 708, -397, -1356, -1212, 361};
    vector<int> y = {0, 2261, 2041, 1893, 2111, 2268, 2203, 2269, 2139, 1759, 2179, 2236, 2084, 2097, 2270, 1746, 2228, 1928, 2256, 2199, 2268, 2180, 2269, 2009, 1828, 1886, 2256, 2119, 2221, 2200, 2159, 2100, 2264, 2232, 2156, 2235, 1818, 1918, 2241};
    vector<int> r = {1638, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4335.434513614845;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> x = {0, -214, -556, -709, -360, -489, -630, 429, -689, -761, 339, 499, -767};
    vector<int> y = {0, 1799, 1725, 1666, 1777, 1746, 1698, 1761, 1676, 1645, 1780, 1743, 1642};
    vector<int> r = {815, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2986.175560472175;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> x = {0, 2289, -666, 590, -570, 845, -1671, 1798, 2260, 713, 821, 2165, 1112, 2486, -1793, 1175, -904, 2499, -1333, -1729};
    vector<int> y = {0, 3321, 3978, 3991, 3994, 3944, 3672, 3612, 3341, 3972, 3949, 3403, 3878, 3177, 3613, 3860, 3930, 3167, 3809, 3645};
    vector<int> r = {2517, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7379.941795273607;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> x = {0, -1078, 105, -1388, 1244, -1139, -939, -1105, -858, 10, -816, -170, -2004, -1682, -323, -72, 469, -650, 835, 417, 600, -1327, 1213, 1446, -1839, -200, 1769, 42, 254, 1634, -1005, 1024, -1419, 1752, -890, 1269, -99, 1755, -185, -467, -1923, -550, -636};
    vector<int> y = {0, 2603, 2817, 2452, 2526, 2576, 2656, 2590, 2682, 2816, 2697, 2813, 1980, 2260, 2799, 2816, 2779, 2742, 2691, 2785, 2752, 2484, 2543, 2419, 2134, 2810, 2192, 2817, 2807, 2293, 2632, 2624, 2433, 2206, 2673, 2514, 2817, 2205, 2810, 2777, 2059, 2761, 2745};
    vector<int> r = {2048, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5310.959926094606;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> x = {0, 1949, -420, 1747, -1236, 1891};
    vector<int> y = {0, 3266, 3780, 3378, 3597, 3301};
    vector<int> r = {2020, 2, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6646.945995768184;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> x = {0, -848, -177, -1789, 750, -596, 394, -1813, 847, -1565, 1228, -235, 109, 184, 620};
    vector<int> y = {0, 4082, 4165, 3766, 4101, 4124, 4149, 3752, 4081, 3862, 3984, 4162, 4167, 4163, 4121};
    vector<int> r = {2327, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7618.958187857942;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> x = {0, 1325, -1598, -1437};
    vector<int> y = {0, 1079, 602, 923};
    vector<int> r = {1653, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3467.0163814809666;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> x = {0, 441, -1589, 221, -1626, 1864, 256, -458, 1854, 232, 1770};
    vector<int> y = {0, 2712, 2241, 2738, 2213, 2017, 2736, 2709, 2027, 2738, 2099};
    vector<int> r = {2119, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5480.275194050439;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> x = {0, -211, 979, -267, -169, 1082, 1938, -1898, 1232, 329, 1513, 1764, -1294, -1195, -605, 1818, 88, -1475, -626, 1038, -1885, 1119, 1551, -1548, -1242, -31, 242, -1326, 702, 697, 1537, -479, 767, -1927, -1347, -232, -593, -477, 69, 1595, 633, 495, 646, -1024, -1660, -1690};
    vector<int> y = {0, 2146, 1921, 2139, 2150, 1866, 946, 1024, 1769, 2131, 1536, 1240, 1724, 1795, 2069, 1158, 2153, 1572, 2064, 1890, 1045, 1844, 1497, 1500, 1764, 2156, 2142, 1700, 2038, 2040, 1512, 2103, 2016, 967, 1684, 2144, 2074, 2102, 2154, 1451, 2062, 2099, 2058, 1898, 1374, 1337};
    vector<int> r = {1947, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4013.4668786418747;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> x = {0, -89, -48, 1203, -1223, 1298, -396, -1175, -402, -594, -318, -933, -75, -1187, -153, -1204, -606, 183, 613, 75, -660, 753, -345, 431, 812, 136, -213, -173, -897, -463, -784, -170, 1051, -560, 28, 1073, -363, -963, -311, -307, -1304, 300, 959, -556, -972, 145, 1255, -1074, -1190, 642};
    vector<int> y = {0, 1493, 1495, 886, 861, 742, 1443, 926, 1439, 1373, 1462, 1169, 1495, 910, 1487, 886, 1365, 1482, 1363, 1493, 1342, 1290, 1456, 1433, 1257, 1490, 1480, 1484, 1196, 1421, 1273, 1485, 1062, 1387, 1496, 1042, 1449, 1142, 1461, 1462, 731, 1464, 1146, 1387, 1136, 1489, 812, 1041, 906, 1349};
    vector<int> r = {1331, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2825.8621267698186;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> x = {0, -328, -859, -314, -194, 733, 149, 551, 696, 539, -570, -803, 719, 168, -463, 46, -136, 773, 332, 200, 60, -123, 491, -711, 461, -485, 191, -159, 424, 53, 174, 154, -60, -210, 620, 362, -82, 480, -55, -343, -444, -178, -609, -375, -614, -151, 188, 9, -785, -677};
    vector<int> y = {0, 1057, 701, 1062, 1092, 832, 1099, 960, 862, 969, 950, 762, 842, 1095, 1006, 1107, 1100, 794, 1057, 1090, 1107, 1101, 994, 850, 1008, 997, 1091, 1096, 1024, 1106, 1094, 1098, 1106, 1088, 917, 1046, 1104, 1000, 1106, 1053, 1016, 1092, 925, 1042, 923, 1098, 1093, 1107, 781, 878};
    vector<int> r = {865, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2107.0302296389327;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> x = {0, -140, -263, 157, 103, -284, 121, 345, -296, -221, -112, -180, -31, 234, 143, 80, -195, 283, -278, 223, 149, 95, -73, -28, 237, -60, -36, 264, -338, 67, -108, 293, 58, -66, 295, 65, 197, 44, -244, -289, -183, 329, -240, 242, 100, -165, -103, -7, -176, 54};
    vector<int> y = {0, 800, 766, 797, 803, 761, 801, 734, 756, 781, 802, 790, 809, 778, 798, 807, 786, 760, 761, 780, 797, 804, 807, 809, 777, 808, 809, 767, 737, 807, 804, 757, 809, 808, 755, 809, 788, 810, 775, 759, 789, 743, 775, 774, 805, 793, 803, 812, 791, 810};
    vector<int> r = {346, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 1277.5176157521198;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> x = {0, -657, 302, 555, -470, -233, -712, 345, 680, 557, 27, 523, 149, 729, 677, -759, -726, 285, -504, -655, 178, 813, 105, -531, 341, 366, 63, 630, 806, 174, -498, 399, -8, 266, 493, -263, -765, 189, 751, 157, 388, 736, -806, 603, 82, 772, -571, -778, 369, 783};
    vector<int> y = {0, 1927, 2014, 1960, 1982, 2022, 1907, 2005, 1919, 1957, 2035, 1969, 2030, 1901, 1920, 1890, 1903, 2016, 1972, 1928, 2029, 1865, 2033, 1967, 2007, 2003, 2035, 1935, 1871, 2029, 1973, 1998, 2035, 2019, 1974, 2018, 1886, 2027, 1893, 2031, 1999, 1897, 1869, 1944, 2033, 1884, 1953, 1882, 2003, 1879};
    vector<int> r = {833, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3174.624761090913;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> x = {0, 834, 1338, 505, -502, 973, 258, -1145, 1173, -875, -560, 1218, 123, 1139, 602, -983, -1004, -911, 72, 434, 523, 826, 1019, -1131, 412, -624, -1007, -735, 731, 150, 1015, 792, 1377, 711, 153, 858, -1184, -291, -790, -1116, -603, 963, -1301, 176, 304, 1067, -296, -1293, -1308, -1001};
    vector<int> y = {0, 3328, 3160, 3396, 3396, 3291, 3422, 3235, 3226, 3320, 3385, 3209, 3431, 3238, 3379, 3287, 3282, 3308, 3432, 3403, 3391, 3331, 3278, 3240, 3409, 3376, 3281, 3354, 3353, 3430, 3278, 3340, 3145, 3359, 3427, 3323, 3221, 3419, 3340, 3246, 3378, 3295, 3176, 3428, 3419, 3262, 3420, 3180, 3172, 3283};
    vector<int> r = {1455, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5445.208498945767;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> x = {0, 103, 260, -229, 519, -385, -103, -149, -309, -447, -400, 367, -263, 219, 128, -157, -376, -348, -279, 110, -494, -172, -210, 454, 121, -48, 302, -9, -353, -429, 273, 443, 402, 476, 351, 478, 15, 246, 493, 435, 393, 288, 161, -79, 37, 7, -390, 308, 71, -297};
    vector<int> y = {0, 2110, 2096, 2099, 2047, 2076, 2110, 2107, 2090, 2064, 2073, 2079, 2094, 2102, 2107, 2105, 2077, 2082, 2094, 2108, 2052, 2104, 2101, 2063, 2108, 2113, 2090, 2112, 2083, 2067, 2093, 2066, 2072, 2059, 2081, 2058, 2111, 2098, 2053, 2067, 2076, 2093, 2107, 2111, 2112, 2111, 2074, 2089, 2111, 2092};
    vector<int> r = {532, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2883.8604902849884;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> x = {0, 2510, -2536, -1895, 340, -713, -861, -1208, 988, 583, 1362, -2125, -1384, 2563, -304, -642, 1576, 1179, -190, 512, 2539, -2109, -1289, 466, 749, 2329, 1021, -2067, 1939, -953, 1116, -122, -265, 113, 1803, 567, 617, 1356, -1076, -1084, 1458, 916, -1755, 2358, -2086, 1814, 2332, -2150, 1754, -2285};
    vector<int> y = {0, 3055, 3034, 3471, 3940, 3888, 3858, 3764, 3829, 3912, 3713, 3335, 3705, 3010, 3943, 3900, 3627, 3775, 3950, 3920, 3033, 3346, 3737, 3927, 3881, 3197, 3821, 3370, 3447, 3836, 3793, 3951, 3944, 3952, 3519, 3915, 3904, 3713, 3805, 3803, 3676, 3845, 3544, 3173, 3359, 3513, 3192, 3318, 3545, 3226};
    vector<int> r = {2591, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7090.249111339366;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> x = {0, 639, -10, 907, -648, 1050, -931, -756, -109, -435, 287, 648, -191, 336, 324, -151, 837, 811, 219, -949, 740, 765, 252, -854, -1083, 493, -556, 971, -374, -774, 1041, -890, 564, 921, 799, -407, 781, -55, 934, 1094, -499, -583, -1087, -263, 123, -654, 127, 1012, -487, -833};
    vector<int> y = {0, 2691, 2764, 2612, 2688, 2556, 2605, 2660, 2764, 2730, 2749, 2689, 2758, 2744, 2746, 2762, 2636, 2645, 2756, 2598, 2663, 2658, 2754, 2629, 2543, 2720, 2709, 2590, 2739, 2654, 2560, 2617, 2706, 2607, 2646, 2735, 2652, 2766, 2602, 2541, 2720, 2704, 2543, 2751, 2763, 2687, 2761, 2572, 2721, 2637};
    vector<int> r = {1198, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4424.693472324946;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> x = {0, 1198, -2479, 1482, -1949, 1678, -87, 2115, 1176, -1316, -686, -1670, 1926, 1081, 275, -1431, -1523, -1321, -581, 647, -235, -2040, 118, -1691, -517, -1189, 279, -2174, -834, 100, 1357, 805, -1929, 1668, 2123, -2072, -2448, 2220, -511, -147, 1041, 390, -799, 754, -461, 75, 2043, 355, 1578, 926};
    vector<int> y = {0, 3257, 2429, 3138, 2873, 3039, 3470, 2752, 3267, 3212, 3404, 3044, 2889, 3299, 3459, 3162, 3120, 3209, 3421, 3410, 3462, 2808, 3468, 3033, 3432, 3261, 3461, 2705, 3371, 3469, 3194, 3377, 2886, 3044, 2747, 2783, 2460, 2670, 3433, 3467, 3311, 3450, 3377, 3388, 3439, 3471, 2805, 3452, 3092, 3345};
    vector<int> r = {2518, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6512.52490797072;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> x = {0, -1403, -871, -1476, -369, 1979, -98, -1826, -2013, -2159, -1965, -1184, 814, -264, -2354, -2241, 826, -619, 132, -2314, 764, 655, -166, 581, -1722, 318, -2072, -2202, -2235, 1289, 192, 1465, -2383, -2257, -500, 1649, -1593, 1946, 900, 2532, -719, 2559, -2435, -1143, 1423, -2544, 52, -613, -2536, 2212};
    vector<int> y = {0, 3391, 3566, 3361, 3653, 3090, 3668, 3185, 3070, 2969, 3098, 3473, 3580, 3660, 2815, 2906, 3576, 3617, 3669, 2848, 3590, 3610, 3666, 3623, 3240, 3657, 3028, 2936, 2911, 3435, 3665, 3364, 2791, 2893, 3637, 3278, 3307, 3111, 3558, 2655, 3598, 2632, 2746, 3489, 3381, 2644, 3669, 3619, 2653, 2929};
    vector<int> r = {2693, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6870.529076829884;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> x = {0, -3947, 3468, -4567, -4848, -3125, -612, 3429, -3095, 4211, -2866, -4401, 2420, -1432, -755, -2223, 3362, 1102, -2199, 1529, 4862, -4055, -1996, -1599, 2686, -1937, 147, 4321, -4393, 2179, -427, 1137, 3708, 79, -20, -4505, -2253, -1050, 364, -3746, 4115, -627, -2371, -1021, -2776, 2877, 1412, 3593, -442, 2575};
    vector<int> y = {0, 2885, 3444, 1743, 624, 3759, 4850, 3483, 3782, 2483, 3960, 2127, 4248, 4672, 4831, 4353, 3548, 4763, 4366, 4642, 504, 2730, 4463, 4619, 4084, 4488, 4885, 2285, 2144, 4376, 4870, 4754, 3186, 4889, 4888, 1896, 4339, 4774, 4874, 3139, 2639, 4849, 4275, 4779, 4022, 3950, 4680, 3316, 4868, 4154};
    vector<int> r = {1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.981525576359;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> x = {0, 906, 3203, -4184, 1511, 3563, 2588, -1898, 3458, 2757, -1343, 1819, -4442, 3028, 596, -2190, -2671, -3896, 1984, -3619, 2892, -209, -4390, -4632, 3314, -1041, -3073, 459, -1299, 873, -4880, 1850, 3854, 4123, 2192, -3101, 3150, -2135, -4096, 3883, 1337, 2425, -1321, -3425, 4282, -4709, 3052, -1331, 3010, 2753};
    vector<int> y = {0, 4804, 3692, 2526, 4649, 3346, 4147, 4505, 3456, 4037, 4700, 4538, 2041, 3837, 4851, 4370, 4093, 2951, 4468, 3285, 3940, 4884, 2150, 1562, 3593, 4777, 3800, 4868, 4713, 4809, 280, 4524, 3007, 2626, 4370, 3780, 3737, 4398, 2666, 2970, 4702, 4243, 4707, 3488, 2356, 1311, 3820, 4704, 3853, 4039};
    vector<int> r = {1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.904222633503;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> x = {0, 3858, 4765, 2502, 1000, -770, 3464, 4721, 3975, -2368, 1672, -2390, -2895, -3429, -4286, 1113, -2556, -2410, -3143, 4880, -1098, 2297, -3196, -311, -112, -67, -1741, 1404, -2785, 2154, 1107, 4515, 2417, -2162, 920, -1931, -1645, 3705, -2503, 3147, 1556, 2712, 741, -2198, 2734, -3481, 692, 325, -805, 4088};
    vector<int> y = {0, 3001, 1091, 4198, 4785, 4828, 3449, 1267, 2844, 4277, 4593, 4263, 3939, 3482, 2349, 4760, 4165, 4254, 3743, 279, 4763, 4314, 3699, 4878, 4886, 4887, 4567, 4681, 4018, 4389, 4762, 1874, 4249, 4384, 4802, 4491, 4604, 3188, 4198, 3742, 4632, 4066, 4832, 4365, 4051, 3431, 4839, 4877, 4822, 2680};
    vector<int> r = {1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4886.048172375048;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> x = {0, 3115, -1786, 979, 4344, 997, -3072, -2813, -58, 259, -2352, -2143, -292, 808, -1971, -1497, 3309, 4614, -2204, 4011, 3746, 1661, -2171, -4613, -2075, 3322, 1100, 844, -136, -418, 2380, -1820, -4854, 2793, 2963, -2557, -4447, 881, 1411, -964, 3369, -3042, 3983, -2821, -2366, 1294, -2114, 3624, 2748, -493};
    vector<int> y = {0, 3766, 4551, 4790, 2242, 4785, 3801, 3997, 4888, 4881, 4285, 4393, 4879, 4820, 4472, 4652, 3598, 1614, 4364, 2793, 3141, 4598, 4378, 1617, 4426, 3585, 4762, 4814, 4887, 4869, 4270, 4536, 574, 4010, 3887, 4167, 2028, 4807, 4680, 4792, 3541, 3826, 2834, 3990, 4277, 4714, 4409, 3280, 4042, 4863};
    vector<int> r = {1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.6291310858705;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> x = {0, -2158, -3866, -3978, -78, 4588, 3795, -887, -2528, -1081, 3323, -1035, 2426, 2813, 3313, 4661, 3097, 3494, -4475, 3002, 2842, 2859, 3571, 1254, -3495, 872, 2023, -2351, -3873, 4682, 3837, 437, -4761, 4301, -1023, -4426, -3696, -2308, -2964, -3398, -1012, -3447, 1609, 1013, -1522, -2438, -4195, -1795, -3627, -3992};
    vector<int> y = {0, 4387, 2991, 2840, 4887, 1685, 3080, 4808, 4182, 4766, 3586, 4776, 4242, 3998, 3594, 1472, 3783, 3417, 1968, 3858, 3975, 3966, 3337, 4726, 3416, 4810, 4451, 4286, 2983, 1405, 3029, 4869, 1107, 2323, 4779, 2076, 3197, 4310, 3888, 3513, 4781, 3464, 4615, 4781, 4645, 4236, 2510, 4547, 3278, 2821};
    vector<int> r = {1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4886.093126625552;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> x = {0, -4796, 4848, -1717, 29, -4539, 1519, 1258, 2673, 2268, -3376, -2458, -2526, 4409, -4682, -4806, -1071, -3514, 1272, -2730, 1840, 225, -4526, -4063, -3641, 3886, -2582, 2114, 4278, 4309, 3488, -607, 2313, -746, -3584, 1806, -4265, -3232, -4208, 2468, 1400, 23, 1861, -3210, -2802, -2870, -4507, 1135, -1389, 2223};
    vector<int> y = {0, 944, 623, 4575, 4887, 1815, 4645, 4724, 4093, 4329, 3534, 4224, 4184, 2112, 1404, 891, 4769, 3399, 4718, 4056, 4529, 4884, 1847, 2717, 3261, 2964, 4150, 4406, 2365, 2308, 3426, 4849, 4306, 4831, 3324, 4541, 2388, 3666, 2486, 4219, 4685, 4887, 4519, 3687, 4006, 3957, 1892, 4756, 4686, 4354};
    vector<int> r = {1, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.904554761026;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> x = {0, -1590, -1527, -917, -1959, -902, -4424, -3372, 4739, -4388, 4402, 3036, 762, 2257, 3001, 2341, -2865, 2496, -2377, -3680, -3236, 1603, 2479, 3410, 2694, 1431, -2931, -4864, -2618, 3335, 300, 4292, 4506, -1519, 1185, 4720, -3514, -2824, 2406, 3697, 3086, 1411, -1199, -3511, 2315, 4545, -967, -487, -3867, 2934};
    vector<int> y = {0, 4621, 4644, 4802, 4479, 4804, 2078, 3538, 1198, 2154, 2124, 3830, 4829, 4336, 3859, 4292, 3962, 4202, 4272, 3217, 3664, 4619, 4214, 3503, 4078, 4675, 3913, 485, 4127, 3573, 4878, 2338, 1895, 4647, 4741, 1272, 3398, 3989, 4255, 3197, 3790, 4681, 4739, 3401, 4306, 1799, 4792, 4864, 2989, 3911};
    vector<int> r = {1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4886.074198057215;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> x = {0, -2555, 2220, 709, -753, 582, -4359, 4250, -4290, -2305, -2065, -1221, -3899, 1672, -1691, -2356, 505, -2273, 4625, 1877, 1122, -2631, -741, -4500, 261, -4565, -823, -3258, 4353, -3196, 3778, -4123, -2033, 3424, 1760, -4718, 3473, 1138, -3083, -848, -4118, 2447, 3960, -1112, -2115, 2800, 2855, -3562, -3996, 1323};
    vector<int> y = {0, 4166, 4355, 4836, 4831, 4852, 2213, 2415, 2342, 4311, 4429, 4734, 2948, 4592, 4586, 4282, 4863, 4327, 1582, 4514, 4757, 4120, 4830, 1908, 4881, 1748, 4818, 3643, 2224, 3698, 3101, 2624, 4446, 3488, 4561, 1279, 3440, 4755, 3793, 4812, 2633, 4233, 2866, 4759, 4406, 4007, 3968, 3349, 2814, 4706};
    vector<int> r = {1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.719484199484;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> x = {0, 50, 350, 4734, 3392, 2596, 4382, 2847, -3010, -1779, -4397, 4456, 2135, 1683, 1118, -1213, 3181, -4526, -2234, 3624, 2724, 4540, -3769, -4742, -2624, -4208, 4236, -322, -4610, 141, 4324, 4188, -4415, -3522, 167, -2062, 3497, -4571, -4046, -3262, -713, 3929, 3979, -3797, -859, 4785, -2894, 179, -3214, -4068};
    vector<int> y = {0, 4888, 4874, 1217, 3518, 4141, 2165, 3974, 3851, 4552, 2136, 2010, 4397, 4588, 4757, 4736, 3711, 1845, 4346, 3280, 4058, 1811, 3112, 1186, 4123, 2487, 2439, 4879, 1626, 4885, 2280, 2520, 2097, 3388, 4885, 4433, 3416, 1733, 2744, 3639, 4836, 2907, 2838, 3077, 4812, 997, 3939, 4884, 3681, 2709};
    vector<int> r = {1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.81282699012;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> x = {0, 4878, -4408, -3383, -3953, 3804, -1764, 2148, 1134, -1169, -660, 2672, 2191, 1727, -2399, -2514, -1296, 4101, 4110, -2496, -329, -2715, -478, 1534, -371, 3076, 2866, -1850, 790, 3108, 3447, -245, -2138, -3940, 519, -3867, 2792, 463, 1251, 800, 2582, -4475, 2435, -810, -3761, 2048, 656, -1088, -3075, 2074};
    vector<int> y = {0, 313, 2114, 3529, 2874, 3068, 4557, 4390, 4756, 4748, 4842, 4093, 4368, 4572, 4258, 4192, 4715, 2659, 2647, 4202, 4878, 4065, 4866, 4642, 4875, 3799, 3959, 4525, 4823, 3772, 3465, 4881, 4397, 2893, 4860, 2990, 4011, 4865, 4726, 4821, 4150, 1967, 4238, 4820, 3123, 4439, 4844, 4766, 3799, 4427};
    vector<int> r = {1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.707259094432;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> x = {0, -3821, -1165, -4596, -3490, -1655, -260, -2121, 2911, -3130, -2706, 2194, -4257, 4063, 1525, 3900, 888, 2871, -4239, 599, -1844, -4870, 4852, -4777, 1511, -2716, -4486, -3866, 3244, 4237, -1007, 1920, 925, 3981, 1306, -1367, -2229, -708, 1895, 169, 2755, 425, 1242, 1436, 1691, -3188, -4652, 4605, -4199, -3891};
    vector<int> y = {0, 3048, 4748, 1665, 3423, 4600, 4883, 4404, 3927, 3754, 4070, 4369, 2403, 2719, 4644, 2948, 4807, 3957, 2433, 4851, 4527, 420, 592, 1036, 4648, 4063, 1940, 2990, 3657, 2437, 4782, 4495, 4800, 2836, 4710, 4693, 4350, 4837, 4506, 4885, 4037, 4871, 4726, 4671, 4586, 3704, 1500, 1640, 2502, 2959};
    vector<int> r = {1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.973189525812;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> x = {0, -3832, -3905, -1480, -1115, 1051, -743, -3635, 4293, -1846, -99, -3688, 542, 547, -2657, -1950, -2800, -2934, -667, 4829, -4455, -208, 956, 4020, 2804, 4438, -3025, 4647, -4204, -1961, 2306, -2101, -3257, 609, -4826, 966, -4132, -3595, -1412, -4062, -446, 4527, -4391, 1171, -4553, 1355, -3052, 2049, 3251, 1138};
    vector<int> y = {0, 3036, 2941, 4660, 4759, 4773, 4833, 3267, 2339, 4525, 4888, 3208, 4858, 4857, 4102, 4481, 4008, 3911, 4842, 758, 2011, 4882, 4792, 2780, 4005, 2049, 3840, 1515, 2493, 4476, 4310, 4412, 3644, 4849, 777, 4792, 2610, 3311, 4679, 2720, 4868, 1843, 2148, 4747, 1779, 4697, 3818, 4437, 3651, 4753};
    vector<int> r = {1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4886.065083257784;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> x = {0, -661, -492, -4245, 1546, 3422, -4290, 4044, 7, 1500, 1238, -3082, 3165, -1905, -4627, -2800, -1268, 3301, -3305, -3537, -2356, -3092, 187, 2507, -2667, 123, -4621, 538, -2954, 4684, -394, -689, -1675, -3310, -1909, 1400, 4288, -1352, -438, 2532, -546, -588, -3958, 3014, 974, 44, 4230, 3007, -1059, -2750};
    vector<int> y = {0, 4842, 4863, 2423, 4636, 3489, 2342, 2745, 4888, 4651, 4727, 3793, 3725, 4500, 1576, 4007, 4722, 3604, 3601, 3373, 4283, 3784, 4883, 4195, 4097, 4885, 1595, 4858, 3896, 1397, 4872, 4840, 4591, 3596, 4500, 4683, 2348, 4698, 4867, 4180, 4858, 4852, 2868, 3847, 4790, 4889, 2448, 3853, 4772, 4041};
    vector<int> r = {1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.62731501475;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> x = {0, 801, 1960, -3416, -1308, 1680, -3388, -4705, -1993, 3845, 2537, -3976, 2453, -3601, 4741, -4189, 2944, -990, 3413, -2124, -2460, 388, 444, -2018, 1134, 852, 2666, 2722, 1268, -2149, 3461, -2012, -1005, -591, -138, -2354, 3684, -2062, -3046, 3118, 589, -761, -2624, -1236, 1000, 4406, 4659, -1311, 4088, -746};
    vector<int> y = {0, 4822, 4476, 3496, 4711, 4589, 3523, 1325, 4463, 3020, 4179, 2844, 4228, 3304, 1190, 2518, 3902, 4786, 3498, 4402, 4223, 4874, 4868, 4451, 4753, 4814, 4097, 4061, 4720, 4391, 3452, 4454, 4784, 4852, 4886, 4284, 3211, 4433, 3822, 3765, 4852, 4828, 4125, 4730, 4783, 2117, 1478, 4708, 2678, 4830};
    vector<int> r = {1, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.753087732163;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> x = {0, 3007, 3937, -785, -4799, 4782, 4603, -3655, 223, 3325, 2258, 4536, 2913, -2014, -4789, 2978, 318, 2088, -77, -2836, 870, -31, -4018, -249, -3681, -4308, 2193, -1778, -1665, -944, 2725, 1914, -2981, 1807, 4714, -1070, -1774, 1163, 570, 4501, -397, -2802, 3934, -2476, -4071, -3176, -4612, 4794, 2199, -682};
    vector<int> y = {0, 3854, 2896, 4824, 928, 1012, 1645, 3246, 4883, 3583, 4335, 1822, 3925, 4454, 980, 3875, 4877, 4420, 4887, 3981, 4811, 4888, 2782, 4882, 3215, 2311, 4368, 4554, 4597, 4797, 4059, 4499, 3875, 4543, 1294, 4768, 4554, 4747, 4855, 1907, 4872, 4005, 2900, 4214, 2707, 3716, 1620, 954, 4366, 4839};
    vector<int> r = {1, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.880637638293;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> x = {0, -1726, 3539, 2703, 1637, 549, -2956, -3993, -964, 324, 2603, 299, -4117, -4843, -4074, 2881, 1922, -4475, -215, -2187, 1254, 3561, 1596, 820, -2307, -4671, 1357, 878, 4577, 650, -1864, 182, -939, -4437, 238, -1751, -2904, 1484, -4483, -4701, 3626, -44, -3213, 3632, 1795, 3985, 1020, -4080, -3225, 2491};
    vector<int> y = {0, 4572, 3372, 4073, 4607, 4857, 3894, 2821, 4791, 4876, 4138, 4880, 2635, 663, 2701, 3949, 4493, 1966, 4884, 4372, 4724, 3347, 4621, 4817, 4310, 1441, 4697, 4807, 1716, 4843, 4519, 4886, 4796, 2049, 4881, 4565, 3933, 4658, 1947, 1340, 3278, 4887, 3682, 3270, 4546, 2829, 4779, 2693, 3672, 4205};
    vector<int> r = {1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.821891217886;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> x = {0, 660, 1746, -819, 62, -4012, 4854, 3646, -2100, 4850, 4785, 1688, -4593, -560, 2042, 85, -4147, 513, -1984, -1339, -1351, -2273, 2852, -623, 3046, -1644, 1802, 4828, -4028, -3381, 2074, 4058, 3842, 586, -182, 4784, -2953, 4275, -4055, 4666, 4564, 4766, 4201, -3478, -3893, -2752, -93, -1082, -533, -367};
    vector<int> y = {0, 4843, 4566, 4818, 4888, 2791, 576, 3255, 4413, 609, 997, 4588, 1673, 4857, 4441, 4888, 2586, 4860, 4466, 4702, 4696, 4327, 3970, 4848, 3823, 4603, 4545, 763, 2768, 3529, 4425, 2724, 3021, 4854, 4883, 1002, 3894, 2371, 2729, 1457, 1750, 1086, 2499, 3434, 2955, 4040, 4887, 4766, 4858, 4876};
    vector<int> r = {1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.982081956474;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> x = {0, 1298, 1846, -1223, 1755, 3813, -3369, -3302, 3585, -3668, 3354, -4329, 506, -3200, -1629, -2599, 2698, 4731, -220, 684, 1926, -4751, 340, -2, 2502, 3262, -2375, 2265, -790, 537, -231, -3913, -2432, 4469, 1446, 1097, 693, 2255, -3466, -2267, -858, 4763, 4302, -731, 4317, -3460, 833, -386, 3826, -168};
    vector<int> y = {0, 4712, 4527, 4731, 4561, 3059, 3543, 3606, 3322, 3232, 3555, 2271, 4863, 3696, 4609, 4141, 4075, 1230, 4883, 4839, 4493, 1148, 4877, 4888, 4199, 3639, 4273, 4331, 4824, 4858, 4882, 2930, 4241, 1981, 4669, 4764, 4837, 4337, 3448, 4331, 4813, 1098, 2321, 4833, 2292, 3454, 4818, 4873, 3042, 4884};
    vector<int> r = {1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4886.142611998851;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> x = {0, -3317, -4257, -31, 590, -837, 4144, 2975, -1334, 1020, -1964, -1154, -1205, -3825, 3165, -3023, -2069, -696, 2649, -531, -2249, 548, -3487, -2636, 2702, -9, 4551, 4, -4528, -3693, -1169, -411, -4427, 2830, 3068, 915, 1586, 3422, 1204, 2309, -3698, 2693, -2585, -2975, -4228, 2457, 3623, 637, 2870, 2239};
    vector<int> y = {0, 3589, 2403, 4886, 4852, 4815, 2592, 3877, 4702, 4779, 4475, 4750, 4736, 3042, 3725, 3840, 4429, 4837, 4107, 4858, 4340, 4858, 3426, 4115, 4073, 4887, 1784, 4887, 1841, 3203, 4746, 4871, 2073, 3984, 3804, 4802, 4624, 3490, 4737, 4309, 3196, 4079, 4148, 3880, 2452, 4225, 3282, 4845, 3957, 4346};
    vector<int> r = {1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.839340629319;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> x = {0, 4763, 977, -2894, 3441, -1826, -900, -2075, -1597, 1343, 2080, 4288, 1541, 2010, 209, -2017, 4886, -4442, -727, 2960, 1485, -3509, -3637, -2801, -1295, -4241, 2933, -1155, -1787, -2723, 4446, 3262, -1130, 1097, 4453, 3878, -2637, -508, -3942, -493, 4222, 3696, -1377, -2386, 619, 3524, -1415, -355, -615, -231};
    vector<int> y = {0, 1099, 4789, 3938, 3470, 4533, 4805, 4426, 4621, 4701, 4423, 2348, 4639, 4456, 4883, 4452, 140, 2040, 4834, 3891, 4658, 3402, 3267, 4005, 4713, 2431, 3911, 4750, 4548, 4058, 2032, 3641, 4754, 4762, 2016, 2975, 4116, 4862, 2891, 4864, 2462, 3198, 4689, 4266, 4848, 3386, 4678, 4875, 4850, 4882};
    vector<int> r = {1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4885.804083224177;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> x = {0, 2576, -1441, -3224, 3598, 2973, -603, -2488, -2873, -3544, -825, -369, -3692, 1669, -2632, 860, 341, -1862, -48, -1137, -3855, 1441, 3420, 3894, -2163, 3334, 2132, 3768, 3999, -3745, -216, -3976, -3340, -2546, 1819, 3454, -2417, -3460, -3113, -711, 1834, -2322, -3303, 3970, 1285, -3938, 1157, 3164, -1000, 3698};
    vector<int> y = {0, 3062, 3730, 2367, 1748, 2675, 3955, 3133, 2784, 1853, 3913, 3983, 1539, 3634, 3012, 3906, 3985, 3539, 3998, 3834, 1066, 3730, 2074, 914, 3364, 2210, 3384, 1343, 91, 1404, 3994, 438, 2200, 3085, 3561, 2016, 3188, 2008, 2511, 3938, 3555, 3257, 2257, 488, 3787, 700, 3829, 2446, 3873, 1526};
    vector<int> r = {1, 284, 218, 67, 170, 250, 69, 34, 188, 111, 95, 66, 132, 122, 43, 267, 212, 192, 87, 101, 280, 34, 19, 239, 125, 139, 227, 125, 135, 9, 60, 181, 29, 31, 1, 31, 31, 58, 88, 2, 11, 1, 7, 122, 113, 14, 3, 32, 35, 57};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3719.023157657618;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> x = {0, -1078, -2871, 1108, 2687, -3802, 116, 3084, 3584, 3941, 821, 2258, 1977, -73, -2097, -3611, 654, -3258, 3815, 3992, 3753, -610, 1411, 3189, -1614, -3399, 1598, -3040, -3909, -2479, 2543, -1839, -3539, 2880, -3996, -2726, 3336, -371, 3002, 373, 1682, -3638, 3881, -210, 876, -2925, 2404, -3441, -1491, -3975};
    vector<int> y = {0, 3853, 2786, 3843, 2962, 1242, 3998, 2546, 1775, 686, 3914, 3302, 3477, 3998, 3407, 1720, 3948, 2320, 1203, 252, 1383, 3952, 3743, 2414, 3661, 2109, 3667, 2599, 847, 3140, 3086, 3553, 1865, 2777, 180, 2926, 2207, 3984, 2645, 3983, 3629, 1661, 969, 3994, 3904, 2728, 3198, 2038, 3712, 447};
    vector<int> r = {1, 291, 20, 163, 68, 275, 109, 55, 263, 47, 24, 17, 195, 45, 122, 39, 125, 205, 59, 260, 120, 106, 149, 95, 86, 29, 11, 146, 114, 259, 107, 32, 120, 144, 63, 23, 114, 100, 25, 148, 70, 10, 28, 49, 17, 8, 55, 43, 18, 87};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3711.5324307342057;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> x = {0, -3449, -277, -1441, 2848, 1238, 245, 1977, -892, -2366, 3449, 3788, -1987, -2645, -1832, -3166, 653, 3981, 2434, -2907, -667, 2989, 3230, -2715, 3098, 3635, -2978, -3807, -1065, -3952, 16, -1014, -1161, 914, 362, 845, 3910, -3727, 100, 3700, -3882, 2670, 879, -3626, -2177, 1025, -1699, -3335, 457, 1149};
    vector<int> y = {0, 2024, 3991, 3731, 2810, 3803, 3993, 3477, 3899, 3226, 2027, 1285, 3472, 3001, 3555, 2445, 3947, 389, 3173, 2749, 3945, 2658, 2359, 2936, 2530, 1668, 2669, 1226, 3856, 619, 4001, 3868, 3827, 3895, 3984, 3909, 845, 1453, 3999, 1519, 966, 2978, 3901, 1688, 3357, 3867, 3620, 2209, 3975, 3833};
    vector<int> r = {1, 130, 201, 247, 155, 91, 79, 240, 69, 132, 268, 104, 88, 14, 58, 230, 149, 2, 254, 40, 155, 2, 78, 71, 117, 28, 42, 175, 25, 137, 50, 2, 29, 6, 27, 3, 204, 42, 20, 112, 56, 12, 9, 175, 56, 70, 33, 60, 29, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3734.1121346958935;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> x = {0, -2462, -1433, 2501, 519, 2868, 3642, -1867, -494, 1120, 1616, -954, 880, -3561, 3406, -3742, 3779, 84, -3099, -2669, 2213, -3283, 2001, -2193, -1718, 990, 1251, -1944, -41, -361, 3885, -3915, 3445, -181, 3225, -3839, 2085, -288, 2304, -3681, -1789, -3433, -2031, 3981, 1967, -3617, -3526, -2820, 1901, -2290};
    vector<int> y = {0, 3153, 3734, 3122, 3966, 2787, 1653, 3537, 3969, 3840, 3659, 3885, 3902, 1823, 2099, 1413, 1312, 3999, 2530, 2980, 3332, 2285, 3462, 3344, 3612, 3874, 3798, 3495, 3998, 3982, 952, 821, 2034, 3997, 2366, 1123, 3413, 3990, 3271, 1565, 3579, 2052, 3445, 389, 3483, 1708, 1889, 2836, 3520, 3279};
    vector<int> r = {1, 171, 99, 134, 260, 279, 122, 41, 111, 33, 227, 291, 53, 39, 46, 33, 140, 45, 169, 60, 39, 84, 11, 14, 32, 9, 101, 39, 72, 5, 215, 4, 27, 22, 269, 77, 46, 26, 49, 38, 37, 165, 39, 271, 17, 68, 14, 76, 21, 16};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3710.9885245146925;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> x = {0, 1143, 279, 1752, -2578, -1174, -860, -504, 2361, 3692, -1936, 2829, -3426, 3115, -134, -1446, -2770, -3996, -3887, -2972, -464, -3669, -710, 3358, -273, 3958, 2989, -3966, -3935, -2326, 3521, -2227, 1414, -1775, -1492, -3171, 731, 3866, 3280, -2105, 2701, -562, -3803, 2063, -3577, -1823, -19, -3742, 2581, -1505};
    vector<int> y = {0, 3835, 3990, 3596, 3058, 3825, 3905, 3970, 3229, 1540, 3501, 2827, 2065, 2510, 3997, 3730, 2886, 179, 945, 2678, 3972, 1593, 3938, 2174, 3990, 579, 2659, 520, 717, 3256, 1898, 3322, 3742, 3583, 3711, 2437, 3931, 1025, 2290, 3403, 2951, 3960, 1239, 3427, 1789, 3561, 3999, 1413, 3057, 3706};
    vector<int> r = {1, 236, 165, 237, 228, 236, 47, 15, 149, 225, 101, 89, 229, 36, 44, 23, 23, 84, 6, 131, 10, 79, 96, 66, 70, 288, 130, 116, 44, 80, 41, 26, 8, 22, 1, 31, 146, 75, 48, 27, 14, 16, 160, 39, 6, 19, 56, 2, 123, 10};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3713.6965443502263;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> x = {0, -3241, 2575, -224, -1047, -3065, 893, -2081, 2851, -3672, -2889, -839, 1765, 3850, 149, -2614, 959, -1650, 3215, 3569, 1032, 2338, -1366, -3382, 573, -1414, 1322, 3459, -614, -1201, 3971, -3558, -3931, 104, -348, 2115, -2446, -1305, -106, -3734, 2949, 372, 268, 1992, -735, -2415, 3640, 2786, -950, -781};
    vector<int> y = {0, 2343, 3062, 3992, 3859, 2571, 3898, 3417, 2806, 1585, 2766, 3910, 3588, 1084, 3998, 3028, 3882, 3645, 2380, 1806, 3866, 3245, 3758, 2136, 3958, 3742, 3776, 2009, 3954, 3815, 482, 1829, 741, 3998, 3986, 3394, 3165, 3781, 3998, 1435, 2703, 3984, 3991, 3468, 3932, 3188, 1659, 2870, 3886, 3922};
    vector<int> r = {1, 141, 189, 68, 59, 118, 25, 255, 36, 127, 92, 27, 220, 287, 26, 142, 10, 186, 177, 82, 3, 97, 7, 63, 118, 6, 147, 6, 85, 69, 286, 27, 255, 2, 41, 87, 15, 12, 20, 3, 42, 35, 37, 34, 36, 15, 28, 41, 34, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3714.265409669171;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> x = {0, 444, 1672, 2688, -2221, -2422, -3768, 1916, 1293, -275, -3059, -1288, -3539, -1869, -700, 1462, 2077, -2752, 3528, 3691, 2400, 1119, 3957, -1627, 1015, 800, 3114, -3364, 1790, -3976, 728, 3397, -545, -3659, -2504, -5, 2885, 3219, -933, -3294, -463, 899, -3940, 3826, -618, 3867, -3904, 2179, 1638, -3849};
    vector<int> y = {0, 3977, 3633, 2962, 3326, 3182, 1342, 3510, 3785, 3991, 2578, 3787, 1864, 3537, 3939, 3724, 3418, 2904, 1884, 1543, 3200, 3840, 585, 3654, 3870, 3918, 2510, 2164, 3577, 437, 3933, 2111, 3963, 1615, 3120, 3999, 2770, 2375, 3891, 2271, 3974, 3897, 690, 1168, 3953, 1022, 872, 3356, 3651, 1088};
    vector<int> r = {1, 224, 9, 114, 190, 50, 226, 72, 93, 90, 168, 159, 189, 187, 26, 14, 1, 170, 132, 221, 222, 58, 247, 71, 4, 16, 142, 69, 59, 187, 29, 106, 14, 56, 19, 163, 133, 3, 138, 20, 55, 65, 58, 10, 1, 97, 115, 4, 10, 17};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3754.580171315811;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> x = {0, -2873, 3396, 111, 2030, 2632, -3211, 3768, 2908, -2495, -182, -1987, -429, 2380, -1386, -3893, 1029, -3469, -3023, -286, -897, 1571, -3630, 3544, 3177, -2268, -165, -1603, 2147, 3927, 535, -3970, 1939, 646, -1230, -3726, -1530, 2755, -758, -2773, -1057, 3981, 2497, -3696, 1271, -3853, -664, 452, -1734, -3569};
    vector<int> y = {0, 2784, 2115, 3999, 3448, 3013, 2384, 1342, 2745, 3126, 3996, 3471, 3978, 3216, 3752, 918, 3865, 1992, 2621, 3991, 3897, 3678, 1680, 1854, 2430, 3295, 3996, 3665, 3376, 761, 3965, 489, 3497, 3947, 3806, 1456, 3696, 2900, 3927, 2882, 3858, 390, 3124, 1530, 3794, 1075, 3945, 3974, 3604, 1805};
    vector<int> r = {1, 97, 207, 240, 10, 102, 280, 272, 117, 268, 8, 267, 104, 23, 86, 130, 177, 174, 8, 7, 61, 260, 127, 41, 158, 2, 5, 21, 95, 187, 19, 284, 82, 69, 73, 18, 28, 19, 40, 35, 37, 116, 69, 25, 30, 14, 30, 6, 10, 7};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3717.573546325852;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> x = {0, -2768, -2097, 2147, 2828, -2311, -996, 675, -35, 1120, -1830, -2975, 3955, -3305, 3807, -3882, 2479, 3205, 3723, 3997, 3636, 3419, -3651, -3567, 3933, -821, 3592, 3973, 1713, -490, -3954, -1408, -2611, -3062, -666, 1400, -3736, -347, -445, -1264, -3998, 416, 3168, 3890, -587, -2247, -3787, 3851, 3535, 3751};
    vector<int> y = {0, 2888, 3407, 3374, 2828, 3265, 3874, 3941, 3999, 3840, 3556, 2675, 597, 2254, 1229, 963, 3140, 2393, 1464, 155, 1667, 2077, 1633, 1811, 730, 3915, 1761, 465, 3614, 3969, 605, 3743, 3031, 2574, 3945, 3748, 1428, 3986, 3975, 3794, 128, 3979, 2442, 930, 3957, 3310, 1288, 1082, 1873, 1389};
    vector<int> r = {1, 130, 9, 231, 295, 71, 155, 205, 294, 204, 289, 61, 39, 204, 97, 199, 109, 44, 23, 172, 86, 126, 19, 168, 67, 23, 2, 29, 191, 1, 110, 71, 81, 56, 32, 34, 41, 9, 17, 73, 32, 12, 14, 87, 42, 7, 107, 7, 85, 57};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3705.9484036599492;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> x = {0, -3900, -1747, 2663, 1952, -763, 792, 1478, -3153, 3603, -3594, 3519, -3799, -2780, -1239, 3796, 1716, -228, 469, -2175, -40, 2413, 2210, 2968, -354, 1159, -2716, -3869, 3180, 220, -2391, -3931, -2999, -2843, -3409, -3989, -2507, 1212, 3432, -3268, -1486, 3294, -3316, -579, -3960, 90, 3958, -2300, 3990, 3910};
    vector<int> y = {0, 889, 3598, 2984, 3492, 3926, 3920, 3717, 2461, 1739, 1755, 1901, 1251, 2875, 3804, 1263, 3612, 3992, 3971, 3356, 3999, 3190, 3335, 2681, 3983, 3828, 2935, 1014, 2427, 3995, 3205, 740, 2648, 2815, 2092, 298, 3117, 3812, 2056, 2308, 3715, 2269, 2236, 3958, 564, 3999, 577, 3273, 282, 843};
    vector<int> r = {1, 88, 166, 96, 112, 145, 211, 198, 78, 122, 193, 54, 154, 11, 208, 284, 6, 80, 60, 119, 51, 71, 88, 271, 38, 38, 48, 17, 47, 28, 50, 9, 122, 31, 104, 48, 67, 3, 30, 23, 52, 112, 53, 31, 155, 60, 127, 2, 23, 63};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3718.169001595604;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> x = {0, -1621, 3211, -2196, -3995, -3844, -2871, -1375, 1177, 2099, -512, 462, -1017, 2385, 3021, 1717, 3658, 3786, 2836, 3561, 2693, 3913, -3496, 1505, 2526, 0, -2565, -3218, -1405, -1268, 3959, -809, 3399, -3944, -3553, -3375, -3279, 716, -1876, 1059, -2647, 950, 813, 3978, 3638, 3868, -3696, 3334, 2572, 2475};
    vector<int> y = {0, 3656, 2384, 3344, 199, 1107, 2786, 3755, 3821, 3405, 3967, 3973, 3868, 3211, 2622, 3613, 1617, 1290, 2821, 1821, 2958, 830, 1943, 3705, 3103, 4000, 3070, 2375, 3746, 3794, 572, 3917, 2108, 666, 1836, 2148, 2292, 3936, 3534, 3858, 2999, 3885, 3916, 420, 1663, 1020, 1530, 2209, 3063, 3143};
    vector<int> r = {1, 228, 75, 299, 297, 174, 278, 16, 50, 258, 185, 242, 198, 82, 143, 47, 39, 249, 114, 161, 53, 150, 52, 173, 27, 113, 39, 65, 2, 60, 6, 5, 19, 55, 46, 85, 21, 9, 40, 9, 26, 29, 67, 34, 7, 5, 88, 31, 30, 12};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3703.1648772102853;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> x = {0, 3547, 3776, -2742, 47, -1063, 941, 1988, 2646, -514, 419, -1324, -2049, -3600, 3144, -2482, -148, 3338, -3454, 2508, 2300, -3807, 1212, -3255, 1531, -3059, -818, -1676, 3995, -2375, -3910, 3891, 2937, -3363, -3982, -1787, -1530, 3834, -329, 2791, 3655, -3724, 2439, -2918, -3764, 3042, -3426, -3899, -3869, 1727};
    vector<int> y = {0, 1848, 1319, 2912, 4000, 3855, 3889, 3470, 2999, 3967, 3978, 3776, 3436, 1743, 2474, 3136, 3997, 2203, 2018, 3117, 3274, 1228, 3812, 2325, 3695, 2578, 3915, 3632, 199, 3220, 843, 928, 2715, 2164, 380, 3579, 3695, 1140, 3985, 2864, 1626, 1460, 3170, 2735, 1352, 2597, 2065, 892, 1017, 3607};
    vector<int> r = {1, 166, 136, 194, 139, 120, 211, 284, 73, 171, 102, 113, 221, 199, 75, 48, 46, 189, 17, 4, 75, 72, 65, 79, 161, 196, 105, 69, 292, 74, 18, 70, 83, 94, 44, 25, 42, 35, 13, 64, 36, 37, 76, 1, 30, 56, 12, 26, 26, 10};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3709.524171055057;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> x = {0, 3409, -311, 1117, -897, -3885, -1984, 1957, -3287, 77, -1690, 3982, -3007, -2447, 704, 1568, -1422, -1737, -574, 3804, 416, 2738, -2823, 532, -3498, 2263, -2199, 3887, -178, 1774, 2431, -3678, 3704, -1168, 3952, -1640, 805, 3759, -1564, 3056, 325, -2160, -459, 3682, 2528, -2678, -1493, -2848, 3159, -3441};
    vector<int> y = {0, 2093, 3987, 3840, 3899, 953, 3474, 3489, 2280, 3999, 3625, 379, 2638, 3164, 3937, 3681, 3738, 3603, 3957, 1237, 3979, 2917, 2834, 3965, 1941, 3298, 3341, 945, 3997, 3586, 3177, 1572, 1511, 3825, 618, 3650, 3918, 1367, 3681, 2582, 3986, 3366, 3973, 1563, 3101, 2972, 3710, 2810, 2454, 2040};
    vector<int> r = {1, 287, 64, 251, 210, 238, 99, 188, 213, 190, 27, 181, 174, 259, 30, 199, 70, 10, 21, 22, 31, 250, 10, 79, 44, 56, 16, 231, 65, 3, 63, 212, 23, 39, 43, 25, 50, 12, 9, 94, 41, 15, 33, 12, 27, 1, 5, 23, 41, 59};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3714.8121640445006;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> x = {0, -716, 378, 1852, -3740, 1433, 2482, 3074, 2740, -2493, 3414, -1243, -3962, -3117, -291, 861, -1939, -3474, -2001, 2254, 3810, -2745, -3576, 3632, 2908, -2148, -2258, 2444, 2540, 3972, 50, -3999, -1814, 3287, -3874, -2084, -5, -3323, -2820, 2048, -1863, -3608, 3898, -1647, 1156, -903, -3409, -2925, 2673, 3496};
    vector<int> y = {0, 3935, 3982, 3545, 1419, 3735, 3136, 2560, 2915, 3128, 2084, 3803, 549, 2507, 3991, 3906, 3497, 1983, 3465, 3306, 1220, 2911, 1792, 1675, 2746, 3374, 3302, 3165, 3089, 474, 4000, 88, 3564, 2279, 995, 3415, 4000, 2228, 2838, 3437, 3541, 1728, 898, 3646, 3830, 3898, 2094, 2728, 2975, 1944};
    vector<int> r = {1, 124, 233, 121, 253, 256, 7, 145, 21, 216, 19, 280, 210, 203, 244, 237, 4, 112, 64, 163, 283, 14, 2, 144, 85, 44, 20, 18, 66, 95, 27, 209, 37, 134, 40, 23, 4, 142, 46, 75, 5, 61, 20, 70, 7, 9, 14, 18, 66, 18};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3719.133381764001;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> x = {0, 1629, 1182, 3587, 551, -1636, 2394, -2896, -1367, 95, -2576, 3031, -749, -3206, 3968, -1969, -1189, 1920, 3843, -3718, -3915, 3397, 1462, -3495, -2440, 852, -3990, 3992, -2157, -1799, -3697, -262, 1754, 2115, 2681, -380, 3287, 3213, 2850, -2215, -3625, -2288, -3346, 682, -1484, -3778, -2343, 2076, -3673, 2167};
    vector<int> y = {0, 3653, 3821, 1769, 3963, 3651, 3205, 2761, 3759, 3998, 3061, 2609, 3928, 2391, 505, 3482, 3819, 3508, 1108, 1475, 819, 2112, 3723, 1946, 3170, 3909, 282, 253, 3367, 3572, 1526, 3991, 3594, 3395, 2969, 3983, 2280, 2382, 2807, 3331, 1692, 3280, 2193, 3943, 3715, 1314, 3243, 3420, 1583, 3362};
    vector<int> r = {1, 91, 194, 272, 61, 139, 203, 230, 87, 289, 107, 196, 300, 128, 191, 141, 93, 146, 285, 39, 164, 78, 90, 201, 27, 111, 165, 50, 11, 1, 12, 44, 27, 17, 142, 3, 22, 23, 50, 7, 50, 11, 64, 40, 3, 95, 39, 16, 1, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3700.3438581546375;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> x = {0, -2233, 3410, 956, -3117, -3838, 70, 2736, 1657, -3642, -2885, 1440, 2183, 524, -762, -1848, 1772, -1583, -2755, -1122, 3672, 1737, 3078, -3897, -3446, 1215, -2575, -219, 3914, 905, -1959, 3792, -2508, 1548, -3969, -2974, -3321, -3680, -3048, 1854, 2447, -945, 3983, 202, 1077, 2520, -454, 3550, -3930, -3766};
    vector<int> y = {0, 3320, 2092, 3884, 2508, 1126, 3998, 2917, 3640, 1653, 2771, 3732, 3350, 3966, 3926, 3548, 3586, 3673, 2900, 3841, 1588, 3604, 2554, 902, 2032, 3812, 3061, 3993, 825, 3897, 3488, 1272, 3117, 3689, 496, 2674, 2231, 1567, 2591, 3545, 3165, 3886, 368, 3994, 3853, 3107, 3975, 1844, 744, 1348};
    vector<int> r = {1, 273, 207, 29, 80, 32, 20, 214, 46, 1, 3, 74, 224, 288, 156, 31, 4, 214, 171, 150, 239, 5, 242, 14, 102, 32, 37, 194, 232, 16, 43, 35, 42, 28, 82, 51, 94, 40, 12, 84, 11, 14, 137, 21, 76, 42, 28, 9, 115, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3714.03739411261;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> x = {0, -1814, -3834, -2939, -3425, 526, 2094, -2316, 947, 2739, 3131, -2561, 1863, 1685, -235, -1013, 3352, 3590, -750, -1192, 134, -1605, 998, 1275, 792, 2445, -3750, 3744, 3866, -507, 3997, -3199, -3936, -1538, -2165, -3305, 3926, -3580, -2751, 1073, -1457, 3504, 2326, 1567, -3513, -1377, -3682, -3987, -1441, 1032};
    vector<int> y = {0, 3564, 1141, 2712, 2066, 3964, 3409, 3262, 3887, 2915, 2489, 3074, 3539, 3628, 3992, 3868, 2182, 1765, 3930, 3819, 3999, 3665, 3874, 3793, 3921, 3167, 1393, 1408, 1027, 3968, 156, 2403, 713, 3691, 3365, 2254, 766, 1786, 2905, 3853, 3725, 1930, 3255, 3681, 1913, 3756, 1562, 323, 3732, 3865};
    vector<int> r = {1, 193, 134, 241, 99, 208, 223, 15, 42, 275, 297, 168, 14, 57, 120, 45, 47, 130, 132, 129, 181, 3, 7, 191, 44, 75, 122, 256, 50, 80, 289, 79, 215, 59, 148, 74, 197, 106, 23, 14, 5, 50, 10, 70, 21, 41, 19, 151, 5, 27};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3704.356165568502;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> x = {0, 1744, -3920, -3899, 2886, 1300, 2064, 390, -2413, 3675, -3634, -1606, 2364, 1882, -2648, -3337, 2651, -593, 3879, -60, 3147, 3736, 3399, -3137, 3854, -2865, -1241, -3762, 2185, -905, 3921, 2147, -2242, 601, -3572, 3339, 1095, 3533, -3980, 833, -2073, 707, 2239, 980, -1950, -3526, 3784, 1945, -2597, -2558};
    vector<int> y = {0, 3600, 795, 892, 2768, 3783, 3427, 3981, 3190, 1581, 1671, 3664, 3228, 3530, 2997, 2206, 2995, 3956, 978, 3999, 2470, 1430, 2109, 2483, 1071, 2791, 3803, 1359, 3349, 3897, 790, 3375, 3313, 3954, 1799, 2203, 3847, 1875, 400, 3914, 3420, 3936, 3313, 3878, 3493, 1889, 1296, 3497, 3043, 3077};
    vector<int> r = {1, 32, 76, 17, 38, 145, 3, 167, 157, 83, 63, 119, 54, 31, 14, 153, 203, 288, 16, 191, 285, 30, 38, 120, 62, 250, 206, 144, 1, 4, 48, 23, 29, 45, 50, 23, 20, 72, 202, 51, 78, 44, 27, 35, 24, 32, 75, 23, 13, 17};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3713.769041414158;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> x = {0, 2067, 3520, -3300, -2424, -1939, -1163, -3690, 2503, 3699, 2212, 3032, -3991, -20, 1499, -3140, -2742, 371, -2999, 3922, -580, -3827, 975, 3308, -3550, -295, 1805, -1624, 2376, -3405, 3794, 2718, 1706, -2164, 3989, -771, -2919, -3922, 1333, -2100, 3255, 662, 2165, 1870, 603, -3589, -2863, -1499, 2297, 3408};
    vector<int> y = {0, 3423, 1901, 2260, 3180, 3499, 3827, 1543, 3119, 1523, 3332, 2609, 269, 4001, 3710, 2477, 2914, 3981, 2648, 785, 3957, 1165, 3879, 2248, 1842, 3990, 3568, 3655, 3217, 2098, 1268, 2934, 3619, 3364, 298, 3924, 2736, 786, 3772, 3404, 2326, 3945, 3363, 3535, 3953, 1767, 2793, 3709, 3273, 2094};
    vector<int> r = {1, 63, 211, 107, 223, 157, 292, 173, 123, 75, 13, 285, 297, 165, 89, 78, 105, 178, 47, 169, 174, 207, 226, 35, 53, 59, 25, 76, 14, 30, 154, 59, 83, 40, 276, 8, 45, 57, 43, 15, 19, 47, 4, 6, 3, 21, 34, 28, 77, 11};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3704.626170943504;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> x = {0, 3005, 3527, -2187, 604, -1765, 2626, -570, -2384, -757, 2086, -3855, 3799, -2532, 922, -3197, 18, -1344, 1527, 1845, -3380, -2837, 3317, -2625, 1102, 2902, -3600, 1310, -3989, -1010, 2329, -2987, -3941, -2314, 3937, 1652, -3745, -2032, -2477, -3014, -1858, -1542, 1710, 3419, 3983, -3238, 3196, -275, -3068, -1911};
    vector<int> y = {0, 2640, 1885, 3349, 3955, 3589, 3018, 3960, 3213, 3928, 3413, 1068, 1253, 3097, 3893, 2404, 4001, 3767, 3697, 3549, 2138, 2820, 2236, 3017, 3846, 2754, 1745, 3779, 296, 3870, 3252, 2661, 685, 3264, 708, 3643, 1406, 3447, 3142, 2631, 3541, 3692, 3615, 2075, 369, 2349, 2404, 3991, 2566, 3514};
    vector<int> r = {1, 88, 124, 47, 214, 80, 244, 61, 12, 120, 88, 151, 241, 10, 43, 19, 249, 123, 123, 133, 113, 86, 92, 78, 112, 36, 125, 98, 102, 128, 88, 4, 151, 16, 218, 10, 13, 84, 18, 2, 3, 58, 11, 87, 75, 30, 50, 22, 3, 51};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3753.611410966944;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {0, 5000, -5000};
    vector<int> r = {4800, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7576.610644415529;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> x = {0, 0, -5000};
    vector<int> y = {0, 5000, -5000};
    vector<int> r = {4800, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10059.690858047645;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> x = {0, 0, -5000};
    vector<int> y = {0, 5000, -5000};
    vector<int> r = {4900, 2, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10202.572087933962;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> x = {0, 0, -5000};
    vector<int> y = {0, 5000, -5000};
    vector<int> r = {4850, 2, 149};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 10056.24216988126;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> x = {0, 3968, 3874, 3719, 3505, 3236, 2916, 2550, 2143, 1703, 1236, 750, 251, -251, -750, -1236, -1703, -2143, -2550, -2916, -3236, -3505, -3719, -3874, -3968, -4000, -3968, -3874, -3719, -3505, -3236, -2916, -2550, -2143, -1703, -1236, -750, -251, 251, 750, 1236, 1703, 2143, 2550, 2916, 3236, 3505, 3719, 3874, 3968};
    vector<int> y = {0, 501, 995, 1472, 1927, 2351, 2738, 3082, 3377, 3619, 3804, 3929, 3992, 3992, 3929, 3804, 3619, 3377, 3082, 2738, 2351, 1927, 1472, 995, 501, 0, -501, -995, -1472, -1927, -2351, -2738, -3082, -3377, -3619, -3804, -3929, -3992, -3992, -3929, -3804, -3619, -3377, -3082, -2738, -2351, -1927, -1472, -995, -501};
    vector<int> r = {50, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3940.1803288346255;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> x = {0, 4663, 4553, 4371, 4120, 3803, 3426, 2997, 2519, 2002, 1453, 882, 295, -295, -880, -1451, -2000, -2518, -2996, -3426, -3802, -4118, -4369, -4552, -4662, -4699, -4662, -4552, -4370, -4119, -3802, -3426, -2995, -2518, -2000, -1452, -880, -294, 295, 881, 1453, 2002, 2519, 2996, 3426, 3803, 4119, 4370, 4552, 4664};
    vector<int> y = {0, 590, 1169, 1730, 2264, 2763, 3218, 3622, 3969, 4253, 4471, 4617, 4691, 4691, 4617, 4471, 4254, 3969, 3622, 3218, 2764, 2265, 1731, 1169, 590, 0, -589, -1168, -1730, -2263, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1168, -589};
    vector<int> r = {727, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3942.401680201194;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> x = {0, 4664, 4553, 4371, 4119, 3802, 3427, 2997, 2519, 2002, 1453, 881, 296, -294, -881, -1451, -2000, -2518, -2995, -3426, -3802, -4119, -4369, -4552, -4662, -4699, -4663, -4552, -4369, -4118, -3801, -3426, -2996, -2518, -2001, -1452, -880, -295, 296, 881, 1453, 2002, 2518, 2996, 3426, 3803, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 590, 1170, 1731, 2265, 2764, 3218, 3622, 3969, 4254, 4470, 4617, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2264, 1731, 1170, 590, 0, -588, -1169, -1730, -2264, -2762, -3216, -3621, -3968, -4252, -4469, -4617, -4690, -4691, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -589};
    vector<int> r = {1621, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3061.5741190216904;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2996, 2519, 2001, 1453, 882, 296, -294, -881, -1452, -2001, -2518, -2995, -3426, -3802, -4119, -4369, -4552, -4663, -4700, -4662, -4552, -4369, -4118, -3802, -3426, -2995, -2518, -2000, -1452, -880, -295, 296, 881, 1452, 2002, 2519, 2996, 3427, 3803, 4119, 4371, 4552, 4663};
    vector<int> y = {0, 590, 1170, 1730, 2265, 2764, 3218, 3622, 3968, 4253, 4471, 4617, 4691, 4691, 4618, 4471, 4254, 3969, 3622, 3218, 2763, 2265, 1731, 1170, 590, 1, -588, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4617, -4690, -4690, -4616, -4470, -4252, -3967, -3621, -3216, -2762, -2264, -1729, -1168, -588};
    vector<int> r = {105, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4574.42389354807;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> x = {0, 4664, 4552, 4371, 4119, 3803, 3426, 2997, 2519, 2002, 1452, 881, 296, -294, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4118, -4369, -4552, -4662, -4699, -4662, -4552, -4369, -4118, -3802, -3426, -2995, -2518, -2001, -1452, -880, -294, 296, 881, 1453, 2002, 2519, 2996, 3426, 3802, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1170, 1730, 2265, 2764, 3218, 3622, 3969, 4253, 4471, 4617, 4691, 4692, 4617, 4471, 4253, 3969, 3622, 3218, 2764, 2265, 1731, 1170, 589, 0, -589, -1168, -1730, -2264, -2762, -3217, -3621, -3967, -4253, -4469, -4617, -4690, -4690, -4616, -4469, -4252, -3967, -3621, -3217, -2762, -2264, -1730, -1169, -588};
    vector<int> r = {310, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4350.125997998462;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 882, 295, -294, -880, -1452, -2000, -2518, -2995, -3425, -3802, -4118, -4370, -4552, -4662, -4700, -4663, -4552, -4369, -4118, -3802, -3425, -2995, -2518, -2000, -1451, -881, -294, 296, 881, 1452, 2002, 2519, 2996, 3426, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1730, 2265, 2763, 3218, 3622, 3969, 4253, 4471, 4618, 4691, 4692, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 590, 0, -589, -1169, -1730, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4691, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2263, -1729, -1169, -589};
    vector<int> r = {720, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3933.3292945169637;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2997, 2519, 2001, 1453, 881, 295, -294, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4118, -4369, -4551, -4662, -4700, -4662, -4552, -4370, -4118, -3802, -3426, -2996, -2518, -2001, -1451, -881, -294, 295, 882, 1453, 2002, 2519, 2996, 3427, 3802, 4119, 4371, 4552, 4663};
    vector<int> y = {0, 589, 1169, 1730, 2265, 2763, 3217, 3622, 3969, 4253, 4470, 4617, 4691, 4692, 4618, 4470, 4253, 3969, 3622, 3218, 2764, 2265, 1731, 1170, 590, 0, -589, -1168, -1730, -2264, -2763, -3217, -3620, -3968, -4252, -4469, -4616, -4690, -4691, -4617, -4469, -4253, -3968, -3621, -3217, -2762, -2263, -1730, -1169, -589};
    vector<int> r = {928, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3779.156701328314;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2997, 2519, 2001, 1453, 881, 295, -294, -880, -1451, -2000, -2518, -2996, -3426, -3802, -4118, -4369, -4552, -4662, -4700, -4663, -4552, -4369, -4118, -3802, -3426, -2996, -2518, -2000, -1452, -881, -295, 296, 881, 1453, 2002, 2519, 2997, 3427, 3803, 4119, 4371, 4553, 4664};
    vector<int> y = {0, 589, 1170, 1731, 2264, 2763, 3217, 3622, 3969, 4253, 4471, 4617, 4692, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1170, 589, 1, -588, -1169, -1730, -2263, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4690, -4690, -4616, -4469, -4253, -3968, -3621, -3216, -2762, -2263, -1730, -1169, -588};
    vector<int> r = {246, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4399.550559982526;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> x = {0, 4663, 4552, 4371, 4119, 3803, 3426, 2996, 2519, 2002, 1453, 881, 296, -295, -881, -1451, -2001, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4662, -4700, -4662, -4552, -4370, -4118, -3802, -3426, -2995, -2518, -2000, -1452, -880, -295, 295, 881, 1453, 2001, 2519, 2997, 3427, 3803, 4119, 4371, 4552, 4664};
    vector<int> y = {0, 589, 1170, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4691, 4617, 4471, 4253, 3968, 3622, 3217, 2763, 2265, 1730, 1169, 590, 1, -588, -1169, -1730, -2264, -2762, -3217, -3621, -3968, -4253, -4469, -4616, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1168, -588};
    vector<int> r = {820, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3868.2992762317494;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> x = {0, 4664, 4552, 4370, 4119, 3803, 3426, 2997, 2519, 2002, 1453, 881, 295, -294, -880, -1452, -2000, -2518, -2996, -3425, -3802, -4118, -4369, -4552, -4663, -4700, -4662, -4552, -4370, -4118, -3802, -3425, -2995, -2518, -2001, -1452, -880, -294, 296, 881, 1453, 2001, 2519, 2997, 3427, 3803, 4120, 4371, 4553, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4692, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2264, 1730, 1170, 589, 0, -589, -1169, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -589};
    vector<int> r = {1916, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2797.4136706186155;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3803, 3426, 2997, 2519, 2002, 1453, 881, 295, -295, -880, -1452, -2000, -2517, -2995, -3426, -3802, -4118, -4369, -4551, -4663, -4700, -4663, -4552, -4369, -4118, -3802, -3426, -2995, -2518, -2001, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4371, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1730, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4618, 4691, 4691, 4618, 4471, 4253, 3969, 3622, 3218, 2763, 2264, 1731, 1170, 590, 1, -588, -1168, -1729, -2263, -2762, -3216, -3621, -3968, -4252, -4469, -4617, -4691, -4690, -4617, -4469, -4252, -3968, -3620, -3217, -2762, -2263, -1730, -1168, -588};
    vector<int> r = {834, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3840.0375051268024;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> x = {0, 4664, 4552, 4370, 4119, 3803, 3427, 2997, 2519, 2002, 1453, 881, 295, -295, -881, -1452, -2001, -2518, -2995, -3426, -3801, -4119, -4370, -4552, -4662, -4700, -4662, -4552, -4369, -4118, -3802, -3426, -2995, -2518, -2000, -1452, -880, -294, 296, 881, 1453, 2001, 2519, 2997, 3427, 3803, 4119, 4371, 4553, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2264, 2763, 3218, 3622, 3969, 4253, 4471, 4617, 4691, 4691, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 590, 1, -588, -1169, -1730, -2264, -2762, -3217, -3621, -3967, -4252, -4469, -4617, -4690, -4690, -4616, -4469, -4252, -3967, -3621, -3217, -2762, -2264, -1730, -1169, -588};
    vector<int> r = {1551, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3146.1385310262344;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 881, 296, -295, -881, -1451, -2000, -2518, -2995, -3425, -3802, -4118, -4370, -4552, -4662, -4700, -4663, -4551, -4370, -4118, -3802, -3426, -2996, -2518, -2001, -1452, -880, -294, 295, 881, 1453, 2002, 2519, 2997, 3427, 3802, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1170, 1730, 2265, 2763, 3218, 3622, 3968, 4254, 4471, 4617, 4692, 4692, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 589, 1, -588, -1169, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4691, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1169, -589};
    vector<int> r = {574, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4078.2749885384933;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3803, 3427, 2996, 2519, 2001, 1453, 882, 295, -294, -880, -1452, -2000, -2517, -2995, -3425, -3802, -4118, -4369, -4552, -4663, -4700, -4663, -4552, -4369, -4118, -3802, -3425, -2996, -2518, -2001, -1452, -880, -295, 296, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4371, 4553, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4618, 4691, 4691, 4618, 4470, 4253, 3969, 3622, 3218, 2764, 2265, 1731, 1170, 590, 1, -589, -1168, -1729, -2264, -2763, -3217, -3621, -3968, -4253, -4469, -4616, -4691, -4690, -4617, -4469, -4252, -3967, -3621, -3217, -2762, -2264, -1730, -1169, -588};
    vector<int> r = {796, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3910.512934780441;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3426, 2996, 2518, 2001, 1453, 881, 296, -294, -881, -1452, -2001, -2518, -2995, -3425, -3802, -4118, -4369, -4552, -4662, -4700, -4662, -4552, -4369, -4118, -3802, -3425, -2996, -2518, -2000, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2997, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1170, 1731, 2264, 2763, 3218, 3622, 3969, 4254, 4470, 4617, 4691, 4691, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1170, 590, 0, -588, -1168, -1730, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4617, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1168, -589};
    vector<int> r = {147, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4533.42597675691;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 881, 295, -294, -880, -1452, -2000, -2518, -2995, -3425, -3802, -4118, -4369, -4551, -4662, -4699, -4663, -4552, -4369, -4118, -3802, -3426, -2996, -2518, -2000, -1452, -880, -295, 296, 881, 1452, 2002, 2519, 2996, 3426, 3803, 4120, 4371, 4553, 4663};
    vector<int> y = {0, 590, 1170, 1730, 2265, 2763, 3218, 3622, 3968, 4254, 4471, 4617, 4691, 4692, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 589, 1, -589, -1169, -1730, -2264, -2762, -3217, -3621, -3968, -4253, -4470, -4617, -4690, -4690, -4617, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1168, -588};
    vector<int> r = {738, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3930.456189635469;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> x = {0, 4664, 4553, 4371, 4119, 3803, 3426, 2997, 2519, 2001, 1453, 881, 296, -295, -881, -1452, -2000, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4662, -4700, -4662, -4552, -4370, -4118, -3801, -3426, -2995, -2518, -2000, -1452, -881, -295, 296, 882, 1453, 2002, 2519, 2997, 3426, 3802, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4618, 4692, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2264, 1731, 1169, 590, 1, -589, -1169, -1729, -2264, -2762, -3217, -3621, -3967, -4252, -4470, -4616, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1168, -589};
    vector<int> r = {1855, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2812.1901728929815;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2996, 2519, 2001, 1453, 881, 296, -295, -880, -1452, -2000, -2517, -2995, -3426, -3801, -4118, -4369, -4551, -4662, -4699, -4662, -4552, -4370, -4118, -3802, -3426, -2996, -2518, -2001, -1452, -881, -295, 296, 882, 1453, 2002, 2518, 2996, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1169, 1730, 2264, 2763, 3218, 3621, 3969, 4253, 4470, 4617, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3217, 2763, 2265, 1730, 1169, 589, 0, -589, -1168, -1730, -2264, -2762, -3217, -3621, -3967, -4252, -4470, -4616, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3216, -2762, -2263, -1730, -1168, -588};
    vector<int> r = {667, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4025.1025918824325;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> x = {0, 4663, 4552, 4371, 4120, 3802, 3427, 2996, 2519, 2001, 1453, 881, 295, -295, -880, -1452, -2000, -2518, -2995, -3425, -3802, -4118, -4369, -4552, -4662, -4700, -4662, -4552, -4370, -4118, -3802, -3425, -2995, -2518, -2001, -1451, -880, -295, 296, 881, 1453, 2002, 2519, 2997, 3426, 3803, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 589, 1170, 1731, 2264, 2763, 3217, 3622, 3969, 4254, 4471, 4617, 4692, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2264, 1730, 1170, 589, 1, -589, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4253, -4469, -4617, -4690, -4691, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -588};
    vector<int> r = {1822, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2866.8039721341606;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> x = {0, 4664, 4553, 4371, 4119, 3802, 3427, 2996, 2519, 2001, 1453, 881, 295, -295, -880, -1452, -2001, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4662, -4700, -4662, -4552, -4370, -4118, -3802, -3426, -2995, -2517, -2001, -1452, -881, -295, 296, 881, 1453, 2002, 2519, 2997, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3217, 3622, 3969, 4253, 4471, 4617, 4691, 4691, 4617, 4470, 4253, 3969, 3622, 3217, 2763, 2265, 1731, 1169, 589, 0, -589, -1169, -1730, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4691, -4616, -4470, -4252, -3968, -3620, -3217, -2762, -2263, -1730, -1168, -588};
    vector<int> r = {1194, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3481.0632248275606;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3803, 3426, 2996, 2519, 2002, 1453, 881, 295, -294, -880, -1452, -2001, -2518, -2995, -3426, -3801, -4118, -4369, -4551, -4662, -4699, -4662, -4552, -4370, -4119, -3802, -3426, -2996, -2518, -2000, -1452, -880, -295, 295, 881, 1453, 2001, 2519, 2997, 3426, 3803, 4119, 4371, 4553, 4664};
    vector<int> y = {0, 589, 1170, 1731, 2264, 2763, 3218, 3621, 3969, 4254, 4471, 4617, 4691, 4692, 4618, 4471, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1170, 589, 1, -589, -1168, -1730, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4690, -4690, -4616, -4470, -4253, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -588};
    vector<int> r = {1456, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3219.043864151464;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> x = {0, 4663, 4552, 4371, 4119, 3802, 3427, 2997, 2519, 2002, 1453, 882, 295, -294, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4118, -4369, -4551, -4662, -4700, -4662, -4552, -4369, -4118, -3802, -3426, -2995, -2518, -2001, -1452, -880, -295, 296, 881, 1453, 2002, 2519, 2996, 3426, 3803, 4119, 4371, 4553, 4664};
    vector<int> y = {0, 590, 1170, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4692, 4618, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1170, 590, 1, -588, -1168, -1730, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4690, -4690, -4616, -4470, -4253, -3967, -3621, -3217, -2762, -2264, -1730, -1169, -589};
    vector<int> r = {1776, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2926.0627622733905;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2996, 2518, 2001, 1453, 881, 295, -295, -881, -1452, -2001, -2518, -2996, -3426, -3801, -4119, -4370, -4552, -4663, -4699, -4663, -4552, -4369, -4119, -3802, -3426, -2996, -2518, -2001, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2997, 3427, 3803, 4119, 4371, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1730, 2265, 2764, 3218, 3622, 3969, 4254, 4471, 4617, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2264, 1730, 1169, 590, 1, -589, -1168, -1730, -2264, -2762, -3217, -3621, -3968, -4253, -4470, -4616, -4690, -4690, -4616, -4469, -4253, -3968, -3621, -3217, -2762, -2263, -1730, -1168, -588};
    vector<int> r = {631, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4051.7946438884514;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3426, 2997, 2519, 2002, 1453, 881, 296, -295, -880, -1452, -2001, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4662, -4699, -4662, -4552, -4369, -4118, -3802, -3426, -2996, -2518, -2001, -1452, -880, -295, 296, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4254, 4470, 4617, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2265, 1730, 1169, 589, 1, -589, -1169, -1730, -2263, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4616, -4470, -4252, -3967, -3621, -3217, -2762, -2264, -1729, -1169, -589};
    vector<int> r = {1897, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2818.6115371722917;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3802, 3427, 2996, 2519, 2002, 1453, 881, 296, -295, -881, -1452, -2001, -2518, -2996, -3426, -3802, -4118, -4370, -4552, -4663, -4700, -4663, -4552, -4370, -4119, -3802, -3426, -2996, -2518, -2001, -1452, -880, -294, 296, 881, 1453, 2002, 2519, 2997, 3426, 3803, 4119, 4371, 4553, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2764, 3217, 3622, 3969, 4253, 4470, 4618, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3217, 2764, 2265, 1730, 1169, 590, 1, -588, -1169, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4690, -4690, -4616, -4470, -4252, -3967, -3621, -3217, -2762, -2264, -1729, -1169, -589};
    vector<int> r = {495, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4208.471868514994;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 881, 296, -294, -881, -1452, -2001, -2518, -2996, -3426, -3802, -4118, -4370, -4552, -4662, -4699, -4662, -4552, -4369, -4118, -3802, -3426, -2995, -2517, -2001, -1452, -880, -294, 295, 881, 1453, 2001, 2519, 2996, 3427, 3803, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3218, 3622, 3968, 4253, 4470, 4618, 4692, 4692, 4617, 4470, 4253, 3969, 3622, 3218, 2764, 2265, 1730, 1170, 589, 0, -589, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4617, -4690, -4691, -4617, -4469, -4253, -3968, -3621, -3217, -2762, -2264, -1730, -1169, -588};
    vector<int> r = {1960, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2745.406435562364;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3426, 2996, 2519, 2001, 1453, 881, 296, -294, -880, -1452, -2001, -2518, -2995, -3426, -3802, -4119, -4370, -4552, -4663, -4700, -4662, -4551, -4369, -4118, -3802, -3426, -2995, -2518, -2001, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2997, 3427, 3803, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 590, 1170, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4471, 4617, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 590, 1, -589, -1168, -1730, -2264, -2762, -3217, -3621, -3968, -4253, -4470, -4616, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2763, -2264, -1730, -1168, -588};
    vector<int> r = {240, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4404.047560173582;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3426, 2996, 2519, 2001, 1452, 881, 295, -295, -880, -1452, -2001, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4662, -4700, -4663, -4552, -4369, -4118, -3802, -3425, -2995, -2518, -2001, -1452, -881, -294, 296, 881, 1453, 2002, 2519, 2996, 3426, 3803, 4120, 4371, 4553, 4663};
    vector<int> y = {0, 589, 1169, 1730, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4692, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2265, 1730, 1170, 589, 1, -589, -1168, -1729, -2263, -2762, -3216, -3621, -3968, -4252, -4470, -4617, -4690, -4690, -4616, -4470, -4252, -3968, -3620, -3217, -2762, -2264, -1729, -1169, -589};
    vector<int> r = {673, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4004.239516815236;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> x = {0, 4663, 4553, 4371, 4120, 3803, 3427, 2997, 2518, 2002, 1453, 881, 296, -295, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4118, -4369, -4551, -4663, -4699, -4662, -4552, -4370, -4119, -3802, -3425, -2996, -2518, -2000, -1452, -880, -295, 296, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4371, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3218, 3622, 3968, 4254, 4471, 4617, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2264, 1731, 1170, 589, 0, -588, -1168, -1730, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4617, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -588};
    vector<int> r = {1285, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3416.965970783951;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> x = {0, 4663, 4553, 4371, 4120, 3803, 3427, 2996, 2519, 2001, 1453, 881, 295, -294, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4118, -4370, -4552, -4663, -4699, -4663, -4551, -4370, -4118, -3802, -3425, -2995, -2518, -2001, -1451, -881, -295, 296, 881, 1453, 2001, 2519, 2996, 3426, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1170, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4471, 4617, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2265, 1730, 1169, 589, 1, -589, -1168, -1730, -2264, -2762, -3217, -3620, -3967, -4253, -4469, -4616, -4690, -4691, -4616, -4470, -4253, -3968, -3621, -3217, -2762, -2263, -1730, -1169, -589};
    vector<int> r = {633, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4066.8148742607973;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> x = {0, 4664, 4552, 4371, 4119, 3803, 3426, 2997, 2519, 2001, 1453, 881, 296, -294, -881, -1452, -2000, -2518, -2995, -3426, -3802, -4118, -4369, -4551, -4662, -4700, -4662, -4551, -4369, -4118, -3802, -3426, -2995, -2518, -2000, -1452, -880, -294, 296, 881, 1453, 2002, 2519, 2997, 3427, 3803, 4119, 4371, 4552, 4664};
    vector<int> y = {0, 590, 1170, 1730, 2265, 2763, 3218, 3622, 3969, 4253, 4471, 4618, 4692, 4691, 4618, 4471, 4254, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 590, 1, -588, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4617, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -588};
    vector<int> r = {306, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4379.624272476075;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3803, 3427, 2997, 2519, 2002, 1453, 881, 296, -294, -880, -1452, -2001, -2518, -2996, -3425, -3801, -4118, -4369, -4552, -4662, -4699, -4662, -4552, -4369, -4119, -3802, -3426, -2995, -2518, -2001, -1452, -880, -295, 295, 881, 1452, 2002, 2519, 2997, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1730, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4691, 4618, 4471, 4253, 3969, 3622, 3218, 2763, 2265, 1730, 1170, 589, 0, -588, -1168, -1730, -2264, -2762, -3217, -3621, -3967, -4252, -4469, -4616, -4691, -4691, -4617, -4470, -4252, -3968, -3620, -3216, -2762, -2264, -1729, -1168, -589};
    vector<int> r = {823, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3850.985381756831;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3803, 3427, 2997, 2519, 2002, 1453, 881, 295, -295, -880, -1452, -2001, -2518, -2996, -3426, -3802, -4118, -4369, -4552, -4662, -4700, -4663, -4551, -4370, -4119, -3802, -3426, -2996, -2518, -2000, -1452, -880, -295, 296, 881, 1453, 2001, 2519, 2997, 3427, 3802, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 590, 1170, 1731, 2265, 2763, 3218, 3621, 3969, 4254, 4471, 4618, 4691, 4691, 4618, 4471, 4254, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 589, 1, -589, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4617, -4470, -4253, -3968, -3621, -3217, -2763, -2264, -1730, -1168, -589};
    vector<int> r = {1218, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3482.073097533418;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 881, 296, -294, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4119, -4369, -4551, -4662, -4700, -4662, -4552, -4369, -4118, -3802, -3426, -2995, -2518, -2001, -1451, -880, -295, 295, 881, 1453, 2002, 2519, 2997, 3426, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3217, 3622, 3969, 4253, 4470, 4618, 4691, 4691, 4618, 4471, 4253, 3969, 3622, 3217, 2763, 2264, 1731, 1169, 589, 1, -589, -1169, -1730, -2264, -2762, -3217, -3620, -3968, -4253, -4469, -4617, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2263, -1729, -1169, -589};
    vector<int> r = {873, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3785.5718394182127;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3802, 3427, 2997, 2518, 2001, 1453, 881, 296, -294, -880, -1452, -2001, -2518, -2996, -3426, -3802, -4119, -4369, -4552, -4662, -4699, -4663, -4552, -4370, -4118, -3802, -3425, -2996, -2518, -2001, -1451, -880, -294, 296, 881, 1453, 2001, 2519, 2996, 3427, 3803, 4119, 4371, 4553, 4663};
    vector<int> y = {0, 589, 1170, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4471, 4617, 4691, 4691, 4617, 4470, 4254, 3969, 3622, 3217, 2763, 2265, 1730, 1169, 589, 0, -588, -1168, -1730, -2263, -2762, -3216, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1168, -588};
    vector<int> r = {1309, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3364.238448415228;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> x = {0, 4663, 4552, 4371, 4119, 3803, 3427, 2996, 2519, 2001, 1453, 881, 296, -294, -880, -1452, -2000, -2518, -2995, -3425, -3802, -4118, -4370, -4552, -4662, -4700, -4663, -4552, -4369, -4118, -3802, -3426, -2996, -2517, -2001, -1452, -880, -294, 295, 881, 1452, 2001, 2519, 2996, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1170, 1730, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4691, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2264, 1731, 1170, 589, 1, -589, -1168, -1730, -2264, -2762, -3216, -3621, -3968, -4252, -4469, -4616, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2263, -1729, -1169, -589};
    vector<int> r = {1527, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3153.8332767476277;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3426, 2996, 2519, 2002, 1452, 882, 296, -295, -881, -1452, -2001, -2518, -2996, -3426, -3801, -4118, -4369, -4552, -4662, -4700, -4662, -4552, -4370, -4118, -3801, -3426, -2996, -2518, -2000, -1452, -881, -295, 296, 881, 1453, 2002, 2519, 2996, 3427, 3802, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 589, 1170, 1730, 2265, 2763, 3218, 3622, 3969, 4254, 4471, 4617, 4692, 4691, 4617, 4471, 4254, 3968, 3621, 3218, 2764, 2264, 1730, 1169, 589, 1, -589, -1168, -1729, -2264, -2763, -3217, -3620, -3968, -4253, -4469, -4616, -4690, -4690, -4617, -4470, -4253, -3968, -3621, -3217, -2762, -2263, -1729, -1168, -588};
    vector<int> r = {1298, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3366.569238244653;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> x = {0, 4664, 4552, 4371, 4119, 3803, 3426, 2997, 2519, 2001, 1453, 881, 295, -295, -881, -1452, -2000, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4662, -4700, -4662, -4552, -4369, -4118, -3802, -3426, -2995, -2518, -2000, -1452, -880, -294, 295, 881, 1453, 2001, 2519, 2996, 3426, 3802, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3217, 3622, 3969, 4253, 4471, 4617, 4692, 4691, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1170, 590, 1, -589, -1168, -1730, -2263, -2762, -3217, -3621, -3968, -4252, -4470, -4617, -4690, -4690, -4617, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1169, -588};
    vector<int> r = {315, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4330.170609733949;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3803, 3426, 2997, 2519, 2002, 1453, 882, 296, -295, -880, -1452, -2000, -2518, -2996, -3426, -3801, -4119, -4369, -4552, -4662, -4699, -4663, -4552, -4370, -4118, -3802, -3426, -2996, -2518, -2000, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 590, 1169, 1730, 2264, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4691, 4617, 4470, 4254, 3968, 3622, 3218, 2763, 2265, 1731, 1169, 590, 1, -588, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4691, -4690, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -589};
    vector<int> r = {1495, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 58};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3165.3634265985484;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> x = {0, 4664, 4552, 4370, 4119, 3802, 3427, 2997, 2519, 2001, 1453, 881, 296, -294, -880, -1452, -2000, -2518, -2995, -3425, -3802, -4118, -4370, -4552, -4663, -4700, -4663, -4552, -4369, -4118, -3802, -3426, -2996, -2518, -2000, -1451, -880, -295, 296, 881, 1453, 2001, 2519, 2996, 3427, 3803, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3621, 3969, 4253, 4471, 4617, 4692, 4691, 4617, 4470, 4254, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 589, 0, -589, -1169, -1730, -2264, -2762, -3217, -3621, -3968, -4253, -4469, -4617, -4690, -4690, -4616, -4470, -4252, -3967, -3621, -3217, -2763, -2264, -1730, -1169, -589};
    vector<int> r = {1910, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2765.7941757329313;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> x = {0, 4663, 4553, 4370, 4120, 3803, 3426, 2996, 2518, 2002, 1453, 882, 296, -295, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4118, -4370, -4552, -4662, -4699, -4663, -4552, -4370, -4119, -3802, -3426, -2995, -2518, -2001, -1452, -881, -295, 296, 882, 1453, 2002, 2519, 2997, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4691, 4618, 4470, 4253, 3969, 3622, 3218, 2764, 2265, 1731, 1169, 589, 0, -588, -1168, -1729, -2264, -2762, -3216, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4616, -4470, -4252, -3968, -3620, -3217, -2763, -2263, -1730, -1168, -588};
    vector<int> r = {825, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3864.9331248584867;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> x = {0, 4663, 4553, 4370, 4120, 3803, 3426, 2997, 2519, 2001, 1453, 881, 296, -295, -880, -1452, -2001, -2517, -2995, -3426, -3802, -4118, -4370, -4552, -4663, -4700, -4662, -4552, -4369, -4118, -3802, -3425, -2996, -2518, -2001, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2996, 3426, 3802, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1730, 2265, 2763, 3217, 3622, 3969, 4253, 4471, 4617, 4691, 4692, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2264, 1731, 1170, 589, 1, -589, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3216, -2762, -2263, -1730, -1169, -588};
    vector<int> r = {1113, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3574.530837658413;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 881, 295, -294, -880, -1452, -2000, -2518, -2996, -3425, -3801, -4118, -4369, -4552, -4663, -4699, -4662, -4551, -4370, -4118, -3802, -3425, -2995, -2518, -2001, -1451, -880, -294, 296, 881, 1453, 2001, 2519, 2997, 3427, 3803, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 590, 1170, 1730, 2265, 2763, 3218, 3621, 3969, 4254, 4470, 4617, 4691, 4691, 4617, 4471, 4253, 3968, 3622, 3218, 2763, 2265, 1731, 1170, 589, 0, -588, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4691, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -588};
    vector<int> r = {1929, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2759.2163597667723;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3803, 3427, 2997, 2519, 2002, 1453, 882, 295, -295, -880, -1452, -2000, -2518, -2996, -3425, -3802, -4118, -4370, -4552, -4662, -4700, -4662, -4552, -4369, -4118, -3801, -3425, -2996, -2518, -2000, -1452, -880, -294, 296, 882, 1452, 2001, 2519, 2996, 3427, 3803, 4119, 4370, 4552, 4664};
    vector<int> y = {0, 589, 1169, 1730, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4618, 4691, 4691, 4618, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1170, 590, 0, -588, -1169, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4469, -4616, -4690, -4691, -4616, -4469, -4253, -3968, -3621, -3217, -2762, -2263, -1729, -1169, -588};
    vector<int> r = {996, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3701.9101160974014;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3426, 2997, 2519, 2002, 1453, 881, 295, -295, -880, -1452, -2000, -2518, -2996, -3426, -3802, -4118, -4370, -4552, -4662, -4700, -4662, -4552, -4369, -4118, -3802, -3425, -2995, -2518, -2001, -1452, -880, -295, 296, 881, 1453, 2002, 2519, 2996, 3426, 3803, 4119, 4371, 4552, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4618, 4691, 4691, 4618, 4471, 4253, 3969, 3622, 3218, 2763, 2264, 1730, 1169, 589, 1, -589, -1168, -1730, -2264, -2763, -3217, -3620, -3968, -4253, -4470, -4616, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -588};
    vector<int> r = {58, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4641.141893344748;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 882, 296, -294, -881, -1451, -2001, -2518, -2995, -3426, -3802, -4118, -4369, -4551, -4662, -4699, -4663, -4552, -4370, -4118, -3802, -3426, -2996, -2518, -2001, -1452, -881, -295, 295, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4371, 4553, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3218, 3621, 3969, 4253, 4470, 4617, 4691, 4691, 4618, 4470, 4253, 3969, 3622, 3218, 2763, 2264, 1731, 1170, 590, 1, -589, -1169, -1729, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1168, -588};
    vector<int> r = {1126, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3569.202604684966;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> x = {0, 4664, 4552, 4371, 4120, 3803, 3427, 2996, 2519, 2002, 1453, 882, 296, -295, -880, -1452, -2000, -2518, -2996, -3425, -3802, -4118, -4370, -4552, -4662, -4699, -4662, -4552, -4370, -4119, -3802, -3425, -2995, -2518, -2001, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4691, 4691, 4618, 4470, 4253, 3968, 3621, 3218, 2763, 2265, 1731, 1169, 589, 1, -588, -1168, -1730, -2263, -2762, -3217, -3621, -3967, -4252, -4470, -4617, -4690, -4691, -4617, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -589};
    vector<int> r = {19, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4634.802491262316;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> x = {0, 4664, 4553, 4370, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 881, 295, -295, -880, -1452, -2000, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4662, -4699, -4662, -4552, -4370, -4118, -3802, -3426, -2995, -2518, -2001, -1452, -880, -295, 296, 881, 1453, 2001, 2519, 2996, 3427, 3803, 4120, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3622, 3968, 4253, 4471, 4618, 4691, 4691, 4617, 4471, 4253, 3969, 3622, 3218, 2764, 2264, 1730, 1170, 590, 1, -589, -1169, -1730, -2264, -2762, -3217, -3621, -3968, -4252, -4470, -4616, -4690, -4691, -4616, -4470, -4252, -3968, -3621, -3217, -2762, -2264, -1730, -1168, -589};
    vector<int> r = {1385, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3277.9922817287515;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> x = {0, 4664, 4553, 4371, 4119, 3803, 3427, 2996, 2519, 2002, 1453, 881, 296, -295, -880, -1452, -2001, -2518, -2995, -3426, -3802, -4118, -4369, -4552, -4663, -4699, -4663, -4552, -4370, -4118, -3802, -3426, -2996, -2518, -2001, -1452, -880, -294, 295, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4371, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3218, 3622, 3969, 4254, 4470, 4617, 4691, 4691, 4617, 4470, 4253, 3968, 3622, 3218, 2763, 2265, 1730, 1169, 590, 1, -588, -1168, -1730, -2263, -2762, -3217, -3621, -3968, -4253, -4469, -4617, -4690, -4690, -4616, -4469, -4252, -3968, -3621, -3217, -2762, -2264, -1729, -1169, -588};
    vector<int> r = {1856, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2835.6234494693886;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> x = {0, 4663, 4553, 4371, 4119, 3803, 3427, 2997, 2519, 2002, 1453, 881, 295, -294, -881, -1452, -2001, -2518, -2995, -3426, -3801, -4118, -4369, -4552, -4662, -4699, -4662, -4551, -4370, -4118, -3802, -3425, -2996, -2518, -2001, -1452, -880, -295, 296, 881, 1453, 2001, 2518, 2996, 3426, 3803, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3217, 3622, 3969, 4253, 4471, 4617, 4691, 4691, 4617, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1731, 1169, 590, 1, -588, -1168, -1729, -2264, -2762, -3217, -3620, -3968, -4252, -4470, -4617, -4690, -4690, -4616, -4470, -4252, -3968, -3621, -3216, -2762, -2264, -1729, -1168, -589};
    vector<int> r = {1340, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3343.379094766547;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> x = {0, 4662, 4552, 4371, 4119, 3802, 3426, 2997, 2518, 2001, 1452, 881, 295, -295, -880, -1452, -2001, -2519, -2995, -3426, -3802, -4118, -4371, -4551, -4664, -4699, -4663, -4552, -4370, -4119, -3803, -3426, -2996, -2518, -2002, -1452, -880, -295, 295, 880, 1451, 2001, 2518, 2996, 3425, 3802, 4118, 4371, 4553, 4663};
    vector<int> y = {0, 588, 1169, 1729, 2265, 2763, 3217, 3622, 3968, 4253, 4470, 4616, 4691, 4690, 4617, 4470, 4253, 3968, 3622, 3218, 2763, 2265, 1730, 1169, 589, 0, -589, -1169, -1731, -2264, -2762, -3218, -3621, -3969, -4253, -4469, -4617, -4691, -4691, -4616, -4470, -4252, -3968, -3621, -3217, -2763, -2264, -1730, -1169, -590};
    vector<int> r = {1835, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2855.2003179205944;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> x = {0, 4663, 4552, 4370, 4119, 3802, 3427, 2995, 2519, 2001, 1452, 881, 296, -295, -881, -1453, -2001, -2517, -2995, -3426, -3802, -4119, -4369, -4552, -4663, -4700, -4664, -4552, -4371, -4119, -3803, -3426, -2996, -2518, -2002, -1452, -881, -294, 295, 881, 1452, 2000, 2518, 2997, 3426, 3802, 4119, 4371, 4553, 4662};
    vector<int> y = {0, 589, 1169, 1730, 2264, 2762, 3218, 3621, 3968, 4253, 4470, 4617, 4690, 4692, 4617, 4470, 4253, 3968, 3622, 3217, 2763, 2264, 1731, 1169, 588, 0, -590, -1169, -1730, -2263, -2763, -3217, -3622, -3969, -4253, -4469, -4617, -4692, -4691, -4616, -4469, -4254, -3969, -3622, -3217, -2762, -2265, -1730, -1168, -588};
    vector<int> r = {138, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4544.213516398629;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> x = {0, 4664, 4553, 4371, 4118, 3802, 3427, 2997, 2518, 2002, 1452, 880, 295, -294, -880, -1453, -2001, -2518, -2995, -3427, -3803, -4119, -4371, -4552, -4662, -4701, -4662, -4552, -4370, -4118, -3803, -3426, -2995, -2519, -2001, -1452, -881, -294, 294, 880, 1453, 2002, 2519, 2996, 3427, 3802, 4118, 4370, 4552, 4663};
    vector<int> y = {0, 590, 1170, 1731, 2264, 2763, 3218, 3622, 3969, 4252, 4469, 4617, 4691, 4690, 4616, 4469, 4252, 3969, 3620, 3217, 2762, 2263, 1730, 1169, 588, 0, -588, -1168, -1729, -2264, -2763, -3217, -3621, -3969, -4252, -4469, -4617, -4690, -4691, -4617, -4469, -4253, -3968, -3621, -3218, -2762, -2265, -1730, -1169, -589};
    vector<int> r = {458, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4192.634592064503;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> x = {0, 4662, 4552, 4369, 4119, 3802, 3426, 2996, 2518, 2002, 1452, 880, 295, -296, -881, -1452, -2001, -2519, -2995, -3425, -3801, -4118, -4369, -4553, -4663, -4700, -4664, -4553, -4369, -4119, -3802, -3427, -2997, -2518, -2002, -1453, -881, -295, 295, 881, 1453, 2000, 2519, 2996, 3426, 3801, 4118, 4369, 4552, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2264, 2762, 3218, 3621, 3969, 4253, 4470, 4616, 4691, 4691, 4617, 4471, 4252, 3968, 3621, 3218, 2762, 2264, 1731, 1169, 589, 0, -588, -1169, -1730, -2264, -2763, -3218, -3621, -3969, -4252, -4470, -4617, -4691, -4691, -4617, -4470, -4252, -3968, -3621, -3218, -2762, -2264, -1729, -1168, -589};
    vector<int> r = {1288, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3396.027710032922;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> x = {0, 4663, 4552, 4370, 4118, 3803, 3427, 2995, 2518, 2002, 1453, 881, 296, -296, -882, -1453, -2002, -2519, -2996, -3427, -3802, -4118, -4370, -4552, -4663, -4700, -4663, -4552, -4370, -4120, -3803, -3427, -2995, -2518, -2002, -1452, -881, -295, 296, 881, 1452, 2000, 2519, 2995, 3425, 3802, 4119, 4371, 4551, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2264, 2762, 3218, 3622, 3969, 4253, 4469, 4616, 4691, 4690, 4617, 4469, 4252, 3968, 3622, 3217, 2762, 2264, 1730, 1169, 589, 0, -590, -1168, -1731, -2263, -2763, -3217, -3621, -3969, -4252, -4469, -4617, -4691, -4691, -4617, -4470, -4253, -3969, -3622, -3217, -2762, -2264, -1730, -1168, -589};
    vector<int> r = {898, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3758.370013398852;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> x = {0, 4663, 4553, 4369, 4119, 3803, 3426, 2995, 2519, 2001, 1452, 881, 296, -296, -880, -1452, -2001, -2518, -2995, -3427, -3802, -4118, -4369, -4552, -4663, -4699, -4664, -4552, -4371, -4119, -3801, -3426, -2996, -2519, -2001, -1453, -880, -296, 294, 880, 1452, 2001, 2518, 2995, 3427, 3802, 4119, 4371, 4553, 4663};
    vector<int> y = {0, 590, 1168, 1730, 2265, 2762, 3218, 3622, 3968, 4252, 4470, 4618, 4691, 4690, 4617, 4469, 4253, 3968, 3622, 3218, 2762, 2265, 1730, 1169, 589, -1, -589, -1169, -1731, -2264, -2763, -3217, -3622, -3968, -4254, -4469, -4617, -4691, -4692, -4616, -4469, -4253, -3968, -3621, -3217, -2763, -2264, -1731, -1169, -589};
    vector<int> r = {1009, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3677.2467028491774;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> x = {0, 4664, 4552, 4370, 4119, 3803, 3426, 2996, 2517, 2000, 1452, 882, 294, -295, -880, -1453, -2001, -2518, -2997, -3425, -3803, -4118, -4370, -4552, -4663, -4700, -4664, -4552, -4370, -4119, -3802, -3427, -2995, -2518, -2002, -1452, -881, -295, 296, 881, 1453, 2001, 2518, 2996, 3427, 3803, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2264, 2762, 3218, 3622, 3968, 4253, 4471, 4618, 4690, 4691, 4617, 4470, 4254, 3967, 3622, 3218, 2763, 2264, 1730, 1169, 589, -1, -589, -1169, -1730, -2264, -2763, -3217, -3621, -3968, -4252, -4471, -4616, -4691, -4691, -4616, -4471, -4253, -3968, -3622, -3218, -2762, -2265, -1731, -1169, -590};
    vector<int> r = {1131, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3538.353820627593;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> x = {0, 4662, 4553, 4370, 4119, 3803, 3427, 2996, 2518, 2002, 1452, 881, 295, -295, -881, -1452, -2002, -2519, -2995, -3426, -3803, -4119, -4370, -4552, -4664, -4701, -4663, -4552, -4371, -4119, -3802, -3426, -2995, -2519, -2002, -1452, -882, -296, 294, 880, 1453, 2000, 2518, 2997, 3426, 3802, 4119, 4370, 4552, 4664};
    vector<int> y = {0, 589, 1168, 1730, 2264, 2762, 3216, 3622, 3969, 4252, 4469, 4617, 4691, 4690, 4617, 4470, 4253, 3968, 3621, 3218, 2764, 2264, 1729, 1168, 589, 1, -589, -1170, -1729, -2265, -2763, -3216, -3622, -3969, -4253, -4470, -4616, -4691, -4691, -4617, -4470, -4253, -3968, -3622, -3218, -2763, -2264, -1729, -1169, -590};
    vector<int> r = {677, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3990.3998880544073;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> x = {0, 4663, 4553, 4370, 4118, 3802, 3425, 2996, 2518, 2002, 1453, 880, 295, -296, -881, -1452, -2002, -2518, -2996, -3426, -3802, -4118, -4369, -4553, -4663, -4699, -4663, -4552, -4370, -4119, -3803, -3426, -2996, -2519, -2002, -1451, -881, -294, 295, 881, 1452, 2001, 2518, 2995, 3427, 3803, 4118, 4370, 4552, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3217, 3622, 3968, 4254, 4470, 4617, 4690, 4691, 4617, 4470, 4254, 3969, 3621, 3218, 2763, 2264, 1729, 1168, 590, 0, -590, -1169, -1730, -2264, -2763, -3218, -3621, -3967, -4254, -4470, -4616, -4692, -4691, -4616, -4470, -4252, -3968, -3621, -3217, -2763, -2264, -1730, -1169, -589};
    vector<int> r = {854, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3824.7721863583047;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> x = {0, 4664, 4552, 4371, 4119, 3802, 3427, 2997, 2518, 2000, 1452, 881, 296, -295, -880, -1453, -2001, -2518, -2995, -3427, -3802, -4119, -4371, -4552, -4664, -4700, -4663, -4553, -4370, -4120, -3803, -3427, -2996, -2518, -2001, -1453, -881, -296, 296, 881, 1453, 2002, 2518, 2995, 3425, 3803, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 589, 1169, 1730, 2263, 2763, 3217, 3621, 3967, 4253, 4471, 4616, 4692, 4691, 4617, 4471, 4252, 3968, 3622, 3217, 2763, 2264, 1731, 1169, 590, 0, -588, -1168, -1730, -2264, -2762, -3218, -3621, -3969, -4252, -4469, -4617, -4690, -4691, -4617, -4470, -4253, -3968, -3622, -3218, -2762, -2264, -1731, -1168, -590};
    vector<int> r = {21, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4630.284523149563;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> x = {0, 4663, 4552, 4370, 4118, 3802, 3427, 2995, 2518, 2001, 1452, 880, 295, -295, -881, -1453, -2002, -2518, -2995, -3426, -3802, -4118, -4370, -4552, -4663, -4699, -4664, -4553, -4370, -4118, -3802, -3427, -2996, -2517, -2002, -1453, -880, -296, 295, 882, 1452, 2001, 2518, 2997, 3427, 3802, 4118, 4370, 4552, 4663};
    vector<int> y = {0, 589, 1168, 1731, 2263, 2763, 3218, 3622, 3969, 4252, 4471, 4618, 4690, 4692, 4617, 4471, 4253, 3969, 3622, 3218, 2763, 2263, 1731, 1168, 588, 0, -590, -1169, -1730, -2265, -2763, -3217, -3620, -3968, -4253, -4470, -4617, -4691, -4690, -4618, -4470, -4252, -3968, -3622, -3218, -2763, -2264, -1730, -1170, -589};
    vector<int> r = {661, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4020.111246925107;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> x = {0, 4662, 4552, 4370, 4119, 3801, 3427, 2995, 2518, 2002, 1452, 881, 295, -296, -881, -1453, -2001, -2518, -2996, -3427, -3803, -4118, -4371, -4553, -4663, -4700, -4662, -4553, -4370, -4118, -3802, -3426, -2996, -2519, -2001, -1451, -881, -295, 296, 880, 1452, 2001, 2518, 2995, 3426, 3803, 4118, 4370, 4553, 4662};
    vector<int> y = {0, 588, 1169, 1730, 2264, 2762, 3217, 3620, 3968, 4254, 4471, 4616, 4690, 4691, 4616, 4470, 4253, 3969, 3622, 3218, 2763, 2265, 1730, 1169, 588, 0, -589, -1168, -1730, -2265, -2763, -3217, -3622, -3969, -4254, -4471, -4617, -4690, -4691, -4616, -4470, -4252, -3968, -3621, -3217, -2763, -2265, -1730, -1168, -589};
    vector<int> r = {1480, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3224.963038648621;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> x = {0, 4663, 4553, 4370, 4118, 3801, 3426, 2997, 2519, 2001, 1452, 880, 296, -295, -881, -1453, -2001, -2519, -2996, -3427, -3803, -4119, -4370, -4553, -4663, -4700, -4663, -4552, -4370, -4119, -3802, -3426, -2995, -2519, -2001, -1452, -882, -295, 295, 881, 1452, 2001, 2518, 2995, 3426, 3802, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1170, 1731, 2263, 2763, 3217, 3621, 3968, 4252, 4470, 4617, 4690, 4691, 4616, 4469, 4253, 3969, 3620, 3218, 2762, 2263, 1730, 1169, 589, -1, -589, -1168, -1731, -2264, -2762, -3217, -3621, -3968, -4253, -4471, -4617, -4690, -4692, -4616, -4471, -4252, -3968, -3622, -3217, -2762, -2264, -1730, -1169, -589};
    vector<int> r = {200, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4498.76463498028;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> x = {0, 4662, 4552, 4370, 4119, 3802, 3426, 2996, 2519, 2000, 1451, 881, 296, -296, -880, -1452, -2002, -2519, -2996, -3426, -3802, -4119, -4370, -4553, -4662, -4701, -4663, -4553, -4369, -4118, -3803, -3427, -2996, -2517, -2001, -1453, -880, -295, 295, 880, 1453, 2001, 2518, 2996, 3426, 3803, 4118, 4369, 4553, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2264, 2763, 3218, 3621, 3969, 4252, 4470, 4617, 4691, 4690, 4618, 4471, 4252, 3968, 3622, 3217, 2763, 2264, 1730, 1169, 589, 1, -589, -1168, -1730, -2265, -2763, -3218, -3622, -3969, -4253, -4469, -4616, -4691, -4690, -4617, -4470, -4253, -3968, -3621, -3218, -2762, -2264, -1730, -1168, -589};
    vector<int> r = {1596, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3104.5571726098083;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> x = {0, 4663, 4552, 4371, 4119, 3803, 3426, 2996, 2519, 2001, 1451, 880, 295, -295, -881, -1453, -2001, -2517, -2996, -3426, -3803, -4119, -4369, -4552, -4663, -4701, -4663, -4552, -4370, -4119, -3803, -3427, -2995, -2519, -2001, -1452, -880, -295, 294, 880, 1453, 2002, 2518, 2996, 3426, 3803, 4118, 4370, 4553, 4663};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3217, 3622, 3968, 4252, 4470, 4616, 4691, 4690, 4617, 4470, 4252, 3968, 3621, 3218, 2762, 2265, 1730, 1168, 590, 0, -589, -1170, -1731, -2265, -2762, -3217, -3622, -3968, -4252, -4471, -4617, -4691, -4691, -4617, -4470, -4252, -3969, -3622, -3218, -2762, -2264, -1730, -1169, -589};
    vector<int> r = {1046, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33, 33};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3631.6432295654654;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> x = {0, 4663, 4553, 4369, 4118, 3802, 3427, 2995, 2519, 2000, 1453, 881, 296, -296, -881, -1453, -2002, -2518, -2995, -3425, -3802, -4119, -4370, -4553, -4662, -4701, -4663, -4552, -4371, -4119, -3803, -3427, -2995, -2518, -2002, -1452, -880, -295, 295, 881, 1453, 2000, 2518, 2996, 3426, 3802, 4119, 4370, 4553, 4662};
    vector<int> y = {0, 589, 1169, 1731, 2264, 2763, 3217, 3621, 3969, 4252, 4469, 4617, 4691, 4691, 4617, 4469, 4252, 3969, 3622, 3218, 2763, 2265, 1730, 1169, 589, 1, -589, -1168, -1730, -2264, -2762, -3218, -3621, -3969, -4252, -4470, -4616, -4691, -4690, -4616, -4471, -4253, -3969, -3621, -3217, -2762, -2264, -1730, -1169, -589};
    vector<int> r = {417, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4239.179736271536;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> x = {0, 4663, 4553, 4369, 4119, 3803, 3425, 2997, 2518, 2001, 1452, 881, 295, -295, -880, -1452, -2001, -2519, -2996, -3425, -3803, -4119, -4370, -4552, -4664, -4700, -4662, -4552, -4370, -4119, -3803, -3427, -2996, -2518, -2002, -1453, -881, -295, 296, 880, 1453, 2000, 2519, 2997, 3426, 3803, 4118, 4370, 4552, 4664};
    vector<int> y = {0, 589, 1168, 1729, 2265, 2763, 3217, 3621, 3969, 4252, 4469, 4616, 4692, 4690, 4616, 4469, 4253, 3968, 3621, 3217, 2763, 2265, 1730, 1169, 589, 0, -590, -1169, -1729, -2264, -2762, -3216, -3621, -3968, -4252, -4470, -4617, -4690, -4691, -4617, -4469, -4252, -3968, -3621, -3217, -2763, -2265, -1730, -1168, -589};
    vector<int> r = {506, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4164.028732976322;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<int> x = {0, 4663, 4551, 4370, 4118, 3803, 3427, 2997, 2518, 2001, 1452, 882, 295, -296, -882, -1452, -2001, -2518, -2995, -3426, -3803, -4119, -4370, -4552, -4664, -4701, -4663, -4553, -4369, -4118, -3802, -3426, -2995, -2519, -2002, -1453, -882, -296, 296, 880, 1451, 2001, 2519, 2995, 3427, 3802, 4119, 4370, 4553, 4662};
    vector<int> y = {0, 590, 1170, 1730, 2263, 2762, 3218, 3622, 3968, 4252, 4471, 4616, 4691, 4691, 4618, 4469, 4253, 3968, 3622, 3218, 2763, 2264, 1730, 1169, 588, 0, -588, -1168, -1729, -2265, -2762, -3216, -3622, -3968, -4252, -4471, -4618, -4690, -4691, -4616, -4470, -4252, -3969, -3622, -3218, -2763, -2265, -1729, -1168, -589};
    vector<int> r = {389, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4275.990356773459;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<int> x = {0, 4664, 4551, 4370, 4119, 3802, 3427, 2996, 2519, 2002, 1453, 881, 295, -295, -881, -1452, -2002, -2519, -2995, -3426, -3802, -4119, -4370, -4552, -4663, -4700, -4663, -4553, -4371, -4119, -3803, -3426, -2996, -2518, -2001, -1453, -880, -295, 296, 881, 1453, 2002, 2518, 2997, 3427, 3802, 4118, 4369, 4553, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3622, 3967, 4252, 4469, 4617, 4691, 4691, 4616, 4470, 4253, 3969, 3621, 3218, 2763, 2265, 1730, 1168, 589, 1, -589, -1169, -1730, -2264, -2762, -3218, -3622, -3968, -4252, -4470, -4617, -4691, -4691, -4616, -4471, -4253, -3969, -3621, -3218, -2763, -2265, -1730, -1169, -589};
    vector<int> r = {1090, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3617.208856485225;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<int> x = {0, 4664, 4551, 4371, 4119, 3802, 3427, 2995, 2519, 2001, 1453, 880, 295, -294, -880, -1453, -2002, -2519, -2996, -3426, -3801, -4119, -4371, -4553, -4662, -4701, -4663, -4553, -4369, -4118, -3803, -3426, -2995, -2519, -2001, -1452, -880, -294, 295, 881, 1452, 2001, 2519, 2996, 3425, 3801, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 590, 1168, 1731, 2265, 2763, 3218, 3622, 3969, 4252, 4470, 4617, 4690, 4690, 4618, 4470, 4252, 3968, 3621, 3218, 2762, 2264, 1730, 1169, 589, 0, -590, -1168, -1731, -2264, -2763, -3218, -3621, -3968, -4253, -4471, -4616, -4691, -4692, -4616, -4469, -4253, -3968, -3622, -3218, -2763, -2264, -1730, -1168, -589};
    vector<int> r = {713, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3990.252637961593;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<int> x = {0, 4664, 4553, 4371, 4118, 3802, 3426, 2996, 2517, 2001, 1452, 881, 295, -294, -880, -1453, -2001, -2519, -2996, -3427, -3802, -4119, -4370, -4552, -4663, -4701, -4663, -4553, -4371, -4118, -3802, -3426, -2995, -2518, -2000, -1453, -880, -295, 294, 882, 1453, 2002, 2517, 2995, 3427, 3802, 4118, 4370, 4552, 4663};
    vector<int> y = {0, 589, 1169, 1730, 2264, 2762, 3218, 3621, 3968, 4254, 4470, 4616, 4690, 4691, 4616, 4470, 4253, 3968, 3622, 3217, 2762, 2264, 1730, 1168, 589, -1, -589, -1169, -1729, -2265, -2762, -3217, -3622, -3969, -4253, -4469, -4616, -4691, -4691, -4617, -4471, -4252, -3969, -3622, -3217, -2762, -2264, -1730, -1170, -589};
    vector<int> r = {873, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3816.99619524253;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<int> x = {0, 4664, 4552, 4369, 4118, 3802, 3426, 2997, 2518, 2002, 1452, 882, 296, -295, -880, -1453, -2002, -2519, -2996, -3425, -3803, -4119, -4370, -4552, -4663, -4700, -4663, -4553, -4369, -4119, -3803, -3427, -2995, -2517, -2001, -1453, -880, -296, 295, 880, 1452, 2002, 2519, 2997, 3425, 3802, 4118, 4370, 4551, 4664};
    vector<int> y = {0, 589, 1169, 1730, 2265, 2763, 3218, 3621, 3968, 4252, 4469, 4618, 4690, 4691, 4618, 4470, 4253, 3969, 3622, 3217, 2762, 2265, 1731, 1168, 588, 0, -588, -1170, -1730, -2264, -2764, -3217, -3621, -3969, -4254, -4470, -4617, -4690, -4691, -4617, -4469, -4253, -3968, -3622, -3217, -2763, -2265, -1729, -1168, -589};
    vector<int> r = {1641, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3036.8457753595394;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<int> x = {0, 4663, 4552, 4370, 4118, 3802, 3426, 2995, 2519, 2001, 1453, 881, 294, -296, -880, -1452, -2001, -2518, -2996, -3427, -3803, -4119, -4371, -4553, -4664, -4701, -4664, -4553, -4369, -4120, -3802, -3426, -2997, -2519, -2001, -1451, -881, -294, 295, 881, 1452, 2001, 2518, 2995, 3426, 3803, 4118, 4370, 4552, 4663};
    vector<int> y = {0, 590, 1168, 1730, 2263, 2763, 3218, 3621, 3968, 4252, 4469, 4617, 4690, 4690, 4617, 4471, 4252, 3968, 3622, 3218, 2764, 2263, 1730, 1170, 590, 0, -589, -1168, -1730, -2264, -2762, -3217, -3622, -3967, -4252, -4470, -4616, -4691, -4690, -4617, -4469, -4253, -3968, -3621, -3217, -2762, -2264, -1731, -1169, -589};
    vector<int> r = {474, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4179.2758136307;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3802, 3426, 2996, 2518, 2001, 1453, 880, 296, -296, -881, -1452, -2000, -2519, -2995, -3426, -3802, -4119, -4370, -4552, -4664, -4700, -4663, -4553, -4371, -4118, -3802, -3425, -2997, -2518, -2002, -1453, -882, -294, 294, 880, 1452, 2002, 2519, 2996, 3426, 3802, 4119, 4370, 4553, 4664};
    vector<int> y = {0, 589, 1169, 1730, 2264, 2762, 3217, 3620, 3968, 4254, 4470, 4616, 4692, 4691, 4617, 4471, 4253, 3968, 3621, 3217, 2762, 2264, 1730, 1168, 588, 1, -590, -1169, -1731, -2264, -2763, -3218, -3621, -3969, -4252, -4469, -4617, -4690, -4691, -4617, -4470, -4252, -3968, -3621, -3217, -2763, -2263, -1729, -1169, -589};
    vector<int> r = {1692, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2994.3152753925838;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    vector<int> x = {0, 4663, 4553, 4371, 4118, 3802, 3426, 2997, 2519, 2002, 1453, 881, 295, -294, -881, -1451, -2001, -2518, -2996, -3427, -3803, -4119, -4370, -4552, -4664, -4699, -4662, -4552, -4369, -4119, -3803, -3427, -2997, -2518, -2002, -1452, -880, -294, 295, 881, 1452, 2001, 2517, 2995, 3427, 3802, 4119, 4371, 4551, 4663};
    vector<int> y = {0, 588, 1168, 1729, 2264, 2762, 3216, 3621, 3968, 4252, 4470, 4617, 4691, 4690, 4617, 4471, 4254, 3968, 3622, 3217, 2763, 2264, 1730, 1169, 590, 1, -589, -1169, -1730, -2264, -2763, -3218, -3622, -3969, -4253, -4470, -4616, -4691, -4691, -4616, -4470, -4253, -3969, -3622, -3218, -2763, -2264, -1729, -1170, -589};
    vector<int> r = {872, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3815.4064353075755;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    vector<int> x = {0, 4663, 4552, 4369, 4119, 3803, 3425, 2997, 2519, 2001, 1453, 880, 295, -295, -881, -1451, -2001, -2519, -2996, -3426, -3803, -4119, -4370, -4553, -4663, -4700, -4662, -4553, -4370, -4118, -3803, -3426, -2995, -2519, -2002, -1452, -881, -296, 294, 880, 1452, 2001, 2519, 2995, 3425, 3803, 4118, 4369, 4553, 4663};
    vector<int> y = {0, 589, 1168, 1730, 2264, 2762, 3217, 3622, 3968, 4254, 4471, 4617, 4691, 4690, 4616, 4470, 4252, 3969, 3622, 3217, 2763, 2264, 1731, 1169, 589, 1, -588, -1170, -1729, -2264, -2762, -3217, -3622, -3969, -4253, -4469, -4617, -4691, -4691, -4617, -4469, -4253, -3968, -3621, -3216, -2762, -2264, -1730, -1169, -588};
    vector<int> r = {1264, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3438.5701068786234;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    vector<int> x = {0, 4664, 4553, 4371, 4120, 3802, 3425, 2996, 2519, 2001, 1452, 881, 295, -295, -881, -1453, -2002, -2518, -2996, -3426, -3802, -4120, -4370, -4553, -4663, -4699, -4664, -4553, -4370, -4118, -3802, -3427, -2997, -2518, -2002, -1452, -880, -295, 295, 880, 1452, 2002, 2519, 2996, 3426, 3801, 4119, 4371, 4552, 4663};
    vector<int> y = {0, 590, 1170, 1731, 2264, 2763, 3218, 3621, 3968, 4253, 4470, 4616, 4690, 4691, 4617, 4469, 4253, 3969, 3622, 3218, 2764, 2264, 1729, 1168, 588, 1, -589, -1168, -1730, -2265, -2763, -3217, -3621, -3969, -4253, -4469, -4616, -4690, -4692, -4617, -4471, -4254, -3969, -3622, -3216, -2762, -2264, -1731, -1170, -588};
    vector<int> r = {803, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3887.1863197363464;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    vector<int> x = {0, 4663, 4552, 4370, 4118, 3801, 3427, 2996, 2519, 2002, 1452, 881, 294, -295, -880, -1453, -2002, -2519, -2997, -3426, -3803, -4118, -4371, -4552, -4663, -4700, -4663, -4551, -4370, -4120, -3803, -3427, -2995, -2518, -2001, -1453, -881, -295, 295, 880, 1453, 2002, 2518, 2995, 3426, 3803, 4119, 4371, 4552, 4662};
    vector<int> y = {0, 590, 1169, 1730, 2264, 2762, 3218, 3621, 3968, 4252, 4471, 4616, 4690, 4690, 4616, 4469, 4252, 3968, 3622, 3217, 2763, 2264, 1729, 1169, 589, 1, -589, -1169, -1730, -2265, -2762, -3218, -3621, -3967, -4253, -4470, -4616, -4691, -4690, -4617, -4469, -4253, -3969, -3622, -3218, -2763, -2265, -1730, -1168, -589};
    vector<int> r = {606, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4056.124118184102;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    vector<int> x = {0, 4662, 4552, 4370, 4119, 3802, 3427, 2997, 2519, 2002, 1453, 880, 294, -295, -881, -1452, -2002, -2519, -2996, -3427, -3802, -4118, -4370, -4552, -4662, -4700, -4664, -4553, -4371, -4119, -3803, -3427, -2996, -2518, -2001, -1451, -882, -295, 295, 882, 1452, 2001, 2518, 2995, 3426, 3803, 4118, 4371, 4553, 4662};
    vector<int> y = {0, 588, 1169, 1730, 2265, 2763, 3217, 3622, 3969, 4252, 4469, 4616, 4690, 4691, 4616, 4471, 4252, 3968, 3621, 3216, 2763, 2264, 1731, 1170, 590, -1, -589, -1168, -1730, -2265, -2762, -3217, -3622, -3968, -4252, -4471, -4616, -4691, -4690, -4617, -4470, -4253, -3968, -3622, -3218, -2763, -2265, -1730, -1168, -588};
    vector<int> r = {945, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3761.221093690881;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    vector<int> x = {0, 4663, 4553, 4369, 4118, 3803, 3426, 2995, 2519, 2001, 1451, 881, 296, -296, -881, -1452, -2002, -2517, -2996, -3426, -3802, -4118, -4370, -4552, -4663, -4701, -4662, -4552, -4370, -4118, -3802, -3426, -2995, -2518, -2001, -1452, -880, -295, 294, 880, 1453, 2001, 2518, 2995, 3425, 3802, 4118, 4370, 4552, 4662};
    vector<int> y = {0, 589, 1169, 1731, 2265, 2763, 3218, 3621, 3968, 4253, 4471, 4616, 4690, 4690, 4616, 4470, 4252, 3967, 3622, 3217, 2762, 2265, 1731, 1168, 589, 0, -590, -1169, -1731, -2264, -2763, -3217, -3621, -3968, -4252, -4471, -4618, -4691, -4692, -4616, -4470, -4253, -3968, -3622, -3216, -2762, -2264, -1730, -1169, -588};
    vector<int> r = {654, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4037.4824259523252;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    vector<int> x = {0, 4662, 4552, 4370, 4119, 3803, 3426, 2997, 2519, 2001, 1452, 880, 296, -295, -880, -1453, -2000, -2518, -2996, -3425, -3803, -4118, -4369, -4552, -4664, -4701, -4664, -4552, -4371, -4119, -3802, -3425, -2996, -2519, -2000, -1452, -880, -295, 296, 880, 1452, 2001, 2518, 2996, 3427, 3802, 4119, 4371, 4553, 4662};
    vector<int> y = {0, 590, 1169, 1731, 2264, 2762, 3218, 3622, 3967, 4252, 4469, 4616, 4690, 4690, 4616, 4470, 4253, 3968, 3621, 3218, 2762, 2264, 1731, 1168, 589, 1, -590, -1169, -1730, -2264, -2762, -3218, -3621, -3969, -4253, -4469, -4616, -4690, -4691, -4616, -4469, -4253, -3968, -3621, -3218, -2763, -2265, -1730, -1169, -590};
    vector<int> r = {629, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4021.9279924944663;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    vector<int> x = {0, 4662, 4553, 4369, 4119, 3803, 3426, 2996, 2519, 2000, 1452, 881, 295, -294, -881, -1453, -2001, -2518, -2996, -3427, -3802, -4118, -4369, -4553, -4663, -4701, -4664, -4552, -4370, -4118, -3803, -3425, -2995, -2517, -2001, -1452, -881, -294, 295, 880, 1453, 2001, 2518, 2996, 3427, 3802, 4118, 4370, 4552, 4662};
    vector<int> y = {0, 590, 1168, 1729, 2264, 2762, 3217, 3622, 3968, 4252, 4470, 4617, 4690, 4691, 4617, 4471, 4253, 3968, 3621, 3218, 2763, 2265, 1731, 1168, 589, 0, -589, -1168, -1729, -2264, -2762, -3217, -3621, -3968, -4253, -4471, -4617, -4691, -4690, -4618, -4469, -4252, -3968, -3621, -3218, -2763, -2265, -1730, -1168, -589};
    vector<int> r = {1676, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3039.6337978485094;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    vector<int> x = {0, 4664, 4553, 4371, 4118, 3802, 3425, 2997, 2518, 2002, 1453, 881, 295, -294, -881, -1453, -2002, -2519, -2996, -3426, -3802, -4119, -4369, -4553, -4664, -4699, -4664, -4552, -4370, -4119, -3802, -3426, -2995, -2518, -2001, -1452, -880, -295, 295, 882, 1453, 2002, 2519, 2996, 3425, 3802, 4120, 4371, 4552, 4664};
    vector<int> y = {0, 588, 1168, 1729, 2265, 2764, 3217, 3621, 3968, 4253, 4470, 4617, 4691, 4691, 4616, 4471, 4252, 3968, 3621, 3217, 2762, 2263, 1729, 1168, 590, 1, -588, -1168, -1731, -2264, -2763, -3218, -3622, -3967, -4252, -4471, -4616, -4690, -4691, -4617, -4469, -4253, -3968, -3622, -3217, -2762, -2265, -1730, -1169, -588};
    vector<int> r = {1299, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3404.987265784229;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3801, 3427, 2996, 2518, 2001, 1452, 881, 296, -294, -880, -1452, -2001, -2518, -2996, -3426, -3803, -4119, -4371, -4552, -4664, -4701, -4663, -4552, -4369, -4118, -3803, -3426, -2997, -2519, -2001, -1452, -880, -296, 295, 880, 1453, 2002, 2518, 2996, 3425, 3802, 4119, 4371, 4552, 4664};
    vector<int> y = {0, 589, 1169, 1731, 2263, 2762, 3217, 3622, 3968, 4253, 4470, 4617, 4690, 4690, 4617, 4470, 4254, 3969, 3621, 3218, 2763, 2264, 1730, 1169, 589, -1, -589, -1168, -1730, -2264, -2763, -3217, -3622, -3967, -4253, -4470, -4617, -4690, -4692, -4616, -4471, -4253, -3968, -3621, -3217, -2763, -2264, -1731, -1168, -589};
    vector<int> r = {1227, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3480.6152419342357;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    vector<int> x = {0, 4664, 4553, 4370, 4118, 3803, 3426, 2996, 2518, 2002, 1452, 880, 295, -295, -881, -1453, -2001, -2519, -2996, -3426, -3802, -4119, -4370, -4552, -4663, -4700, -4664, -4552, -4370, -4118, -3803, -3425, -2996, -2518, -2002, -1453, -880, -296, 295, 880, 1452, 2002, 2518, 2995, 3426, 3803, 4120, 4371, 4552, 4663};
    vector<int> y = {0, 588, 1169, 1730, 2264, 2763, 3216, 3621, 3967, 4252, 4470, 4617, 4691, 4692, 4617, 4469, 4253, 3969, 3621, 3216, 2763, 2265, 1731, 1169, 589, 0, -589, -1169, -1731, -2265, -2762, -3218, -3622, -3968, -4253, -4471, -4617, -4690, -4691, -4617, -4470, -4253, -3967, -3622, -3218, -2763, -2264, -1731, -1168, -590};
    vector<int> r = {1450, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3265.034979705912;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    vector<int> x = {0, 4662, 4553, 4370, 4119, 3802, 3427, 2997, 2519, 2000, 1452, 880, 295, -295, -881, -1453, -2001, -2519, -2997, -3425, -3803, -4119, -4370, -4552, -4663, -4700, -4663, -4553, -4369, -4119, -3802, -3425, -2995, -2518, -2002, -1452, -881, -294, 295, 882, 1452, 2001, 2518, 2996, 3427, 3801, 4120, 4369, 4552, 4664};
    vector<int> y = {0, 590, 1169, 1731, 2264, 2762, 3218, 3622, 3968, 4252, 4471, 4617, 4691, 4691, 4616, 4470, 4252, 3968, 3622, 3217, 2763, 2264, 1730, 1169, 589, -1, -590, -1169, -1731, -2264, -2762, -3217, -3622, -3968, -4253, -4470, -4617, -4691, -4691, -4617, -4470, -4253, -3968, -3622, -3218, -2763, -2263, -1730, -1169, -588};
    vector<int> r = {1373, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3307.3200910530104;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    vector<int> x = {0, 4664, 4552, 4369, 4119, 3802, 3425, 2996, 2518, 2000, 1452, 881, 296, -295, -880, -1452, -2000, -2519, -2997, -3426, -3802, -4119, -4369, -4552, -4664, -4700, -4663, -4552, -4370, -4119, -3802, -3427, -2996, -2519, -2001, -1452, -881, -296, 295, 881, 1452, 2000, 2519, 2995, 3425, 3803, 4119, 4371, 4552, 4664};
    vector<int> y = {0, 589, 1168, 1730, 2264, 2762, 3218, 3622, 3969, 4253, 4469, 4617, 4691, 4691, 4616, 4469, 4253, 3968, 3622, 3217, 2762, 2264, 1730, 1170, 590, 0, -588, -1168, -1730, -2265, -2763, -3217, -3622, -3969, -4253, -4471, -4616, -4690, -4691, -4616, -4471, -4253, -3968, -3622, -3217, -2763, -2264, -1731, -1169, -590};
    vector<int> r = {265, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4379.323489788;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    vector<int> x = {0, 4663, 4552, 4370, 4118, 3803, 3427, 2996, 2519, 2001, 1452, 881, 295, -295, -881, -1452, -2000, -2517, -2997, -3427, -3802, -4119, -4370, -4552, -4663, -4700, -4663, -4552, -4370, -4118, -3803, -3427, -2997, -2517, -2001, -1452, -880, -295, 295, 881, 1453, 2002, 2519, 2996, 3427, 3803, 4119, 4369, 4553, 4663};
    vector<int> y = {0, 589, 1170, 1730, 2264, 2763, 3217, 3621, 3969, 4253, 4470, 4616, 4691, 4691, 4616, 4470, 4252, 3968, 3622, 3218, 2763, 2264, 1729, 1169, 589, 0, -588, -1169, -1730, -2265, -2763, -3217, -3621, -3969, -4252, -4470, -4616, -4691, -4690, -4617, -4470, -4252, -3968, -3622, -3217, -2762, -2263, -1730, -1169, -589};
    vector<int> r = {1678, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3007.555833505771;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    vector<int> x = {0, 4662, 4552, 4370, 4119, 3801, 3427, 2997, 2518, 2001, 1452, 880, 296, -296, -880, -1453, -2001, -2519, -2996, -3425, -3803, -4118, -4370, -4553, -4663, -4700, -4664, -4553, -4370, -4118, -3801, -3426, -2997, -2519, -2002, -1452, -881, -295, 294, 880, 1452, 2001, 2518, 2996, 3426, 3802, 4119, 4371, 4552, 4662};
    vector<int> y = {0, 590, 1168, 1731, 2265, 2763, 3218, 3622, 3968, 4253, 4470, 4617, 4690, 4690, 4616, 4469, 4253, 3968, 3621, 3217, 2763, 2265, 1730, 1170, 589, 0, -588, -1169, -1731, -2264, -2763, -3218, -3621, -3968, -4253, -4470, -4617, -4691, -4691, -4617, -4471, -4253, -3968, -3622, -3217, -2764, -2264, -1731, -1169, -589};
    vector<int> r = {1687, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3008.842839790974;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    vector<int> x = {0, 4663, 4553, 4370, 4119, 3802, 3425, 2996, 2518, 2001, 1452, 882, 296, -295, -882, -1452, -2002, -2519, -2996, -3426, -3802, -4119, -4369, -4553, -4664, -4699, -4663, -4553, -4370, -4118, -3802, -3427, -2996, -2519, -2000, -1452, -881, -295, 294, 881, 1453, 2000, 2519, 2995, 3426, 3803, 4119, 4370, 4552, 4663};
    vector<int> y = {0, 590, 1169, 1730, 2265, 2763, 3218, 3621, 3968, 4252, 4470, 4616, 4691, 4690, 4616, 4470, 4252, 3969, 3621, 3218, 2763, 2265, 1730, 1169, 590, 0, -588, -1168, -1731, -2265, -2763, -3218, -3622, -3968, -4253, -4471, -4616, -4691, -4691, -4618, -4470, -4252, -3968, -3622, -3218, -2762, -2265, -1730, -1170, -590};
    vector<int> r = {914, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3781.1417628331087;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    vector<int> x = {0, 4663, 4552, 4371, 4119, 3803, 3426, 2996, 2519, 2002, 1452, 881, 294, -296, -882, -1452, -2002, -2519, -2996, -3427, -3802, -4119, -4369, -4552, -4662, -4700, -4663, -4553, -4371, -4118, -3802, -3427, -2995, -2518, -2001, -1453, -881, -295, 296, 880, 1453, 2001, 2519, 2997, 3426, 3803, 4118, 4370, 4553, 4663};
    vector<int> y = {0, 588, 1169, 1730, 2265, 2763, 3216, 3622, 3968, 4253, 4470, 4616, 4690, 4691, 4616, 4470, 4253, 3967, 3621, 3218, 2762, 2264, 1730, 1170, 588, 1, -589, -1168, -1731, -2265, -2763, -3218, -3621, -3968, -4252, -4469, -4616, -4692, -4690, -4617, -4470, -4252, -3968, -3622, -3217, -2763, -2264, -1730, -1168, -589};
    vector<int> r = {1139, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3521.8012851942326;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    vector<int> x = {0, 4662, 4552, 4369, 4119, 3803, 3426, 2996, 2518, 2001, 1453, 880, 296, -295, -880, -1453, -2002, -2519, -2996, -3426, -3802, -4119, -4371, -4553, -4663, -4700, -4662, -4551, -4369, -4119, -3802, -3425, -2996, -2518, -2001, -1453, -880, -295, 295, 880, 1452, 2001, 2519, 2996, 3425, 3801, 4119, 4369, 4552, 4663};
    vector<int> y = {0, 588, 1170, 1731, 2264, 2763, 3218, 3622, 3969, 4253, 4470, 4617, 4690, 4691, 4616, 4470, 4252, 3968, 3620, 3217, 2762, 2264, 1729, 1170, 590, -1, -590, -1169, -1730, -2264, -2763, -3218, -3621, -3967, -4254, -4470, -4616, -4692, -4691, -4616, -4470, -4252, -3968, -3622, -3217, -2763, -2263, -1730, -1169, -590};
    vector<int> r = {979, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3707.303923142249;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    vector<int> x = {0, 4663, 4551, 4370, 4119, 3801, 3425, 2996, 2518, 2002, 1452, 881, 295, -295, -880, -1452, -2001, -2518, -2995, -3427, -3803, -4119, -4371, -4552, -4663, -4700, -4664, -4551, -4371, -4118, -3802, -3426, -2997, -2519, -2001, -1452, -881, -296, 296, 881, 1453, 2001, 2518, 2996, 3427, 3803, 4118, 4370, 4552, 4663};
    vector<int> y = {0, 590, 1168, 1731, 2264, 2762, 3217, 3622, 3967, 4253, 4470, 4616, 4690, 4691, 4617, 4470, 4253, 3967, 3622, 3216, 2763, 2265, 1730, 1169, 588, 0, -589, -1168, -1731, -2264, -2763, -3218, -3622, -3968, -4253, -4469, -4616, -4691, -4690, -4617, -4470, -4253, -3969, -3622, -3218, -2762, -2265, -1731, -1168, -589};
    vector<int> r = {1636, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3033.867654838829;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    vector<int> x = {0, 4663, 4552, 4369, 4118, 3802, 3426, 2996, 2518, 2002, 1452, 880, 296, -295, -880, -1453, -2002, -2519, -2996, -3427, -3803, -4119, -4369, -4552, -4664, -4701, -4663, -4553, -4369, -4119, -3802, -3427, -2996, -2518, -2000, -1452, -880, -294, 296, 880, 1453, 2001, 2518, 2996, 3426, 3802, 4118, 4370, 4551, 4663};
    vector<int> y = {0, 590, 1169, 1731, 2265, 2763, 3217, 3621, 3969, 4252, 4470, 4617, 4692, 4691, 4617, 4470, 4253, 3969, 3621, 3217, 2762, 2264, 1731, 1169, 588, 0, -588, -1169, -1729, -2265, -2762, -3218, -3622, -3967, -4252, -4470, -4617, -4690, -4690, -4616, -4471, -4253, -3969, -3621, -3217, -2764, -2263, -1730, -1168, -589};
    vector<int> r = {998, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3683.1067021418216;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    vector<int> x = {0, 4663, 4552, 4370, 4119, 3802, 3426, 2995, 2519, 2002, 1453, 880, 296, -295, -881, -1452, -2002, -2519, -2996, -3426, -3802, -4118, -4371, -4553, -4664, -4701, -4662, -4552, -4370, -4119, -3803, -3426, -2996, -2518, -2001, -1453, -881, -296, 296, 880, 1453, 2000, 2518, 2995, 3426, 3802, 4119, 4369, 4552, 4662};
    vector<int> y = {0, 589, 1169, 1731, 2264, 2762, 3217, 3622, 3969, 4253, 4471, 4617, 4690, 4691, 4616, 4470, 4252, 3968, 3621, 3216, 2763, 2265, 1731, 1169, 588, 1, -589, -1169, -1730, -2263, -2762, -3218, -3622, -3969, -4253, -4470, -4616, -4690, -4690, -4618, -4469, -4254, -3968, -3621, -3218, -2763, -2264, -1729, -1169, -588};
    vector<int> r = {498, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4162.893679328854;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    vector<int> x = {0, 4662, 4553, 4370, 4118, 3802, 3427, 2995, 2519, 2001, 1453, 880, 295, -295, -881, -1453, -2001, -2519, -2997, -3426, -3803, -4119, -4371, -4552, -4662, -4699, -4662, -4553, -4371, -4118, -3802, -3427, -2996, -2518, -2002, -1452, -881, -295, 295, 880, 1453, 2001, 2519, 2996, 3427, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 590, 1169, 1730, 2264, 2762, 3218, 3621, 3968, 4254, 4471, 4616, 4691, 4690, 4616, 4469, 4253, 3968, 3621, 3218, 2762, 2264, 1730, 1170, 590, 1, -588, -1169, -1730, -2263, -2763, -3218, -3622, -3968, -4253, -4470, -4616, -4692, -4690, -4617, -4470, -4252, -3969, -3621, -3218, -2763, -2265, -1729, -1170, -589};
    vector<int> r = {88, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4587.180702274671;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    vector<int> x = {0, 4662, 4552, 4371, 4118, 3802, 3426, 2995, 2519, 2001, 1453, 881, 295, -296, -881, -1452, -2000, -2517, -2995, -3426, -3802, -4119, -4369, -4553, -4663, -4699, -4662, -4553, -4370, -4118, -3802, -3426, -2996, -2519, -2002, -1452, -881, -296, 294, 881, 1453, 2000, 2518, 2997, 3427, 3802, 4119, 4371, 4552, 4662};
    vector<int> y = {0, 589, 1168, 1730, 2264, 2762, 3218, 3621, 3969, 4253, 4471, 4617, 4690, 4690, 4617, 4470, 4253, 3969, 3622, 3217, 2763, 2264, 1731, 1169, 589, 0, -589, -1170, -1731, -2264, -2763, -3217, -3622, -3969, -4254, -4469, -4617, -4692, -4691, -4616, -4469, -4254, -3968, -3622, -3217, -2762, -2265, -1731, -1169, -590};
    vector<int> r = {401, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4244.585045827285;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    vector<int> x = {0, 4664, 4552, 4370, 4119, 3802, 3427, 2996, 2519, 2001, 1452, 880, 295, -294, -881, -1452, -2001, -2519, -2997, -3427, -3803, -4119, -4371, -4552, -4664, -4699, -4662, -4553, -4369, -4118, -3803, -3426, -2996, -2519, -2001, -1452, -881, -296, 294, 880, 1452, 2000, 2519, 2996, 3426, 3803, 4118, 4370, 4551, 4663};
    vector<int> y = {0, 588, 1169, 1731, 2265, 2763, 3217, 3621, 3968, 4253, 4470, 4617, 4691, 4691, 4617, 4469, 4252, 3968, 3621, 3217, 2762, 2264, 1730, 1169, 589, -1, -588, -1169, -1730, -2264, -2763, -3218, -3621, -3968, -4253, -4471, -4618, -4691, -4690, -4617, -4469, -4252, -3969, -3622, -3217, -2762, -2263, -1729, -1168, -590};
    vector<int> r = {1753, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2958.5018430110113;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    vector<int> x = {0, 4664, 4552, 4370, 4118, 3802, 3426, 2996, 2518, 2001, 1452, 880, 295, -295, -880, -1452, -2000, -2519, -2996, -3426, -3803, -4119, -4370, -4552, -4662, -4701, -4664, -4552, -4370, -4118, -3803, -3426, -2996, -2518, -2002, -1452, -881, -296, 294, 880, 1453, 2002, 2519, 2996, 3427, 3802, 4118, 4370, 4551, 4663};
    vector<int> y = {0, 590, 1170, 1730, 2264, 2762, 3217, 3621, 3969, 4252, 4471, 4616, 4692, 4690, 4616, 4471, 4253, 3969, 3622, 3217, 2762, 2264, 1730, 1169, 589, 0, -590, -1169, -1731, -2265, -2763, -3216, -3621, -3969, -4253, -4470, -4616, -4691, -4692, -4616, -4469, -4253, -3968, -3622, -3218, -2762, -2265, -1730, -1169, -590};
    vector<int> r = {993, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3690.62235055789;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test304() {
    vector<int> x = {0, 4664, 4553, 4370, 4118, 3803, 3427, 2997, 2518, 2001, 1452, 881, 295, -295, -881, -1453, -2001, -2519, -2997, -3426, -3803, -4118, -4370, -4553, -4662, -4699, -4664, -4552, -4371, -4118, -3802, -3426, -2997, -2519, -2001, -1452, -880, -296, 294, 880, 1451, 2001, 2519, 2995, 3425, 3803, 4119, 4370, 4553, 4663};
    vector<int> y = {0, 588, 1169, 1731, 2264, 2762, 3218, 3622, 3968, 4252, 4470, 4617, 4692, 4691, 4617, 4469, 4252, 3968, 3621, 3217, 2763, 2265, 1730, 1169, 590, -1, -589, -1168, -1731, -2265, -2763, -3218, -3622, -3969, -4254, -4470, -4616, -4690, -4691, -4617, -4469, -4253, -3968, -3621, -3218, -2762, -2264, -1730, -1170, -589};
    vector<int> r = {1397, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3262.0924297022734;
    if(result == expected) {
        cout << "Test Case 304: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 304: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test305() {
    vector<int> x = {0, 4665, 4558, 4355, 4128, 3791, 3436, 3001, 2513, 1966, 1415, 870, 319, -317, -861, -1428, -2004, -2513, -3017, -3423, -3796, -4099, -4376, -4543, -4658, -4699, -4664, -4549, -4365, -4115, -3808, -3450, -2975, -2533, -1993, -1447, -860, -315, 327, 881, 1458, 2023, 2525, 3010, 3441, 3796, 4100, 4383, 4550, 4664};
    vector<int> y = {0, 570, 1149, 1766, 2249, 2777, 3207, 3617, 3972, 4268, 4481, 4618, 4688, 4689, 4620, 4477, 4251, 3971, 3603, 3221, 2771, 2299, 1718, 1207, 616, 30, -583, -1177, -1742, -2268, -2755, -3191, -3639, -3959, -4257, -4472, -4620, -4690, -4689, -4617, -4468, -4242, -3964, -3609, -3201, -2770, -2298, -1699, -1181, -585};
    vector<int> r = {1442, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3235.8463783888715;
    if(result == expected) {
        cout << "Test Case 305: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 305: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test306() {
    vector<int> x = {0, 4667, 4546, 4377, 4103, 3817, 3443, 2987, 2532, 1968, 1436, 851, 326, -281, -882, -1437, -2021, -2522, -3016, -3430, -3784, -4122, -4374, -4557, -4659, -4699, -4659, -4552, -4383, -4118, -3803, -3433, -2985, -2490, -2019, -1479, -881, -305, 271, 863, 1424, 2013, 2549, 3019, 3450, 3797, 4138, 4381, 4550, 4663};
    vector<int> y = {0, 552, 1197, 1712, 2291, 2743, 3199, 3629, 3960, 4269, 4475, 4623, 4689, 4691, 4617, 4476, 4242, 3966, 3605, 3213, 2788, 2257, 1718, 1150, 622, -23, -620, -1172, -1700, -2266, -2762, -3211, -3631, -3986, -4244, -4462, -4617, -4690, -4691, -4620, -4479, -4247, -3949, -3602, -3191, -2770, -2229, -1703, -1183, -590};
    vector<int> r = {1216, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3459.9873771104385;
    if(result == expected) {
        cout << "Test Case 306: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 306: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test307() {
    vector<int> x = {0, 4659, 4555, 4366, 4106, 3809, 3400, 2996, 2527, 2002, 1464, 892, 260, -319, -856, -1437, -2029, -2508, -3006, -3437, -3808, -4120, -4374, -4562, -4666, -4700, -4661, -4557, -4377, -4129, -3825, -3443, -3007, -2535, -2007, -1434, -878, -271, 310, 841, 1458, 1998, 2500, 2992, 3449, 3822, 4128, 4357, 4555, 4667};
    vector<int> y = {0, 618, 1156, 1740, 2286, 2753, 3245, 3621, 3963, 4251, 4466, 4614, 4693, 4690, 4622, 4474, 4239, 3974, 3613, 3207, 2757, 2263, 1719, 1135, 568, 14, -610, -1152, -1713, -2246, -2732, -3199, -3612, -3958, -4249, -4477, -4618, -4692, -4689, -4625, -4468, -4254, -3979, -3624, -3194, -2735, -2247, -1765, -1163, -553};
    vector<int> r = {121, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4539.338095066799;
    if(result == expected) {
        cout << "Test Case 307: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 307: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test308() {
    vector<int> x = {0, 4660, 4545, 4367, 4102, 3787, 3405, 3004, 2500, 2012, 1433, 913, 331, -284, -911, -1473, -1982, -2541, -3007, -3453, -3822, -4110, -4379, -4555, -4667, -4699, -4662, -4559, -4358, -4133, -3820, -3445, -2970, -2497, -2023, -1438, -872, -328, 321, 896, 1445, 2026, 2541, 2970, 3403, 3790, 4109, 4385, 4556, 4665};
    vector<int> y = {0, 617, 1192, 1735, 2295, 2783, 3238, 3614, 3979, 4247, 4476, 4611, 4689, 4691, 4612, 4462, 4261, 3954, 3614, 3188, 2736, 2279, 1706, 1158, 560, -14, -601, -1145, -1760, -2239, -2739, -3197, -3642, -3983, -4243, -4475, -4618, -4688, -4689, -4614, -4472, -4241, -3954, -3644, -3243, -2780, -2283, -1694, -1150, -564};
    vector<int> r = {1268, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3403.566295457539;
    if(result == expected) {
        cout << "Test Case 308: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 308: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test309() {
    vector<int> x = {0, 4660, 4546, 4361, 4135, 3806, 3437, 2971, 2540, 1997, 1487, 880, 310, -265, -917, -1456, -1973, -2486, -3027, -3405, -3813, -4107, -4384, -4557, -4665, -4701, -4661, -4561, -4360, -4130, -3787, -3439, -2971, -2501, -1976, -1432, -852, -311, 291, 877, 1416, 1975, 2549, 2981, 3411, 3799, 4106, 4357, 4558, 4662};
    vector<int> y = {0, 610, 1197, 1754, 2235, 2758, 3205, 3641, 3956, 4255, 4458, 4616, 4690, 4693, 4609, 4468, 4267, 3988, 3595, 3240, 2749, 2284, 1694, 1151, 569, 6, -603, -1133, -1756, -2245, -2783, -3204, -3641, -3980, -4263, -4477, -4623, -4690, -4692, -4617, -4482, -4264, -3950, -3634, -3234, -2766, -2286, -1763, -1150, -599};
    vector<int> r = {993, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3704.483457863894;
    if(result == expected) {
        cout << "Test Case 309: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 309: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test310() {
    vector<int> x = {0, 4660, 4552, 4372, 4129, 3813, 3406, 3004, 2529, 2001, 1484, 845, 333, -260, -873, -1426, -2019, -2537, -3007, -3433, -3819, -4114, -4377, -4546, -4660, -4700, -4661, -4544, -4370, -4128, -3815, -3411, -2976, -2502, -1966, -1449, -909, -258, 269, 885, 1443, 1966, 2535, 2995, 3404, 3795, 4118, 4371, 4562, 4663};
    vector<int> y = {0, 619, 1170, 1727, 2246, 2748, 3239, 3615, 3962, 4253, 4459, 4624, 4689, 4694, 4617, 4477, 4245, 3957, 3612, 3212, 2739, 2271, 1713, 1193, 612, 28, -612, -1199, -1728, -2246, -2745, -3234, -3639, -3979, -4269, -4472, -4612, -4693, -4692, -4615, -4473, -4269, -3958, -3622, -3241, -2772, -2264, -1729, -1133, -598};
    vector<int> r = {767, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3928.763694760359;
    if(result == expected) {
        cout << "Test Case 310: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 310: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test311() {
    vector<int> x = {0, 4660, 4543, 4364, 4127, 3811, 3418, 3023, 2514, 1971, 1475, 915, 282, -336, -912, -1445, -2011, -2553, -2979, -3429, -3789, -4103, -4378, -4555, -4657, -4701, -4663, -4554, -4359, -4134, -3792, -3408, -2980, -2526, -1978, -1442, -900, -312, 271, 853, 1485, 1973, 2490, 3011, 3410, 3782, 4136, 4381, 4556, 4668};
    vector<int> y = {0, 609, 1205, 1747, 2248, 2751, 3226, 3599, 3971, 4267, 4463, 4610, 4693, 4687, 4611, 4472, 4248, 3946, 3637, 3215, 2781, 2293, 1710, 1157, 628, 0, -582, -1165, -1759, -2238, -2776, -3237, -3633, -3963, -4262, -4472, -4612, -4690, -4693, -4621, -4459, -4266, -3986, -3609, -3234, -2793, -2232, -1704, -1155, -548};
    vector<int> r = {1375, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3318.589857174599;
    if(result == expected) {
        cout << "Test Case 311: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 311: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test312() {
    vector<int> x = {0, 4659, 4553, 4369, 4119, 3808, 3437, 2993, 2528, 1974, 1461, 855, 305, -260, -851, -1415, -2037, -2524, -2966, -3444, -3781, -4117, -4369, -4548, -4666, -4699, -4664, -4555, -4384, -4134, -3815, -3420, -3020, -2546, -1996, -1443, -880, -291, 297, 910, 1438, 2006, 2543, 3006, 3446, 3810, 4121, 4355, 4552, 4666};
    vector<int> y = {0, 619, 1162, 1731, 2261, 2757, 3207, 3623, 3962, 4265, 4467, 4622, 4691, 4693, 4622, 4482, 4236, 3965, 3646, 3198, 2791, 2268, 1732, 1191, 570, -10, -577, -1158, -1694, -2235, -2743, -3223, -3602, -3950, -4254, -4474, -4616, -4690, -4690, -4611, -4475, -4250, -3953, -3613, -3195, -2751, -2261, -1767, -1172, -559};
    vector<int> r = {437, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4257.455820430017;
    if(result == expected) {
        cout << "Test Case 312: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 312: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test313() {
    vector<int> x = {0, 4663, 4549, 4367, 4114, 3781, 3422, 2990, 2494, 2002, 1444, 894, 326, -299, -862, -1482, -2029, -2551, -2972, -3444, -3821, -4102, -4362, -4541, -4665, -4700, -4667, -4560, -4374, -4110, -3818, -3436, -2976, -2498, -2003, -1431, -873, -268, 298, 890, 1456, 1986, 2549, 3016, 3411, 3800, 4115, 4381, 4542, 4659};
    vector<int> y = {0, 591, 1181, 1737, 2271, 2790, 3222, 3625, 3984, 4251, 4473, 4613, 4689, 4691, 4619, 4460, 4240, 3949, 3643, 3200, 2740, 2293, 1751, 1207, 565, 1, -555, -1135, -1721, -2282, -2742, -3207, -3638, -3982, -4252, -4478, -4618, -4692, -4691, -4616, -4469, -4260, -3948, -3604, -3234, -2766, -2270, -1700, -1207, -622};
    vector<int> r = {1631, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3047.1298437337136;
    if(result == expected) {
        cout << "Test Case 313: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 313: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test314() {
    vector<int> x = {0, 4665, 4559, 4359, 4111, 3787, 3408, 2986, 2533, 1997, 1477, 904, 287, -273, -854, -1467, -1970, -2487, -3024, -3427, -3814, -4099, -4362, -4543, -4667, -4700, -4658, -4549, -4369, -4123, -3795, -3431, -3014, -2494, -1977, -1428, -849, -334, 333, 885, 1439, 1992, 2533, 2981, 3421, 3781, 4102, 4378, 4543, 4663};
    vector<int> y = {0, 570, 1141, 1758, 2279, 2783, 3237, 3629, 3959, 4255, 4461, 4613, 4692, 4692, 4621, 4466, 4268, 3988, 3597, 3216, 2745, 2300, 1748, 1205, 556, -5, -624, -1178, -1734, -2256, -2775, -3213, -3608, -3984, -4263, -4477, -4623, -4688, -4688, -4616, -4475, -4256, -3959, -3634, -3223, -2791, -2294, -1708, -1204, -585};
    vector<int> r = {40, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4630.743288200347;
    if(result == expected) {
        cout << "Test Case 314: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 314: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test315() {
    vector<int> x = {0, 4668, 4544, 4359, 4136, 3780, 3438, 2980, 2529, 2030, 1433, 853, 291, -335, -880, -1490, -1991, -2540, -2992, -3450, -3792, -4102, -4360, -4556, -4667, -4699, -4668, -4545, -4366, -4107, -3779, -3406, -3009, -2509, -2032, -1478, -844, -256, 267, 857, 1489, 1992, 2491, 3019, 3400, 3824, 4129, 4359, 4545, 4660};
    vector<int> y = {0, 550, 1200, 1758, 2234, 2792, 3204, 3634, 3961, 4240, 4476, 4622, 4691, 4688, 4616, 4457, 4256, 3954, 3626, 3191, 2776, 2292, 1756, 1158, 556, 23, -551, -1199, -1741, -2287, -2795, -3239, -3612, -3974, -4238, -4461, -4623, -4692, -4693, -4621, -4458, -4256, -3986, -3602, -3247, -2733, -2244, -1757, -1195, -612};
    vector<int> r = {1407, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3295.5191684962583;
    if(result == expected) {
        cout << "Test Case 315: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 315: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test316() {
    vector<int> x = {0, 4660, 4561, 4377, 4134, 3786, 3436, 2966, 2489, 1993, 1420, 909, 284, -315, -888, -1467, -2035, -2494, -3002, -3402, -3820, -4102, -4365, -4548, -4660, -4700, -4668, -4561, -4357, -4110, -3800, -3423, -3017, -2551, -1995, -1467, -868, -269, 316, 856, 1452, 2020, 2492, 3013, 3442, 3807, 4132, 4380, 4549, 4667};
    vector<int> y = {0, 618, 1135, 1711, 2236, 2785, 3209, 3646, 3987, 4255, 4481, 4611, 4691, 4689, 4616, 4464, 4237, 3983, 3618, 3241, 2739, 2294, 1742, 1187, 609, 12, -551, -1134, -1763, -2278, -2767, -3221, -3603, -3947, -4256, -4466, -4619, -4692, -4689, -4621, -4470, -4243, -3986, -3607, -3202, -2758, -2240, -1705, -1182, -556};
    vector<int> r = {747, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3930.3542116677145;
    if(result == expected) {
        cout << "Test Case 316: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 316: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test317() {
    vector<int> x = {0, 4666, 4553, 4377, 4100, 3806, 3445, 3007, 2518, 1966, 1487, 886, 336, -308, -851, -1455, -1977, -2503, -2994, -3442, -3808, -4131, -4382, -4556, -4668, -4701, -4667, -4543, -4379, -4131, -3816, -3424, -3026, -2487, -1995, -1415, -916, -283, 321, 856, 1480, 1989, 2548, 3004, 3399, 3813, 4136, 4374, 4557, 4662};
    vector<int> y = {0, 570, 1165, 1710, 2297, 2758, 3197, 3613, 3969, 4269, 4458, 4616, 4687, 4689, 4623, 4470, 4263, 3978, 3622, 3200, 2756, 2242, 1699, 1150, 556, 29, -558, -1201, -1705, -2243, -2743, -3220, -3597, -3988, -4257, -4481, -4610, -4692, -4689, -4622, -4461, -4260, -3950, -3615, -3245, -2750, -2232, -1723, -1148, -594};
    vector<int> r = {218, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4459.982230833308;
    if(result == expected) {
        cout << "Test Case 317: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 317: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test318() {
    vector<int> x = {0, 4660, 4562, 4378, 4134, 3796, 3416, 3014, 2522, 2026, 1416, 873, 311, -283, -860, -1477, -1971, -2512, -2988, -3449, -3806, -4119, -4354, -4555, -4659, -4700, -4658, -4556, -4368, -4123, -3821, -3405, -3020, -2536, -1971, -1438, -856, -324, 293, 918, 1477, 2013, 2519, 2984, 3400, 3784, 4115, 4359, 4560, 4662};
    vector<int> y = {0, 613, 1132, 1712, 2236, 2772, 3227, 3607, 3966, 4240, 4482, 4619, 4690, 4692, 4620, 4462, 4267, 3972, 3627, 3191, 2757, 2261, 1768, 1160, 624, -2, -622, -1158, -1736, -2257, -2737, -3241, -3600, -3957, -4266, -4474, -4622, -4689, -4690, -4609, -4462, -4247, -3968, -3631, -3245, -2787, -2273, -1758, -1140, -597};
    vector<int> r = {220, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4436.027405410728;
    if(result == expected) {
        cout << "Test Case 318: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 318: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test319() {
    vector<int> x = {0, 4666, 4547, 4372, 4108, 3825, 3436, 2967, 2511, 2017, 1427, 850, 276, -332, -841, -1489, -2020, -2495, -3022, -3431, -3816, -4120, -4360, -4545, -4660, -4700, -4660, -4558, -4377, -4100, -3779, -3436, -3021, -2535, -2004, -1484, -885, -277, 316, 915, 1478, 2017, 2538, 2991, 3449, 3786, 4129, 4359, 4542, 4665};
    vector<int> y = {0, 573, 1192, 1723, 2283, 2732, 3206, 3644, 3973, 4246, 4478, 4622, 4692, 4688, 4624, 4458, 4245, 3983, 3599, 3212, 2743, 2261, 1755, 1196, 613, -38, -608, -1148, -1711, -2298, -2794, -3207, -3599, -3957, -4250, -4459, -4616, -4691, -4690, -4609, -4462, -4245, -3956, -3626, -3192, -2785, -2246, -1761, -1205, -581};
    vector<int> r = {1025, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3676.9438397695785;
    if(result == expected) {
        cout << "Test Case 319: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 319: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test320() {
    vector<int> x = {0, 4666, 4562, 4368, 4112, 3809, 3436, 3026, 2527, 1989, 1446, 882, 336, -300, -881, -1414, -1971, -2547, -2966, -3426, -3795, -4106, -4367, -4547, -4660, -4701, -4659, -4543, -4362, -4117, -3801, -3411, -2981, -2535, -2007, -1442, -842, -260, 295, 862, 1483, 1977, 2539, 2997, 3447, 3825, 4125, 4377, 4552, 4664};
    vector<int> y = {0, 564, 1133, 1734, 2277, 2754, 3206, 3597, 3964, 4258, 4473, 4617, 4688, 4691, 4617, 4482, 4266, 3950, 3646, 3218, 2770, 2288, 1740, 1188, 602, 9, -625, -1207, -1752, -2268, -2764, -3233, -3635, -3958, -4249, -4474, -4624, -4693, -4690, -4621, -4460, -4263, -3955, -3620, -3196, -2731, -2253, -1713, -1173, -586};
    vector<int> r = {1391, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3301.124048257204;
    if(result == expected) {
        cout << "Test Case 320: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 320: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test321() {
    vector<int> x = {0, 4659, 4550, 4379, 4117, 3819, 3432, 3025, 2500, 1996, 1427, 877, 318, -261, -874, -1429, -1992, -2544, -2972, -3434, -3781, -4133, -4372, -4547, -4664, -4699, -4662, -4556, -4372, -4127, -3810, -3452, -2985, -2517, -1997, -1438, -842, -325, 330, 869, 1461, 2037, 2511, 2968, 3430, 3819, 4122, 4373, 4542, 4667};
    vector<int> y = {0, 623, 1177, 1707, 2266, 2738, 3210, 3598, 3980, 4256, 4479, 4617, 4689, 4693, 4617, 4477, 4256, 3952, 3642, 3208, 2794, 2240, 1725, 1189, 575, 11, -602, -1159, -1727, -2251, -2752, -3190, -3630, -3969, -4256, -4475, -4623, -4689, -4689, -4618, -4467, -4236, -3973, -3644, -3213, -2738, -2258, -1722, -1207, -559};
    vector<int> r = {1814, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2896.763535751056;
    if(result == expected) {
        cout << "Test Case 321: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 321: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test322() {
    vector<int> x = {0, 4662, 4550, 4367, 4112, 3779, 3400, 3002, 2521, 2011, 1445, 863, 326, -280, -866, -1442, -1995, -2494, -3003, -3446, -3813, -4136, -4362, -4558, -4665, -4701, -4666, -4547, -4367, -4130, -3786, -3435, -3010, -2544, -1980, -1464, -863, -331, 279, 849, 1461, 2025, 2496, 2988, 3423, 3812, 4123, 4366, 4560, 4662};
    vector<int> y = {0, 589, 1177, 1737, 2275, 2794, 3245, 3615, 3967, 4247, 4472, 4619, 4689, 4693, 4619, 4474, 4255, 3983, 3616, 3197, 2748, 2233, 1749, 1145, 572, -11, -559, -1188, -1737, -2244, -2787, -3208, -3609, -3952, -4264, -4466, -4619, -4689, -4693, -4623, -4467, -4243, -3983, -3628, -3221, -2749, -2257, -1741, -1133, -595};
    vector<int> r = {19, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4650.292512138727;
    if(result == expected) {
        cout << "Test Case 322: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 322: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test323() {
    vector<int> x = {0, 4667, 4542, 4375, 4109, 3781, 3435, 2969, 2514, 1999, 1414, 893, 314, -291, -855, -1434, -1984, -2498, -2985, -3400, -3795, -4122, -4356, -4549, -4665, -4699, -4667, -4552, -4377, -4120, -3790, -3420, -2968, -2502, -1980, -1478, -866, -317, 261, 850, 1421, 1970, 2497, 2986, 3446, 3793, 4109, 4380, 4549, 4662};
    vector<int> y = {0, 558, 1206, 1718, 2283, 2792, 3208, 3644, 3971, 4254, 4482, 4615, 4689, 4691, 4622, 4476, 4260, 3981, 3629, 3246, 2774, 2260, 1764, 1180, 574, -31, -551, -1166, -1714, -2262, -2779, -3225, -3644, -3978, -4263, -4461, -4619, -4689, -4693, -4623, -4481, -4268, -3982, -3630, -3196, -2774, -2280, -1704, -1183, -604};
    vector<int> r = {881, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3779.910457567303;
    if(result == expected) {
        cout << "Test Case 323: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 323: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test324() {
    vector<int> x = {0, 4660, 4546, 4382, 4107, 3780, 3433, 2988, 2518, 2031, 1490, 871, 288, -335, -878, -1428, -2004, -2499, -2996, -3408, -3808, -4120, -4371, -4552, -4662, -4700, -4666, -4548, -4372, -4105, -3806, -3428, -2987, -2526, -2031, -1453, -914, -304, 312, 853, 1421, 2014, 2522, 2975, 3405, 3808, 4137, 4359, 4547, 4663};
    vector<int> y = {0, 613, 1194, 1696, 2287, 2792, 3211, 3627, 3969, 4238, 4458, 4619, 4692, 4688, 4617, 4478, 4251, 3980, 3620, 3236, 2754, 2262, 1725, 1170, 601, 23, -575, -1182, -1728, -2287, -2757, -3216, -3629, -3964, -4238, -4470, -4609, -4690, -4689, -4622, -4480, -4246, -3967, -3638, -3240, -2754, -2232, -1759, -1187, -592};
    vector<int> r = {886, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3806.2842246248742;
    if(result == expected) {
        cout << "Test Case 324: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 324: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test325() {
    vector<int> x = {0, 4660, 4544, 4372, 4111, 3808, 3431, 2976, 2551, 1968, 1414, 915, 311, -255, -916, -1487, -1997, -2528, -2986, -3417, -3805, -4124, -4373, -4552, -4662, -4700, -4660, -4562, -4371, -4111, -3788, -3430, -2969, -2528, -1994, -1475, -852, -320, 292, 914, 1439, 2001, 2506, 2998, 3437, 3787, 4119, 4384, 4553, 4663};
    vector<int> y = {0, 611, 1202, 1724, 2280, 2755, 3212, 3638, 3946, 4268, 4483, 4610, 4689, 4694, 4610, 4458, 4255, 3962, 3629, 3229, 2759, 2253, 1723, 1169, 594, 6, -607, -1135, -1728, -2278, -2780, -3212, -3644, -3962, -4257, -4464, -4621, -4690, -4692, -4610, -4475, -4254, -3976, -3619, -3205, -2783, -2264, -1694, -1170, -586};
    vector<int> r = {302, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4371.409059324884;
    if(result == expected) {
        cout << "Test Case 325: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 325: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test326() {
    vector<int> x = {0, 4659, 4549, 4361, 4126, 3818, 3429, 2978, 2535, 1972, 1486, 857, 307, -253, -875, -1472, -2008, -2497, -2980, -3402, -3807, -4101, -4359, -4558, -4658, -4699, -4659, -4561, -4363, -4127, -3819, -3409, -2982, -2503, -1964, -1480, -879, -260, 257, 871, 1459, 2019, 2524, 3006, 3452, 3813, 4103, 4365, 4545, 4669};
    vector<int> y = {0, 610, 1185, 1750, 2249, 2740, 3214, 3637, 3957, 4265, 4458, 4621, 4690, 4694, 4617, 4463, 4248, 3982, 3635, 3243, 2757, 2295, 1756, 1151, 627, 26, -618, -1131, -1750, -2248, -2741, -3236, -3631, -3977, -4270, -4461, -4616, -4693, -4692, -4618, -4468, -4245, -3964, -3614, -3190, -2749, -2291, -1743, -1194, -549};
    vector<int> r = {849, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3836.909168605497;
    if(result == expected) {
        cout << "Test Case 326: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 326: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test327() {
    vector<int> x = {0, 4660, 4556, 4360, 4123, 3793, 3455, 2999, 2492, 2003, 1446, 891, 330, -327, -854, -1448, -1985, -2529, -3003, -3416, -3778, -4102, -4372, -4552, -4662, -4701, -4667, -4561, -4368, -4127, -3793, -3442, -2984, -2532, -2024, -1483, -910, -333, 283, 921, 1489, 2010, 2510, 2998, 3429, 3797, 4116, 4375, 4551, 4658};
    vector<int> y = {0, 614, 1157, 1757, 2255, 2775, 3187, 3620, 3986, 4253, 4472, 4616, 4688, 4689, 4621, 4471, 4260, 3962, 3616, 3228, 2794, 2293, 1724, 1171, 589, 4, -555, -1132, -1734, -2250, -2776, -3199, -3632, -3959, -4242, -4460, -4611, -4687, -4692, -4608, -4459, -4248, -3973, -3619, -3214, -2769, -2267, -1717, -1171, -630};
    vector<int> r = {1810, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2871.114775916821;
    if(result == expected) {
        cout << "Test Case 327: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 327: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test328() {
    vector<int> x = {0, 4662, 4551, 4381, 4117, 3823, 3413, 2999, 2523, 1973, 1415, 921, 268, -309, -898, -1425, -2000, -2494, -3016, -3444, -3785, -4125, -4374, -4548, -4662, -4701, -4666, -4547, -4385, -4100, -3807, -3416, -2981, -2491, -2031, -1422, -882, -286, 316, 870, 1467, 2027, 2516, 2991, 3406, 3794, 4118, 4357, 4551, 4661};
    vector<int> y = {0, 592, 1170, 1701, 2267, 2734, 3233, 3619, 3966, 4265, 4481, 4609, 4691, 4689, 4614, 4480, 4253, 3984, 3604, 3198, 2785, 2253, 1723, 1188, 591, 11, -563, -1191, -1694, -2298, -2756, -3228, -3634, -3985, -4237, -4480, -4617, -4691, -4690, -4618, -4464, -4241, -3969, -3627, -3239, -2773, -2263, -1761, -1173, -599};
    vector<int> r = {1623, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3059.3060158839216;
    if(result == expected) {
        cout << "Test Case 328: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 328: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test329() {
    vector<int> x = {0, 4659, 4558, 4380, 4129, 3783, 3447, 2991, 2502, 2008, 1481, 844, 278, -280, -852, -1456, -2013, -2517, -2994, -3438, -3797, -4120, -4361, -4556, -4667, -4700, -4660, -4551, -4381, -4107, -3816, -3453, -2993, -2509, -2034, -1438, -860, -274, 287, 851, 1467, 1990, 2516, 2977, 3424, 3816, 4120, 4361, 4545, 4667};
    vector<int> y = {0, 626, 1147, 1705, 2246, 2790, 3196, 3627, 3979, 4250, 4459, 4623, 4692, 4691, 4623, 4470, 4246, 3970, 3624, 3204, 2770, 2261, 1750, 1151, 554, 32, -615, -1175, -1702, -2287, -2744, -3188, -3623, -3975, -4237, -4474, -4621, -4692, -4691, -4622, -4466, -4258, -3969, -3637, -3220, -2745, -2262, -1751, -1196, -563};
    vector<int> r = {935, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3725.2117280973366;
    if(result == expected) {
        cout << "Test Case 329: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 329: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test330() {
    vector<int> x = {0, 4665, 4554, 4367, 4121, 3816, 3407, 3020, 2503, 1994, 1439, 892, 270, -321, -856, -1483, -2034, -2512, -2998, -3397, -3801, -4106, -4381, -4560, -4663, -4700, -4662, -4562, -4371, -4113, -3793, -3404, -2981, -2492, -1973, -1455, -847, -259, 277, 842, 1491, 1998, 2514, 2996, 3410, 3825, 4129, 4356, 4545, 4657};
    vector<int> y = {0, 576, 1160, 1738, 2262, 2742, 3238, 3601, 3979, 4257, 4473, 4615, 4693, 4690, 4621, 4460, 4238, 3971, 3619, 3248, 2763, 2287, 1700, 1137, 582, -11, -593, -1133, -1724, -2273, -2776, -3241, -3633, -3985, -4265, -4469, -4623, -4694, -4693, -4625, -4456, -4254, -3970, -3622, -3235, -2733, -2244, -1768, -1201, -626};
    vector<int> r = {683, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3991.234352999798;
    if(result == expected) {
        cout << "Test Case 330: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 330: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test331() {
    vector<int> x = {0, 4665, 4550, 4376, 4116, 3787, 3404, 2979, 2494, 1999, 1436, 892, 297, -296, -882, -1438, -2006, -2504, -3017, -3408, -3815, -4128, -4374, -4555, -4659, -4699, -4658, -4555, -4363, -4109, -3808, -3407, -3009, -2503, -2036, -1437, -918, -274, 304, 894, 1489, 1998, 2514, 3023, 3434, 3782, 4104, 4374, 4559, 4667};
    vector<int> y = {0, 570, 1177, 1712, 2269, 2785, 3242, 3635, 3984, 4254, 4475, 4614, 4691, 4691, 4616, 4474, 4251, 3976, 3605, 3238, 2746, 2247, 1719, 1155, 618, 17, -626, -1160, -1748, -2281, -2754, -3238, -3610, -3979, -4237, -4474, -4610, -4692, -4690, -4614, -4459, -4254, -3971, -3599, -3209, -2790, -2289, -1721, -1144, -558};
    vector<int> r = {1823, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2861.408674494314;
    if(result == expected) {
        cout << "Test Case 331: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 331: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test332() {
    vector<int> x = {0, 4668, 4557, 4370, 4116, 3785, 3411, 2968, 2493, 1995, 1469, 920, 262, -279, -918, -1436, -2005, -2510, -2967, -3415, -3779, -4104, -4381, -4545, -4664, -4699, -4665, -4544, -4376, -4110, -3786, -3415, -3005, -2540, -2036, -1476, -882, -317, 263, 846, 1464, 1996, 2552, 2979, 3449, 3809, 4121, 4366, 4559, 4659};
    vector<int> y = {0, 552, 1151, 1732, 2267, 2787, 3235, 3643, 3984, 4255, 4465, 4609, 4692, 4691, 4609, 4474, 4251, 3974, 3646, 3229, 2795, 2293, 1702, 1198, 589, -18, -578, -1206, -1713, -2282, -2787, -3228, -3614, -3953, -4236, -4461, -4616, -4690, -4692, -4623, -4466, -4255, -3947, -3636, -3194, -2753, -2260, -1738, -1140, -615};
    vector<int> r = {215, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4461.7566033149515;
    if(result == expected) {
        cout << "Test Case 332: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 332: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test333() {
    vector<int> x = {0, 4661, 4550, 4385, 4112, 3783, 3405, 2977, 2494, 2011, 1444, 879, 304, -296, -841, -1485, -2027, -2515, -3016, -3399, -3815, -4119, -4363, -4550, -4659, -4699, -4660, -4545, -4357, -4130, -3826, -3432, -3025, -2511, -1981, -1479, -872, -292, 282, 889, 1430, 1966, 2493, 2979, 3421, 3796, 4134, 4379, 4561, 4666};
    vector<int> y = {0, 596, 1177, 1695, 2276, 2790, 3239, 3638, 3983, 4247, 4472, 4617, 4691, 4691, 4624, 4460, 4240, 3969, 3603, 3247, 2746, 2264, 1746, 1182, 618, 41, -605, -1201, -1762, -2244, -2729, -3212, -3598, -3973, -4263, -4461, -4619, -4691, -4692, -4614, -4478, -4270, -3984, -3635, -3223, -2772, -2237, -1709, -1136, -561};
    vector<int> r = {368, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52, 52};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4282.3219228467715;
    if(result == expected) {
        cout << "Test Case 333: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 333: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test334() {
    vector<int> x = {0, 4664, 4555, 4365, 4117, 3793, 3442, 3002, 2510, 2010, 1414, 884, 332, -293, -864, -1441, -1977, -2530, -3013, -3416, -3792, -4101, -4365, -4546, -4663, -4700, -4667, -4556, -4369, -4108, -3793, -3447, -2978, -2497, -2033, -1413, -915, -328, 329, 886, 1467, 2022, 2501, 2967, 3419, 3800, 4118, 4371, 4557, 4666};
    vector<int> y = {0, 585, 1155, 1746, 2266, 2776, 3200, 3615, 3973, 4248, 4481, 4616, 4688, 4691, 4620, 4475, 4263, 3962, 3606, 3228, 2779, 2295, 1746, 1195, 593, 20, -561, -1151, -1732, -2284, -2774, -3194, -3635, -3981, -4237, -4483, -4609, -4689, -4689, -4616, -4465, -4243, -3980, -3645, -3225, -2766, -2267, -1730, -1151, -560};
    vector<int> r = {1739, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2975.501507285888;
    if(result == expected) {
        cout << "Test Case 334: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 334: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test335() {
    vector<int> x = {0, 4668, 4545, 4373, 4113, 3822, 3417, 3021, 2513, 1992, 1445, 844, 301, -293, -845, -1440, -1991, -2533, -2969, -3399, -3801, -4109, -4376, -4555, -4660, -4699, -4667, -4553, -4361, -4119, -3820, -3433, -3016, -2498, -2021, -1480, -911, -290, 327, 874, 1443, 1973, 2526, 3020, 3405, 3788, 4107, 4365, 4552, 4664};
    vector<int> y = {0, 550, 1199, 1725, 2274, 2734, 3226, 3600, 3971, 4257, 4472, 4623, 4690, 4691, 4623, 4474, 4258, 3959, 3644, 3246, 2765, 2280, 1712, 1157, 608, -32, -556, -1170, -1754, -2264, -2739, -3209, -3604, -3982, -4244, -4462, -4611, -4691, -4688, -4617, -4473, -4265, -3965, -3601, -3240, -2783, -2284, -1743, -1167, -576};
    vector<int> r = {564, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4104.483946756306;
    if(result == expected) {
        cout << "Test Case 335: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 335: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test336() {
    vector<int> x = {0, 4662, 4563, 4385, 4108, 3817, 3452, 3014, 2514, 1985, 1419, 917, 264, -332, -897, -1471, -1981, -2541, -3013, -3428, -3817, -4105, -4367, -4546, -4661, -4699, -4659, -4544, -4358, -4105, -3813, -3421, -3016, -2500, -1976, -1469, -900, -316, 284, 919, 1436, 2010, 2552, 2967, 3424, 3780, 4110, 4360, 4549, 4658};
    vector<int> y = {0, 598, 1129, 1694, 2283, 2741, 3190, 3608, 3972, 4260, 4481, 4609, 4692, 4689, 4615, 4464, 4262, 3954, 3607, 3217, 2741, 2288, 1737, 1194, 601, 34, -621, -1200, -1762, -2288, -2749, -3224, -3605, -3980, -4263, -4464, -4614, -4689, -4692, -4610, -4475, -4247, -3947, -3646, -3220, -2792, -2280, -1755, -1181, -625};
    vector<int> r = {1724, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2965.0248962811215;
    if(result == expected) {
        cout << "Test Case 336: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 336: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test337() {
    vector<int> x = {0, 4661, 4550, 4360, 4108, 3805, 3426, 3018, 2521, 1990, 1430, 892, 329, -286, -865, -1467, -2017, -2549, -2968, -3437, -3802, -4128, -4355, -4553, -4658, -4701, -4666, -4544, -4376, -4126, -3820, -3435, -3002, -2515, -1988, -1420, -871, -318, 256, 893, 1476, 2037, 2510, 2968, 3436, 3784, 4111, 4372, 4554, 4658};
    vector<int> y = {0, 598, 1180, 1754, 2282, 2757, 3218, 3602, 3966, 4258, 4477, 4614, 4688, 4691, 4620, 4464, 4245, 3948, 3643, 3206, 2764, 2246, 1769, 1168, 630, -6, -567, -1196, -1715, -2250, -2738, -3209, -3617, -3969, -4258, -4480, -4619, -4690, -4693, -4614, -4462, -4236, -3975, -3643, -3207, -2788, -2279, -1725, -1162, -630};
    vector<int> r = {901, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3790.3590589121186;
    if(result == expected) {
        cout << "Test Case 337: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 337: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test338() {
    vector<int> x = {0, 4658, 4549, 4358, 4113, 3805, 3425, 2968, 2537, 1965, 1447, 908, 256, -309, -895, -1448, -1972, -2534, -3012, -3403, -3785, -4114, -4374, -4555, -4662, -4701, -4662, -4560, -4364, -4125, -3791, -3428, -2996, -2531, -1990, -1489, -900, -289, 293, 908, 1452, 1970, 2491, 3020, 3430, 3792, 4137, 4365, 4557, 4665};
    vector<int> y = {0, 626, 1180, 1761, 2274, 2758, 3217, 3644, 3958, 4270, 4472, 4612, 4693, 4691, 4615, 4472, 4266, 3958, 3609, 3240, 2787, 2274, 1717, 1154, 595, 7, -602, -1137, -1745, -2253, -2779, -3214, -3621, -3961, -4258, -4459, -4613, -4692, -4691, -4611, -4471, -4267, -3987, -3601, -3214, -2778, -2231, -1741, -1152, -571};
    vector<int> r = {765, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3907.2784195751565;
    if(result == expected) {
        cout << "Test Case 338: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 338: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test339() {
    vector<int> x = {0, 4667, 4561, 4385, 4115, 3806, 3445, 2988, 2486, 1964, 1439, 906, 299, -295, -909, -1482, -1971, -2532, -3003, -3428, -3805, -4118, -4378, -4556, -4666, -4701, -4660, -4561, -4360, -4124, -3815, -3452, -2987, -2512, -2019, -1432, -893, -266, 333, 872, 1448, 1974, 2547, 3004, 3451, 3823, 4128, 4359, 4558, 4664};
    vector<int> y = {0, 549, 1136, 1695, 2272, 2758, 3197, 3629, 3990, 4270, 4475, 4612, 4691, 4692, 4612, 4461, 4267, 3959, 3616, 3216, 2757, 2266, 1711, 1156, 567, 25, -605, -1138, -1756, -2256, -2742, -3190, -3629, -3972, -4244, -4476, -4615, -4693, -4689, -4618, -4471, -4266, -3949, -3613, -3189, -2734, -2248, -1759, -1143, -580};
    vector<int> r = {1711, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 2959.971977848198;
    if(result == expected) {
        cout << "Test Case 339: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 339: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test340() {
    vector<int> x = {0, 4664, 4543, 4356, 4111, 3823, 3411, 3003, 2543, 2032, 1478, 903, 312, -326, -865, -1437, -1989, -2500, -2964, -3453, -3794, -4108, -4374, -4548, -4665, -4701, -4667, -4556, -4383, -4133, -3804, -3416, -3012, -2545, -2016, -1471, -879, -262, 333, 866, 1463, 1981, 2542, 3000, 3452, 3794, 4117, 4372, 4550, 4662};
    vector<int> y = {0, 580, 1209, 1763, 2278, 2734, 3233, 3617, 3954, 4238, 4461, 4613, 4690, 4689, 4620, 4475, 4258, 3980, 3647, 3189, 2774, 2284, 1722, 1183, 574, 35, -559, -1159, -1696, -2238, -2761, -3228, -3608, -3950, -4245, -4463, -4618, -4692, -4688, -4620, -4466, -4263, -3953, -3617, -3189, -2774, -2267, -1726, -1175, -590};
    vector<int> r = {176, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4485.488867666088;
    if(result == expected) {
        cout << "Test Case 340: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 340: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test341() {
    vector<int> x = {0, 4663, 4546, 4362, 4128, 3811, 3397, 3027, 2526, 1970, 1489, 919, 306, -294, -854, -1486, -2036, -2547, -3015, -3406, -3791, -4102, -4373, -4547, -4662, -4701, -4661, -4545, -4377, -4112, -3789, -3434, -2987, -2552, -1985, -1485, -873, -266, 310, 865, 1461, 2003, 2495, 3000, 3417, 3825, 4138, 4371, 4545, 4661};
    vector<int> y = {0, 596, 1194, 1751, 2247, 2752, 3247, 3597, 3963, 4267, 4459, 4609, 4691, 4690, 4622, 4459, 4237, 3950, 3606, 3238, 2779, 2293, 1722, 1192, 588, -5, -603, -1196, -1713, -2276, -2779, -3209, -3628, -3948, -4261, -4459, -4619, -4692, -4690, -4619, -4466, -4252, -3982, -3619, -3227, -2731, -2231, -1727, -1195, -601};
    vector<int> r = {300, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4383.91196369744;
    if(result == expected) {
        cout << "Test Case 341: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 341: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test342() {
    vector<int> x = {0, 4664, 4559, 4379, 4130, 3820, 3403, 3010, 2542, 1994, 1418, 854, 295, -276, -861, -1428, -2006, -2499, -3027, -3413, -3827, -4121, -4364, -4560, -4665, -4700, -4666, -4553, -4374, -4108, -3821, -3450, -2977, -2551, -1974, -1488, -883, -312, 327, 885, 1448, 2003, 2523, 2970, 3424, 3814, 4127, 4356, 4556, 4665};
    vector<int> y = {0, 573, 1144, 1710, 2241, 2738, 3241, 3610, 3953, 4255, 4482, 4623, 4692, 4692, 4620, 4477, 4251, 3981, 3597, 3234, 2731, 2261, 1745, 1144, 567, -35, -568, -1166, -1718, -2286, -2735, -3192, -3637, -3948, -4265, -4458, -4617, -4690, -4688, -4616, -4472, -4252, -3966, -3643, -3220, -2747, -2251, -1767, -1158, -576};
    vector<int> r = {274, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4406.389681708965;
    if(result == expected) {
        cout << "Test Case 342: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 342: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test343() {
    vector<int> x = {0, 4659, 4542, 4366, 4122, 3787, 3438, 2970, 2532, 1981, 1453, 857, 278, -316, -890, -1468, -2027, -2518, -3007, -3444, -3822, -4112, -4364, -4554, -4663, -4699, -4658, -4545, -4360, -4125, -3818, -3452, -3025, -2499, -2024, -1467, -911, -280, 275, 848, 1429, 1971, 2492, 2965, 3427, 3780, 4131, 4384, 4557, 4666};
    vector<int> y = {0, 619, 1203, 1740, 2258, 2783, 3205, 3642, 3960, 4262, 4469, 4621, 4692, 4690, 4616, 4464, 4239, 3970, 3612, 3200, 2736, 2276, 1747, 1163, 591, -3, -621, -1198, -1756, -2253, -2741, -3190, -3598, -3981, -4242, -4465, -4611, -4691, -4692, -4622, -4477, -4268, -3985, -3647, -3218, -2793, -2243, -1693, -1147, -561};
    vector<int> r = {9, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4661.357314975169;
    if(result == expected) {
        cout << "Test Case 343: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 343: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test344() {
    vector<int> x = {0, 4664, 4546, 4367, 4105, 3794, 3404, 3024, 2533, 2029, 1452, 873, 271, -299, -871, -1457, -1982, -2531, -3011, -3398, -3798, -4126, -4360, -4544, -4661, -4701, -4659, -4554, -4364, -4116, -3808, -3432, -3000, -2540, -1973, -1468, -846, -274, 257, 897, 1448, 2016, 2524, 2975, 3446, 3779, 4107, 4359, 4552, 4664};
    vector<int> y = {0, 585, 1196, 1741, 2290, 2775, 3240, 3599, 3960, 4239, 4471, 4619, 4693, 4690, 4618, 4469, 4261, 3960, 3610, 3247, 2767, 2248, 1755, 1203, 603, 1, -620, -1166, -1746, -2267, -2755, -3210, -3618, -3955, -4266, -4464, -4624, -4692, -4692, -4614, -4471, -4245, -3966, -3639, -3197, -2793, -2284, -1754, -1172, -585};
    vector<int> r = {1229, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3456.4583510210014;
    if(result == expected) {
        cout << "Test Case 344: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 344: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test345() {
    vector<int> x = {0, 4662, 4555, 4367, 4117, 3787, 3441, 2997, 2513, 2037, 1455, 907, 273, -326, -890, -1460, -1966, -2532, -2979, -3431, -3819, -4108, -4381, -4554, -4664, -4699, -4665, -4552, -4358, -4121, -3814, -3452, -3026, -2550, -1990, -1441, -889, -297, 292, 883, 1481, 1986, 2551, 2964, 3441, 3798, 4138, 4356, 4547, 4662};
    vector<int> y = {0, 589, 1156, 1737, 2266, 2786, 3203, 3621, 3971, 4236, 4469, 4612, 4693, 4689, 4614, 4468, 4269, 3960, 3635, 3210, 2740, 2286, 1703, 1159, 584, -22, -572, -1174, -1763, -2261, -2746, -3190, -3597, -3949, -4257, -4474, -4614, -4691, -4690, -4617, -4461, -4259, -3948, -3646, -3202, -2769, -2230, -1766, -1190, -601};
    vector<int> r = {833, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3829.975029804053;
    if(result == expected) {
        cout << "Test Case 345: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 345: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test346() {
    vector<int> x = {0, 4660, 4547, 4370, 4126, 3815, 3448, 3026, 2498, 1975, 1418, 916, 305, -323, -896, -1459, -2032, -2524, -2969, -3433, -3790, -4110, -4375, -4557, -4663, -4700, -4658, -4559, -4378, -4126, -3787, -3446, -2993, -2532, -2001, -1457, -871, -302, 321, 856, 1455, 2033, 2521, 3008, 3429, 3813, 4101, 4374, 4551, 4661};
    vector<int> y = {0, 605, 1193, 1730, 2250, 2744, 3193, 3595, 3982, 4264, 4482, 4609, 4690, 4689, 4613, 4467, 4237, 3966, 3643, 3210, 2778, 2278, 1719, 1148, 592, -2, -620, -1147, -1709, -2250, -2784, -3196, -3625, -3960, -4254, -4468, -4618, -4689, -4688, -4622, -4470, -4237, -3968, -3610, -3215, -2748, -2298, -1721, -1174, -602};
    vector<int> r = {819, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3859.619055688968;
    if(result == expected) {
        cout << "Test Case 346: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 346: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test347() {
    vector<int> x = {0, 4662, 4555, 4356, 4101, 3817, 3452, 2995, 2535, 2011, 1458, 901, 327, -297, -857, -1488, -1999, -2503, -3011, -3451, -3788, -4136, -4381, -4547, -4666, -4699, -4664, -4546, -4371, -4135, -3826, -3430, -3008, -2551, -2037, -1460, -892, -327, 320, 863, 1446, 2020, 2523, 3013, 3405, 3803, 4138, 4382, 4558, 4659};
    vector<int> y = {0, 596, 1154, 1762, 2298, 2742, 3192, 3623, 3958, 4249, 4469, 4614, 4689, 4692, 4621, 4459, 4254, 3979, 3608, 3190, 2782, 2235, 1699, 1188, 553, 9, -578, -1195, -1730, -2234, -2731, -3215, -3611, -3947, -4236, -4467, -4614, -4689, -4689, -4620, -4472, -4243, -3964, -3608, -3241, -2761, -2228, -1700, -1151, -620};
    vector<int> r = {395, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4285.629803841434;
    if(result == expected) {
        cout << "Test Case 347: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 347: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test348() {
    vector<int> x = {0, 4662, 4550, 4369, 4135, 3806, 3430, 2967, 2543, 2026, 1425, 843, 259, -305, -903, -1425, -2002, -2527, -2996, -3406, -3814, -4113, -4371, -4561, -4662, -4699, -4667, -4562, -4362, -4126, -3814, -3425, -3016, -2527, -2035, -1474, -894, -326, 309, 853, 1440, 2009, 2540, 2969, 3451, 3813, 4110, 4363, 4548, 4664};
    vector<int> y = {0, 598, 1179, 1731, 2233, 2757, 3213, 3646, 3953, 4242, 4480, 4624, 4693, 4689, 4613, 4480, 4252, 3963, 3622, 3240, 2746, 2274, 1726, 1137, 590, -27, -555, -1129, -1749, -2250, -2748, -3219, -3604, -3963, -4236, -4464, -4615, -4689, -4689, -4622, -4474, -4250, -3955, -3644, -3190, -2747, -2282, -1746, -1187, -577};
    vector<int> r = {1289, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3393.7810827401217;
    if(result == expected) {
        cout << "Test Case 348: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 348: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test349() {
    vector<int> x = {0, 4665, 4561, 4383, 4131, 3803, 3411, 3011, 2489, 1999, 1422, 859, 266, -301, -911, -1458, -2027, -2511, -3008, -3436, -3780, -4138, -4374, -4553, -4657, -4700, -4668, -4561, -4364, -4105, -3815, -3411, -3005, -2526, -2021, -1472, -857, -322, 332, 852, 1451, 1983, 2533, 3002, 3407, 3812, 4112, 4354, 4543, 4666};
    vector<int> y = {0, 578, 1134, 1697, 2241, 2764, 3234, 3610, 3987, 4253, 4479, 4621, 4692, 4691, 4611, 4469, 4240, 3972, 3612, 3205, 2794, 2231, 1719, 1163, 629, -35, -556, -1136, -1748, -2288, -2746, -3235, -3614, -3964, -4243, -4464, -4622, -4689, -4689, -4623, -4471, -4262, -3958, -3616, -3237, -2748, -2279, -1769, -1201, -555};
    vector<int> r = {949, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3721.4640725478343;
    if(result == expected) {
        cout << "Test Case 349: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 349: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test350() {
    vector<int> x = {0, 4667, 4550, 4371, 4118, 3778, 3437, 2988, 2548, 2038, 1426, 909, 324, -325, -856, -1454, -2032, -2495, -3026, -3448, -3826, -4120, -4375, -4555, -4661, -4701, -4665, -4557, -4357, -4134, -3822, -3424, -2986, -2490, -2010, -1444, -899, -330, 309, 864, 1465, 1985, 2551, 3006, 3411, 3806, 4138, 4364, 4545, 4663};
    vector<int> y = {0, 560, 1175, 1726, 2265, 2795, 3206, 3628, 3950, 4236, 4478, 4612, 4690, 4689, 4621, 4470, 4238, 3983, 3596, 3195, 2731, 2261, 1716, 1160, 599, -8, -576, -1150, -1762, -2237, -2737, -3220, -3631, -3985, -4248, -4473, -4614, -4687, -4690, -4620, -4465, -4261, -3948, -3613, -3234, -2757, -2230, -1747, -1198, -580};
    vector<int> r = {130, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4516.264155475572;
    if(result == expected) {
        cout << "Test Case 350: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 350: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test351() {
    vector<int> x = {0, 4664, 4544, 4364, 4103, 3824, 3405, 3007, 2539, 2005, 1426, 849, 256, -264, -855, -1414, -2029, -2497, -2976, -3434, -3808, -4117, -4381, -4544, -4665, -4699, -4665, -4549, -4357, -4110, -3792, -3424, -2971, -2489, -1998, -1474, -887, -257, 302, 880, 1472, 2003, 2521, 2964, 3426, 3796, 4138, 4382, 4553, 4665};
    vector<int> y = {0, 580, 1203, 1745, 2293, 2733, 3239, 3613, 3955, 4252, 4478, 4623, 4694, 4693, 4622, 4482, 4239, 3982, 3638, 3209, 2755, 2268, 1700, 1197, 576, -3, -578, -1180, -1762, -2281, -2778, -3221, -3643, -3987, -4255, -4462, -4616, -4693, -4690, -4617, -4464, -4252, -3968, -3648, -3217, -2772, -2229, -1702, -1171, -570};
    vector<int> r = {1, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4686.718301068752;
    if(result == expected) {
        cout << "Test Case 351: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 351: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test352() {
    vector<int> x = {0, 4668, 4550, 4366, 4119, 3808, 3446, 3014, 2511, 2022, 1478, 867, 277, -294, -901, -1447, -1982, -2515, -3005, -3418, -3788, -4136, -4369, -4544, -4661, -4700, -4660, -4559, -4385, -4121, -3825, -3421, -3014, -2508, -2007, -1422, -905, -272, 265, 864, 1421, 1991, 2525, 2980, 3422, 3825, 4123, 4366, 4544, 4668};
    vector<int> y = {0, 552, 1180, 1740, 2265, 2754, 3196, 3606, 3973, 4243, 4462, 4619, 4691, 4692, 4612, 4472, 4261, 3969, 3613, 3226, 2782, 2232, 1736, 1205, 611, 39, -614, -1142, -1693, -2260, -2733, -3223, -3607, -3974, -4249, -4480, -4612, -4693, -4693, -4619, -4480, -4257, -3965, -3634, -3223, -2729, -2258, -1741, -1201, -549};
    vector<int> r = {960, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3702.642813156739;
    if(result == expected) {
        cout << "Test Case 352: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 352: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test353() {
    vector<int> x = {0, 4660, 4554, 4368, 4101, 3815, 3437, 2967, 2518, 1969, 1414, 916, 322, -274, -895, -1486, -2031, -2497, -3023, -3421, -3806, -4124, -4354, -4553, -4660, -4700, -4658, -4545, -4362, -4123, -3820, -3427, -3014, -2529, -1993, -1438, -857, -300, 326, 902, 1478, 1966, 2507, 2977, 3406, 3793, 4132, 4360, 4548, 4660};
    vector<int> y = {0, 616, 1162, 1732, 2294, 2746, 3205, 3644, 3968, 4268, 4481, 4610, 4690, 4693, 4613, 4459, 4239, 3982, 3599, 3222, 2759, 2255, 1767, 1163, 613, -37, -630, -1196, -1748, -2258, -2737, -3217, -3608, -3962, -4256, -4474, -4622, -4690, -4689, -4613, -4462, -4269, -3976, -3636, -3238, -2776, -2243, -1754, -1182, -618};
    vector<int> r = {412, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4236.575370415322;
    if(result == expected) {
        cout << "Test Case 353: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 353: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test354() {
    vector<int> x = {0, 4663, 4555, 4374, 4137, 3792, 3405, 2978, 2485, 2029, 1466, 894, 259, -277, -871, -1449, -2018, -2509, -3025, -3440, -3824, -4131, -4368, -4545, -4667, -4699, -4665, -4549, -4364, -4131, -3807, -3438, -3013, -2530, -2011, -1418, -882, -329, 285, 907, 1480, 2023, 2531, 3009, 3426, 3802, 4099, 4366, 4549, 4660};
    vector<int> y = {0, 585, 1158, 1718, 2230, 2777, 3240, 3636, 3989, 4238, 4466, 4614, 4693, 4692, 4619, 4472, 4245, 3974, 3596, 3204, 2732, 2244, 1737, 1202, 558, 19, -583, -1183, -1744, -2240, -2756, -3205, -3608, -3961, -4249, -4481, -4617, -4688, -4691, -4612, -4461, -4242, -3960, -3612, -3219, -2763, -2298, -1740, -1187, -620};
    vector<int> r = {784, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 3886.081095268122;
    if(result == expected) {
        cout << "Test Case 354: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 354: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test355() {
    vector<int> x = {0, 3717, 3666, 3614, 3561, 3507, 3452, 3396, 3339, 3281, 3221, 3161, 3100, 3038, 2975, 2911, 2846, 2780, 2714, 2646, 2578, 2509, 2439, 2369, 2298, 2226, 2153, 2080, 2006, 1932, 1856, 1781, 1705, 1628, 1551, 1473, 1395, 1316, 1237, 1158, 1078, 998, 918, 838, 757, 676, 594, 513, 431, 350};
    vector<int> y = {0, 2876, 2941, 3004, 3067, 3129, 3189, 3249, 3308, 3366, 3422, 3478, 3533, 3586, 3639, 3690, 3740, 3790, 3837, 3884, 3930, 3974, 4017, 4059, 4100, 4140, 4178, 4215, 4250, 4285, 4318, 4350, 4380, 4409, 4437, 4463, 4488, 4512, 4534, 4555, 4575, 4593, 4609, 4625, 4639, 4651, 4662, 4672, 4680, 4687};
    vector<int> r = {1025, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5991.837230874129;
    if(result == expected) {
        cout << "Test Case 355: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 355: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test356() {
    vector<int> x = {0, -3331, -3272, -3213, -3152, -3091, -3029, -2966, -2902, -2837, -2771, -2704, -2637, -2568, -2499, -2429, -2359, -2288, -2216, -2143, -2070, -1996, -1921, -1846, -1770, -1694, -1617, -1540, -1462, -1384, -1305, -1226, -1147, -1067, -987, -907, -826, -745, -664, -583, -501, -420, -338, -256, -174, -92, -10, 72, 154, 236};
    vector<int> y = {0, -3316, -3374, -3430, -3486, -3540, -3594, -3646, -3697, -3747, -3796, -3844, -3891, -3936, -3980, -4023, -4065, -4106, -4145, -4183, -4220, -4255, -4289, -4322, -4354, -4384, -4413, -4441, -4467, -4492, -4515, -4537, -4558, -4577, -4595, -4612, -4627, -4641, -4653, -4664, -4673, -4681, -4688, -4693, -4697, -4699, -4700, -4699, -4697, -4694};
    vector<int> r = {1331, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6421.90757966075;
    if(result == expected) {
        cout << "Test Case 356: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 356: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test357() {
    vector<int> x = {0, 4686, 4692, 4696, 4699, 4700, 4700, 4698, 4695, 4691, 4685, 4678, 4669, 4659, 4647, 4634, 4620, 4604, 4587, 4569, 4549, 4527, 4505, 4481, 4455, 4428, 4400, 4371, 4340, 4308, 4274, 4239, 4203, 4166, 4127, 4088, 4046, 4004, 3961, 3916, 3870, 3823, 3774, 3725, 3674, 3623, 3570, 3516, 3461, 3405};
    vector<int> y = {0, -362, -281, -199, -117, -35, 47, 129, 211, 293, 375, 457, 538, 620, 701, 782, 863, 943, 1023, 1103, 1183, 1262, 1341, 1419, 1497, 1575, 1652, 1728, 1805, 1880, 1955, 2029, 2103, 2176, 2248, 2320, 2391, 2461, 2531, 2599, 2667, 2734, 2801, 2866, 2931, 2994, 3057, 3119, 3180, 3240};
    vector<int> r = {773, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5653.24353635401;
    if(result == expected) {
        cout << "Test Case 357: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 357: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test358() {
    vector<int> x = {0, 4647, 4633, 4619, 4603, 4586, 4567, 4547, 4526, 4503, 4479, 4453, 4426, 4398, 4368, 4337, 4305, 4272, 4237, 4201, 4163, 4124, 4084, 4043, 4001, 3957, 3912, 3866, 3819, 3771, 3721, 3670, 3619, 3566, 3512, 3457, 3401, 3343, 3285, 3226, 3166, 3105, 3043, 2980, 2916, 2851, 2786, 2719, 2652, 2584};
    vector<int> y = {0, 707, 788, 869, 949, 1029, 1109, 1189, 1268, 1347, 1425, 1503, 1581, 1658, 1734, 1810, 1886, 1960, 2035, 2108, 2181, 2254, 2325, 2396, 2466, 2536, 2605, 2672, 2739, 2806, 2871, 2936, 2999, 3062, 3124, 3184, 3244, 3303, 3361, 3418, 3474, 3528, 3582, 3635, 3686, 3736, 3786, 3834, 3880, 3926};
    vector<int> r = {1178, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6204.6567531051;
    if(result == expected) {
        cout << "Test Case 358: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 358: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test359() {
    vector<int> x = {0, 2668, 2600, 2531, 2461, 2391, 2320, 2248, 2176, 2103, 2029, 1955, 1880, 1805, 1729, 1652, 1575, 1498, 1420, 1341, 1262, 1183, 1104, 1024, 944, 863, 782, 701, 620, 539, 457, 375, 294, 212, 130, 48, -34, -116, -198, -280, -362, -444, -525, -607, -688, -769, -850, -931, -1011, -1091};
    vector<int> y = {0, 3870, 3916, 3960, 4004, 4046, 4087, 4127, 4166, 4203, 4239, 4274, 4308, 4340, 4371, 4400, 4428, 4455, 4480, 4505, 4527, 4549, 4569, 4587, 4604, 4620, 4634, 4647, 4659, 4669, 4678, 4685, 4691, 4695, 4698, 4700, 4700, 4699, 4696, 4692, 4686, 4679, 4671, 4661, 4649, 4637, 4623, 4607, 4590, 4572};
    vector<int> r = {1185, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6214.616318552564;
    if(result == expected) {
        cout << "Test Case 359: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 359: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test360() {
    vector<int> x = {0, -4516, -4493, -4468, -4442, -4414, -4386, -4355, -4324, -4291, -4257, -4222, -4185, -4147, -4108, -4067, -4025, -3982, -3938, -3893, -3846, -3799, -3750, -3700, -3649, -3596, -3543, -3489, -3433, -3377, -3319, -3260, -3201, -3140, -3079, -3016, -2953, -2889, -2824, -2758, -2691, -2623, -2555, -2485, -2415, -2345, -2273, -2201, -2128, -2055};
    vector<int> y = {0, -1302, -1380, -1458, -1536, -1613, -1690, -1766, -1842, -1917, -1992, -2066, -2139, -2212, -2284, -2355, -2426, -2496, -2565, -2633, -2701, -2768, -2834, -2899, -2963, -3026, -3088, -3150, -3210, -3269, -3328, -3385, -3442, -3497, -3551, -3604, -3657, -3708, -3757, -3806, -3854, -3900, -3945, -3989, -4032, -4073, -4114, -4153, -4191, -4227};
    vector<int> r = {1909, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7291.480150962844;
    if(result == expected) {
        cout << "Test Case 360: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 360: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test361() {
    vector<int> x = {0, -2023, -2097, -2170, -2243, -2314, -2385, -2456, -2525, -2594, -2662, -2729, -2796, -2861, -2926, -2990, -3052, -3114, -3175, -3235, -3294, -3352, -3409, -3465, -3520, -3574, -3627, -3678, -3729, -3778, -3826, -3873, -3919, -3964, -4007, -4050, -4091, -4130, -4169, -4206, -4242, -4277, -4310, -4342, -4373, -4402, -4430, -4457, -4482, -4506};
    vector<int> y = {0, 4242, 4206, 4169, 4130, 4091, 4050, 4007, 3964, 3919, 3873, 3826, 3778, 3729, 3678, 3627, 3574, 3520, 3465, 3409, 3352, 3294, 3235, 3175, 3114, 3052, 2990, 2926, 2861, 2796, 2729, 2662, 2594, 2525, 2456, 2385, 2314, 2243, 2170, 2097, 2023, 1949, 1874, 1799, 1723, 1646, 1569, 1491, 1413, 1335};
    vector<int> r = {1593, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6806.304727187237;
    if(result == expected) {
        cout << "Test Case 361: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 361: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test362() {
    vector<int> x = {0, 2876, 2811, 2745, 2678, 2610, 2541, 2472, 2402, 2331, 2259, 2187, 2114, 2041, 1966, 1892, 1816, 1740, 1664, 1587, 1509, 1432, 1353, 1274, 1195, 1116, 1036, 956, 875, 795, 714, 632, 551, 470, 388, 306, 224, 142, 60, -22, -104, -186, -268, -350, -431, -513, -595, -676, -757, -838};
    vector<int> y = {0, 3717, 3767, 3815, 3863, 3909, 3954, 3997, 4040, 4081, 4121, 4160, 4198, 4234, 4269, 4303, 4335, 4366, 4396, 4424, 4451, 4477, 4501, 4524, 4545, 4566, 4584, 4602, 4618, 4632, 4646, 4657, 4668, 4676, 4684, 4690, 4695, 4698, 4700, 4700, 4699, 4696, 4692, 4687, 4680, 4672, 4662, 4651, 4639, 4625};
    vector<int> r = {305, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5060.250675372836;
    if(result == expected) {
        cout << "Test Case 362: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 362: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test363() {
    vector<int> x = {0, 4485, 4509, 4531, 4552, 4572, 4590, 4607, 4623, 4637, 4650, 4661, 4671, 4679, 4686, 4692, 4696, 4699, 4700, 4700, 4698, 4695, 4691, 4685, 4678, 4669, 4659, 4647, 4634, 4620, 4604, 4587, 4568, 4548, 4527, 4504, 4480, 4454, 4428, 4399, 4370, 4339, 4307, 4273, 4238, 4202, 4165, 4126, 4086, 4045};
    vector<int> y = {0, -1405, -1327, -1248, -1169, -1089, -1009, -929, -848, -767, -686, -605, -524, -442, -360, -278, -196, -114, -32, 50, 132, 214, 295, 377, 459, 541, 622, 703, 784, 865, 945, 1026, 1106, 1185, 1264, 1343, 1421, 1499, 1577, 1654, 1731, 1807, 1882, 1957, 2031, 2105, 2178, 2250, 2322, 2393};
    vector<int> r = {146, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4869.323765955779;
    if(result == expected) {
        cout << "Test Case 363: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 363: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test364() {
    vector<int> x = {0, 4693, 4688, 4681, 4673, 4663, 4653, 4640, 4626, 4611, 4595, 4577, 4557, 4537, 4515, 4491, 4466, 4440, 4412, 4383, 4353, 4322, 4289, 4255, 4219, 4182, 4144, 4105, 4064, 4022, 3979, 3935, 3890, 3843, 3795, 3746, 3696, 3645, 3593, 3539, 3485, 3429, 3372, 3315, 3256, 3197, 3136, 3074, 3012, 2948};
    vector<int> y = {0, 258, 340, 422, 503, 585, 666, 747, 828, 909, 989, 1069, 1149, 1228, 1307, 1386, 1464, 1542, 1619, 1696, 1772, 1848, 1923, 1997, 2071, 2145, 2217, 2289, 2361, 2431, 2501, 2570, 2638, 2706, 2772, 2838, 2903, 2967, 3030, 3093, 3154, 3214, 3274, 3332, 3389, 3446, 3501, 3555, 3608, 3660};
    vector<int> r = {467, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5260.000274213604;
    if(result == expected) {
        cout << "Test Case 364: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 364: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test365() {
    vector<int> x = {0, -4517, -4493, -4469, -4443, -4415, -4386, -4356, -4325, -4292, -4258, -4223, -4186, -4148, -4109, -4068, -4027, -3984, -3940, -3894, -3848, -3800, -3751, -3701, -3650, -3598, -3544, -3490, -3435, -3378, -3320, -3262, -3202, -3142, -3080, -3018, -2955, -2890, -2825, -2759, -2692, -2625, -2556, -2487, -2417, -2346, -2275, -2203, -2130, -2057};
    vector<int> y = {0, -1299, -1378, -1456, -1534, -1611, -1688, -1764, -1840, -1915, -1990, -2064, -2137, -2210, -2282, -2354, -2424, -2494, -2563, -2632, -2699, -2766, -2832, -2897, -2961, -3024, -3087, -3148, -3208, -3268, -3326, -3384, -3440, -3496, -3550, -3603, -3655, -3706, -3756, -3805, -3852, -3899, -3944, -3988, -4031, -4072, -4113, -4152, -4190, -4226};
    vector<int> r = {1174, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6198.791351436169;
    if(result == expected) {
        cout << "Test Case 365: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 365: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test366() {
    vector<int> x = {0, 3728, 3678, 3626, 3573, 3520, 3465, 3409, 3352, 3294, 3235, 3175, 3114, 3052, 2989, 2925, 2861, 2795, 2729, 2661, 2593, 2525, 2455, 2385, 2314, 2242, 2170, 2096, 2023, 1948, 1873, 1798, 1722, 1645, 1568, 1491, 1413, 1334, 1255, 1176, 1096, 1016, 936, 856, 775, 694, 613, 531, 450, 368};
    vector<int> y = {0, 2862, 2926, 2990, 3053, 3115, 3176, 3236, 3295, 3353, 3410, 3466, 3521, 3574, 3627, 3679, 3729, 3779, 3827, 3874, 3920, 3964, 4008, 4050, 4091, 4131, 4169, 4207, 4242, 4277, 4311, 4343, 4373, 4403, 4431, 4457, 4483, 4507, 4529, 4550, 4570, 4589, 4606, 4621, 4636, 4648, 4660, 4670, 4678, 4686};
    vector<int> r = {1804, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7127.936417191199;
    if(result == expected) {
        cout << "Test Case 366: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 366: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test367() {
    vector<int> x = {0, 1993, 1918, 1843, 1767, 1691, 1614, 1537, 1459, 1381, 1302, 1223, 1144, 1064, 984, 904, 823, 742, 661, 580, 499, 417, 335, 253, 171, 89, 7, -75, -157, -239, -321, -402, -484, -566, -647, -728, -809, -890, -970, -1050, -1130, -1209, -1288, -1367, -1445, -1523, -1601, -1678, -1754, -1830};
    vector<int> y = {0, 4257, 4291, 4324, 4355, 4385, 4414, 4442, 4468, 4492, 4516, 4538, 4559, 4578, 4596, 4612, 4627, 4641, 4653, 4664, 4673, 4681, 4688, 4693, 4697, 4699, 4700, 4699, 4697, 4694, 4689, 4683, 4675, 4666, 4655, 4643, 4630, 4615, 4599, 4581, 4562, 4542, 4520, 4497, 4472, 4446, 4419, 4390, 4360, 4329};
    vector<int> r = {1669, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6921.244794428337;
    if(result == expected) {
        cout << "Test Case 367: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 367: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test368() {
    vector<int> x = {0, -3842, -3794, -3745, -3695, -3643, -3591, -3538, -3483, -3427, -3371, -3313, -3254, -3195, -3134, -3073, -3010, -2947, -2882, -2817, -2751, -2684, -2616, -2548, -2478, -2408, -2337, -2266, -2194, -2121, -2047, -1973, -1898, -1823, -1747, -1671, -1594, -1516, -1439, -1360, -1282, -1202, -1123, -1043, -963, -883, -802, -721, -640, -558};
    vector<int> y = {0, -2708, -2774, -2840, -2905, -2969, -3032, -3094, -3156, -3216, -3275, -3334, -3391, -3447, -3502, -3557, -3610, -3662, -3713, -3762, -3811, -3858, -3905, -3950, -3993, -4036, -4078, -4118, -4157, -4194, -4231, -4266, -4300, -4332, -4363, -4393, -4421, -4449, -4474, -4499, -4522, -4544, -4564, -4583, -4600, -4616, -4631, -4644, -4656, -4667};
    vector<int> r = {1900, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7277.438869169928;
    if(result == expected) {
        cout << "Test Case 368: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 368: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test369() {
    vector<int> x = {0, -3962, -3917, -3871, -3824, -3776, -3726, -3676, -3624, -3571, -3518, -3463, -3407, -3350, -3292, -3232, -3172, -3111, -3049, -2987, -2923, -2858, -2793, -2726, -2659, -2591, -2522, -2452, -2382, -2311, -2239, -2167, -2094, -2020, -1946, -1871, -1795, -1719, -1642, -1565, -1488, -1410, -1331, -1252, -1173, -1093, -1013, -933, -853, -772};
    vector<int> y = {0, -2529, -2597, -2665, -2732, -2799, -2864, -2929, -2993, -3055, -3117, -3178, -3238, -3297, -3355, -3412, -3468, -3523, -3576, -3629, -3681, -3731, -3780, -3829, -3876, -3921, -3966, -4009, -4052, -4093, -4132, -4171, -4208, -4244, -4278, -4312, -4344, -4374, -4404, -4432, -4458, -4484, -4508, -4530, -4551, -4571, -4589, -4606, -4622, -4636};
    vector<int> r = {1876, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7239.79283368919;
    if(result == expected) {
        cout << "Test Case 369: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 369: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test370() {
    vector<int> x = {0, -4616, -4600, -4583, -4564, -4543, -4522, -4499, -4474, -4448, -4421, -4393, -4363, -4332, -4299, -4265, -4230, -4194, -4156, -4117, -4077, -4036, -3993, -3949, -3904, -3858, -3810, -3762, -3712, -3661, -3609, -3556, -3502, -3446, -3390, -3333, -3274, -3215, -3155, -3094, -3031, -2968, -2904, -2839, -2773, -2707, -2639, -2571, -2502, -2432};
    vector<int> y = {0, -884, -964, -1044, -1124, -1204, -1283, -1361, -1440, -1518, -1595, -1672, -1748, -1824, -1900, -1974, -2048, -2122, -2195, -2267, -2338, -2409, -2479, -2549, -2617, -2685, -2752, -2818, -2883, -2947, -3011, -3073, -3135, -3196, -3255, -3314, -3372, -3428, -3484, -3538, -3592, -3644, -3695, -3746, -3795, -3842, -3889, -3934, -3979, -4022};
    vector<int> r = {568, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5387.6616708436495;
    if(result == expected) {
        cout << "Test Case 370: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 370: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test371() {
    vector<int> x = {0, 1268, 1189, 1109, 1030, 949, 869, 788, 707, 626, 545, 463, 381, 300, 218, 136, 54, -28, -110, -192, -274, -356, -438, -520, -601, -682, -763, -844, -925, -1005, -1085, -1165, -1244, -1323, -1401, -1479, -1557, -1634, -1711, -1787, -1863, -1938, -2012, -2086, -2159, -2232, -2303, -2375, -2445, -2515};
    vector<int> y = {0, 4526, 4547, 4567, 4586, 4603, 4619, 4633, 4646, 4658, 4668, 4677, 4685, 4690, 4695, 4698, 4700, 4700, 4699, 4696, 4692, 4686, 4680, 4671, 4661, 4650, 4638, 4624, 4608, 4591, 4573, 4553, 4532, 4510, 4486, 4461, 4435, 4407, 4378, 4347, 4315, 4282, 4248, 4212, 4175, 4136, 4097, 4056, 4014, 3971};
    vector<int> r = {249, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4992.776847786409;
    if(result == expected) {
        cout << "Test Case 371: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 371: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test372() {
    vector<int> x = {0, -3167, -3227, -3286, -3345, -3402, -3458, -3513, -3567, -3620, -3671, -3722, -3772, -3820, -3867, -3913, -3958, -4002, -4044, -4085, -4125, -4164, -4201, -4237, -4272, -4306, -4338, -4369, -4398, -4427, -4454, -4479, -4503, -4526, -4548, -4568, -4586, -4603, -4619, -4634, -4647, -4658, -4669, -4677, -4685, -4691, -4695, -4698, -4700, -4700};
    vector<int> y = {0, 3473, 3417, 3360, 3302, 3243, 3183, 3123, 3061, 2998, 2934, 2870, 2805, 2738, 2671, 2603, 2535, 2465, 2395, 2324, 2252, 2180, 2107, 2033, 1959, 1884, 1809, 1733, 1656, 1579, 1502, 1424, 1345, 1267, 1187, 1108, 1028, 948, 867, 787, 706, 624, 543, 461, 380, 298, 216, 134, 52, -30};
    vector<int> r = {1416, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6545.152740448771;
    if(result == expected) {
        cout << "Test Case 372: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 372: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test373() {
    vector<int> x = {0, -2209, -2136, -2063, -1989, -1914, -1839, -1763, -1687, -1610, -1533, -1455, -1377, -1298, -1219, -1140, -1060, -980, -900, -819, -738, -657, -576, -494, -412, -331, -249, -167, -85, -3, 79, 161, 243, 325, 407, 489, 570, 651, 733, 813, 894, 974, 1055, 1134, 1214, 1293, 1371, 1450, 1528, 1605};
    vector<int> y = {0, -4149, -4186, -4223, -4258, -4293, -4325, -4357, -4387, -4416, -4443, -4469, -4494, -4517, -4539, -4560, -4579, -4597, -4613, -4628, -4642, -4654, -4665, -4674, -4682, -4688, -4693, -4697, -4699, -4700, -4699, -4697, -4694, -4689, -4682, -4675, -4665, -4655, -4643, -4629, -4614, -4598, -4580, -4561, -4541, -4519, -4495, -4471, -4445, -4418};
    vector<int> r = {469, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5263.13778154433;
    if(result == expected) {
        cout << "Test Case 373: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 373: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test374() {
    vector<int> x = {0, 3150, 3088, 3026, 2963, 2899, 2833, 2768, 2701, 2633, 2565, 2496, 2426, 2355, 2284, 2212, 2139, 2066, 1992, 1917, 1842, 1766, 1690, 1613, 1536, 1458, 1380, 1301, 1222, 1143, 1063, 983, 903, 822, 741, 660, 579, 497, 416, 334, 252, 170, 88, 6, -76, -158, -240, -322, -403, -485};
    vector<int> y = {0, 3489, 3543, 3596, 3649, 3700, 3750, 3799, 3846, 3893, 3938, 3983, 4025, 4067, 4108, 4147, 4185, 4222, 4257, 4291, 4324, 4355, 4386, 4414, 4442, 4468, 4493, 4516, 4538, 4559, 4578, 4596, 4612, 4628, 4641, 4653, 4664, 4674, 4682, 4688, 4693, 4697, 4699, 4700, 4699, 4697, 4694, 4689, 4683, 4675};
    vector<int> r = {520, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5327.135507881306;
    if(result == expected) {
        cout << "Test Case 374: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 374: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test375() {
    vector<int> x = {0, -735, -654, -573, -491, -410, -328, -246, -164, -82, 0, 82, 164, 246, 328, 409, 491, 573, 654, 735, 816, 897, 977, 1057, 1137, 1216, 1295, 1374, 1452, 1530, 1607, 1684, 1761, 1836, 1912, 1986, 2060, 2134, 2206, 2278, 2350, 2421, 2490, 2560, 2628, 2696, 2762, 2828, 2893, 2958};
    vector<int> y = {0, -4642, -4654, -4665, -4674, -4682, -4689, -4694, -4697, -4699, -4700, -4699, -4697, -4694, -4689, -4682, -4674, -4665, -4654, -4642, -4629, -4614, -4597, -4580, -4560, -4540, -4518, -4495, -4470, -4444, -4417, -4388, -4358, -4326, -4294, -4260, -4224, -4188, -4150, -4111, -4070, -4029, -3986, -3942, -3897, -3850, -3802, -3754, -3704, -3653};
    vector<int> r = {1884, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7252.323430786954;
    if(result == expected) {
        cout << "Test Case 375: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 375: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test376() {
    vector<int> x = {0, 2205, 2277, 2348, 2419, 2489, 2558, 2626, 2694, 2761, 2827, 2892, 2956, 3020, 3082, 3143, 3204, 3263, 3322, 3379, 3436, 3491, 3546, 3599, 3651, 3702, 3752, 3801, 3849, 3895, 3941, 3985, 4028, 4069, 4110, 4149, 4187, 4223, 4259, 4293, 4326, 4357, 4387, 4416, 4443, 4469, 4494, 4517, 4539, 4560};
    vector<int> y = {0, -4151, -4112, -4071, -4030, -3987, -3943, -3898, -3851, -3804, -3755, -3705, -3654, -3602, -3548, -3494, -3439, -3382, -3325, -3266, -3207, -3146, -3085, -3023, -2959, -2895, -2830, -2764, -2698, -2630, -2562, -2492, -2422, -2352, -2280, -2208, -2136, -2062, -1988, -1914, -1838, -1763, -1686, -1609, -1532, -1454, -1376, -1297, -1218, -1139};
    vector<int> r = {458, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5249.115650971238;
    if(result == expected) {
        cout << "Test Case 376: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 376: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test377() {
    vector<int> x = {0, 1696, 1619, 1542, 1464, 1386, 1307, 1228, 1149, 1069, 989, 909, 828, 748, 666, 585, 504, 422, 340, 258, 176, 94, 12, -70, -152, -234, -315, -397, -479, -560, -642, -723, -804, -885, -965, -1045, -1125, -1204, -1284, -1362, -1441, -1518, -1596, -1673, -1749, -1825, -1900, -1975, -2049, -2123};
    vector<int> y = {0, 4383, 4412, 4440, 4466, 4491, 4514, 4537, 4557, 4577, 4595, 4611, 4626, 4640, 4653, 4663, 4673, 4681, 4688, 4693, 4697, 4699, 4700, 4699, 4698, 4694, 4689, 4683, 4676, 4666, 4656, 4644, 4631, 4616, 4600, 4582, 4563, 4543, 4521, 4498, 4474, 4448, 4421, 4392, 4362, 4331, 4299, 4265, 4230, 4193};
    vector<int> r = {808, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5699.082761960614;
    if(result == expected) {
        cout << "Test Case 377: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 377: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test378() {
    vector<int> x = {0, 511, 592, 674, 755, 835, 916, 996, 1076, 1156, 1235, 1314, 1393, 1471, 1549, 1626, 1703, 1779, 1855, 1930, 2004, 2078, 2151, 2224, 2296, 2367, 2437, 2507, 2576, 2644, 2712, 2778, 2844, 2909, 2973, 3036, 3098, 3159, 3220, 3279, 3337, 3395, 3451, 3506, 3560, 3613, 3665, 3716, 3765, 3814};
    vector<int> y = {0, -4672, -4663, -4651, -4639, -4625, -4610, -4593, -4575, -4556, -4535, -4512, -4489, -4464, -4438, -4410, -4381, -4350, -4319, -4286, -4251, -4216, -4179, -4141, -4101, -4060, -4019, -3975, -3931, -3885, -3839, -3791, -3742, -3692, -3640, -3588, -3534, -3480, -3424, -3367, -3309, -3251, -3191, -3130, -3069, -3006, -2943, -2878, -2813, -2747};
    vector<int> r = {1862, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7217.916769621315;
    if(result == expected) {
        cout << "Test Case 378: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 378: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test379() {
    vector<int> x = {0, 4232, 4196, 4158, 4119, 4079, 4038, 3995, 3951, 3906, 3860, 3813, 3764, 3715, 3664, 3612, 3559, 3505, 3450, 3393, 3336, 3278, 3218, 3158, 3097, 3035, 2972, 2908, 2843, 2777, 2710, 2643, 2575, 2506, 2436, 2365, 2294, 2222, 2150, 2076, 2002, 1928, 1853, 1777, 1701, 1624, 1547, 1469, 1391, 1313};
    vector<int> y = {0, 2044, 2118, 2191, 2263, 2334, 2405, 2475, 2545, 2613, 2681, 2748, 2814, 2879, 2944, 3007, 3070, 3132, 3192, 3252, 3311, 3368, 3425, 3481, 3535, 3589, 3641, 3693, 3743, 3792, 3840, 3886, 3932, 3976, 4019, 4061, 4102, 4141, 4180, 4216, 4252, 4286, 4319, 4351, 4381, 4410, 4438, 4464, 4489, 4513};
    vector<int> r = {405, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5182.934090587875;
    if(result == expected) {
        cout << "Test Case 379: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 379: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test380() {
    vector<int> x = {0, -653, -734, -815, -896, -976, -1056, -1136, -1216, -1295, -1373, -1452, -1529, -1607, -1684, -1760, -1836, -1911, -1986, -2060, -2133, -2206, -2278, -2349, -2420, -2490, -2559, -2628, -2695, -2762, -2828, -2893, -2957, -3020, -3083, -3144, -3205, -3264, -3323, -3380, -3437, -3492, -3547, -3600, -3652, -3703, -3753, -3802, -3850, -3896};
    vector<int> y = {0, 4654, 4642, 4629, 4614, 4597, 4580, 4561, 4540, 4518, 4495, 4470, 4444, 4417, 4388, 4358, 4327, 4294, 4260, 4225, 4188, 4150, 4111, 4071, 4029, 3986, 3942, 3897, 3850, 3803, 3754, 3704, 3653, 3601, 3548, 3493, 3438, 3381, 3324, 3265, 3206, 3146, 3084, 3022, 2958, 2894, 2829, 2763, 2696, 2629};
    vector<int> r = {1892, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 7264.460187468339;
    if(result == expected) {
        cout << "Test Case 380: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 380: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test381() {
    vector<int> x = {0, -2658, -2726, -2792, -2857, -2922, -2986, -3049, -3111, -3172, -3232, -3291, -3349, -3406, -3462, -3517, -3571, -3624, -3675, -3726, -3775, -3824, -3871, -3917, -3961, -4005, -4047, -4088, -4128, -4167, -4204, -4240, -4275, -4308, -4340, -4371, -4401, -4429, -4456, -4481, -4505, -4528, -4549, -4569, -4588, -4605, -4620, -4635, -4648, -4659};
    vector<int> y = {0, 3876, 3829, 3781, 3732, 3681, 3630, 3577, 3523, 3468, 3412, 3356, 3298, 3239, 3179, 3118, 3056, 2993, 2929, 2865, 2799, 2733, 2666, 2598, 2529, 2460, 2389, 2318, 2247, 2174, 2101, 2028, 1953, 1878, 1803, 1727, 1650, 1573, 1496, 1418, 1339, 1261, 1181, 1102, 1022, 942, 861, 780, 699, 618};
    vector<int> r = {1577, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6782.492226440665;
    if(result == expected) {
        cout << "Test Case 381: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 381: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test382() {
    vector<int> x = {0, 3294, 3352, 3409, 3465, 3520, 3574, 3627, 3678, 3729, 3778, 3826, 3873, 3919, 3964, 4007, 4050, 4091, 4131, 4169, 4206, 4242, 4277, 4310, 4342, 4373, 4402, 4430, 4457, 4483, 4506, 4529, 4550, 4570, 4589, 4606, 4621, 4636, 4648, 4660, 4670, 4678, 4686, 4691, 4696, 4698, 4700, 4700, 4698, 4696};
    vector<int> y = {0, -3352, -3294, -3235, -3175, -3114, -3052, -2989, -2926, -2861, -2796, -2729, -2662, -2594, -2525, -2456, -2385, -2314, -2243, -2170, -2097, -2023, -1949, -1874, -1798, -1722, -1646, -1569, -1491, -1413, -1335, -1256, -1177, -1097, -1017, -937, -856, -776, -695, -613, -532, -450, -369, -287, -205, -123, -41, 41, 123, 205};
    vector<int> r = {1619, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6845.706341562678;
    if(result == expected) {
        cout << "Test Case 382: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 382: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test383() {
    vector<int> x = {0, 2221, 2148, 2075, 2001, 1926, 1851, 1776, 1699, 1623, 1545, 1468, 1390, 1311, 1232, 1153, 1073, 993, 913, 832, 751, 670, 589, 507, 426, 344, 262, 180, 98, 16, -66, -148, -230, -312, -394, -475, -557, -638, -719, -800, -881, -961, -1041, -1121, -1201, -1280, -1359, -1437, -1515, -1592};
    vector<int> y = {0, 4142, 4180, 4217, 4253, 4287, 4320, 4352, 4382, 4411, 4439, 4465, 4490, 4513, 4536, 4556, 4576, 4594, 4611, 4626, 4640, 4652, 4663, 4673, 4681, 4687, 4693, 4697, 4699, 4700, 4700, 4698, 4694, 4690, 4683, 4676, 4667, 4656, 4645, 4631, 4617, 4601, 4583, 4564, 4544, 4522, 4499, 4475, 4449, 4422};
    vector<int> r = {207, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4941.874826061669;
    if(result == expected) {
        cout << "Test Case 383: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 383: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test384() {
    vector<int> x = {0, 2300, 2371, 2441, 2511, 2580, 2648, 2716, 2782, 2848, 2913, 2977, 3040, 3102, 3163, 3223, 3282, 3340, 3398, 3454, 3509, 3563, 3616, 3668, 3719, 3768, 3817, 3864, 3910, 3955, 3999, 4041, 4082, 4122, 4161, 4199, 4235, 4270, 4303, 4336, 4367, 4396, 4425, 4452, 4477, 4502, 4525, 4546, 4566, 4585};
    vector<int> y = {0, -4099, -4058, -4016, -3973, -3929, -3883, -3836, -3788, -3739, -3689, -3637, -3585, -3531, -3477, -3421, -3364, -3306, -3247, -3188, -3127, -3065, -3003, -2939, -2874, -2809, -2743, -2676, -2608, -2539, -2470, -2400, -2329, -2257, -2185, -2112, -2039, -1964, -1890, -1814, -1738, -1662, -1585, -1507, -1429, -1351, -1272, -1193, -1114, -1034};
    vector<int> r = {125, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4844.827683896112;
    if(result == expected) {
        cout << "Test Case 384: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 384: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test385() {
    vector<int> x = {0, -3472, -3417, -3360, -3302, -3243, -3183, -3122, -3061, -2998, -2934, -2870, -2804, -2738, -2671, -2603, -2534, -2465, -2395, -2324, -2252, -2180, -2107, -2033, -1959, -1884, -1809, -1733, -1656, -1579, -1502, -1424, -1345, -1266, -1187, -1108, -1028, -948, -867, -786, -705, -624, -543, -461, -379, -298, -216, -134, -52, 30};
    vector<int> y = {0, -3167, -3227, -3287, -3345, -3402, -3458, -3513, -3567, -3620, -3672, -3722, -3772, -3820, -3867, -3913, -3958, -4002, -4044, -4085, -4125, -4164, -4201, -4238, -4272, -4306, -4338, -4369, -4399, -4427, -4454, -4479, -4503, -4526, -4548, -4568, -4586, -4603, -4619, -4634, -4647, -4658, -4669, -4677, -4685, -4691, -4695, -4698, -4700, -4700};
    vector<int> r = {1396, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 6515.786625458323;
    if(result == expected) {
        cout << "Test Case 385: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 385: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test386() {
    vector<int> x = {0, -1198, -1278, -1356, -1435, -1513, -1590, -1667, -1743, -1819, -1895, -1969, -2044, -2117, -2190, -2262, -2334, -2405, -2475, -2544, -2613, -2681, -2748, -2814, -2879, -2943, -3007, -3069, -3131, -3192, -3252, -3310, -3368, -3425, -3480, -3535, -3588, -3641, -3692, -3742, -3791, -3839, -3886, -3932, -3976, -4019, -4061, -4102, -4141, -4179};
    vector<int> y = {0, 4545, 4523, 4500, 4476, 4450, 4423, 4394, 4365, 4334, 4301, 4267, 4232, 4196, 4159, 4120, 4080, 4038, 3996, 3952, 3907, 3861, 3813, 3765, 3715, 3664, 3612, 3559, 3505, 3450, 3394, 3337, 3278, 3219, 3159, 3097, 3035, 2972, 2908, 2843, 2778, 2711, 2644, 2575, 2506, 2437, 2366, 2295, 2223, 2150};
    vector<int> r = {370, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5139.68745982436;
    if(result == expected) {
        cout << "Test Case 386: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 386: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test387() {
    vector<int> x = {0, 4174, 4211, 4247, 4281, 4314, 4346, 4377, 4406, 4434, 4460, 4486, 4509, 4532, 4553, 4573, 4591, 4608, 4623, 4637, 4650, 4661, 4671, 4679, 4686, 4692, 4696, 4699, 4700, 4700, 4698, 4695, 4691, 4685, 4677, 4669, 4658, 4647, 4634, 4619, 4604, 4586, 4568, 4548, 4526, 4503, 4479, 4454, 4427, 4399};
    vector<int> y = {0, -2161, -2088, -2014, -1939, -1864, -1789, -1713, -1636, -1559, -1481, -1403, -1325, -1246, -1167, -1087, -1007, -927, -846, -765, -684, -603, -522, -440, -358, -276, -194, -112, -30, 52, 134, 216, 297, 379, 461, 543, 624, 705, 786, 867, 947, 1028, 1107, 1187, 1266, 1345, 1423, 1501, 1579, 1656};
    vector<int> r = {925, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5856.138018706021;
    if(result == expected) {
        cout << "Test Case 387: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 387: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test388() {
    vector<int> x = {0, 2838, 2903, 2967, 3030, 3092, 3154, 3214, 3273, 3332, 3389, 3445, 3501, 3555, 3608, 3660, 3711, 3761, 3809, 3857, 3903, 3948, 3992, 4035, 4076, 4116, 4155, 4193, 4229, 4265, 4298, 4331, 4362, 4392, 4421, 4448, 4474, 4498, 4521, 4543, 4563, 4582, 4600, 4616, 4631, 4644, 4656, 4666, 4675, 4683};
    vector<int> y = {0, -3747, -3696, -3645, -3593, -3539, -3485, -3429, -3373, -3315, -3257, -3197, -3136, -3075, -3012, -2949, -2884, -2819, -2753, -2686, -2619, -2550, -2481, -2411, -2340, -2268, -2196, -2123, -2050, -1976, -1901, -1826, -1750, -1673, -1597, -1519, -1441, -1363, -1284, -1205, -1126, -1046, -966, -885, -805, -724, -643, -561, -480, -398};
    vector<int> r = {309, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5065.26604315908;
    if(result == expected) {
        cout << "Test Case 388: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 388: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test389() {
    vector<int> x = {0, -4291, -4257, -4222, -4185, -4147, -4108, -4068, -4026, -3983, -3939, -3893, -3847, -3799, -3750, -3700, -3649, -3597, -3543, -3489, -3434, -3377, -3319, -3261, -3201, -3141, -3079, -3017, -2953, -2889, -2824, -2758, -2691, -2624, -2555, -2486, -2416, -2345, -2274, -2202, -2129, -2055, -1981, -1907, -1831, -1755, -1679, -1602, -1525, -1447};
    vector<int> y = {0, -1917, -1991, -2065, -2139, -2211, -2283, -2355, -2425, -2495, -2564, -2633, -2700, -2767, -2833, -2898, -2962, -3025, -3088, -3149, -3209, -3269, -3327, -3385, -3441, -3497, -3551, -3604, -3656, -3707, -3757, -3806, -3853, -3900, -3945, -3989, -4032, -4073, -4113, -4152, -4190, -4227, -4262, -4296, -4329, -4360, -4390, -4418, -4446, -4472};
    vector<int> r = {66, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4775.500126489104;
    if(result == expected) {
        cout << "Test Case 389: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 389: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test390() {
    vector<int> x = {0, -2134, -2061, -1987, -1912, -1837, -1761, -1685, -1608, -1531, -1453, -1375, -1296, -1217, -1138, -1058, -978, -898, -817, -736, -655, -574, -492, -410, -329, -247, -165, -83, -1, 81, 163, 245, 327, 409, 490, 572, 653, 734, 815, 896, 976, 1056, 1136, 1216, 1295, 1373, 1452, 1529, 1607, 1684};
    vector<int> y = {0, -4187, -4224, -4259, -4293, -4326, -4357, -4388, -4416, -4444, -4470, -4494, -4518, -4540, -4560, -4579, -4597, -4613, -4628, -4642, -4654, -4665, -4674, -4682, -4688, -4694, -4697, -4699, -4700, -4699, -4697, -4694, -4689, -4682, -4674, -4665, -4654, -4642, -4629, -4614, -4597, -4580, -4561, -4540, -4518, -4495, -4470, -4444, -4417, -4388};
    vector<int> r = {595, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 5421.845455301617;
    if(result == expected) {
        cout << "Test Case 390: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 390: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test391() {
    vector<int> x = {0, 3648, 4027, 4342, 4589, 4763, 4862, 4884, 4830, 4699, 4494, 4218, 3876, 3473, 3015, 2509, 1964, 1387, 789, 179, -435, -1041, -1631, -2196, -2725, -3212, -3648, -4027, -4342, -4589, -4763, -4862, -4884, -4830, -4699, -4494, -4218, -3876, -3473, -3015, -2509, -1964, -1387, -789, -179, 435, 1041, 1631, 2196, 2725};
    vector<int> y = {0, -3250, -2767, -2241, -1679, -1090, -485, 128, 739, 1339, 1917, 2465, 2975, 3437, 3845, 4193, 4474, 4685, 4822, 4883, 4867, 4774, 4606, 4365, 4055, 3682, 3250, 2767, 2241, 1679, 1090, 485, -128, -739, -1339, -1917, -2465, -2975, -3437, -3845, -4193, -4474, -4685, -4822, -4883, -4867, -4774, -4606, -4365, -4055};
    vector<int> r = {130, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4659.699991965042;
    if(result == expected) {
        cout << "Test Case 391: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 391: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test392() {
    vector<int> x = {0, 4418, 4149, 3814, 3419, 2970, 2474, 1939, 1373, 786, 187, -416, -1012, -1592, -2147, -2668, -3147, -3576, -3949, -4259, -4503, -4675, -4774, -4798, -4745, -4618, -4418, -4149, -3814, -3419, -2970, -2474, -1939, -1373, -786, -187, 416, 1012, 1592, 2147, 2668, 3147, 3576, 3949, 4259, 4503, 4675, 4774, 4798, 4745};
    vector<int> y = {0, 1873, 2412, 2913, 3368, 3770, 4112, 4390, 4598, 4734, 4795, 4781, 4691, 4527, 4292, 3989, 3623, 3201, 2727, 2211, 1659, 1082, 487, -115, -715, -1304, -1873, -2412, -2913, -3368, -3770, -4112, -4390, -4598, -4734, -4795, -4781, -4691, -4527, -4292, -3989, -3623, -3201, -2727, -2211, -1659, -1082, -487, 115, 715};
    vector<int> r = {132, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4608.670097693417;
    if(result == expected) {
        cout << "Test Case 392: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 392: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test393() {
    vector<int> x = {0, 4, -4};
    vector<int> y = {0, 4, -4};
    vector<int> r = {1, 1, 1};
    CircusTents* pObj = new CircusTents();
    clock_t start = clock();
    double result = pObj->findMaximumDistance(x, y, r);
    clock_t end = clock();
    delete pObj;
    double expected = 4.745474963675133;
    if(result == expected) {
        cout << "Test Case 393: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 393: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    test292() == 0 ? ++passed : ++failed;
    test293() == 0 ? ++passed : ++failed;
    test294() == 0 ? ++passed : ++failed;
    test295() == 0 ? ++passed : ++failed;
    test296() == 0 ? ++passed : ++failed;
    test297() == 0 ? ++passed : ++failed;
    test298() == 0 ? ++passed : ++failed;
    test299() == 0 ? ++passed : ++failed;
    test300() == 0 ? ++passed : ++failed;
    test301() == 0 ? ++passed : ++failed;
    test302() == 0 ? ++passed : ++failed;
    test303() == 0 ? ++passed : ++failed;
    test304() == 0 ? ++passed : ++failed;
    test305() == 0 ? ++passed : ++failed;
    test306() == 0 ? ++passed : ++failed;
    test307() == 0 ? ++passed : ++failed;
    test308() == 0 ? ++passed : ++failed;
    test309() == 0 ? ++passed : ++failed;
    test310() == 0 ? ++passed : ++failed;
    test311() == 0 ? ++passed : ++failed;
    test312() == 0 ? ++passed : ++failed;
    test313() == 0 ? ++passed : ++failed;
    test314() == 0 ? ++passed : ++failed;
    test315() == 0 ? ++passed : ++failed;
    test316() == 0 ? ++passed : ++failed;
    test317() == 0 ? ++passed : ++failed;
    test318() == 0 ? ++passed : ++failed;
    test319() == 0 ? ++passed : ++failed;
    test320() == 0 ? ++passed : ++failed;
    test321() == 0 ? ++passed : ++failed;
    test322() == 0 ? ++passed : ++failed;
    test323() == 0 ? ++passed : ++failed;
    test324() == 0 ? ++passed : ++failed;
    test325() == 0 ? ++passed : ++failed;
    test326() == 0 ? ++passed : ++failed;
    test327() == 0 ? ++passed : ++failed;
    test328() == 0 ? ++passed : ++failed;
    test329() == 0 ? ++passed : ++failed;
    test330() == 0 ? ++passed : ++failed;
    test331() == 0 ? ++passed : ++failed;
    test332() == 0 ? ++passed : ++failed;
    test333() == 0 ? ++passed : ++failed;
    test334() == 0 ? ++passed : ++failed;
    test335() == 0 ? ++passed : ++failed;
    test336() == 0 ? ++passed : ++failed;
    test337() == 0 ? ++passed : ++failed;
    test338() == 0 ? ++passed : ++failed;
    test339() == 0 ? ++passed : ++failed;
    test340() == 0 ? ++passed : ++failed;
    test341() == 0 ? ++passed : ++failed;
    test342() == 0 ? ++passed : ++failed;
    test343() == 0 ? ++passed : ++failed;
    test344() == 0 ? ++passed : ++failed;
    test345() == 0 ? ++passed : ++failed;
    test346() == 0 ? ++passed : ++failed;
    test347() == 0 ? ++passed : ++failed;
    test348() == 0 ? ++passed : ++failed;
    test349() == 0 ? ++passed : ++failed;
    test350() == 0 ? ++passed : ++failed;
    test351() == 0 ? ++passed : ++failed;
    test352() == 0 ? ++passed : ++failed;
    test353() == 0 ? ++passed : ++failed;
    test354() == 0 ? ++passed : ++failed;
    test355() == 0 ? ++passed : ++failed;
    test356() == 0 ? ++passed : ++failed;
    test357() == 0 ? ++passed : ++failed;
    test358() == 0 ? ++passed : ++failed;
    test359() == 0 ? ++passed : ++failed;
    test360() == 0 ? ++passed : ++failed;
    test361() == 0 ? ++passed : ++failed;
    test362() == 0 ? ++passed : ++failed;
    test363() == 0 ? ++passed : ++failed;
    test364() == 0 ? ++passed : ++failed;
    test365() == 0 ? ++passed : ++failed;
    test366() == 0 ? ++passed : ++failed;
    test367() == 0 ? ++passed : ++failed;
    test368() == 0 ? ++passed : ++failed;
    test369() == 0 ? ++passed : ++failed;
    test370() == 0 ? ++passed : ++failed;
    test371() == 0 ? ++passed : ++failed;
    test372() == 0 ? ++passed : ++failed;
    test373() == 0 ? ++passed : ++failed;
    test374() == 0 ? ++passed : ++failed;
    test375() == 0 ? ++passed : ++failed;
    test376() == 0 ? ++passed : ++failed;
    test377() == 0 ? ++passed : ++failed;
    test378() == 0 ? ++passed : ++failed;
    test379() == 0 ? ++passed : ++failed;
    test380() == 0 ? ++passed : ++failed;
    test381() == 0 ? ++passed : ++failed;
    test382() == 0 ? ++passed : ++failed;
    test383() == 0 ? ++passed : ++failed;
    test384() == 0 ? ++passed : ++failed;
    test385() == 0 ? ++passed : ++failed;
    test386() == 0 ? ++passed : ++failed;
    test387() == 0 ? ++passed : ++failed;
    test388() == 0 ? ++passed : ++failed;
    test389() == 0 ? ++passed : ++failed;
    test390() == 0 ? ++passed : ++failed;
    test391() == 0 ? ++passed : ++failed;
    test392() == 0 ? ++passed : ++failed;
    test393() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22838856&rd=15181&pm=12244
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>
#include <list>
#include <queue>
#include <cassert>
#include <stack>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
#define pb               push_back
#define mp              make_pair
#define fill(a,v)           memset(a, v, sizeof a)
#define INF              (int)1e9
#define EPS 1e-9
typedef vector<int> VI;
typedef long long LL;
typedef pair<int, int > PII;
 
 
 
#define debug(args...)      {dbg,args; cout<<endl;}
struct debugger
{
  template<typename T> debugger& operator , (const T& v)
  {  
    cout<<v<<" ";  
    return *this;  
  }
} dbg;
 
 
 
struct Point
{
  double x,y;
  Point( double a = 0, double b = 0)
  {
     x = a; 
     y = b;
  }
  
  double operator ^ (Point P)
  {
    return x * P.y - y * P.x;
  }
  
  Point operator * (double c)
  {
    return Point ( c * x, c * y);
  }
  
  Point operator + ( Point P)
  {
    return Point( x + P.x, y + P.y);
  }
  
  Point operator - ( Point P)
  {
    return Point( x - P.x, y - P.y);
  }
};
 
double dist(Point a, Point b)
{
  double dx = a.x - b.x;
  double dy = a.y - b.y;
  return sqrt(dx*dx + dy*dy);
}
 
double cx,cy,cr;
Point C;
double besta[55];
double bestb[55];
double bestd[55];
double bestopp[55];
const double PI = 4*atan(1);
int n;
 
VI x,y,r;
 
void getTangent(int u,double x,double y,double r)
{
  Point O = Point(x,y);
  double dev = acos(cr/dist(O,C));
  double base = atan2(y-cy, x-cx);   
  besta[u] = base+dev;
  bestb[u] = base-dev;
  bestopp[u] = atan2(cy-y, cx-x);
  
  Point P = Point(cx + cr * cos(besta[u]), cy + cr * sin(besta[u]));
  bestd[u] = dist(O, P) - r;
}
 
double delta(double u,double v)
{
  double ans = v-u;
  while(ans>0) ans -= 2*PI;
  while(ans<-EPS) ans += 2*PI;
  return min(ans, 2*PI-ans);
}
 
double getf(int u, double x,double y,double r,double theta)
{
    Point dev = Point(cr * cos(theta), cr * sin(theta));
    Point P = C+dev;
    Point O = Point(x,y);
    double d = dist(P, O) - r;
    //debug("d",d);
    if(d>bestd[u])
    {
      d = bestd[u] + cr * min(delta(theta, besta[u]), delta(theta, bestb[u]));
    }
    return d;
}  
  
double getf(int u,double theta)
{
  return getf(u,x[u],y[u],r[u],theta);
}  
    
    
double eval(double theta)
{
  double ans = 1e9;
  for(int i=1;i<n;i++)
  {
    ans = min(ans, getf(i, x[i], y[i], r[i], theta));
  }
  return ans;
}
    
const int steps = 1000;
double temp[steps+5];
 
 
double ans;
void dostuff(int u,int v, double lo,double hi)
{
  for(int i=0;i<50;i++)
  {
    double mid = (lo+hi)/2;
    double z = getf(u,mid) - getf(v,mid);
    if(z<0)
      lo=mid;
    else
      hi=mid;
  }
  
  ans = max(ans, eval(lo));
}
    
 
class CircusTents 
{
public:
 
 
double findMaximumDistance(vector <int> qx, vector <int> qy, vector <int> qr) 
{
  x=qx;
  y=qy;
  r=qr;
  n=qx.size();
  
  cx = x[0];
  cy = y[0];
  cr = r[0];
  C = Point(cx,cy);
  for(int i=1;i<x.size();i++)
  {
    getTangent(i,x[i],y[i],r[i]);
  }
  
  ans = 0;
  for(int i=1;i<n;i++)
  {
    //debug(besta[1],bestb[1],bestd[1],bestopp[1]);
    //debug(getf(1, x[1], y[1], r[1], bestopp[1]));
    ans = max(ans, eval(bestopp[i]));
  }
  
  double iter = (2 * PI)/steps;
  
  for(int i=1;i<n;i++)
    for(int j=1;j<n;j++)
    {
      if(j==i) continue;
      for(int k=0;k<steps;k++)
      {
        double angle = k*iter;
        temp[k] = getf(i,angle) - getf(j,angle);
      }
      
      for(int k=0;k<steps;k++)
        if(temp[k]==0)
          ans = max(ans, eval(k*iter));
    
      
      for(int k=0;k<steps;k++)
      {
        int nk = (k+1)%steps;
        
        if(temp[k]<0 && temp[nk]>0)
          dostuff(i,j,k*iter, (k+1)*iter);
          
        if(temp[k]>0 && temp[nk]<0)
          dostuff(i,j,(k+1)*iter, k*iter);
      }
    }
  return ans;
    
  
  
}
 
 
 
};
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/