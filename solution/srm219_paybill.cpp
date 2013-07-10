/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3114
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

class PayBill {
public:
    vector<int> whoPaid(vector<int> meals, int totalMoney);
};

vector<int> PayBill::whoPaid(vector<int> meals, int totalMoney) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> meals = {1000, 1200, 1300};
    int totalMoney = 2500;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> meals = {100, 200, 350};
    int totalMoney = 300;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> meals = {150, 200, 350, 400};
    int totalMoney = 900;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> meals = {6584, 6733, 6018, 5840, 2723, 4902, 4260, 5375, 6745, 1234, 3000, 8222, 2472, 4348, 1716, 9995, 415, 1234, 2345, 5679};
    int totalMoney = 70630;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 8, 9, 11, 13, 14, 15, 16, 17, 19};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> meals = {3, 5, 6, 7};
    int totalMoney = 10;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> meals = {4149, 4209, 9324, 9970, 4436, 8704, 2278, 4295, 4403, 2478, 2433, 1899, 9885, 3650, 8559, 7095};
    int totalMoney = 43891;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 7, 9, 12, 14};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> meals = {804, 5324, 6497, 5651, 9540, 5699, 8118, 5049, 1066, 4465, 4295, 1600, 8672, 2371, 903, 3304, 1482, 2677, 6285, 752, 851};
    int totalMoney = 75923;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> meals = {2353, 8959, 748, 7432, 604, 3292, 2996, 7447, 2776, 2617, 9995, 4030, 2787, 5808, 3246, 8305, 384, 4251, 6717, 3988, 7548, 2623, 4507, 4410, 7407, 2169, 996, 2056, 5634, 6494, 3503, 590, 4360, 9832, 7445, 9391, 8573, 7837, 3989, 582, 5035, 859, 212, 8558, 3676, 9723};
    int totalMoney = 212836;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> meals = {6468, 5676, 3410, 1007, 5192, 3588, 9921, 3234, 5729, 2820, 2199, 8981, 3245, 8496, 2993, 5625, 8737, 8253, 7524};
    int totalMoney = 79965;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 9, 11, 12, 13, 14, 15, 17, 18};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> meals = {3016, 1139, 1075, 7723, 283, 9468, 8198, 2519, 9904, 1083, 4414, 3202, 2369, 2647, 5348, 6014, 9578, 6578, 9375, 8964, 8131, 1204, 7142, 3235, 5108, 3413, 3603, 7088, 6344, 3817, 2550, 2272};
    int totalMoney = 8497;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 11, 21};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> meals = {3644, 2929, 5937, 8694, 1947, 6997, 9300, 4399, 9951, 124, 999, 8574, 2115, 2064, 2388, 5279, 1887, 5591, 5770, 5729, 1243, 7905, 179, 955, 2716, 4534, 9652, 6958, 3927, 5739, 4025};
    int totalMoney = 135013;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15, 17, 18, 19, 21, 22, 24, 25, 26, 27, 28, 29, 30};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> meals = {5431, 2201, 8596, 6165, 2563, 7936, 2494, 3656, 5045, 8126, 1508, 368, 6152, 3578, 1336, 4830, 3422, 2299, 6086, 347, 69, 5271, 931, 7027, 8885, 4741, 7260, 6321, 8652, 4992, 346, 8045, 3043, 5634};
    int totalMoney = 3577;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 19, 22};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> meals = {2027, 7376, 679, 9589, 5781, 316, 1757, 9170, 1093, 4713, 62, 2268, 269, 4278, 2589, 3515, 2537, 1948, 8653, 599, 7957, 8171, 5036, 8796, 3824, 1685, 3647, 8004, 3577, 2801, 1680, 2268, 8202, 9181, 4267, 1814, 142, 4128, 9635, 7584, 9698, 7354, 6767, 8262, 3944, 8271, 5549, 9810, 8123, 1773};
    int totalMoney = 2026;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 12};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> meals = {9560, 6506, 597, 415, 4067, 5665, 7585, 8551, 4846, 263, 5486, 2275, 3902, 4915, 8570, 4393, 5940, 6126, 5457, 4672, 4781, 3064, 6767, 6877, 2261, 843, 5279, 8295, 9639, 6306, 8587, 1772, 1508, 6309, 4255, 240, 2193, 8495, 7474, 3749, 4663, 4582, 1219, 9004, 1938};
    int totalMoney = 6642;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9, 12, 25, 42};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> meals = {1388, 990, 2874, 9531, 9497, 9152, 3405, 5372, 2174, 3030, 8551, 2092, 8033, 9897, 7111, 1425, 7499, 1612, 4141, 6325, 7331, 1014, 1738, 8625, 7660, 840, 2322, 9189, 1517, 5122, 4417, 573, 6862, 3101, 932, 2174, 1123, 5627, 9939, 7896, 8215, 4066, 7963, 6299, 8086, 1712, 5752, 3258, 8736};
    int totalMoney = 4704;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 25};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> meals = {7117, 754, 3344, 6955, 6350, 4347, 1189, 46, 9711, 8875, 6268, 1311, 8896, 4878, 89, 6863, 3695, 8608, 7015, 4231, 9651, 9063, 3181, 5638, 8214, 7516, 7893, 3789, 9400, 9546, 7540, 145, 6946, 9569, 1994, 5711, 5963, 7873, 3522, 4314, 3098, 143, 8188, 8382, 9185, 9498, 9764};
    int totalMoney = 6507;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 22, 34, 41};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> meals = {1020, 6131, 7841, 5949, 8782, 8187, 8140, 8149, 5387, 1256, 2785, 5165, 3992, 8989, 1442, 6122, 2841, 9777, 9566, 2775, 2299, 5653, 1690, 9660, 4382, 3695, 7194, 6753, 4784, 9940, 8597, 4627, 7416, 5786, 2333, 2104, 1433, 6896, 2032, 6417, 760, 4610, 4304, 5864, 6134, 9845, 7018, 4960};
    int totalMoney = 4494;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 14, 38};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> meals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int totalMoney = 50;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> meals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90};
    int totalMoney = 2250;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> meals = {6584, 6733, 6018, 5840, 2723, 4902, 4260, 5375, 6745, 1234, 3000, 8222, 2472, 4348, 1716, 9995, 415, 1234, 2345, 5679};
    int totalMoney = 70630;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 8, 9, 11, 13, 14, 15, 16, 17, 19};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> meals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    int totalMoney = 100;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> meals = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 9999};
    int totalMoney = 9999;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> meals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int totalMoney = 50;
    PayBill* pObj = new PayBill();
    clock_t start = clock();
    vector<int> result = pObj->whoPaid(meals, totalMoney);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10658366&rd=5865&pm=3114
********************************************************************************
// WARNING: HUGE USELESS TEMPLATE, GO TO: "TEMPLATE END" 
// Winners dont use mouse (?) 
 
#include <algorithm> 
#include <cctype> 
#include <climits> 
#include <cmath> 
#include <cstdarg>  
#include <cstdio> 
#include <cstdlib> 
#include <cstring>  
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator>  
#include <list>  
#include <map> 
#include <numeric>  
#include <queue> 
#include <regex.h> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
// comodidad en tipos simples 
typedef long long ll; 
typedef unsigned long long ull; 
typedef long double ld;  
typedef double db;  
typedef pair<int,int> pii; 
 
// comodidad en sets 
typedef set<int> si; 
typedef set<string> ss;  
typedef set<char> sc; 
typedef set<pii> spii;  
 
// comodidad en vectors 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef vector<ll> vll; 
typedef vector<vll> vvll;  
typedef vector<string> vs; 
typedef vector<vs> vvs;  
typedef vector<bool> vb; 
typedef vector<vb> vvb; 
typedef vector<char> vc; 
typedef vector<db> vd; 
typedef vector<vd> vvd;  
typedef vector<ld> vld; 
typedef vector<vld> vvld;  
typedef vector<pii> vpii;  
 
 
// variables 
#define var(a,b) typeof(b) a=(b) //solo en gcc 
 
// debug 
#define debug(x) cout << #x << " = " << x << endl 
 
 
// ciclos con variables locales 
#define forn(i,n) for(int i=0;i<(n);i++) 
#define rforn(i,n) for(int i=((n)-1);i>=(0);i--) 
#define forv(i,v) for(int i=0;i<(int)(v).size();i++)  
#define rforv(i,v) for(int i=((int)(v).size()-1);i>=0;i--)  
 
#define fi forn(i,n) 
#define fj forn(j,n) 
#define fk forn(k,n) 
#define fl forn(l,n) 
 
#define fir rforn(i,n) 
#define fjr rforn(j,n) 
#define fkr rforn(k,n) 
#define flr rforn(l,n) 
 
#define fvi forv(i,n) 
#define fvj forv(j,n) 
#define fvk forv(k,n) 
#define fvl forv(l,n) 
 
#define fvir rforv(i,n) 
#define fvjr rforv(j,n) 
#define fvkr rforv(k,n) 
#define fvlr rforv(l,n) 
 
// hacia arriba desde s (n exclusive) 
#define fornu(i,s,n) for(int i=(s);i<(n);i++)  
#define forvu(i,s,v) for(int i=(s);i<(int)(v).size();i++)  
// desde a hasta v inclusive 
#define foru(i,a,b) for(int i=(a);i<=(b);i++)  
#define ford(i,a,b) for(int i=(a);i>=(b);i--)  
 
// ciclos con variables que perduran 
#define fornp(i,n) int i;for(i=0;i<(n);i++)  
#define forvp(i,v) int i;for(i=0;i<(int)(v).size();i++)  
 
#define fip(n) fornp(i,n) 
#define fjp(n) fornp(j,n) 
#define fkp(n) fornp(k,n) 
#define flp(n) fornp(l,n) 
 
// con n tocable 
#define rep(i,n) for(int _n=n, i=0;i<_n;++i) 
#define repu(i,a,b) for(int i=(a),_b=(b);i<=_b;++i) 
#define repd(i,a,b) for(int i=(a),_b=(b);i>=_b;--i) 
 
//ciclos con variables declaradas afuera 
#define fo(x,y) for((x)=0;(x)<(y);(x)++) 
 
// ciclo iterador 
#define fore(it,c) for(var(it,(c).begin());it!=(c).end();++it) 
// luciano dice que esto se hace con reverse iterators 
#define rfore(it,c) for(var(it,(c).begin()), it=(x).end();it!=(x).begin() && (--it,1);)  
 
// comodidades boludas 
#define pb(x) push_back((x));  
#define sz size() 
#define cs c_str() 
#define cdb (double) 
#define db double 
 
 
// cosas de vectores 
#define all(x) (x).begin(), (x).end()  
#define rall(x) (x).rbegin(), (x).rend()  
#define un(A) std::unique(all(A)) 
#define rev(v) std::reverse(all(v)) 
#define ins(x) insert(x) 
#define st(v) sort(all(v)) 
#define stf(v,f) sort(all(v),f) 
#define sst(v) std::stable_sort(all(v)) 
#define sstf(v,f) std::stable_sort(all(v),f) 
 
// infinitos 
const int inf = 1000000000;  
const ll infll = ll(inf) * ll(inf); 
 
// locura absoluta 
#define todo(f,w) ({ bool _ok=true; f { _ok=_ok && (w);if(!_ok) break;} _ok; }) 
#define exis(f,w) (!todo(f,!(w))) 
#define mini(f,w) ({ int _mm=(1<<31)-1; f _mm<?=(w); _mm; }) 
#define maxi(f,w) ({ int _mm=(1<<31); f _mm>?=(w); _mm; }) 
 
// creo vectores 
template<class T> inline vector<T> makeV(const T&x) { return vector<T>(1,x); } 
template<class T> inline vector<T> makeV(const T&x,const T&y) { vector<T> v(2); v[0] = x; v[1] = y; return v;} 
template<class T> inline vector<T> makeV(const T&x,const T&y,const T&z) { vector<T> v(3); v[0] = x; v[1] = y; v[2]=z; return  
v;} 
 
// busqueda 
template<class A,class B> inline bool contains(const A&a, const B&b) {return find(a.begin(),a.end(),b)!=a.end();} 
 
// funciones de enteros 
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));} 
ll gcd(ll a, ll b) {if (a<0||b<0) return gcd(abs(a),abs(b)); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b,  
a); if (!(b % a)) return a; return gcd(a, b % a);} 
 
template<class T> inline int tam(const T&c) { return c.size(); } 
 
// string e ints 
int stoi(string s) { istringstream i(s); int x; i>>x; return x; } 
ll stoll(string s) { istringstream i(s); ll x; i>>x; return x; } 
string itos (int i) {stringstream s; s << i; return s.str();} 
string lltos (long long i) {stringstream s; s << i; return s.str();} 
 
template<class T> string xtos(T x) { ostringstream o; o<<x; return o.str(); } 
template<class T> T strtox(const string& s){istringstream str(s);T x;str>>x;return x;}  
 
template<class it> string vtostr(it it1,it it2){ostringstream s;s<<"(";for(it  
i=it1;i!=it2;++i){if(i!=it1)s<<",";s<<*i;}s<<")";return s.str();}  
template<class t> string vtostr(const t& x){return vtostr(x.begin(),x.end());} 
 
 
// tokenizadores con separador puesto como parametro o " " default 
vs stovs(const string& s,const string& t=" "){vs res; for(int p=0;;){p=s.find_first_not_of(t,p);if (p<0) return res;int  
p2=s.find_first_of(t,p);res.push_back(s.substr(p,p2-p));if (p2<0) return res;else p=p2;}}  
vi stovi(string s,string del=" ") {vs v = stovs(s,del);vi res;fore(it,v) res.push_back(stoi(*it));return res;} 
vvs vstovvs(const vs& v,const string& t=" "){vvs res;forv(i,v) res.push_back(stovs(v[i],t));return res;}  
vvi vstovvi(const vs& v,const string& t=" "){vvi res;forv(i,v) res.push_back(stovi(v[i],t));return res;}  
 
 
// impresion pares 
template<class t,class u> ostream& operator<<(ostream& o,const pair<t,u>& x){return o<<"("<<x.first<<","<<x.second<<")";}  
// impresion vector 
template<class T,class T2> T& operator<<(T& a,vector<T2> b){ a<<'{';forv(i,b) a<<(i?",":"")<<b[i]; a<<'}';return a; }  
// impresion vv 
template<class T,class T2> T& operator<<(T& a,vector<vector<T2> > b){ a<<endl;forv(i,b) a<<b[i]<<endl; return a; }  
// impresion vs poniendo enters 
template<class T> T& operator<<(T& a,vs b){ a<<endl;forv(i,b) a<<b[i]<<endl; return a; }  
// impresion sets 
template<class T,class T2> T& operator<<(T& a,set<T2> b){ a<<'{';fore(i,b) a<<(i!=b.begin()?",":"")<<*i; a<<'}';return a; }  
// impresion maps 
template<class T,class T1,class T2> T& operator<<(T& a,map<T1,T2> b){ a<<'{';fore(i,b)  
a<<(i!=b.begin()?",":"")<<'['<<b->first<<','<<b->second<<']'; a<<'}';return a; }  
 
//UN CHABON SERIO TENIA ESTO Y NO COMPRENDI UN SOTO, parece ser un chiste... preguntar 
//przz 
/* 
struct przz{}; przz zz;  
template<class T> przz operator,(const przz& a,T b){ cout<<" "<<b; return a;}  
template<class T> T& operator<<(T& a,przz& b){ a<<endl;b=b;return a; }  
*/ 
// TEMPLATE END 
 
 
 
 
 
class PayBill { 
  public: 
  vector <int> whoPaid(vector <int> meals, int totalMoney) { 
    vb llegue(500005, false); 
    vi ultpago(500005, -1); 
    llegue[0] =true; 
    forv(i, meals) { 
      forv(j, llegue) { 
        if (llegue[j] && ultpago[j] != i && j+meals[i] < 500002 && !llegue[j+meals[i]])  
        {  llegue[j+meals[i]] = true; 
          ultpago[j+meals[i]] = i; 
        } 
      } 
     
    } 
    vi ret; 
    while (totalMoney != 0) { 
      ret.pb(ultpago[totalMoney]); 
      totalMoney -= meals[ultpago[totalMoney]]; 
    } 
    st(ret); 
    return ret; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/