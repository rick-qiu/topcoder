/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5869
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

class BinarySearchable {
public:
    int howMany(vector<int> sequence);
};

int BinarySearchable::howMany(vector<int> sequence) {
    int ret;
    return ret;
}


int test0() {
    vector<int> sequence = {1, 3, 2};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
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
    vector<int> sequence = {3, 2, 1, 10, 23, 22, 21};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sequence = {1, 5, 7, 11, 12, 18};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sequence = {5, 4, 3, 2, 1, 0};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
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
    vector<int> sequence = {1, 3, 2, 4, 5, 7, 6, 8};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sequence = {};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sequence = {-9262, -9244, -8963, -8917, -8790, -8556, -8438, -8066, -7932, -7772, -7378, -6513, -5303, -4572, -4454, -4244, -3929, -3453, -3378, -3076, -2757, -2513, -1922, -1115, -596, -329, -174, 13, 1836, 3018, 3038, 4578, 4997, 5244, 5504, 5687, 6251, 6291, 6303, 6702, 6835, 7168, 7184, 7543, 8007, 9909};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sequence = {9871, 8286, 7381, 6421, 6408, 6107, 5293, 4888, 4777, 4324, 4221, 4093, 3569, 3496, 2112, 1391, 1246, 1010, 964, 539, 295, -276, -343, -595, -875, -1423, -1642, -1719, -1854, -1994, -2981, -3022, -3345, -3366, -3625, -4136, -4706, -5499, -5977, -6131, -6486, -6737, -6862, -6871, -7490, -7708, -8055, -8663, -8951};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sequence = {-9987, -9008, -8498, -9364, -8095, -7700, -7625, -7901, -7378, -7220, -7169, -7053, -6085, -7144, -5012, -4887, -4458, -4099, -4045, -2770, -5137, -2633, -2404, -2014, -2046, -876, -1038, 946, 1372, 1214, 1399, 3564, 4101, 4221, 4708, 2037, 5861, 5219, 6082, 6486, 6689, 7534, 7117, 8542, 8578, 8859, 8319, 9430, 9508};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
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
    vector<int> sequence = {1, 0, 2, 4, 5, 6, 7, 8, 9, 10, 11, 3, 12, 14, 15, 16, 17, 18, 19, 13, 21, 20, 22, 24, 25, 26, 27, 28, 23, 30, 31, 32, 33, 34, 29, 35, 36, 38, 39, 40, 37, 42, 43, 41, 44, 46, 47, 48, 49, 45};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sequence = {-97, -96, -93, -85, -81, -77, -73, -72, -65, -64, -63, -100, -52, -45, -43, -41, -37, -33, -62, -21, -15, -14, -12, -8, 0, 17, 23, 26, -32, 37, 43, 47, 48, 63, 32, 78, 82, 85, 91, 75};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sequence = {-100, -98, -94, -97, -93, -88, -83, -78, -67, -58, -51, -49, -48, -72, -46, -43, -33, -31, -29, -26, -27, -25, -23, -13, -11, -9, 4, 8, 16, 25, 24, 53, 62, 68, 74, 78, 81, 82, 89, 90, 97, 98};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sequence = {-900, -893, -956, -783, -804, -917, -698, -694, -705, -605, -724, -913, -574, -580, -444, -506, -447, -591, -314, -396, -249, -243, -180, -132, -133, -224, -73, -78, -85, -67, 192, 108, 264, 302, 229, 81, 342, 392, 367, 528, 446, 419, 615, 156, 867, 871, 729, 745, 884};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sequence = {-9682, -8974, -8983, -6614, -8766, -8535, -8212, -8574, -7950, -5235, -9891, -4194, -5253, -4956, -7001, -1668, -4292, -6747, -4186, -2922, -1797, -2353, 265, -3304, -4365, -1629, -1476, 3507, 3402, 1595, 1128, 936, 1837, 1706, 3391, 6773, -3639, 4841, 6109, 9659, 5001, 6408, 6240, 6436, 2171, 6917, 8993, 8999, 9682, 5752};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sequence = {-7364, -7782, -6068, -8314, -8089, -5269, -7674, -7513, -6084, -7043, -6602, -9710, -5418, -2349, 1878, -3188, -5528, -465, 1670, -9698, -2317, -2936, 1055, -2733, -4273, -692, -3098, -1267, -5629, -2007, -9256, 7941, 2216, 7909, -799, 2886, -3929, -2826, 3201, 3462, 4199, 2272, 6304, 6486, 7219, 4222, 355, 9402, 8314};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sequence = {1426, -8612, -8304, -7567, -9396, -266, 3620, -6359, 2561, -5244, -4826, -2026, -648, -554, -370, -7400, -123, 690, 1161, 6623, -6193, 6012, -6575, 6946, 3270, 6254, 7570, 6766, 4521, 5442, 6291, 5970, 2622, 2671, 4917, 4377, -7549, 2916, 3638, 8094};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sequence = {1529, -2118, 1458, 3091, -3332, 3794, -2381, 4948, 4909, -1884, -5216, 1030, 5332, 8799, -3433, 8994, 1476, -8899, 5304, -7767, 5859, -654, 4890, 6535, -7637, 9841, 8889, 8202, 9244, -2284, -7684, -1029, 6271, -1128, 4869, 6556, -5296, 8450, -4750, 9442, -7055, -3923, 3306, -720, -5879, 4574, -689, -7341};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sequence = {1, 2, 3, 0, 5, 6, 7, 4, 9, 10, 8, 11, 13, 12, 15, 16, 14, 18, 17, 20, 19, 22, 23, 24, 25, 26, 21, 27, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 28, 40, 41, 42, 43, 44, 39, 46, 47, 48, 45, 49};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sequence = {97, 96, 92, 99, 83, 81, 80, 79, 73, 71, 69, 68, 90, 62, 60, 58, 55, 63, 46, 37, 53, 32, 26, 21, 36, 12, 7, 4, 15, -5, -14, -17, -18, -24, -37, -43, -47, -51, -52, -63, -64, -65, -67, -87, -89, -90, -91, -3, -100};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sequence = {96, 91, 81, 80, 79, 73, 70, 49, 48, 45, 32, 29, 13, 10, 6, 4, 0, -3, -6, -13, -15, -36, -22, -55, -50, -57, -58, -61, -67, -74, -75, -76, -77, -78, -83, -89, -95, -94, -96, -98, -100};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sequence = {787, 703, 970, 912, 758, 465, 527, 282, 349, 436, 211, 174, 91, 124, 179, 94, 88, -41, -12, -133, -61, -59, -168, -258, -240, -521, -561, -415, -568, -381, -519, -675, -722, -818, -796, -739, -882, -892, -919, -928};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sequence = {9744, 6639, 8337, 8719, 6947, 7557, 4370, 6935, 1769, 5611, 5442, 247, -285, -1678, 2516, 2413, 8845, 3916, 7996, -2484, -343, -3714, 2859, -3553, -2059, 1957, -4984, -3189, -4930, -7585, -4264, -1922, -7380, -5411, -6252, -2799, -9727, -9427, -8720, -9428, -1677, -9875, -9998};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sequence = {5314, 4540, 7769, 7183, 7171, 2608, 3920, 1743, 6229, 3541, 1936, 3826, 4692, 5437, 9912, 5747, 1495, 7389, -2130, 2918, 2892, 517, 8300, 2513, 897, -2348, -3286, 9599, 6383, 6910, 458, 357, -6282, -1284, -1305, -4188, 7776, 7979, 1740, -470, -2950, -3496, -1930, -8087, -7418, -3078, -5253, -8127};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sequence = {4585, 9629, 4025, 6511, 8286, -558, 7736, 8692, 7359, 6796, 7142, 6336, 5705, 5219, -5274, 791, -6521, 3985, 3902, 3753, 3651, 8130, -9808, -6615, 4098, 82, -503, 2563, -1890, -2023, 2059, -4459, -3787, -9706, -6049, 8799, -6608, -6612, 986, -8897, -7683, -8473, -9451, -9369, -6887, 9958, -9777, -4991, -9984};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sequence = {-886, -7319, -8831, 5334, 2564, -2187, 370, -7730, -9788, -6597, 1696, -8343, 2042, 8981, -3791, -5472, 7305, 7252, -7813, 5266, -1686, -8799, -3361, 9489, 7111, 5868, 6774, 1002, -3740, 7958, -539, 2257, -4044, 3857, 6565, 7141, -7237, -5520, 8601, 9749, -4268, -3825, -3017, 9090, 2444, -5696, -3075, -6277};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sequence = {0};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sequence = {-4};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sequence = {9040};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sequence = {-77, 40};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sequence = {-10000, -9999};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sequence = {-9999, -10000};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sequence = {9999, 10000};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sequence = {10000, 9999};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sequence = {-77, -74};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sequence = {-15, 56};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sequence = {9992, 9953, 9999, 9951, 9987, 9959, 9983, 9952, 9991, 9989, 9986, 9954, 9967, 9996, 9961, 9973, 9975, 9960, 9956, 9976, 9984, 9994, 9969, 9980, 9972, 9979, 9965, 9990, 9974, 9995, 9998, 9955, 9970, 9997, 9971, 9963, 9985, 9968, 9988, 9962, 9957, 9982, 9981, 9958, 9978, 9964, 9977, 9993, 9966};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sequence = {-9965, -9986, -9967, -9994, -9955, -9978, -9999, -9990, -9997, -9957, -9998, -9993, -9961, -9992, -9983, -9977, -9953, -9979, -9969, -10000, -9970, -9958, -9960, -9959, -9981, -9973, -9996, -9962, -9982, -9985, -9976, -9968, -9964, -9987, -9988, -9974, -9995, -9956, -9963, -9966, -9972, -9980, -9975, -9971, -9954, -9952, -9984, -9991, -9951, -9989};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sequence = {-9957, -9766, -9339, -8533, -8158, -7582, -6733, -6248, -6979, -5784, -5739, -6111, -4503, -4694, -3602, -2835, -4151, -2639, -2411, -2305, -539, 513, -1816, 1277, 2430, 3254, 1788, 3465, 3415, 3718, 3768, 4174, 3910, 4746, 4932, 4380, 5727, 5822, 5031, 6376, 7149, 6855, 8938, 9320, 7290, 9392, 9666, 9384};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sequence = {-8756, -9609, -8124, -8225, -7729, -6996, -6157, -6147, -7953, -5992, -4930, -5058, -3253, -3001, -4461, -2449, -2137, -2606, -1980, -1322, -488, -1133, -440, 235, 812, 1260, -333, 1262, 1789, 3002, 4191, 3533, 6124, 7038, 7961, 8303, 8670, 8774, 8995, 9402, 9724, 5433};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sequence = {-9806, -9918, -8474, -8045, -7793, -7496, -9044, -5825, -5113, -5471, -4205, -4712, -4170, -4049, -2482, -3321, -2159, -2183, -1204, -471, -258, -138, 2315, 1610, 3475, 2501, 3591, 3846, 3760, 4288, 5311, 5187, 5875, 6188, 7483, 6807, 9515, 9707, 9062, 9898, 9899};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sequence = {-9568, -8815, -9146, -8079, -7359, -7253, -6690, -5795, -4910, -8312, -2974, -2628, -4792, -2091, -2117, -1700, -1126, -416, 1188, 1984, 2036, 1316, 2505, 2139, 2990, 3159, 4079, 4802, 5476, 5491, 6358, 5890, 7516, 7857, 8977, 9042, 8989, 9336, 9700, 9380, 9881, 9714};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sequence = {-9405, -9283, -6019, -6013, -3723, -3409, -3209, -7735, -3108, -3185, -2758, -2433, -2020, -1519, -2745, -1215, -4, -267, 618, 433, 1459, 1568, 2506, 2729, 2297, 3437, 3208, 3943, 4017, 3566, 4471, 5012, 4920, 5676, 5982, 5238, 6268, 7708, 7548, 8181, 8665, 8106, 8795, 9589, 9200};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sequence = {-9569, -9268, -9343, -8997, -9149, -8298, -8275, -8171, -8767, -7900, -7689, -8008, -6348, -7521, -5353, -5610, -4390, -3651, -2907, -3663, -2626, -2640, -2190, -2189, -2139, -2168, -1241, -1538, 876, -515, 912, 1383, 1340, 2492, 1590, 3046, 5247, 5772, 5545, 7694, 8272, 8569, 7667, 8633, 8740, 9020, 9417, 9889};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sequence = {-9557, -9306, -9131, -8161, -9971, -8115, -8109, -7857, -7853, -7308, -6573, -7681, -4709, -4716, -4650, -4233, -4685, -3864, -2590, -4063, -2576, -2182, -1926, -2001, -4, 687, -1899, 2227, 795, 2527, 3586, 4046, 2865, 4462, 4879, 5449, 5410, 5879, 7059, 9157, 8978, 9297, 9560};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sequence = {-9596, -9832, -9223, -9427, -8107, -8719, -6190, -5393, -7423, -4455, -3651, -1248, -4850, -1196, -1044, -450, 729, -5, 1567, 2254, 2275, 2412, 2455, 3077, 3509, 1030, 3545, 3694, 4267, 4276, 4381, 3631, 4492, 5733, 5863, 6393, 6704, 7844, 7870, 9832};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sequence = {-9706, -9392, -9851, -9207, -9117, -7900, -8916, -6992, -6903, -7252, -6376, -6027, -5913, -5878, -4199, -4208, -4032, -3487, -3039, -2690, -2425, -2262, -317, 1143, 1543, -1430, 2862, 3677, 3319, 4000, 4014, 4375, 4389, 4417, 4616, 4698, 5326, 6520, 5590, 7030, 7149, 8896, 9471, 8674, 9739};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sequence = {-9561, -9487, -8932, -8947, -7837, -7493, -6545, -8022, -6419, -6026, -5352, -6098, -3763, -4041, -3364, -2273, -3697, -1556, -1489, -1170, -1024, -1226, -796, -899, -761, 105, -274, 124, 1367, 2262, 5175, 5345, 3076, 5922, 5756, 7307, 8123, 6649, 8612, 9108, 8692, 9593};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sequence = {3, 2, 1};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sequence = {1, 48, 3, 46, 5, 44, 7, 42, 9, 40, 11, 38, 13, 36, 15, 34, 17, 32, 19, 30, 21, 28, 23, 26, 25, 24, 27, 22, 29, 20, 31, 18, 33, 16, 35, 14, 37, 12, 39, 10, 41, 8, 43, 6, 45, 4, 47, 2, 49};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sequence = {9, 1, 2, 3, 4, 5, 6, 0};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sequence = {1, 2, 4, 5, 6, 7, 8, 9, 10, 3};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sequence = {-250, -240, -230, -220, -210, -200, -190, -180, -170, -160, -150, -140, -130, -120, -100, -90, -80, -70, -60, -110, -50, -40, -30, 30, 40, 50, 60, -20, -10, 0, 10, 20, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sequence = {2001, 312, 511, 518, 592, 603, 602, 361, 3, 2, 1, 10, 23, 22, 21, 30, 20, 19, 38, 18, 24, 101, 202, 303, 102, 105, 205, 308, 91, 81, 82, 4, 1001, 1002, 8, 17, 5001, 5002, 4001, 4002, 5255, 5633};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sequence = {5, 2, 3, 4, 1};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sequence = {1, 2, 4, 5, 6, 7, 8, 9, 10, 3, 20};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sequence = {3};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sequence = {1, 2, 3, 4, 6, 5, 7, 8, 9, 11, 12, 14, 15, 17, 19, 234, 233, 25, 266, 367, 444};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sequence = {2, 0, 1, -1};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sequence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 30, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BinarySearchable* pObj = new BinarySearchable();
    clock_t start = clock();
    int result = pObj->howMany(sequence);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20458320&rd=8078&pm=5869
********************************************************************************
#include <vector>
 
using namespace std;
 
class BinarySearchable
  {
  public:
  int howMany(vector <int> sequence)
    {
      int count = 0;
      int N = sequence.size();
      for (int i=0; i<N; ++i)
      {
        bool find = true;
        for (int j=0; j<N; ++j)
          if ((sequence[j] > sequence[i] && j < i) || (sequence[j] < sequence[i] && j > i))
          {
            find = false;
            break;
          }
 
        if (find)
          count++;
      }
      return count;
    }
    
  };

********************************************************************************
*******************************************************************************/