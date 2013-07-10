/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2980
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

class FuelConsumption {
public:
    double maximalDistance(vector<int> velocities, vector<int> consumptions, int fuel);
};

double FuelConsumption::maximalDistance(vector<int> velocities, vector<int> consumptions, int fuel) {
    double ret;
    return ret;
}


int test0() {
    vector<int> velocities = {100};
    vector<int> consumptions = {10000};
    int fuel = 10000;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> velocities = {70, 80, 90, 100, 60, 110};
    vector<int> consumptions = {4000, 4000, 4000, 4000, 4000, 4000};
    int fuel = 40000;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1100.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> velocities = {250, 240, 230, 220, 210, 211};
    vector<int> consumptions = {5000, 4500, 4000, 3500, 3000, 3000};
    int fuel = 50000;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3516.6666666666665;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> velocities = {5, 10, 20, 40, 80};
    vector<int> consumptions = {1000, 2500, 6250, 9000, 18000};
    int fuel = 47832;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 239.16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> velocities = {5, 10, 20, 40, 80, 160};
    vector<int> consumptions = {1000, 2500, 6250, 8000, 9500, 20000};
    int fuel = 47832;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 402.79578947368424;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> velocities = {10};
    vector<int> consumptions = {5000};
    int fuel = 43333;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 86.666;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> velocities = {143, 52};
    vector<int> consumptions = {12000, 12478};
    int fuel = 36000;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 429.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> velocities = {47, 216, 180, 131, 79, 8, 27, 94, 41, 45, 248, 114, 34, 6, 7, 98, 135, 145, 153, 154, 168, 116, 91, 19, 197, 202, 133, 220, 184, 240, 233, 137, 40, 118, 62, 217, 56, 212};
    vector<int> consumptions = {13859, 9723, 10741, 1778, 13316, 4035, 2842, 1288, 10040, 9942, 16890, 7729, 16350, 16006, 4548, 13623, 19756, 12840, 5966, 8376, 14931, 17944, 12323, 6537, 17118, 3082, 17541, 5833, 5639, 10930, 14977, 3306, 6021, 7270, 6829, 16573, 6097, 17512};
    int fuel = 36415;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2682.9949381327333;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> velocities = {145, 173, 191, 182, 122, 35, 95, 210, 13, 132, 168, 110, 30, 238, 232};
    vector<int> consumptions = {19007, 12337, 16457, 13287, 11383, 15945, 9909, 10758, 19588, 7422, 14030, 17413, 1900, 19762, 2655};
    int fuel = 26198;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2289.2414312617702;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> velocities = {159, 167, 53, 212, 35, 32, 188, 82, 236, 75, 87, 39, 185, 210, 179, 152, 189, 67, 40, 5, 20, 203, 215, 56, 33, 141, 8, 116, 190, 174, 138, 23, 112, 54, 176, 76, 62, 147, 136, 44, 129, 242, 232};
    vector<int> consumptions = {7224, 12008, 6844, 15989, 4195, 4093, 15343, 2587, 10503, 8448, 14458, 7618, 15798, 16281, 19538, 13292, 7038, 19190, 8958, 7191, 12511, 17202, 3634, 5886, 19875, 2416, 11322, 19651, 11021, 6699, 4557, 6075, 11712, 3600, 3510, 18861, 15688, 14401, 10789, 16255, 17423, 6002, 11585};
    int fuel = 36321;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2148.8758943313155;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> velocities = {241, 220, 183, 78, 237, 36, 21, 198, 134, 155, 240, 22, 166, 84, 30, 129, 60, 76, 231, 140, 168, 33, 126, 98, 127, 200, 130, 99, 174, 136, 154, 102, 6, 179, 29, 158, 217, 189, 141, 92, 160, 48};
    vector<int> consumptions = {13263, 5313, 1912, 11808, 2832, 1481, 5144, 8129, 3161, 6535, 12173, 11466, 13044, 18253, 5745, 14186, 9313, 5474, 3168, 15018, 19787, 10905, 18958, 8391, 11202, 4625, 5414, 10314, 12833, 8487, 8518, 9177, 18773, 2763, 3668, 18192, 14985, 4102, 9480, 8627, 5802, 5099};
    int fuel = 46082;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 4410.5679916317995;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> velocities = {19, 87, 230, 103};
    vector<int> consumptions = {15181, 18505, 14031, 9492};
    int fuel = 538;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 8.819043546432898;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> velocities = {103, 64, 149, 67, 173, 237, 112, 224, 6, 236, 153, 198, 147, 40, 59, 99, 107, 25, 167, 215, 20, 204, 168, 175, 202, 135, 174, 184, 196, 12, 219, 163, 179, 26, 140, 238, 19, 72, 246, 157, 77, 232, 95, 176, 58, 43, 133, 227};
    vector<int> consumptions = {4487, 15474, 3625, 6629, 7902, 15962, 1123, 4737, 14261, 11195, 2264, 9260, 7202, 9116, 6030, 7411, 15924, 5940, 19662, 14829, 18713, 19958, 18578, 9365, 14007, 12477, 2200, 7439, 3303, 13760, 3324, 7477, 6108, 15887, 15460, 13993, 7540, 13835, 7072, 19823, 15485, 2626, 10357, 9526, 14357, 13896, 14022, 11112};
    int fuel = 19584;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1953.1682991985751;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> velocities = {185, 188, 186, 187, 39, 54, 72, 172, 229, 95, 132, 31, 228, 55, 166, 113, 174, 27, 24};
    vector<int> consumptions = {3483, 1911, 12635, 11067, 5675, 13938, 3223, 7511, 18825, 4221, 18870, 2626, 16205, 18398, 13193, 13734, 2637, 6556, 2993};
    int fuel = 15803;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1554.6645735217164;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> velocities = {84, 124, 7, 113, 130, 154, 191, 103, 91, 212, 237, 158};
    vector<int> consumptions = {2752, 19443, 13673, 11040, 10313, 1875, 13818, 1610, 2017, 15932, 14169, 3589};
    int fuel = 39473;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3242.0490666666665;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> velocities = {150, 145, 206, 170, 89, 7, 70, 62, 194, 96, 219, 33, 183, 159, 225, 50, 136, 227, 197, 242, 53, 201, 239, 214, 224, 156, 66, 185, 199, 47};
    vector<int> consumptions = {16759, 3670, 5084, 11075, 19786, 16498, 7287, 1503, 6706, 3363, 10010, 19240, 13164, 8619, 8591, 7704, 10232, 1750, 5975, 2539, 1303, 12422, 12247, 14584, 14648, 3971, 18864, 12075, 18546, 19678};
    int fuel = 2476;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 321.1725714285714;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> velocities = {110, 217, 124, 26, 144, 179, 196, 214, 77, 163, 189, 209, 193, 219};
    vector<int> consumptions = {18103, 15423, 4527, 12600, 15015, 6565, 1028, 3088, 3943, 13637, 6049, 5681, 2588, 12342};
    int fuel = 663;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 126.40856031128405;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> velocities = {230, 162, 111, 10};
    vector<int> consumptions = {8949, 13843, 1748, 5536};
    int fuel = 31563;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2004.2866132723111;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> velocities = {119, 57, 79, 197, 89, 123, 154, 30, 247, 191, 42, 117, 180, 196, 163, 158, 238, 174, 76, 144, 140, 65, 139, 126, 239, 170, 193, 114, 201, 188, 248, 55, 160, 229, 150, 231, 129, 125, 115, 224, 236, 50, 67, 184, 159, 15, 13, 142, 20, 250};
    vector<int> consumptions = {5186, 2650, 6662, 11893, 11353, 14452, 15008, 8262, 6454, 17303, 17634, 15256, 1148, 12124, 13317, 5213, 17858, 16264, 12903, 4676, 15902, 4561, 2282, 14653, 3220, 6402, 7923, 4831, 4878, 10781, 13392, 7698, 6589, 13722, 6938, 7410, 7234, 13508, 10961, 4959, 7493, 2515, 1058, 15700, 14971, 16117, 17215, 8815, 19330, 4039};
    int fuel = 46915;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 7356.010452961673;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> velocities = {19, 125, 160, 189, 191, 68, 229, 200, 54, 141, 17, 133, 199, 178, 10, 185, 230, 220, 201, 80, 102, 123, 165, 5, 194, 59, 43, 170, 13, 90, 176, 112, 246, 161, 77, 122, 24, 29, 40, 231, 81, 97, 205, 16};
    vector<int> consumptions = {8864, 9405, 9826, 7816, 8516, 2340, 6686, 7021, 12662, 15721, 7064, 18902, 18124, 5806, 13268, 10318, 6602, 2012, 5084, 13290, 2054, 15708, 1248, 8491, 14712, 6131, 17439, 8958, 7995, 2052, 8479, 19238, 11866, 18659, 8462, 13158, 13022, 2146, 19392, 14037, 4925, 11647, 7602, 5098};
    int fuel = 42915;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 5673.858173076923;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> velocities = {59, 161, 142, 158, 109, 9, 217, 39, 70, 76, 172, 143, 241, 154, 199, 206, 187, 38, 132, 6, 189, 87, 227};
    vector<int> consumptions = {16147, 2655, 1792, 17398, 9714, 9638, 16075, 12521, 1475, 16615, 14234, 13570, 1905, 10464, 15161, 13549, 18469, 1330, 15333, 11910, 17336, 19337, 2278};
    int fuel = 18238;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2307.2745406824147;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> velocities = {216, 242, 154, 148, 23, 105, 80, 127, 24, 220, 79, 197, 234, 149, 58, 73, 143, 66, 184, 218, 61, 51, 115, 224, 146, 12, 250, 19, 157, 68, 46, 33, 62, 126, 241, 17, 88, 132, 125, 106, 232, 153, 76, 122, 103, 239, 140};
    vector<int> consumptions = {11422, 9779, 5182, 16495, 6764, 1874, 2364, 15902, 5460, 1474, 7972, 10789, 8950, 17343, 1754, 3481, 2012, 12672, 14428, 6912, 10762, 6967, 5415, 2908, 18223, 12759, 6204, 5319, 1958, 6945, 9166, 19700, 12367, 18692, 4447, 6021, 19283, 3376, 13723, 18982, 15776, 10220, 9925, 5324, 7486, 16969, 12643};
    int fuel = 11489;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1714.7761194029852;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> velocities = {238, 170, 247, 63, 131, 226, 124, 85, 137, 145, 87, 90, 46, 76, 59, 232, 187, 203, 165, 174, 71, 193, 20, 182, 216, 89, 15, 10, 211, 157, 138, 153, 196, 162, 176};
    vector<int> consumptions = {6177, 14877, 1702, 15364, 2381, 17590, 9823, 3237, 9023, 17595, 3327, 13042, 12058, 8926, 10487, 2670, 6651, 3258, 8213, 10860, 3742, 9610, 5472, 8128, 19434, 6841, 4503, 15867, 11938, 2881, 10257, 19598, 3661, 7365, 8586};
    int fuel = 2244;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 325.6568742655699;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> velocities = {105, 200, 72, 226, 98, 184, 55, 18, 153, 92, 94, 169, 245, 60};
    vector<int> consumptions = {12369, 7608, 10252, 12647, 18432, 10535, 8208, 4264, 4497, 1189, 17100, 10523, 10990, 5919};
    int fuel = 27705;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2143.700588730025;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> velocities = {249, 30, 106, 11, 174, 68, 46, 61, 51, 217, 193, 16, 124, 18, 241, 25, 144, 242, 146, 221, 105};
    vector<int> consumptions = {14210, 14549, 10277, 1073, 2620, 14826, 7582, 14578, 12159, 1159, 4449, 13924, 10072, 11380, 11208, 7477, 19503, 16370, 15196, 13074, 14722};
    int fuel = 19594;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3668.5918895599657;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> velocities = {88, 101, 239, 130, 108, 154, 196, 25, 42, 56, 26, 83, 121, 160, 86, 24, 156, 40, 74, 208, 113, 249, 59, 31, 132, 70, 6, 146, 194, 243, 96, 227, 133, 79, 122, 81, 107, 193, 212, 100, 110, 183, 186, 27, 190};
    vector<int> consumptions = {12784, 16565, 4093, 14608, 7172, 12243, 8514, 11168, 6055, 12191, 6973, 9922, 7748, 6651, 11986, 3144, 17446, 15629, 6874, 16791, 16469, 9146, 10091, 10815, 1236, 9551, 10487, 17955, 9394, 17097, 4065, 3513, 10261, 13578, 17878, 15140, 5611, 3445, 1170, 14489, 7149, 4333, 14865, 18282, 9896};
    int fuel = 24891;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 4510.164102564103;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> velocities = {244, 137, 59, 21, 55, 53, 52, 54, 240};
    vector<int> consumptions = {10646, 9486, 4455, 3028, 5860, 12777, 13503, 11861, 13455};
    int fuel = 21690;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 497.1219237272215;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> velocities = {123, 135, 202, 200, 188, 124, 208, 142, 73, 90, 18, 229, 192, 95, 74};
    vector<int> consumptions = {7922, 11635, 2643, 9153, 14232, 5747, 7450, 15801, 15199, 6716, 11573, 7473, 2550, 2181, 5287};
    int fuel = 4565;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 348.8951948543322;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> velocities = {136, 58, 24, 80, 20, 106, 37, 67, 207, 130, 71, 248, 230, 34, 75, 179, 121, 77, 89, 134, 204, 132, 21, 209, 141, 30, 238, 183, 116};
    vector<int> consumptions = {18984, 12969, 5015, 17626, 4684, 10168, 18906, 13097, 16199, 12785, 15486, 13420, 19271, 16813, 7085, 1318, 4580, 2331, 8267, 9387, 14444, 15507, 5360, 18827, 8152, 11268, 5693, 1337, 18604};
    int fuel = 19012;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2602.240837696335;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> velocities = {223, 150, 42, 9, 136, 230, 165, 60, 104, 242, 28, 103, 129};
    vector<int> consumptions = {11987, 11761, 9217, 10501, 18482, 16665, 11753, 16084, 14525, 4964, 5872, 9106, 4656};
    int fuel = 5706;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 278.1732473811442;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> velocities = {125, 116, 165, 108, 162, 29, 209, 95, 221, 133, 242, 102, 183, 160, 97, 205, 215, 20, 188, 94, 63, 206, 198, 72, 143, 48, 35, 191, 106, 73, 47, 139, 64, 83, 60, 167, 177, 170, 163, 18, 86, 239};
    vector<int> consumptions = {11508, 11080, 6340, 13076, 10058, 8740, 9546, 9880, 12072, 1707, 5141, 13481, 18168, 17225, 2009, 19136, 12455, 19762, 1742, 1021, 18922, 10248, 10714, 18650, 14290, 4335, 13759, 4169, 6303, 19661, 9681, 4652, 9753, 16987, 8042, 12420, 16814, 13244, 8229, 19864, 5769, 16005};
    int fuel = 32049;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3458.789896670494;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> velocities = {187, 29, 165, 54, 62, 185, 250, 190, 225, 139, 224, 219, 156, 182, 42, 191, 104, 181, 209, 223, 20, 102, 153, 125, 116, 192, 147, 87, 148, 93, 189, 25, 28, 15};
    vector<int> consumptions = {13998, 4545, 14597, 15218, 9838, 15844, 8372, 9563, 15723, 14490, 8604, 12197, 8721, 4565, 18421, 19610, 1495, 17741, 16022, 9055, 4393, 9738, 16279, 2608, 13654, 4822, 2338, 1144, 5623, 3330, 19846, 5987, 19805, 9616};
    int fuel = 8640;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 657.0629370629371;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> velocities = {170, 216, 115, 247, 167, 179, 19, 206, 189, 245, 210, 82, 33, 55, 76, 238, 212, 66, 58, 218, 111, 233, 190, 101, 97, 142, 160, 236, 186, 100, 140, 246, 159, 85, 110, 176, 125, 169, 71, 30, 21, 39};
    vector<int> consumptions = {15875, 6907, 9719, 4351, 9329, 17290, 4591, 13189, 16787, 4239, 15893, 4053, 18063, 11681, 19479, 2695, 7139, 14998, 16826, 16722, 13581, 9978, 12891, 2023, 15243, 8349, 3702, 9707, 11687, 9346, 16891, 19413, 12400, 14162, 9935, 12382, 14874, 3663, 17360, 7038, 19588, 8811};
    int fuel = 43295;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3823.4545454545455;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> velocities = {207, 104, 84, 103, 167, 234, 227, 73, 193, 134, 239, 230, 163, 16, 69, 76, 200, 68, 75, 91, 206, 64, 61, 241, 65, 235, 30, 147, 97, 52, 198, 225, 81, 18, 190, 182, 142, 139, 95, 31, 21, 195, 11, 83, 80, 40, 85, 187, 152, 233};
    vector<int> consumptions = {3352, 10658, 1479, 19990, 11002, 16568, 5422, 17895, 7135, 19008, 13361, 17742, 5042, 2847, 8469, 17345, 5380, 15964, 10462, 12069, 6154, 4529, 4730, 3244, 11844, 14049, 15118, 19470, 7747, 8511, 6869, 15398, 11498, 8103, 14043, 15522, 2563, 10850, 18022, 8240, 10492, 6651, 16477, 6220, 15615, 17857, 3883, 2662, 19902, 10273};
    int fuel = 39396;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2926.7681874229347;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> velocities = {34, 243, 19, 107, 89, 93, 5, 83, 57, 197, 125, 20, 224, 102, 145, 114, 179, 149, 154, 53, 97, 196, 228, 144, 205, 201, 238, 194, 160, 131, 212, 208, 184, 175, 157, 221, 247, 136, 67, 152, 172, 162, 239, 143, 71};
    vector<int> consumptions = {17717, 7640, 6566, 5883, 19245, 17840, 18209, 2497, 19058, 9421, 1175, 4271, 5287, 13504, 3138, 11700, 1530, 3461, 13118, 1205, 8540, 19828, 12622, 15398, 4760, 13935, 11481, 19493, 8746, 11538, 8670, 17371, 17760, 6752, 14758, 16433, 1726, 3401, 4034, 13759, 11393, 19792, 17193, 13933, 18103};
    int fuel = 5881;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 841.6031286210892;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> velocities = {190, 250, 61, 12, 119, 34, 92, 88, 237, 10, 197, 196, 189, 156, 15, 18, 141, 176, 38, 75, 185, 86};
    vector<int> consumptions = {12393, 17704, 19684, 11048, 14930, 17090, 6427, 2604, 11599, 17474, 8195, 1506, 6158, 18589, 10858, 18889, 12447, 1040, 4818, 10364, 18975, 1026};
    int fuel = 38078;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 6443.969230769231;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> velocities = {203, 56, 99, 115, 195, 220, 230, 137, 163, 66, 156, 180, 239, 145, 40, 90, 216, 196, 187, 237, 31, 34, 11, 113, 54, 162, 53, 86, 192, 164, 240, 42, 161, 48, 109, 23, 102, 191, 193, 209, 175, 105, 127, 25, 75, 49, 62};
    vector<int> consumptions = {2071, 11935, 18282, 2825, 19718, 14573, 5712, 14037, 5998, 10905, 8162, 2717, 9692, 11946, 1839, 3645, 4394, 18199, 15272, 1675, 14773, 3480, 12238, 4542, 7125, 2401, 10078, 19382, 18939, 19721, 11663, 2677, 7724, 8961, 17002, 19448, 1684, 16137, 10507, 14993, 3944, 1821, 8058, 18668, 11677, 1119, 9891};
    int fuel = 38050;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 5383.79104477612;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> velocities = {65, 139, 11, 40, 137, 99, 117, 213, 10, 106, 43, 187};
    vector<int> consumptions = {12829, 13448, 6227, 12798, 17224, 11324, 13274, 19133, 16038, 13170, 7862, 6084};
    int fuel = 18464;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 567.5161078238001;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> velocities = {208, 226, 178, 111, 75, 123, 48, 120, 85, 108, 10, 116};
    vector<int> consumptions = {10834, 11891, 1621, 19085, 18998, 16621, 19108, 13927, 13493, 7366, 10102, 3438};
    int fuel = 19338;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2123.481801357187;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> velocities = {22, 117, 127, 24, 199, 39, 166, 206, 108, 59, 216, 193, 86, 19, 60, 131, 107, 147, 231, 109, 58, 144, 229};
    vector<int> consumptions = {18708, 7533, 15804, 11142, 19842, 18260, 5343, 10578, 2187, 1113, 14063, 5591, 6934, 1656, 12959, 17251, 19738, 14370, 6507, 9007, 18584, 11951, 15489};
    int fuel = 38482;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2039.92632524708;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> velocities = {132, 233, 116, 163};
    vector<int> consumptions = {8093, 9472, 14543, 8373};
    int fuel = 9864;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 242.64273648648648;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> velocities = {166, 9, 85, 46, 249, 133, 214, 23, 139, 218, 174, 106, 151, 180, 76, 158, 112, 165, 220, 140, 37, 88, 160, 230};
    vector<int> consumptions = {12514, 15523, 1489, 7766, 18887, 8470, 9522, 8283, 9160, 18553, 2259, 5629, 1042, 13356, 14388, 4154, 12833, 7738, 17320, 14053, 17469, 10722, 16463, 14793};
    int fuel = 43584;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 6315.915547024952;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> velocities = {240, 195, 130, 133, 15, 160, 111, 206, 72, 149, 146, 115, 235, 183, 102, 96, 163, 61, 196, 52, 87, 139, 33, 7, 90, 67, 118, 227, 197, 114};
    vector<int> consumptions = {14837, 2981, 17292, 18591, 4832, 7461, 17991, 18369, 18291, 9400, 15179, 3317, 2595, 2441, 6936, 8028, 14973, 18981, 12503, 7816, 2883, 6385, 6230, 18157, 16567, 9310, 2866, 4687, 14171, 4477};
    int fuel = 31710;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2871.6184971098264;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> velocities = {107, 187, 198, 105, 87, 129, 167, 38, 152, 228, 68, 205, 145, 207, 142, 49, 114, 216, 166, 175, 52, 165, 131, 91, 161, 189, 236, 229, 116, 201, 97, 95, 202, 6, 36};
    vector<int> consumptions = {11471, 11428, 11559, 17366, 13033, 3270, 3208, 9982, 7878, 12979, 2897, 8887, 7538, 15469, 18540, 8266, 19633, 14509, 3317, 19135, 13258, 3593, 18843, 17466, 19140, 12094, 13937, 6174, 3512, 7097, 10551, 3695, 1613, 6628, 6809};
    int fuel = 43992;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 5509.227526348419;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> velocities = {66, 219, 51, 210, 52, 117, 111, 99, 206, 104, 70, 115, 57, 147, 55, 152, 202, 223, 138, 113, 207, 229, 12, 168, 205, 174, 64, 36, 13, 217};
    vector<int> consumptions = {2862, 16127, 3340, 11142, 16100, 7558, 4154, 11935, 17430, 6831, 4537, 16623, 18922, 3927, 17211, 12754, 13253, 4293, 11443, 11555, 10270, 8452, 10375, 15631, 14640, 9934, 19040, 8986, 15248, 2539};
    int fuel = 43399;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3709.170145726664;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> velocities = {59, 193, 236, 185, 188, 249, 112, 227, 156, 45, 209, 104, 186, 180, 148, 248, 5};
    vector<int> consumptions = {16026, 15066, 12738, 14843, 1441, 4380, 8918, 4659, 2363, 13628, 7329, 2088, 9613, 19569, 1666, 8679, 4402};
    int fuel = 35727;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 4661.121443442054;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> velocities = {26, 226, 232, 88};
    vector<int> consumptions = {16948, 5508, 18411, 14993};
    int fuel = 11836;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 485.6456063907044;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> velocities = {137, 191, 209, 213, 72, 140};
    vector<int> consumptions = {12715, 1833, 11968, 17633, 14885, 1348};
    int fuel = 27563;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2872.0856519367157;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> velocities = {229, 86, 72, 184, 97, 84, 139, 249, 227, 58, 67, 78, 217, 35, 224, 62, 222, 140, 64, 238, 114};
    vector<int> consumptions = {6906, 6191, 15443, 7188, 6224, 14224, 4582, 9867, 9627, 12146, 17589, 19237, 19759, 10578, 3403, 7300, 16811, 6225, 1698, 2325, 19457};
    int fuel = 35823;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3667.0425806451613;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> velocities = {222, 12, 34, 37, 30, 244, 98, 188, 134, 39, 47, 181, 217, 131, 139, 70, 196, 99, 65, 200, 171, 193, 80, 141, 41, 177, 250, 213, 195, 43, 63, 158, 84, 223, 207, 185, 155, 85, 26, 203, 182, 95};
    vector<int> consumptions = {1826, 17061, 4904, 11238, 18571, 17405, 6299, 12728, 2267, 4751, 3019, 19166, 6717, 18093, 4187, 2421, 7867, 2201, 4328, 8104, 2768, 17296, 12262, 11720, 10625, 18584, 19174, 11984, 11459, 14149, 18014, 6695, 13503, 6032, 14851, 2537, 9363, 5651, 2219, 4586, 13137, 3397};
    int fuel = 724;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 88.02190580503833;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> velocities = {216, 245, 83, 225, 213, 11, 161, 12, 148, 8, 27, 91, 206, 14, 222, 56, 19, 89, 116, 68, 223, 16, 108, 75, 156, 185, 224, 131, 119, 154, 104};
    vector<int> consumptions = {7463, 7508, 13245, 7231, 11106, 13368, 7421, 16258, 5157, 10647, 5982, 19238, 18723, 1906, 19706, 11189, 12156, 13351, 7923, 8118, 3097, 12836, 11591, 14406, 5510, 15651, 8741, 12245, 15578, 5949, 10227};
    int fuel = 13537;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 974.7339360671617;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> velocities = {184, 51, 9, 80, 112, 151, 92, 72, 165, 98, 85, 106, 236, 218, 133, 208, 210, 94, 178, 156, 99, 62, 199, 142, 46, 110, 73, 250, 18, 233, 153, 223, 8, 130, 118, 139, 55, 195, 16, 246, 147, 91, 12, 101};
    vector<int> consumptions = {13902, 13021, 15108, 13628, 13549, 2280, 14245, 15062, 11426, 5719, 11677, 5047, 14785, 8406, 9684, 17769, 15709, 16945, 14465, 17016, 17497, 19335, 6190, 6677, 8886, 19675, 14143, 18377, 11130, 16000, 1289, 13008, 1940, 3997, 10707, 9454, 1304, 9237, 11485, 13499, 19682, 13983, 16351, 17129};
    int fuel = 26157;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3104.7486423584173;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> velocities = {244, 183, 94, 72, 17, 170, 243, 24, 213, 98, 92, 249, 250, 229, 219, 224, 153, 62, 95, 117, 108, 48, 116, 84, 199, 145};
    vector<int> consumptions = {3774, 11134, 3286, 3734, 19075, 16349, 7504, 5055, 19913, 1462, 12822, 14917, 5006, 5931, 11357, 7599, 2898, 1985, 2084, 1592, 19725, 9996, 16338, 18342, 15428, 6506};
    int fuel = 10157;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 746.4629396984925;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> velocities = {219, 186, 32, 109, 154, 226, 97, 202, 187, 121, 129, 141, 238, 178, 107, 122};
    vector<int> consumptions = {16712, 10090, 10034, 8915, 7286, 4523, 2344, 6416, 6893, 2949, 11844, 15590, 11285, 18118, 11006, 10729};
    int fuel = 36454;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1821.4910457660844;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> velocities = {121, 95};
    vector<int> consumptions = {1716, 16384};
    int fuel = 43635;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3076.826923076923;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> velocities = {51, 85, 61, 203, 15, 125, 6, 91, 181, 168, 126, 25, 86, 83, 73, 179, 193, 67, 49, 175, 111, 100, 194, 72, 229, 237, 87, 217, 34, 17, 66, 150, 30, 148, 82, 39, 44, 138, 199, 56, 247, 123, 47};
    vector<int> consumptions = {4164, 8357, 7038, 11144, 17561, 19200, 19061, 3647, 6939, 10290, 18452, 1979, 16675, 19613, 19709, 14371, 17339, 7336, 19129, 2436, 5798, 5202, 2238, 16032, 13516, 15481, 16579, 10023, 2727, 2771, 11382, 7140, 16319, 6589, 6513, 19259, 5364, 4012, 4184, 10574, 6059, 7595, 16377};
    int fuel = 1017;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 88.15817694369973;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> velocities = {5};
    vector<int> consumptions = {3000};
    int fuel = 101;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16833333333333333;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> velocities = {240, 195, 130, 133, 15, 160, 111, 206, 72, 149, 146, 115, 235, 183, 102, 96, 163, 61, 196, 52, 87, 139, 33, 7, 90, 67, 118, 227, 197, 114};
    vector<int> consumptions = {14837, 2981, 17292, 18591, 4832, 7461, 17991, 18369, 18291, 9400, 15179, 3317, 2595, 2441, 6936, 8028, 14973, 18981, 12503, 7816, 2883, 6385, 6230, 18157, 16567, 9310, 2866, 4687, 14171, 4477};
    int fuel = 31710;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2871.6184971098264;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> velocities = {5};
    vector<int> consumptions = {3000};
    int fuel = 101;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16833333333333333;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> velocities = {240, 195, 130, 133, 15, 160, 111, 206, 72, 149, 146, 115, 235, 183, 102, 96, 163, 61, 196, 52, 87, 139, 33, 7, 90, 67, 118, 227, 197, 114};
    vector<int> consumptions = {14837, 2981, 17292, 18591, 4832, 7461, 17991, 18369, 18291, 9400, 15179, 3317, 2595, 2441, 6936, 8028, 14973, 18981, 12503, 7816, 2883, 6385, 6230, 18157, 16567, 9310, 2866, 4687, 14171, 4477};
    int fuel = 31710;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2871.6184971098264;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> velocities = {5};
    vector<int> consumptions = {3000};
    int fuel = 101;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16833333333333333;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> velocities = {240, 195, 130, 133, 15, 160, 111, 206, 72, 149, 146, 115, 235, 183, 102, 96, 163, 61, 196, 52, 87, 139, 33, 7, 90, 67, 118, 227, 197, 114};
    vector<int> consumptions = {14837, 2981, 17292, 18591, 4832, 7461, 17991, 18369, 18291, 9400, 15179, 3317, 2595, 2441, 6936, 8028, 14973, 18981, 12503, 7816, 2883, 6385, 6230, 18157, 16567, 9310, 2866, 4687, 14171, 4477};
    int fuel = 31710;
    FuelConsumption* pObj = new FuelConsumption();
    clock_t start = clock();
    double result = pObj->maximalDistance(velocities, consumptions, fuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2871.6184971098264;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8467323&rd=5863&pm=2980
********************************************************************************
#line 86 "FuelConsumption.cpp"
#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<map>
using namespace std;
#define ffor(i,n1,n2) for(int i = (n1);i <= (n2);i++)
#define ull unsigned long long
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vd vector<double>
#define vll vector<ll>
#define vull vector<ull>
 
#define fi1(a,b) for(int i1 = (a);i1 <= (b);i1++)
#define fi2(a,b) for(int i2 = (a);i2 <= (b);i2++)
#define fi3(a,b) for(int i3 = (a);i3 <= (b);i3++)
#define fi4(a,b) for(int i4 = (a);i4 <= (b);i4++)
#define fi5(a,b) for(int i5 = (a);i5 <= (b);i5++)
#define fi6(a,b) for(int i6 = (a);i6 <= (b);i6++)
#define fi7(a,b) for(int i7 = (a);i7 <= (b);i7++)
 
#define debug(x) cout << #x << ":" << x << endl;
 
struct comp
{
   bool operator()(int a,int b)
   {
      return a > b;
   }
} ;
comp cmp;
 
template<class t> void vprint(vector<t> v)
{
   ffor(i1,0,v.size() - 1)
      cout << v[i1] << " ";
  cout << "\n";
}
 
template<class T> void aprint(T A,int n,int m)
{
   ffor(i1,0,n-1)
   {
      ffor(i2,0,m - 1)
         cout << A[i1][i2] << " ";
      cout << "\n";
   }
}
 
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
typedef pair<int,int> pii;
#define pb push_back
class FuelConsumption 
{
public:
  double maximalDistance(vector <int> velocities, vector <int> consumptions, int fuel)
  {
    double max = 0.0;
    int n = velocities.size();
    fi1(0,n - 1)
        max >?= (double)(fuel)/consumptions[i1] * velocities[i1];    
    return max;
  }
 
 
 
 
 
   
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/