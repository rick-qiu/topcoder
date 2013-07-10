/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8620
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

class SnowyWinter {
public:
    int snowyHighwayLength(vector<int> startPoints, vector<int> endPoints);
};

int SnowyWinter::snowyHighwayLength(vector<int> startPoints, vector<int> endPoints) {
    int ret;
    return ret;
}


int test0() {
    vector<int> startPoints = {17, 85, 57};
    vector<int> endPoints = {33, 86, 84};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> startPoints = {45, 100, 125, 10, 15, 35, 30, 9};
    vector<int> endPoints = {46, 200, 175, 20, 25, 45, 40, 10};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> startPoints = {4387, 711, 2510, 1001, 4687, 3400, 5254, 584, 284, 1423, 3755, 929, 2154, 5719, 1326, 2368, 554};
    vector<int> endPoints = {7890, 5075, 2600, 6867, 7860, 9789, 6422, 5002, 4180, 7086, 8615, 9832, 4169, 7188, 9975, 8690, 1423};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9691;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> startPoints = {4906, 5601, 5087, 1020, 4362, 2657, 6257, 5509, 5107, 5315, 277, 6801, 2136, 2921, 5233, 5082, 497, 8250, 3956, 5720};
    vector<int> endPoints = {4930, 9130, 9366, 2322, 4687, 4848, 8856, 6302, 5496, 5438, 829, 9053, 4233, 4119, 9781, 8034, 3956, 9939, 4908, 5928};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9510;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> startPoints = {0, 4, 2};
    vector<int> endPoints = {1, 5, 3};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> startPoints = {41};
    vector<int> endPoints = {8466};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 8425;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> startPoints = {6334, 5723};
    vector<int> endPoints = {6498, 9168};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 3445;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> startPoints = {1477, 4462, 5705};
    vector<int> endPoints = {9356, 6960, 8143};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 7879;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> startPoints = {3279, 491, 1941, 4827};
    vector<int> endPoints = {6826, 9961, 2995, 5436};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9470;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> startPoints = {2388, 153, 292, 7420, 9717};
    vector<int> endPoints = {4603, 3902, 2381, 8715, 9894};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 5922;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> startPoints = {1724, 1537, 1869, 5665, 7034, 3809};
    vector<int> endPoints = {5447, 4770, 9911, 6297, 9894, 8701};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 8374;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> startPoints = {330, 4664, 5140, 6868, 5545, 2659, 35};
    vector<int> endPoints = {1319, 7672, 7711, 8251, 7642, 2754, 2858};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 6410;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> startPoints = {8723, 778, 2315, 1842, 103, 8942, 2646, 3803};
    vector<int> endPoints = {9741, 7527, 3035, 2188, 288, 9040, 9263, 7444};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9148;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> startPoints = {5889, 4368, 1098, 3548, 2622, 4082, 1839, 4966, 3930};
    vector<int> endPoints = {6729, 5349, 5005, 4391, 9628, 9953, 8755, 7376, 6306};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 8855;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> startPoints = {2436, 1322, 1536, 2082, 2927, 1112, 4639, 2702, 2306, 1670};
    vector<int> endPoints = {6943, 4624, 5537, 6117, 6540, 4833, 9656, 9930, 3976, 2384};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 8818;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> startPoints = {5021, 6922, 5829, 5572, 5097, 3289, 8635, 2353, 3653, 2051, 1150};
    vector<int> endPoints = {8743, 9071, 6270, 6775, 6511, 3984, 9161, 4765, 5573, 4031, 7348};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 8011;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> startPoints = {1722, 3430, 188, 1336, 2286, 382, 4944, 2206, 4219, 4944, 3029, 6412};
    vector<int> endPoints = {6940, 3965, 1104, 8006, 5456, 7751, 8909, 9758, 8587, 6422, 7504, 9166};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9570;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> startPoints = {900, 1655, 6359, 535, 1546, 4041, 3602, 290, 1019, 4019, 3197, 4482, 4734};
    vector<int> endPoints = {2588, 8761, 7409, 7622, 6483, 7593, 4348, 833, 9374, 4596, 7346, 9667, 8281};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9377;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> startPoints = {53, 6416, 3788, 467, 3728, 2481, 2421, 4309, 2811, 4308, 7450, 598, 1553, 300};
    vector<int> endPoints = {1999, 7936, 6900, 8126, 4892, 4646, 7806, 6617, 9514, 7616, 8934, 5249, 6518, 2796};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9461;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> startPoints = {1007, 2606, 2699, 483, 3093, 520, 9312, 5198, 3457, 578, 4797, 796, 7155, 470, 2291};
    vector<int> endPoints = {6224, 5844, 4988, 3195, 4342, 1587, 9503, 7448, 6618, 9795, 5280, 9588, 8007, 3620, 8537};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9325;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> startPoints = {4177, 8189, 6191, 2886, 1510, 2634, 53, 326, 4886, 8431, 140, 1416, 1879, 321, 20, 3557};
    vector<int> endPoints = {6038, 9655, 7958, 9814, 9155, 6201, 4270, 2644, 6360, 8874, 9867, 3842, 1995, 8650, 5699, 8474};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9847;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> startPoints = {4387, 711, 2510, 1001, 4687, 3400, 5254, 584, 284, 1423, 3755, 929, 2154, 5719, 1326, 2368, 554};
    vector<int> endPoints = {7890, 5075, 2600, 6867, 7860, 9789, 6422, 5002, 4180, 7086, 8615, 9832, 4169, 7188, 9975, 8690, 1423};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9691;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> startPoints = {3434, 7441, 142, 1716, 2422, 5994, 2528, 2547, 2948, 193, 414, 6104, 4486, 2454, 1700, 669, 2262, 4313};
    vector<int> endPoints = {6548, 9512, 8059, 3753, 6138, 6278, 6686, 7436, 9865, 3193, 3297, 8284, 6281, 5732, 8113, 1313, 5786, 4353};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9723;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> startPoints = {51, 807, 943, 4313, 8319, 3644, 481, 220, 2161, 448, 465, 1657, 6290, 22, 6152, 647, 3185, 4474, 2168};
    vector<int> endPoints = {1182, 912, 1832, 7754, 9557, 7980, 4144, 3194, 7129, 5535, 1172, 2043, 6437, 7252, 9508, 4745, 8313, 8020, 4017};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9535;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> startPoints = {8786, 7391, 201, 4414, 5822, 5872, 157, 1832, 7487, 7518, 2267, 1763, 3984, 3102, 7627, 4099, 524, 1543, 1022, 3060};
    vector<int> endPoints = {9905, 7957, 3625, 6475, 9314, 9332, 4370, 8068, 8295, 8177, 7772, 2668, 7191, 8480, 9211, 4802, 2625, 1924, 9970, 4180};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9813;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> startPoints = {1000, 7504, 2723, 142, 1283, 3063, 8360, 971, 4269, 235, 5758, 4667, 2549, 140, 1622, 2125, 1692, 2656, 2464, 2591, 3849};
    vector<int> endPoints = {7430, 7591, 3030, 8492, 7221, 7900, 9186, 2411, 9168, 830, 9710, 8895, 7285, 3693, 2695, 8017, 6574, 6300, 7370, 4678, 5482};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9570;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> startPoints = {1018, 1117, 2800, 1057, 4757, 313, 224, 2042, 5109, 7085, 3487, 4473, 2625, 1925, 5421, 4961, 123, 3260, 194, 1264, 6202, 324};
    vector<int> endPoints = {8462, 3150, 8086, 1926, 9010, 2167, 9576, 2756, 7164, 7882, 9563, 9575, 5625, 5629, 8518, 6902, 4594, 3737, 2522, 8260, 8116, 5030};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9453;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> startPoints = {768, 5545, 1151, 4923, 185, 849, 3828, 897, 7577, 3006, 1200, 6056, 2303, 2324, 5108, 1111, 2848, 2426, 2992, 6540, 1108, 2353, 6072};
    vector<int> endPoints = {9009, 6411, 1518, 9788, 1761, 4940, 8661, 7712, 8957, 8365, 1476, 6439, 2759, 9356, 6477, 4886, 9800, 4459, 7382, 9404, 8702, 2834, 9348};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9615;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> startPoints = {4484, 554, 1626, 3356, 3269, 3867, 2895, 111, 2716, 1584, 4127, 4227, 6559, 2294, 2052, 3584, 6654, 1455, 2530, 2483, 911, 66, 2937, 2140};
    vector<int> endPoints = {8822, 3214, 9357, 8526, 9335, 9359, 3021, 9615, 8695, 4039, 4421, 4565, 8932, 9853, 6961, 9732, 6971, 4368, 2963, 2607, 1634, 2846, 4675, 2223};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9787;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> startPoints = {3752, 173, 1457, 3221, 1626, 1780, 3848, 2277, 2192, 1637, 1993, 175, 547, 300, 4412, 4853, 1461, 874, 422, 1752, 2672, 39, 70, 610, 1017};
    vector<int> endPoints = {6511, 2739, 7824, 7869, 1931, 5204, 7397, 2699, 2733, 6532, 5556, 5703, 6962, 5880, 6640, 9854, 3141, 7609, 2675, 8442, 8294, 9313, 875, 2817, 4931};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9815;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> startPoints = {692, 3168, 38, 8683, 2589, 5144, 9313, 6738, 1257, 335, 1191, 2180, 3829, 606, 5997, 7548, 1624, 6467, 1237, 7811, 599, 213, 3990, 5601, 3390, 2670};
    vector<int> endPoints = {8110, 3829, 6486, 9089, 9496, 5988, 9352, 8650, 2042, 8759, 7605, 5262, 8501, 3773, 9290, 9554, 5559, 9539, 6127, 9172, 6077, 8683, 8213, 5822, 5758, 6426};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9516;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> startPoints = {4084, 74, 4968, 3845, 503, 1219, 2363, 2169, 7487, 2163, 911, 6704, 1815, 750, 1539, 303, 1096, 3583, 2971, 1074, 1543, 7545, 1769, 3984, 5943, 2865, 3243};
    vector<int> endPoints = {8025, 8785, 5497, 6287, 2601, 2661, 5706, 9010, 8239, 5540, 7619, 7591, 9232, 5203, 4975, 1421, 1246, 3647, 7863, 2911, 8710, 8677, 5261, 8519, 8287, 8539, 5506};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9158;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> startPoints = {7868, 8321, 1130, 5085, 8568, 7102, 3527, 1599, 4014, 28, 2088, 2636, 2407, 4681, 1341, 608, 1219, 886, 690, 2842, 1428, 748, 781, 2223, 5184, 5627, 1223, 3359};
    vector<int> endPoints = {8316, 9601, 4470, 7150, 9761, 9899, 4422, 6967, 5565, 1541, 5345, 2943, 6461, 5049, 1588, 2057, 1758, 9952, 4145, 7949, 5618, 7065, 4536, 8034, 7038, 9853, 5747, 9922};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9924;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> startPoints = {2254, 4944, 2723, 1023, 353, 2547, 8583, 3340, 7912, 1193, 1946, 424, 4427, 2401, 624, 90, 6035, 4735, 811, 6652, 835, 480, 1013, 7840, 2011, 2634, 1650, 1632, 352};
    vector<int> endPoints = {4764, 4954, 3316, 5409, 998, 9496, 9515, 7963, 8075, 6141, 5070, 4605, 6171, 6705, 9810, 9374, 6564, 9139, 5994, 8256, 3934, 1355, 1131, 8229, 4624, 4186, 9689, 5662, 892};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9720;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> startPoints = {1414, 4007, 2231, 6302, 4255, 148, 2316, 4026, 1078, 1316, 4048, 1358, 1902, 6907, 3561, 4946, 1282, 671, 5402, 3831, 257, 2617, 0, 1943, 2391, 2682, 5589, 2721, 6410, 1458};
    vector<int> endPoints = {3451, 7262, 5454, 6633, 6301, 1123, 4213, 7107, 9198, 6857, 4153, 5263, 3676, 9641, 4901, 8487, 3652, 2220, 6923, 9368, 3878, 9007, 3969, 9781, 6502, 5311, 6698, 5938, 9036, 6234};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9781;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> startPoints = {2507, 3959, 1515, 4935, 58, 3970, 5116, 4553, 3039, 209, 1954, 708, 4482, 8380, 5949, 1679, 5896, 788, 3975, 8687, 7, 2940, 1361, 28, 4776, 1885, 1071, 1332, 4294, 823, 5628};
    vector<int> endPoints = {9961, 6493, 5267, 8867, 4699, 6262, 6214, 7815, 8329, 9286, 8080, 6084, 4772, 9813, 6541, 8114, 7109, 3071, 8131, 9954, 6111, 5789, 1723, 5182, 7200, 5071, 1972, 2865, 6151, 2165, 9676};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9954;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> startPoints = {2598, 3309, 77, 115, 1528, 6677, 8405, 6816, 7516, 8664, 7679, 1340, 1661, 4720, 413, 7901, 3939, 1759, 7529, 2267, 5602, 1904, 1012, 1134, 4112, 3554, 1291, 9150, 1054, 248, 3711, 111};
    vector<int> endPoints = {8648, 4693, 4686, 2248, 6665, 7864, 9419, 8826, 7724, 9085, 9963, 5686, 6021, 6064, 9307, 9871, 7123, 2742, 8421, 4806, 9318, 4305, 3479, 6628, 6807, 4084, 2289, 9994, 5343, 4707, 7491, 5131};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9917;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> startPoints = {6438, 4720, 1052, 5267, 6421, 865, 2495, 1194, 6631, 2021, 1146, 3036, 646, 804, 4098, 4599, 797, 446, 540, 4575, 8762, 2334, 1415, 3850, 4228, 4449, 229, 939, 5146, 1655, 673, 1751, 3144};
    vector<int> endPoints = {7958, 9702, 6995, 7479, 8237, 7916, 7658, 8484, 7462, 2157, 8391, 3925, 9456, 6602, 7828, 9290, 7278, 8351, 3881, 8313, 9567, 8396, 9896, 5826, 6814, 6924, 658, 4518, 9558, 5160, 792, 2359, 6397};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9667;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> startPoints = {6944, 1186, 7661, 4513, 475, 526, 2569, 905, 8960, 521, 2548, 330, 4332, 909, 6335, 1278, 2392, 711, 1588, 2505, 3, 2623, 8662, 565, 7085, 8372, 8194, 3824, 7572, 4639, 8818, 943, 287, 5565};
    vector<int> endPoints = {8714, 9568, 8638, 5074, 1520, 5614, 3233, 9464, 9556, 4160, 7468, 1920, 8348, 2923, 9736, 8336, 7636, 8162, 9948, 9134, 3336, 6336, 9970, 5606, 9280, 9152, 8650, 9876, 8394, 6249, 9172, 2608, 1941, 8419};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9967;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> startPoints = {3805, 1447, 1615, 1063, 6073, 297, 9573, 3160, 1169, 6029, 6266, 421, 771, 907, 4182, 5494, 874, 4901, 474, 6819, 5545, 1575, 192, 7592, 754, 1012, 1671, 3427, 5967, 4406, 1908, 1758, 5204, 958, 5945};
    vector<int> endPoints = {7585, 6215, 2609, 9166, 6892, 3508, 9694, 5588, 7967, 7356, 9425, 8508, 8779, 3550, 5389, 5764, 1364, 8253, 4460, 6972, 6120, 9789, 5603, 7950, 6342, 2481, 3437, 5912, 9762, 4415, 7222, 6432, 9484, 4319, 6804};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9597;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> startPoints = {8166, 1366, 1785, 553, 3447, 6220, 2376, 6946, 2722, 2016, 1108, 2179, 8925, 4324, 5968, 1642, 2666, 1065, 2193, 6827, 5870, 696, 1026, 1407, 7185, 235, 1311, 2499, 2111, 3648, 1191, 681, 265, 7712, 5470, 970};
    vector<int> endPoints = {8699, 7691, 8530, 971, 5021, 8282, 9329, 8581, 7981, 4775, 9220, 3854, 9489, 6486, 9676, 7534, 5676, 1989, 7783, 7727, 9424, 7611, 8702, 5545, 9508, 4235, 6441, 8850, 5126, 8147, 1454, 5868, 7463, 9792, 8633, 2828};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9557;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> startPoints = {4899, 3876, 702, 1381, 6589, 2237, 2176, 167, 1307, 1057, 7926, 1670, 2258, 7213, 1284, 2742, 4472, 5841, 716, 4863, 937, 2748, 8597, 2661, 2753, 276, 9434, 2072, 1386, 7833, 3329, 8928, 2432, 1735, 1598, 1836, 1979};
    vector<int> endPoints = {8440, 5177, 5768, 4363, 8823, 8023, 6594, 2327, 2041, 8180, 9487, 2525, 5651, 9860, 5781, 8610, 7128, 8433, 3503, 4866, 1881, 9257, 8612, 8456, 6061, 805, 9488, 6365, 7586, 8360, 6046, 9490, 3838, 6766, 9809, 1890, 7328};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9693;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> startPoints = {1368, 1241, 6608, 1646, 7208, 3264, 3241, 2013, 189, 645, 9523, 4472, 7198, 9853, 4919, 2576, 2541, 3340, 899, 5538, 6193, 5009, 1560, 1494, 2785, 1537, 3391, 3209, 1576, 968, 73, 1495, 1273, 6582, 1158, 416, 159, 2923};
    vector<int> endPoints = {9350, 1792, 9252, 7431, 9535, 3497, 7647, 6839, 6099, 9811, 9850, 8631, 9889, 9990, 5695, 7779, 2930, 3486, 2523, 8483, 7492, 8250, 5833, 1840, 8528, 8804, 8789, 3548, 6977, 9277, 191, 1620, 3825, 9789, 3577, 6487, 3449, 9072};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9917;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> startPoints = {379, 207, 6477, 2604, 2073, 2610, 8759, 1055, 1160, 3715, 2741, 4954, 395, 613, 903, 134, 7030, 2581, 3517, 7005, 241, 3523, 1755, 7094, 7296, 177, 3578, 2749, 3727, 2995, 2678, 897, 1783, 3093, 1242, 7514, 167, 1190, 6748};
    vector<int> endPoints = {7006, 7965, 8502, 5369, 4195, 3721, 9018, 2889, 6682, 9931, 5450, 6813, 2862, 5459, 2599, 4680, 9198, 4386, 7240, 8670, 8881, 5247, 2104, 9619, 9916, 5677, 5056, 7575, 4006, 4079, 4674, 7751, 5564, 3607, 6172, 9927, 5055, 5973, 8922};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9797;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> startPoints = {985, 2144, 1574, 4628, 5790, 2910, 690, 9091, 6855, 638, 236, 1223, 6954, 3181, 177, 3065, 2513, 1076, 4139, 1944, 170, 3488, 4748, 3333, 2212, 7005, 6366, 4882, 1807, 2187, 6479, 6321, 1348, 4206, 2274, 186, 7664, 2028, 4860, 1776};
    vector<int> endPoints = {5651, 6445, 6515, 9914, 5874, 5468, 8146, 9815, 6947, 6050, 8551, 9487, 8160, 8394, 6096, 7063, 9261, 2577, 6877, 4611, 2445, 9973, 6149, 3864, 7281, 7430, 8896, 8520, 7640, 7231, 6705, 6538, 9446, 9646, 5757, 419, 8486, 3455, 9612, 9251};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9803;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> startPoints = {1345, 860, 2454, 2104, 5820, 6279, 4453, 5946, 8317, 1375, 4996, 2073, 634, 1643, 3231, 4747, 5676, 4800, 4198, 853, 572, 1558, 6473, 1550, 1181, 2699, 7464, 2529, 2112, 3475, 6888, 6670, 29, 3989, 3163, 1292, 6576, 2206, 7169, 3396, 1017};
    vector<int> endPoints = {2502, 2429, 9080, 4196, 8752, 7295, 6019, 7122, 9135, 1774, 9857, 9253, 6922, 8886, 8153, 8678, 9925, 6450, 4959, 6361, 5716, 3243, 8272, 4351, 4287, 8109, 8642, 7172, 9981, 4381, 8247, 8805, 2369, 9320, 5430, 9658, 7205, 6947, 8165, 6696, 3692};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9952;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> startPoints = {4787, 106, 1968, 1615, 3684, 7905, 2096, 4388, 1784, 4485, 708, 5812, 6085, 318, 1331, 3443, 3184, 4360, 6429, 268, 267, 337, 1308, 406, 7768, 5000, 542, 35, 3288, 1644, 3092, 760, 491, 7481, 5664, 752, 5083, 218, 1779, 4872, 3343, 2591};
    vector<int> endPoints = {5528, 7983, 8976, 4015, 6625, 9168, 5926, 8116, 5198, 9198, 2419, 8270, 7413, 3580, 7267, 8387, 4506, 7826, 8072, 7152, 4693, 9884, 7603, 2676, 9020, 9412, 7536, 1386, 7355, 3181, 6583, 986, 8217, 9501, 9445, 2102, 9094, 3524, 3964, 8106, 3656, 7078};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9849;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> startPoints = {4867, 1409, 966, 2078, 7039, 1528, 661, 2258, 2095, 1873, 6833, 5678, 5725, 4071, 3558, 5602, 439, 1560, 1960, 1078, 796, 79, 2075, 1490, 7740, 472, 8880, 1071, 707, 664, 3586, 2480, 8313, 1009, 2010, 1454, 742, 21, 4510, 6016, 3715, 3289, 2758};
    vector<int> endPoints = {6079, 3712, 3251, 7214, 8766, 2932, 3777, 6651, 7934, 4363, 7720, 8976, 8454, 4806, 9156, 7831, 7905, 7375, 2883, 1836, 1199, 507, 5340, 9058, 8546, 4771, 9096, 3333, 3398, 2953, 4141, 7167, 9395, 6224, 8135, 8761, 5041, 7921, 9248, 7366, 9714, 7649, 3335};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9693;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> startPoints = {1893, 2638, 1977, 4789, 8660, 3652, 2026, 5986, 81, 1419, 2243, 1060, 650, 467, 1045, 1485, 3276, 1321, 3988, 2585, 7944, 8468, 181, 3953, 4777, 133, 3485, 2088, 2934, 4789, 4960, 1000, 1806, 2669, 1457, 2997, 3596, 4843, 7372, 1026, 4722, 3489, 1598, 1196};
    vector<int> endPoints = {3169, 5303, 4197, 9103, 8681, 8753, 4031, 7042, 6251, 5813, 2715, 7229, 8863, 4769, 5004, 1594, 4324, 6540, 7679, 4708, 9269, 9219, 3587, 4978, 5006, 3261, 7194, 9031, 9778, 5992, 8964, 9104, 4565, 3134, 2668, 3545, 4217, 8838, 8563, 9262, 8799, 7604, 4225, 3690};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9697;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> startPoints = {361, 2361, 3565, 3443, 495, 5021, 1809, 3013, 3393, 5278, 1608, 2704, 1338, 144, 1336, 4602, 76, 1722, 2330, 592, 8845, 4987, 8616, 487, 1961, 4696, 1628, 1908, 4472, 1917, 292, 6734, 1053, 7075, 4118, 429, 2778, 2278, 665, 4116, 2736, 575, 736, 554, 1899};
    vector<int> endPoints = {9770, 9299, 7721, 7420, 8609, 6740, 9149, 8055, 8738, 9881, 2653, 3822, 4243, 2288, 3152, 4623, 2223, 1978, 9731, 8221, 9128, 9443, 8804, 5750, 7336, 8133, 2206, 3222, 6735, 7370, 3855, 9561, 7604, 8184, 8380, 6741, 4682, 8282, 833, 4123, 8027, 2116, 4090, 2793, 6059};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9805;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> startPoints = {3432, 2136, 4874, 1182, 6788, 38, 3351, 2972, 3070, 2188, 1487, 3053, 680, 5901, 4174, 1695, 2465, 1081, 7619, 5825, 3836, 2580, 4397, 1023, 4832, 4242, 2702, 500, 686, 4635, 1399, 1687, 3161, 9124, 1381, 6258, 3873, 720, 2192, 6038, 7811, 8243, 2422, 541, 1545, 499};
    vector<int> endPoints = {8793, 4580, 5907, 8072, 8719, 474, 8329, 6289, 3591, 5786, 3239, 4892, 7062, 7003, 8478, 6139, 3997, 3637, 9513, 9991, 5721, 4826, 8978, 1890, 6941, 7349, 8707, 5139, 8346, 5890, 8412, 2814, 8935, 9409, 9876, 7187, 6703, 2663, 2564, 6359, 8587, 9467, 6865, 3188, 3062, 9615};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9928;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> startPoints = {5021, 1200, 45, 1570, 5965, 8456, 1530, 6817, 555, 1492, 588, 3388, 2318, 5789, 132, 1775, 3567, 2077, 2257, 893, 102, 4750, 721, 8989, 335, 3256, 2352, 479, 2680, 1, 4422, 6135, 2360, 2192, 176, 1354, 1847, 6344, 1910, 4963, 59, 71, 2700, 1068, 3529, 1549, 3730};
    vector<int> endPoints = {9099, 7225, 1049, 8636, 9458, 9405, 9960, 7975, 7531, 8044, 6801, 8914, 7450, 6272, 9381, 4640, 8299, 7953, 3585, 5331, 489, 7232, 4269, 9610, 1639, 9046, 9658, 5300, 8989, 5567, 6894, 8007, 6741, 3697, 3186, 4042, 3939, 7469, 4380, 5708, 5383, 7502, 9462, 8100, 5154, 2071, 9148};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9959;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> startPoints = {843, 3048, 4063, 8771, 8469, 6747, 4397, 497, 5677, 3042, 1085, 1563, 7021, 1909, 5651, 5476, 7614, 5220, 2346, 2176, 1632, 1662, 8260, 9419, 9021, 2685, 3917, 1714, 1266, 65, 388, 5617, 2003, 3027, 3150, 8629, 6407, 2294, 8489, 6175, 1068, 641, 6839, 3891, 272, 2992, 2200, 8290};
    vector<int> endPoints = {2244, 4117, 6361, 9551, 9729, 7511, 5869, 7103, 7350, 8051, 4521, 5832, 9850, 7240, 9492, 8578, 9874, 9177, 4614, 6796, 6856, 2883, 8901, 9769, 9273, 5839, 8886, 1892, 3697, 1748, 6932, 6080, 9128, 8630, 4588, 9171, 9863, 5426, 9679, 6608, 5234, 6459, 7631, 7035, 2628, 8780, 7460, 9661};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9809;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> startPoints = {995, 1148, 6716, 6640, 4883, 2657, 384, 2648, 6839, 1497, 7281, 8057, 175, 3271, 4287, 2503, 699, 530, 205, 7540, 1621, 3760, 2934, 480, 8492, 8594, 537, 536, 1474, 4915, 5752, 3757, 2252, 726, 2758, 392, 7271, 2932, 134, 3690, 3693, 2624, 989, 1646, 928, 669, 5447, 4597, 121};
    vector<int> endPoints = {2305, 8422, 8890, 8701, 5566, 3659, 8244, 2762, 9600, 7208, 9248, 8421, 578, 6785, 7997, 4977, 2138, 2461, 2117, 8827, 4457, 4397, 7096, 611, 9566, 9160, 7746, 7670, 1553, 6370, 6759, 5432, 9063, 2401, 3034, 545, 8791, 6192, 7102, 8209, 4666, 7498, 5247, 3879, 1148, 872, 5596, 5434, 1443};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9479;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> startPoints = {1731, 2859, 3965, 815, 6703, 305, 8221, 789, 47, 808, 6089, 3741, 598, 6473, 506, 7588, 7807, 40, 3818, 26, 2503, 63, 2569, 4675, 8639, 1107, 81, 1083, 1247, 1380, 5500, 859, 3565, 832, 882, 887, 882, 1263, 1257, 776, 2520, 2926, 5132, 2673, 999, 2737, 5974, 354, 934, 2142};
    vector<int> endPoints = {8153, 4434, 9385, 1392, 9864, 950, 8683, 2665, 2466, 3929, 9813, 5427, 1604, 7195, 5158, 9858, 7888, 1446, 9364, 7974, 5087, 6410, 6840, 5393, 9984, 7650, 8187, 3388, 8685, 4755, 8126, 4275, 6422, 3872, 4427, 6646, 6478, 4923, 5045, 5821, 3854, 4771, 7249, 3335, 6333, 9310, 7590, 1071, 2077, 7281};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9958;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> startPoints = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> endPoints = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> startPoints = {8786, 7391, 201, 4414, 5822, 5872, 157, 1832, 7487, 7518, 2267, 1763, 3984, 3102, 7627, 4099, 524, 1543, 1022, 3060};
    vector<int> endPoints = {9905, 7957, 3625, 6475, 9314, 9332, 4370, 8068, 8295, 8177, 7772, 2668, 7191, 8480, 9211, 4802, 2625, 1924, 9970, 4180};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9813;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> startPoints = {51, 807, 943, 4313, 8319, 3644, 481, 220, 2161, 448, 465, 1657, 6290, 22, 6152, 647, 3185, 4474, 2168};
    vector<int> endPoints = {1182, 912, 1832, 7754, 9557, 7980, 4144, 3194, 7129, 5535, 1172, 2043, 6437, 7252, 9508, 4745, 8313, 8020, 4017};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9535;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> startPoints = {45, 100, 125, 10, 15, 35, 30, 9};
    vector<int> endPoints = {46, 200, 175, 20, 25, 45, 40, 10};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> startPoints = {5};
    vector<int> endPoints = {88};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> startPoints = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> endPoints = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> startPoints = {4906, 5601, 5087, 1020, 4362, 2657, 6257, 5509, 5107, 5315, 277, 6801, 2136, 2921, 5233, 5082, 497, 8250, 3956, 5720};
    vector<int> endPoints = {4930, 9130, 9366, 2322, 4687, 4848, 8856, 6302, 5496, 5438, 829, 9053, 4233, 4119, 9781, 8034, 3956, 9939, 4908, 5928};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9510;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> startPoints = {0, 4350, 2, 54, 222, 545, 1000, 54, 54, 0, 0, 254, 323, 9999, 32};
    vector<int> endPoints = {66, 10000, 1000, 435, 3579, 10000, 6700, 98, 100, 1, 4352, 355, 9999, 10000, 763};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> startPoints = {0};
    vector<int> endPoints = {5};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> startPoints = {0};
    vector<int> endPoints = {1};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> startPoints = {3, 1};
    vector<int> endPoints = {4, 5};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> startPoints = {5, 5};
    vector<int> endPoints = {10, 10};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> startPoints = {1, 1};
    vector<int> endPoints = {2, 3};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> startPoints = {2, 3};
    vector<int> endPoints = {3, 4};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> startPoints = {2, 1};
    vector<int> endPoints = {3, 5};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> startPoints = {3, 1};
    vector<int> endPoints = {5, 7};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> startPoints = {1, 1};
    vector<int> endPoints = {10, 2};
    SnowyWinter* pObj = new SnowyWinter();
    clock_t start = clock();
    int result = pObj->snowyHighwayLength(startPoints, endPoints);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22646424&rd=11125&pm=8620
********************************************************************************
#include<iostream> 
#include<vector> 
#include<string> 
#include<map> 
#include<stack> 
#include<queue> 
#include<cmath> 
#include<sstream> 
#include<algorithm> 
#include<stdio.h> 
using namespace std; 
class SnowyWinter 
{ 
 public: 
 int snowyHighwayLength(vector <int> s, vector <int> e) 
 { 
  int c=0; 
  vector <bool> v(11000,false); 
  for(int i=0;i<s.size();i++) 
   for(int j=s[i];j<e[i];j++) 
    v[j]=true; 
   for(int i=0;i<v.size();i++) 
   if(v[i]) 
   c++; 
   return c; 
  } 
 };

********************************************************************************
*******************************************************************************/