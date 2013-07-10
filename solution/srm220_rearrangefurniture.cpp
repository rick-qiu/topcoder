/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3076
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

class RearrangeFurniture {
public:
    int lowestEffort(vector<int> weights, vector<int> finalPositions);
};

int RearrangeFurniture::lowestEffort(vector<int> weights, vector<int> finalPositions) {
    int ret;
    return ret;
}


int test0() {
    vector<int> weights = {5, 4, 7, 3, 10};
    vector<int> finalPositions = {1, 2, 0, 4, 3};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> weights = {3, 6, 2, 4, 10, 3};
    vector<int> finalPositions = {0, 1, 2, 3, 4, 5};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> weights = {10, 3, 123, 498, 12, 13, 14, 45, 32, 67, 111, 234, 543, 2, 12, 1, 56, 67, 78, 89, 12, 90, 23, 77, 345, 543, 242, 560, 121, 232, 980, 10000, 12, 1, 6, 98, 67, 44, 21, 456, 3231, 456, 23, 14, 678, 65, 45, 23, 99, 23};
    vector<int> finalPositions = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 20597;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> weights = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> finalPositions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 980000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weights = {5246, 3023, 9853, 5854, 3541, 7131, 8763, 9467, 6738, 196, 4787, 9945, 9931, 5695, 9862, 7717, 6321, 7399, 443, 9038, 8137, 2459, 4276, 9866, 2494, 2930, 7318, 8967, 3970, 5458, 9625, 3325, 6464, 2817, 9363, 3660, 9181, 8988, 901, 1668, 5488, 1557, 6386, 3438, 8821, 1360, 154, 5445, 6805, 9495};
    vector<int> finalPositions = {22, 40, 16, 30, 27, 5, 42, 18, 14, 37, 41, 48, 39, 43, 34, 21, 35, 11, 29, 20, 7, 49, 9, 32, 2, 0, 44, 1, 45, 15, 12, 26, 33, 23, 28, 10, 25, 38, 31, 36, 24, 4, 6, 19, 46, 47, 17, 13, 8, 3};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 295631;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> weights = {5246, 3023, 9853, 5854, 3541, 7131, 8763, 9467, 6738, 196, 4787, 9945, 9931, 5695, 9862, 7717, 6321, 7399, 443, 9038, 8137, 2459, 4276, 9866, 2494, 2930, 7318, 8967, 3970, 5458, 9625, 3325, 6464, 2817, 9363, 3660, 9181, 8988, 901, 1668, 5488, 1557, 6386, 3438, 8821, 1360, 154, 5445, 6805, 9495};
    vector<int> finalPositions = {1, 2, 3, 0, 5, 6, 7, 4, 9, 10, 11, 8, 13, 14, 15, 12, 17, 18, 19, 16, 21, 22, 23, 20, 25, 26, 27, 24, 29, 30, 31, 28, 33, 34, 35, 32, 37, 38, 39, 36, 41, 42, 43, 40, 45, 46, 47, 48, 49, 44};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 326402;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weights = {1, 10, 10, 100};
    vector<int> finalPositions = {3, 0, 2, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> weights = {1, 10, 10, 10, 10};
    vector<int> finalPositions = {0, 2, 3, 4, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> weights = {2333, 6705, 615, 2226, 1801, 4277, 9443, 7436, 9040, 8685, 6981, 8276, 4970, 1732, 9841, 735, 792, 7485, 7578, 7673, 8550, 2794, 7951, 2734, 8509, 4669, 993, 8125, 4576, 7794, 4972, 3249, 5545, 6424, 5837, 5486, 3005, 4968, 1907, 2698, 6452};
    vector<int> finalPositions = {2, 8, 38, 9, 35, 14, 16, 18, 1, 7, 20, 37, 24, 6, 29, 27, 0, 22, 36, 32, 12, 28, 3, 40, 31, 34, 39, 17, 15, 33, 4, 26, 13, 5, 23, 25, 30, 21, 19, 11, 10};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 244859;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weights = {1193, 9112, 7081, 2340};
    vector<int> finalPositions = {2, 0, 3, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 22112;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weights = {1779, 6462, 9939, 6592, 932, 8590, 3514, 8374, 155, 4139, 2658, 3757, 815, 6279, 8933, 898, 7028, 987, 2147, 9725, 5945, 6940, 4602, 7307, 8269, 6599, 8394, 2491, 830, 7266, 1100, 2786, 480, 305, 9706, 4157, 2637, 5186, 8693, 6177};
    vector<int> finalPositions = {33, 10, 22, 3, 4, 29, 7, 11, 30, 31, 12, 19, 15, 24, 32, 37, 0, 2, 21, 16, 34, 5, 23, 26, 20, 14, 1, 17, 36, 28, 6, 8, 38, 13, 9, 35, 27, 18, 25, 39};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 182295;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weights = {3087, 676, 763, 8123, 346, 1303, 1762, 413, 2856, 6114, 9595, 5778, 2167, 1445, 9983, 3203, 3492, 9009, 9053, 8198, 5784, 9713, 4647, 440, 78, 4089, 1487, 6610, 5205, 1622, 9116, 5226, 668, 6988, 541, 5579};
    vector<int> finalPositions = {15, 35, 25, 10, 0, 13, 18, 26, 29, 24, 17, 1, 11, 5, 2, 22, 4, 16, 32, 12, 33, 31, 9, 14, 6, 8, 21, 23, 7, 28, 34, 27, 3, 19, 20, 30};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 158765;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weights = {4575, 9177, 6547, 8452, 4904, 5844, 7050, 7244, 4371, 3111, 4067, 9253, 9030, 5290};
    vector<int> finalPositions = {4, 1, 10, 2, 8, 11, 6, 0, 5, 12, 9, 7, 13, 3};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 102616;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> weights = {2556, 7198, 3068, 8041, 5408, 2225, 1707, 1725, 7539, 2709, 3404, 3740, 9793, 1897, 8964, 127, 4061, 5543, 3480, 323, 1330, 1554, 9909, 2995, 7455, 3962, 9402, 9195, 8237, 8905, 330, 2486, 5879, 9583, 4258, 2015, 3508, 3106, 2457, 2496, 3063};
    vector<int> finalPositions = {18, 4, 13, 2, 19, 24, 7, 40, 34, 1, 6, 28, 17, 32, 29, 21, 15, 14, 36, 3, 33, 39, 8, 31, 30, 11, 22, 25, 23, 35, 0, 26, 9, 5, 12, 10, 27, 20, 38, 16, 37};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 188909;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weights = {1860, 7882, 2792, 5454, 6405, 8530, 3198};
    vector<int> finalPositions = {6, 2, 1, 4, 5, 0, 3};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 41701;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> weights = {790, 4238, 9657, 2025, 8807, 2905, 9388, 1702, 1855, 4145, 81, 5739, 6581, 7508, 1856, 5906, 7939, 5555, 7463, 9813, 9161, 2381, 5980, 4294, 6212, 3019, 2546, 1801, 1059, 7658, 7394, 9827, 1949, 8462, 9517, 6846, 1712, 2230, 6452, 8145, 7045, 9153, 1879, 1540};
    vector<int> finalPositions = {13, 3, 30, 26, 20, 16, 43, 17, 27, 8, 38, 31, 25, 6, 37, 9, 2, 34, 15, 24, 0, 12, 14, 35, 32, 40, 29, 33, 22, 18, 21, 10, 42, 7, 1, 28, 36, 5, 19, 41, 39, 4, 23, 11};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 233607;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weights = {6571, 147, 3040, 8092, 7298, 491, 5794, 8413, 7930, 9993, 3966, 1180, 5591, 9787, 3607, 9825, 9462, 8371, 5619, 5082, 5034, 1824, 7946, 9158, 7358, 8547};
    vector<int> finalPositions = {13, 10, 8, 15, 2, 6, 25, 4, 9, 20, 3, 18, 12, 7, 19, 14, 22, 21, 23, 5, 1, 11, 0, 17, 16, 24};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 159243;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weights = {7123, 8496, 247, 8561, 2961, 4759, 3902, 5401, 1453, 3279, 6451, 7380, 7386, 6530, 938, 9971, 771, 5981, 5137, 3489, 8548, 3996, 4955, 5072, 3173, 9613, 9099, 1491, 1321, 2197, 5510, 643, 231, 93, 118};
    vector<int> finalPositions = {34, 22, 9, 1, 8, 13, 17, 24, 33, 20, 10, 0, 23, 19, 28, 4, 31, 32, 26, 27, 3, 12, 18, 21, 25, 16, 29, 5, 11, 7, 2, 14, 30, 15, 6};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 158313;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weights = {9680, 8207, 6635, 371, 2970, 8104, 5619, 8892, 2427, 2751, 6501, 4430, 2855, 9163, 8910, 8648, 362, 908, 4471, 9263, 3408, 4518, 21, 4118, 8189, 9231, 5618, 8029, 885, 1682, 1122, 336, 5994, 4592, 6395, 4302, 8205, 9904, 7906, 1685, 5108, 2385, 8898, 7158, 9389, 9248, 1171, 7573, 2110};
    vector<int> finalPositions = {14, 19, 2, 22, 42, 7, 8, 20, 9, 33, 38, 12, 47, 10, 37, 23, 45, 43, 1, 13, 27, 39, 41, 32, 46, 24, 35, 34, 6, 3, 44, 21, 36, 0, 28, 29, 40, 17, 16, 30, 48, 15, 26, 5, 18, 4, 31, 11, 25};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 258376;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weights = {3841, 8495, 8136, 9065, 6043, 2587, 98, 536, 9763, 6804, 2829};
    vector<int> finalPositions = {0, 10, 3, 5, 7, 8, 2, 1, 9, 6, 4};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 55774;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> weights = {3562, 5831, 1529, 974, 4555, 122, 3308, 7298, 2343, 9831, 6548, 1632, 8972, 7901, 5874, 1196, 5042, 885, 931, 4444, 998, 5119, 9657, 4835, 1983, 8327, 8228, 6942};
    vector<int> finalPositions = {26, 4, 18, 7, 8, 14, 1, 27, 9, 20, 12, 25, 17, 3, 2, 10, 5, 19, 11, 13, 16, 24, 0, 23, 21, 15, 22, 6};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 130034;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weights = {1816, 4995, 7769, 4199, 5005, 6872, 3523, 4966, 289, 9805, 6404, 250, 6099, 758, 5981, 3027, 8703, 7226, 5606, 9611, 333, 2239, 5196, 2020, 5783, 1813, 6215, 6523, 8196, 5263, 5038, 3957, 6683, 5807, 1059, 3973, 9402, 7461, 204};
    vector<int> finalPositions = {30, 22, 5, 10, 12, 16, 32, 29, 18, 34, 23, 26, 25, 36, 14, 21, 33, 31, 35, 28, 1, 3, 6, 24, 2, 9, 4, 37, 11, 13, 20, 7, 15, 17, 27, 38, 19, 0, 8};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 191886;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weights = {3592, 4103};
    vector<int> finalPositions = {1, 0};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 7695;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weights = {8752, 2260, 4094, 373, 6847, 3975, 2379, 6758, 9913, 3007, 5731};
    vector<int> finalPositions = {7, 3, 8, 5, 10, 9, 2, 6, 0, 4, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 60198;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weights = {7106, 3077, 5688, 8868, 6706, 5275, 2689, 9350, 1342, 1428, 2315, 9603, 2147, 901, 5251, 3430, 2042, 139, 6207, 2210, 6562, 5271, 7028, 9946, 2430, 5616, 1759, 1925, 2157, 1697, 1571, 4650, 109, 7965, 6660, 4558, 9207, 6115, 2972, 7046, 7703, 9616, 3938, 5284, 2319, 3881, 1248, 436, 7456, 9335};
    vector<int> finalPositions = {26, 30, 20, 39, 19, 46, 34, 1, 29, 3, 40, 8, 36, 12, 14, 16, 42, 31, 25, 6, 4, 48, 33, 28, 24, 23, 2, 15, 32, 11, 41, 47, 43, 45, 37, 27, 49, 44, 10, 17, 35, 9, 38, 21, 13, 18, 0, 22, 7, 5};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 233626;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weights = {7498, 6208};
    vector<int> finalPositions = {1, 0};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 13706;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weights = {3210, 9921, 7985, 2374, 2372, 3778, 5814, 2401, 72, 6088, 8211, 8239, 9484, 3765, 9513, 4625, 8753, 1457, 934, 9104, 9611, 492, 7388, 6875, 2846, 7808, 3528, 2072, 5284, 49, 4002, 8517, 2741, 3482, 7260, 4290, 4795, 28, 3160, 4804, 173, 3285, 2080};
    vector<int> finalPositions = {17, 25, 4, 2, 34, 6, 15, 12, 27, 22, 39, 37, 19, 9, 11, 16, 8, 36, 35, 21, 14, 18, 1, 41, 32, 20, 31, 30, 24, 42, 40, 38, 33, 26, 7, 5, 28, 3, 23, 0, 13, 29, 10};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 203895;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> weights = {6743, 8618, 5190, 9852, 7217, 2049, 8693, 5252, 6722, 7113, 7869, 4654, 9969, 5838, 6520, 3191, 7960, 5660, 7550, 6186, 3040, 7999, 9053, 9018, 125, 9477, 4831, 6141, 7543, 7295, 4334, 5786, 2541, 4468, 1905, 5594, 7188, 6370, 4158, 9740, 138, 7350, 7357, 9900, 8508, 5069, 3719, 888, 2001, 638};
    vector<int> finalPositions = {33, 11, 41, 49, 34, 21, 24, 7, 46, 0, 5, 36, 4, 28, 10, 27, 29, 43, 19, 30, 38, 6, 40, 31, 35, 9, 42, 25, 13, 39, 45, 48, 16, 26, 23, 32, 2, 18, 44, 22, 14, 8, 47, 20, 3, 17, 37, 1, 15, 12};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 296156;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> weights = {5065, 8302, 8622, 8704, 2844, 2845};
    vector<int> finalPositions = {5, 3, 4, 2, 1, 0};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 42070;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> weights = {36, 3675, 555, 7694, 2325, 189, 6288, 5833, 3791, 7774, 5535, 6658, 6202, 2070, 5333, 786, 8941, 9887, 4966, 4645, 2900, 1559, 8525, 8201, 6662, 595, 2010, 9419, 2551, 1967, 4528, 2846, 8827, 2835, 7552, 9197, 6962, 8575, 9711, 3878, 9720, 2525, 7088};
    vector<int> finalPositions = {4, 36, 3, 18, 25, 7, 17, 0, 8, 10, 30, 32, 28, 1, 20, 31, 41, 27, 33, 14, 15, 29, 23, 6, 5, 38, 13, 34, 42, 37, 39, 35, 22, 40, 19, 21, 16, 26, 2, 9, 24, 12, 11};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 224201;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> weights = {3184, 6999, 1805, 4612, 4113, 2024, 8292, 7113, 5094, 3986, 1329, 3134, 2886, 9202, 1453, 5486, 6684, 9616, 370, 7983, 6211, 650, 2793, 7877, 5059, 1353, 2043, 985, 4309, 3034, 1015, 9820, 3806, 589, 7007, 8828, 2317, 2781, 2294, 3699, 3250, 3906, 2293, 3639, 9611, 9476, 9724, 6487, 450, 2794};
    vector<int> finalPositions = {31, 32, 45, 7, 13, 18, 37, 17, 20, 15, 49, 14, 21, 47, 9, 23, 27, 24, 22, 1, 11, 40, 26, 35, 38, 43, 36, 48, 39, 6, 41, 33, 3, 34, 10, 46, 19, 8, 29, 0, 44, 25, 12, 30, 42, 5, 28, 2, 4, 16};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 241875;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weights = {877, 5445, 452, 2056, 3784, 1309, 5130, 8489, 6041, 6665, 8519, 6430};
    vector<int> finalPositions = {11, 3, 10, 8, 9, 6, 0, 4, 2, 1, 7, 5};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 59663;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weights = {9565, 1230, 8085, 2840, 1273, 207, 9882, 5640, 1708, 6890, 9192, 7538, 1421, 7830, 5192, 2451, 9778, 6097, 2229, 2932, 2476, 7147, 5419, 2110, 5115, 9288, 929, 2442, 8211, 867};
    vector<int> finalPositions = {8, 27, 28, 5, 26, 7, 0, 14, 16, 12, 13, 6, 17, 4, 22, 18, 2, 10, 25, 29, 21, 23, 9, 1, 11, 20, 24, 3, 15, 19};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 151366;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weights = {1, 9, 9, 9, 9};
    vector<int> finalPositions = {0, 2, 3, 4, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weights = {1000, 1000, 1000, 1000, 1000, 1};
    vector<int> finalPositions = {1, 2, 3, 4, 0, 5};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 6006;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weights = {10, 10, 10, 10, 1};
    vector<int> finalPositions = {1, 2, 3, 0, 4};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weights = {1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> finalPositions = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 1, 49, 48};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 50048;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> weights = {1, 1000, 1000, 1000, 1000};
    vector<int> finalPositions = {0, 2, 3, 4, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 5005;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weights = {1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> finalPositions = {0, 2, 3, 4, 5, 6, 7, 8, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 9009;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weights = {1, 5, 7, 13};
    vector<int> finalPositions = {1, 2, 3, 0};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> weights = {1, 1, 1, 3, 2, 1};
    vector<int> finalPositions = {0, 1, 4, 5, 3, 2};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weights = {1, 99, 100, 100, 100, 100};
    vector<int> finalPositions = {0, 2, 3, 4, 5, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 604;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weights = {100, 100, 100, 100, 1};
    vector<int> finalPositions = {1, 2, 3, 0, 4};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 505;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weights = {1, 100, 100, 100, 100};
    vector<int> finalPositions = {0, 4, 1, 2, 3};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 505;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weights = {1, 10, 10, 10, 10};
    vector<int> finalPositions = {0, 2, 3, 4, 1};
    RearrangeFurniture* pObj = new RearrangeFurniture();
    clock_t start = clock();
    int result = pObj->lowestEffort(weights, finalPositions);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=309453&rd=5866&pm=3076
********************************************************************************
/* ############################ PRELIMINARIES ############################ */
 
using namespace std;
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
 
#define PB push_back
#define SZ size()
#define ALL(x) ((x).begin()),((x).end())
#define REP(var, hi) for (int var=0; var<(hi); var++)
#define REPD(var, hi) for (int var=((hi)-1); var>=0; var--)
#define FOR(var, lo, hi) for (int var=(lo); var<(hi); var++)
#define FORD(var, lo, hi) for (int var=((hi)-1); var>=(lo); var--)
#define FORALL(it, x) for(__typeof((x).begin()) it=(x).begin(); it!=(x).end(); it++)
 
typedef vector <int> VI;
typedef vector <VI> VVI;
typedef long long LL;
typedef vector <LL> VLL;
typedef vector <VLL> VVLL;
typedef vector <string> VS;
typedef vector <VS> VVS;
typedef vector <double> VD;
typedef vector <VD> VVD;
typedef istringstream ISS;
typedef ostringstream OSS;
 
template <class T1, class T2> T1 cast (T2 x);
template <class T> vector<T> cut (string s, string sep);
template <class T> vector<vector<T> > cut (vector<string> vs, string sep);
 
/* ############################ THE REAL CODE ############################ */
 
class RearrangeFurniture {
  public:
  int lowestEffort(vector <int> w, vector <int> f) {
    int N=w.SZ;
    VI u(N);
    VVI cycle;
    int low=999999999;
    REP(i,N) low<?=w[i];
    
    REP(start,N) {
      if (u[start]) continue;
      int tmp=start;
      cycle.PB(VI());
      do { 
        cycle.back().PB(w[tmp]); 
        u[tmp]=1; 
        tmp=f[tmp]; 
      } 
      while (tmp!=start);
      sort(ALL(cycle.back()));
    }
    
    int sol=0;
    
    REP(i,cycle.SZ) {
      int cost1=0;
      FOR(j,1,cycle[i].SZ) cost1+=cycle[i][0]+cycle[i][j];
      
      int cost2=2*(cycle[i][0]+low);
      FOR(j,1,cycle[i].SZ) cost2+=low+cycle[i][j];
      
      sol += cost1 <? cost2;
    }
    
    return sol;
  }
};
 
/* ########################### PREWRITTEN CODE ########################### */
 
template <class T1, class T2>
T1 cast (T2 x) {
  T1 y;
  ostringstream oss; oss << x;
  istringstream iss(oss.str()); iss >> y;
  return y;
}
 
template <class T>
vector<T> cut (string s, string sep) {
  vector<T> res;
  for (int i=0; i<s.size(); i++) {
    string sub = "";
    while (i<s.size() && sep.find(s[i])==string::npos) sub+=s[i++];
    if (sub != "") res.push_back (cast<T>(sub));
  }
  return res;
}
 
template <class T>
vector<vector<T> > cut (vector<string> vs, string sep) {
  vector<vector<T> > res;
  for (int i=0; i<vs.size(); i++) res.push_back (cut<T>(vs[i], sep));
  return res;
}
 
/* ############################### THE END ################################ */
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/