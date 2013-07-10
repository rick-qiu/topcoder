/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3996
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

class CultureGrowth {
public:
    double finalTray(vector<int> xs, vector<int> ys);
};

double CultureGrowth::finalTray(vector<int> xs, vector<int> ys) {
    double ret;
    return ret;
}


int test0() {
    vector<int> xs = {0, 3};
    vector<int> ys = {0, 3};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> xs = {0, 0, 3, 3};
    vector<int> ys = {0, 3, 3, 0};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> xs = {0, 0, 3, 3, 1, 2};
    vector<int> ys = {0, 3, 3, 0, 1, 2};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> xs = {0, 0, 0, 1, 2, 3, 4, 4, 4, 3, 2, 1, 1, 2};
    vector<int> ys = {10, 20, 30, 40, 50, 60, 70, 30, 10, 8, 6, 8, 30, 30};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 168.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> xs = {0, 3, 6, 10};
    vector<int> ys = {0, 3, 6, 10};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> xs = {0, 3, 6, 10, 15};
    vector<int> ys = {0, 3, 6, 10, 14};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> xs = {10};
    vector<int> ys = {240};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> xs = {10, 15, 3, 37};
    vector<int> ys = {49, 49, 12, 8};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 745.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> xs = {0, 10, 0, 10, 0, 10, 0, 10, 0, 10};
    vector<int> ys = {100, 0, 200, 10, 300, 20, 400, 30, 500, 40};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 2200.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> xs = {4645, 4188, 9996, 7820, 1216, 1262, 295, 6323, 9374, 6988, 4587, 7799, 9732, 2046, 6690, 5922, 4276, 3443, 2291, 960, 2958, 9352, 7613, 6661, 2575, 3818, 4444, 1384, 1713, 5753, 6578, 9178, 8061, 9119, 5189, 8934, 6856, 3729, 3184, 2304, 1784, 8571, 1082, 3538, 2094, 2068, 9444, 6900, 2229, 6201};
    vector<int> ys = {6549, 4407, 3908, 8376, 9394, 9337, 892, 441, 7386, 8726, 2755, 8329, 5109, 3859, 5416, 8673, 5623, 9370, 5700, 2257, 1048, 9664, 6621, 4044, 1703, 5619, 9841, 4916, 1651, 5055, 4387, 9857, 1005, 2929, 3257, 9791, 7838, 9753, 1979, 6820, 5061, 9194, 5765, 5063, 115, 8354, 4326, 1850, 7819, 6673};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.04020805E7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> xs = {5406, 9835, 2770, 3881, 3344, 2546, 3960, 1525, 2220, 7154, 5623, 1206, 4634, 2085, 9745, 9331, 5139, 9871, 4522, 1223, 7839, 9014, 1156, 3563, 5828, 3087, 7187, 9064, 7495, 2727, 2652, 316, 7236, 8688, 7871, 2226, 621, 6617, 4125, 4923, 6546, 6729, 1037, 1597, 1409, 4016, 6937, 8145, 2859, 7191};
    vector<int> ys = {5972, 6480, 9240, 1971, 5091, 6271, 1932, 4579, 9608, 2143, 9398, 3032, 7527, 8437, 104, 7336, 4156, 4214, 8944, 8235, 4122, 5764, 6454, 3497, 4768, 2525, 3666, 4676, 40, 1180, 2936, 325, 6470, 5113, 7596, 4146, 5339, 8989, 5792, 9045, 7651, 659, 6354, 575, 985, 5140, 7042, 5746, 9856, 7856};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.9893332E7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> xs = {994, 4058, 3142, 6999, 8423, 6464, 4599, 7079, 2522, 1716, 2341, 3032, 9877, 1483, 1650, 7869, 7466, 2715, 138, 4478, 3010, 3420, 7214, 8317, 2310, 8664, 5875, 5946, 9892, 3701, 4398, 7611, 1731, 3657, 7928, 4500, 1358, 1666, 2532, 3876, 3121, 9901, 6757, 7714, 8905, 369, 8205, 3035, 7092, 4941};
    vector<int> ys = {8039, 5658, 3661, 6926, 6016, 2965, 8846, 6667, 6651, 7628, 4350, 7082, 5924, 6924, 1969, 6526, 3060, 8214, 5721, 7307, 464, 5427, 6808, 6427, 8503, 2739, 3299, 6194, 5474, 1434, 6114, 1944, 5634, 8405, 5420, 6579, 614, 7292, 4042, 4162, 2100, 5722, 6984, 7299, 6097, 4626, 8667, 5513, 1666, 8117};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 6.30240385E7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> xs = {5194, 4582, 5052, 6476, 6032, 3014, 8955, 5491, 936, 4276, 7189, 9275, 4150, 8308, 6179, 2860, 6286, 7761, 9892, 3778, 9438, 9887, 6820, 4988, 104, 7254, 722, 2930, 7459, 5465, 3933, 75, 7001, 8541, 4499, 3919, 2139, 5117, 959, 6818, 8739, 1144, 1045, 3583, 165, 7238, 3085, 6248, 2880, 1340};
    vector<int> ys = {1986, 4366, 9452, 4901, 5785, 7534, 7874, 4697, 9847, 6562, 7328, 5646, 9015, 5544, 5239, 1180, 526, 433, 7339, 7340, 1180, 5222, 2992, 3993, 3427, 9713, 4949, 5966, 1984, 6107, 6355, 2524, 5088, 4147, 386, 6222, 6970, 7016, 352, 4551, 668, 2747, 613, 406, 2775, 8362, 1177, 9823, 4215, 6442};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.3603832E7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> xs = {1418, 7925, 5110, 9871, 9585, 164, 3643, 3024, 7609, 725, 6284, 2371, 2132, 1179, 10000, 1438, 721, 6257, 7318, 2429, 4099, 9353, 5988, 4740, 2630, 1102, 9467, 3447, 5817, 441, 8259, 8426, 6111, 72, 4644, 7259, 827, 737, 5849, 7609, 8449, 1225, 3179, 7209, 8104, 3516, 7174, 2145, 3524, 4988};
    vector<int> ys = {1319, 7959, 3669, 6403, 74, 6816, 2727, 5153, 3962, 665, 4388, 4395, 4781, 7647, 9002, 4282, 2846, 8537, 4249, 5658, 3496, 6147, 8275, 5611, 7241, 1338, 7561, 3563, 6393, 4114, 3649, 7621, 3533, 793, 5320, 3426, 9668, 711, 5310, 215, 2424, 8448, 3196, 1324, 7134, 42, 8528, 8869, 6165, 4193};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.7771273E7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> xs = {1301, 6583, 5247, 2084, 9254, 9615, 7376, 2378, 3358, 7382, 7664, 4425, 4166, 1146, 2235, 7333, 3746, 4458, 8714, 4455, 7719, 5106, 4049, 8129, 3583, 9996, 5845, 4867, 5357, 3627, 8462, 2915, 7095, 3343, 7691, 6594, 291, 6995, 288, 4339, 2739, 1204, 7157, 9853, 8857, 884, 1461, 8278, 4044, 3172};
    vector<int> ys = {811, 4816, 4345, 1887, 5460, 3182, 828, 467, 7298, 583, 266, 597, 5727, 4854, 8622, 7102, 8156, 3984, 1483, 7163, 791, 66, 5238, 1848, 8397, 5521, 3940, 9441, 7116, 1285, 7244, 1559, 6969, 9224, 7234, 5540, 3114, 3471, 4517, 9042, 7486, 7941, 6430, 5384, 4897, 9714, 2703, 561, 229, 553};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.39226425E7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> xs = {5477, 1811, 8091, 1449, 2447, 1672, 5185, 7616, 2248, 5839, 552, 3260, 2146, 4460, 6280, 2925, 6439, 7370, 1348, 5097, 1266, 607, 3417, 9104, 3381, 1362, 2405, 8589, 4175, 3254, 8402, 4706, 2733, 6366, 8951, 4715, 4226, 8945, 3238, 4139, 2416, 178, 3237, 3144, 7565, 5971, 4332, 306, 3539, 2118};
    vector<int> ys = {6434, 5429, 5791, 1263, 734, 9029, 452, 6099, 3886, 1541, 4666, 6997, 8369, 7830, 7964, 9807, 1606, 5054, 8039, 7283, 8781, 340, 3008, 6049, 573, 6972, 967, 7264, 1180, 87, 3427, 3213, 4447, 5352, 1741, 4560, 8486, 6588, 8121, 5474, 1621, 838, 5350, 6374, 5016, 1839, 1784, 6495, 9827, 5372};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 6.98096745E7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> xs = {478, 9436, 404, 1815, 1421, 7607, 1285, 6890, 2023, 5086, 4789, 4693, 6234, 285, 6787, 5051, 747, 5435, 7825, 4195, 5875, 1131, 4973, 5086, 3681, 411, 9388, 6039, 5930, 5536, 3387, 2077, 6853, 3139, 3314, 5912, 8311, 5895, 6994, 7977, 7367, 1394, 7062, 7423, 8814, 1363, 3954, 8486, 7706, 6913};
    vector<int> ys = {752, 1025, 9242, 2486, 5947, 29, 8263, 9053, 6924, 8883, 6560, 2641, 1290, 2448, 2277, 176, 2703, 7724, 7118, 2377, 6263, 2176, 5579, 3427, 5419, 7502, 3671, 6879, 6976, 1036, 4992, 1241, 3310, 9528, 4483, 1259, 3396, 2522, 2747, 3327, 6738, 5067, 6258, 6043, 6823, 1971, 1316, 9357, 3179, 8349};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.91843645E7;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> xs = {4852, 9154, 9412, 7966, 7374, 1527, 7259, 7543, 9285, 5811, 270, 4052, 8041, 2326, 6076, 7262, 6431, 8481, 6494, 6113, 3124, 90, 5853, 9036, 9402, 8985, 4589, 9939, 5863, 1291, 3136, 5530, 5400, 3335, 3672, 2135, 1223, 4545, 9757, 2678, 1235, 9298, 6381, 6989, 2532, 2102, 5496, 1095, 2328, 3049};
    vector<int> ys = {2122, 8309, 3656, 3660, 5782, 9818, 1017, 8994, 9638, 3503, 452, 9808, 8745, 26, 7114, 8851, 3857, 2909, 5269, 6502, 2778, 2316, 3179, 8249, 416, 1786, 302, 1527, 5411, 1371, 5923, 6664, 3667, 3172, 807, 9121, 1658, 7745, 5995, 2803, 4850, 2348, 5311, 6629, 9086, 4524, 723, 9097, 5304, 6968};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.7026851E7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> xs = {4532, 3681, 4093, 2929, 7972, 346, 186, 9941, 4494, 8863, 4777, 2397, 4750, 1066, 3353, 4358, 7290, 9569, 7582, 3574, 2692, 9933, 6840, 3693, 8430, 1493, 179, 5111, 9516, 2482, 5033, 1404, 2461, 7612, 1435, 739, 2593, 8794, 3069, 4190, 7259, 2155, 8900, 5362, 9973, 7007, 1704, 8254, 3027, 4939};
    vector<int> ys = {2119, 8087, 415, 2175, 5632, 5606, 9717, 7851, 7098, 9713, 8670, 6536, 9752, 8349, 4414, 5444, 7764, 2305, 9856, 4985, 9721, 7037, 5687, 6939, 8645, 5572, 8187, 5772, 7669, 7225, 3157, 9060, 2942, 9355, 8845, 5505, 7902, 1877, 3189, 1513, 5478, 6781, 3279, 9815, 7364, 7347, 7327, 6102, 1928, 4323};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.32976025E7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> xs = {2282, 2749, 8623, 9702, 637, 9679, 1039, 1037, 7903, 9838, 4908, 8128, 5332, 3900, 7099, 817, 9111, 2625, 2289, 9285, 2299, 9279, 4728, 5316, 7691, 8678, 1252, 853, 7866, 9779, 3085, 1975, 1242, 1222, 6459, 8981, 5411, 1743, 4602, 5727, 1530, 9861, 6126, 3911, 6090, 9775, 7357, 425, 8819, 2864};
    vector<int> ys = {2049, 2168, 4892, 8767, 783, 6506, 9352, 3778, 200, 5863, 4265, 9864, 5964, 3718, 3000, 1150, 184, 4165, 6034, 2171, 6027, 2158, 4425, 7461, 7314, 3632, 3145, 8673, 3484, 1437, 5871, 6461, 2757, 5588, 5354, 6843, 8845, 8795, 5950, 4267, 9079, 758, 7425, 6122, 4291, 7196, 1622, 5905, 3307, 2085};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.37753545E7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> xs = {8639, 8480, 8027, 6715, 7168, 5638, 7179, 6087, 1376, 4443, 8982, 2730, 4415, 3782, 5773, 3474, 6776, 1674, 7506, 8492, 586, 2619, 1116, 4166, 618, 5202, 7560, 7461, 9556, 8091, 5312, 1215, 7543, 5105, 1617, 2279, 8581, 2518, 5271, 6896, 8781, 4254, 7242, 255, 4034, 3144, 7896, 9622, 7129, 8910};
    vector<int> ys = {6121, 4783, 7399, 4096, 1447, 3768, 2551, 690, 983, 1231, 9896, 5865, 5138, 2994, 7154, 12, 3902, 4706, 6456, 2879, 4392, 8752, 6377, 3100, 2466, 401, 8539, 275, 27, 441, 1640, 8080, 2118, 4002, 8260, 9370, 392, 7815, 2283, 6776, 2085, 627, 7309, 4741, 6069, 3999, 8879, 1503, 103, 3199};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.98270735E7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> xs = {2139, 2957, 6856, 6031, 6251, 7457, 4139, 7170, 2694, 4898, 2735, 307, 1710, 3235, 4536, 267, 968, 6336, 2016, 7773, 7070, 6285, 2864, 1723, 5191, 5166, 4335, 2841, 5652, 5739, 7363, 9349, 8716, 2916, 2978, 7853, 1376, 466, 6060, 5094, 2460, 9848, 3970, 8722, 4806, 591, 101, 7762, 5817, 4150};
    vector<int> ys = {5898, 1977, 5873, 447, 9076, 5024, 931, 5212, 6758, 1085, 9132, 8794, 990, 8658, 3656, 2927, 9169, 570, 9257, 4624, 9129, 3572, 2780, 1977, 8026, 7169, 3610, 8167, 7853, 222, 8104, 3381, 2955, 6256, 4646, 6889, 7385, 967, 8397, 3980, 2456, 7912, 7358, 5012, 7346, 837, 3852, 6281, 8092, 3650};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.4301624E7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> xs = {4888, 5946, 181, 5619, 9303, 3557, 1044, 248, 8401, 5964, 8420, 4163, 4925, 9500, 6134, 1199, 5537, 7863, 1091, 274, 4685, 4684, 1150, 201, 3678, 443, 385, 1370, 4981, 4388, 3055, 6197, 4280, 4626, 31, 2766, 5356, 2041, 4001, 8579, 5314, 6220, 2218, 3809, 180, 4032, 8105, 6004, 3447, 4038};
    vector<int> ys = {8003, 4943, 2844, 1477, 2341, 2721, 3715, 8819, 9120, 5614, 8091, 3247, 4445, 9339, 4734, 5654, 5834, 2738, 2561, 489, 2281, 3863, 2414, 2007, 8457, 5983, 4697, 4957, 7122, 3218, 8226, 731, 6368, 8055, 8139, 2412, 792, 5439, 3223, 4732, 8188, 696, 5508, 7381, 5871, 1000, 7471, 2683, 3241, 2600};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.55303165E7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> xs = {5475, 613, 2562, 2384, 1694, 4298, 937, 8360, 8535, 393, 5489, 263, 2040, 8473, 2263, 4756, 5174, 2405, 5188, 5357, 9552, 3834, 5473, 8255, 5030, 483, 1719, 6088, 8461, 1204, 3264, 2865, 5388, 2185, 1795, 5690, 974, 1230, 8795, 1448, 8957, 9528, 8823, 9132, 9909, 2810, 1208, 946, 2609, 6338};
    vector<int> ys = {4721, 1077, 9668, 8565, 4497, 408, 9312, 4236, 2843, 7491, 6993, 141, 5801, 2923, 1677, 4590, 2487, 2635, 6723, 657, 387, 2141, 8446, 4822, 5742, 1967, 7147, 6945, 4346, 5251, 7169, 3836, 648, 961, 5105, 1142, 5468, 8747, 7754, 758, 5208, 3855, 3918, 3512, 7901, 3131, 6659, 9339, 3939, 5553};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.1116099E7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> xs = {5171, 7893, 4796, 606, 5901, 7957, 2105, 7194, 1675, 7591, 6472, 6670, 4500, 9656, 7794, 2972, 9358, 3459, 5136, 1165, 9579, 5088, 6281, 8002, 8377, 8678, 6890, 7193, 9097, 1789, 3089, 3807, 9205, 556, 3753, 4711, 5564, 2771, 1280, 4463, 1033, 9567, 2154, 8574, 4932, 8859, 1064, 8553, 2402, 6227};
    vector<int> ys = {5099, 9669, 1848, 3280, 7379, 9262, 1956, 1703, 8866, 7218, 3297, 9467, 2223, 9371, 1612, 1929, 8432, 6822, 8798, 4059, 375, 7808, 6653, 1226, 3087, 2663, 270, 8873, 7252, 4067, 8934, 4533, 5079, 7337, 4862, 8193, 139, 7964, 2660, 9449, 5267, 6144, 4830, 2456, 5131, 511, 1176, 2132, 2576, 5810};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.85161435E7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> xs = {4899, 5650, 215, 1372, 5376, 2713, 9056, 841, 1615, 6060, 4830, 165, 6436, 1800, 4026, 1085, 2672, 3505, 674, 2018, 8287, 644, 4945, 2445, 1582, 9705, 5920, 4370, 299, 2406, 3578, 6514, 872, 7926, 7538, 9421, 6664, 8544, 2587, 2127, 6433, 628, 3551, 3566, 6853, 5372, 4523, 4363, 5350, 6196};
    vector<int> ys = {2481, 7603, 341, 1726, 1284, 1354, 2239, 2611, 5130, 5086, 422, 325, 113, 5718, 7822, 4915, 5112, 7551, 7358, 362, 9516, 9042, 2042, 5137, 9833, 5173, 2551, 9757, 3013, 8906, 1382, 6110, 6846, 7666, 5203, 5748, 274, 3368, 9476, 6872, 8986, 6944, 1977, 2263, 4134, 836, 4302, 2857, 4526, 5464};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.9796431E7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> xs = {13, 7198, 2063, 2227, 8041, 6385, 2207, 9781, 7713, 9849, 2632, 6235, 6338, 9144, 8866, 3243, 3598, 5694, 1430, 8674, 2830, 3919, 2721, 9198, 1946, 4395, 8235, 7948, 9044, 2728, 8439, 4153, 235, 2306, 72, 4158, 9739, 1574, 8163, 5763, 4765, 9027, 2548, 269, 255, 1549, 5203, 9172, 985, 4303};
    vector<int> ys = {2957, 4198, 5153, 8109, 4155, 5514, 7386, 5215, 8888, 3608, 8716, 1576, 7409, 6329, 2369, 2381, 4707, 2816, 9665, 6596, 1071, 266, 448, 2668, 4371, 9440, 9478, 17, 3122, 3626, 9083, 2292, 1965, 8322, 981, 880, 3646, 1306, 2578, 9630, 4102, 5385, 5609, 4276, 9754, 8491, 7485, 2539, 8613, 8395};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.38739835E7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> xs = {7141, 4890, 1093, 2791, 6199, 7466, 3566, 288, 9482, 1642, 4713, 6291, 6760, 1223, 1186, 4149, 3608, 144, 9563, 8551, 5579, 2165, 1049, 6021, 7192, 3584, 6334, 4093, 2031, 5913, 8128, 7325, 2747, 7902, 1443, 822, 2238, 8844, 4133, 4427, 9814, 7569, 2743, 3241, 8617, 4043, 1211, 2652, 3111, 2975};
    vector<int> ys = {8185, 3373, 9289, 1741, 8038, 6341, 4523, 9637, 4265, 4599, 8324, 4514, 6626, 7458, 8324, 5511, 5004, 1000, 7452, 2076, 4316, 7734, 1524, 8038, 4563, 8756, 1858, 853, 6402, 4400, 4501, 3280, 5064, 1854, 188, 7176, 7999, 713, 1628, 1674, 4072, 9946, 7202, 446, 4679, 2260, 2705, 5283, 9628, 4341};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.4423362E7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> xs = {2453, 8512, 7900, 1370, 5369, 5650, 1684, 4411, 2322, 372, 2640, 6616, 4617, 5113, 4008, 7654, 6020, 5907, 1180, 4761, 6857, 5843, 4078, 6154, 3745, 163, 1108, 2348, 2472, 1174, 3481, 4828, 4075, 3626, 1189, 3938, 6666, 3742, 4431, 448, 8024, 7536, 6766, 7683, 6513, 6609, 8792, 3634, 344, 2066};
    vector<int> ys = {5212, 5724, 3137, 3922, 5668, 6958, 7809, 7194, 9323, 718, 6910, 2503, 5589, 6413, 7841, 8831, 1446, 2194, 2117, 24, 4972, 8219, 9735, 8256, 8118, 6801, 8256, 2685, 325, 6707, 9477, 1812, 7088, 1303, 9027, 479, 41, 2789, 6746, 5014, 7720, 7241, 8201, 2484, 8543, 7692, 178, 2538, 159, 4983};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.4283777E7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> xs = {0, 0, 10000, 10000};
    vector<int> ys = {0, 10000, 10000, 0};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> xs = {0, 10, 20, 100, 1000, 10000, 1000, 100, 20, 10};
    vector<int> ys = {0, 10, 20, 100, 1000, 10000, 900, 90, 10, 5};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 504000.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> xs = {9002, 7445, 968, 4708, 8673, 2024, 6532, 8372, 6539, 2371, 9647, 2592, 9363, 8139, 9119, 8250, 2535, 4819, 968, 9720, 5921, 9600, 4790, 4444, 7230, 2568, 5944, 3989, 141, 6126, 2049, 649, 6921, 7955, 4773, 6236, 7741, 5390, 367, 2128, 1431, 1552, 4947, 2199, 4908, 6093, 2989, 2709, 979, 5892};
    vector<int> ys = {2495, 6007, 4266, 2698, 4626, 7915, 1835, 8562, 2950, 9751, 9060, 7848, 8069, 4451, 8437, 8349, 837, 9895, 8545, 5031, 1472, 4207, 3302, 4834, 5856, 4594, 16, 6900, 7839, 9136, 6262, 8904, 8820, 3446, 8109, 2652, 8398, 6621, 4766, 4604, 2380, 3371, 7160, 9479, 6942, 1784, 491, 7632, 219, 8592};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0702413E7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> xs = {6, 5783, 6767, 3579, 2905, 5557, 7479, 4215, 3971, 8607, 2742, 2987, 6984, 2750, 5239, 9277, 6426, 839, 3856, 4942, 3266, 8629, 6090, 7175, 3284, 8329, 6923, 8782, 6434, 1947, 3908, 1231, 8199, 1016, 671, 8334, 6430, 1809, 3575, 898, 9646, 7644, 8768, 5216, 5250, 2388, 9331, 720, 8675, 1744};
    vector<int> ys = {3314, 9341, 5133, 6391, 8174, 1672, 9722, 9713, 1338, 6112, 3785, 9357, 1669, 7587, 3119, 6911, 1169, 8075, 5130, 3861, 2239, 454, 2121, 2215, 9194, 753, 1048, 6052, 4065, 9469, 1009, 5898, 9244, 5114, 2289, 366, 1985, 5675, 3219, 1957, 8330, 6107, 3661, 6439, 6467, 2573, 6393, 7716, 2092, 6564};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.3187063E7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> xs = {4768, 4689, 6896, 1444, 7555, 4319, 2317, 3927, 3970, 9042, 5495, 7626, 8954, 8425, 7665, 5449, 7188, 3513, 6581, 1562, 5167, 1952, 1603, 8077, 1438, 9765, 6542, 5741, 4786, 5105, 1217, 5236, 2541, 1875, 5225, 8183, 3784, 3523, 9863, 9452, 4633, 9893, 6720, 4894, 5366, 2474, 3890, 1073, 1596, 5906};
    vector<int> ys = {192, 2619, 789, 4563, 907, 2505, 4980, 1447, 9285, 1093, 5473, 8243, 6885, 461, 164, 7450, 3826, 9595, 4918, 1557, 4678, 2421, 4167, 2944, 1289, 4734, 1281, 5807, 3823, 1919, 1225, 3291, 3809, 1912, 571, 5494, 5485, 280, 2375, 6486, 4229, 6855, 5980, 1033, 3365, 5827, 4269, 4172, 3129, 3725};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5380862E7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> xs = {3287, 6120, 4226, 6076, 5044, 3297, 5403, 7676, 7467, 1381, 222, 6566, 3524, 8469, 6370, 4788, 7345, 8296, 6469, 8601, 6706, 681, 327, 2355, 9980, 197, 6834, 3603, 8527, 9658, 7710, 7254, 8000, 7539, 7862, 9147, 4543, 924, 9550, 1901, 4362, 8085, 98, 8371, 7640, 7279, 5390, 574, 273, 895};
    vector<int> ys = {3426, 9308, 8093, 2173, 2713, 2996, 1827, 4861, 4341, 7077, 93, 631, 5936, 1315, 6362, 7099, 670, 2233, 5930, 1717, 2580, 6262, 7447, 9705, 7109, 7922, 3121, 750, 9426, 6153, 1405, 8904, 5553, 4495, 8443, 2569, 3833, 3253, 7077, 4017, 6792, 4333, 4695, 331, 5918, 1896, 3707, 193, 4415, 4509};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.3514487E7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> xs = {3840, 4447, 9414, 6532, 8115, 3261, 1278, 9097, 4290, 5077, 2216, 558, 690, 2059, 6509, 6438, 1134, 2032, 6863, 622, 9815, 5105, 6101, 2647, 7527, 731, 1000, 3996, 1492, 3049, 1772, 2565, 3488, 4856, 3149, 6866, 3515, 3066, 5564, 4074, 8728, 1008, 7397, 8536, 9861, 5406, 1751, 9816, 9867, 8406};
    vector<int> ys = {952, 3432, 5451, 6945, 4806, 2746, 5954, 2303, 1294, 9512, 8486, 7614, 2992, 8092, 6241, 8580, 7002, 5568, 8705, 1639, 802, 6289, 8006, 3999, 7242, 3176, 8510, 4800, 2490, 179, 4691, 3097, 3216, 2803, 4818, 791, 1790, 6129, 495, 1206, 801, 2223, 4599, 6449, 667, 1373, 2646, 9233, 6651, 4042};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.97169015E7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> xs = {3768, 1908, 2001, 7486, 6912, 7694, 7083, 8617, 9249, 5259, 2134, 513, 3159, 5171, 5171, 330, 4480, 306, 3315, 3660, 9547, 2353, 4010, 4173, 1113, 1559, 1516, 765, 6628, 8862, 3453, 2554, 4834, 1963, 4590, 4581, 9186, 9494, 7622, 9565, 9040, 9828, 3155, 3562, 2118, 3675, 3626, 5897, 4195, 2050};
    vector<int> ys = {5135, 7326, 4034, 2966, 897, 1281, 2784, 7316, 4003, 8622, 5453, 3320, 9252, 137, 4647, 8276, 3790, 6463, 8811, 7360, 4909, 5596, 7652, 5149, 6530, 4528, 968, 6271, 9450, 641, 7188, 2090, 2868, 1039, 390, 2853, 7234, 484, 7119, 7204, 958, 1089, 6753, 3474, 6032, 9446, 1747, 9679, 75, 9333};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.81602585E7;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> xs = {8390, 6184, 4504, 3702, 9687, 3823, 7839, 8629, 1739, 7808, 6812, 6765, 7679, 7194, 264, 3450, 1546, 5086, 6291, 5771, 5090, 1492, 861, 6390, 1582, 2899, 5516, 3951, 1387, 8915, 113, 1679, 6503, 8838, 9098, 8254, 3802, 3497, 2275, 7578, 9211, 222, 3562, 6533, 7529, 1281, 3700, 2324, 5141, 8661};
    vector<int> ys = {6517, 1619, 4880, 692, 6259, 1011, 3961, 8018, 9497, 8055, 4169, 3826, 646, 5349, 8901, 5380, 1383, 2583, 2947, 5323, 2104, 3911, 1514, 9383, 7266, 2403, 8461, 6825, 906, 8535, 1287, 1803, 1112, 2070, 2917, 6283, 4753, 9308, 2816, 7687, 6236, 58, 2472, 6951, 6602, 1305, 2793, 5130, 1734, 6929};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.89523875E7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> xs = {5388, 3520, 5336, 513, 1838, 1381, 8452, 7147, 2209, 590, 1593, 6890, 9900, 972, 5130, 4696, 2187, 4315, 5712, 8836, 2176, 2895, 8021, 3521, 6540, 8798, 9998, 7827, 5031, 5642, 8757, 3747, 236, 6813, 6922, 8748, 8554, 6796, 1612, 663, 5862, 4721, 799, 5290, 3876, 1718, 4266, 9521, 5639, 6179};
    vector<int> ys = {3448, 9233, 970, 5436, 6703, 438, 9911, 91, 775, 377, 3715, 8376, 260, 3616, 9665, 174, 3662, 7031, 292, 6618, 564, 9222, 862, 3991, 3490, 5637, 7489, 9614, 1981, 7568, 4685, 9116, 8938, 5685, 3632, 7022, 1759, 1271, 4952, 5050, 3328, 820, 2279, 5053, 362, 2163, 5419, 5999, 9203, 2794};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.7519909E7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> xs = {8891, 5390, 1153, 3531, 483, 2859, 6614, 9634, 6908, 1706, 3211, 9380, 9703, 5378, 4012, 4617, 3940, 2132, 9853, 7995, 8546, 1351, 7756, 1816, 1795, 5353, 7832, 3532, 9240, 9572, 7140, 1938, 3750, 6438, 1493, 711, 9949, 839, 8680, 8367, 7716, 7475, 9073, 6240, 2026, 2992, 2118, 8606, 8824, 8238};
    vector<int> ys = {4378, 6923, 1535, 3541, 8060, 247, 5128, 3273, 3910, 2401, 7093, 2778, 7312, 1134, 9722, 8499, 2003, 1463, 1438, 9282, 5315, 4635, 7905, 1795, 4527, 7049, 807, 2803, 3110, 8537, 4388, 8931, 8164, 1912, 2234, 7105, 2826, 8222, 9381, 1332, 9951, 4583, 7255, 3969, 5838, 4054, 1518, 2153, 5306, 9425};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.79046585E7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> xs = {9662, 1520, 9174, 8470, 9602, 9508, 6413, 1902, 5839, 1659, 3520, 9417, 3011, 1298, 446, 794, 6964, 5753, 3615, 5332, 4468, 5388, 2332, 7177, 8132, 3468, 9329, 8247, 4997, 967, 5156, 4077, 9799, 2915, 8674, 450, 6353, 5398, 8339, 1159, 3066, 4798, 1540, 9754, 1019, 3389, 1697, 625, 5633, 7871};
    vector<int> ys = {5322, 2566, 1903, 5359, 3034, 181, 9529, 5793, 1963, 9170, 4276, 6010, 2138, 6616, 7770, 1300, 6652, 2227, 5793, 6622, 7639, 9681, 8491, 4180, 5408, 7781, 942, 8334, 777, 2098, 5388, 9748, 3137, 235, 8904, 3201, 9302, 6410, 2802, 5970, 673, 3487, 2568, 6193, 8758, 3155, 9596, 3136, 1575, 7392};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.14801895E7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> xs = {5341, 7283, 5360, 9967, 3925, 8161, 3406, 665, 7572, 2825, 941, 2224, 489, 3920, 2782, 4523, 289, 2707, 9021, 4875, 5930, 8553, 8586, 2904, 1499, 5210, 3191, 4576, 5589, 9257, 2678, 1994, 8459, 8526, 5197, 8060, 1742, 891, 8230, 7596, 7898, 6258, 8914, 9042, 9151, 7108, 4651, 3310, 8145, 5450};
    vector<int> ys = {8534, 3779, 6009, 6890, 6517, 2621, 3623, 4599, 3077, 4133, 9987, 5069, 2029, 9765, 61, 2724, 9103, 3923, 4662, 4773, 1630, 5836, 5561, 6881, 9067, 6713, 9248, 2292, 5633, 4116, 1904, 7561, 8878, 7963, 623, 550, 434, 5067, 8405, 8869, 7780, 1631, 2989, 9399, 8260, 5616, 2044, 2101, 9201, 3380};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.11171065E7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> xs = {7482, 8922, 5024, 6535, 8190, 5006, 8180, 2166, 8622, 6275, 8394, 8995, 3199, 6580, 8587, 9600, 3096, 130, 3915, 6762, 9059, 2006, 9434, 3726, 1347, 2039, 5061, 5858, 7770, 8676, 55, 1496, 3293, 1931, 1751, 2391, 7205, 7018, 5760, 6563, 6291, 2764, 7383, 8928, 5030, 1420, 6441, 7556, 6258, 8955};
    vector<int> ys = {9752, 3740, 371, 7530, 2344, 9693, 7590, 5373, 2619, 4526, 8776, 9898, 5964, 4490, 6221, 7691, 2948, 7588, 1384, 712, 6014, 9403, 979, 1333, 292, 5329, 5666, 2556, 1111, 2386, 5120, 7832, 3197, 6266, 5773, 7384, 9152, 1788, 11, 458, 7206, 7422, 8136, 5412, 810, 7040, 6843, 2043, 5103, 4569};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.27500685E7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> xs = {275, 5905, 8289, 7434, 2110, 3882, 6970, 3605, 4540, 3087, 3646, 262, 341, 4083, 2506, 9518, 5350, 6058, 3298, 9554, 625, 1713, 7874, 8996, 3631, 2748, 1554, 5463, 648, 3770, 2786, 7436, 5170, 5008, 7066, 1018, 9473, 6656, 3610, 5708, 9128, 215, 5740, 5772, 2639, 4683, 8477, 6327, 975, 7927};
    vector<int> ys = {547, 3105, 7773, 9701, 4317, 4382, 4383, 5326, 9713, 5269, 682, 9859, 7322, 4257, 6936, 108, 2281, 6239, 1829, 2875, 1567, 1052, 5973, 5922, 4353, 5175, 7554, 1487, 9212, 976, 5169, 8017, 4464, 457, 5381, 8256, 454, 2876, 5036, 4389, 5044, 8181, 881, 3373, 6113, 665, 1521, 8137, 7357, 9756};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.3090065E7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> xs = {9299, 5736, 4183, 6119, 555, 8408, 4841, 6560, 4512, 4614, 559, 1761, 4492, 6418, 266, 5124, 8100, 1318, 1490, 1069, 1009, 7711, 8387, 4983, 2279, 8772, 2716, 811, 4677, 3853, 2514, 6663, 5999, 9010, 5669, 1275, 9841, 739, 8145, 6692, 6821, 9561, 9061, 4999, 9713, 2498, 7373, 9484, 8474, 6120};
    vector<int> ys = {9258, 2813, 6171, 7346, 1835, 2661, 4909, 3601, 6661, 1842, 9305, 5632, 2501, 4725, 344, 5956, 6228, 8872, 8387, 178, 4631, 365, 807, 5773, 3849, 4670, 6967, 6411, 1440, 8647, 6788, 8726, 8663, 1925, 1727, 950, 2967, 8277, 9440, 5316, 3274, 154, 5915, 8652, 3042, 2070, 1379, 8079, 8703, 968};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.4821298E7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> xs = {7373, 3050, 3638, 4181, 2724, 9262, 9068, 6516, 1279, 3844, 7512, 8250, 5396, 7018, 4977, 956, 4969, 9496, 2366, 9842, 2924, 7511, 5378, 3573, 5385, 4716, 6123, 5838, 1246, 1309, 2461, 252, 8381, 3245, 3507, 2705, 6199, 6867, 2304, 7751, 6795, 6826, 9129, 8140, 9410, 7637, 1405, 9105, 5423, 1711};
    vector<int> ys = {8754, 1230, 3465, 4261, 5955, 2892, 9057, 8689, 5827, 2501, 420, 5670, 9998, 9390, 926, 1311, 5442, 5214, 8114, 1723, 5047, 5467, 2521, 6830, 5969, 4490, 4637, 8320, 2056, 902, 7512, 9905, 9157, 2862, 5061, 555, 4565, 5066, 8617, 3879, 4426, 1915, 6749, 9291, 5362, 3741, 5904, 3161, 9136, 5530};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0233971E7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> xs = {8719, 1489, 3618, 9235, 3881, 327, 7928, 7722, 3545, 7977, 2406, 1626, 4336, 3398, 640, 4828, 2978, 1700, 9335, 1369, 1389, 530, 8290, 2284, 227, 2430, 1507, 8878, 6861, 4744, 6643, 5294, 6239, 1193, 2539, 5742, 5638, 1711, 7058, 4217, 6763, 9644, 9946, 7076, 1185, 7907, 7951, 1316, 7577, 8226};
    vector<int> ys = {1904, 582, 1612, 38, 4828, 943, 9832, 9726, 2341, 2950, 3467, 4418, 8985, 7280, 9466, 4107, 1482, 7512, 1151, 8813, 2597, 2516, 5594, 9910, 8579, 5956, 5521, 9846, 7732, 1066, 4558, 9650, 165, 1377, 7107, 6160, 1233, 546, 6628, 3375, 3735, 6956, 8626, 4843, 6392, 1255, 7134, 6515, 8647, 7491};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.820549E7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> xs = {1933, 3910, 1738, 30, 8175, 43, 2879, 8127, 8627, 618, 2143, 736, 7323, 1860, 1842, 2015, 2683, 2388, 6378, 5638, 7930, 5602, 8336, 8570, 4345, 7728, 5721, 6605, 4602, 4383, 8809, 5797, 5889, 1012, 7597, 6356, 5052, 5036, 3333, 8142, 496, 73, 81, 9331, 8052, 5090, 4824, 2378, 542, 3816};
    vector<int> ys = {5972, 1954, 4334, 1010, 8576, 4337, 9246, 8787, 2688, 2151, 141, 333, 8698, 7998, 5233, 9886, 2908, 2426, 8697, 2986, 9547, 7203, 4238, 3164, 7777, 4935, 5255, 6862, 2514, 4463, 1636, 7266, 349, 3930, 5740, 222, 4337, 5955, 2580, 7892, 3968, 1800, 1771, 8297, 9094, 3981, 1265, 1450, 9108, 9201};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0907636E7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> xs = {7065, 3859, 3296, 2292, 1407, 7303, 288, 4891, 9093, 614, 8188, 1668, 6965, 2198, 7996, 2392, 4853, 2358, 6528, 5113, 4833, 9108, 2454, 9603, 8349, 9972, 4125, 8537, 9679, 3881, 8919, 1769, 6713, 9779, 6318, 1531, 2523, 1016, 9467, 8931, 3701, 7159, 2411, 4590, 3942, 7295, 2765, 8773, 3847, 1445};
    vector<int> ys = {5415, 5215, 1161, 6037, 2418, 6546, 3708, 4299, 8660, 6313, 4164, 5467, 13, 8327, 1975, 6111, 2623, 5773, 882, 8739, 8218, 682, 6663, 6943, 1483, 4627, 9153, 4305, 9555, 1292, 9829, 8936, 6134, 4100, 8737, 8079, 5306, 4528, 7069, 9709, 2569, 9318, 4164, 496, 3129, 7204, 229, 2106, 9996, 8357};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.149805E7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> xs = {2025, 8862, 427, 9195, 8253, 4525, 2277, 7114, 8362, 3440, 8907, 9107, 9735, 2902, 5192, 6263, 3384, 5199, 4436, 5326, 3400, 7076, 6011, 7379, 9905, 6162, 6051, 842, 5236, 9695, 2185, 5396, 5596, 3410, 5781, 5916, 2877, 934, 7667, 8038, 3911, 6537, 5831, 9441, 6850, 6597, 6048, 3454, 6915, 7630};
    vector<int> ys = {8565, 194, 6912, 2181, 3591, 3049, 3670, 1649, 3458, 9283, 3840, 4825, 8533, 6479, 7459, 6741, 9541, 5220, 3707, 7308, 1673, 5409, 1133, 3395, 3429, 4288, 5439, 5772, 1486, 8083, 7386, 4055, 5398, 1674, 5849, 5337, 8395, 3223, 3568, 4655, 3083, 3149, 5621, 7963, 3337, 9390, 3169, 780, 6162, 3347};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.20836655E7;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> xs = {8929, 4099, 6243, 1234, 9363, 4144, 5038, 8800, 6829, 306, 3788, 1331, 7554, 2170, 8736, 2250, 1989, 3944, 5358, 3507, 3599, 656, 7067, 7878, 7407, 2877, 8866, 2770, 9310, 6584, 8182, 3421, 9615, 7266, 7601, 5805, 6783, 9867, 6735, 2139, 9853, 8669, 2954, 4301, 527, 3723, 3194, 3039, 8394, 2925};
    vector<int> ys = {7517, 8163, 9821, 3437, 2007, 4183, 7018, 5653, 1813, 1565, 4433, 3070, 4151, 4648, 2373, 8683, 3958, 1335, 855, 8510, 2575, 2207, 901, 4372, 9467, 7440, 2327, 8252, 9532, 4713, 1819, 2663, 1027, 3765, 7602, 3929, 1656, 5754, 9450, 7796, 2849, 8092, 5379, 9282, 4793, 7927, 8765, 1194, 7227, 9915};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 7.46747995E7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> xs = {0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 4, 3, 2, 1};
    vector<int> ys = {0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> xs = {10, 15, 3, 37, 12};
    vector<int> ys = {49, 49, 12, 8, 20};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 745.5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> xs = {10, 15, 3, 37, 600};
    vector<int> ys = {49, 49, 12, 8, 700};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 21526.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> xs = {0, 0, 2, 5};
    vector<int> ys = {0, 5, 2, 0};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> xs = {7677, 8379, 7695, 22, 5165, 7297, 652, 9842, 6806, 9051, 9583, 5536, 8683, 2941, 5365, 9725, 6297, 5840, 960, 4967, 3464, 7353, 7476, 5141, 5166, 9351, 9235, 4186, 4928, 3642};
    vector<int> ys = {5452, 4476, 7826, 5842, 8424, 6221, 4448, 2247, 9055, 5182, 544, 6105, 6061, 6900, 6530, 2863, 9700, 3903, 5240, 9436, 1770, 9525, 2585, 8103, 7952, 2244, 8246, 9182, 2192, 1233};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 6.39592155E7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> xs = {8567, 7481, 5172, 1069, 5264, 4157, 229, 7747, 3457, 9717, 8451, 1525, 8174, 5832, 8010, 9971, 1969, 648, 801, 2739, 2144, 896, 9507, 6282, 18, 2508, 3260, 5043, 1742, 3871, 1271, 4754, 1454, 3876, 8894, 6284, 235, 9705, 3252, 5286, 3852, 3276, 176, 2553, 9896, 7082, 2066, 7383, 324, 8838};
    vector<int> ys = {8468, 5591, 8907, 4626, 401, 244, 8209, 3691, 3387, 6309, 7201, 7354, 7183, 5646, 5709, 4114, 6404, 990, 4543, 3264, 1662, 2600, 1807, 7612, 6080, 9165, 4218, 256, 4754, 1606, 3118, 1106, 2036, 9893, 4807, 1710, 2609, 5492, 3729, 5170, 950, 6262, 696, 5014, 672, 3272, 543, 8882, 665, 6253};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.24992615E7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> xs = {8567, 7481, 5172, 1069, 5264, 4157, 229, 7747, 3457, 9717, 8451, 1525, 8174, 5832, 8010, 9971, 1969, 648, 801, 2739, 2144, 896, 9507, 6282, 18, 2508, 3260, 5043, 1742, 3871, 1271, 4754, 1454, 3876, 8894, 6284, 235, 9705, 3252, 5286, 3852, 3276, 176, 2553, 9896, 7082, 2066, 7383, 324, 8838};
    vector<int> ys = {8468, 5591, 8907, 4626, 401, 244, 8209, 3691, 3387, 6309, 7201, 7354, 7183, 5646, 5709, 4114, 6404, 990, 4543, 3264, 1662, 2600, 1807, 7612, 6080, 9165, 4218, 256, 4754, 1606, 3118, 1106, 2036, 9893, 4807, 1710, 2609, 5492, 3729, 5170, 950, 6262, 696, 5014, 672, 3272, 543, 8882, 665, 6253};
    CultureGrowth* pObj = new CultureGrowth();
    clock_t start = clock();
    double result = pObj->finalTray(xs, ys);
    clock_t end = clock();
    delete pObj;
    double expected = 8.24992615E7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310431&rd=7224&pm=3996
********************************************************************************
#include<algorithm> 
#include<ctype.h> 
#include<iostream> 
#include<math.h> 
#include<set> 
#include<sstream> 
#include<stdio.h> 
#include<string> 
#include<utility> 
#include<vector> 
 
using namespace std; 
 
 
#define sqr(x) ((x)*(x)) 
 
struct point { 
  double x,y; 
  point(double x1, double y1){x=x1;y=y1;} 
}; 
typedef vector<point> VP; 
inline point operator+(point p1, point p2){point p(p1.x+p2.x,p1.y+p2.y); return p;} 
inline point operator-(point p1, point p2){point p(p1.x-p2.x,p1.y-p2.y); return p;} 
inline double operator*(point p1, point p2){return p1.x*p2.x+p1.y*p2.y;} 
inline double operator^(point p1, point p2){return p1.x*p2.y-p1.y*p2.x;} 
inline double mag(point p1){return hypot(p1.x,p1.y);} 
point inf(1e99,1e99); 
 
vector<point> giftwrap(vector<point> p) { 
  vector<point> hull; 
  int i,m=0,n=p.size(); 
  double c; 
  for(i=1;i<n;i++) 
    if(p[i].x<p[m].x)m=i; 
  swap(p[0],p[m]); 
  hull.push_back(p[0]); 
  for(;;) { 
    point b=hull.back(); 
    m=0; 
    for(i=0;i<n;i++) { 
      c=(p[i]-b)^(p[m]-b); 
      if(c<-1e-9){m=i;continue;} 
      if(fabs(c)<1e-9&&mag(p[i]-b)>mag(p[m]-b))m=i; 
    } 
    if(m==0)return hull; 
    hull.push_back(p[m]); 
    swap(p[m],p[n-1]); 
    p.pop_back(); 
    n--; 
  } 
} 
 
// Area of a polygon 
double area(vector<point> p) { 
  double ret=0; 
  int i; 
  p.push_back(p[0]); 
  for(i=0;i<p.size()-1;i++) 
    ret+=p[i].x*p[i+1].y-p[i+1].x*p[i].y; 
  return fabs(ret)/2.0; 
} 
 
 
class CultureGrowth { 
  public: 
  double finalTray(vector <int> xs, vector <int> ys) { 
    VP p; 
    for(int i = 0; i < xs.size(); i++) { 
      p.push_back(point(xs[i],ys[i])); 
    } 
    for(int i = 0; i+1 < xs.size(); i++) { 
      p.push_back(point((xs[i]+xs[i+1])/2.0,(ys[i]+ys[i+1])/2.0)); 
    } 
    p = giftwrap(p); 
    return area(p); 
  } 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/