/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1771
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

class Collision {
public:
    double probability(vector<int> assignments, int ids);
};

double Collision::probability(vector<int> assignments, int ids) {
    double ret;
    return ret;
}


int test0() {
    vector<int> assignments = {20, 20};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2113618990410422;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> assignments = {123, 456};
    int ids = 123456;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3769052883184334;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> assignments = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int ids = 2147483647;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0069090268185510555;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> assignments = {1005, 1005};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> assignments = {6159, 4927, 6323, 2339, 7797, 9793, 6654, 5711, 5326, 3700, 945, 3340, 738, 5359, 9794, 5659, 7476, 8771, 483, 6621, 2119, 6778, 7009, 3695, 7841, 8748, 9044, 2376, 5703, 1783, 4337, 9436, 9444, 9440, 57, 5176, 9658, 1417, 5417, 3909, 9897, 7066, 6760};
    int ids = 2001034851;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6742947149701077E-7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> assignments = {6764, 5605, 9981, 4914, 4178, 2166, 912, 8102, 5494, 926, 1552, 949, 3981, 4245, 8396, 8824, 3966, 3639, 3711, 3231, 88, 1066, 2450, 3738, 4262, 2092, 3019, 1168, 7292, 4754, 3344, 795, 2733, 8359};
    int ids = 648336135;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5319887938925983E-7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> assignments = {4705, 2595, 9038, 1057, 7607, 3653};
    int ids = 93207251;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02036272439195439;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> assignments = {4178, 3432, 9946, 5782, 9952, 936, 6373, 5366, 8409};
    int ids = 712190492;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.040864223266969896;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> assignments = {6043, 1635, 3514, 4539, 2272, 8789, 1237, 6489, 6766, 7007, 7661, 5122, 8803, 1132, 897, 6942, 5311, 5406, 1674, 2633, 9271, 9826, 7702, 4326, 8044, 2663, 7139, 4309, 595, 1216, 7553, 5929, 6752, 4217, 6811, 8280, 8971, 4482, 1262, 1441, 5804};
    int ids = 26492068;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E-323;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> assignments = {5251, 7545, 1155, 362, 9600, 5280, 184, 2520, 9142, 1859, 5457, 146, 8297, 7220, 7012, 6654, 1476, 8232, 6899, 4175, 9404, 4678, 7090, 5530, 9643, 901, 9413, 5136, 2853, 5392, 4013, 6522, 6788, 5164, 1245, 7458, 8758, 9494, 7120, 776, 4243, 2098, 7273};
    int ids = 1478022888;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3172076603021851E-8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> assignments = {4190, 4124, 7733, 6784, 4686, 7293, 1907, 5803, 2713, 3894};
    int ids = 546259475;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03146855424566798;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> assignments = {1486, 9189, 9190, 5483, 182, 6081, 4454, 9177, 2913, 4567, 6755, 1831, 3628, 5809, 9406, 8446, 1398, 3343, 7789, 3286, 3692, 4581, 9196, 53, 7287, 7670, 9960, 1429, 2741, 9552, 5807, 4681, 9330, 2358, 8296, 2021, 1701, 3891, 3141, 8599, 6445, 7769};
    int ids = 263222947;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 4.355798682508344E-41;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> assignments = {1604, 6387, 4078, 4456, 5303, 5541, 4112, 1226, 7750, 3557, 3381, 8076, 2186, 6920, 9716, 9864, 174, 1200, 371, 6316, 4753, 6556, 775, 9873, 3042, 3949, 8318, 52, 2061, 9214, 1332, 3667, 8938, 2667, 7714, 5979, 1604, 6499, 1450, 8655, 3491, 8210, 8427};
    int ids = 661346148;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 7.48702282050674E-15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> assignments = {4763, 7251, 3664, 7171, 1216, 9181, 7850, 3793, 4246, 4473, 8821, 575, 4352, 3523, 2582, 4430, 5295, 6786, 1840, 8753, 9203, 1273, 6267, 4219, 2332, 8523, 82, 7360, 6680, 3830, 2639, 4201, 1022, 3436, 7848, 9780, 8447, 3627, 2280, 280, 3042};
    int ids = 100509008;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 7.446304268220031E-82;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> assignments = {1728, 4743, 8320, 5063, 2372, 7912, 8720, 9545, 5440, 1636, 6621, 2461, 235, 6352, 8884, 7352, 4000, 5313};
    int ids = 1042131609;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004161651048922545;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> assignments = {8886, 4672, 4156, 9893};
    int ids = 619616732;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10289661515891646;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> assignments = {5620, 4026, 2148, 8061, 7215, 4013, 5455, 6041, 1982, 2188, 3958, 3545, 1307};
    int ids = 1536252695;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03629740668400133;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> assignments = {7152, 8378, 7527, 8110, 5015, 863, 4397, 3694, 8284, 7101, 7141, 4124, 4648};
    int ids = 1077793641;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01780355422016508;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> assignments = {3353, 1962, 3177, 454, 4746, 2376, 9314, 9416};
    int ids = 1462371693;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05381918611811942;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> assignments = {5259, 3177, 759, 7812, 6469, 9433, 9563, 3907, 9715, 7977, 2850, 9192, 371, 3016, 9872, 45, 623, 2881, 5299, 2592, 6375, 4138, 2791, 5444};
    int ids = 1239106987;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0012482103352535199;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> assignments = {6214, 7865, 5404, 9912, 3124, 1399, 8686, 1462, 325, 8390, 734, 6272, 3504, 1637, 7136, 9192, 6671, 5791, 6983, 1925, 9777, 8023, 3500, 7789, 1657, 894, 7045, 3750, 4541, 811, 4588, 9844, 7720, 9027, 6080, 1921, 8394, 2623, 2494, 4161, 2136, 4491, 1237};
    int ids = 1103941371;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 7.352275429399718E-10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> assignments = {1242, 5176, 6533, 657, 5498, 7208, 1151, 5200, 7847, 5248, 6526, 9369, 9132, 8753, 1841, 276, 7822, 9484};
    int ids = 992974713;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0031318879046331894;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> assignments = {5056, 1442, 497, 1131, 7226, 7382, 5759, 6380, 9024, 6883, 6713, 9683, 5841, 582, 5119, 7874, 1944, 1049, 2946, 692, 194, 5493, 8123, 7593, 7175, 1127, 1415, 207, 2742, 2825, 8213, 5826, 2141, 8167};
    int ids = 1320413318;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5565468798867416E-5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> assignments = {1000, 0};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> assignments = {0, 1000, 0};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> assignments = {76, 2365, 619, 7952, 5927, 5576, 1518, 3695, 5695, 3018, 6347, 7131, 9158, 8307, 9411, 2963, 9846, 7919, 4934, 3925, 922, 5202, 2592, 805, 6004, 5352, 4649, 9895, 2113, 7000, 228, 9120, 8735, 4301, 9483, 3524, 3091, 8033, 2324, 8560, 7755, 7357, 8494, 8605, 367, 7024, 2716, 477, 5623};
    int ids = 1800590576;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 7.2315474224492E-9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> assignments = {5327, 5379, 5677};
    int ids = 2142347951;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01983142691110551;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> assignments = {2805, 3781, 4189, 3104, 6815, 3357, 4177, 7478, 5734, 7931, 1117, 6243, 7048, 2469, 6843, 8853, 7810, 3372, 3299, 6565, 6450, 9320, 8701, 2026, 9457, 7743, 4315, 5866, 6821, 9276, 500, 8138, 3052, 855, 2855, 4005, 9741, 884, 7057};
    int ids = 131074508;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6026710430488814E-71;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> assignments = {978, 3193, 7108, 8196, 9031, 1464, 3308, 103, 5072, 7675, 8039, 5001, 460, 2112, 8871, 8520};
    int ids = 882200381;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010598777106219266;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> assignments = {6697, 3965, 696, 5790, 1058, 3278, 4083, 1597, 9308, 6593, 9281, 5806, 3933, 662, 3452, 4489, 1178, 1670, 1429, 6181, 3715, 6710, 1658, 402, 4922, 9204, 9438, 7945, 4813, 2166, 1564, 7188, 2652, 8241, 2709, 5549, 541};
    int ids = 1473489999;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 6.3073598601672E-5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> assignments = {4694, 40};
    int ids = 1673664295;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0065591770691942886;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> assignments = {4876, 7509, 1992, 3570, 9511, 7072, 2376, 6060, 1297, 7702, 9804, 2004, 8, 677, 5791, 3745, 2756, 7085, 3145, 9922, 6103, 3805, 999, 9335, 2951, 7131, 3893, 9491, 1979, 6747, 5561, 1559, 4990, 2281, 3039, 8535, 4266, 7484, 5939, 451, 1752, 1761, 1854, 3231, 7787};
    int ids = 490102786;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 9.105903246144105E-20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> assignments = {8209, 4881, 4076, 1036, 3599, 7236, 1549, 5745, 8316, 8993, 430, 7361, 6184, 2366, 1966, 167, 6373, 2922, 4870, 7385, 776, 3049, 2240, 815, 3628, 2444, 3894, 4662, 7339, 3975, 482, 5856, 4998, 9142, 2227, 6390, 2909, 2499, 8458, 6584, 6758, 3397, 4545, 3664, 7340, 3443, 7435, 9777};
    int ids = 1703734335;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4297451455613994E-7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> assignments = {2622, 831, 4732, 9890, 1574, 3084, 3626, 87, 7080};
    int ids = 599526190;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07225244133164788;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> assignments = {6934, 3423, 959, 9848, 2116, 4378, 9244, 1932, 4549, 7762, 7675, 7140, 7126, 8844, 9737, 3505, 6697, 7482, 9469, 8143, 8188, 284, 4883, 2613, 8572, 2718, 1024, 4779, 8231, 5004, 568, 8717, 865, 1545, 6648, 7285, 3485, 2956, 9419};
    int ids = 26371654;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5E-323;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> assignments = {4747, 6455, 9725, 8511, 2314, 470, 1479, 5263, 9312, 4318, 3564, 2851, 6022, 9533, 9345, 7327, 3493, 4826, 3239, 8811, 10000, 1279, 1272, 3302, 9087, 9713, 5327, 6063, 6498, 3641, 8456, 8110, 997, 4628, 8873, 7765, 7862, 4333, 1994, 9762, 9484, 9026, 1381};
    int ids = 1482063249;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 5.569583738729275E-10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> assignments = {9513, 9730, 5610, 7052, 3933, 6565, 5776, 1367, 3208, 7568, 5736, 4188, 4262, 9171, 9753};
    int ids = 99406833;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 2.431978647199953E-18;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> assignments = {3672, 9858, 8401, 2926, 70, 2665, 4220, 6137, 6693, 9899, 6183};
    int ids = 2129919893;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04505850518454285;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> assignments = {6726, 8292, 6626, 8598};
    int ids = 390982122;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10713601673246642;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> assignments = {4613, 6167, 654, 8570, 3551, 968, 2655, 1507, 6839, 6798};
    int ids = 551055680;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04990331281020635;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> assignments = {6615, 4659, 5494, 328, 7948, 5173, 734, 2695, 4963, 4291};
    int ids = 1666758571;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0423290951956492;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> assignments = {3374, 6168, 1865, 1623, 143};
    int ids = 1339141032;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.019642002678472603;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> assignments = {8490, 7906, 294, 9402, 8624, 1307, 8431, 4800, 8287, 241, 8981, 889, 9548, 3766, 3101, 6017, 9328, 4143, 4340, 3401, 5848, 4929, 934, 98, 4591, 9314, 7240, 581, 3938, 2989, 9413, 479, 3871, 4272, 6916, 5494, 9437};
    int ids = 1666850060;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 8.29106748783453E-6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> assignments = {5709, 189, 8341, 9818, 3217, 8357, 8422, 8187, 894, 3064, 6504, 3449, 4493, 7475, 7578, 8655, 8182, 2222, 5964, 5220, 9676, 3351, 8439, 6196};
    int ids = 45520082;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0157541307402146E-94;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> assignments = {9692, 9024, 5107, 3824, 9282, 8752, 9765, 7065, 8817, 6579, 5941, 2741, 3598, 3965, 4095, 5714, 5167, 7414, 990, 6979, 9564, 9894, 3220, 4983, 1060, 2364, 1345, 7636, 5846, 1372, 3299, 5442, 9552, 5229, 3428, 5154, 6139, 7996, 9207, 7406, 1989, 3310, 4470};
    int ids = 1970839819;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4088734157041954E-7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> assignments = {932, 4683, 832, 717, 46, 4313, 6117, 1664, 2575, 1216, 3034, 260, 287, 5855, 7392, 3649, 1068, 7537, 195, 1819, 110, 8445, 7981, 7390, 9434, 2924, 1647, 3545, 6697, 3897, 4073, 6123, 9533, 9466, 7510, 7091, 4158, 8750, 6609, 6618, 1240, 632, 3043, 369, 1059, 6939, 2643, 2472};
    int ids = 1576181551;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8756517242764293E-6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> assignments = {7401, 6922, 1439, 9113, 1678, 4219, 4273, 9340, 7694, 4440, 1656, 5641, 7256, 8670, 4368, 4811};
    int ids = 1314784005;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012609353402262748;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> assignments = {9565, 2293, 418, 1815, 890, 4691, 1291, 2678, 5488, 8005, 5402, 5231, 924, 8199, 86, 163, 1764, 7759, 6627, 997, 9088, 4872, 8232, 4404, 7038, 5569, 488, 2030, 6003, 4545, 4981, 8265, 5352, 8146, 8439, 8077, 1499, 1896, 7477, 3875, 9300, 2453, 6734, 2215, 6849, 3603};
    int ids = 1831553524;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4123450659142064E-6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> assignments = {8243, 6860, 4456, 9630, 4069, 2683, 2713, 3996, 8317, 3248, 5544, 7581, 7790, 7598, 5612, 5964, 8187, 4312, 8621, 2499, 7100, 5709, 5514, 9228, 4635, 9901, 2529, 7502, 4752, 1449, 4359, 5805, 5457, 1137, 68, 1670, 6596, 4056, 4655, 7808, 8515, 4837};
    int ids = 9915357;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> assignments = {8141, 4671, 4500, 30, 3798, 7891, 8193, 9831, 4752, 6467};
    int ids = 1894853033;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047015506709428;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> assignments = {8868, 1399, 753, 7894, 3941, 8081, 945, 2902, 9720, 4035, 3902, 4047, 7030, 6522, 9800, 4349, 7494, 4655, 1332, 3982, 3498, 5745, 238, 9753, 7464, 2344, 2571, 4098, 5929, 8435, 4008, 6142, 1474, 1366, 6892, 7793, 2755, 7890, 8581, 4896};
    int ids = 2039186151;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5137612495283822E-5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> assignments = {4096, 3343, 3355, 7873, 6633, 3561, 7816, 9595, 1539, 2446, 4301, 3652, 8033, 5646, 5790};
    int ids = 565277785;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002550237935048062;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> assignments = {2294, 2889, 4493, 7973, 4336, 3619, 5266, 9807, 5519, 8746, 9878, 7303, 4051, 4048, 2772, 6743, 7210, 9135, 2878, 8844, 1799, 2502, 1938, 5144, 7437, 9503, 5750, 8714, 7674, 8574, 3713, 8294, 765, 194, 8116, 7723, 5587, 7951, 9681, 8440};
    int ids = 1851179508;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4585517653303326E-7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> assignments = {105, 3588};
    int ids = 61087485;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09945038753563973;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> assignments = {1546, 7920, 3265, 297, 2079, 8783, 6098, 730, 5300, 9401, 8999, 7601, 7639, 5833, 7239, 600, 7908, 3852, 2283, 2017, 823, 9272, 6016, 8955, 1383, 876, 9075, 6456, 2560, 1010, 4417, 1298, 9994, 7321, 4038, 9562, 6822, 3144, 2379, 4050, 9752, 4487, 1481, 5931, 2535};
    int ids = 175010096;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.449336079370823E-60;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> assignments = {9489, 2189, 6536, 6900, 3509, 1250, 354, 3995, 6752, 6345, 443, 9638, 3523, 534, 6673, 910, 7372, 3155, 431, 4793, 2143, 4192, 1802, 500};
    int ids = 1697061239;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013841645461371607;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> assignments = {5757, 5524, 1085, 9447, 6870, 5672, 9653, 3536, 8666, 1331, 9325, 4578, 4374, 3691, 8226, 4791, 5236, 2537, 5329, 4254, 9733, 1110, 3055, 2503, 5553, 7404, 2329, 8202, 5351, 7851, 8465, 2272, 1184, 6577, 6506, 7003, 3740, 1385, 9376, 2778, 3489};
    int ids = 548348240;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 9.781897757519474E-19;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> assignments = {5155, 2438, 5464, 7265, 514, 1743, 2536, 9184, 8723, 3821, 2444, 8856, 1408, 2597, 8478, 4573, 7351, 1478, 1146, 1246, 5810, 7467, 3338, 5524, 3648, 5980, 3319, 8308, 1181, 3102, 3102, 9634, 6542, 5004, 1413, 3138, 2715, 7003, 4517};
    int ids = 1306584137;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0902245521707565E-6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> assignments = {5877, 7612, 8985, 2548, 9176, 3234, 2225, 8727, 2493, 2969, 2878, 137, 5927, 3511, 7259, 8371, 3145, 7862, 4546, 5123, 2263};
    int ids = 2011081423;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011822509607281317;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> assignments = {2589, 9141, 2390, 1503, 2381, 7300, 3268, 9153, 1486, 1040, 2694, 6027, 3069, 8177, 397, 2938, 7108, 4637, 5712, 9252, 8319, 308, 6244, 1195, 757, 3357, 3791, 5967, 2524, 8770, 6174, 8887, 7800, 1098, 6623, 1387, 898, 1085, 3656, 2947, 7904, 4238, 5490, 923, 9530, 765, 9612};
    int ids = 740538118;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5420067388032892E-13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> assignments = {3143, 1342, 6552, 8620, 2218, 9728, 4625, 8338, 2458, 5263, 9472, 3832, 3751};
    int ids = 621924753;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009655489219899022;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> assignments = {5780, 6655, 3339, 1289, 5667, 8141, 8880, 1313, 6788, 9698, 2850, 3486, 2755, 1660};
    int ids = 531247220;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006360025917363418;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> assignments = {4065, 4777, 5048, 2179, 3838, 1689, 6556, 2293, 7857, 6961, 4567, 4774, 2606, 5571, 4828, 9471, 4534, 6751, 5552, 4759};
    int ids = 1446901450;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00737466897296387;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> assignments = {3416, 3365, 5520, 2848, 7177, 8218, 5709, 5521, 9861, 9192, 1335, 3670, 2835, 8360, 1961, 4316, 720, 8615, 3562, 9051};
    int ids = 1386811712;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005377516849784079;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> assignments = {654, 7964, 9168, 6678, 7675, 6614, 1372, 8353, 8710, 2847, 2178, 2113, 521, 7987, 9754, 378, 1571, 3446, 4082, 5031, 7279, 9242, 9194, 8300, 6730, 9204, 499, 9942, 1848, 9989, 3621, 5252, 1694, 5026, 611, 3853, 3574, 5541, 2324, 9060, 3100, 7879, 8407, 5258, 5962, 6166};
    int ids = 914765701;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8248812641808254E-15;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> assignments = {6694, 4908, 5035, 7053, 9728, 8492, 9286, 9339, 3067, 7791, 8373, 8611, 770, 2045, 7942, 1844, 1721, 7195, 7165, 6694, 7182, 9105, 3133};
    int ids = 282736609;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0008144397685054E-15;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> assignments = {5484, 201, 5270, 526};
    int ids = 1651265755;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0170694914269377;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> assignments = {4959, 4057, 4396, 1187, 5605, 4889, 1466, 630, 3250, 8879, 6729, 6540, 2143, 6701, 6667, 835, 8099, 1139, 1920, 1113, 5444, 8414, 8782, 4500, 8842, 1352, 9056, 3639, 1082, 6114, 5778, 2818, 1544};
    int ids = 356631501;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 9.500548959676105E-14;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> assignments = {7936, 7672, 8990, 4321, 4208, 7866, 930, 1928, 50, 6681, 9378, 1182, 756, 1594, 2810, 734, 4029, 3499, 9197, 7228, 4882, 3607, 506, 1551, 5320, 9569};
    int ids = 1672988280;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00454005817341737;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> assignments = {4395, 4180, 610, 4140, 3696, 3684, 2601, 3577, 7446, 9558, 4486, 7631, 9581, 9092, 1048, 9413, 7768, 4615, 2083, 8933, 3152, 9883, 716, 5612, 1672, 4233, 5395, 294, 9419, 3246, 9559, 8819, 546, 8980, 5164, 7214, 5955, 2976};
    int ids = 734636525;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6734781411596556E-12;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> assignments = {5830, 1687, 8917, 3206, 6145, 8224, 8350, 9966, 5737, 9546, 9779, 5391, 2117, 7117, 6094, 1532, 7926, 2483, 3103, 274, 5573, 2030, 3094, 1768, 285, 4901, 2426, 4020, 3694, 3314, 7630, 5059, 860, 2555, 2395, 7421, 998, 1215, 7572, 8105, 1232, 96, 7054};
    int ids = 618321460;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5872453090308675E-14;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> assignments = {7600, 6853, 6795, 4483, 9132, 4044, 1671, 5843, 8168, 6614, 3611, 8671, 363, 7926, 4328, 1451, 5904, 832, 1699, 5271, 8898, 9680, 1893, 3118, 3570, 7599, 2755, 7471, 7746, 246, 3303, 6571, 3987, 4177, 432, 6796, 2627, 3383, 3311, 521};
    int ids = 934777533;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 4.221972375571384E-9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> assignments = {6480, 3208, 7603, 2907, 4353};
    int ids = 1158728772;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047115405628814444;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> assignments = {3430, 8999, 580, 2063, 7380, 5059, 9275, 6610, 1150, 7035, 3900, 5265, 4868, 6678, 6050, 8285, 9515, 1062, 2523, 5269, 875, 6577, 6146, 510, 6081, 9944, 3356, 2863, 3802, 6557, 6990, 441, 7135, 1610, 1109, 7755, 924, 592, 5345, 765, 3100, 1216, 3565, 1396, 511, 9132};
    int ids = 1126648188;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 8.430440993226299E-9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> assignments = {6075, 1871, 3306, 7619, 4953, 6484, 3629, 3236, 6189, 1865, 9916, 7894, 7029, 2895, 3740, 7876, 7777, 6216, 3351, 2935, 6985, 4067, 26, 503, 1961, 5495, 7315, 4256, 7531, 4963, 4417, 9628, 9020, 3235, 6454};
    int ids = 372048259;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.206023415786296E-19;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> assignments = {2538, 6625, 6183, 944, 1200, 1440, 149, 2489, 769, 7585, 4403, 5681, 6172, 4918, 2809, 5224, 153, 5225, 2383, 4981, 6021, 6569, 476, 7489, 2374, 6741, 1192, 4493};
    int ids = 885417547;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 5.779780593337001E-4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> assignments = {7037, 9351, 4127, 7799, 4453, 2837, 4222, 3491, 1056, 4045, 1046, 1150, 8678, 1824, 6848, 3447, 658, 3337, 6975, 8073, 8282, 7767, 8584, 4291, 128, 6157, 310, 3791};
    int ids = 856063004;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3322196557609616E-5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> assignments = {8792, 7561, 5712, 377, 7060, 6428, 411, 4366, 3776, 585, 5434, 8406, 1249, 9644, 461, 2067, 9360, 4008, 6653, 1711, 3449, 1480, 1467, 3998, 961, 205, 43, 6258, 3369, 335, 5153, 8402, 5628, 543, 5425, 6115, 8958, 2827, 875, 5494, 5998, 3445};
    int ids = 2083351236;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0031215826711308E-4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> assignments = {6487, 1548, 3834, 989, 2830, 775, 2774, 5402, 3499, 8762, 9198, 5065, 9676, 6092, 8102, 3848, 8168, 1445, 6184, 171, 370, 7250, 495, 5730, 7952, 9484, 9137, 5313, 9541, 3247, 9174};
    int ids = 1924320963;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6695288857780837E-4;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> assignments = {7221, 9238, 5661, 1806, 7213, 5626, 6015, 7854, 7879};
    int ids = 1978615937;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04670637265629396;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> assignments = {1889, 9921, 5330, 617, 2101, 6822, 7199, 9904, 6873, 6102, 7854, 2885, 229, 2568, 4616, 6711, 3065, 7654};
    int ids = 1028192544;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005639669198999227;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> assignments = {4424, 4963, 8833, 1186, 9763, 4044, 3197, 7384, 1638, 9761, 4077, 3358, 7685, 5760, 9271, 8251, 2479, 6295, 563, 10, 3157, 6214, 8595, 8358, 8733, 4448, 9808, 4662, 5245, 6289, 8016, 8075, 8627, 4717, 6090, 2149, 205, 4368, 1681, 1442, 6032, 1628, 9626, 6128};
    int ids = 255528059;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.509276248153178E-47;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> assignments = {5150, 7347, 1288, 1547, 2154, 5872, 7626, 1622, 1625, 580, 6383, 1195, 1616, 3209, 1949, 9074, 1011, 4591, 2538, 4125, 4372, 933, 3856, 2243, 9466, 5440, 8155, 5767, 4575, 8317};
    int ids = 476478329;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2288835852422687E-7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> assignments = {4787, 9180, 2782, 8218, 9371, 8812, 3685, 2991, 1516, 2900, 3415, 6491, 4008, 6364, 5932, 4013, 8043, 4046, 8929, 836};
    int ids = 94332340;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.806382132950033E-25;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> assignments = {6908, 7190, 8708, 5320, 261, 3854, 8143, 373, 4754, 4250};
    int ids = 1298754805;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05146732161538253;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> assignments = {9276, 9500, 3680, 7377};
    int ids = 1205102984;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07371629272213931;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> assignments = {4827, 6422, 5236, 9402, 1064, 2176, 4397, 9924, 8269, 4685, 8524, 6099, 4438, 6917, 548, 4125, 4759, 9658, 1877, 3712, 1704, 7553, 4265, 8534, 3536, 2347, 7337, 4000, 835, 5643, 6429, 1769, 2782, 7024, 6935, 6640, 6554};
    int ids = 1523905869;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1694829295278804E-6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> assignments = {187, 58, 44, 8119, 3098, 3486, 2439, 6897, 172, 8885, 7927, 1910, 4615, 5822, 1799, 8159, 8930, 4711, 2471, 2042, 9097, 4379, 3093, 9971, 5566, 1162, 4673, 7250, 6256, 3954, 8362, 2431, 4333, 8756, 643, 1035, 3661, 4628, 1473, 8599, 2048, 7164, 6079};
    int ids = 1582284471;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5208397166100443E-6;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> assignments = {4426, 9495, 1043, 7427, 6347, 7501, 7284, 2760, 6415, 258, 366, 1012, 5504, 8167, 2157, 1349, 606, 9469, 2562, 560, 4580, 9120, 9596, 2058, 7013, 67, 2767, 8093, 2275, 9136, 6841, 83, 120, 4165, 449, 5904, 523, 7147, 6235, 1250, 7446, 1821, 7194, 9853, 971, 2048, 7418, 374, 9434};
    int ids = 528550719;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 7.223438557980127E-20;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> assignments = {980, 9492, 7148, 2443, 2842, 8156, 3969, 6642, 5853, 8732, 8247, 3527, 4409, 5172};
    int ids = 820927566;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009496365648532852;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> assignments = {2816, 6311, 2941, 9066, 8183, 7618, 9564, 7982, 9850, 9642, 8326, 8871, 233, 6888, 7638, 6390, 8966, 5648, 7943, 4462, 5325, 9351, 8210, 6097, 9127, 3131, 6767, 2632};
    int ids = 1527425665;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 4.54857107625638E-6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> assignments = {639, 2032, 6872, 9199, 9704, 8145, 5982, 9101, 1229, 8441, 8808, 5714, 8275, 2478, 361, 3737, 2670, 5973, 7773, 7013, 2852, 8164, 3854, 9954, 2787, 3917, 4620, 4162, 5317, 5225, 1172, 9154};
    int ids = 1223998057;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 2.299183746985235E-6;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> assignments = {3254, 9047, 2933, 6528, 6049, 5634, 3006, 8328, 19, 2315, 9074, 3694, 903, 8555, 7037, 2274, 1887, 9958, 7091, 9915, 8934, 5571, 1644, 923, 6683, 8702, 6169, 1389, 2806, 6079, 214};
    int ids = 1980319467;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 6.481984982542395E-4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> assignments = {1803, 2282, 6082, 5120, 3224, 5777, 2288, 7367, 6724, 5922, 906, 5418, 2968, 5639, 3063, 3959, 9965, 9563, 3312, 388, 7567, 4802, 400, 4900, 4436, 915, 7080, 9881, 5167, 9747, 9046};
    int ids = 552066262;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 4.464841215538802E-10;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> assignments = {4191, 6743, 5740, 6138, 4986, 1719, 5082, 6407, 5753, 2796, 4432, 6371, 8162, 2307, 7688, 4368, 8294, 7120, 8646, 6175, 4573, 1839, 4655, 9645, 6395, 1837, 3353, 8277, 7735, 1283, 3002, 2585, 9807, 2167, 1557, 3457, 736, 5930, 8533, 3768, 5348, 9787, 1069, 9958, 9355, 811, 3067};
    int ids = 1637238071;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 8.506596908965146E-9;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> assignments = {6026, 2383, 1704, 4931, 7982, 7813, 5987, 9295, 3495, 4248, 7376, 175, 62, 9957, 2190, 4230, 9475, 2708, 6916, 9651, 3528, 5062, 2199, 1044, 7238, 1066, 6188, 5062, 1243, 7870, 7842, 470, 5173, 1331, 6108};
    int ids = 423690775;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 9.176437939810718E-15;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> assignments = {7743, 5504, 9295, 1886, 6617, 6051, 5752, 29, 4412, 8770, 3994, 9190, 5732, 1450, 8825, 9590, 8004, 8978, 402, 2443, 2404, 2676, 2804, 5243, 5224, 9300, 5246, 8020, 8688, 5881, 164, 2102, 2299, 2489};
    int ids = 1600119438;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5551916210655406E-5;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> assignments = {9526, 2958, 1990, 2111, 6004, 378, 9681, 7908, 3575, 3506, 5066, 4121, 7532, 6240, 3593, 3676, 9629, 6122, 8897, 596, 5855, 1694, 5735, 7174, 1924, 5324, 5413, 4156, 8709, 5263, 9074, 5483, 7407, 8730, 2252, 7497, 7436, 1422, 3241, 1169};
    int ids = 721613572;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.495323246802401E-13;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> assignments = {4075, 4149, 3586, 6342, 1065, 854, 2096, 8794, 2557, 8347, 8576, 2417, 3765, 8849, 4286, 6819, 342, 5232, 5605, 649, 9330, 9299, 6200, 5111, 2050, 8490, 7158, 1555, 1543, 4732, 8459, 5600, 2461, 4955, 7801, 2057, 1718, 3382, 5532, 9870};
    int ids = 1514512239;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6888258800697977E-6;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> assignments = {545, 6001, 7731};
    int ids = 769996632;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05638657078075893;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> assignments = {2, 3, 4, 5, 6};
    int ids = 200003;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7484781342147482E-4;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> assignments = {44, 5, 34, 22};
    int ids = 334456;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005155411696098566;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> assignments = {1, 5, 10, 20, 30};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10988899792940177;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> assignments = {1, 5, 10, 25, 30};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09559303910556256;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> assignments = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int ids = 2147483647;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1173770699525203E-24;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> assignments = {999, 1};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> assignments = {0, 1000};
    int ids = 1000;
    Collision* pObj = new Collision();
    clock_t start = clock();
    double result = pObj->probability(assignments, ids);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4570&pm=1771
********************************************************************************
/*
 *  ... I pity the poor soul trying to read through this code to challenge it...
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue>
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define vout(x) cout << #x << ": {"; for (int blob = 0; blob < x.size(); blob++) {cout << x[blob]; if (blob!=x.size() -1) cout << ", ";} cout << "}" << endl
#define len length()
#define si size()
#define loop(A,B) for (A = 0; A < B; A++)
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vvb vector<vector<bool> >
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) {
    if (i) os << ", ";
    os << temp[i];
  }
  os << "}";
  return os;
}
int gcd(int a, int b) {if (a==0 || b==0) return max(a,b); if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
 
//----------------------------
 
class Collision {
  public:
  double probability(vector <int> a, int b) {
    for (int i = 0; i < a.si; i++) if (a[i] > b) return 0;
    
    double F = 1;
    int s = 0;
    for (int i = 0; i < a.si; i++) s += a[i];
    for (int i = 0; i < s; i++) F *= (1.0 * (b - i) / b);
    cout << 1 - F << "\n";
    
    double S = 1;
    int at = 0;
    for (int i = 0; i < a.si; i++) {
      for (int j = 0; j < a[i]; j++) {
        S *= (1.0 * (b - at - j) / (b - j));
      }
      at += a[i];
    }
    cout << 1 - S << "\n";
    return S - F;
  }
};

********************************************************************************
*******************************************************************************/