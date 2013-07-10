/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7788
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

class PlaneDivision {
public:
    int howManyFiniteParts(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2);
};

int PlaneDivision::howManyFiniteParts(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x1 = {0};
    vector<int> y1 = {0};
    vector<int> x2 = {1};
    vector<int> y2 = {1};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x1 = {0, 1, 2};
    vector<int> y1 = {0, 1, -1};
    vector<int> x2 = {1, 2, 0};
    vector<int> y2 = {1, -1, 0};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
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
    vector<int> x1 = {-10000, -9999, 10000, -9999, 0, 500, -500};
    vector<int> y1 = {-9999, 10000, 9999, -10000, 0, 0, 0};
    vector<int> x2 = {-10000, 9999, 10000, 9999, 0, 500, -500};
    vector<int> y2 = {9999, 10000, -9999, -10000, 1, -1, -2};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y1 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> x2 = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
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
    vector<int> x1 = {-1, -1, -1, -1, 1, 3, -3};
    vector<int> y1 = {-1, -2, 0, 0, 10000, 1, -5};
    vector<int> x2 = {1, 1, 1, -1, 1, -3, 3};
    vector<int> y2 = {1, 0, 2, -10000, 0, -2, 4};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> x2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> y2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
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
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10000};
    vector<int> y1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 9999};
    vector<int> x2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 9999};
    vector<int> y2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 10000};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
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
    vector<int> x1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, -10000};
    vector<int> y1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, -10000};
    vector<int> x2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, -9999};
    vector<int> y2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10000};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x1 = {-1032, 2230, -308, 3960, 6365, 301, -5891, -5713, -1406, -664, -3749, -282, 3961, -9863, -631, -3998, 713, -6553, 6800, 9021, -2871, 45, -8231, -5550, -8519, -9304, -2408, -1951, -7926, -3746, -2483, -4287, -2846, -2540, -5166, -6821, -4949, 5093, 2867, 6171, 4035, -82, 4879, 545, -7637, -7210, -5879, -7950, -1670, 4352};
    vector<int> y1 = {2954, -4918, -1474, 8007, 1865, -7402, 7673, 29, 8776, 9722, -3858, 9236, -1135, -5811, 4132, 8285, -2699, 3530, 1778, -131, -812, 5456, 9253, -3377, 9767, -2332, -3282, 1167, 4118, 7758, 4272, 6208, 7458, -6553, 2100, -5610, -5109, 2305, -9576, -1603, -8439, -7970, -692, 800, -7305, -9689, 8949, -5647, 3412, -5225};
    vector<int> x2 = {-8909, -947, -8834, 5963, -8992, -8836, 6582, 932, -614, -3035, -3512, -3240, -9313, -6562, 393, -4428, 9558, 7556, 7790, 9335, -9614, -3574, -1743, 98, -2153, 7093, 1264, -147, 6351, -3507, -3586, -9323, 496, -8255, -6799, 4634, -5180, 9858, -8795, 3677, -6202, -2124, -154, -156, -7961, -7214, -1224, -4737, -6006, 1608};
    vector<int> y2 = {3730, -2719, 3398, -907, -5826, 6621, 8489, 1268, 1810, -2388, -7277, 3289, 3002, -942, -2466, -1021, 4201, 9944, -5755, -7759, 1849, -857, 4314, -2930, 2226, 5571, -812, -2703, 1844, -1924, 152, 6840, 7108, -4354, -1274, 9655, -5643, 7155, -3729, -415, -9930, -8486, 4232, 563, -9437, -2423, 3944, 6506, 2339, 4377};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x1 = {9530, 1655, -1135, -6915, 1127, -4662, 4197, 2894, -6000, -1831, -5414, -8161, 8198, 2660, -4800, -2403, -6045, -8447, 1145, 7784, -8554, -2468, -2341, 148, -9269};
    vector<int> y1 = {-2561, 1850, -5703, 1448, -4584, 1656, -2674, -697, 2223, 6770, -2211, -7793, -2632, -781, 87, 7132, -9560, -9031, -1244, 1184, 924, 4073, -1580, 1409, -1617};
    vector<int> x2 = {6879, 1320, 1785, 691, -5605, -1150, -4767, 5481, -2060, 3124, -804, 7646, -1152, 7915, -21, 6075, 8641, -2775, -5930, 9691, 8626, 4900, 7801, -2593, -9749};
    vector<int> y2 = {6424, -9735, 5529, -2514, -466, 6342, -3011, 8148, -2905, -5086, 9587, -783, -5049, -5724, 4111, -6069, -1211, -7339, -8708, 5567, 4481, 8389, -8054, -2563, -2214};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x1 = {-9383, -6461, 4743, 2276, -7419, 8665, -1646, 2243, 1980, -1717, -897, -2283, 914, 7016, -5818, -1687, 1374, 9328, 529, 3488, 5338, 9765, 5164, 2835, 4919, 2865, 5192, -4168, 2169, -6848, 7612, -7950, 9029, -4812, 9407, -9008, 7527, -6577, -2304, 2202, 9824, 2491, 9440, 5210, -2176, 6867, -8317};
    vector<int> y1 = {-5081, -2319, -1828, -5098, 1103, -9982, -9225, -5952, 7407, 1251, 4241, 9001, 7724, -2241, -2620, -8796, 5936, -3946, -807, 2094, -3990, 2394, 8518, -6959, 1853, -6686, -5722, 5506, -2740, -4854, -4612, -9167, 6260, 4304, 746, -9590, 2722, 7192, 9240, -4295, -9498, 248, 9843, 8130, 3594, 9852, 1369};
    vector<int> x2 = {9715, -3173, 2792, -5548, -5117, 6726, 4920, 266, -7723, -7580, -2903, -8954, 114, -5321, 2635, -7444, 6703, 4353, -5166, 543, -9714, 2134, -3115, 839, -852, -1099, 2161, 9220, -8395, -4678, -6124, -8607, -4084, 2249, 5332, 3258, -9626, 472, -136, -9502, 3262, 722, -9351, 8987, -7201, 3815, 1052};
    vector<int> y2 = {-174, 2279, -7942, 1165, -7190, -8195, 5514, -5829, -8232, -3562, -8681, -5132, 1890, -6170, -461, 5877, -1646, -8332, -9533, -97, 6231, 7484, -5858, -505, 723, 9085, -9264, -2567, 6973, -5974, -9540, -3713, 208, 9996, -6587, 8767, 5449, -5380, 9780, -2486, -2004, -4387, -267, -4836, 2895, -9375, -6566};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1035;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x1 = {-971, 5830, -7582, -7232, 9888, -8825, -5650, 2977, -7972, 3441, -7912, 870, 6909, -3335, -8039, 5360, 5878, -5318, -9568, 5346, -9534, -8640, -6093, -283, -8052, -9344, -1226, -2554, -8218};
    vector<int> y1 = {4384, 7391, 503, 4321, -7414, 5184, -8372, 3794, -720, -5442, 7871, -7352, 336, -6266, -9857, -5754, 1466, -8934, 9104, 1790, -1534, 4753, 5591, -1336, -2829, 3122, -9568, -1903, -6696};
    vector<int> x2 = {4436, -4627, 7247, -9019, -2112, 549, 3203, 2562, -1784, -6424, 6109, 8347, -1851, -354, -6336, -1553, 212, -6160, -6540, -6938, -2841, 1423, 3220, 2377, -8364, -2500, -9440, 6466, -3723};
    vector<int> y2 = {3569, 1063, 1509, -5225, 9183, 9628, 5890, -9618, 6582, 7147, 1833, -4116, -2132, -1904, -3516, 847, -4920, -3014, 6728, 4826, 196, 8416, -267, -2685, 5281, 6822, -7591, -2156, -7664};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 378;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x1 = {4397, 4298, 3351, -7374, -3070, -1913, 7775, -9017, -982, -7555, -5440, -5840, -1156, -1702, -2970, -2169, -5225, -3638, -1502, 7904, -4932};
    vector<int> y1 = {7165, -6869, -4463, -6250, 5694, -1378, 9742, -3335, -1844, 4708, -737, 7765, -294, -1045, 4176, -367, -4465, -888, -5260, -5060, 822};
    vector<int> x2 = {-3172, -8098, -4020, -6549, -7054, -4853, -8820, -9347, -325, 9213, -6964, -4141, -8448, -8844, 1078, -8733, -6850, 7977, 4823, 8770, -1069};
    vector<int> y2 = {-8538, -2652, 1415, 2757, 8337, 8419, 2182, -6687, -4151, 9499, 5503, 2136, -9608, 9512, -7164, 3068, -1657, 7371, -4468, 90, -3884};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x1 = {-7230, -8995, 6344, 686, -2395, 3207, -3463, -9770, 1280, -8534, -1845, -5254, 1496, 5947, -6182, 9265, 5795, 6844, -3768, -999, -8052, 4246, 8043, -889, 7574, -1675, 1882, -5264, -9680, -709, 422, 1056, 7829, 7244, -3682, 3187, -2225, -7633, -7783, -3715, 7822, -5213, 801, 5591, -4428, 4663};
    vector<int> y1 = {-3294, 3827, -9507, -6506, 4415, 7583, 8403, -8674, 8062, -4379, 4550, -3000, -5257, -2491, -8978, 4979, 1442, -7248, 9752, -140, -4771, -9107, -7151, -3869, -6887, -8538, 2269, -1635, 2140, 3978, -9852, 1075, -658, 7994, -1583, 8759, -8259, -6996, -813, -3997, -3653, -1411, -5587, 7283, 253, -5784};
    vector<int> x2 = {-8026, -4978, 7022, -9835, 2260, 2679, 7868, -3169, 7103, -40, -3577, 2591, 5415, -1736, -3332, 3810, 6097, -1025, 2522, 6843, 8037, -6487, -2161, 8227, 206, 3289, -3485, -5758, 1421, -351, 2530, 1355, 678, 4077, 9753, -4034, -3183, 7995, 2088, -5533, -1239, -7289, -6619, 3238, 5473, 9675};
    vector<int> y2 = {-7834, 126, -1982, 2180, 1420, 235, -8142, 1552, -562, 4001, -5094, -3773, 9580, -2715, -4532, -2993, 5099, -4167, -8260, 4733, 9233, 5382, -7897, -9866, -4645, 1803, -5223, -6023, 6681, -9243, 8019, 7017, -3539, 8141, -9828, -9859, 8083, -311, 9519, -5968, -5279, 1174, 4328, -447, -309, -1642};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x1 = {-3816, -2841, 395, -509, 6526, -9821, 3892, 3905, -2546, 882, 7752, 6990, -9029, -6259, -1028, -1737, -834, 3317};
    vector<int> y1 = {7663, -1211, 5754, 366, -1250, 7427, -1411, -3940, -9449, 5592, -7097, -1735, -2991, -339, 7511, -1673, 2053, 6099};
    vector<int> x2 = {2856, -2590, -3660, 7086, 3399, 8394, 7860, -6956, -5811, 3331, 7573, -7847, -6407, 2990, -1255, -9975, 9870, -1876};
    vector<int> y2 = {6136, 8764, 2192, -3410, 3183, 5023, -2490, -901, -8209, -8036, -9209, 4899, -2800, 7290, -7853, -3342, -5460, -1315};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x1 = {-8640, -2270, -496, -8740};
    vector<int> y1 = {-5326, 2607, 1263, 9525};
    vector<int> x2 = {1726, 7036, 8977, 3681};
    vector<int> y2 = {-2721, 4017, -5841, 1715};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x1 = {-1399, -4467, -3897, 7970, 3899, 4726, -7388, -5724, -6268, -4154, -855, -803, 1451, 4692, -6104, 3475, -9657, -2855, 5249, -2014, -6315, 8882, -8629, 3399, -5310, 5710, 620, -9385, 6757, 3427, -8711, 280, -6925, 7819, -8388};
    vector<int> y1 = {9761, -1324, -4384, -9913, -3673, 4213, -301, -4542, -8365, 6364, -3694, 7482, -4167, -2310, -9396, 3834, -943, 935, -2203, -7872, 1480, 8731, 2978, -9933, -6739, 3698, 1374, 5289, -5498, -1457, -1946, -4580, -4564, -4087, 8273};
    vector<int> x2 = {-6419, -2364, 804, -2686, 6700, 1930, 7727, 8384, 6104, 9034, 9537, -7995, -8604, 976, -9315, -4801, -7929, 9723, 5758, -4977, 7659, -2675, -723, -1525, 7727, -4128, 5757, 2588, -8220, 7293, 9746, -5619, 9313, 3700, 5779};
    vector<int> y2 = {7798, -6683, -8415, -7479, 9987, -2614, -6549, -2430, -4355, -4359, -6727, 7487, 6257, 2001, -2495, 1205, -6857, 322, 2486, 7603, -2186, 4548, -5404, 5640, -8434, -1440, -9651, 4119, -4117, -3723, -3902, 2025, 2137, 1604, 8234};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 561;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x1 = {8174, -3814, 8440, -2929, 1153, 6915, -1207, -271, 1996, 7769, -369, 1314, 8478, 8886, -6451, -2971, 8114, -9515, -6672, -7983, -1346, 2633, 1540, 1409, 7690, 5573, -9158, -9581, -7056, 9394, 3929};
    vector<int> y1 = {-9085, -47, 7146, -1669, -815, -6880, 9572, 2014, -3727, 8419, -6947, 1327, 9201, -4608, 9655, -9195, -5023, -6481, 1330, -5026, 599, -7680, 168, 8346, 3148, -8602, 8245, -4533, 9694, 198, -2524};
    vector<int> x2 = {8235, -8264, 8436, -6817, 1707, -3872, 702, 7314, -8754, -3353, -7729, -2924, -4164, 4764, 7102, -1088, 4403, 1839, -916, -900, -4240, -683, -7899, -5846, -1095, -1416, 71, -9523, -7324, -8988, 6900};
    vector<int> y2 = {6970, -5344, -142, 396, -8345, 9702, 4333, 2369, 530, 8751, 3380, 9978, -3217, -2362, 5183, -6000, -6309, -7963, 8061, -4746, -5385, -2191, 320, 4492, -7243, -9301, 155, 2506, -8545, -3506, -4003};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 435;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x1 = {-9124, -2852, -1652, 9965, -904, -7345, -4684, -2252, -5311, -6802, -9343, 2806, 2154, 5848, -6133, -2798, -3974, 7564, 4474, 2987, 832, 5392, -7907, -7799};
    vector<int> y1 = {4412, 6049, -1941, 6482, 2433, -2166, -8878, 2747, 908, -2967, -8415, 9614, 6240, 2532, -9081, -9062, -5133, 3157, -9564, 665, -6880, -2081, 1580, 2675};
    vector<int> x2 = {24, 3935, -8987, 5967, -2039, -6492, -29, -1530, 6925, -6523, -788, -8299, 7853, 7080, -5479, -6007, -8576, 7640, 1573, 3614, -1494, -1627, 6275, 8870};
    vector<int> y2 = {1985, -5685, -6567, -2244, -7441, -9549, 1976, -3549, -7692, -2050, 2313, -4689, -1142, 6996, -3009, 9587, -128, -2239, -1307, 4322, -7047, 310, -9863, -5206};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x1 = {-2487, -4283, 5786, -9114, -5601, -4658, -5576, 9254, 169, 5816};
    vector<int> y1 = {-247, -7324, 4375, 8007, -3946, -6308, 1609, 9257, -1811, -5207};
    vector<int> x2 = {5888, -5063, 3933, 6073, -3795, -8319, 2724, -6688, -8384, -9287};
    vector<int> y2 = {-3586, -3816, 6824, -8626, 7652, 6288, -1133, -3853, -3936, 1934};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x1 = {-6250, -8963, 6875, -756, 6657, 1507, -7036, 343, -3924, -1040, -2851, 1282, 7795, -8224, -9694, -4518, -2466, -1872, -6846, 6110, -8846, 6321, -3553, 6465, 4404, -5303, 1074, -115, 3066, -8510, -2285, -405, 2963, -5029, 7235, 8910, 9758, -6605, 339, 1079, -656, 5156, -2133, -561};
    vector<int> y1 = {-806, 1753, 9825, 2295, -3989, 6426, -1632, 6425, 5787, -7404, -4978, -6613, -8837, -4581, 7354, 3307, 4874, -62, -6890, 6295, 9538, 1431, -166, 2547, -2187, 4966, 5299, 2202, -7703, 5795, -2930, 5431, 5770, 8964, -7200, 2395, 752, 9749, 225, -6806, -9999, -6831, -3028, 8062};
    vector<int> x2 = {-9566, -9978, 8796, -7359, -6436, 7513, 2782, -1986, -9815, -6884, 5092, 7497, -7539, 1372, -7216, 619, 2295, -3199, -7145, 6997, -8175, -6033, 2338, 6088, 3029, -2583, 8255, 7483, 7923, 1591, 7662, -9338, 8606, -8892, 7557, 5147, -2980, 484, 5023, -9463, -4709, -5785, 7079, -3719};
    vector<int> y2 = {-8427, 1201, 6051, 678, 1874, -5992, 4848, -8927, -6025, 4896, 1194, -8437, -8216, -9647, 4012, 3558, 9293, -3291, -7882, -1596, -9718, 379, -5491, -2465, 8772, 7815, -9928, -7627, 8617, -4593, 7685, 4279, 3711, 9536, 6257, 4746, -2014, 6663, -5311, -4891, 5359, -6905, -8082, 6793};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 903;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x1 = {-3837, -5522, -9343, 7122, -8180, -1182, -1021, 536, -308};
    vector<int> y1 = {-4665, 6890, -9315, 1955, -696, 2981, 2939, -2921, -863};
    vector<int> x2 = {9689, 5369, 6870, 1204, 4916, 9767, -1644, 9740, -5077};
    vector<int> y2 = {-1565, -9452, -2782, -76, -8495, -800, -2321, -7550, -7281};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x1 = {-2950, 920, 1207, -3090, -6403, -8449, 3832, 4641, 7208, -8108, 4534, 4379, 2356, 8989, -7219, 8164, -6396, -79, 8179, -2026};
    vector<int> y1 = {2799, -4624, -6167, -6323, -9227, -3182, 4859, 4988, -9824, -8445, 4223, 2845, 7389, -1498, 3325, -8870, -1176, 6607, 3646, 3764};
    vector<int> x2 = {-5425, -5829, -9116, 324, -2534, 9934, 962, 2600, -1302, -1709, -1495, -2184, -1009, 2457, 9273, -5768, 9147, -4219, 9015, -9762};
    vector<int> y2 = {9578, 8451, -7564, 7195, 129, 1004, -7302, -8496, -1752, -1583, -6889, -513, 1635, -9248, -3655, 6274, -2121, -1743, -4943, -2970};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x1 = {-9164, -5292, -3491, 4601, -84, -8270, 3374, 7585, -7610, -3366, -4413, -3403, 4725, -1729, -5369, 5605, 3274, -4422, -8169, -1583, 4525, -2570, 8644, 9074, -5241, 2788, -3535, 1358, -9510, 503, -3270, 9190};
    vector<int> y1 = {9957, 1454, 3564, -6030, -7800, -7152, 8693, 3795, -3357, -6772, -9839, 8019, -5912, -4204, 3769, 4838, 5279, 3938, -4701, 2584, 1042, -9121, 475, -426, 2144, -66, 5204, 3969, -611, 4353, 5137, -5792};
    vector<int> x2 = {4708, -8983, -8108, 6862, 9783, 9256, -467, 1010, -9343, 3083, 650, -5446, -4882, -7351, 7851, -7337, 744, 8138, 3830, -9462, -4802, 9674, 1220, -6677, -3820, 7417, 2692, -3852, -8718, 1565, 854, 4130};
    vector<int> y2 = {-8339, 220, 5874, -7469, 1270, 8386, -6085, -729, -4259, 2291, -5913, 232, -7890, 1443, 8469, -39, -2555, -4616, 9023, -7053, 8757, 3596, -2148, 3764, -6911, -4405, 6947, 6922, 7477, -8964, -1618, 6921};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 465;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x1 = {-6532, 7424, 6108, -1571, -4740, 2422, 3888, -5004, 5532, -7390, 4289, -7783, -5014, -8661, 3056, 8290, 4514, 1849, 6026, -8459, 4844, -2588, 8872, 195, -3257, 1294, -2499, 2655, -9034, 6844, 7614, -2933, 8402, -2750, 4993, -8189, -270, 5888};
    vector<int> y1 = {-1773, 2255, -1551, -7479, 4631, 9659, 8063, 6466, 8145, -6112, -7638, 1042, -3544, -4908, 4056, 1468, 7144, 3504, 5740, 2849, 7970, -801, -9905, -9577, -3464, -7613, -206, -726, 531, 3217, 7443, -5433, -2468, 1774, -4264, -8543, -4748, 8332};
    vector<int> x2 = {-1061, -687, 4076, -1605, 4487, 6, 6227, 5772, -8835, 2682, -3273, 3611, -3993, 6847, -2347, -3538, 6034, 2043, 1069, -1139, -1697, 7752, 8977, -4717, -140, -6412, -6583, 338, 7690, -989, -3633, -1474, 8814, -6439, 9942, 4383, 338, -3182};
    vector<int> y2 = {9464, 811, -3478, -6008, -1309, -9932, -2701, 4533, 6952, -4005, -4696, 6206, 3193, -22, 4554, 5317, 6402, -6611, 8905, -1645, 5405, -2364, 2250, -8303, -888, 4167, 8571, 1761, -3574, -5686, 1686, -5102, -3668, -399, 5502, 7600, 7606, 1336};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 666;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x1 = {-2643, -4816, -8608, -7050, -5123, 781, -6458};
    vector<int> y1 = {-3860, 2384, 9210, -1748, 7006, 7139, -7488};
    vector<int> x2 = {-5990, 6242, 9260, -9084, -8955, 7193, -9809};
    vector<int> y2 = {5110, 5768, -4028, -5219, 5317, -2683, 802};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x1 = {-2583, 4514, 3148, -2733, 3856, 778, 4899, 531, -2902, -2247, -2988, 9252, 6712, 7528, -6048, 561, -7848, -7922, 267, 1382, 2964, 3470, -9506, 8870, -1276, 3755, 9157, 9974, 8953, 4923, -9185, 1725};
    vector<int> y1 = {9825, -9428, -3098, 9241, 9435, -3600, -8286, -4668, -8847, 2521, -1846, 7428, 6331, -7185, -7512, -5574, -3553, 1202, 1219, -4834, -7074, -8462, 737, -1379, -2922, -2232, -2580, 3606, 397, 3820, 7685, -832};
    vector<int> x2 = {8747, -9372, -4880, 3665, -6857, 9326, -9995, -2162, 3697, -223, 2690, 6584, 6214, -9809, 4026, 3203, -3507, -1138, -5293, -8969, 319, -5881, 5609, 3249, -6536, -5864, -2551, 3166, 1738, 7316, 1033, 4133};
    vector<int> y2 = {1052, -6488, -671, 7152, -1523, 8434, -3486, 7044, -214, -9214, 2701, 5615, 7699, -4349, 5478, 3064, -5178, 8243, 2621, 9576, 3851, 3717, 1695, 5274, 7420, 7168, 400, 319, 8196, -6180, 6376, -5091};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 465;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x1 = {4220, 3563, -2018, 4095, 16, 905, 4654, 7362, 9195, 9789, -5873, 7832, 3056, -5906, 2819, -5597, 3129, 7741, -2918, 6065};
    vector<int> y1 = {840, -8146, -2852, 9339, -3348, -3917, -3424, -7843, 4900, -1777, 83, -4245, -8659, 6628, -1578, -6471, -8176, -456, -7567, 8671};
    vector<int> x2 = {-1210, 8845, -2702, -918, 1945, 7295, 831, -6892, -9757, -5587, -5424, 7149, 6358, 5328, 6272, 1254, 2992, 5207, -6505, 5659};
    vector<int> y2 = {9050, -30, -8806, 872, 8103, -8892, -4608, -8364, 4182, 8853, 1313, -5036, 9277, 7715, 6041, -9540, 5416, -7806, -3356, 7521};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x1 = {-100, -100, -100, -100, -100};
    vector<int> y1 = {-100, -99, -98, -97, -96};
    vector<int> x2 = {100, 100, 100, 100, 100};
    vector<int> y2 = {99, 100, 101, 102, 103};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x1 = {-100, -100, -100, -100, -100, 1};
    vector<int> y1 = {-100, -99, -98, -97, -96, -1};
    vector<int> x2 = {100, 100, 100, 100, 100, -2};
    vector<int> y2 = {99, 100, 101, 102, 103, 2};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
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
    vector<int> x1 = {-949, 434, 381, 319, 356, 22, -420, -303, 451, 112, 16, 991, -9637, -9349, -7184, -7278, -7278, -7184, -9349, 8883, -963, -9637};
    vector<int> y1 = {756, 421, -576, 825, 959, 284, 521, -618, 857, -709, -499, 200, 1943, -1301, -4529, 2825, 2825, -4529, -1301, -8111, -7998, 1943};
    vector<int> x2 = {-1033, 371, 339, 298, 306, -18, -450, -323, 441, 28, -40, 963, -7278, -7278, 809, 9289, 809, 9289, -9637, 9289, 8883, 809};
    vector<int> y2 = {584, 292, -662, 782, 1179, 460, 653, -530, 901, -820, -573, 163, 2825, 2825, 2822, 1309, 2822, 1309, 1943, 1309, -8111, 2822};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 185;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x1 = {629, -463, -684, 259, 185, 854, 488, -2931, 9219, 5911, 5911, -2931, -2931};
    vector<int> y1 = {149, -469, -154, -692, -508, -815, -852, 7859, -4867, 5735, 5735, 7859, 7859};
    vector<int> x2 = {541, -529, -728, 237, 302, 932, 527, 5911, -7694, 9219, -7694, 9219, -7694};
    vector<int> y2 = {337, -328, -60, -645, -424, -759, -824, 5735, 2411, -4867, 2411, -4867, 2411};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x1 = {-400, 409, -445, 9, -303, 208, 702, -945, 684, 2659, -1014, -1014, -203, 431, 9721, -2176, 9721, 2659, 9721, 9721, 2659, 9721, 9721};
    vector<int> y1 = {248, -574, -920, -15, -454, 85, -355, -790, -321, 4305, 9284, 9284, -2902, 1325, 90, -8544, 90, 4305, 90, 90, 4305, 90, 90};
    vector<int> x2 = {-494, 362, -321, 102, -241, 239, 564, -1037, 638, -2176, -203, 1183, 1183, -2176, -1014, -1014, 2659, -203, -2176, 1183, -1014, 431, -203};
    vector<int> y2 = {154, -621, -1108, -156, -548, 38, -412, -828, -340, -8544, -2902, 4020, 4020, -8544, 9284, 9284, 4305, -2902, -8544, 4020, 9284, 1325, -2902};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x1 = {-169, 443, 826, -19, 72, 897, 798, 487, -708, -261, -5690, -617, 6838, 6838, -5690, 6838, -5690, -514, -5690};
    vector<int> y1 = {317, 534, 909, -91, 599, -280, -878, 747, 968, 330, -3320, -4511, -6458, -6458, -3320, -6458, -3320, -1638, -3320};
    vector<int> x2 = {-121, 479, 850, -7, 89, 759, 706, 441, -796, -305, -617, 8604, -617, 8604, 8604, -514, 6838, -617, -514};
    vector<int> y2 = {257, 489, 879, -106, 630, -370, -938, 717, 874, 283, -4511, -2461, -4511, -2461, -2461, -1638, -6458, -4511, -1638};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x1 = {976, 699, -1000, -599, -435, 582, -908, 2255, 8911, 8911};
    vector<int> y1 = {-264, 762, 129, 865, -923, 171, 410, 6756, -6996, -6996};
    vector<int> x2 = {971, 695, -1003, -601, -436, 524, -937, 6813, 2255, 6813};
    vector<int> y2 = {-484, 586, -3, 777, -967, 193, 421, -6471, 6756, -6471};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x1 = {-993, 380, -399, -519, 238, -27, 85, -981, 92, -53, 318, 329, 7755, 8401, -6454, -768, -3192, 8401, -6454, -6454, -768, -6454, -3192, -768, -6454, 8789, -6859, -6454, -6859, -6454, -3192, -6859, 8401, 8401, -6859, 8401, -3192, -6454, -768, -768, 8401, -6859, 8789, 8401, 8789};
    vector<int> y1 = {-185, 593, 454, 438, 203, 708, 530, -626, 9, 230, -510, 125, -2776, 6312, -3644, -8159, -3065, 6312, -3644, -3644, -8159, -3644, -3065, -8159, -3644, 1865, -770, -3644, -770, -3644, -3065, -770, 6312, 6312, -770, 6312, -3065, -3644, -8159, -8159, 6312, -770, 1865, 6312, 1865};
    vector<int> x2 = {-1141, 269, -473, -556, 284, -52, 65, -996, 82, -58, 374, 357, 223, 8789, 223, 7755, -8572, -6859, -8572, 8789, -3192, -3192, 7755, -8572, -768, -8572, 8789, 7755, 223, 8401, 223, -3192, -768, 7755, 7755, -3192, 8789, -6859, 223, 8789, -8572, -768, 223, 223, 7755};
    vector<int> y2 = {-181, 596, 456, 439, 217, 773, 582, -587, 35, 243, -484, 138, 4525, 1865, 4525, -2776, 1535, -770, 1535, 1865, -3065, -3065, -2776, 1535, -8159, 1535, 1865, -2776, 4525, 6312, 4525, -3065, -8159, -2776, -2776, -3065, 1865, -770, 4525, 1865, 1535, -8159, 4525, 4525, -2776};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 773;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x1 = {2989, 6334, -3453, -1791, 6334, -7673, 6334, 6334, -1791, -3453, -1791, 2362, 5220, -1791, 2989, -7673, 2989, 6334, -7673, 2989, -7673, -1791, 2362, 6334};
    vector<int> y1 = {-4940, -4792, 5440, 4861, -4792, -2437, -4792, -4792, 4861, 5440, 4861, -9716, 7496, 4861, -4940, -2437, -4940, -4792, -2437, -4940, -2437, 4861, -9716, -4792};
    vector<int> x2 = {-2324, 5220, 2362, -7673, -3453, 2362, -2324, 2989, 2362, -2324, 2989, 5220, -2324, -3453, 5220, 5220, -3453, 2362, -2324, 2362, -3453, 5220, -2324, -1791};
    vector<int> y2 = {-5758, 7496, -9716, -2437, 5440, -9716, -5758, -4940, -9716, -5758, -4940, 7496, -5758, 5440, 7496, 7496, 5440, -9716, -5758, -9716, 5440, 7496, -5758, 4861};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x1 = {-887, -6777, 6129, -6777, -2085, -2085, 3225, 3225, 6129, 6252, 6129, -6777, 3225, -6005, 6252, -5990, -4623, -6005, -2085, 6129, 3746, -6777};
    vector<int> y1 = {260, 7918, 5949, 7918, 1682, 1682, -3387, -3387, 5949, 863, 5949, 7918, -3387, 2495, 863, -9607, -5468, 2495, 1682, 5949, -3051, 7918};
    vector<int> x2 = {-880, 6252, -6005, -2085, -5990, 3948, 3948, -4623, -4623, -6005, 3948, 3746, 3746, -4623, -5990, -6005, 3948, 3948, -4623, 3746, -4623, -4623};
    vector<int> y2 = {270, 863, 2495, 1682, -9607, 7239, 7239, -5468, -5468, 2495, 7239, -3051, -3051, -5468, -9607, 2495, 7239, 7239, -5468, -3051, -5468, -5468};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x1 = {977, -838, 456, -748, 845, -771, 701, 443, 944, 7918};
    vector<int> y1 = {-164, -227, -436, -755, 395, 843, 608, 727, -472, -9523};
    vector<int> x2 = {1149, -709, 542, -705, 861, -759, 709, 447, 922, 8707};
    vector<int> y2 = {-156, -221, -432, -753, 547, 957, 684, 765, -433, -5844};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x1 = {-7761, -9902, -5686, 4689};
    vector<int> y1 = {-2712, 9350, -697, 3299};
    vector<int> x2 = {-8929, 4689, 6796, 6796};
    vector<int> y2 = {-7411, 3299, -4368, -4368};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x1 = {-985, -999, -660, 585, 3, -639, 9968, -9430, 8763, 8542, 9968, 2995, 2010, 8763, -5488, 8542, -5488, 8763, -4810, 7881, 8542, 2010, -9430, 2010, 7881, -4810, 8542};
    vector<int> y1 = {-864, 752, 729, 94, 819, -928, -1183, 9846, 4700, -8341, -1183, -292, 465, 4700, -141, -8341, -141, 4700, 7219, -5, -8341, 465, 9846, 465, -5, 7219, -8341};
    vector<int> x2 = {-935, -974, -704, 552, -19, -650, -5743, 6870, -5743, 2995, -9430, 6870, 9968, 2010, -5743, 2010, -9430, 7881, 2995, -5488, -5743, -9430, 2995, 6870, 2995, -9430, -5488};
    vector<int> y2 = {-852, 758, 805, 151, 857, -909, -5691, 8233, -5691, -292, 9846, 8233, -1183, 465, -5691, 465, 9846, -5, -292, -141, -5691, 9846, -292, 8233, -292, 9846, -141};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 283;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x1 = {-188, 539, -318, -901, -371, -411, -45, -376, -904, -225, -600, 673, 943, -347, -742, -8840, -5657, 8025, -742, -742, -8840, -5657, -7921, -5657, -742, -742, -8840, -8840, -5657, -8840, -7921, -8840, -781, -5657, -2685, -2685, 8025, -781, -2685, 8025, -2685, -2685, -742, -742, 3717, -8840};
    vector<int> y1 = {190, 580, -747, 113, 1, 928, -493, -693, 560, -723, 805, 7, 725, -263, 8730, -955, -9873, 5940, 8730, 8730, -955, -9873, -3277, -9873, 8730, 8730, -955, -955, -9873, -955, -3277, -955, 7812, -9873, -550, -550, 5940, 7812, -550, 5940, -550, -550, 8730, 8730, -7629, -955};
    vector<int> x2 = {-108, 599, -278, -881, -359, -405, 19, -328, -872, -209, -704, 595, 891, -373, 8025, 3717, -7921, -7921, -7921, -5657, 8025, -2780, -781, 3717, -2780, 3717, -2780, -742, -781, -781, 3717, -5657, 3717, 8025, -5657, -2780, 3717, -2780, 8025, -781, -781, -7921, -781, -2685, -2780, -2685};
    vector<int> y2 = {66, 487, -809, 82, -69, 893, -689, -840, 462, -772, 745, -38, 695, -278, 5940, -7629, -3277, -3277, -3277, -9873, 5940, 3872, 7812, -7629, 3872, -7629, 3872, 8730, 7812, 7812, -7629, -9873, -7629, 5940, -9873, 3872, -7629, 3872, 5940, 7812, 7812, -3277, 7812, -550, 3872, -550};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 828;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x1 = {-934, 324, 12, -694, 367, -425, 148, -9798, -9618, -5625, -5625, -9618, -9618};
    vector<int> y1 = {-641, 960, 723, 711, 38, -11, -936, -9458, -2575, 5797, 5797, -2575, -2575};
    vector<int> x2 = {-1064, 220, -66, -746, 341, -449, 136, 8982, -5625, -9798, 8982, -9798, 8982};
    vector<int> y2 = {-626, 972, 732, 717, 41, -39, -950, 5578, 5797, -9458, 5578, -9458, 5578};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x1 = {-656, -828, -633, 95, 237, 790, -83, 219, -1461};
    vector<int> y1 = {210, -879, 485, 519, 803, 165, -925, 10, 2595};
    vector<int> x2 = {-426, -644, -495, 187, 283, 922, 5, 263, -3163};
    vector<int> y2 = {425, -707, 614, 605, 846, 48, -1003, -29, 3235};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x1 = {-4234, -4234, -5463, 5156, -1573, -2981, -4234, -2437, -2437, 5156, -2981, -4234, 5156, -4234, -4234, -4234, 5156, 5493, 5493, 5493, -4234, 5493, -5067, 5493, -8611, -2981, -1573, -2437};
    vector<int> y1 = {8997, 8997, -3910, -6574, 1389, -4829, 8997, -4044, -4044, -6574, -4829, 8997, -6574, 8997, 8997, 8997, -6574, -2229, -2229, -2229, 8997, -2229, 8146, -2229, -9582, -4829, 1389, -4044};
    vector<int> x2 = {-8611, 9071, -5067, 5493, -8611, -5463, -2981, 9071, -5067, -1573, -5067, 5493, 9071, -1573, -5463, -2437, -8611, 9071, -5463, -8611, 5156, -5067, 9071, -2981, 9071, -8611, -2981, -5463};
    vector<int> y2 = {-9582, -7850, 8146, -2229, -9582, -3910, -4829, -7850, 8146, 1389, 8146, -2229, -7850, 1389, -3910, -4044, -9582, -7850, -3910, -9582, -6574, 8146, -7850, -4829, -7850, -9582, -4829, -3910};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x1 = {378, -460, -63, 884, 8016};
    vector<int> y1 = {-438, 779, -389, -919, -2530};
    vector<int> x2 = {386, -454, -59, 886, -7924};
    vector<int> y2 = {-242, 926, -291, -870, 9615};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x1 = {3311, -9783, 3311};
    vector<int> y1 = {4379, -7177, 4379};
    vector<int> x2 = {-406, -406, -9783};
    vector<int> y2 = {6731, 6731, -7177};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x1 = {-969, -626, 771, -732, -620, -588, -929};
    vector<int> y1 = {926, -520, -942, -840, 18, 971, 859};
    vector<int> x2 = {-1053, -668, 768, -768, -647, -606, -938};
    vector<int> y2 = {970, -498, -968, -1032, -126, 875, 811};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x1 = {-180, 388, 305, 8886, -9848, -5499, 8886, 8886, -4297, -2433, -2472, -5499, -9848, 8886, -2433, -5499, -5499, -4297, -5499, -5778, -5499, -9848, -2433, -9848, -5778, -2433, -5499, -2433, -2433, -4297, 8886};
    vector<int> y1 = {311, -66, -328, 7003, -901, -3259, 7003, 7003, -3620, 8706, 4617, -3259, -901, 7003, 8706, -3259, -3259, -3620, -3259, -9831, -3259, -901, 8706, -901, -9831, 8706, -3259, 8706, 8706, -3620, 7003};
    vector<int> x2 = {-243, 346, 284, -4297, 6189, -2433, -9848, -2472, -2472, -5778, 6189, -9848, -4297, 6189, -2472, -4297, 6189, -5778, -5778, -2472, -2472, -2472, -9848, -5778, 6189, 6189, 8886, -4297, 8886, 6189, -5778};
    vector<int> y2 = {263, -98, -344, -3620, 267, 8706, -901, 4617, 4617, -9831, 267, -901, -3620, 267, 4617, -3620, 267, -9831, -9831, 4617, 4617, 4617, -901, -9831, 267, 267, 7003, -3620, 7003, 267, -9831};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x1 = {219, -235, 799, -130, 337, 810, -137, -2128};
    vector<int> y1 = {405, 258, 858, 420, 768, 233, 189, -218};
    vector<int> x2 = {186, -257, 788, -70, 382, 840, -122, 287};
    vector<int> y2 = {507, 326, 892, 364, 726, 205, 175, -6356};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x1 = {-380, 636, 490, -829, -286, -4938, -6805, -7898, -4938, -6805, -4938, -7898, -4938, -655, -6805, -4938, -5295, -655, -655, -7898, -6805, -655, -7898, -655, -8729, -655, -421, -8729, -7898, -421, -655, -4938, -4938, -8729, 5351, 5351, -7898, 5351};
    vector<int> y1 = {-190, 366, -283, -258, 685, -4975, -8077, 9769, -4975, -8077, -4975, 9769, -4975, -9547, -8077, -4975, -8276, -9547, -9547, 9769, -8077, -9547, 9769, -9547, 7587, -9547, 6627, 7587, 9769, 6627, -9547, -4975, -4975, 7587, -727, -727, 9769, -727};
    vector<int> x2 = {-430, 596, 460, -849, -296, -6757, -5295, -6805, -655, -6757, -7898, -421, -6805, -6805, -421, -8729, -6757, -421, -6757, -5295, -8729, -7898, 5351, -5295, -5295, -8729, -5295, -6757, -8729, -6757, 5351, 5351, -421, -421, -8729, -421, -6757, -5295};
    vector<int> y2 = {-205, 354, -292, -264, 682, -6132, -8276, -8077, -9547, -6132, 9769, 6627, -8077, -8077, 6627, 7587, -6132, 6627, -6132, -8276, 7587, 9769, -727, -8276, -8276, 7587, -8276, -6132, 7587, -6132, -727, -727, 6627, 6627, 7587, 6627, -6132, -8276};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 502;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x1 = {5257, -3863, -3863, 6496, -3863, 5257, 5257, -8103, -3185, -8103, 6496, 6496, 6496, 5257, 5257, -3185, 6496, -3863, 6496, -3185, 6136};
    vector<int> y1 = {4263, -2668, -2668, -286, -2668, 4263, 4263, -3232, -9655, -3232, -286, -286, -286, 4263, 4263, -9655, -286, -2668, -286, -9655, -7886};
    vector<int> x2 = {6136, -8103, -789, -3185, 6136, -789, -8103, -789, -789, 6136, -789, 6136, -8103, -3863, -3185, -8103, 5257, -3185, -3863, 6136, -789};
    vector<int> y2 = {-7886, -3232, 9254, -9655, -7886, 9254, -3232, 9254, 9254, -7886, 9254, -7886, -3232, -2668, -9655, -3232, 4263, -9655, -2668, -7886, 9254};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x1 = {-79, -572, 924, -280, -429, -644, -717, -687, 906, 612, -6609, -4449, -383, 612, 283, 283, -4449, -6609, -6609, 283, -6609, -6609, 612, 283, -3832, -4449, -2833, 612, -4449, 612, -2833, -3832, 612, 612, -3832};
    vector<int> y1 = {530, 664, 263, -104, -648, -161, -225, 618, -148, -4618, -197, -3115, 95, -4618, 1911, 1911, -3115, -197, -197, 1911, -197, -197, -4618, 1911, 6496, -3115, 8184, -4618, -3115, -4618, 8184, 6496, -4618, -4618, 6496};
    vector<int> x2 = {-43, -554, 992, -246, -513, -707, -759, -708, 883, 283, 283, 283, 4134, -383, -2833, 4134, 4134, -2833, -383, -3832, 4134, -3832, -6609, -383, -383, -383, 4134, -4449, -3832, 4134, -383, -2833, -2833, -3832, 4134};
    vector<int> y2 = {494, 646, 165, -153, -588, -116, -195, 633, -110, 1911, 1911, 1911, 5469, 95, 8184, 5469, 5469, 8184, 95, 6496, 5469, 6496, -197, 95, 95, 95, 5469, -3115, 6496, 5469, 95, 8184, 8184, 6496, 5469};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 452;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x1 = {667, -503, 819, -7470, -7690, -1242, -1242, 1107, -7690, 1107, 1107, -1242, -7690, -7470, -1242, -1242, -7690, -9234};
    vector<int> y1 = {109, -565, -526, -4488, -8705, -9563, -9563, 8267, -8705, 8267, 8267, -9563, -8705, -4488, -9563, -9563, -8705, 8759};
    vector<int> x2 = {683, -495, 783, 3558, -9234, 1107, 3558, 3558, -7470, -7470, -9234, -9234, 3558, -9234, -7470, -7690, 1107, 3558};
    vector<int> y2 = {19, -610, -546, 5696, 8759, 8267, 5696, 5696, -4488, -4488, 8759, 8759, 5696, 8759, -4488, -8705, 8267, 5696};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x1 = {-3759, 1441, 2550, 1441, -6976, 9079, 1441, 1441, 1441, -6976, -6976, 9079, -4539, 2550, -6976, -4539, -6976, -4539, 9079, -4539, -6976};
    vector<int> y1 = {-683, 9792, -7077, 9792, -4216, -3735, 9792, 9792, 9792, -4216, -4216, -3735, -6791, -7077, -4216, -6791, -4216, -6791, -3735, -6791, -4216};
    vector<int> x2 = {-7783, -4539, -7783, -7783, 2550, -7783, 2550, 9079, -3759, -4539, -7783, 2550, 2550, -3759, 9079, -3759, 1441, -7783, -3759, 9079, -3759};
    vector<int> y2 = {8906, -6791, 8906, 8906, -7077, 8906, -7077, -3735, -683, -6791, 8906, -7077, -7077, -683, -3735, -683, 9792, 8906, -683, -3735, -683};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x1 = {-529, -810, 234, 567, 154, -266, 263, 118, -915, 343, -758, 101, 638, 247, 951, 464, -218, -528, 977, -4967};
    vector<int> y1 = {-819, 96, 493, 198, 35, 44, 212, -18, -418, -424, 35, 47, -193, 606, 629, 979, -965, -58, -780, -6261};
    vector<int> x2 = {-539, -818, 228, 563, 152, -31, 451, 259, -821, 390, -714, 134, 660, 258, 786, 332, -317, -594, 944, -6477};
    vector<int> y2 = {-679, 208, 577, 254, 63, -201, 16, -165, -516, -473, -45, -13, -233, 586, 649, 995, -953, -50, -776, 57};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x1 = {401, -380, -842, -900, 901, -679, 881, -517, 829, -804, 833, 839, -337, 176, 7859, 7859, -2232};
    vector<int> y1 = {-674, -359, -241, 27, 300, 753, -454, 937, 791, 221, -493, 499, -813, 812, -8646, -8646, 5701};
    vector<int> x2 = {517, -293, -784, -871, 1086, -531, 992, -443, 866, -1019, 661, 710, -423, 133, -2232, 2742, 2742};
    vector<int> y2 = {-818, -467, -313, -9, 340, 785, -430, 953, 799, 226, -489, 502, -811, 813, 5701, -7532, -7532};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x1 = {-621, 850, 904, -30, -291, 420, 422, 2, 388, -991, -803, 9932, 2371, 6762, 6762, -857, 6762, -200, 9932, 6762, -3312, 9932, -3312, -2958, -200, -857, 6762, 2371, 2371, 6762, 2371, 1442, 6762, -857, -857, -857, -200, 706, -857, -857};
    vector<int> y1 = {197, -908, 412, 2, 869, 847, 192, -468, -118, -253, 422, -1064, -3484, -3657, -3657, -6251, -3657, 9028, -1064, -3657, -68, -1064, -68, -4164, 9028, -6251, -3657, -3484, -3484, -3657, -3484, -8972, -3657, -6251, -6251, -6251, 9028, -6457, -6251, -6251};
    vector<int> x2 = {-705, 808, 789, -122, -360, 374, 399, -4, 268, -1071, -843, 1442, -200, -190, -857, -3312, 706, -3312, -2958, 1266, 1266, -190, 1442, -190, -2958, 1266, 2371, 706, 1266, 9932, -2958, 1266, -3312, -190, 2371, 706, 1266, -190, 1442, -200};
    vector<int> y2 = {169, -922, 217, -154, 752, 769, 153, -460, -52, -209, 444, -8972, 9028, -8436, -6251, -68, -6457, -68, -4164, -3030, -3030, -8436, -8972, -8436, -4164, -3030, -3484, -6457, -3030, -1064, -4164, -3030, -68, -8436, -3484, -6457, -3030, -8436, -8972, 9028};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 641;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x1 = {-129, 8539, 3532, -3773, 9545, 1148, 9545, -3842, 3319, 9545, 1148, 9545, 8539, 3319, 8539, -3773, 9545, 9545, -3773, 3532, -592, -3773, -3773, -3773, 1148, 3319, 1148, 3319, -3773, 9545, 8539, 3532, -3842, 9545, -3842, 1148, 6515, -3773, 6515, -3773, 8539, -3842, 1148, 8539, 1148, 3319};
    vector<int> y1 = {258, -528, -8074, -9022, -9618, 9951, -9618, -7398, 8524, -9618, 9951, -9618, -528, 8524, -528, -9022, -9618, -9618, -9022, -8074, -5279, -9022, -9022, -9022, 9951, 8524, 9951, 8524, -9022, -9618, -528, -8074, -7398, -9618, -7398, 9951, -4584, -9022, -4584, -9022, -528, -7398, 9951, -528, 9951, 8524};
    vector<int> x2 = {-96, 6515, 6515, 6515, 3532, -592, 8539, 3532, -2433, -592, -2433, -2433, 3532, -592, -2433, 8539, 6515, -3842, -2433, -592, -2433, 1148, 3532, -3842, 3532, 3532, -3842, 6515, 9545, 3319, -592, -2433, -2433, 1148, -592, 3319, -2433, 3319, -592, -592, -3842, 6515, 6515, 3319, 8539, -3842};
    vector<int> y2 = {285, -4584, -4584, -4584, -8074, -5279, -528, -8074, 1234, -5279, 1234, 1234, -8074, -5279, 1234, -528, -4584, -7398, 1234, -5279, 1234, 9951, -8074, -7398, -8074, -8074, -7398, -4584, -9618, 8524, -5279, 1234, 1234, 9951, -5279, 8524, 1234, 8524, -5279, -5279, -7398, -4584, -4584, 8524, -528, -7398};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 710;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x1 = {-632, 191, 330, -640, -813, -998, 437, -641, 279, 991, -518, -715, 416, -3, -409, 5759};
    vector<int> y1 = {-912, -398, -66, -920, 551, 72, 764, 633, -762, -704, -503, -195, 724, -138, 2, -5725};
    vector<int> x2 = {-442, 343, 444, -564, -775, -1153, 313, -734, 217, 960, -288, -531, 554, 89, -363, 8140};
    vector<int> y2 = {-807, -314, -3, -878, 572, -73, 648, 546, -820, -733, -648, -311, 637, -196, -27, -4088};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x1 = {-466, -295, 275, -762, 34, 577, -142, 501, -453, -802, 969, -903, -574, 5070, 6522, 5070, 6522, 8176, 6522};
    vector<int> y1 = {577, -897, -631, 590, -310, -681, -366, -213, 746, -508, 852, 728, -492, 419, 9313, 419, 9313, 8496, 9313};
    vector<int> x2 = {-346, -199, 347, -714, 58, 812, 46, 642, -359, -755, 867, -971, -608, 8176, -2936, -2936, 8176, -2936, 5070};
    vector<int> y2 = {652, -837, -586, 620, -295, -501, -222, -105, 818, -472, 768, 672, -520, 8496, 7170, 7170, 8496, 7170, 419};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x1 = {969, 71, 111, 171, -929, -551, 974, 923, 315, -595, 775, 7273, -9670, -917, 8040, 5451, 7273, -9670, 5451, -917, 5451, -9670, 4531, -917, -9670, -917, 5451, -9670, -917, 4531, -917, 7273, 434, -9670, 7273, 5451, -9670, 434, 434};
    vector<int> y1 = {-405, 706, 791, 541, 97, -162, -531, 385, -472, -696, 102, 1891, 2386, 1685, -4925, -178, 1891, 2386, -178, 1685, -178, 2386, -8200, 1685, 2386, 1685, -178, 2386, 1685, -8200, 1685, 1891, -8960, 2386, 1891, -178, 2386, -8960, -8960};
    vector<int> x2 = {891, 19, 85, -4, -1069, -656, 904, 888, 357, -567, 789, 8040, 7273, 434, 6255, 6255, 6255, 5451, 7273, 8040, 4531, 434, 6255, 5451, -917, 7273, 434, 4531, 4531, 8040, 6255, 434, 8040, 6255, 4531, 8040, 8040, 6255, 4531};
    vector<int> y2 = {-522, 628, 752, 306, -91, -303, -625, 338, -412, -656, 122, -4925, 1891, -8960, 2950, 2950, 2950, -178, 1891, -4925, -8200, -8960, 2950, -178, 1685, 1891, -8960, -8200, -8200, -4925, 2950, -8960, -4925, 2950, -8200, -4925, -4925, 2950, -8200};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 567;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x1 = {239, -289, -445, 955, 33, 242, 998, -2578, 4776, 4776, -2578, -2578, -515, -2508, -4807, -6962, 4776, -6962, 815, 815, -2508, -458, -515, 4776, -2508, 4776, -2578, -2508};
    vector<int> y1 = {-711, 135, 306, -461, 679, -161, 236, 508, 8756, 8756, 508, 508, -8110, -577, 2527, -7965, 8756, -7965, -7554, -7554, -577, -9845, -8110, 8756, -577, 8756, 508, -577};
    vector<int> x2 = {256, -260, -570, 855, -42, 192, 973, -4807, -458, 6134, 6134, -515, -7439, -7439, -6962, -7439, -2508, -515, -515, -458, -4807, 6134, 6134, 815, -515, -2578, -6962, -6962};
    vector<int> y2 = {-709, 85, 81, -641, 544, -251, 191, 2527, -9845, 1630, 1630, -8110, 379, 379, -7965, 379, -577, -8110, -8110, -9845, 2527, 1630, 1630, -7554, -8110, 508, -7965, -7965};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x1 = {442, -930, -90, -432, 652, -275, 803, -478, 91, -545, -987, 518, -7298, 2160, -7298, 3382, 3382, 2160, -1063, 3382, -7298, 2160, 3382, -7298, -1063, 5949, 3382, -1063, -7298, 3382, -1063, 855, 855};
    vector<int> y1 = {-918, 247, -325, -241, 70, 902, -113, -370, -955, -246, -372, 261, 2423, 605, 2423, -2319, -2319, 605, -9328, -2319, 2423, 605, -2319, 2423, -9328, 2938, -2319, -9328, 2423, -2319, -9328, 7888, 7888};
    vector<int> x2 = {554, -846, -34, -404, 712, -235, 823, -483, 255, -422, -905, 559, 4861, 855, 855, -1063, 855, 5949, 5949, 2160, 2160, 4861, 5949, -1063, 4861, 4861, 4861, 855, 5949, -7298, 2160, 5949, 4861};
    vector<int> y2 = {-790, 343, -261, -209, 145, 952, -88, -355, -891, -198, -340, 277, -441, 7888, 7888, -9328, 7888, 2938, 2938, 605, 605, -441, 2938, -9328, -441, -441, -441, 7888, 2938, 2423, 605, 2938, -441};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 411;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x1 = {-769, -936, -799, -733, 236, -850, 672, -862, -7684, 337, -862, 337, -862};
    vector<int> y1 = {156, 566, 843, -56, 49, -464, -717, 116, 6022, -1729, 116, -1729, 116};
    vector<int> x2 = {-711, -907, -739, -693, 256, -846, 674, 337, -9998, -7684, -9998, -9998, -7684};
    vector<int> y2 = {226, 601, 927, 0, 77, -536, -753, -1729, -3332, 6022, -3332, -3332, 6022};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x1 = {-354, -979, 519, -323, -487, 145, -664, 7942};
    vector<int> y1 = {519, 296, 939, -291, 283, -979, -387, 6971};
    vector<int> x2 = {-360, -749, 703, -185, -395, 191, -620, -2499};
    vector<int> y2 = {515, 471, 1079, -186, 353, -944, -430, 6124};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x1 = {-949, 434, 381, 319, 838, 959, 284, 521, -618, 857, -145, -259, 725, 634, 70, -577, -225, 673, 777, 383, 321, 228, -799, -185, -977, -569, -57, 790, -78, -213, -525, 248, -574, -323, 149, -491, -674, 357, -811, 266, 781, -42, 694, 587, -671, -515, -861, -84, -117, -179};
    vector<int> y1 = {756, 421, -576, 825, 700, -669, 752, -317, 835, 88, -458, -543, 50, 173, -628, -682, -392, -556, -807, -690, 649, -865, 832, 853, 185, 854, 488, -258, 104, 581, 238, -355, 174, 173, 534, 610, -972, 365, 702, -945, 684, -237, -58, 276, -972, -151, -169, 443, 826, -19};
    vector<int> x2 = {-949, 434, 381, 319, 838, 959, 284, 521, -618, 857, -145, -259, 725, 634, 70, -577, -225, 673, 777, 383, 321, 228, -799, -185, -977, -569, -57, 790, -78, -213, -525, 248, -574, -323, 149, -491, -674, 357, -811, 266, 781, -42, 694, 587, -671, -515, -861, -84, -117, -179};
    vector<int> y2 = {-1394, -1686, -2640, -1196, -1278, -2604, -1140, -2166, -971, -1675, -2178, -2220, -1584, -1418, -2176, -2187, -1854, -1975, -2183, -2023, -641, -2112, -372, -308, -933, -221, -544, -1247, -842, -322, -622, -1172, -600, -558, -154, -35, -1574, -194, 186, -1418, 254, -624, -402, -25, -1230, -366, -341, 314, 740, -62};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x1 = {-949, 434, 100, 319, 838, 959, 284, 521, -618, 857, -145, -259, 725, 634, 70, -577, -225, 673, 777, 383, 321, 228, -799, -185, -977, -569, -57, 790, -78, -213, -525, 248, -574, -323, 149, -491, -674, 357, -811, 266, 781, -42, 694, 587, -671, -515, -861, -84, -117, -179};
    vector<int> y1 = {756, 421, 101, 825, 700, -669, 752, -317, 835, 88, -458, -543, 50, 173, -628, -682, -392, -556, -807, -690, 649, -865, 832, 853, 185, 854, 488, -258, 104, 581, 238, -355, 174, 173, 534, 610, -972, 365, 702, -945, 684, -237, -58, 276, -972, -151, -169, 443, 826, -19};
    vector<int> x2 = {-949, 434, 10000, 319, 838, 959, 284, 521, -618, 857, -145, -259, 725, 634, 70, -577, -225, 673, 777, 383, 321, 228, -799, -185, -977, -569, -57, 790, -78, -213, -525, 248, -574, -323, 149, -491, -674, 357, -811, 266, 781, -42, 694, 587, -671, -515, -861, -84, -117, -179};
    vector<int> y2 = {-1394, -1686, 10000, -1196, -1278, -2604, -1140, -2166, -971, -1675, -2178, -2220, -1584, -1418, -2176, -2187, -1854, -1975, -2183, -2023, -641, -2112, -372, -308, -933, -221, -544, -1247, -842, -322, -622, -1172, -600, -558, -154, -35, -1574, -194, 186, -1418, 254, -624, -402, -25, -1230, -366, -341, 314, 740, -62};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x1 = {-949, 434, 100, 102, 838, 959, 284, 521, -618, 857, -145, -259, 725, 634, 70, -577, -225, 673, 777, 383, 321, 228, -799, -185, -977, -569, -57, 790, -78, -213, -525, 248, -574, -323, 149, -491, -674, 357, -811, 266, 781, -42, 694, 587, -671, -515, -861, -84, -117, -179};
    vector<int> y1 = {756, 421, 101, 103, 700, -669, 752, -317, 835, 88, -458, -543, 50, 173, -628, -682, -392, -556, -807, -690, 649, -865, 832, 853, 185, 854, 488, -258, 104, 581, 238, -355, 174, 173, 534, 610, -972, 365, 702, -945, 684, -237, -58, 276, -972, -151, -169, 443, 826, -19};
    vector<int> x2 = {-949, 434, 10000, 9999, 838, 959, 284, 521, -618, 857, -145, -259, 725, 634, 70, -577, -225, 673, 777, 383, 321, 228, -799, -185, -977, -569, -57, 790, -78, -213, -525, 248, -574, -323, 149, -491, -674, 357, -811, 266, 781, -42, 694, 587, -671, -515, -861, -84, -117, -179};
    vector<int> y2 = {-1394, -1686, 10000, -9998, -1278, -2604, -1140, -2166, -971, -1675, -2178, -2220, -1584, -1418, -2176, -2187, -1854, -1975, -2183, -2023, -641, -2112, -372, -308, -933, -221, -544, -1247, -842, -322, -622, -1172, -600, -558, -154, -35, -1574, -194, 186, -1418, 254, -624, -402, -25, -1230, -366, -341, 314, 740, -62};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x1 = {-10000, -10000, 10000};
    vector<int> y1 = {-10000, -10000, -10000};
    vector<int> x2 = {-10000, -9998, 9999};
    vector<int> y2 = {10000, -10000, 10000};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x1 = {-10000, 10000, -10000, 0};
    vector<int> y1 = {-10000, -10000, -10000, 0};
    vector<int> x2 = {-9999, 9999, -9999, 0};
    vector<int> y2 = {10000, 10000, -10000, 9998};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x1 = {-370, 636, 999, 243, -450, -465, 395, -569, 449, -472, -820, -144, -638, -379, 325, -40, -297, 693, -318, -938, 758, -1, 977, -644, -311, -329, 304, -89, 33, 717, -357, -334, 705, 14, -659, 946, 988, -179, -374, 938, -955, -233, -908, 713, 417, -141, -281, -284};
    vector<int> y1 = {-238, 935, -439, 919, -696, 716, 908, 320, -120, -814, 61, -19, -121, -671, -903, 71, 567, 504, 469, 638, -421, 942, 2, -404, -569, 248, 395, 247, 10, -92, -774, 256, -418, -223, 449, -331, 284, -911, 886, -593, 131, -48, 739, 264, -491, -154, -416, 411};
    vector<int> x2 = {-270, 734, 1095, 337, -358, -375, 483, -483, 533, -390, -740, -66, -562, -305, 397, 30, -229, 759, -254, -876, 818, 57, 1033, -590, -259, -279, 352, -43, 77, 759, -317, -296, 741, 48, -627, 976, 1016, -153, -350, 960, -935, -215, -892, 727, 429, -131, -273, -278};
    vector<int> y2 = {-238, 935, -439, 919, -696, 716, 908, 320, -120, -814, 61, -19, -121, -671, -903, 71, 567, 504, 469, 638, -421, 942, 2, -404, -569, 248, 395, 247, 10, -92, -774, 256, -418, -223, 449, -331, 284, -911, 886, -593, 131, -48, 739, 264, -491, -154, -416, 411};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x1 = {-370, 636, 999, 243, -450, -465, 395, -569, 449, -472, -820, -144, -638, -379, 325, -40, -297, 693, -318, -938, 758, -1, 977, -644, -311, -329, 304, -89, 33, 717, -357, -334, 705, 14, -659, 946, 988, -179, -374, 938, -955, -233, -908, 713, 417, -141, -281, -284, 510};
    vector<int> y1 = {-238, 935, -4390, 919, -696, 716, 908, 320, -120, -814, 61, -19, -121, -671, -903, 71, 567, 504, 469, 638, -421, 942, 2, -404, -569, 248, 395, 247, 10, -92, -774, 256, -418, -223, 449, -331, 284, -911, 886, -593, 131, -48, 739, 264, -491, -154, -416, 411, 686};
    vector<int> x2 = {-270, 734, 1095, 337, -358, -375, 483, -483, 533, -390, -740, -66, -562, -305, 397, 30, -229, 759, -254, -876, 818, 57, 1033, -590, -259, -279, 352, -43, 77, 759, -317, -296, 741, 48, -627, 976, 1016, -153, -350, 960, -935, -215, -892, 727, 429, -131, -273, -278, 514};
    vector<int> y2 = {-238, 935, -439, 919, -696, 716, 908, 320, -120, -814, 61, -19, -121, -671, -903, 71, 567, 504, 469, 638, -421, 942, 2, -404, -569, 248, 395, 247, 10, -92, -774, 256, -418, -223, 449, -331, 284, -911, 886, -593, 131, -48, 739, 264, -491, -154, -416, 411, 686};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x1 = {-370, 636, 999, 243, -450, -903, -153, 36, -287, -54, 823, 817, 525, -711, 188, -98, -542, 844, 2, -803, -240, -800, 199, -17, -945, -675, -909, -591};
    vector<int> y1 = {-238, 935, -439, 919, -696, 395, -569, 449, -472, -820, -144, -638, -379, 325, -40, -297, 693, -318, -938, 758, -1, 977, -644, -311, -329, 304, -89, 33};
    vector<int> x2 = {-370, 636, 999, 243, -450, -1501, -725, -510, -807, -548, 355, 375, 109, -1101, -176, -436, -854, 558, -258, -1037, -448, -982, 43, -147, -1049, -753, -961, -617};
    vector<int> y2 = {-183, 979, -406, 941, -685, 395, -569, 449, -472, -820, -144, -638, -379, 325, -40, -297, 693, -318, -938, 758, -1, 977, -644, -311, -329, 304, -89, 33};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x1 = {128, 577, 689, -749, 613, 166, -778, 247, 984, -57, -734, -24, -917, 592, 351, -389, -368, 220, 988, -429, 968, 244, -380, 436, -517, 714, 335, 759, -552, 621, -661, -533, -988, 331, -783, -136, -805, 84};
    vector<int> y1 = {-659, 946, 988, -179, -374, 938, -955, -233, -908, 713, 417, -141, -281, -284, 510, 130, 674, 880, -3, -289, 123, -870, 163, 296, -247, 261, -198, 727, -254, 298, 291, -279, 665, -355, 875, 369, 445, -415};
    vector<int> x2 = {128, 577, 689, -749, 613, 166, -778, 247, 984, -57, -734, -24, -917, 592, 351, -619, -588, 10, 788, -619, 788, 74, -540, 286, -657, 584, 215, 649, -652, 531, -741, -603, -1048, 281, -823, -166, -825, 74};
    vector<int> y2 = {-1079, 554, 624, -515, -682, 658, -1207, -457, -1104, 545, 277, -253, -365, -340, 482, 130, 674, 880, -3, -289, 123, -870, 163, 296, -247, 261, -198, 727, -254, 298, 291, -279, 665, -355, 875, 369, 445, -415};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x1 = {-209, -209, -179, -209, -209, -209, 337, -209, -539, -209, -209};
    vector<int> y1 = {77, 77, 100, 77, 77, 77, -153, 77, -400, 77, 77};
    vector<int> x2 = {-850, -636, -113, 1353, -296, -416, 1222, -219, -1406, 1667, 657};
    vector<int> y2 = {733, 376, 1008, -1445, 439, 694, 4, 1048, -737, -2005, -641};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x1 = {4, 91, -197, 182, 494, -22, -198, -404};
    vector<int> y1 = {-35, 1241, 1027, -237, 887, -59, 83, -45};
    vector<int> x2 = {30, 332, -388, 421, 1201, -223, -589, -1044};
    vector<int> y2 = {-45, 2941, 2406, -524, 2286, -119, 71, -44};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x1 = {-54, 200, 42, 10, -298, -150, 252};
    vector<int> y1 = {-149, 56, -14, -184, 366, -423, -250};
    vector<int> x2 = {-30, 527, 219, -162, -726, -937, 544};
    vector<int> y2 = {46, 12, -122, -194, 1051, -1771, -563};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x1 = {-113, -36, 82, -755, 137, 27, 826, 883, -353};
    vector<int> y1 = {1, 25, -129, 47, 47, 435, 694, 1243, -209};
    vector<int> x2 = {-118, -41, 90, -2045, 185, 111, 1860, 1930, -1040};
    vector<int> y2 = {34, 58, -170, 204, 204, 1046, 1537, 2763, -436};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x1 = {-31, -240, 26, -240, -240, 2, -46, -774, -240, -240, -240};
    vector<int> y1 = {-211, -224, -693, -224, -224, -131, -420, -934, -224, -224, -224};
    vector<int> x2 = {-13, 734, 350, 316, 1556, -560, -145, -2045, -56, 3382, 2128};
    vector<int> y2 = {-40, 482, -1790, -202, 1058, -341, -1165, -2435, 2606, 1150, 3046};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x1 = {96, 444, 9, 181, 213, 154, 146, -17};
    vector<int> y1 = {35, -234, 209, -95, -364, -394, 278, 196};
    vector<int> x2 = {122, 1293, 186, -225, 544, 249, 399, -163};
    vector<int> y2 = {3, -1132, 299, -779, -1098, -1248, 404, 120};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x1 = {179, 201, 201, 240, 201, 201, 201, -184, 25, 25, 201, 25, 25, 227, 201};
    vector<int> y1 = {246, -231, -231, -65, -231, -231, -231, -369, 9, 9, -231, 9, 9, 234, -231};
    vector<int> x2 = {218, -1981, -198, 206, 283, 479, 1229, -633, -429, 212, -1397, -623, -749, 243, 391};
    vector<int> y2 = {256, 373, 465, -395, -456, 767, -566, -1223, 1337, -246, 3105, -1241, -1307, 252, 763};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x1 = {20, 506, 16, 157, 16, 536, 16, 16, 935, 16, 16, 16};
    vector<int> y1 = {-175, 113, 81, 323, 81, 730, 81, 81, -1045, 81, 81, 81};
    vector<int> x2 = {22, 1233, 245, 365, 179, 1545, 443, 146, 2206, 178, -309, -375};
    vector<int> y2 = {-167, 5, -215, 842, -117, 2068, 850, -332, -2601, -613, 667, 562};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x1 = {-215, 62, 62, 62, 62, 62, 62, 62, 62, -53, 62, 62};
    vector<int> y1 = {143, 75, 75, 75, 242, 75, 75, 75, 75, -688, 75, 75};
    vector<int> x2 = {-244, -902, -114, 660, 425, 697, -664, -1224, 1424, -33, -191, -1168};
    vector<int> y2 = {185, -459, 3, 419, 808, -499, 613, 17, -2087, -2151, -90, -1703};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x1 = {296, 296, 296, 296, 296, -465, 36, 296, -337};
    vector<int> y1 = {-263, -263, -263, -263, -263, 652, -88, -263, 637};
    vector<int> x2 = {442, 543, -3044, -302, 1423, -1078, 590, 1353, -566};
    vector<int> y2 = {-573, -563, 2283, 1525, -616, 2124, 1360, -64, 2064};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x1 = {-132, -515, 193, -412, -26, 48, -195, 103};
    vector<int> y1 = {123, 678, -45, 925, -12, -316, -60, -269};
    vector<int> x2 = {-144, -1271, 333, -1008, 186, 88, -769, 194};
    vector<int> y2 = {120, 1465, -158, 2354, -574, -573, -171, -718};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x1 = {118, -240, 92, 92, 168, 92, 92, 168, 79, 168, 268, 168, 168, -442, 168, 168, 92, 92, 92, 168};
    vector<int> y1 = {-251, -208, -99, -99, 175, -99, -99, 175, -197, 175, 272, 175, 175, 109, 175, 175, -99, -99, -99, 175};
    vector<int> x2 = {98, -236, 453, -7, -2366, -2538, 1055, -242, -72, 567, 867, -3070, -1162, -1263, 833, 1565, 453, 1185, 1260, -1096};
    vector<int> y2 = {-274, -274, -729, 4, -1493, 1743, -361, -2223, -486, 218, 509, -175, -757, 20, 1097, 498, -273, -872, -1130, -3175};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x1 = {-76, 51, 108, -337, 108, 108, -201, 108, -114, -104, 108};
    vector<int> y1 = {-172, 221, 173, 727, 173, 173, -121, 173, -103, 554, 173};
    vector<int> x2 = {-414, 284, 367, -794, 1366, 505, -488, 121, -410, -207, 859};
    vector<int> y2 = {26, 1253, 569, 1844, 1700, 1871, -64, 1069, -397, 1797, 1997};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x1 = {350, -88, 177, -192, 98, 518, 379, 157, 393, 141, 198};
    vector<int> y1 = {-486, 29, -282, 368, 396, -555, 215, -742, -293, 589, -190};
    vector<int> x2 = {956, -154, 523, -670, 200, 1796, 1129, 463, 1171, 415, 70};
    vector<int> y2 = {-1663, 314, -665, 899, 983, -2008, 826, -2045, -698, 1948, 258};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x1 = {169, -124, 169, 169, 169, 169, 385, -54, -145, 169, 169};
    vector<int> y1 = {-51, -199, -51, -51, -51, -51, -531, -151, -178, -51, -51};
    vector<int> x2 = {-1209, -600, -637, -857, 315, -1911, 1436, -796, 100, -1641, -1285};
    vector<int> y2 = {-489, -372, -593, -1429, -247, -853, -1700, -353, -128, -1217, 847};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x1 = {200, 217, -137, -53, 217, 217, -18, 615, -11, 217, 217, 448, 217, 217, 217, 39, -53, 248, 217};
    vector<int> y1 = {-42, -22, 85, 231, -22, -22, 131, 147, 137, -22, -22, 356, -22, -22, -22, -99, 32, -478, -22};
    vector<int> x2 = {182, 560, -243, -404, 978, 460, 404, 1600, -255, 509, 1469, 1099, 344, 356, 1368, 395, -189, 499, 1580};
    vector<int> y2 = {-56, -104, -387, 403, 0, -302, 587, 151, -135, -101, -291, 778, 556, -269, -406, 55, -48, -1724, -686};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x1 = {-8, -267, 64, 638, 214, -164, 252, 265, -174, -452, 155, 268, 265, 265, -174, 265, 265, -174, -129, -174};
    vector<int> y1 = {237, -125, 15, 215, 51, -366, -33, -116, -151, -708, 262, 72, -116, -116, -151, -116, -116, -151, -149, -151};
    vector<int> x2 = {-35, -285, -376, 1766, -368, -396, 412, 1402, -1108, -1548, 367, -36, 1088, -1845, 212, 224, 1560, 704, -219, 814};
    vector<int> y2 = {198, -151, -1619, 760, -252, -529, 673, -19, -1466, -1897, -42, -289, 308, -1290, -123, -718, -1289, -81, -153, -789};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x1 = {218, 218, -129, 25, 218, 218, 218, -96, 218, -197, 106};
    vector<int> y1 = {-294, -294, 45, 91, -294, -294, -294, 779, -294, -431, -280};
    vector<int> x2 = {285, -870, -616, 442, 418, -1326, 305, -181, 495, -670, 978};
    vector<int> y2 = {-585, 2140, 408, -554, -28, -392, -234, 2413, -621, -793, -98};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x1 = {222, 222, -181, 119, 119, 222, 119, 291, 119, 222, 291, 291, 119, 222, 245};
    vector<int> y1 = {-6, -6, 194, 181, 181, -6, 181, -113, 181, -6, -113, -113, 181, -6, 163};
    vector<int> x2 = {400, 154, 9, 325, -1827, 323, 404, -2351, 915, 794, 1802, 153, -865, 779, 292};
    vector<int> y2 = {1710, -519, 178, -193, 401, 5, 572, 1713, 775, 573, -1042, 101, -2245, -302, -119};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x1 = {-8, 117, 16, -141, 16, 16, -776, -273, 16, 16};
    vector<int> y1 = {73, 52, 138, -99, 138, 138, 391, 76, 138, 138};
    vector<int> x2 = {838, 53, 921, 173, 420, 83, -1956, -940, -356, 251};
    vector<int> y2 = {1235, 118, 376, 375, 73, 1398, 832, 176, 449, 825};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x1 = {-41, 138, 494, 66, -545, 66, 66, 66, 141, 66, 66, -44, -39};
    vector<int> y1 = {-157, 562, -469, 121, 233, 121, 121, 121, 830, 121, 121, 171, -452};
    vector<int> x2 = {-80, 472, 1860, -86, -1257, -954, -1374, -2010, 481, 460, -2204, -1546, 261};
    vector<int> y2 = {-187, 1319, -1752, 221, 354, 327, -1965, -2769, 2123, -611, -243, 219, -1701};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x1 = {-34, 41, 41, 10, 41, -51, 41, 41, 41, 41, 41, 41};
    vector<int> y1 = {16, -57, -57, 127, -57, 21, -57, -57, -57, -57, -57, -57};
    vector<int> x2 = {-130, 195, -489, -150, -356, 211, -893, -2389, 1155, -356, -855, -1333};
    vector<int> y2 = {-70, 3389, 337, 350, -1334, -497, 439, 1411, -164, -577, 549, 2357};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x1 = {162, -63, -122, -308, -63, -63, -63, -63};
    vector<int> y1 = {60, 53, -364, -568, 53, 53, 53, 53};
    vector<int> x2 = {103, 203, -251, -809, -817, -966, 1279, -290};
    vector<int> y2 = {-176, 1128, -797, -1409, -2139, 13, -1723, -114};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x1 = {40, 204, 33, 139, 139, 139, 139, 139, 139, -50, -356, 139};
    vector<int> y1 = {23, -325, 515, 28, 28, 28, 28, 28, 28, 150, 302, 28};
    vector<int> x2 = {26, 190, 242, -2079, 277, 875, -1873, 122, 231, -1094, -835, -915};
    vector<int> y2 = {13, -335, 1684, -2120, -17, 905, 1142, 517, -538, 704, 567, 612};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x1 = {-116, -116, 110, -116, 231, 147, 245, -116, -116, -30, 290, -116, -377, -420, -73, 247, -116, -116, 239, 40};
    vector<int> y1 = {15, 15, -68, 15, 680, -4, 148, 15, 15, -406, 220, 15, -339, -473, -540, 86, 15, 15, 334, 111};
    vector<int> x2 = {-564, -414, 264, -574, 541, 431, 579, 680, -594, -156, 804, 2104, -1197, -1412, -371, 589, -586, -558, 565, -129};
    vector<int> y2 = {-1043, -164, -413, 4, 1563, -974, 91, -359, 1453, -1427, 451, 1193, -1226, -1896, -2097, -219, -103, -688, 525, 7};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x1 = {-272, -145, -74, 919, -74, -74, -82, -145, -74, -404, 217, -145};
    vector<int> y1 = {-193, -24, -260, 477, -260, -260, 78, -24, -260, -128, 175, -24};
    vector<int> x2 = {-311, -270, 2198, 2762, -242, -216, 46, 361, -1488, -1306, 160, 1875};
    vector<int> y2 = {-145, -355, 2330, 1393, 382, 212, 28, 538, 498, -771, -107, 418};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x1 = {322, 129, 304, -405, -182, -117, -182, 304, 322, 322, -447, 304, -182, -116, -182, -182};
    vector<int> y1 = {-252, -207, -58, -9, -170, -188, -170, -58, -252, -252, -247, -58, -170, 205, -170, -170};
    vector<int> x2 = {295, -229, -3106, -1027, -883, 111, 547, 650, -3196, -1552, -1195, -2466, -71, 724, -276, -301};
    vector<int> y2 = {39, 165, -602, 102, -1145, 1, -2, 575, 368, 762, -850, 244, -864, -321, 574, -53};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x1 = {84, 1140, -118, -82, 323, -253, 961, -12, 255};
    vector<int> y1 = {138, 297, 117, -1112, 619, 298, 843, -345, -358};
    vector<int> x2 = {466, 2563, -376, -323, 1008, -912, 2162, 67, 832};
    vector<int> y2 = {617, 722, 200, -2492, 1901, 831, 1959, -669, -1169};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x1 = {-6, -209, 347, 63, -209, -209, -97, -209, -208, -119};
    vector<int> y1 = {-156, 79, 488, 90, 79, 79, -63, 79, -579, -211};
    vector<int> x2 = {268, -155, 916, -456, -884, -752, -495, -440, -231, -785};
    vector<int> y2 = {-142, -2305, 1769, 192, 1026, 542, 753, 455, -2019, -275};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x1 = {43, 101, 101, 617, 101, 66, 101, 4, -949, 221, 114, 237};
    vector<int> y1 = {60, 62, 62, -440, 62, 80, 62, -120, 147, -432, 179, -121};
    vector<int> x2 = {15, 809, 309, 1366, 198, 548, 406, -382, -2252, 488, 100, 584};
    vector<int> y2 = {82, 1069, 269, -964, 1334, 1088, 205, 228, 412, -1964, 53, -98};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x1 = {-34, -1216, -34, -34, 712, -34, -34};
    vector<int> y1 = {-42, 669, -42, -42, -493, -42, -42};
    vector<int> x2 = {-59, -2985, -136, -15, 1689, 28, -1184};
    vector<int> y2 = {212, 1647, 5, 208, -1179, 1022, -39};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x1 = {326, -56, -281, -337, -47, 747, -281, -281, -281, -281, 115, -281, 666, -299, -281, -281};
    vector<int> y1 = {312, 195, -10, -550, -86, -354, -10, -10, -10, -10, -57, -10, -22, 280, -10, -10};
    vector<int> x2 = {402, -18, 45, -365, 1637, 2287, 1455, 1221, -333, -277, 233, -219, 2005, -241, 2213, -225};
    vector<int> y2 = {382, 230, -970, -1715, 368, -1385, 628, -268, -179, 1020, 291, 1722, 200, 440, 56, -365};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
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
    vector<int> x1 = {-28, -153, 302, -90, -5, 464, -179, -85};
    vector<int> y1 = {18, 263, -625, 174, -274, 371, -399, -33};
    vector<int> x2 = {-73, -45, 856, -492, 139, 1261, -413, -191};
    vector<int> y2 = {-411, -259, -1534, 824, -435, 956, -1096, -117};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x1 = {47, -319, -319, -349, -246, -319, -319, -532, -319, -319, -319, -45, -319, -319};
    vector<int> y1 = {-91, -298, -298, 161, -41, -298, -298, 157, -298, -298, -298, -27, -298, -298};
    vector<int> x2 = {1461, -710, 211, -853, -261, -141, 1639, -1753, -2122, 95, -1237, -189, 263, -726};
    vector<int> y2 = {1171, -288, 306, 544, 364, 1580, 2446, 204, -1569, 696, -909, 276, 1020, -699};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x1 = {39, 476, -242, -242, 17, -306, 653, -538, -242, -242, -242, -351, -129, -242};
    vector<int> y1 = {-233, 2, -114, -114, 148, -239, -171, 679, -114, -114, -114, -209, -412, -114};
    vector<int> x2 = {44, 1318, -216, -256, -501, -1028, 2323, -1147, 156, -232, -362, -1133, -23, 946};
    vector<int> y2 = {-263, 203, 1036, 350, -376, -520, -742, 1721, 684, 206, -571, -450, -1465, -52};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x1 = {-31, 257, -97, 868, -170, 1151, 207, -286, -97, -452, -97, -97, 209};
    vector<int> y1 = {-249, -182, 77, -435, 145, 424, -56, -215, 77, -256, 77, 77, 206};
    vector<int> x2 = {-81, 880, -996, 2117, -940, 2966, -113, -1288, 356, -1786, -778, -210, 248};
    vector<int> y2 = {-280, -94, 652, -1257, 554, 1320, 84, -526, 1377, -649, 279, -341, -54};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x1 = {-133, -10, -19, -69, -19, -19, -224, -19, 288, -19, -68, 430};
    vector<int> y1 = {-39, -263, -183, -178, -183, -183, -200, -183, 343, -183, -108, 281};
    vector<int> x2 = {0, -28, -311, 48, -151, -521, -773, 362, 726, -502, 94, 1294};
    vector<int> y2 = {-207, -103, 771, -427, 355, -1508, -520, 31, 1332, -772, -20, 1084};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x1 = {146, 146, 146, 419, 146, 146, 146, -550, -129};
    vector<int> y1 = {-13, -13, -13, 253, -13, -13, -13, -178, 269};
    vector<int> x2 = {1186, 1830, 1727, 1062, 1353, 155, 123, -1448, -26};
    vector<int> y2 = {400, 830, 79, 813, 897, -371, -306, -169, 1020};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x1 = {-95, 21, 21, 21, 992, 23, 21, 122, 21, 21, 21, 21, 473};
    vector<int> y1 = {-55, 65, 65, 65, 763, -46, 65, 496, 65, 65, 65, 65, -395};
    vector<int> x2 = {-114, 210, -317, 680, 2126, 76, 10, 228, 556, -454, -41, 211, 1189};
    vector<int> y2 = {-73, 192, 888, 1337, 1658, -82, 28, 1349, 946, 442, -2305, 1142, -964};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x1 = {-106, -82, -82, 11, -82, -82, -106, -106, 299, -106, -384, -82, -163, -82};
    vector<int> y1 = {-45, 21, 21, 150, 21, 21, -45, -45, 472, -45, -411, 21, -110, 21};
    vector<int> x2 = {-1573, -655, -969, -430, -1429, -110, 1452, 225, 632, -1618, -1183, 1236, 136, -1474};
    vector<int> y2 = {554, 962, 444, 937, 950, -56, -575, 298, 1271, -22, -990, -1169, 7, 374};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x1 = {-65, 25, 110, 481, 25, 110, 110, 110, 19, 25, 110, 25, 110, 110};
    vector<int> y1 = {32, -63, 34, -41, -63, 34, 34, 34, -60, -63, 34, -63, 34, 34};
    vector<int> x2 = {-81, -185, -1044, 1377, -35, 12, 1251, -988, 180, -753, -520, 57, -60, -3204};
    vector<int> y2 = {50, 355, 362, 4, 299, -308, 934, -484, -33, 2339, 176, 137, -160, 1080};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x1 = {-235, -361, -126, -126, -165, -137, -126, -126};
    vector<int> y1 = {198, 671, -107, -107, -562, -263, -107, -107};
    vector<int> x2 = {-437, -636, -556, 403, -723, -115, 756, -162};
    vector<int> y2 = {-296, 2067, 831, -528, -1767, 49, -427, 538};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x1 = {-33, -93, -307, -93, -93, -93, -93, -93, -86, -93, -9, -93, 383};
    vector<int> y1 = {92, -85, 137, -85, -85, -85, -85, -85, -193, -85, -115, -85, -309};
    vector<int> x2 = {7, -192, -736, -648, -1224, -1170, -501, 89, -353, 3143, -384, -846, 1256};
    vector<int> y2 = {92, -233, 370, -213, -17, -452, -740, 1005, -419, 2613, -317, -152, -1109};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x1 = {-61, -61, 86, 86, 86, -61, -61, -61, 86, 86, -135, -61, 86};
    vector<int> y1 = {-175, -175, 82, 82, 82, -175, -175, -175, 82, 82, 44, -175, 82};
    vector<int> x2 = {2085, -27, -265, 64, 623, 1, -1141, 1527, 1394, 546, -983, 195, -120};
    vector<int> y2 = {1197, 949, 668, 389, -576, 2163, 763, 647, -181, 649, 874, 747, 699};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x1 = {146, 146, 146, 146, -333, -14, -250, 360, -60, -156, 146, -561, 146, 146};
    vector<int> y1 = {-65, -65, -65, -65, -161, -112, 429, 192, 201, 255, -65, 186, -65, -65};
    vector<int> x2 = {856, 180, -2462, -1818, -1283, -838, -456, 647, -1432, -575, -436, -1378, -828, 1072};
    vector<int> y2 = {1801, 166, 937, 869, -698, 530, 1444, 30, -393, 966, -476, 438, 433, 1507};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x1 = {231, 327, 119, 31, 148, 327, -323, 327, 327, 119, 772, 346, -323, 119, -208, -323, 327, 31, -323, 327, 31, 31, 31, 119, -323, -323, 31, 31, 119};
    vector<int> y1 = {0, 3, -159, 124, -737, 3, -155, 3, 3, -159, -673, -861, -155, -159, 93, -155, 3, 124, -155, 3, 124, 124, 124, -159, -155, -155, 124, 124, -159};
    vector<int> x2 = {-115, 15, 546, 518, 662, -1775, 1475, 598, -1181, -390, 2222, 1157, -167, 445, -438, 652, -612, 623, 340, 97, -953, -1323, 885, 1060, -2002, 447, 207, -586, 1367};
    vector<int> y2 = {1020, -240, -30, -279, -2342, -1227, -437, 434, -1599, -126, -2182, -2652, 2651, 1815, -403, 82, 597, -118, -161, -1035, 690, 1378, 400, -1635, -198, 2773, -442, 918, -1574};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x1 = {-74, 305, 305, 305, 229, 305, -74, 305, -24, 305, -190, 305, -74, 32, -74};
    vector<int> y1 = {-103, 176, 176, 176, 494, 176, -103, 176, -200, 176, 107, 176, -103, -303, -103};
    vector<int> x2 = {-165, 27, -2939, -453, 140, -2391, -1072, -1717, -42, 255, 84, -1657, -1161, 98, -381};
    vector<int> y2 = {-226, 588, -710, -382, 1242, 234, -1146, -1560, -5, -366, 579, -2210, -398, -87, 533};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x1 = {-163, -67, 153, -763, 153, 153, 153, 153, 152, 153, 299, -751, 201};
    vector<int> y1 = {-86, 321, 124, -570, 124, 124, 124, 124, 84, 124, 854, -184, 91};
    vector<int> x2 = {-138, -85, 507, -2294, 930, 699, 1008, -1365, 164, -59, 897, -2252, 835};
    vector<int> y2 = {-84, 760, 615, -1853, -76, -1, 386, -780, 470, -35, 2035, -502, 394};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x1 = {30, 123, -2, 82, -2, -2, -100, -2, 200, -2, -194, 24};
    vector<int> y1 = {-114, -34, -232, 124, -232, -232, 2, -232, -437, -232, 69, -333};
    vector<int> x2 = {104, 586, 542, 668, -428, 1724, -104, -352, 1022, 416, -58, 142};
    vector<int> y2 = {-202, 6, -267, 269, 480, 2110, 1308, -2075, -1414, -799, 209, -894};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x1 = {37, 37, 83, 37, -69, 37, 37, 37, 37, -453, -200, 37};
    vector<int> y1 = {71, 71, 124, 71, -64, 71, 71, 71, 71, -839, 353, 71};
    vector<int> x2 = {1441, 375, 273, 0, -441, -2123, -2037, 120, 1353, -1056, -511, -57};
    vector<int> y2 = {949, -569, 158, -249, -246, -1475, 575, 365, -143, -1819, 1214, 316};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x1 = {67, -207, -207, 71, -207, 283, -207, -207, -68, -207, -207, 0};
    vector<int> y1 = {-235, 27, 27, -90, 27, -536, 27, 27, 34, 27, 27, 52};
    vector<int> x2 = {93, -586, -1288, -4, 481, 782, 2575, -1766, -346, -819, 755, -506};
    vector<int> y2 = {-247, 150, 679, -387, -127, -1131, -1289, 538, 20, 814, -1035, 1556};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x1 = {-216, -140, -175, -175, 638, -101, -175, -98, -137, -18};
    vector<int> y1 = {71, -260, -18, -18, 33, -76, -18, 107, 192, 34};
    vector<int> x2 = {-252, -151, 102, -374, 1807, 1001, -31, 338, -518, 268};
    vector<int> y2 = {88, -305, -252, -604, 157, -204, 191, -237, 634, -218};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x1 = {-2, -2, -2, -2, -2, -321, -2, 154, -2, -16, -2};
    vector<int> y1 = {-149, -149, -149, -149, -149, 894, -149, 227, -149, -197, -149};
    vector<int> x2 = {128, 722, 432, 444, -714, -702, -984, 717, -1480, 44, 171};
    vector<int> y2 = {2365, 2589, 1561, -43, 1873, 2258, -1480, 1252, 3099, -137, -64};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x1 = {-103, -445, -150, 98, -150, 388, -150, -41, -150, 85, -109, 28, -283, 80, -223, 808};
    vector<int> y1 = {-148, -138, -104, 274, -104, -179, -104, -36, -104, 682, -131, -92, -155, 156, -505, -574};
    vector<int> x2 = {-101, -1518, 205, 547, 150, 861, 1056, -1127, -883, 72, 237, -239, -1152, -173, -852, 2121};
    vector<int> y2 = {-129, -752, 217, 885, -877, -175, -412, 376, 208, 1708, 11, -110, -103, -130, -1853, -1360};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x1 = {-124, 25, -132, -231, -116, -17, 224};
    vector<int> y1 = {228, -853, 254, 362, 202, 94, -420};
    vector<int> x2 = {-287, -12, -307, -878, -255, 62, 747};
    vector<int> y2 = {722, -2266, 787, 1752, 618, 140, -1947};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x1 = {113, -68, -142, 0, 474, 782, 224, 224, -46, 704, 224};
    vector<int> y1 = {35, -62, 82, 121, 208, 777, -151, -151, 51, -851, -151};
    vector<int> x2 = {147, -34, -154, 586, 1399, 2053, -86, -2934, -431, 1883, -3326};
    vector<int> y2 = {-9, -106, 66, 167, 347, 2066, 983, -19, -112, -2197, 1887};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x1 = {-139, -139, -139, 340, -139, -139, 74};
    vector<int> y1 = {46, 46, 46, 541, 46, 46, -3};
    vector<int> x2 = {-904, -128, -350, 774, -1482, -401, 28};
    vector<int> y2 = {-150, 345, 1099, 1350, 395, 367, -697};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x1 = {25, 486, -175, -83, -41, -10, 217, -183, -191};
    vector<int> y1 = {-53, 141, -223, -10, 293, -8, -152, 15, -179};
    vector<int> x2 = {-47, 1036, -608, -121, 76, -12, 506, -644, -346};
    vector<int> y2 = {-151, 370, -892, 326, 832, 150, -454, 179, -382};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x1 = {143, -90, 135, -84, -84, -84, -24, -432, -36, 90, -193, -84, -24, -957, 21, -84};
    vector<int> y1 = {163, -86, 178, -31, -31, -31, 42, 326, 160, 110, 209, -31, 213, -151, 158, -31};
    vector<int> x2 = {109, -85, -123, -1220, -1209, 92, -614, -953, -578, -260, -717, 170, 45, -2528, 104, -491};
    vector<int> y2 = {187, -119, -368, 488, 40, 903, 284, 773, -70, -208, 702, 279, 1102, -658, 381, -378};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x1 = {-37, -37, 31, 21, 103, -37, 103, -37, -37, -37, 103, 381, -240, 103, 103, 103, 103, 103, 141, -299, -37, 103, -508};
    vector<int> y1 = {-73, -73, 76, 11, -211, -73, -211, -73, -73, -73, -211, 728, -169, -211, -211, -211, -211, -211, 250, -446, -73, -211, -563};
    vector<int> x2 = {-41, 377, -401, 1197, 103, 383, 937, -623, -622, 1487, -62, 1215, -837, 1217, 606, -329, -407, -325, -87, -1073, 657, 787, -1507};
    vector<int> y2 = {-101, 526, -834, 1713, -1527, 829, -26, 703, -345, 2133, -897, 2229, -449, -8, -806, 195, 1233, 147, 116, -1557, 544, 2823, -1434};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x1 = {-97, -39, -197, 17, 22, -71, -197, -357, -354, -197, -197, -185, -197, -433, -4};
    vector<int> y1 = {39, -179, -164, 532, -96, -100, -164, 346, 466, -164, -164, 33, -164, 731, 145};
    vector<int> x2 = {-143, -355, -966, 39, 168, -377, -854, -1081, -1074, -603, -1729, -209, 1, -1004, 36};
    vector<int> y2 = {37, -149, 48, 1485, 180, 696, -22, 1007, 1287, -603, -221, -361, 888, 1995, -213};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x1 = {-6, -67, -37, 494, 57, 57, 14, 57, 57, 74, 57, 57};
    vector<int> y1 = {-33, -86, -91, -414, 8, 8, 21, 8, 8, 18, 8, 8};
    vector<int> x2 = {15, -46, -62, 1044, -889, -1573, 484, -405, 68, 229, 403, 368};
    vector<int> y2 = {-16, -69, -83, -921, 798, -768, -345, -1712, -25, -24, -776, -142};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x1 = {215, 58, 58, 58, 58, -84, 23, 41, -230, 58};
    vector<int> y1 = {190, 84, 84, 84, 84, 739, -66, 84, -4, 84};
    vector<int> x2 = {1018, 756, -526, 79, 650, -158, -639, -8, -541, -328};
    vector<int> y2 = {695, 1623, 882, -36, 558, 2270, 676, 194, -156, 80};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x1 = {318, 13, 13, 13, 13, 13, 13, 172, 13};
    vector<int> y1 = {92, -317, -317, -317, -317, -317, -317, -194, -317};
    vector<int> x2 = {282, 487, -781, -1095, -925, 1559, 1879, -40, -1525};
    vector<int> y2 = {208, 3365, 2107, 617, 1317, 2267, 2021, -358, 1087};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x1 = {-83, -103, 885, -500, -542, -327, 111};
    vector<int> y1 = {67, -82, 462, -403, -274, 690, 289};
    vector<int> x2 = {-109, -429, 2391, -2052, -1395, -798, 618};
    vector<int> y2 = {59, -67, 1319, -1692, -682, 1759, 1313};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x1 = {-270, 92, -261, -315, -261, -19, -166, -261, -261, -261, -151, 123, -261};
    vector<int> y1 = {303, -229, 233, 770, 233, 173, -187, 233, 233, 233, -41, -259, 233};
    vector<int> x2 = {-277, 78, -1325, -988, -281, -382, -766, 367, -846, -772, -183, -293, -607};
    vector<int> y2 = {347, -141, 738, 2334, 307, 263, 547, -969, 1860, 186, 401, 274, 1276};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> x1 = {218, 218, -148, 76, -148, -71, -148, 76, 76, -433, -148, 76, 218, -148, 76, -148, -545};
    vector<int> y1 = {-181, -181, 32, 249, 32, -542, 32, 249, 249, -587, 32, 249, -181, 32, 249, 32, -898};
    vector<int> x2 = {-2672, -270, -99, -180, -167, 48, -581, 297, -1142, -1038, -281, 73, 1007, -1047, 523, -183, -1374};
    vector<int> y2 = {-363, 103, 405, 1, 975, -1183, 794, 1400, -1223, -1318, 112, 778, -750, -307, 997, 539, -2251};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> x1 = {-55, 27, 43, -252, 473, 495, 452, -102, 70};
    vector<int> y1 = {-61, 112, 59, 244, 617, 78, 623, -9, 97};
    vector<int> x2 = {-35, 40, 56, -1004, 1144, 1238, 1579, -485, -6};
    vector<int> y2 = {-83, 126, 73, 915, 1495, 316, 2173, -131, -15};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> x1 = {195, -82, -247, -247, -247, -247, -320, -247, -320, -247, -155, -320, -273, -320, -247, -247, -320, -320, -320};
    vector<int> y1 = {-154, -163, 195, 195, 195, 195, -220, 195, -220, 195, 242, -220, -87, -220, 195, 195, -220, -220, -220};
    vector<int> x2 = {109, -68, -69, -711, 734, -393, 294, -5, -391, -170, -343, -1003, 294, -717, -261, -139, -431, -359, -525};
    vector<int> y2 = {-188, -217, -81, 160, -27, -635, 2764, 831, -1009, -138, 348, -1500, 138, -1189, -1203, 1436, -224, -407, -67};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> x1 = {8437, 2701, -3304, 7462, -8358, -1016, 9091, 4648, -8634, -3493, -5486, 8632, -9987, -3528, -4417, 6603, -6903, -6655, 6178, 2643, 5496, 5040, 1555, 4642, -3820, 5777, -4149, 2381, -1880, 7111, 6097, -5516, 999, -9647, -7696, 4443, 979, -4500, 964, -3282, -3452, 8452, -2119, 9123, 4703, -2661, -9832, -3874, -3978, -7692};
    vector<int> y1 = {1255, 7973, 3673, -5471, 8667, -324, 6307, -8280, -9112, -4560, -5128, 9063, -5019, 2956, -7826, 5494, -68, 2927, -1508, -9606, 347, 7944, 5759, 6934, -3751, -6955, 5989, -6320, -2581, 7940, 3781, -9514, 3084, -8195, -1875, -7375, -6087, -6973, -4733, 9090, -2742, -4962, 9831, -6163, -343, -8412, 535, 9590, -4689, -9702};
    vector<int> x2 = {-3511, 6372, 2153, -1104, -267, 3092, -5069, 8737, -1227, 7550, -908, 3866, -1157, -4274, -5042, 4806, 4976, -2808, 7704, 6898, 3593, 174, -3938, 8296, 5699, 7786, 1111, -2436, 9062, -2978, 9559, 2685, -1155, -1125, -347, 7798, 2170, -9757, -9803, 1606, 4160, 9966, 5229, 2556, -6977, 567, -7181, -3390, -1839, -7886};
    vector<int> y2 = {-8237, -1804, -5109, -6522, 2964, 9081, 6234, -9102, 3181, 6516, -7727, 5405, -3786, -5719, -5944, -370, 6143, -1840, 5376, -1894, -1743, -3232, 8418, -101, -966, -1765, -383, -4938, 8202, 6337, -4022, -1462, 4877, 719, -295, -6099, -4120, 650, 1929, 414, -8739, 4866, 5378, -3132, -5362, 2091, -1030, -3719, 9168, 1939};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> x1 = {584, 164, 795, -875, 828, 405, 477, 413, 72, 404, -41, -200, -557, 732, 534, -924, 966, -784, -925, 949, -782, -675, 118, 284, -364, -515, 401, 588, 328, 669, 268, -888, -19, 770, -500, -384, -376, -137, 602, -626, 74, 889, -591, 524, -554, 7, 504, 537, -82, 980};
    vector<int> y1 = {-543, -740, -307, 480, -752, 247, 587, -570, 704, 591, 60, -249, -461, 667, -438, 54, 793, 940, -172, 613, 131, -948, -393, -864, -873, -375, -308, -648, 631, -812, 290, 884, -243, -875, 814, 547, 170, -142, -944, 500, -640, -880, -393, 586, 700, 937, 168, -470, -136, -898};
    vector<int> x2 = {-853, -569, -305, 511, -26, 656, 931, -920, -786, 328, -805, -994, 43, 470, 609, 219, -868, 990, -692, -266, 619, -608, 168, 663, -302, -961, 47, 601, -355, 773, -286, -399, 978, 773, 280, 686, -977, 97, 907, -111, -493, 173, -866, 143, 448, -653, -157, -604, -337, -439};
    vector<int> y2 = {509, -101, 628, -64, -30, 427, 291, -274, 387, -716, 692, -577, 543, -277, -813, 615, -12, 689, -853, -597, 343, 539, 227, 112, 39, 622, 89, 724, 29, 377, 47, 156, 902, 247, 820, -274, -732, -283, 276, -288, 258, 177, -222, 720, 822, -220, 261, -155, 348, 738};
    PlaneDivision* pObj = new PlaneDivision();
    clock_t start = clock();
    int result = pObj->howManyFiniteParts(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10674&pm=7788
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
typedef long long int64; 
typedef unsigned long long uint64; 
#define two(X) (1<<(X)) 
#define twoL(X) (((int64)(1))<<(X)) 
#define contain(S,X) (((S)&two(X))!=0) 
#define containL(S,X) (((S)&twoL(X))!=0) 
const double pi=acos(-1.0); 
const double eps=1e-13; 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} 
template<class T> inline T sqr(T x){return x*x;} 
typedef pair<int,int> ipair; 
 
struct Tdata 
{ 
  int64 a,b; 
}; 
class PlaneDivision 
{ 
public: 
  int n; 
  vector<int> X1,Y1,X2,Y2; 
  int m; 
  Tdata X[1000000],Y[1000000]; 
  bool parallel(int u,int v) 
  { 
    return (X1[u]-X2[u])*(Y1[v]-Y2[v])==(X1[v]-X2[v])*(Y1[u]-Y2[u]); 
  } 
  int64 gcd(int64 a,int64 b) 
  { 
    return (b==0)?a:gcd(b,a%b); 
  } 
  Tdata getdata(int64 a,int64 b) 
  { 
    int64 m=gcd(a,b); 
    a/=m; 
    b/=m; 
    if (a<0 || a==0 && b<0) 
      a=-a,b=-b; 
    Tdata ret; 
    ret.a=a; 
    ret.b=b; 
    return ret; 
  } 
  int howManyFiniteParts(vector <int> x1, vector <int> y1, vector <int> x2, vector <int> y2) 
  { 
    n=x1.size(); 
    X1=x1; 
    Y1=y1; 
    X2=x2; 
    Y2=y2; 
    bool find=false; 
    for (int i=0;i<n;i++) 
      if (!parallel(0,i)) 
        find=true; 
    if (!find) return 0; 
    int npoint=0; 
    int nedge=0; 
    m=0; 
    for (int i=0;i<n;i++) 
      for (int j=i+1;j<n;j++) 
        if (!parallel(i,j)) 
        { 
          int64 a1=Y1[i]-Y2[i]; 
          int64 b1=-(X1[i]-X2[i]); 
          int64 c1=X1[i]*Y2[i]-X2[i]*Y1[i]; 
          int64 a2=Y1[j]-Y2[j]; 
          int64 b2=-(X1[j]-X2[j]); 
          int64 c2=X1[j]*Y2[j]-X2[j]*Y1[j]; 
          int64 t=a1*b2-a2*b1; 
          Tdata x0=getdata(b1*c2-b2*c1,t); 
          Tdata y0=getdata(-(a1*c2-a2*c1),t); 
          bool fd=false; 
          for (int i=1;!fd && i<=m;i++) 
            if (x0.a==X[i].a && x0.b==X[i].b && y0.a==Y[i].a && y0.b==Y[i].b) 
              fd=true; 
          if (fd) continue; 
          X[++m]=x0; 
          Y[m]=y0; 
        } 
    npoint=m; 
    for (int i=0;i<n;i++) 
    { 
      int64 a=Y1[i]-Y2[i]; 
      int64 b=-(X1[i]-X2[i]); 
      int64 c=X1[i]*Y2[i]-X2[i]*Y1[i]; 
      int C=0; 
      for (int k=1;k<=m;k++) 
      { 
        Tdata A=getdata(a*X[k].a,X[k].b); 
        Tdata B=getdata(b*Y[k].a,Y[k].b); 
        int64 a1=A.a,b1=A.b; 
        int64 a2=B.a,b2=B.b; 
        if (a1*b2+a2*b1+c*b1*b2==0) 
          C++; 
      } 
      nedge+=(C+1); 
    } 
    int result=nedge-npoint+1; 
    result-=(2*n); 
    return result; 
  } 
};

********************************************************************************
*******************************************************************************/