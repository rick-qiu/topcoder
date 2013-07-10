/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12170
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

class CirclesGame {
public:
    string whoCanWin(vector<int> x, vector<int> y, vector<int> r);
};

string CirclesGame::whoCanWin(vector<int> x, vector<int> y, vector<int> r) {
    string ret;
    return ret;
}


int test0() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 3};
    vector<int> y = {0, 0};
    vector<int> r = {1, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 0, 5};
    vector<int> y = {0, 0, 0};
    vector<int> r = {1, 2, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 0, 0, 10, 10, 20};
    vector<int> y = {0, 0, 0, 0, 0, 0};
    vector<int> r = {1, 2, 3, 1, 2, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int> y = {8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> r = {2, 2, 2, 2, 2, 2, 2, 2};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 3, 6, 9, 12, -4747, -4777};
    vector<int> y = {-5858, -5858, -5858, -5858, -5858, 777, 777};
    vector<int> r = {58, 1, 1, 1, 1, 44, 8};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {5202, 5699, -7433, 5068, -9483, -684, -6593, 5108, -7813, 6823, 3267, -8222, -8547, 2878, 2413, 8557, 5149, 5073, -8638, -6108, 8097};
    vector<int> y = {8728, -7407, 4338, -8414, 7652, -3705, -984, 5976, -9180, -9119, 9301, 2398, 7915, 6205, 7665, 717, -9884, 11, -8579, -6903, -746};
    vector<int> r = {4196, 9303, 7152, 5875, 2943, 788, 502, 416, 1958, 3174, 182, 1256, 1147, 444, 979, 65, 1040, 1233, 438, 175, 1140};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {9659, -7125, -6257, 7872, 7570, -1172, 7375, 4158, -3041, 8005, 5481, -7277, 9519, -2155, -9347, 836, -7025, 0, 0, 0, 0};
    vector<int> y = {7657, -6899, -8435, 8657, -3989, 7797, -6908, -3003, 4674, -477, 3196, 6528, -7323, -8396, 8741, -9171, -6490, 0, 0, 0, 0};
    vector<int> r = {170, 9787, 4960, 4450, 22, 1571, 253, 394, 857, 2105, 210, 959, 1674, 364, 4452, 1150, 1063, 1, 2, 3, 4};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {-9571, -3067, -2261, 7428, 7182, -6876, 8574, 2170, -3035, -9546, -2128, 9544, -4637, 7870, 96, 5607, -3692, 9144, 2254, 3637, -4686, 9795, 6169, 9381, 6392, -4899, -2561, -7480, -3405, 8975, 2020, -5953, 8338, -4915, -8959, -9885, 8514, 1553, -6084, -8218, 2034};
    vector<int> y = {-3148, 9495, 2147, -8047, -6694, -3986, 7994, 2425, 7990, 5470, 9454, -2391, 9457, -1254, -2885, -5752, 6908, 6341, -7133, 2956, -464, 8927, -4266, -7356, 7302, -8178, -4092, 2705, -506, -9450, -9145, -5626, -4100, -1822, -1139, 28, -8128, -8080, 8388, 8120, 807};
    vector<int> r = {3449, 6093, 1151, 9342, 6809, 55, 4988, 890, 4050, 796, 2072, 271, 11, 611, 55, 2942, 109, 927, 421, 577, 48, 1604, 949, 8, 920, 2330, 1394, 67, 1113, 179, 318, 227, 209, 10, 1182, 19, 384, 638, 142, 482, 391};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-9453, 9965, -7706, -8271, 3426, 169, -2277, 7809, 4142, 5158, -6839, 1474, 3066, 8208, 812, 608, -6676, 6299, 8635, 3866, 4364, 4841, -9968, 6437, 5277, 5412, 8964, -9484, -704, -2224, 9617, -1392, -2716, 6811, 7521, -9033, 3179, -878, -6116, 7448, -5660, -6956, 8962, -9114};
    vector<int> y = {7052, -1084, -9766, 2590, -1350, 4492, -4264, 2910, 9710, -6625, 6312, -9654, 8954, -4104, -5327, -8578, -9488, -3679, 2999, -8520, 415, 8700, 6566, -3139, 9802, 9527, -8508, -9167, 1458, -95, -6859, -1517, -7136, -319, 255, -1946, 1060, 2198, -5496, -4250, -1470, -2686, -9844, -2506};
    vector<int> r = {8174, 8082, 5359, 1137, 830, 1397, 1756, 1162, 3221, 706, 1944, 3078, 1584, 2130, 872, 1429, 700, 134, 2046, 11, 709, 156, 7360, 98, 79, 731, 457, 174, 65, 355, 533, 612, 44, 337, 82, 815, 331, 400, 108, 525, 394, 1054, 97, 82};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {8549, -5279, -5342, -1612, 8016, -5110, 1883, -1066, -289, 938, -6968, 8739, -5890, 6120, 9474, -4210, 4557, -248, -9264, 7679, -3377, 4015, 9426};
    vector<int> y = {2230, 2995, 8805, -8358, -1161, -3811, 3420, 9735, 6046, -4248, 7164, 2169, -8540, 2971, 6527, -5878, 4037, 451, -8629, 5294, -101, 2861, 1792};
    vector<int> r = {8373, 2793, 1860, 1827, 2352, 1153, 1217, 1583, 381, 920, 94, 9075, 1154, 484, 917, 676, 1144, 25, 244, 519, 291, 117, 233};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {3467, -561, -651, 1916, 1735, -5011, 4867, 8851, 4676, 3198, 867, -7578, 6994, -8907, 6935, 418, 8600, -9600, -9055, 5574, -23, -9825, 4037, 1049, -4806, -8784, -829, 9556, 8, -7804, 9895, -4551, 6021, -9616, 4860, 5745, 8641, 300, 1680, 780, -5661, 1395, -9988, -7690, 8911};
    vector<int> y = {9652, 9828, -9244, 9179, -9282, 1650, -4410, 5788, -3595, 9205, 4147, -7198, -4886, 7676, -4830, 2280, 7692, -5196, -637, 4399, -1758, 1689, -4651, -1087, 1105, 8235, 5252, -4353, 9258, 9580, 9000, -6777, 6103, 5865, -8440, -2325, -1264, -5180, 2364, -7543, 3850, -2093, 9608, -9763, 5136};
    vector<int> r = {784, 2118, 1653, 37, 498, 3871, 2740, 4802, 311, 1454, 391, 316, 5211, 1556, 221, 103, 679, 1312, 618, 938, 604, 8758, 205, 334, 1964, 80, 417, 740, 453, 340, 296, 1043, 93, 203, 814, 477, 1054, 626, 2379, 551, 109, 642, 90, 608, 1496};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-2369, 5861, -1563, -4641, 9512, -4449, -8970, 6202, 9535, 3154, -7378, 4116, -4661, -4568, -4468};
    vector<int> y = {-9367, 6752, -6551, 9959, -5812, -4222, 4259, -2294, 2301, 1523, 8840, 9993, 8887, 5625, -7657};
    vector<int> r = {9297, 3275, 1483, 207, 2600, 1929, 128, 1519, 968, 2424, 927, 245, 5251, 1336, 6500};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {5054, 2074, 4309, 5131, 3772, -9523, -8269, 7203, 3768, -8999, -481, -5381, -9970, 6921, -59, 1071, -7989, -6309, 5660, -5523, -8369, 1100, 4926, -6595, -9887, 9268, -2804, 7414, 2911, -1889, -4758, -2303, -3951, 7019, 2309};
    vector<int> y = {-7343, 6155, -8805, -6234, 1587, 6821, 5754, 8067, -6499, -6760, 9762, 6636, -5631, 9805, 1110, -4697, -3350, 1857, -3180, -3401, -9405, 1993, -1732, -9166, 7914, 5056, -8057, -6197, 4747, -4970, 5945, -9007, -875, 8539, -6671};
    vector<int> r = {1319, 2634, 9440, 5275, 505, 7864, 6085, 2652, 2924, 732, 168, 2302, 3704, 623, 934, 136, 30, 217, 431, 1008, 162, 377, 457, 822, 705, 642, 491, 409, 296, 1537, 240, 9, 683, 2016, 783};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-8069, 5195, -4545};
    vector<int> y = {-4483, -8209, 5939};
    vector<int> r = {7514, 5437, 2519};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {4631, 2993, 3774, -3238, 3882, 1300, -1096, 2210, 3643, 1248, -8220, -6994, -9839, -739, 6547, 5643, -6030, 6584, 4896, -6565, 6585, -4939, 7545, -8884, -6982, 6731, -8127, 6744, -8011, 6351, 9034, 9135, -6816, -9845, -3070, -43, -9202, 9945, 5319, 9098, 9637, -5488, 7469, 0, 0, 0};
    vector<int> y = {-5981, 2565, 8122, -3237, -3087, 3118, -7983, 7168, -2607, 8748, -1187, 9238, 8363, -3429, -5205, -7937, 5046, -3836, 5490, -9538, 5943, 9894, -6643, 9813, 2495, -1435, 5406, -8866, -6825, -4055, -7012, 7914, -8351, -1701, 696, 4781, 7652, 4550, 9151, 8706, 1337, -8168, 2947, 0, 0, 0};
    vector<int> r = {941, 653, 7427, 1684, 84, 659, 307, 5527, 162, 2822, 2533, 809, 4363, 753, 4372, 671, 426, 443, 785, 4771, 432, 270, 7649, 288, 1076, 55, 41, 613, 669, 1357, 835, 342, 681, 726, 1549, 1333, 415, 219, 509, 437, 500, 102, 118, 1, 2, 3};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-9435, -6901, 7858, -2723, -6852, 8069, 4946, -1793, 6915, 3367, -8395, -7641, 4517, 7757, -9557, -520, -7245, -8450, 8293, 4385, 5318, -3470, -6466, 1177, 2682, -2824, -3107, 6352, 3260, -839, 9061, -7331, -4257, -9759};
    vector<int> y = {-9910, 9835, -3439, -5017, 9207, -2917, 703, -5526, -5217, 4570, -7994, -9073, -5456, -916, 2688, -3092, -7877, -311, 8973, 4874, -7942, 2090, 8713, -7155, 8885, -1444, -9808, -2240, 1980, -139, -2461, 9743, 8936, -8325};
    vector<int> r = {6578, 5450, 4912, 896, 4097, 6255, 106, 2086, 345, 146, 460, 807, 38, 399, 2026, 56, 451, 217, 2087, 1917, 103, 2876, 137, 387, 2230, 226, 184, 414, 260, 159, 742, 2029, 1069, 4959};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-8367, -2791, 7264, -4844, 1780, 9459, 3488, -2596, -3653, -4771, 7495, 8684, 5364, 2075, 8699, -2383, -9217, -9456, -4538, 3752, 9326, -3817, -5153, -8123, -8392, -2988, 4885, -5774, -1095, -8277, 6301, -4203, -8122, -7929, -5232, -134, 9211, 5344, -8261, -5956};
    vector<int> y = {-9111, 6563, 2927, -7507, -9056, -7606, 4655, 3087, 5337, 9142, -7370, 9663, 9241, 9577, -5467, -2734, 7447, -7269, 8464, -2751, 5609, -2470, -8629, 3561, 9445, 6549, -7131, 2033, 7958, 2704, 6470, 3071, -5793, 4716, -8330, -1020, 9773, 4433, -2868, -1991};
    vector<int> r = {7751, 4235, 1626, 3438, 1892, 2570, 1001, 30, 2732, 8387, 223, 428, 1416, 1285, 4953, 295, 362, 608, 517, 497, 884, 136, 1590, 152, 1155, 379, 25, 531, 130, 469, 1199, 69, 74, 436, 922, 165, 1074, 672, 266, 180};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-9864};
    vector<int> y = {-4680};
    vector<int> r = {2445};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-3270, 4451, 7532, -5487, -4504, 3761, 6027, -9883, -4405, -8863, -699, -9345, -6579, -8218, -330, 3853, -1136, -6967, 7335, -7560, -9017, 3530, 5189, 6180, 1729, 9202, 3090, -4780, 188, 4233, 1420, -3534, -1561, 6529, -4548, -6426, -6072, -1761};
    vector<int> y = {1111, -7782, 5974, -8157, -9934, 6193, 1765, 9394, 1360, 5614, 7996, 8406, -1445, 289, -7784, -5694, -3703, -1563, -9575, 4128, 8069, -5400, -8799, 8818, 9634, 7114, -7158, -7127, 9009, -3026, 8090, 8876, 6173, -3792, -7803, 7037, 8927, -2895};
    vector<int> r = {3222, 5587, 7412, 4148, 388, 1698, 2664, 5270, 424, 509, 771, 632, 818, 921, 119, 2060, 138, 307, 423, 305, 1301, 354, 781, 1523, 507, 1852, 58, 1847, 62, 380, 569, 335, 196, 561, 244, 244, 166, 121};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-4132, -7369, -9437, 2956, 7906, 4257, 2358, 3612, -7605, 9107, 6725, -6245, 2006, -1276, -7551, -2034, 1596, 3752, 9471, -789, -9556, 3094, -8868, 4569, 9951, 3838, -3793, 4349, 2553, 8685, 7257, 9601, 1808, 3098, -2976, 819, -3399, -7623, 1548, 7382, 7386, -7638, -5571, -6859, -6363};
    vector<int> y = {-8972, -9665, 8755, -7067, -9615, 2430, 2487, -1468, 9802, -8211, 8894, -6516, 2064, -677, -9976, -7464, -7915, 373, 774, 218, 8702, 2628, -6560, 4765, -3983, 5827, -92, -4985, 8198, -4494, 9166, 1312, 6684, 192, 1589, -5595, 2284, -9788, -2817, -3872, -4613, -2154, -4860, -3671, 27};
    vector<int> r = {1090, 6692, 7502, 578, 4484, 4426, 1233, 239, 5334, 707, 2215, 609, 314, 1263, 8510, 521, 687, 1036, 164, 33, 2358, 427, 1673, 288, 1020, 613, 94, 595, 1081, 243, 2936, 155, 186, 6, 1243, 127, 275, 867, 1363, 481, 120, 462, 183, 278, 131};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-7354, 775};
    vector<int> y = {-7228, 6074};
    vector<int> r = {1613, 292};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {9850, -8573, 9926, 1300, -3122, 6145, -2402, 8378, -4318, -3723, -6242, 3106, 8720, -7482, 8162, 5677, -4398, 321, 4071};
    vector<int> y = {-3512, -7214, -6797, 8957, 8660, -5740, -7048, 5208, 9783, -6997, -6642, 903, -5974, -4348, 305, -2678, 5478, 5471, -8142};
    vector<int> r = {1608, 8548, 9283, 571, 6662, 278, 1998, 161, 8335, 565, 1591, 993, 276, 800, 650, 132, 1411, 812, 1166};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {3662, -4839, 3026, -4322, 7630, -6816, 7015, 1678, 5820, -2619, 9523, 5562, 2945, -7540, -1114, -1310, -7800, -6258, 561, -9546, -2532, 1880, 2544, -8933, 7034, 3547, -244, -114, 4063, 6421, 7322, -5729, -3449, 4846, 9116, 2531, -832, 7652, 4522, -3151, -7922, 4472, 8741, 8048, 6269, 780, 6986, -9604};
    vector<int> y = {8874, -9907, -9031, -7251, 5149, 521, -9619, -2390, 5834, -1688, 7040, -570, 6398, -8034, 5123, 119, -4570, 6612, 8769, -5970, 5985, -9074, 5102, -8757, -4493, -3245, 9156, 6494, -5320, -2066, 6868, 5056, -5475, -5270, -4682, 5864, -1563, 440, -4556, 3306, 174, 5086, 84, -5991, -4214, 2451, 8157, 2487};
    vector<int> r = {295, 354, 487, 1110, 91, 2053, 2992, 1757, 403, 407, 4530, 1979, 1437, 5970, 458, 665, 160, 13, 431, 95, 815, 1675, 9, 2746, 330, 35, 1580, 911, 476, 112, 403, 1775, 768, 1548, 974, 11, 828, 322, 163, 1250, 451, 487, 459, 489, 118, 268, 776, 1241};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-3572, -6507, 1746, 8751, 7238, 7083, 4419, 6968, 5355, -8989, -3364, 6760, -8712, 7250, 1672};
    vector<int> y = {-2267, 8959, 2824, 9548, -3122, -7740, -2858, 7804, -7118, 1253, 8527, -8524, -6506, -3238, 1287};
    vector<int> r = {3281, 6428, 76, 8350, 532, 8075, 1836, 1672, 942, 570, 1174, 4086, 1984, 804, 1883};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-6718, 8975, -9894, 4266, 1391, -6608, 4589, -7786, 1494, -2188, 2762, -7764, -4524, 5763, 3613, -8634, 7258, -4053, 863, 1544, 135, 9827, 9999, -8834, 2187, -7443, 284, 7632, 7302, 4685, 3077, -5203, 7386, -6873, -9072, 4712, 1273, 1215, -9261, 7157, 2231, -9588, 6845, 4209, -7063, 2767, 6947, -8156};
    vector<int> y = {1625, -3741, 8361, 6675, 4133, 9881, 5838, 668, 6867, -2783, -8295, -3927, -5381, 4839, -5060, -9519, 6032, 8188, -881, 3871, -9530, 9259, -3067, -9853, 9560, 7735, -5273, -7927, 8615, -8663, -1651, 2832, 4140, 9544, 9724, 1940, -914, -8962, -9341, -192, -3436, 8342, 4095, -8415, 7528, -1605, 8227, -3577};
    vector<int> r = {3869, 677, 1610, 525, 1336, 109, 5735, 1840, 1338, 1437, 5272, 993, 1118, 70, 1052, 1487, 516, 1000, 1275, 410, 1818, 362, 2245, 2709, 153, 534, 1308, 187, 484, 2021, 977, 451, 1100, 219, 4234, 1113, 76, 269, 630, 139, 229, 1189, 112, 1232, 1148, 172, 1686, 126};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-7158, 8446, 3387, 6356, 9977, -3226, 4117, -6528, -7699};
    vector<int> y = {-6230, 8168, -6959, 1247, 5840, 8141, -7818, -4654, 9301};
    vector<int> r = {2145, 9864, 3156, 874, 4585, 35, 5192, 5220, 3831};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {-7840, 7097, -7156, -1032, -7591, 2590, 405, -3552, 3559, -6442, 5041, 856, 6026, -4976, -1217, 8889};
    vector<int> y = {8844, 8186, -8460, 6684, 5477, 3678, -8637, -9121, -9104, 6766, -2657, -2264, -4053, 4309, 9596, 9907};
    vector<int> r = {9064, 719, 6406, 320, 4468, 2421, 419, 2239, 144, 1366, 1809, 187, 5775, 526, 22, 109};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-2321, -1662, -3349, 6657, 9897, 8611, -9808, -5583, -2589, 7757, 8699, -9163, -7940, -9071, -2960, 9244, -1728, 5978, 2172, -9126, 615, -6328, 3096, -2717, -9213, -9362, 5656, -4806, 591, -1719};
    vector<int> y = {-6499, 2159, -9329, 6672, 4615, -3206, 7784, 6166, 3011, 7669, 8021, 1627, -6777, -9051, -7475, 1306, -7072, 6691, -5952, 4305, 8883, -2967, 972, -2871, 8964, 6160, 8103, 7984, 8848, -1386};
    vector<int> r = {6700, 1509, 820, 387, 1284, 3431, 8205, 48, 37, 911, 5900, 1849, 102, 205, 3137, 455, 401, 248, 912, 804, 1275, 1071, 2150, 613, 1967, 6501, 910, 12, 1487, 39};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {4943, -2035, 2024, -7033, 463, 1110, -6396, 6551, 7065, 9065, -6304, 7016, 2070, -3345, 6843, 125};
    vector<int> y = {-1462, 2825, -9644, -3232, -4702, -6240, -3768, 7188, 7614, -5105, 8244, 8042, 6352, -8699, -9002, -2208};
    vector<int> r = {1332, 3272, 314, 1445, 3862, 2188, 478, 859, 5933, 799, 2897, 3544, 474, 751, 2238, 140};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {7018, 4613, 7171, -5937, -8163, -2173, 8984, -6663, -9768, -5885, 4691, -529, -8707, 7547, -4534, 9866, -5823, -5422, 804, 2828, -1583, -5980, 6424, -7365, 9416, 1651, 6290, 3720, 7134, -2379, -5158, -346, 6975, 804, 990, 1221, -5287, -6469, -9819, -3813, 1758, 230, -219, 8875, -3031};
    vector<int> y = {4400, -8169, -8999, 398, 2070, 5188, -3171, -1229, 5638, -7113, 7278, 3038, 4090, -6249, -6267, 4285, 1503, -6446, 7997, 1325, 1315, 9969, 760, 5585, 4767, 5192, 3652, -7295, 9580, 9087, 4592, -1215, 3801, -6178, -8543, 3616, -8794, -7403, 9341, 2190, 5523, -855, -8202, 8784, -2951};
    vector<int> r = {3022, 2683, 8784, 275, 5355, 1378, 2246, 693, 946, 3131, 390, 1061, 130, 379, 378, 54, 1450, 1316, 1146, 2173, 710, 401, 437, 934, 272, 1044, 414, 778, 872, 1190, 1188, 253, 1962, 323, 777, 271, 501, 5, 1718, 437, 669, 260, 181, 204, 285};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {293, -9442, 6046, 7336, 2397, 3934, 4528, -3744, -7854, 6074, -4388, -9868, 1407, -3198, 3075, -6871};
    vector<int> y = {4352, -7105, -6567, -3985, 5654, 6321, -8457, 2953, 3844, -4670, -1696, 4028, -6256, -8574, -6811, 1013};
    vector<int> r = {1413, 4048, 8205, 3399, 4180, 2326, 240, 961, 5359, 1417, 988, 2472, 2545, 1167, 526, 605};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-4398, 502, 4699, 370, -5277, 7165, -514, -9691, -1872, -4131, -9083, -7217, -8504, -5186, -8220, 5064, 1425, -5926, -6696, -5084, 9289, -3068, 7960, -8614, -4495, 295, -3523, -7459, -8513, 7940};
    vector<int> y = {4278, -8119, 6261, -2940, 2372, -6042, -2711, -2708, -7041, -5124, -4374, -6378, -2269, -7969, -4464, 5335, -1232, 5023, 9600, 9195, -2867, 9825, -5749, -9306, -9610, -1201, 1187, -9114, 7290, -4709};
    vector<int> r = {3837, 1220, 4676, 1302, 869, 4850, 2495, 3362, 680, 467, 1469, 549, 263, 1387, 10, 2575, 20, 19, 241, 9, 101, 1424, 6248, 1939, 332, 229, 543, 452, 287, 9};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-4683, -1463, -1302, 7531, 9958, 2933, -4147, -4595, 910, -7018, 133, -3033, -4989, -5186, -7658, -3407, 8471, -3231, 5407, 9508, 8723, -7473, 2586, 9094, 7414, -8593, -4598, 1406, 4657, -8346, -4144, -3430, -2460, 7822, -7643, 9646, -5355, -5451, 1568, 9111};
    vector<int> y = {-4809, 5679, -8575, 8460, -1698, -1985, 2897, -3056, -7052, 9877, 2650, 2413, 1093, 1717, 9950, 1430, -2381, -137, 7938, 5194, -1559, 4686, 1484, -7004, 6102, 4111, -9123, 6830, -6436, -8356, 2541, 4009, 1140, 9038, 7006, -8027, 6188, -4510, -9817, -3284};
    vector<int> r = {3145, 2191, 573, 4788, 4250, 2641, 383, 220, 635, 2045, 805, 483, 1319, 248, 3522, 195, 2498, 452, 1123, 458, 1187, 733, 831, 157, 1222, 94, 576, 53, 1868, 618, 17, 308, 625, 791, 280, 1792, 305, 2119, 1544, 414};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {-6010, 8061, -8091, -1222, -8958, -9695};
    vector<int> y = {6784, -892, 1332, -3579, -8665, 1786};
    vector<int> r = {306, 3816, 4606, 2942, 2619, 2042};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {-7191, 4043, 8689, 2214, -7224, 9711, 6679, -3269, -1403, -6978, 7666, 2014, 28, -9775, -4232, -2507, 4021, -8284, -7146, -2902, 8935, 4091, 6425, -8613, -3989, 6064, -9768, -804, -5275, 3467, -7868, -8331, -4845, -3482, 473, 4644, -2045, -7616, 7134, 2932, 7824, 6866, 9975, -6761, -8714, -7175, 3415, 5973, -9125};
    vector<int> y = {3958, 8891, -4810, -6940, 1481, -6282, 9256, -8177, -389, -6758, -5121, -4603, -9706, 9580, -2613, -20, 3165, -6052, 4941, 5691, 9392, -5610, -3082, -6278, 202, -8815, 9522, -3445, 5026, -4820, 1811, -2060, 5675, -1987, 2384, -8160, 2364, 4339, -8051, 610, 3829, 5786, 9073, 9621, -9044, 6951, 9791, 4297, -1271};
    vector<int> r = {3440, 2853, 2407, 323, 6398, 363, 8054, 1749, 213, 327, 6329, 592, 1325, 483, 1261, 237, 722, 766, 503, 321, 343, 1133, 105, 280, 677, 419, 1200, 659, 911, 23, 425, 2491, 24, 13, 706, 839, 1028, 1463, 370, 865, 516, 301, 1818, 576, 474, 287, 766, 561, 222};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {-5931, -1320, 8148, 3290, 3132, 9075, 9028, -8142, -5476, 6331, -7297, -4295, 4012, 6980, -1265, 5893, 9116, 1706, 1183, 4711, 8536, 7209, -5385, -3691, -4178, -2108, -1304, -8051, 2181, -9478, -5329, 9568, 3705, 8496, -8932, 23, 9872, -4384, 4306, 0, 0, 0, 0, 0, 0};
    vector<int> y = {-3719, 5322, -1772, -3884, 543, -2676, 9768, 2730, -6039, -1718, 8632, 8256, -8545, -4110, -6084, 8016, 5290, 5953, -3297, 7664, -7656, 9244, -4025, 3984, -8582, 5559, 8033, 8895, -6130, -6937, 2885, 4903, 9874, 6031, -9213, -8363, -1529, -5801, -7123, 0, 0, 0, 0, 0, 0};
    vector<int> r = {3609, 5364, 3820, 1235, 356, 379, 1097, 1218, 6528, 703, 1009, 843, 2631, 361, 1585, 374, 3170, 1441, 9, 448, 274, 261, 1021, 1739, 1467, 419, 708, 1881, 32, 1082, 165, 2137, 305, 340, 1111, 539, 180, 729, 1066, 1, 2, 3, 4, 5, 6};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-7293, 8153, -3859, 6479, -5140, -6363, 7068, 2610, 1505, -5221, -6397, 7247, -7992, 5047, -8514, -7135, -761, 5272, -2301, 3508, 8248, -7983, -2582, 5942, -3106, 7387, -6411, 9974, 3165, 148, -731, 4710, 9004, 8118, -8605, 5620, 9976};
    vector<int> y = {8178, 9422, -8098, -2522, 6300, 6761, 9215, 7064, -3399, 8995, 6865, -3381, -6250, -6982, 4848, -8063, -7760, 7035, 5563, 2468, 1625, -9725, 1699, -1795, 8583, -3310, -778, 3886, -5132, -3977, -8658, -7272, 1605, 9520, 8096, -9837, 51};
    vector<int> r = {8596, 3995, 6645, 2998, 1986, 5580, 80, 1015, 279, 500, 5427, 1157, 779, 1522, 1309, 2823, 3159, 11, 915, 1453, 1214, 412, 126, 175, 52, 821, 26, 1037, 747, 181, 1765, 658, 102, 4884, 626, 527, 248};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {1656, -200, 9337, 46, -8884, -5424, -2793, -9114, -1143, 4223, -9752, -415, -6133, -4993, 2420, 3060, -6322, -9385, -842, -5054, 2680, -6927, 4155, 7353, 5034, -128, -7234, -644, 5564, -8604, -1819, -5673, -9438, 7168, 6497, 1691, -3382, -6719};
    vector<int> y = {6367, -7208, -6673, -7604, 4200, -8033, 4018, -5014, -8230, 6428, -8316, 8745, 9580, -3447, 9569, 5764, -2926, -7118, 8781, -7086, -2971, 7541, -4036, -618, -9541, -6375, -2021, 2122, 8332, -7736, -2331, 485, -2549, -131, -4800, -6047, 96, 3280};
    vector<int> r = {6586, 172, 2645, 3705, 1458, 581, 1051, 5625, 388, 1188, 386, 1308, 1005, 1028, 234, 2639, 398, 3099, 2079, 346, 941, 1167, 785, 2140, 911, 446, 709, 1097, 912, 788, 14, 734, 796, 708, 381, 1016, 1393, 12};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {7922};
    vector<int> y = {-8890};
    vector<int> r = {9659};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-6174, 7957, -5974, 8233, 4208, 891, 8237, 9820, -1660, -3613, -6672, -3352, 7557, 9484, -7195, -1107, -35, 7788, -7837, -8113, -1169, 8512, -2804, -4858, 5316, -2509, -7913, 1789, 7285, 4030, 8445, -9129, -6566, -6860, -987, -5004};
    vector<int> y = {-7749, -8465, -8365, -75, 5939, 2797, 6952, -335, -9110, 3926, 5663, 5836, 604, -5394, -4856, -2607, 2977, -7198, -9126, -914, -5191, 3503, 8072, 8826, 8127, -7126, 6071, 3140, -1252, -6094, -5409, -4937, 4781, -4801, -8710, 2937};
    vector<int> r = {9704, 326, 8703, 2589, 1137, 2734, 2178, 83, 3247, 839, 1419, 893, 1112, 1962, 1567, 244, 1213, 416, 1505, 827, 160, 361, 1222, 307, 573, 101, 3150, 335, 686, 90, 678, 51, 445, 1970, 485, 861};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {7643, -624, 9565, -7037, -4377, -343, -2156, 8008, -1853, 3476, 7690, -6341, -9547, 8711, 3196, -8617, 9348, 3603, -5228, -3875, 9958, -6448, 6175, -8834, 9769, 9529, -1384, -8022, -9345, -5964, -9551};
    vector<int> y = {8481, -9230, 6319, 9634, -8050, -7306, 9592, -4131, 3304, 8822, 8770, -9989, 8469, -5613, 4194, 5245, 6914, -6710, 7100, -747, -7517, -3425, -3642, 8479, 7389, -6880, 8018, 3465, 7618, -5204, -6902};
    vector<int> r = {1721, 3169, 4901, 9058, 661, 122, 2935, 1134, 581, 225, 279, 1960, 138, 5054, 375, 879, 7109, 104, 704, 1707, 2604, 432, 284, 180, 75, 1706, 195, 2772, 1517, 942, 1548};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-8308, 6063, 3849, -7360, 796, 6759, 2747, -5738, 4030, -3634, 677, 2558, -3324, 8282, 9972, -8847, 5613, 5433, -2886, 5695, 6017, 5684, 7028, -6792, 2828, -8223, 621, 4683, 747, 5496, -1447, -9351, 3012, -9380, -9568, -9266, 4166};
    vector<int> y = {3150, 7752, -7321, 1998, -2909, 4675, -7263, -9192, -927, 6392, 9714, -7556, 6893, -871, 4801, 7768, 1576, -5438, -6638, 7810, 2130, -9826, -7739, 1470, 8847, -9445, -8194, -5121, 3437, 2197, -9962, 3360, -8857, -9757, -3801, -8599, 1279};
    vector<int> r = {7950, 1672, 4427, 4084, 828, 6673, 131, 655, 2, 194, 271, 6247, 1479, 391, 1636, 1143, 2168, 100, 633, 2188, 2870, 1063, 175, 1404, 516, 651, 490, 1720, 96, 747, 122, 818, 538, 6, 256, 2244, 455};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {3281, -6470, 6164, 212, 3554, 1530, 7583, -9539, 9540, 312, 7082, -7801, -1072, -3544, -603, 1413};
    vector<int> y = {7208, -3482, -6427, -7581, -7237, 7092, -1830, 8151, -8743, 9644, 2127, 9004, 1121, 1777, -2741, -2908};
    vector<int> r = {2184, 1855, 2164, 2033, 7467, 4827, 8, 3363, 1100, 248, 1767, 481, 77, 1907, 488, 824};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {-9662, 3490};
    vector<int> y = {-30, 3237};
    vector<int> r = {6633, 3772};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-2487, 8056, -2242, 8481, 6794, 2249, -6940, -7960, -2073, -6909, 8841, 9463};
    vector<int> y = {6760, -8322, -4577, -7047, 8761, 2418, 9541, -1427, -5931, 9923, 7889, 8343};
    vector<int> r = {2139, 6389, 3948, 756, 3633, 1985, 2710, 1475, 2571, 269, 767, 6606};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {8696, -8814, 627, 2342, 1022, 6094, 6384, 5396, -6729, 6378, -1771, -1, -8772, -9876, -1433, -3840, 5202, -2810, 3758, 5162, -2885, -9669, 3261, 4497, 6166, -7364, 2465, 1444, 2419, 9090, 1465, 8225, -3517, -777, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {-7592, 4826, 4861, -6105, 914, 5379, -9124, 8064, -8462, -2798, -4864, 3913, 6923, -5311, 1811, -9687, -2098, -1713, 9348, -2561, 9900, 7848, 705, 387, 1720, 2653, -252, -9985, 9005, -518, -8236, 8022, 4895, -3331, 0, 0, 0, 0, 0, 0, 0};
    vector<int> r = {8308, 6149, 2147, 1099, 421, 1368, 2347, 24, 896, 2673, 492, 512, 1246, 1964, 1174, 1039, 467, 1574, 2929, 1384, 237, 12, 125, 79, 1189, 1872, 566, 144, 1006, 126, 645, 1544, 474, 383, 1, 2, 3, 4, 5, 6, 7};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {6703, -5295, 9816, 6413, -7001, 6433, 2564, -4859, -8174, 2015, 5395, -4792, -918};
    vector<int> y = {-3937, -915, -5149, -1872, -1526, -6966, 6498, 5662, 741, 7284, 1418, 9988, -4495};
    vector<int> r = {3207, 1575, 8911, 1067, 5921, 108, 3470, 1022, 885, 171, 988, 1211, 672};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-5559, -9709, -4047, 159};
    vector<int> y = {-1472, 8284, -7904, 8769};
    vector<int> r = {806, 5230, 5474, 3633};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {2237, -6818, 7206, 8402, 5290, -9401, -9347, -7916, 1489, -4076, -8567, -179, -7463, 7179, 8557, 6511, -677, 7756, 3812, 69, 2042, -1690, 3564, -9861, 9132, -7636, 4053, -3087, -6689, -5636, -281, -4643, 9776, 2440, 2992, -6975, -3633, 7866};
    vector<int> y = {-7315, 2968, 2743, 9752, 2741, 9242, -731, -1916, 3997, 8878, -7009, 6329, 1311, 3053, -7319, -7943, 131, 8685, 882, -5878, -3750, 2526, 2513, -1848, -5553, 4541, -5015, 7528, -30, -394, 4026, 6978, -8584, 5029, -9161, 4044, -4626, -3665};
    vector<int> r = {5257, 2075, 2007, 2603, 4537, 1892, 211, 778, 370, 636, 2479, 965, 5604, 2375, 437, 480, 395, 990, 1045, 2479, 306, 176, 259, 150, 1119, 100, 848, 664, 393, 334, 700, 81, 102, 481, 138, 419, 435, 615};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {6616, -8234, -5794, -4681, -3052, 200, -6669, 6297, -129, 488, 4584, 7107, 811, -6692, 5119, -5561, 6775, -9045, 7860, 9616, -1727, 6153, -7201, 9676, -9902, 9180, -745, 5450, 7762, 7928, 9688, 3769};
    vector<int> y = {5114, -421, -5046, 9271, -4388, 9596, -8906, -6390, 9993, 9964, -1021, 5414, 4145, -8672, -7317, 3593, 3245, 3841, -7635, -6893, -1017, -8453, -2874, 939, 6793, 3634, -3425, -1701, 1968, 2410, 8625, -923};
    vector<int> r = {4093, 1004, 6703, 1585, 1067, 3027, 2446, 2719, 1326, 2189, 1013, 1822, 1631, 2179, 473, 1461, 68, 836, 495, 6578, 739, 605, 1411, 521, 1690, 506, 1309, 55, 227, 1054, 451, 49};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {-9179, 9731, -9668, -3052, -1325, -3951, 8677, 7643, 2428, 2122, -2769, -7107, 7224, 7512, 5796, 2336, 7408, 715, -2944, -8178, 4122, -6122, -1522, 5544, -8142, 5592, 7972, 1087, -9008, 1825, 7492, 9600, -327, 4181, 6499, -7659, -6442, 251, 7178, 1309, -9292, -2489, 9066, 0, 0, 0, 0, 0};
    vector<int> y = {7718, 2793, 7799, -6961, -3107, -6867, 2586, 2756, -1296, 1832, 7841, -6707, -7722, -4313, -2232, 4310, -9614, -4484, 9900, 7864, -8284, -6036, -5300, 7371, -9754, -4886, -615, 9933, 4188, -5376, 2946, 3999, -3458, -681, 4176, -6644, 2637, -5653, -9139, -8937, 2211, -9867, 1778, 0, 0, 0, 0, 0};
    vector<int> r = {2870, 9867, 8525, 678, 1599, 6580, 4697, 1016, 1158, 1206, 1383, 2551, 83, 652, 438, 939, 1143, 329, 612, 413, 1178, 1057, 73, 705, 103, 716, 842, 165, 254, 158, 698, 221, 474, 455, 307, 140, 726, 893, 1977, 823, 1245, 967, 8496, 1, 2, 3, 4, 5};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-8115, -4853, -6005, 501, 409, 7628, 3142, 8134, 4969, -8374, -7466, -2042, -9021, -8480, 7462, -5751, -6448, 5361, 9464, 6312, 5703, -2465, -2390, 9741, 6968, -9874, 9653, -2197, 6129, -6783, 7280, -3259, 1192, -4592, -9575, -8740, 1093, -4908, 7675};
    vector<int> y = {9514, -8760, 8581, 2988, -4926, -5148, 1430, 9835, -6508, 4044, -4033, -9733, 6987, -9559, 6264, -9301, 6532, 9592, 8196, -6069, 2121, -1662, -8907, -1881, 6034, -8684, 6444, 1884, -7192, 6839, 9773, -6849, 2454, 9653, -2941, -1161, -2516, -803, -5849};
    vector<int> r = {7372, 4205, 3582, 2094, 1262, 5224, 569, 6724, 387, 660, 558, 95, 23, 8662, 1734, 2137, 178, 545, 240, 3020, 1298, 1092, 1059, 678, 2431, 237, 44, 785, 73, 1384, 33, 86, 1158, 988, 1620, 124, 772, 743, 936};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {9793, -2196, -5890, -8125, 1597, -7661, 4133, 5358, -8084, -4485, -7990, 6492, 8352, -2084, -6658, -9410, -9785, -433, 5593, 7473};
    vector<int> y = {-8749, -7731, -9720, -3711, -440, -2379, 6762, 6495, 8612, 6732, -3184, -6142, -3436, 2523, 9748, 2117, 1990, 1422, -3156, 5217};
    vector<int> r = {8634, 930, 1278, 4568, 1736, 2875, 1834, 519, 371, 181, 1185, 1718, 1156, 2342, 5191, 741, 64, 16, 1019, 319};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {-4159, -5228, 488, -9480, 2953, 8663, -980, 6034, -6864, -8514, -9758, 3816};
    vector<int> y = {7861, -998, -3490, -7755, 9962, 8796, 9523, -4847, 8273, -645, -617, -8539};
    vector<int> r = {4793, 778, 1420, 1433, 1952, 3033, 1043, 4174, 640, 1145, 2666, 9343};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {1951, -3416, 8263, 7442, -3703, 8302, 3546, -5408, -4623, 6027, -2104, -1371, -3897, 7196, -4522, -8101, -262, 2690, -422, -9087, 6263, 9400, 2107, -7521, 3469, 914, 5540, 1020, 8773, 7958, -4674, -2449, -7134, -6629, -6757};
    vector<int> y = {-8861, 7501, -7857, 9429, 8919, 843, -3832, -9567, 1500, 1459, 4669, -2033, -8851, -7103, -9408, 9367, -5230, -450, -6691, -1533, 2542, -5467, -2852, -9673, -4221, 5484, 753, 5380, 3435, 9503, 5808, 1839, 2508, -3902, -2040};
    vector<int> r = {2270, 7479, 3766, 2698, 1875, 4871, 865, 4580, 750, 2366, 892, 2115, 2410, 2369, 654, 1943, 430, 354, 598, 1206, 235, 106, 409, 1092, 135, 1587, 415, 971, 479, 3407, 72, 312, 144, 218, 241};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-6025, 8384, -7311, 5317, 6980, 9496, -6943, -446, 6942, -4519, 7024, 0, 0, 0};
    vector<int> y = {8985, 8461, -7026, 8449, -7152, -5878, -4860, -4704, -9920, -4910, -7924, 0, 0, 0};
    vector<int> r = {2934, 6291, 4677, 2334, 6158, 442, 7885, 1294, 3276, 1032, 528, 1, 2, 3};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {8376, -6013, 8702, 769, 9862, -4029, 5833, 3949, -2134, -2688, -9271, -8197, -9648, 6000, 2253, 8466, 5875, -9580, -8854, -3011, 1836, 1327, 9836, 2461, -4715, 8751, -2777, -1806, -6341, -7154, -49, 5641, -9776, -4296, 1176, -8114, 3786, 9808, -5015, 8524, 5005, 1614, -563, 2214, -4078, 0};
    vector<int> y = {7089, 2082, -5496, 6357, -3236, -4810, -6642, 826, 1544, -5424, -9348, 8539, 9121, 5156, 4433, -8924, -4181, -4982, -2726, -3992, 8065, -2270, 7378, -699, 1047, -3723, 1938, 3676, 3568, -798, 1795, 9435, -4248, 7027, -9370, 434, -2691, 6681, 3061, -3351, 1500, -9077, 285, 1407, 9481, 0};
    vector<int> r = {4507, 3758, 6927, 406, 2817, 2520, 1505, 511, 88, 4057, 2162, 704, 2383, 1204, 1227, 1211, 538, 2052, 148, 1064, 1215, 12, 1536, 374, 1799, 810, 214, 118, 378, 490, 1129, 846, 147, 1227, 104, 938, 408, 445, 66, 1366, 267, 42, 461, 719, 1130, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-4475, -9254, 1113, 7722, -4732, -5191, 4163, 4245, 8801, -6705, -5742, 6417, -847, -7794, -9735, 7312, -6773, -7866, 1438, -9013, 9356, 5234, -3682, -6603, -2016, 6440, 8756, 2512, 9709, -9999, -741, -4328, -8586};
    vector<int> y = {8254, -4298, -7324, 5872, -6851, -4040, 5832, -8380, 8517, -4945, 9441, -4509, 2643, -737, -4437, 7453, 9291, -9528, -3377, 3552, -7843, -3588, -3076, 2742, 7292, -9678, -9002, -9784, 1950, 9829, -2753, -909, 1531};
    vector<int> r = {4374, 1973, 1262, 5716, 944, 1619, 1337, 7849, 416, 17, 1869, 847, 691, 350, 1200, 557, 7349, 362, 680, 1095, 2603, 99, 120, 46, 1043, 474, 1241, 1089, 368, 246, 62, 637, 197};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {9820, 5769, -5100, -3498, -2586, -7961, 1331, -5152, 6043, -3524, 7332, 8833, -8025, -8372, 3720, -5101, 6846, -9605, 1424, -1680, 8454, -5528, 8964, 5390, 9326, -9708, -6443, 4715, -9261, -5071, -1695, 1752, -7308, -9315, -8806, -5270, -7904, 7226};
    vector<int> y = {-1112, 8063, 1936, -1074, 7015, -9761, -9263, 3299, 6325, 9906, -639, -884, 1358, 9798, 7939, 2237, -9006, -3272, -9341, -200, -8419, 8444, 2495, 5287, -9338, 6522, -9753, 8140, 1108, -503, 5945, -2077, 4752, -3405, 8439, -734, -7629, 8719};
    vector<int> r = {5004, 3964, 5017, 9, 186, 4988, 3526, 663, 41, 1797, 553, 917, 135, 1376, 708, 1793, 489, 32, 1192, 340, 147, 290, 20, 772, 1583, 1108, 942, 210, 375, 77, 208, 1309, 295, 977, 11, 745, 233, 2234};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-1041, 7189, -8076, -6131, -1958, 9009, -9053, -5021, 2253, -7925, -5258, 3001, 4345, 7415, -2517, -2107, -3178, -5822, 3675, -8853, 5796, -7199, 8765, 2577, 3038, -9266, -5828, 1426, 1047, 7601, -9017, 8897, 7530, 330, 9123, -4467, -2309, 2522};
    vector<int> y = {-9808, 2991, -5084, 4741, -7576, -242, -4394, 1014, -4238, -6380, -5623, 3364, 683, -6486, 1907, 7386, 2591, -5111, -291, 9597, -6394, 7857, -859, -7352, -9912, 8705, -3676, -2175, 3829, 3034, 610, -9325, -8202, 8204, -8129, 1713, 4502, -9612};
    vector<int> r = {887, 7001, 7070, 1051, 136, 2273, 7, 8, 1038, 5524, 65, 1601, 551, 824, 1219, 856, 73, 2924, 423, 3447, 112, 1023, 1135, 1301, 21, 149, 1425, 583, 334, 130, 247, 484, 3405, 586, 711, 430, 559, 295};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-3204, -7665, 5694, -8087, -9485, -4375, 8038, -2067, -7043, 9293, -3030, -2414, -1014, -4686, 4051, -8686, -8442, 9332, -4306, 5731, -2658, 8393, 3405, 3484, 2156, 3365, -1564, -7685, 1345, -4312, 8628, 8115, -2510, -8605, 3123, 7683};
    vector<int> y = {-9160, 9682, 2176, 9377, 2762, 35, -8106, -7408, -4300, -8363, 5220, -8375, -1078, 2089, 3509, 8974, -2407, -5359, -770, 379, -9168, 3943, -5032, 5989, 9746, -4758, 1150, -2750, -1907, 9916, -414, -7190, -9352, -5867, 843, -9009};
    vector<int> r = {6517, 5715, 5910, 7423, 351, 1599, 1799, 84, 133, 4632, 310, 2838, 939, 225, 1667, 2245, 1265, 806, 548, 1736, 5462, 2495, 22, 396, 449, 998, 1290, 380, 7, 2089, 1253, 460, 593, 165, 755, 748};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {8348, 7657, -8667, 8325, 6060, -7955, -5839, -56, 6980, -4860, 5799, -7628, 329, 856, 2817, 1525, -8780, 8564, 1417, 5657, -2264, -7076, 4837, 9290, -4935, -3988, 5230, 6403, -6354, 9402, -1245, -778, -8063, -6488, -7152, -8743, 8047, -3262, 9940, -9488, -2394, -9610, -1649, -2638, -7531, 9534, -4523, 6884};
    vector<int> y = {479, -1494, 9243, -315, 531, 7271, -6777, 2920, 6232, -9050, 5516, -3083, -5288, -8868, 3367, -5306, 7153, -9123, 8175, -3835, -3384, -7360, -9777, 5992, -7286, 3103, -4192, 3689, -6874, -112, -6823, 647, 6564, -4891, -4993, -2016, -9366, 4464, -9945, 7140, 1295, 9232, -398, 895, -5102, 2829, 2110, -3255};
    vector<int> r = {7115, 132, 8892, 592, 294, 2730, 3766, 1108, 977, 8759, 275, 338, 2042, 639, 831, 141, 4442, 432, 876, 2029, 302, 657, 531, 1255, 955, 38, 1352, 345, 4515, 336, 124, 268, 119, 5, 438, 79, 1310, 177, 259, 6482, 732, 136, 128, 1321, 1059, 503, 53, 226};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-9012, 8882, -971, 3199, 8223, -8121, -2525, -1580, 8821, 8564, -3491, 5252, -8835, -1000, -3752, 8021, 7966, 1276, -1473, -3441, 0, 0, 0, 0, 0, 0};
    vector<int> y = {5249, 1482, -9181, -5826, -9374, 6861, 2228, -8182, 4296, -4063, 5568, -7605, -9964, -2884, -895, -8247, 2195, 8248, -89, -8717, 0, 0, 0, 0, 0, 0};
    vector<int> r = {6402, 7527, 1603, 617, 3096, 1716, 509, 3566, 3986, 991, 645, 171, 3681, 1333, 122, 1220, 817, 2626, 1404, 522, 1, 2, 3, 4, 5, 6};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {118, -8801, -1285, -2808, 6285, 2098, -9741, 8606, -3963, -8259, 5743, 4342, 7828, 9026, 8300, 6756, -5857, -7646, -233, 460, -3892, -5682, -9723, -497, 3038, -8432, -5733, -5742, -3347, 7386, -3260, 2474, 3042, 3660, -2319, 5889, -9115, 6917, 4501, -5271, -3180, -6532, -9426};
    vector<int> y = {9209, 8062, 7485, -6052, -699, 2846, -484, 6567, 7839, 8182, -1012, 5565, -7660, 4121, -8446, 9113, 471, -9622, 7443, -4361, -6590, -1092, -1760, 2721, -4760, -6678, -943, 4743, -2694, -7620, -4523, -5627, -7532, -9689, 6648, -2073, -7701, -1517, 5266, -6537, 2862, 3560, -3652};
    vector<int> r = {530, 2572, 3700, 4173, 3663, 1332, 1088, 577, 228, 1679, 2535, 192, 1275, 1845, 3108, 652, 379, 1419, 483, 414, 2891, 9, 2903, 993, 1522, 413, 974, 10, 531, 565, 288, 6, 558, 214, 304, 1407, 66, 103, 59, 477, 970, 1654, 412};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {2759, -3825, -8079, 9434, -5724, 9823, -6920, -1613, -4817, 9659, 35, -7919, -619, 9132, 3802, 1079, 9045, 5462, -4608, 2996, -8471, 6163, -2024, 3984, -6532, 1650, 48, -5301, 3844, 1454, 9617, -8598, 5741, -794, -8051, -488, -7947, 7968, 8739, 4684, -9325, 5248, 5913, 94, 470, -9597, 4974, -6713};
    vector<int> y = {-3231, 1074, -7647, -7840, 562, 6227, -6851, -3061, -5729, 8429, 8645, -8046, 5445, 8511, 9855, 6913, 6597, -929, 9737, -8485, -593, 8174, -1486, -9041, 8000, -3084, -6529, -8375, 5852, 2202, -4043, 5695, 1281, -1661, 1887, 758, -1412, -6072, -1423, 1824, 1614, -9867, -4532, -9627, -3133, 2024, -785, -3476};
    vector<int> r = {170, 3023, 5282, 1293, 367, 3842, 2895, 107, 22, 7436, 687, 199, 642, 6503, 498, 293, 2450, 2068, 4007, 146, 33, 231, 93, 2819, 1224, 2230, 1171, 218, 348, 1869, 1740, 181, 102, 565, 238, 226, 657, 416, 460, 335, 467, 1144, 25, 623, 372, 2656, 758, 399};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> r = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {5202, 5699, -7433, 5068, -9483, -684, -6593, 5108, -7813, 6823, 3267, -8222, -8547, 2878, 2413, 8557, 5149, 5073, -8638, -6108, 8097};
    vector<int> y = {8728, -7407, 4338, -8414, 7652, -3705, -984, 5976, -9180, -9119, 9301, 2398, 7915, 6205, 7665, 717, -9884, 11, -8579, -6903, -746};
    vector<int> r = {4196, 9303, 7152, 5875, 2943, 788, 502, 416, 1958, 3174, 182, 1256, 1147, 444, 979, 65, 1040, 1233, 438, 175, 1140};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {0, 3, 6, 9, 12, -4747, -4777};
    vector<int> y = {-5858, -5858, -5858, -5858, -5858, 777, 777};
    vector<int> r = {58, 1, 1, 1, 1, 44, 8};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {0};
    vector<int> y = {0};
    vector<int> r = {1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {1};
    vector<int> y = {1};
    vector<int> r = {1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    vector<int> r = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {0, 0, 0, 110, 120, 130};
    vector<int> y = {0, 0, 0, 0, 0, 0};
    vector<int> r = {1, 2, 3, 5, 25, 5};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 0};
    vector<int> r = {1, 2};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {0, 5, 10};
    vector<int> y = {0, 0, 0};
    vector<int> r = {100, 1, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
    vector<int> y = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
    vector<int> r = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {-617, 6915, -4614, -1310, -828, -4218, -4877, -6942, -6474, 9956, 9170, -7695, 6327, 9932, -311, 2871, 1432, 8082, 197, 4340, -5401, 2460, 6127, -9951, 3826, -5766, 9080, -3811, -686, 6682, 3740, 4098, 9207, -1007, -3283, 5775, 4427, 181, -8108, 1783, 1298, -7675, 5482, -700, 3990, -3576, -8481, 2700, -6213, -7411};
    vector<int> y = {886, -2207, -9508, -9941, 5736, -8470, 4067, 3069, 6091, -8127, -3004, -9075, -9664, 5060, -1556, -4268, 2551, -1458, 9507, 5422, 7721, 3414, -9496, 964, 4232, 690, 9631, 2274, 4471, 9390, -4946, 5325, 9759, -5082, -5970, -2912, -5766, 7487, 7525, 2350, 8184, -9003, 399, -3494, 323, 7719, -3258, -5955, -5101, -8614};
    vector<int> r = {964, 764, 6307, 2274, 8712, 738, 11, 769, 1422, 645, 833, 852, 2430, 846, 1374, 846, 882, 522, 3439, 2223, 48, 85, 21, 1119, 297, 302, 29, 1254, 1006, 162, 2412, 1625, 760, 262, 754, 130, 272, 354, 283, 1717, 856, 1511, 43, 169, 1091, 631, 320, 57, 736, 2336};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {0, 0, 10, 10, 20, 20, 30, 30};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> r = {1, 2, 1, 2, 1, 2, 1, 2};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {2, 4, 6, 6, 11, 100, 100, 100};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> r = {1, 4, 1, 7, 1, 1, 2, 3};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {0, 5, -5};
    vector<int> r = {100, 1, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {0, 0, 0, 0, 50, 50, 50};
    vector<int> y = {0, 4, 4, -2, 0, 0, 0};
    vector<int> r = {7, 2, 1, 1, 5, 4, 3};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {0, 10, 10, 20, 20, 20, -10, -10, -20, -20, -20, -1000};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1000};
    vector<int> r = {100, 1, 2, 1, 2, 3, 1, 2, 1, 2, 3, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {9426, -6964, 9484, 3931, -4835, -2578, -4660, -3473, -4814, 6794, 2346, 1225, 6421, -9644, -4528, 216, -6047, 4425, 2553, 2634, -501, -4050, 9540, 9747, 1638, 296, -9488, -9708, 9242, 8502, 2949, -7638, 9093, -6747, -8698, -8608, -6619, -922, -5237, 2111, 5326, -6196, 720, -7225, 5777, 6790, -4753, 8355, 2944, -3232};
    vector<int> y = {-3052, -1494, -3683, 9017, 9156, -8829, 8925, -6434, 8499, 5568, 4683, 495, -1028, 952, 3446, -7661, 635, 1472, -8803, 4316, -2866, -1307, 8721, -5146, 3171, 8986, 6956, 7242, 9690, 9277, -3210, -6572, 555, 4319, -4096, -7931, 1556, -4240, -4494, -9871, -1216, -5128, 6174, -5223, -5098, 3287, 5500, 1614, 4528, 540};
    vector<int> r = {1081, 4736, 5043, 1230, 1215, 1026, 2277, 259, 3803, 674, 650, 1698, 266, 862, 708, 125, 208, 662, 2235, 2274, 699, 1298, 200, 378, 4444, 664, 1111, 555, 1360, 2579, 876, 61, 780, 366, 370, 1088, 588, 693, 91, 3623, 187, 367, 354, 214, 582, 521, 261, 95, 1282, 293};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {0, 100, 200};
    vector<int> r = {1, 1000, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {0, 0, 100, 100, 200, 200};
    vector<int> y = {0, 0, 0, 0, 0, 0};
    vector<int> r = {1, 2, 1, 2, 1, 2};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {0, 3, 2, 1000};
    vector<int> y = {0, 0, 0, 1000};
    vector<int> r = {1, 1, 10, 1};
    CirclesGame* pObj = new CirclesGame();
    clock_t start = clock();
    string result = pObj->whoCanWin(x, y, r);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22781264&rd=15183&pm=12170
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iterator>
#include <functional>
#include <bitset>
#include <ctime>
#define pb push_back
#define mp make_pair      
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
 
class CirclesGame {
 
vector<int> g[55];
bool root[55];
int grund[55];
 
void dfs2(int v,int x,vector<int>& u){
  for (int i = 0; i < (int)g[v].size(); i++)
    x ^= grund[g[v][i]];
  u.pb(x);
  for (int i = 0; i < (int)g[v].size(); i++)
    dfs2(g[v][i],x ^ grund[g[v][i]],u);
}
 
int dfs(int v){
  for (int i = 0; i < (int)g[v].size(); i++)
    dfs(g[v][i]);
  vector<int> used;
  dfs2(v,0,used);
  sort(used.begin(),used.end());
  used.erase(unique(used.begin(),used.end()),used.end());
  used.pb(1<<30);
  for (int i = 0; ; i++)
    if (used[i] != i)
      return grund[v] = i;
  assert(false);
}
 
public:
    string whoCanWin(vector <int> x, vector <int> y, vector <int> r) {
      int n = x.size();
        for (int i = 0; i < n; i++){
          int best = -1;
          for (int j = 0; j < n; j++)
            if ((x[i] - x[j]) * 1LL*(x[i] - x[j]) + (y[i] - y[j]) *1LL* (y[i] - y[j]) < (r[i] - r[j]) * 1LL* (r[i] - r[j]) && r[j] > r[i])
              if (best == -1 || r[j] < r[best])
                best = j;
          if (best != -1)
            g[best].pb(i), root[i] = false;
          else
            root[i] = true;            
        }
        
        int res = 0;
        for (int i = 0; i < n; i++)
          if (root[i])
            res ^= dfs(i);
            
        if (res == 0)
          return "Bob";
        return "Alice";
    }
};
 
 
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/