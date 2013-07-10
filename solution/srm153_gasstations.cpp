/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1770
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

class GasStations {
public:
    double tripCost(vector<int> dist, vector<int> price, int mpg, int tankSize, int tripLength);
};

double GasStations::tripCost(vector<int> dist, vector<int> price, int mpg, int tankSize, int tripLength) {
    double ret;
    return ret;
}


int test0() {
    vector<int> dist = {100, 100};
    vector<int> price = {1000, 1500};
    int mpg = 20;
    int tankSize = 10;
    int tripLength = 300;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 5000.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> dist = {300, 450, 525};
    vector<int> price = {1659, 1529, 1439};
    int mpg = 20;
    int tankSize = 20;
    int tripLength = 600;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 15277.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> dist = {300, 450, 525};
    vector<int> price = {1659, 1439, 1529};
    int mpg = 20;
    int tankSize = 20;
    int tripLength = 600;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 14940.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> dist = {300, 125, 450, 525};
    vector<int> price = {1659, 1729, 1439, 1529};
    int mpg = 20;
    int tankSize = 20;
    int tripLength = 600;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 14940.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> dist = {200};
    vector<int> price = {1000};
    int mpg = 20;
    int tankSize = 20;
    int tripLength = 400;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
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
    vector<int> dist = {5217, 3999, 6536, 3131, 6007, 3710, 4257, 4937, 4053, 4849, 6138, 7364};
    vector<int> price = {11488, 8144, 19069, 14724, 16286, 1533, 10936, 2287, 7062, 8109, 7688, 14123};
    int mpg = 219;
    int tankSize = 21;
    int tripLength = 9016;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 33353.14611872147;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> dist = {848, 1281, 1484, 1005, 1405, 792, 731, 3468, 138, 60, 3173, 193, 1445, 1537, 593, 2897, 1289, 3542, 3351, 3887, 192, 1028, 3486, 3852, 1602};
    vector<int> price = {631, 3516, 7849, 18046, 2932, 11702, 13118, 13269, 5262, 8389, 11095, 1320, 12756, 2481, 14055, 4617, 7075, 10010, 14204, 3935, 3218, 9098, 16899, 6350, 3786};
    int mpg = 524;
    int tankSize = 3;
    int tripLength = 4184;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 13265.65458015267;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> dist = {3576, 5226, 982, 6921, 1232, 3764, 751, 7194, 5130, 6835, 6318, 3320, 5239, 6873, 2065, 7017, 6818, 2172};
    vector<int> price = {9719, 8252, 6668, 12841, 18446, 14775, 15271, 18265, 10229, 3869, 11499, 13381, 1227, 5861, 12823, 17444, 7651, 15216};
    int mpg = 491;
    int tankSize = 5;
    int tripLength = 7253;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 54878.160896130335;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> dist = {3158, 3309, 1424, 5151, 7258};
    vector<int> price = {10213, 9892, 6729, 16617, 17847};
    int mpg = 10;
    int tankSize = 485;
    int tripLength = 7750;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 2418268.8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> dist = {7315, 900, 4260, 5299, 2761, 733, 5362, 4309, 1836, 7794, 2184, 8513, 8038, 118, 2528, 1984, 4467, 8282, 4344, 461, 4514, 7651, 479, 4998, 5329, 6359, 6407};
    vector<int> price = {10704, 14697, 2360, 1130, 9479, 17075, 14671, 12676, 13247, 4408, 14181, 13049, 11608, 11655, 574, 18703, 7268, 5780, 16662, 12174, 3005, 17639, 7743, 17814, 10727, 13114, 13583};
    int mpg = 14;
    int tankSize = 122;
    int tripLength = 8817;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 1958585.285714286;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> dist = {8157, 1249, 2737, 4512, 8390, 1030, 8386, 5193, 7719, 1603, 3312, 7804, 2964, 5816, 7198, 843, 2250, 5711};
    vector<int> price = {4293, 19531, 12749, 4338, 14754, 13200, 14332, 4382, 15557, 8438, 15445, 5334, 4686, 3005, 10113, 14268, 6914, 8119};
    int mpg = 2;
    int tankSize = 710;
    int tripLength = 8490;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 2.02115845E7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> dist = {3939, 5864, 7376, 6255, 5520, 2368, 4831, 6270, 1196, 4814, 3630, 3102, 4939, 2784, 4079, 1303, 8301, 7646, 7216, 6930, 5141, 8096, 4398, 2800, 8694, 6807, 5825, 6763, 820, 5253, 4758, 2665, 8315, 7931, 8765, 7071, 4526, 6201};
    vector<int> price = {1129, 10351, 5626, 3588, 16776, 7247, 15055, 691, 18487, 3319, 10510, 6569, 15571, 15637, 12904, 8600, 5728, 11526, 13119, 5185, 3184, 10560, 18066, 19362, 18632, 19718, 5711, 6958, 7644, 5179, 15282, 11162, 14681, 16937, 12220, 12853, 9482, 5657};
    int mpg = 216;
    int tankSize = 17;
    int tripLength = 9372;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 30227.333333333358;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> dist = {1469, 238, 1252, 3232, 29, 3648, 1510, 1508, 652, 2927, 2292, 972, 3309, 935, 1821, 1598, 1861, 1410, 920};
    vector<int> price = {3475, 17776, 9448, 3725, 11317, 16790, 10711, 8939, 15915, 14265, 15232, 9137, 11968, 15568, 10802, 7616, 13740, 15816, 17965};
    int mpg = 5;
    int tankSize = 515;
    int tripLength = 3789;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 843730.0000000002;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> dist = {2674, 3011, 1847, 4363, 5097, 5617, 4565, 4591, 3846, 4688};
    vector<int> price = {6664, 7374, 17611, 9518, 19564, 4695, 1880, 13282, 17822, 11695};
    int mpg = 340;
    int tankSize = 13;
    int tripLength = 5694;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 9084.70588235295;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> dist = {1553, 915, 259, 6348, 8779, 3975, 7433, 122, 2630, 4753, 154, 7522, 7758, 5607, 4469, 2651, 6603, 8575, 8353, 8124, 5425, 7367, 7339, 4322, 6105, 8292, 5910, 1834, 8224, 7637};
    vector<int> price = {12893, 19059, 3075, 17135, 18156, 19708, 19212, 9170, 18168, 17748, 17242, 10872, 15487, 1119, 11160, 3377, 13882, 14905, 10803, 12856, 7031, 9195, 8913, 17810, 19320, 12207, 11089, 19209, 4314, 7908};
    int mpg = 396;
    int tankSize = 21;
    int tripLength = 8948;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 1785.878787878788;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> dist = {2241, 7122, 5932, 5632, 1903, 1789, 6053, 8144, 6212, 2559, 4261, 209, 4447, 7623, 3711, 2527, 6060, 247, 1471, 4662, 4868, 402, 8086, 7248, 535, 78, 4304, 6268, 3063, 7814, 6926, 290};
    vector<int> price = {8216, 12315, 5958, 12933, 17602, 14388, 12426, 17336, 19728, 6524, 8374, 1322, 10736, 6642, 12379, 16176, 2734, 19233, 8708, 2334, 12885, 6951, 17216, 19726, 16125, 143, 16650, 1750, 4768, 13255, 2715, 15692};
    int mpg = 166;
    int tankSize = 48;
    int tripLength = 8474;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 4241.481927710848;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> dist = {2385, 6179, 1122, 1869, 1591, 1802, 118, 4256, 5023, 4946, 557, 5604};
    vector<int> price = {1853, 3936, 12616, 4790, 19773, 17204, 8055, 10909, 13177, 5685, 11255, 18573};
    int mpg = 152;
    int tankSize = 27;
    int tripLength = 7803;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 63100.71710526316;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> dist = {7356, 4236, 2771, 3151, 5527, 7959, 8312, 203, 1509, 2337, 677, 7211, 443, 2557, 8169};
    vector<int> price = {13112, 4151, 19235, 11843, 19975, 9957, 12515, 2699, 16133, 15610, 1944, 12965, 18318, 15729, 6360};
    int mpg = 278;
    int tankSize = 12;
    int tripLength = 8360;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 93985.60431654674;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> dist = {6506, 4343, 1844, 8864, 1743, 2626, 7978, 3314, 380, 8177, 5932, 1636, 2993, 3315, 5523, 6663, 5576, 4087, 2876, 9709, 8034, 832, 2909, 733, 3647, 6570, 1199, 2119, 3032, 119, 2814, 7149, 1577, 5251, 5227, 8717, 6105, 7661, 5967};
    vector<int> price = {18052, 238, 2379, 11089, 1146, 17778, 4225, 17356, 12233, 17042, 8824, 18203, 168, 6284, 13272, 9276, 16090, 741, 9702, 4225, 6175, 15013, 3074, 7862, 7369, 10973, 17280, 7666, 15677, 12607, 230, 2819, 9419, 16805, 3802, 2488, 2780, 19393, 11320};
    int mpg = 19;
    int tankSize = 319;
    int tripLength = 9972;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 37963.578947368485;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> dist = {110, 1932, 1360, 1237, 3414, 2560, 940, 1371, 1581, 3060, 3407, 716, 3100, 651, 1530, 1645, 44, 665, 1074, 658, 2700, 3142, 2716, 1476, 776};
    vector<int> price = {721, 10741, 9168, 12427, 2931, 15320, 8212, 17751, 8814, 18700, 10459, 9222, 18337, 18022, 5759, 9454, 18481, 10793, 8089, 10137, 7387, 4392, 15451, 4800, 1413};
    int mpg = 95;
    int tankSize = 7;
    int tripLength = 3489;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 160094.5052631579;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> dist = {660, 1244, 1605, 419, 476, 505, 1642, 595, 120, 327, 1312, 202, 379, 1509, 1133, 687, 451, 448, 1235, 858, 737, 1226, 680, 1353, 663, 1312, 638, 1342, 986, 884, 123, 937, 467, 524, 104, 1258, 467, 72, 864, 1389, 512, 216, 1568, 103, 134, 1372, 1013, 328, 862, 1554};
    vector<int> price = {18146, 6470, 14642, 9565, 1465, 9885, 12664, 17128, 2302, 7070, 10480, 12102, 7542, 14312, 11413, 3422, 14794, 11198, 2010, 14704, 116, 16462, 10804, 1349, 17033, 9743, 13518, 988, 11730, 4172, 17628, 15611, 9285, 10104, 5214, 9879, 16375, 18169, 19687, 454, 8482, 9662, 14194, 6652, 13723, 18498, 13996, 7998, 5853, 4527};
    int mpg = 586;
    int tankSize = 1;
    int tripLength = 1678;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 861.8139931740618;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> dist = {1178, 138, 722, 2789, 589, 690, 2655, 3627, 3105, 3270, 3339, 3258, 2775, 2609, 3209, 3351, 1401, 3113, 2210};
    vector<int> price = {14660, 1351, 4467, 16430, 17135, 10903, 6562, 7799, 4592, 14930, 18997, 9486, 7185, 747, 1324, 8069, 11529, 19972, 6279};
    int mpg = 32;
    int tankSize = 105;
    int tripLength = 3675;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 7353.28125;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> dist = {1992, 3317, 5398, 3771, 3073, 1724, 3614, 3736, 6057, 760, 3469, 4042, 3178, 2049, 4588, 1581, 3693, 2746, 5032, 4265, 3086, 5332, 2135, 745, 1573, 4083};
    vector<int> price = {2908, 4801, 18158, 18574, 5509, 4691, 15834, 9689, 3773, 12812, 12533, 14736, 17758, 2941, 15821, 11538, 4575, 236, 5775, 5107, 14807, 1641, 10888, 19827, 13661, 7431};
    int mpg = 8;
    int tankSize = 532;
    int tripLength = 6518;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 66729.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> dist = {4324, 6198, 5978, 4816, 4592, 402, 2452, 7282, 7341, 7445, 3823, 3507, 1747, 7753, 5445, 5188, 720, 7695, 1761, 6196, 2138, 5157, 3820, 3081, 3689, 4389, 2721, 4835, 379, 4488, 7591, 1540, 4709, 6840, 7713};
    vector<int> price = {10535, 16801, 17849, 2626, 2744, 12290, 16733, 13625, 12168, 9968, 10324, 9795, 3728, 18240, 18916, 1271, 13878, 10468, 9572, 3492, 9661, 13082, 19971, 5513, 17979, 9671, 6999, 3302, 1116, 10504, 5619, 7178, 19022, 7518, 15886};
    int mpg = 290;
    int tankSize = 15;
    int tripLength = 7754;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 16896.37931034484;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> dist = {170, 75, 1226, 1026, 692, 763, 1394, 2955, 1352, 778, 235, 1041, 2555, 1128, 2339, 1784, 2693, 2823, 1359, 1363, 996, 1617, 10, 2075, 2531, 1203, 2569, 1949, 769, 1678, 2064, 2588};
    vector<int> price = {278, 9246, 5963, 14591, 9170, 13355, 5041, 6952, 12422, 18254, 19027, 18867, 18072, 19189, 10868, 641, 6364, 4835, 16887, 7310, 14272, 2577, 11968, 11181, 8399, 11387, 5587, 15766, 6175, 4189, 10848, 9038};
    int mpg = 249;
    int tankSize = 11;
    int tripLength = 2992;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 403.4658634538199;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> dist = {4698, 5174, 3833, 415, 4700, 2327};
    vector<int> price = {8748, 12862, 7798, 4120, 10348, 14850};
    int mpg = 38;
    int tankSize = 76;
    int tripLength = 5658;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 626622.3684210527;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> dist = {2292, 6489, 4518, 2389, 3255, 2555, 9942, 9434, 6034, 9614, 6612, 1898, 2002, 9200, 9595, 5427, 136, 4623, 1492, 9637, 5190, 610, 9793, 1267, 9475, 4211, 7385, 2874, 2364, 6956, 5386, 2246, 9260, 5284, 7417, 8730, 7374, 8566, 8050, 4351, 8648, 7279, 7303, 7449, 9304};
    vector<int> price = {7052, 1529, 16535, 9530, 17054, 1049, 11734, 13894, 3554, 16896, 15608, 12781, 15163, 6589, 652, 17772, 2150, 14165, 8758, 4946, 16009, 5432, 6812, 18345, 4341, 12432, 5474, 1336, 14888, 13754, 5938, 2568, 11812, 11800, 557, 1779, 18436, 7599, 12194, 3997, 6612, 11882, 13568, 9570, 9538};
    int mpg = 22;
    int tankSize = 254;
    int tripLength = 9959;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 151568.86363636365;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> dist = {494, 6527, 6582, 5601, 2192, 6144, 5710, 1595, 8576, 7758, 7395, 2022, 607, 876, 3632, 1068, 2525, 6003, 4970, 2365, 2469, 4939, 5908, 302, 3329, 7557, 5436, 1786, 8284, 7504, 6753, 150, 8268, 7074, 5164, 8202, 6578, 8072, 4855, 4259, 259, 2428, 2100, 4060, 7628};
    vector<int> price = {13900, 19914, 15132, 13281, 15971, 447, 9366, 3384, 14859, 11230, 6669, 6171, 7119, 18594, 10298, 8117, 14199, 8645, 11603, 7089, 10127, 7595, 1322, 758, 6410, 5878, 15189, 8160, 12469, 18950, 18935, 12292, 7972, 4624, 8225, 9335, 14833, 2953, 11012, 1683, 6039, 18845, 12489, 16359, 14253};
    int mpg = 28;
    int tankSize = 150;
    int tripLength = 8710;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 144793.14285714293;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> dist = {478, 488, 108, 481, 1122, 1308, 377, 3069, 2844, 2862, 3219, 1202, 3259, 1525, 353, 1965, 412, 872, 1727, 187, 2501, 2930, 3074, 2321, 1701, 352, 832, 484, 1207, 730, 2492, 217, 3074, 2223, 2200, 391, 2734, 65, 617, 2156, 1098, 3046};
    vector<int> price = {17005, 15624, 266, 5421, 6169, 7509, 13902, 6735, 11406, 8552, 10865, 13973, 1770, 4023, 16313, 3105, 4387, 9146, 2355, 18671, 14410, 17023, 18816, 16973, 16819, 18821, 11684, 6830, 18926, 1821, 9375, 5839, 3310, 6180, 18959, 6454, 16068, 2006, 4471, 4250, 4699, 1211};
    int mpg = 103;
    int tankSize = 6;
    int tripLength = 3271;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 80379.91262135921;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> dist = {372, 830, 2188, 100, 1518, 2257, 2058, 1922, 1665, 898, 1186, 1235, 2049, 410, 549, 1618, 2002, 136, 2328, 943, 73, 501, 843, 605, 1806, 246, 444, 235, 1428, 2067, 1542, 102, 21, 143, 1089, 2081, 1393, 831, 1158, 628, 9, 973, 942, 849};
    vector<int> price = {10470, 13282, 4730, 1922, 15332, 12767, 16641, 6489, 16759, 14220, 4462, 8118, 5048, 4044, 14875, 15875, 3439, 3732, 454, 17020, 1325, 16191, 11148, 10586, 16849, 687, 6349, 12584, 5105, 9828, 15623, 3717, 6037, 7668, 3495, 2823, 15038, 19455, 15041, 2772, 3653, 10537, 4756, 14764};
    int mpg = 6;
    int tankSize = 320;
    int tripLength = 2387;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 107475.33333333323;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> dist = {4817, 5452, 2971, 1382, 5278, 253, 5238, 7140, 4811, 3971, 3604, 4835, 4654, 7065, 283, 982, 3682, 2422, 5295, 2489, 2070, 3390, 3984, 5398, 3265, 4523, 6197, 975, 1140, 5658, 3660, 2395, 3992};
    vector<int> price = {3151, 3061, 12804, 17401, 9737, 12131, 13684, 9778, 15365, 15520, 1462, 2760, 4487, 7621, 54, 5133, 13839, 19323, 527, 17845, 8618, 19157, 6067, 16337, 9992, 9668, 17065, 12971, 3835, 14262, 10186, 8134, 16704};
    int mpg = 893;
    int tankSize = 5;
    int tripLength = 7198;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 2035.69652855543;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> dist = {2656, 5429, 5066, 5083, 3051, 4559, 3745, 1288, 2679, 2730, 730, 2687, 2187, 554, 4939, 1085, 2281, 147, 3732};
    vector<int> price = {3371, 13381, 17170, 15099, 3502, 19679, 11354, 18781, 3723, 19767, 7343, 1077, 3999, 147, 9766, 515, 17887, 16786, 17543};
    int mpg = 552;
    int tankSize = 8;
    int tripLength = 5588;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 812.684782608698;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> dist = {3765, 4561, 1862, 3970, 1551, 314, 500, 4253, 2756, 136, 1685, 438, 2272, 5153, 1590, 3130, 5043, 1378, 1822, 3643, 766, 1719, 1157, 2489, 1335, 870, 3048, 4099, 4169};
    vector<int> price = {8595, 15769, 19486, 8214, 15157, 10351, 19749, 16447, 1243, 13827, 7223, 1605, 2476, 15703, 18112, 2476, 8314, 16704, 5602, 15298, 12563, 8493, 1532, 10702, 17823, 8652, 13606, 10912, 16393};
    int mpg = 6;
    int tankSize = 598;
    int tripLength = 5279;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 350318.8333333332;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> dist = {1234, 4467, 6535, 3997, 5094, 3802, 454, 974, 1589, 5818, 6702, 2587, 1153, 1825, 2695, 2001, 1529, 3403, 3868, 2472, 622, 4548, 4947, 2391, 6824, 5461, 3513, 2363, 4229, 3194, 7110, 7079, 1194, 461, 294, 3325, 6802, 3312, 3464, 3504};
    vector<int> price = {18353, 16873, 13207, 19814, 5722, 17748, 19474, 17526, 7575, 10132, 8785, 10964, 7643, 1255, 15579, 4832, 4542, 15834, 16442, 16661, 8547, 4163, 3285, 11055, 4151, 11172, 5876, 2674, 11351, 3677, 17873, 1292, 6112, 10998, 11060, 3118, 11223, 10812, 10816, 17549};
    int mpg = 174;
    int tankSize = 16;
    int tripLength = 7151;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 57517.1091954023;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> dist = {1940, 414, 1219, 2300, 754, 3641, 3548, 2098, 2373, 3465, 2383, 1970, 509, 2602, 1575, 2223, 2232, 3504, 823, 3377, 1753, 946, 2808, 3852, 1817, 3685, 880, 2137, 1984, 2906};
    vector<int> price = {5636, 11303, 7368, 18026, 363, 2498, 7960, 6052, 1065, 1992, 1673, 2346, 12953, 12988, 18444, 9696, 1586, 4944, 9641, 7286, 1557, 18691, 13542, 16248, 14945, 11848, 307, 18565, 8691, 19264};
    int mpg = 4;
    int tankSize = 415;
    int tripLength = 4021;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 461856.25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> dist = {8575, 2878, 88, 1927, 3162, 8638, 6976, 6978, 3289, 2037, 829, 5890, 1320, 6420, 1714, 962, 2777, 4167, 2242, 7627, 3092, 3355, 1971, 3838, 4636, 6305, 3072, 7038, 6956, 5053, 3604, 4566};
    vector<int> price = {18927, 12563, 12440, 19465, 17348, 17175, 10358, 2021, 9017, 12243, 17724, 6536, 5331, 15063, 11145, 12916, 3896, 3772, 18323, 16475, 15950, 9750, 3394, 19984, 6400, 19181, 15624, 17392, 12449, 1307, 17039, 107};
    int mpg = 8;
    int tankSize = 645;
    int tripLength = 8879;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 49741.625;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> dist = {3774, 3908, 4142, 1560, 610};
    vector<int> price = {5808, 19486, 3524, 4133, 1931};
    int mpg = 9;
    int tankSize = 247;
    int tripLength = 5480;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 1322716.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> dist = {1693, 1015, 963, 2600, 1137, 780, 1948, 217, 1987, 1727, 530, 966, 2625, 2417, 1225, 14, 1734, 319, 2631, 594, 1634, 2636, 1221, 2517, 1736, 77, 1822, 333, 843, 599, 2463, 1295, 2047, 2611, 3045, 1398, 2046, 1146, 1377};
    vector<int> price = {1293, 13764, 6284, 7764, 7026, 1476, 13121, 2461, 13082, 18193, 2369, 3530, 9608, 833, 9974, 19690, 17883, 7499, 9713, 6995, 197, 6541, 174, 14250, 2680, 4773, 12556, 11648, 7699, 15280, 7423, 6873, 15495, 10164, 8702, 16571, 13031, 8254, 2024};
    int mpg = 3;
    int tankSize = 805;
    int tripLength = 3345;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 53939.999999999985;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> dist = {5621, 7842, 178, 7586, 4705, 7076, 6483, 6231, 4355, 492, 491, 1102, 498, 6839, 7629, 7051, 3993, 3273, 7580, 5509, 3676, 4317, 5919, 2879, 4896};
    vector<int> price = {4934, 15145, 13578, 3995, 4967, 9790, 1946, 8932, 5579, 18675, 19893, 2585, 4197, 4304, 4089, 16781, 106, 13161, 10073, 12613, 17223, 9971, 17770, 19346, 4723};
    int mpg = 713;
    int tankSize = 3;
    int tripLength = 7940;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 24773.479663394115;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> dist = {781, 3956, 1155, 3332, 1339, 3111, 2440, 2793, 268, 1826, 1889, 2841, 3881, 3245, 2012, 3976, 2642, 3642, 3735, 2792, 1907, 478, 2725, 1074, 4372, 348, 522, 480, 1994, 2946, 3981, 3954, 1597, 3099, 3230, 2980, 2079, 3285, 4505, 906};
    vector<int> price = {10198, 19913, 18140, 5828, 14382, 17533, 4704, 4022, 8806, 10763, 11985, 8777, 7266, 16206, 19816, 16876, 3924, 15759, 364, 7569, 3260, 19892, 17049, 3742, 15585, 17702, 6485, 15071, 6724, 7284, 7122, 2102, 14528, 14886, 19021, 17000, 13245, 17106, 10476, 4530};
    int mpg = 123;
    int tankSize = 6;
    int tripLength = 4559;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 107487.19512195121;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> dist = {3703, 2039, 2697, 1186, 2948, 1736, 1620, 2420, 1790, 2784, 1205, 3365, 890, 2886, 125, 2780, 60, 2677, 116, 26, 3392, 2568, 2406, 2164, 2026, 2345, 969, 3163, 3021};
    vector<int> price = {17340, 14316, 10485, 16636, 9444, 14211, 10381, 15230, 17148, 16727, 8389, 19352, 1550, 18875, 6009, 3299, 15096, 4923, 19725, 12135, 3524, 3282, 2194, 4044, 3063, 8127, 10746, 18675, 15047};
    int mpg = 8;
    int tankSize = 380;
    int tripLength = 3920;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 170500.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> dist = {2632, 1665, 470, 5320, 105, 5161, 3961, 1937, 229, 1853, 5023, 5424, 3908, 592, 4153, 1738, 3634, 2134, 828, 3877, 986, 1126, 253, 3401, 3643, 5403, 3842, 2960, 391, 190, 3335, 2949, 5038, 1421, 438, 1497, 1255, 1399, 1213, 1433, 4488, 2301, 5292};
    vector<int> price = {12011, 12249, 2045, 17975, 10434, 13517, 17914, 7186, 14215, 3521, 4630, 1453, 14885, 9801, 11248, 1126, 10029, 10343, 17785, 13666, 1769, 8206, 12221, 10191, 1259, 8340, 10907, 7615, 4019, 18293, 17141, 18729, 3033, 4494, 18702, 19778, 10362, 17866, 3376, 9677, 17719, 2453, 19484};
    int mpg = 952;
    int tankSize = 5;
    int tripLength = 5489;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 862.2415966386573;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> dist = {1358, 3952, 6644, 2687, 9031, 3554, 856, 1086, 7562, 7930, 2937, 5095, 6037, 6887, 2141, 7319, 6712, 6350, 1454, 3232, 3822, 6044, 2433, 5256, 3155, 3935, 4298};
    vector<int> price = {1886, 1703, 14226, 3321, 14339, 18251, 2852, 6867, 3594, 1497, 18418, 8401, 14605, 9271, 9071, 15540, 3267, 11285, 1027, 3516, 9817, 8927, 10048, 10319, 13313, 11333, 16812};
    int mpg = 200;
    int tankSize = 28;
    int tripLength = 9065;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 23420.905;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> dist = {370, 7172, 5593, 6886, 3221, 5491, 114, 6935, 1072, 5494, 3163, 8085, 2008, 6136};
    vector<int> price = {6100, 10389, 7307, 10048, 9674, 19550, 15607, 15635, 12158, 14219, 15436, 14617, 12209, 5443};
    int mpg = 93;
    int tankSize = 87;
    int tripLength = 8353;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 15334.043010752663;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> dist = {591, 950, 568, 1780, 1718, 895, 635, 552, 1570, 756, 2340, 2003, 2116, 2087, 1500, 1804, 279, 1076, 1037, 2133, 424, 2120, 2206, 1230, 331, 672, 1183, 414, 1534, 1056, 1922, 680};
    vector<int> price = {19560, 19508, 16890, 9931, 14800, 3169, 5085, 9572, 16430, 5761, 6132, 3399, 2893, 11800, 2470, 7424, 16065, 6284, 15977, 4610, 12726, 17191, 8056, 12423, 16533, 4458, 2737, 14610, 6895, 13223, 564, 5653};
    int mpg = 154;
    int tankSize = 15;
    int tripLength = 2368;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 212.4155844155862;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> dist = {448, 401, 2191, 516, 2062, 2693, 416, 2362, 903, 2751, 1309, 2652, 696, 2960, 848, 12, 2469, 1479};
    vector<int> price = {3195, 7534, 19729, 6166, 3577, 9024, 9130, 19486, 1756, 4864, 1672, 12158, 15415, 10289, 1188, 4919, 9908, 3023};
    int mpg = 438;
    int tankSize = 4;
    int tripLength = 3106;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 4370.43607305936;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> dist = {6581, 3757, 8867, 6104, 1460, 7714, 128, 5653, 7727, 1725, 7300, 5617, 7022, 6721, 3069, 3793, 6581, 1918, 83, 5978, 759, 8114, 4080, 4162, 3121, 1498, 8390};
    vector<int> price = {15030, 16800, 1386, 13722, 9757, 14087, 8573, 19724, 12686, 15906, 12033, 16735, 16436, 7480, 16300, 10728, 19848, 15099, 17575, 16208, 18317, 11195, 663, 12339, 9773, 4756, 7490};
    int mpg = 7;
    int tankSize = 927;
    int tripLength = 9974;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 330079.2857142858;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> dist = {1087, 4169, 2734, 1334, 17, 2313, 1170, 4321, 5951, 701, 2248, 510, 1188, 3571, 4648, 1040, 6320, 4067, 1923, 2927};
    vector<int> price = {2044, 67, 10407, 12028, 10501, 1001, 14521, 2437, 14679, 3505, 2646, 5118, 11690, 15967, 14377, 1856, 12944, 19600, 11721, 8543};
    int mpg = 46;
    int tankSize = 151;
    int tripLength = 7364;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 608.8260869565223;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> dist = {12, 3415, 721, 274, 570, 3759, 1257, 1124, 2435, 2165, 1371, 72, 1465, 3813, 2409, 3069, 382, 900, 3412, 990};
    vector<int> price = {523, 4705, 2396, 6777, 6299, 405, 7292, 18160, 13051, 4483, 235, 3606, 17506, 5713, 1667, 12953, 1465, 9407, 3491, 17959};
    int mpg = 6;
    int tankSize = 738;
    int tripLength = 4442;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 548.3333333333641;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> dist = {4069, 802, 1415, 277, 4038, 1883, 1362, 948, 1733, 809, 4046, 758, 645, 1980, 3134, 2220, 2935, 3222, 3255, 2717, 3653, 4022, 2745, 1240, 3396, 2979, 2378, 2167};
    vector<int> price = {2134, 16001, 10811, 11536, 18338, 13467, 7545, 11935, 16226, 19673, 6982, 6506, 1382, 4323, 15644, 5203, 12462, 14052, 3818, 15248, 14278, 12549, 16296, 4568, 17148, 14092, 11335, 12120};
    int mpg = 13;
    int tankSize = 294;
    int tripLength = 4195;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 39652.76923076928;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> dist = {2908, 1833};
    vector<int> price = {303, 2153};
    int mpg = 337;
    int tankSize = 7;
    int tripLength = 4941;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 5335.299703264094;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> dist = {6118, 7015, 6095, 2944, 3306, 1621, 2298, 7655, 6966, 722, 1648, 525, 1677, 5029, 2409, 7468, 2255, 6452, 4722, 4389, 5608, 859, 3280, 6232, 149, 5689, 5865, 5834, 6592, 4731, 5896, 1531, 1147, 6267, 6301, 5394, 5106, 829, 2266, 4940, 1071, 7124, 7414, 3264, 7442, 1086, 1780, 5427, 6977, 3212};
    vector<int> price = {9922, 1635, 18136, 8592, 12560, 18546, 19069, 11236, 18902, 13100, 5159, 15745, 19294, 3651, 6388, 6483, 6160, 18129, 10813, 7846, 2086, 6155, 7089, 16615, 13357, 14856, 3990, 15642, 16355, 9518, 8128, 14839, 19706, 1221, 5909, 15586, 19466, 9268, 1177, 939, 17298, 900, 14957, 12174, 18522, 8897, 14319, 4788, 19153, 16031};
    int mpg = 43;
    int tankSize = 135;
    int tripLength = 7987;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 46866.06976744188;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> dist = {2137, 323, 551, 4876, 4078, 5591, 3255, 1756, 1532};
    vector<int> price = {13591, 14576, 10602, 3396, 19569, 19747, 12983, 17949, 13713};
    int mpg = 5;
    int tankSize = 233;
    int tripLength = 6107;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 1.12235828E7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> dist = {1401, 73, 5648, 2901, 5917, 4908, 6408, 7132, 2136, 3686, 5857, 4467, 3961, 352, 7130, 6971, 6857, 4654, 3248, 6794, 5321, 6441, 1672, 2242, 343, 7474, 3129, 2841, 3538, 6633, 5514, 6301, 975, 2955, 7204, 2170, 5443, 5587, 4659, 2617, 1028, 5391, 4380, 2556, 614, 6340, 3283, 3785, 3930};
    vector<int> price = {4409, 12391, 10660, 6081, 4857, 15072, 8771, 14153, 5570, 17200, 10528, 3107, 7915, 18798, 7745, 18623, 4436, 16941, 8586, 2367, 6080, 11572, 2755, 14099, 18696, 6923, 983, 18624, 13355, 11516, 17899, 17222, 1359, 9225, 4488, 69, 17030, 9334, 16733, 14380, 18199, 18927, 19708, 10425, 16362, 7361, 6279, 9820, 17304};
    int mpg = 30;
    int tankSize = 189;
    int tripLength = 7671;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 4602.300000000032;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> dist = {5515, 4236, 3506, 6711, 5116, 5812, 1048};
    vector<int> price = {4850, 16031, 12921, 8316, 15381, 9670, 11497};
    int mpg = 178;
    int tankSize = 30;
    int tripLength = 7046;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 53018.67977528089;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> dist = {1676, 1435, 1048, 44, 211, 1017, 1384, 1377, 1535, 1394, 1355, 340, 1216, 376, 1244, 1513, 1285, 1000, 1595, 1520, 50, 418, 831, 1243, 1223, 723, 1392, 960, 851, 440, 250, 1389, 1133, 198, 1265, 37, 1559, 187, 1505, 954, 159, 1603, 1449, 568, 174};
    vector<int> price = {7922, 7535, 12774, 15437, 5514, 12640, 4168, 15898, 2287, 10166, 7137, 19658, 4374, 19187, 10097, 18791, 7149, 16282, 7156, 15959, 19492, 18492, 11722, 12633, 5612, 928, 2065, 15634, 16070, 3875, 9578, 6613, 9639, 4345, 19301, 8026, 12316, 12857, 5585, 8718, 11018, 10220, 15049, 14684, 7798};
    int mpg = 5;
    int tankSize = 200;
    int tripLength = 1716;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 132889.6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> dist = {4831, 4109, 2590, 1269, 4886, 2629, 2840, 790, 2300, 4996, 4122, 3920, 945, 2940, 3042, 1844, 745, 2018, 1632, 157, 2705};
    vector<int> price = {278, 16397, 10231, 6566, 3019, 10948, 7403, 2619, 2529, 15387, 16784, 1459, 10049, 10084, 14761, 18589, 5849, 8044, 16342, 17870, 12759};
    int mpg = 14;
    int tankSize = 185;
    int tripLength = 5518;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 348836.0714285715;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> dist = {3694, 867, 882, 2572, 1104, 1687, 1469, 805, 3092, 4205, 782, 1260, 2040, 4426, 4872};
    vector<int> price = {11005, 9826, 14774, 10000, 13291, 11607, 11100, 7622, 18268, 5144, 16361, 13154, 5617, 11904, 6860};
    int mpg = 43;
    int tankSize = 33;
    int tripLength = 4938;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 561614.1162790698;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> dist = {1354, 928, 3908, 2061, 2757, 2526, 1447, 2217, 3477, 3200, 238, 3587, 370, 4022, 2345, 2541, 3555, 1091, 1338, 2122, 1395, 445, 1492, 1410, 2575, 2875, 573, 2827, 1750, 1669, 460, 2416, 1303, 1208, 971};
    vector<int> price = {11980, 19244, 12766, 4377, 18173, 19499, 5827, 6843, 19046, 2363, 11301, 3047, 15912, 12155, 9939, 12667, 12612, 11218, 12662, 13000, 15873, 10160, 18324, 19518, 4235, 6776, 8059, 10390, 4167, 11013, 7477, 7423, 14368, 12868, 1845};
    int mpg = 18;
    int tankSize = 78;
    int tripLength = 4305;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 435750.72222222225;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> dist = {4693, 3974, 1126, 5163, 2217, 566, 664, 28, 6084, 3936, 3273, 1621, 4452, 2688, 3995, 5275, 3866, 6582, 3358, 2553, 138, 3204, 1815, 375, 681, 3725, 4156, 995, 765, 1751, 6389};
    vector<int> price = {12278, 3943, 13183, 9509, 11244, 15357, 1408, 18223, 19871, 15120, 8916, 11546, 11797, 3299, 3481, 14408, 17985, 8804, 13923, 2159, 6334, 16704, 5542, 11217, 6355, 10321, 15880, 9266, 10448, 6650, 4861};
    int mpg = 8;
    int tankSize = 765;
    int tripLength = 7297;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 255309.875;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> dist = {1726, 2411, 749, 3111, 3239, 961, 3765, 409, 120, 927, 1839, 734, 1818, 468, 1529, 1135, 3067, 2706, 3012, 2322, 1001, 3178, 1245, 338, 93, 1104, 1999};
    vector<int> price = {19045, 7385, 19385, 2809, 10889, 19722, 19257, 6419, 12505, 13789, 18182, 7244, 13578, 13898, 5431, 15945, 18938, 8657, 13505, 5702, 8409, 3121, 6096, 18617, 18870, 15919, 12670};
    int mpg = 62;
    int tankSize = 49;
    int tripLength = 4264;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 58632.903225806534;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> dist = {4288, 4080, 3969, 2591, 3923, 4239, 2109, 2380};
    vector<int> price = {10551, 12369, 10024, 3241, 15230, 19390, 3043, 13452};
    int mpg = 581;
    int tankSize = 5;
    int tripLength = 5052;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 11257.908777969024;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> dist = {1778, 3036, 5540, 4629, 3968, 1053, 1731, 4203, 5671, 1174, 4726, 451, 222, 95, 3960, 3851, 2163, 3236, 854, 4212, 96, 528, 5693, 5331};
    vector<int> price = {1189, 5230, 14214, 19314, 10453, 18578, 7795, 17357, 3452, 9510, 435, 10288, 11546, 17797, 14884, 5293, 18964, 18216, 2994, 12783, 4266, 2466, 4178, 13242};
    int mpg = 98;
    int tankSize = 12;
    int tripLength = 5735;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 140682.78571428574;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> dist = {2006, 5882, 871, 3618, 458, 3210, 5588, 5277, 5528, 5621, 4972, 1768, 7300, 7788, 5408, 5668, 6625, 7555, 3673, 2940, 644, 6099, 3972, 1986, 4157, 2712, 1502, 2677, 2428, 5532, 3624, 6921, 2185, 3130, 4012, 620, 4636, 1252, 210, 816, 1593, 4812, 1071, 3133, 7088, 3122, 2409};
    vector<int> price = {6440, 7364, 492, 2949, 7080, 400, 4602, 17756, 14699, 5662, 4838, 17156, 2469, 1250, 16423, 2546, 13256, 16075, 6699, 2227, 2222, 11421, 14307, 12605, 7249, 13798, 5695, 18373, 17119, 2004, 14989, 13049, 7239, 6458, 4453, 6861, 8539, 5528, 15397, 13672, 4914, 6263, 17191, 7834, 8890, 18212, 18971};
    int mpg = 8;
    int tankSize = 492;
    int tripLength = 7821;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 326477.25;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> dist = {7804, 1620, 7750, 952, 2708, 6836, 7013, 8387, 2862, 5797, 4960, 2931, 5285, 5676, 6601, 2030, 8053, 2401, 2294, 909, 4860, 3435, 1279, 4473, 124, 1671, 3837, 8399, 4407, 3298, 5325, 7644, 2930, 2041, 907, 4866};
    vector<int> price = {12553, 15759, 9666, 3545, 2930, 13545, 14841, 14539, 532, 10092, 5942, 6139, 19748, 13476, 18814, 1043, 13575, 4624, 10129, 15840, 16485, 17841, 583, 5053, 16585, 8781, 14421, 4345, 6587, 12093, 9573, 10051, 17106, 11591, 8334, 4350};
    int mpg = 216;
    int tankSize = 7;
    int tripLength = 8609;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 150060.67592592596;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> dist = {2313, 1419, 4519, 2968, 7106, 1742, 5849, 6126, 1152, 8297, 4893, 3325, 5189, 3022, 6658, 6252, 7065, 769, 8010, 803, 1618, 2877, 4180, 7868, 5284, 1496, 4371, 4941, 465, 4051, 5135, 366, 103, 7915, 4989, 7231, 3071, 5662, 3330, 3121, 4978};
    vector<int> price = {1621, 7888, 4986, 16861, 17146, 5845, 11691, 18939, 13587, 19571, 10851, 1917, 5900, 17354, 3436, 13337, 14612, 16044, 8571, 10921, 4747, 10284, 16537, 13338, 11798, 19208, 5410, 165, 11239, 6295, 14882, 15691, 8756, 18530, 18392, 18439, 18848, 11412, 15623, 7677, 19247};
    int mpg = 4;
    int tankSize = 374;
    int tripLength = 8487;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 4692495.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> dist = {1303, 6218, 4161, 6440, 6152, 2604, 1316, 2421, 4254, 988, 6008, 4960, 308, 349, 5276, 218, 1617, 1541, 6017, 4298, 419, 3593, 5993, 902, 1432, 3579, 3197, 4511, 5209, 5673, 3183, 2189, 4905, 4076, 316, 4023};
    vector<int> price = {19163, 3457, 10381, 11448, 19692, 8375, 2657, 19029, 1092, 19767, 13865, 12490, 13920, 5134, 1180, 2195, 18675, 7339, 12535, 16816, 4126, 11734, 10395, 7969, 7314, 15451, 19509, 6763, 6524, 3936, 8293, 11454, 2865, 10172, 16720, 15359};
    int mpg = 12;
    int tankSize = 78;
    int tripLength = 6445;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 1991903.0833333333;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> dist = {1379, 6641, 3136, 5420, 3115, 5723, 7777, 2430, 3799, 2072, 622, 5227, 5044, 7383, 4, 3744, 361, 4094, 1408, 4776, 3428, 4036, 6871, 2174, 5273, 2845, 768, 4922, 7025, 5616, 7331, 953, 6593, 615, 6999, 23, 4652, 2305, 71, 6738, 380, 4297, 311, 1275};
    vector<int> price = {5506, 15947, 16698, 8177, 12552, 15236, 15911, 11343, 1579, 13115, 18619, 11588, 2435, 9308, 4148, 19262, 12209, 113, 7683, 4287, 19172, 1975, 11273, 13780, 6388, 8856, 14559, 13022, 13262, 1970, 14112, 6234, 9159, 9828, 9601, 12450, 19420, 18773, 5762, 8538, 14286, 9250, 441, 4669};
    int mpg = 291;
    int tankSize = 26;
    int tripLength = 7920;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 137.46391752578288;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> dist = {74, 7356, 4773, 1786, 318, 3623, 1915, 2517, 2101, 6623, 5855, 7482, 7283, 5512, 495, 3138, 7155, 4473, 5735, 3938, 2471, 2593, 1737, 5529, 5715, 6891, 4542, 5001, 3907, 6665, 5735, 4549, 1205, 5514, 3720, 1125, 5151, 3404, 2443, 1672, 693};
    vector<int> price = {14927, 12982, 19162, 4545, 5418, 4510, 8516, 16821, 17440, 6101, 3191, 6466, 16013, 10044, 10029, 3331, 11191, 7613, 14112, 9458, 19757, 1694, 1639, 4905, 18106, 9894, 5447, 10621, 15960, 13935, 14081, 12976, 8498, 15397, 17751, 5560, 14032, 11836, 719, 19890, 899};
    int mpg = 533;
    int tankSize = 6;
    int tripLength = 7832;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 16008.270168855535;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> dist = {99, 7042, 6115, 4457, 1811, 2732, 7573, 5555, 4712, 5579, 3114, 7052, 6187, 5203, 8229, 3742, 3487, 3533, 9607, 4481, 2961, 5616, 8807, 3127, 7992, 5917};
    vector<int> price = {6448, 9265, 2764, 14791, 5443, 14247, 12223, 293, 12003, 14203, 18736, 10578, 769, 18349, 5034, 3771, 13070, 228, 16871, 16185, 16681, 8388, 11067, 2001, 7404, 17370};
    int mpg = 6;
    int tankSize = 484;
    int tripLength = 9730;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 1163914.5000000002;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> dist = {980, 4, 1885, 2659, 1414, 1855, 2643, 2988, 2307, 1284, 1970, 3483, 2427, 486, 2549, 3113, 383, 1999, 2582, 1437, 3434, 1596, 529, 2800, 2587, 1345, 1977, 242, 2001, 425, 2586, 610, 805, 436, 646, 1118, 643, 2771, 600, 3256, 504, 1679, 16, 2957};
    vector<int> price = {4235, 8186, 10124, 6225, 17863, 6768, 3680, 18910, 7811, 14403, 2077, 3854, 16902, 8052, 6844, 11864, 9075, 16513, 5472, 17628, 15073, 17854, 9241, 18898, 4513, 1389, 19877, 7542, 8293, 7495, 19355, 1754, 13682, 16062, 14686, 14838, 18547, 9423, 1850, 15486, 6230, 4669, 1431, 11050};
    int mpg = 76;
    int tankSize = 33;
    int tripLength = 3541;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 18879.434210526328;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> dist = {3807, 4094, 6729, 40, 5325, 5835, 6689, 3287, 2279, 2423, 243, 6251, 927, 6705, 5953, 1099, 5349, 4953, 6436, 3959, 2438, 1417, 2707, 6626, 2909, 1197, 4857};
    vector<int> price = {17667, 10513, 7953, 16444, 3090, 11022, 15826, 2280, 19845, 2846, 2621, 2059, 3765, 9753, 13391, 9146, 9119, 18172, 7938, 7009, 90, 8706, 7746, 19435, 10163, 5337, 11642};
    int mpg = 6;
    int tankSize = 607;
    int tripLength = 6985;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 353434.3333333334;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> dist = {2361, 7411, 6222, 9193, 9219, 4063, 5761, 4677, 8636, 2459, 8430, 3126, 1001, 4119, 3841, 3053, 4911, 6666, 8618};
    vector<int> price = {16465, 327, 5352, 8887, 13651, 16110, 12337, 7017, 9023, 4538, 564, 12554, 18754, 15091, 6290, 14357, 10239, 14612, 19006};
    int mpg = 566;
    int tankSize = 12;
    int tripLength = 9385;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 6103.392226148417;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> dist = {4572, 8859, 7291, 7377, 2029, 2451, 4472, 4129, 3372, 1236, 9771, 8418, 1350, 1928, 1292, 2407, 6916, 4347, 5970, 7104, 8403, 6146, 8700, 976, 4849};
    vector<int> price = {9952, 15180, 9872, 9528, 8974, 7157, 8722, 12291, 7349, 15902, 17887, 11356, 14582, 16255, 10435, 5222, 14222, 15644, 18573, 9175, 3810, 9252, 13701, 5805, 12461};
    int mpg = 62;
    int tankSize = 70;
    int tripLength = 9940;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 508638.11290322576;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> dist = {878, 2382, 3356, 2530, 2654, 2283, 1005, 2572, 3296, 2287, 204, 72, 3343, 3285, 1768, 1307, 317, 3322, 2633, 268, 94, 1227, 906, 3013, 1909, 257, 3243, 2068, 279, 3352, 479, 1676, 709, 3111, 3264, 158, 1675, 1145, 1693, 287, 277, 3147, 1925, 854, 1201, 2103, 2386, 610, 1379, 2056};
    vector<int> price = {10905, 6956, 13164, 6445, 802, 14949, 12066, 10204, 9582, 8660, 6954, 5537, 10821, 1035, 7610, 517, 1642, 19981, 19978, 7625, 4799, 385, 16148, 7427, 7355, 6655, 12510, 3230, 16869, 1872, 1671, 10841, 19008, 4383, 1933, 15451, 5645, 10630, 6357, 9633, 7402, 15589, 12163, 4780, 1483, 10351, 17525, 1565, 17040, 2526};
    int mpg = 28;
    int tankSize = 32;
    int tripLength = 3454;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 95822.46428571429;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> dist = {4586, 1060, 1575, 3610, 3516, 250, 4187, 968, 3949, 4166, 1029, 3845, 4143, 2418, 3863, 5191, 4140, 6641, 3243, 716, 4811, 3445, 3913, 1772, 709, 4357, 4985, 253, 5525, 1136, 4004, 4177, 5391, 1984, 2930, 3383, 1962, 7321, 6105, 3918, 5698, 4691, 5555, 808, 4924, 3069};
    vector<int> price = {91, 2310, 9134, 11022, 17433, 12039, 14737, 234, 11531, 12307, 1062, 496, 1971, 1075, 11436, 14016, 9482, 14128, 14281, 6029, 8666, 17485, 376, 16117, 511, 8813, 17621, 2582, 9917, 2651, 1160, 8589, 2918, 9140, 15664, 14757, 8628, 17043, 4910, 7193, 16156, 209, 14099, 6607, 12282, 14879};
    int mpg = 394;
    int tankSize = 5;
    int tripLength = 7375;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 9644.86040609138;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> dist = {6462, 1806, 3985, 5417, 2894, 2359, 2191, 3025, 458, 4102, 3918, 6992, 3758, 5344, 38};
    vector<int> price = {12482, 8919, 5285, 3618, 16564, 14065, 4016, 3103, 18553, 17443, 12049, 5335, 2726, 12495, 18214};
    int mpg = 12;
    int tankSize = 603;
    int tripLength = 8238;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 227620.9999999998;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> dist = {2758, 4214, 4402, 3946, 2050, 3565, 3810, 5, 1854, 1167, 2688, 215, 2530, 1370, 658, 4136, 2555, 4129, 2628, 3640, 3029, 2347, 1754, 3132, 2317, 1581, 296, 1184, 1414, 448};
    vector<int> price = {4103, 76, 6758, 14469, 3413, 13879, 3152, 17524, 16030, 14707, 10407, 9924, 8988, 16599, 11773, 19336, 14491, 11776, 6534, 14885, 15054, 16387, 14866, 7391, 16198, 18731, 19250, 7101, 3734, 1204};
    int mpg = 32;
    int tankSize = 66;
    int tripLength = 4507;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 190666.1875;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> dist = {2258, 6106, 4485, 3355, 6128, 3071, 1933, 6219, 2027, 2617, 4766, 4082, 1789, 4422, 3213, 285, 2279, 1201, 3195, 2611, 3188, 5339, 5859, 881};
    vector<int> price = {13185, 1942, 3668, 7086, 2866, 1998, 15758, 3506, 11123, 14846, 10515, 7218, 10784, 15198, 13448, 10405, 4457, 2942, 5264, 8334, 8753, 2816, 5155, 3798};
    int mpg = 86;
    int tankSize = 41;
    int tripLength = 6309;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 64524.02325581399;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> dist = {1737, 6878, 3727, 3227, 5065, 4745, 5650, 5756, 1546, 728, 323, 6141, 8220, 7374, 6432, 3960, 7575, 4322, 8218, 5644, 5209, 471, 5559, 7925, 5463, 8944, 2143, 7861, 3837};
    vector<int> price = {10205, 10625, 10762, 13856, 6220, 8124, 3397, 14612, 16606, 14065, 13229, 13622, 8284, 19546, 6282, 9783, 11505, 2286, 17915, 19829, 16330, 19504, 15050, 13045, 2809, 4177, 6589, 19197, 18536};
    int mpg = 283;
    int tankSize = 15;
    int tripLength = 9136;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 41730.544169611305;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> dist = {4755, 4752, 2539, 412, 2978, 3958, 7422, 1349, 2376, 5444, 4933, 655, 3691, 7452, 5374, 1875, 7826, 203, 7642, 4735, 543, 4949, 1595, 1126, 7278, 6952, 327, 4646, 6956, 2872};
    vector<int> price = {5262, 1155, 3498, 3041, 8727, 5029, 16217, 8757, 908, 10442, 4766, 19225, 7578, 5869, 7624, 1045, 10463, 11137, 14761, 19450, 7785, 10472, 11760, 19364, 14601, 3236, 6745, 15019, 1862, 19142};
    int mpg = 49;
    int tankSize = 40;
    int tripLength = 7933;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 193169.2040816326;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> dist = {2333, 3242, 5140, 7774, 3983, 5853, 2748, 251, 481, 183, 6495, 1844, 2373, 712, 3628, 4612, 3413, 7330, 7504, 7523, 3090, 986, 6272, 7053, 1859, 6868, 4233, 1978, 1267, 7014, 3258, 1474, 3993, 5372, 5570, 2771, 7331, 5915, 1127, 5378, 7556, 724, 6206, 3312, 7793};
    vector<int> price = {981, 6503, 12672, 19957, 15857, 7164, 1996, 2589, 14889, 1218, 17513, 8994, 7469, 4523, 2897, 3311, 10323, 8970, 13285, 2800, 11677, 3288, 14515, 253, 16981, 8552, 5367, 6145, 16153, 5925, 19531, 17801, 10500, 4172, 16536, 2482, 270, 14131, 9061, 399, 19317, 5286, 11432, 5276, 14678};
    int mpg = 22;
    int tankSize = 290;
    int tripLength = 7812;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 20934.272727272713;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> dist = {1233, 166, 4227, 5573, 4807, 2394, 7433, 3647, 2172, 7661, 4442, 1429, 7045, 1556, 2230, 3409, 878, 386, 2529, 4887, 5798, 6705, 681, 5778, 3619, 2222, 3904, 2062, 7965, 6605, 7140, 2195, 391, 5264, 2306, 7720, 8274, 8295, 5926, 6050, 6003, 4345, 2338, 7290, 4626, 4791, 502};
    vector<int> price = {16909, 5120, 10914, 3052, 13637, 10631, 992, 16824, 14777, 9070, 6859, 10461, 4537, 18199, 7293, 2585, 3005, 18179, 5501, 6581, 6042, 4100, 5296, 419, 18716, 8155, 7803, 261, 13924, 7174, 7668, 17549, 16927, 16949, 7512, 6769, 2400, 16127, 17849, 404, 10318, 8205, 8487, 12069, 17083, 13390, 3399};
    int mpg = 17;
    int tankSize = 416;
    int tripLength = 8412;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 20572.94117647065;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> dist = {5584, 2501, 2776, 4063, 5627, 2257, 2435, 6718, 2082, 1407, 7256, 503, 10, 3787, 5392, 7955, 6659, 2439, 2777, 2709, 3716, 4926};
    vector<int> price = {10406, 19277, 16311, 4262, 16191, 19448, 5860, 6019, 18774, 6378, 17623, 15401, 7986, 17204, 18334, 16053, 19576, 1358, 13375, 12052, 8234, 5879};
    int mpg = 965;
    int tankSize = 4;
    int tripLength = 8122;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 11817.17202072539;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> dist = {3261, 2907, 2366, 4610, 4606, 206, 3297, 5374, 2962, 3425, 5934, 5737, 1062, 5079, 1669, 3931, 5595, 5506, 3287, 5846, 4811, 519, 4469, 4927, 2592, 3064, 2593, 3961, 1304, 3661, 935, 293, 865, 1179, 5061, 4108};
    vector<int> price = {7955, 4984, 16163, 18608, 19920, 14135, 17780, 10522, 5911, 610, 5662, 12869, 3572, 723, 729, 9835, 10081, 3001, 3199, 7524, 5290, 19026, 12612, 14106, 2322, 12421, 12283, 1554, 6116, 15814, 1709, 3390, 13208, 9556, 18992, 17837};
    int mpg = 13;
    int tankSize = 422;
    int tripLength = 6269;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 36740.76923076933;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> dist = {3642, 1646, 1084, 1232, 1256, 631, 1255, 1384, 4353, 3472, 2476, 1912, 3047, 1681};
    vector<int> price = {12088, 6059, 9634, 3037, 473, 9868, 11001, 9871, 19524, 2106, 9740, 14197, 5522, 8450};
    int mpg = 568;
    int tankSize = 6;
    int tripLength = 4790;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 1513.105633802819;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> dist = {3214, 1256, 1750, 5597};
    vector<int> price = {17520, 19885, 6690, 11793};
    int mpg = 79;
    int tankSize = 61;
    int tripLength = 6270;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 122875.82278481012;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> dist = {1006, 2159, 2818, 1392, 3223, 2664, 5007, 4049, 1384, 4502, 1238, 4481, 3564, 714, 259, 3682, 395, 3719, 1989, 1452, 3894, 2069, 2556, 2738, 736, 1630, 4381};
    vector<int> price = {19718, 4982, 196, 15901, 13172, 7583, 12424, 769, 10024, 6818, 7803, 1813, 6139, 13640, 8322, 14688, 15881, 14070, 6708, 3474, 1507, 3091, 18205, 17980, 6320, 7087, 6948};
    int mpg = 29;
    int tankSize = 111;
    int tripLength = 5022;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 12185.79310344833;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> dist = {3471, 2754, 3960, 2841, 2052, 1901, 1387, 5087, 4499, 4054, 3148, 4973, 5053, 3731, 3509, 1075, 2015, 4967, 2205, 3705, 1440, 962, 1522, 22, 671, 1997, 2328, 1841, 1855, 950, 5203, 1686, 119, 305, 2182};
    vector<int> price = {10910, 1820, 2552, 16899, 1892, 14726, 7057, 15752, 2104, 19560, 14629, 832, 1152, 17807, 7575, 11475, 12137, 8853, 12478, 17305, 13658, 9450, 4361, 16782, 6844, 131, 11551, 11042, 3948, 2853, 19313, 9265, 4639, 18406, 4928};
    int mpg = 114;
    int tankSize = 18;
    int tripLength = 5207;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 19170.20175438597;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> dist = {2230, 3332, 1038, 3180, 3854, 1709, 3483, 782, 3003, 548, 2709, 3563, 402, 112, 3892, 930, 996, 1384, 2004, 3658, 2460, 893, 1459, 1025, 2639, 2223};
    vector<int> price = {14305, 1306, 1942, 18643, 12431, 397, 4880, 19422, 1015, 4597, 10955, 15101, 9241, 18769, 16488, 6979, 2708, 6834, 19789, 5899, 3501, 8458, 12899, 2771, 18469, 15313};
    int mpg = 1;
    int tankSize = 790;
    int tripLength = 4010;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 5527186.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> dist = {2589, 5680, 4134, 4628, 495, 5871, 1143, 4412, 1869, 5612, 4402, 1338, 1026, 2249, 1839, 2394, 699, 1001, 3119, 1039, 4723, 2484, 4126, 5584, 2257, 5353, 3297, 395, 3388, 2068, 3389, 4977, 708, 2039, 4534, 567, 6003, 2980, 4744, 114, 1412, 202, 1624, 3449};
    vector<int> price = {12799, 18198, 8782, 6691, 4937, 11492, 14555, 1886, 1594, 9578, 6440, 9546, 8616, 2212, 13589, 8925, 2854, 11707, 3353, 13510, 15932, 8848, 220, 2506, 4982, 16050, 6589, 3924, 19477, 3549, 10351, 9607, 16335, 8630, 6255, 283, 17039, 14138, 18685, 3491, 12565, 10936, 13040, 19193};
    int mpg = 772;
    int tankSize = 2;
    int tripLength = 6175;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 7280.891191709844;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> dist = {2035, 1247, 1018, 1231, 3535, 2421, 325, 2875, 3476, 2575, 3051, 3161, 3481, 3330, 3556, 3664, 3328, 1055, 3609, 2346, 3388, 2286, 119, 3535, 2969, 1635, 988, 909, 2495, 3109, 288, 90, 759, 73, 109, 3415, 2547, 3122, 1655};
    vector<int> price = {3732, 15808, 18703, 2757, 19036, 8153, 12420, 428, 16675, 7865, 13682, 2691, 13406, 16431, 11137, 16635, 14900, 9316, 14959, 14666, 1917, 10162, 12124, 7907, 4459, 2103, 17130, 11706, 7599, 11806, 14376, 11334, 4001, 3630, 9032, 13132, 9300, 174, 2420};
    int mpg = 2;
    int tankSize = 305;
    int tripLength = 3785;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 4448449.5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> dist = {1529, 7557, 3392, 3885, 1372, 2482, 7017, 7516, 3135, 6584, 6991, 1491, 7186, 7484, 4617, 4380, 4000, 68, 428, 1719, 5739, 5608, 871, 401, 3198, 4728, 7448, 1080, 3356, 5574, 4231, 4466, 7251, 4354, 3745, 6599, 4697, 1468, 6432, 1470, 4244, 7092, 6409, 4433};
    vector<int> price = {19293, 571, 14680, 3507, 19025, 9952, 17094, 9028, 12777, 14545, 17804, 18350, 13315, 2971, 12825, 9862, 10732, 16444, 2262, 4080, 7956, 12184, 16502, 5035, 11036, 17114, 17541, 10681, 16251, 7433, 14844, 1126, 16485, 8860, 7912, 6182, 2699, 1269, 7638, 139, 12160, 3589, 16419, 16055};
    int mpg = 47;
    int tankSize = 114;
    int tripLength = 7604;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 22383.42553191486;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> dist = {524, 4435, 3070, 981, 3391, 2459, 3385, 3120, 2153, 4007, 4028, 304, 3825, 4744, 4693, 3656, 3422, 859, 3958, 4819, 487, 5193, 4142, 5090, 3495, 414, 685, 4379};
    vector<int> price = {15244, 11137, 2434, 16865, 10516, 14694, 2308, 14900, 7854, 10981, 3118, 17719, 15135, 18614, 12581, 19859, 7149, 2249, 16618, 12993, 9384, 19575, 13140, 16550, 2322, 3594, 19305, 10376};
    int mpg = 17;
    int tankSize = 270;
    int tripLength = 5344;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 99749.76470588235;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> dist = {9737, 6775, 3492, 3394, 2864, 662, 5576, 6540, 7642, 1646, 157, 4583, 4871, 4882, 8438, 3290, 8237, 6417, 1746, 303, 4521, 5532, 1697, 7041, 7341, 9256, 9312, 3469, 4116, 3323, 627, 5081, 874, 6592, 105, 8779, 6967, 1210, 2472, 4254, 1439, 3308, 5054, 497, 935, 6438, 826, 1230, 2322};
    vector<int> price = {8643, 10546, 6535, 17472, 15451, 1506, 7787, 19584, 6432, 14166, 1573, 13323, 18765, 17607, 8792, 11427, 3239, 1278, 4009, 705, 16142, 12083, 9418, 16872, 17551, 18263, 13391, 17510, 2954, 2542, 11252, 1674, 19795, 19460, 15707, 18132, 17657, 13436, 14277, 17240, 16982, 573, 15999, 16789, 18915, 110, 4977, 3190, 16105};
    int mpg = 5;
    int tankSize = 792;
    int tripLength = 9871;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 359504.8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> dist = {2190, 1131, 3282, 3387, 862, 4528, 1826, 1431, 4527, 650, 3399, 4230, 4961, 1419, 66, 642, 799, 1858, 3378, 1818, 1996, 5129, 1154, 2390, 1893, 3333, 2304, 3621, 1596, 332, 4476, 3883, 3024, 1259, 2544, 4658};
    vector<int> price = {14094, 19566, 19571, 16440, 12616, 9837, 12708, 14226, 7283, 1089, 8268, 13135, 14685, 2857, 3449, 9152, 7413, 5975, 8620, 13478, 12554, 8051, 11900, 6829, 14383, 17358, 7379, 19492, 9953, 3742, 15992, 17943, 6601, 13963, 19001, 8280};
    int mpg = 501;
    int tankSize = 5;
    int tripLength = 5187;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 21890.483033932134;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> dist = {4548, 7653, 1944, 1877, 5919, 2740, 8671, 881, 4238, 5175, 8696, 499, 6526, 1385, 4181, 416, 5222, 267, 2913, 4735, 7097, 4532, 6753, 7531, 3972, 2563, 4249, 8515, 5320, 7253, 8625, 5148, 4866, 1178, 4266, 8742, 604, 8326, 7162, 2620, 1301, 4688, 5817, 6816, 6716};
    vector<int> price = {15977, 17966, 19022, 13549, 6877, 2540, 11802, 15941, 2837, 7289, 17761, 14350, 4420, 18552, 3848, 8558, 3375, 9551, 9921, 4197, 19453, 11433, 14218, 297, 8650, 7227, 17701, 15887, 12093, 18093, 1851, 4367, 5880, 14224, 8210, 3389, 353, 19640, 15147, 19262, 19163, 3201, 14320, 14212, 13982};
    int mpg = 75;
    int tankSize = 96;
    int tripLength = 9066;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 7636.506666666668;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> dist = {7126, 22, 206, 3246, 4556, 5684, 1625, 7968, 3904, 5848, 6730, 4908, 2285, 425, 1415, 6115, 3026, 731, 5112, 1630, 1748, 2879, 3473, 4345, 367, 3563, 2768, 494, 3461, 464, 7334, 7350};
    vector<int> price = {8052, 442, 8902, 7645, 18377, 17939, 15862, 13472, 4051, 19764, 17638, 5862, 13730, 18943, 3155, 19056, 6611, 15648, 8457, 1388, 5711, 14804, 607, 8167, 14017, 6545, 1469, 7565, 8444, 2805, 17072, 1296};
    int mpg = 450;
    int tankSize = 17;
    int tripLength = 8155;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 673.122222222221;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> dist = {6102, 467, 6379, 7439, 621, 3774, 5877, 252, 2860, 1935, 2445, 7706, 4752, 1571, 7351, 2292, 7466, 2671, 1829, 4890, 5153, 4890, 351, 7203, 5032, 6933, 1187, 1275, 7278, 6149, 5437, 5798, 1865, 4024, 1015};
    vector<int> price = {8657, 11131, 4637, 4099, 6253, 13214, 3441, 18955, 9469, 15964, 18529, 16088, 18916, 1236, 1588, 8527, 10415, 15179, 8745, 18749, 10122, 9639, 2781, 7138, 14305, 2904, 2687, 15409, 15334, 18897, 11771, 5819, 16890, 6543, 999};
    int mpg = 6;
    int tankSize = 807;
    int tripLength = 7737;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 886226.8333333333;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> dist = {951, 2152, 7820, 744, 6699, 7115, 5688, 7048, 5965, 5486, 4794, 4632, 1932, 2149, 6200, 2905, 880, 8624, 667, 2593, 422, 4590};
    vector<int> price = {2638, 6268, 8418, 4434, 14512, 3785, 1035, 8564, 12131, 14266, 11858, 18605, 17423, 4648, 13162, 3453, 2982, 12087, 7770, 4945, 13051, 7595};
    int mpg = 16;
    int tankSize = 333;
    int tripLength = 8828;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 262473.75;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> dist = {1500, 4500};
    vector<int> price = {6000, 8000};
    int mpg = 80;
    int tankSize = 40;
    int tripLength = 6400;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 282500.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> dist = {100, 400};
    vector<int> price = {1549, 1649};
    int mpg = 25;
    int tankSize = 16;
    int tripLength = 600;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 12792.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> dist = {50, 100, 150, 200};
    vector<int> price = {1000, 2000, 3000, 4000};
    int mpg = 10;
    int tankSize = 10;
    int tripLength = 250;
    GasStations* pObj = new GasStations();
    clock_t start = clock();
    double result = pObj->tripCost(dist, price, mpg, tankSize, tripLength);
    clock_t end = clock();
    delete pObj;
    double expected = 30000.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4570&pm=1770
********************************************************************************
#include <iostream>
#include <cstdio>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(it,c) for(typeof(c) it=(c).begin();it!=(c).end();++it)
 
template<class T> inline int size(const T &c) { return c.size(); }
 
typedef long long LL;
 
typedef vector<int> VI;
typedef vector<string> VS;
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1, "%d", x);
  return buf1;
}
 
 
const LL INF = 1000000000000000000LL;
 
struct GasStations {
 
  // MAIN
  double tripCost(vector <int> dist, vector <int> price, int mpg, int tankSize, int tripLength) {
    dist.push_back(tripLength);
    price.push_back(0);
    
    int n = size(dist);
    REP(i,n) REP(j,n-1) {
      if(dist[j]>dist[j+1]) { swap(dist[j],dist[j+1]); swap(price[j],price[j+1]); }
    }
    tankSize *= mpg;
    if(tankSize>tripLength) tankSize=tripLength;
    vector<LL> ccc(tankSize+1);
    FOR(i,0,tankSize) ccc[i]=INF;
    ccc[tankSize] = 0;
    REP(i,n) {
      int dd=dist[i];
      if(i>0) dd-=dist[i-1];
      FOR(j,0,tankSize)
        if(j+dd <= tankSize) ccc[j] = ccc[j+dd];
        else ccc[j] = INF;
      FOR(j,1,tankSize)
        ccc[j] = min(ccc[j], ccc[j-1]+price[i]);
    }
    return double( ccc[tankSize]) / double(mpg);
  }
 
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/