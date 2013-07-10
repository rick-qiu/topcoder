/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8177
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

class PickGuitars {
public:
    int maxValue(vector<int> guitarValues);
};

int PickGuitars::maxValue(vector<int> guitarValues) {
    int ret;
    return ret;
}


int test0() {
    vector<int> guitarValues = {1, 5, 3, 4, 5};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> guitarValues = {4, 8, 4};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> guitarValues = {2, 1, 4, 1, 2, 1, 8, 1};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> guitarValues = {6684, 4697, 8776, 5349, 4365, 6794, 2921, 282, 4526, 198, 4044, 7022, 1003, 4093, 2885, 4295, 6109, 3523, 8622, 4917, 1765, 429, 4561, 5981, 7356};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 58386;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> guitarValues = {1555, 9361, 97};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9458;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> guitarValues = {7206, 5230, 3296, 5544, 9900, 4002, 2829, 5501, 8105, 7553, 2414, 5392, 6961, 8889, 3778, 7650, 6201, 506, 8739, 4279, 5693, 5640, 6359, 633, 7474, 3298, 9837, 7079, 6072, 7521};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 90122;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> guitarValues = {9177, 2111, 3687, 1373, 4543, 7705, 9805, 4658, 9875, 6018, 8763, 1401, 4741, 1488, 8252, 658, 9714, 1690, 8716, 61, 5152, 6586, 6072, 2774};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 66037;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> guitarValues = {5998, 5200, 2819, 2638, 1534, 2211, 5960, 8964, 4925, 8386, 7948, 1029, 739, 6321, 1840, 9690, 7786, 9308, 1385};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 50072;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> guitarValues = {181, 8260, 7986, 698, 5979, 6606, 4651, 9734, 8597, 2477, 1512, 1317, 3799, 9264, 3977, 9322, 2938, 131, 6407, 4621, 1359, 9451, 1316, 7405, 9385, 4294, 6516, 4148, 2154, 2051, 401, 8517, 3722, 6100, 8586, 1406, 310, 7, 3510, 9107, 7347, 2172, 2291};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 102879;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> guitarValues = {5053, 7061};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7061;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> guitarValues = {722, 7707, 6204, 6647, 5888, 2442, 1999, 6981, 8608, 4462, 20, 4735, 1657, 6897, 1003, 6197, 7962, 5146, 1993, 1147, 3427, 7574, 7211, 1258, 2554, 6630, 3148, 9056, 1232, 7115, 9087, 4911, 2953, 1172, 3823, 6351};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 86165;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> guitarValues = {2814, 1697, 6105, 4072, 8333, 6214, 2717, 2103, 2739, 7505, 305, 4278, 6571, 688, 2107, 2042, 1857, 5775, 5833, 774, 775, 6189, 7491};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 47855;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> guitarValues = {5684, 2197, 4394, 8485, 4544, 7593, 7322, 7993, 1516, 2819, 6452, 2188, 8502, 5381, 5610, 1627, 9770, 8908, 4611, 4088, 8426, 5459, 40};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 64949;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> guitarValues = {477, 1829, 687, 1592, 9490, 9488, 5024, 3794, 2466};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 18809;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> guitarValues = {4610, 2489, 5401, 8577, 9125, 7044, 5280, 8801, 5837, 7270, 3722, 5687, 8751, 9900, 6358, 9759, 433, 815, 1179, 4593, 2539, 3519, 8528, 1880, 9486, 8175, 5224, 5771, 3340, 7059, 5346, 2969, 7022, 1666, 659, 2038, 7227, 3933, 4322, 5301, 8074, 9015, 2597, 9321, 1426, 9901, 569, 5477};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 132442;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> guitarValues = {4776, 9564};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9564;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> guitarValues = {5601, 6489, 5921};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12090;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> guitarValues = {3305, 9744, 3013, 1914, 3392, 5705, 1051, 8017, 8318, 5592, 2055, 7685, 3628, 4535, 632, 5751, 1422, 4470, 4689, 3374, 3130, 188, 4081, 8538, 962, 5765, 9316, 655, 5513, 9570, 6923, 245, 324, 4784, 2841, 1061};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 79393;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> guitarValues = {8966, 313, 1282, 5734, 553, 4125, 2416, 9996, 2404, 8764, 9419, 9534, 2490, 4113, 3199, 2325};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 41661;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> guitarValues = {8600, 7156, 2095, 8143, 6392, 2689, 3235, 7491, 2198, 4731, 8028, 6761, 4486, 7244, 6395, 9757, 5542, 385, 4872, 5883, 4680, 5562, 3304, 5422, 9129, 1961, 4902, 703, 5651, 8287, 7701, 4909, 4776, 6464, 3237, 8426, 8701, 9790, 1285, 8577, 3351, 6673, 7903, 2334, 4879, 2502, 7668, 3200, 983};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 136260;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> guitarValues = {27, 2800, 7787, 6633, 3964, 4951, 3786, 8478, 4805, 4976, 3348, 631, 1938, 9845, 3622, 2199, 6430, 5373, 338, 239, 3126, 5139, 9966, 9074, 2635, 2065, 7958, 6502, 4838, 7650, 5392, 8754, 7008};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 83957;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> guitarValues = {9247, 5559, 6459, 7482, 4729, 9078, 9758, 1372, 1618, 5599, 7961, 8119, 424, 6877, 81, 2571, 8304, 8803, 5048, 6384, 9148, 8656, 5803, 3636, 7014, 8655, 7834, 8220, 7193, 2727};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 96394;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> guitarValues = {6235, 4573, 5438, 2481, 8786, 4684, 6926, 4455, 617, 8848, 5300, 7703, 7826, 1163, 8482, 5525, 3527, 1744, 721, 553, 3810, 7566, 5167, 4082, 7558, 9555, 2737, 8408, 2806, 2151, 9312, 1678, 9164, 9469, 7776, 6567, 564, 397, 8803, 1224, 5063, 3501, 4458};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 111394;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> guitarValues = {8794, 1427, 1641, 6110, 9255, 3666, 8203, 7243, 9109, 5989, 3187, 1933, 5387, 4651, 4008, 2649, 611, 3533};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 46832;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> guitarValues = {8952, 1678, 2807, 235, 4227, 9597, 8423, 8165, 5964, 8147, 2720, 8775, 1175, 2360, 7830, 1310, 8760, 8362, 5176, 9423, 6200, 4565, 6333, 6436, 8810, 436, 2793, 8831, 5987, 3175, 4776, 132, 362, 4495, 2109, 6874, 2587, 9398, 3421};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 103482;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> guitarValues = {6601, 6359, 3430, 5803, 7644};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 17433;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> guitarValues = {1925, 8956, 8048, 9636, 2205, 12, 3874, 5956, 1196, 4577, 8847, 985, 8241, 6790, 709, 7895, 4655, 9468, 9118};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 55284;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> guitarValues = {1522, 895, 3519, 4362, 8942, 2368, 4032, 3702, 5943, 8314, 8335, 6331, 6622, 1235, 2775, 7137, 4737, 7054, 6469, 7956, 5906, 2528, 3063, 5999, 3885, 5312, 5964, 4053, 4944, 8984};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 78907;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> guitarValues = {7318, 2297, 9887, 9277, 6414, 723, 9993, 5570, 8653, 61, 169, 9113, 9932, 5105, 1177, 5033, 7780, 8536, 5578, 6822, 2030, 3056, 2264, 4055, 3337, 8591, 6784, 275, 1344, 589, 4870, 6562, 3678, 5771, 3569, 630, 4162, 2474, 4286, 895, 3633, 3681, 4685, 9910, 9576, 2244, 1865};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 115031;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> guitarValues = {1428, 9378, 7555, 3794, 6840, 9546, 7124, 3197, 468, 7060};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 31469;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> guitarValues = {6548, 895, 2366, 1149, 192, 3226, 8841, 4036, 7501, 4546, 4172, 5416, 500, 6960, 3895, 5506, 985, 8274, 8515, 2620, 8935, 3476, 9777, 3390, 4152, 1144, 6128, 8623, 337, 7679, 2179, 3139, 9583, 8795, 2054, 7109, 9197, 2128, 1943, 8500, 2096, 6990};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 104510;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> guitarValues = {1065, 6638, 7320, 597, 9973, 1679, 1700, 6416, 7679, 7896, 9941, 8213, 5915, 6953, 9194};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 49430;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> guitarValues = {5751, 5993, 3794, 9873, 6669, 6082, 2121, 97, 7231, 9744, 649, 9535, 4540, 4545, 52, 5897, 6986, 6767, 727, 2585, 4989, 1682, 5463, 9378, 7379, 4666, 5050, 864, 6886, 430, 8639, 6563, 6785, 6054, 4382, 6463, 2181, 7159, 7460, 5771, 3629, 5558, 1998, 3071, 7838, 1032, 570, 6828};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 122723;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> guitarValues = {9502, 9985};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9985;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> guitarValues = {5395, 4788, 4885, 3189, 1838, 1404, 1325, 5830, 5977, 1377, 923, 2031, 3594, 8971, 2472, 8516, 1150, 3352, 1936, 9850, 970, 744, 3660, 6480, 2431, 4431, 5321, 3598, 3838, 3059, 6651, 6250};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 66789;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> guitarValues = {5154, 7275, 9902, 7135, 493, 2175, 9864, 2272, 7034, 4189, 7407, 8445, 5462, 1767, 5198, 5227, 2129, 6738, 9774, 3917, 5111, 1238, 4147, 3448, 7442};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 69995;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> guitarValues = {9380, 6630, 6203, 5499, 9975, 9112, 6062, 6705, 4257, 3995, 1123, 6981, 7603, 8259, 9469, 8675, 3301, 3310, 701, 2354, 3131, 858, 7902, 3140, 7310, 7052, 1993};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 78145;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> guitarValues = {1389, 2362, 8225, 1691, 5860, 2029, 1695, 1484, 2788, 2094, 1181, 1285, 2593, 8970, 8352, 8686, 3288, 6327, 2466, 4619, 3922, 1674, 9022, 8918, 3744};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 55124;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> guitarValues = {4533, 1030, 8724, 7314, 8570, 7661, 7434, 4726, 8534, 6383, 9027, 1984, 2241, 9202, 7061, 4043, 8319, 2937, 4267, 8115, 4688, 3881, 5005, 7759, 909, 2655, 4113, 2841, 1114, 1458, 3126, 1745, 347};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 84379;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> guitarValues = {7442, 8926, 8693, 7835, 902, 424, 4354, 2255, 7465, 2354, 8936, 4854, 3190, 2504, 5694, 9676, 5568, 3179, 4156, 5392, 1401, 4223, 2666, 6716, 8895, 8737, 3716, 8494, 4382, 436, 5638, 2549, 9221, 828, 8206, 1759, 7780, 6410, 9031, 8008, 3142, 963, 2214, 710, 3200, 5673, 681, 376, 6134, 279};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 121017;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> guitarValues = {7372, 923, 1772, 2974, 9434, 5507, 3223, 1819, 2784, 2483, 4286, 2682, 750, 9810, 6611, 2764, 685, 1902, 1956, 8914, 4680, 4704, 8158, 5294, 2071, 6850, 8261, 1084, 2055, 7868, 1085, 8113, 2885, 3537, 7331, 1324, 40, 7948, 3897, 3358, 9539, 1624, 500, 8248, 4135};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 100124;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> guitarValues = {6945, 8161, 9511, 7928, 6393, 1484, 4795, 3263, 9866, 128, 6730, 231, 9870, 8886, 9643, 6353, 6502, 9895, 3995, 4965, 7699, 845, 4764, 4018, 6402, 6412, 7128};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 85134;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> guitarValues = {1290, 8601, 1039, 3881, 4513, 3148, 8115, 6821, 9357, 5989, 4014, 690, 3148, 5849, 6941, 6877, 5855, 6516, 8263, 4770, 2848, 5037, 4357, 3409, 1038, 190};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 63382;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> guitarValues = {4856, 1234, 8904, 300, 7527, 5998, 7019, 2065, 2829, 1443, 4760, 5197, 3829, 3535, 6582, 5288, 405, 4259, 9714, 3873, 1363, 697, 5602, 8003, 312, 542, 3740, 4298, 8780, 865, 7921, 6390, 6986, 3047, 790, 5890, 9966, 5713, 3800, 6104, 4347, 9237, 6131, 4612, 8958, 9903, 7955, 5503, 670};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 122292;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> guitarValues = {559, 4581, 5411, 3873, 8238, 1190, 3099, 5280, 4657, 8411, 4425, 2555, 9392, 9354, 6854, 2458, 8767, 1035, 7005, 390, 8772, 8866, 6648, 1204, 6824, 4213, 9956, 5477, 3471, 4635, 376, 6791, 4736, 1463, 6493, 8222, 739, 2172, 7601, 1718, 6464, 5641, 1361, 2326, 6134, 6862, 7871};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 119794;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> guitarValues = {3462, 3887, 6748};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10210;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> guitarValues = {6301, 3902, 6431, 7395, 5648, 7183, 7788, 3553, 5800, 7399, 7339, 4193, 4572, 4229, 8933, 817, 9900, 9585, 6542, 9655, 1934, 1872, 4997, 8736, 7741, 3648, 9953, 4714, 9132, 6826, 3142, 9000, 2803, 6130, 4056, 2028, 5982, 5879, 4616, 6452, 58, 7398, 9086};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 129911;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> guitarValues = {9305, 4355, 7514, 6332, 1760, 1135, 7329, 2714, 4509, 5018, 4367, 6682, 6257, 6347, 1564, 9881, 5862, 2170, 830, 6250, 6753, 7861, 1201, 3426, 3599, 8166};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 69466;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> guitarValues = {765, 9433, 3777, 6150, 9783, 8540, 2056, 3578, 2914, 2858, 869, 958, 9524, 7371, 2604, 3856, 3885, 3052, 1400, 4253, 8403, 4262};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 54222;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> guitarValues = {2504, 6833, 1196};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8029;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> guitarValues = {1036, 6443, 6985, 6256, 5261, 5097, 3330, 368, 7860, 9138, 8193, 5742, 3630, 547, 3996, 8954, 3436, 7400, 5016, 1862, 7429, 9894, 8219, 5445, 9699, 5324, 2663, 833, 8760, 9325, 8754, 9690, 882, 7400, 163, 8046, 6192};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 107215;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> guitarValues = {7997, 7345, 629};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8626;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> guitarValues = {8934, 3982, 446, 1927, 6495, 3949, 9693, 8526, 7325, 2314, 5362, 7570, 2449, 8228, 9251, 4991, 6816, 4907, 450, 6383, 9137, 601, 7385, 1517, 8016, 955, 3802, 2268, 9664, 5372, 8751, 9966, 7142, 9970, 6668, 5828, 958, 7583, 2, 8638, 6138, 862, 3466, 7091, 1420, 7996, 5968};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 131379;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> guitarValues = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 250000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> guitarValues = {9913, 9841, 9101, 9166, 9431, 9520, 9136, 9558, 9233, 9047, 9961, 9860, 9869, 9155, 9068, 9535, 9940, 9978, 9917, 9251, 9486, 9488, 9398, 9831, 9273, 9415, 9320, 9550, 9890, 9132, 9900, 9429, 9296, 9060, 9141, 9774, 9519, 9618, 9445, 9935, 9516, 9807, 9209, 9895, 9848, 9130, 9267, 9061, 9686, 9641};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 238153;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> guitarValues = {9843, 9412, 9496, 9458, 9731, 9953, 9952, 9478, 9796, 9906, 9380, 9239, 9004, 9773, 9940, 9832, 9065, 9172, 9857, 9522, 9129, 9648, 9376, 9431, 9984, 9649, 9725, 9938, 9239, 9888, 9677, 9318, 9793, 9995, 9891, 9797, 9482, 9362, 9182, 9612, 9427, 9102, 9273, 9667, 9035, 9302, 9400, 9065, 9005, 9135};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 238783;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> guitarValues = {1, 5, 3, 4, 5};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> guitarValues = {2, 1, 4, 1, 2, 1, 8, 1};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> guitarValues = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 10000, 9000, 10000};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 19126;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> guitarValues = {51, 477, 344, 10, 179, 234, 488, 368, 472, 474, 215, 155, 291, 337, 471, 501, 505, 452, 337, 446, 401, 114, 412, 163, 302, 392, 431, 226, 228, 405, 457, 236, 281, 48, 379, 422, 177, 309, 45, 404, 213, 321, 332, 343, 183};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7172;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> guitarValues = {12, 5, 10, 5, 7};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> guitarValues = {9, 5, 6, 4};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> guitarValues = {3, 3, 3, 4, 3, 4, 3, 3};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> guitarValues = {2, 3, 2, 8, 2, 3, 2, 4};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> guitarValues = {1, 5, 3, 4, 5, 6465, 4654, 87, 94, 654, 1, 34, 654, 65, 6465, 13, 28, 749, 435, 16, 4, 65, 98, 1, 321};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 13029;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> guitarValues = {9, 2, 3, 2, 9};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> guitarValues = {1000, 10000, 10000, 10000, 10000, 10000};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 30000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> guitarValues = {6, 3, 4, 3, 5, 3, 4, 3};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> guitarValues = {1, 432, 432, 234, 23, 3, 4, 5, 546, 67, 6, 897, 56, 34, 45, 4354, 3456, 4353, 2456, 9787, 6879, 6785, 757, 567, 4564, 6545, 6564, 564, 7865, 876, 454, 5643, 5647, 456, 456, 36, 3, 4785, 65, 645, 345, 586, 7565, 6457, 8567, 4567, 4568, 6457, 4657};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 68419;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> guitarValues = {6, 7, 5, 7, 4};
    PickGuitars* pObj = new PickGuitars();
    clock_t start = clock();
    int result = pObj->maxValue(guitarValues);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22695787&rd=10781&pm=8177
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
vector<string> split( const string& s, const string& delim =" " ) { 
    vector<string> res; 
    string t; 
    for ( int i = 0 ; i != s.size() ; i++ ) { 
        if ( delim.find( s[i] ) != string::npos ) { 
            if ( !t.empty() ) { 
                res.push_back( t ); 
                t = ""; 
            } 
        } else { 
            t += s[i]; 
        } 
    } 
    if ( !t.empty() ) { 
        res.push_back(t); 
    } 
    return res; 
} 
 
vector<int> splitInt( const string& s, const string& delim =" " ) { 
    vector<string> tok = split( s, delim ); 
    vector<int> res; 
    for ( int i = 0 ; i != tok.size(); i++ ) 
        res.push_back( atoi( tok[i].c_str() ) ); 
    return res; 
} 
 
int dynamic[51][51]; 
int sumcalc[51][51]; 
int N; 
vector <int> data; 
 
int sum(int st, int ed) 
{ 
  if (sumcalc[st][ed] != -1) 
    return sumcalc[st][ed]; 
  if (st == ed) 
    return data[st]; 
  return data[st] + sum((st + 1) % N, ed); 
} 
 
int memfunc(int st, int ed) 
{ 
  if (dynamic[st][ed] != -1) 
    return dynamic[st][ed]; 
   
  int i; 
  int left, right; 
  for (i = st;i != (ed + 1) % N;i = (i + 1) % N) 
  { 
    if (i == st) 
      left = 0; 
    else 
      left = sum(st, (i + N - 1) % N) - memfunc(st, (i + N - 1) % N); 
 
    if (i == ed) 
      right = 0; 
    else 
      right = sum((i + 1) % N, ed) - memfunc((i + 1) % N, ed); 
 
    if (dynamic[st][ed] < left + right + data[i]) 
      dynamic[st][ed] = left + right + data[i]; 
  } 
  return dynamic[st][ed]; 
} 
 
class PickGuitars { 
public: 
    int maxValue(vector <int> guitarValues) { 
    memset(dynamic, 0xFF, sizeof(dynamic)); 
    memset(sumcalc, 0xFF, sizeof(sumcalc)); 
    data.clear(); 
    int i; 
    for (i = 0;i < guitarValues.size();i++) 
      data.push_back(guitarValues[i]); 
    N = guitarValues.size(); 
    int ans = -1; 
    int val; 
    for (i = 0;i < N;i++) 
    { 
      val = data[i] + sum((i + 1) % N, (i + N - 1) % N) - memfunc((i + 1) % N, (i + N - 1) % N); 
      if (ans < val) 
        ans = val; 
    } 
        return ans; 
    } 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/