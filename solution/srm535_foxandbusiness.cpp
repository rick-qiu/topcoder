/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11454
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

class FoxAndBusiness {
public:
    double minimumCost(int K, int totalWork, vector<int> a, vector<int> p);
};

double FoxAndBusiness::minimumCost(int K, int totalWork, vector<int> a, vector<int> p) {
    double ret;
    return ret;
}


int test0() {
    int K = 1;
    int totalWork = 10;
    vector<int> a = {10};
    vector<int> p = {20};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3800.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int K = 1;
    int totalWork = 100;
    vector<int> a = {50, 60};
    vector<int> p = {1000, 2000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 107200.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 2;
    int totalWork = 300;
    vector<int> a = {10, 20, 47};
    vector<int> p = {15, 20, 98765};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 77500.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 4;
    int totalWork = 1000;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> p = {20, 30, 40, 58, 60, 70, 80, 90, 100, 150};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 531764.705882353;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 1;
    int totalWork = 1;
    vector<int> a = {1};
    vector<int> p = {1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3601.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 2;
    int totalWork = 5;
    vector<int> a = {1, 1000, 2, 999, 3, 998};
    vector<int> p = {100000, 33, 1000, 22, 100, 1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 42.44755244755244;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 3;
    int totalWork = 100000;
    vector<int> a = {33, 33, 33, 33, 33};
    vector<int> p = {44, 44, 44, 44, 44};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5309090909090908E7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int K = 3;
    int totalWork = 100000;
    vector<int> a = {11, 22, 33, 44, 55};
    vector<int> p = {555, 444, 333, 222, 111};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8531818181818184E7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    vector<int> p = {5000, 4999, 4888, 4777, 4666, 4555, 4444, 4333, 4222, 4111, 4000, 3999, 3888, 3777, 3666, 3555, 3444, 3333, 3222, 3111, 3000, 2999, 2888, 2777, 2666, 2555, 2444, 2333, 2222, 2111, 2000, 1999, 1888, 1777, 1666, 1555, 1444, 1333, 1222, 1111, 1000, 999, 888, 777, 666, 555, 444, 333, 222, 111};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0789333333333334E8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 29;
    int totalWork = 50659;
    vector<int> a = {72016, 76789, 7372, 54423, 3982, 62191, 49650, 96191, 18522, 7939, 58769, 65060, 32254, 23863, 19304, 72329, 88791, 57436, 2330, 18961, 52199, 40872, 63174, 9958, 85746, 22410, 15352, 50871, 68721, 5391, 46417, 7440, 54963, 98732, 25183, 61341, 14429, 17364, 89999, 80258, 88569, 40874, 96844, 44274, 94266};
    vector<int> p = {54372, 99330, 71128, 54425, 5247, 18130, 61415, 27119, 57270, 69641, 12328, 36174, 46690, 63164, 81852, 26243, 27279, 75006, 95942, 4427, 95738, 16783, 48343, 21418, 73944, 61942, 72585, 65520, 11805, 67497, 60311, 8422, 65691, 47497, 22065, 52137, 4021, 26176, 5823, 16941, 93385, 92475, 96900, 18950, 71583};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3886658445164838E9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 17;
    int totalWork = 2967;
    vector<int> a = {65874, 19183, 91253, 11532, 45176, 74904, 77223, 88302, 52642, 69688, 79826, 54049, 86611, 73757, 1213, 33443, 23441, 98428, 1073, 89065, 27455, 4797};
    vector<int> p = {99767, 87928, 47750, 39138, 28651, 27404, 17553, 76340, 34652, 24631, 43212, 90592, 82141, 31527, 14543, 81037, 57736, 72100, 78061, 94699, 23662, 8945};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.212479369917735E8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 6;
    int totalWork = 67912;
    vector<int> a = {7709, 3113, 92326, 69614, 95130, 45300, 12602, 238, 16845, 84775, 75506, 18193, 6120, 46282, 80855, 25739, 60296, 77976, 96432, 16787, 47275, 64070};
    vector<int> p = {62288, 56493, 36263, 88552, 47554, 32158, 2979, 90737, 37796, 59443, 46203, 65800, 94253, 66035, 43812, 34279, 88481, 54658, 62960, 73968, 40700, 95202};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.099917022023826E9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 19;
    int totalWork = 29433;
    vector<int> a = {76470, 69746, 5068, 94753, 84080, 51414, 17131, 68643, 20244, 13370, 87556, 94111, 13754, 59118, 29218, 16105, 69004, 69196, 13581, 49132, 54375, 48559};
    vector<int> p = {42034, 88116, 44443, 33945, 3113, 60761, 60219, 44085, 10070, 22486, 99425, 11778, 74144, 45752, 41169, 79549, 50910, 2147, 74336, 57451, 32689, 23290};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.59268585001758E8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 27;
    int totalWork = 36212;
    vector<int> a = {89197, 56087, 72310, 21412, 33321, 71697, 46265, 25358, 18948, 79873, 6578, 87484, 83229, 28422, 80671, 10376, 10515, 1282, 6850, 18861, 47188, 10635, 52785, 60071, 14450, 96131, 44, 25998, 70131, 29045, 52818, 31510, 27266, 5311, 20684, 34457};
    vector<int> p = {43306, 5805, 21849, 61009, 29912, 42426, 84472, 71494, 95672, 75484, 40752, 43476, 37081, 17377, 28112, 82744, 9086, 5462, 5738, 31311, 51642, 62500, 90859, 40871, 42844, 75037, 46211, 64325, 88157, 40463, 44980, 62351, 48169, 5926, 90406, 40312};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3505866189807942E9;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 20;
    int totalWork = 11972;
    vector<int> a = {47802, 90131, 58017, 83465, 24488, 79855, 27793, 18737, 83109, 25653, 97929, 25120, 67772, 34443, 20870, 46853, 99432, 30265, 55813, 61815, 8813, 45216, 38143, 15740, 97867, 42314, 31602, 5695, 28461, 54769, 5563, 33089, 87731, 36192, 27360, 54844, 89023, 83461, 98052, 19539, 44244, 40390, 76104, 70060, 34185};
    vector<int> p = {16382, 81349, 78514, 48765, 37959, 767, 33110, 2038, 57277, 40857, 20127, 80850, 17927, 43154, 60146, 31113, 38144, 31838, 69651, 54583, 20493, 34197, 26120, 61492, 52217, 86156, 164, 51459, 55615, 75096, 82868, 99987, 48847, 74437, 7217, 90044, 12504, 76221, 15433, 91780, 72333, 58168, 51363, 61620, 38002};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.391176733619104E8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 3;
    int totalWork = 7180;
    vector<int> a = {24154, 97098, 28539, 34225, 60831, 40225, 45044, 32050, 62373, 6731, 15793, 31470, 31494, 55746, 51789, 85145, 45453, 81733, 38934, 90534, 31462, 26032, 85402, 72520, 26542};
    vector<int> p = {14964, 67417, 26093, 85162, 63406, 10123, 76167, 86642, 32137, 6854, 69274, 64768, 34463, 7261, 4981, 65705, 35342, 20495, 15888, 52860, 92439, 90525, 80828, 68606, 25213};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4542930749479294E7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 18;
    int totalWork = 36224;
    vector<int> a = {85804, 90078, 41115, 48479, 29278, 17133, 14836, 23862, 84737, 78377, 12105, 23428, 12012, 57513, 53434, 69802, 48895, 60601, 24955, 57042, 52447, 43048, 13274, 47175, 33689, 51825, 1873, 81922, 23730, 22273, 38743, 61051, 19273, 70157};
    vector<int> p = {19055, 35602, 52457, 64624, 39517, 67367, 79654, 82328, 66951, 3575, 92924, 17969, 76011, 42906, 72886, 92921, 65714, 96797, 83534, 78489, 77564, 97465, 38003, 55498, 17724, 91813, 47150, 28604, 25984, 58157, 1442, 8763, 24402, 54580};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.665314718292615E8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 41;
    int totalWork = 3800;
    vector<int> a = {27398, 85467, 86718, 38607, 92685, 38686, 99678, 90123, 13549, 97038, 43877, 33255, 44483, 11264, 84918, 2941, 44268, 98504, 43990, 31664, 22115, 12594, 95963, 74479, 90991, 41424, 15323, 50725, 98945, 23999, 87132, 71986, 5334, 92787, 40596, 2008, 7038, 87, 5057, 86974, 82576, 1864, 29852};
    vector<int> p = {93586, 62346, 90315, 86913, 94079, 64924, 81591, 73077, 42500, 81713, 60009, 19752, 14985, 64758, 72250, 98781, 36529, 17539, 24482, 91519, 10419, 61639, 68953, 16000, 32429, 41783, 68257, 16417, 48362, 3089, 63991, 84272, 87807, 81297, 94970, 30703, 81493, 10041, 8065, 28878, 98825, 19022, 96148};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1772450414039415E8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 26;
    int totalWork = 11196;
    vector<int> a = {68292, 77225, 30221, 14123, 47581, 81044, 50171, 12004, 61021, 21192, 84805, 19769, 60059, 45624, 2508, 88646, 63171, 44546, 95140, 68164, 875, 54986, 26721, 47650, 78069, 48830, 83190, 1919, 33164, 53982, 12713, 25612, 50195, 32540, 34437, 34486, 99117, 91470, 79239, 12135, 24071, 88664, 29191, 56584, 68862};
    vector<int> p = {24122, 84313, 50855, 84964, 71116, 83075, 65424, 36221, 18157, 65741, 79607, 60121, 28136, 88533, 16318, 69436, 12460, 60786, 64894, 52114, 89939, 10352, 25864, 39267, 90248, 84810, 63633, 53033, 29196, 47905, 13060, 49376, 19564, 79432, 36790, 71864, 53976, 24679, 36482, 75228, 46749, 1902, 4710, 46765, 82610};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.070812787830562E8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 39;
    int totalWork = 68653;
    vector<int> a = {43638, 31133, 14705, 93176, 44685, 40798, 82805, 72939, 92403, 85772, 66124, 32049, 11180, 53468, 5489, 74831, 74141, 95787, 67983, 31078, 84245, 84454, 43643, 87113, 35688, 6298, 80824, 50734, 45696, 83872, 27203, 89915, 35951, 93200, 9835, 41545, 95840, 32053, 46099, 55900, 6498};
    vector<int> p = {74625, 47425, 47291, 44147, 57856, 6945, 86265, 35226, 17394, 48727, 55480, 9281, 2588, 17837, 8435, 24028, 4731, 21285, 39438, 55461, 96784, 27005, 79176, 53641, 53334, 97816, 59293, 13438, 84441, 17331, 53832, 89757, 98414, 17539, 17322, 9223, 2468, 28613, 56104, 70795, 2647};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6486551146171327E9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 33;
    int totalWork = 77498;
    vector<int> a = {31150, 28524, 54832, 88741, 67380, 71145, 59949, 78041, 56584, 53305, 10879, 10301, 43570, 85890, 4580, 2453, 38427, 40408, 14784, 89379, 94501, 64543, 61509, 24414, 82908, 80340, 24481, 49715, 7989, 32395, 71426, 97458, 764, 95607, 97344, 5121, 59834, 61711, 3976};
    vector<int> p = {68090, 74453, 85146, 54844, 28056, 75920, 95163, 8593, 14987, 77047, 67731, 7180, 69991, 66180, 15661, 51848, 54275, 30432, 73216, 70182, 22237, 65606, 58508, 14134, 92633, 49787, 32517, 53713, 78928, 63706, 85608, 42085, 6436, 41085, 20695, 51550, 48470, 76104, 51879};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5422197906976786E9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 3;
    int totalWork = 80194;
    vector<int> a = {52103, 12158, 67114, 96926, 23265, 44205, 7152, 6136, 64877, 95052, 11634, 95224, 37382, 87504, 8336, 71209, 41892, 80359, 92075, 92950, 22463, 86556, 74623};
    vector<int> p = {86691, 24949, 68194, 18408, 16900, 84465, 18282, 8850, 90149, 86355, 44677, 50482, 50901, 76361, 4719, 42570, 90720, 5495, 87022, 39279, 13653, 2686, 68470};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5888450163914958E8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 11;
    int totalWork = 45890;
    vector<int> a = {98045, 28984, 10258, 43387, 15940, 88678, 32782, 83860, 60122, 13058, 60477, 19985, 46093, 93345, 89367, 87124, 11691, 95748, 55004, 42499, 86868, 7106, 30278, 59463, 49221, 73565, 19791, 88341, 97936, 73643, 71452, 9571, 12634, 53212, 31121, 98341, 20068};
    vector<int> p = {7062, 96855, 17949, 80532, 64998, 47861, 53129, 87457, 70693, 75059, 63210, 64494, 48730, 58739, 90146, 17909, 42262, 30212, 72153, 22541, 3309, 91087, 95428, 76252, 91417, 55524, 64191, 20245, 64628, 13662, 3566, 666, 91399, 45318, 51367, 87711, 40959};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.120323495534848E8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 27;
    int totalWork = 87198;
    vector<int> a = {44835, 82846, 31118, 39981, 56694, 83824, 99025, 8839, 47648, 93618, 12286, 51027, 68441, 35306, 13991, 94142, 83940, 97231, 54548, 55851, 50836, 11228, 94759, 91846, 33431, 98181, 93893, 91577, 32439, 63580, 70308, 88202};
    vector<int> p = {60156, 80110, 47969, 69917, 25571, 57256, 93424, 41781, 60191, 53693, 8017, 68803, 33572, 67907, 57568, 96630, 55041, 36793, 35546, 53872, 93879, 28654, 80714, 80443, 3560, 30036, 42171, 5278, 66161, 93400, 40868, 31098};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0270674063250365E9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 1;
    int totalWork = 18560;
    vector<int> a = {13208, 81868, 17505, 82227, 76481, 53518, 34911, 7646, 96107, 58456, 35985, 26683, 2425, 89181, 28307, 89816, 22342, 23298, 43598, 43969, 78792, 90334, 13466, 96429, 29830};
    vector<int> p = {51333, 41089, 76187, 6109, 97712, 68055, 91792, 23102, 44338, 56548, 57838, 35708, 21960, 93305, 77327, 29942, 26132, 56277, 6033, 33273, 44270, 2706, 81841, 70911, 8465};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 5.022409965505789E7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 3;
    int totalWork = 26840;
    vector<int> a = {535, 82376, 89902, 8461, 37019, 21195};
    vector<int> p = {2605, 21191, 49445, 53484, 45026, 86837};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.461088212866086E8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 41;
    int totalWork = 26791;
    vector<int> a = {69294, 49903, 68444, 33834, 89693, 84062, 58149, 63803, 47615, 61155, 14885, 24605, 30884, 64750, 99357, 69306, 16980, 80977, 27390, 55546, 11402, 9969, 96155, 73006, 53280, 60955, 99853, 44314, 95788, 46605, 56772, 45916, 58270, 79725, 17407, 62504, 76627, 34220, 22442, 54459, 28329, 88607, 9875, 87442, 54980, 77844, 61799, 76548};
    vector<int> p = {34681, 42855, 1860, 82148, 85098, 67583, 41036, 10912, 37753, 87092, 31037, 93202, 96565, 48574, 17150, 5014, 70271, 66388, 60903, 96544, 92838, 63184, 15804, 91367, 992, 2839, 45334, 62793, 20793, 12185, 20010, 98687, 82615, 36104, 4159, 31214, 51982, 69229, 90211, 36757, 64649, 66108, 18927, 3138, 3427, 97840, 29197, 53286};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.727242779364113E8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 1;
    int totalWork = 56209;
    vector<int> a = {19936, 54997, 97746, 15632, 60725, 29077, 53014, 55419, 70854, 78063, 98185, 63445, 61435, 54880, 99885, 88668, 34313, 15596, 97133, 69301, 46843, 69713, 54175};
    vector<int> p = {904, 45194, 7346, 56314, 3541, 33585, 59354, 5797, 84922, 54359, 77359, 25436, 32134, 45833, 23152, 39692, 95339, 89196, 65069, 95470, 22602, 47832, 65098};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0823086100321025E7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 6;
    int totalWork = 44334;
    vector<int> a = {78899, 53979, 59654, 79292, 70843, 66515, 45279};
    vector<int> p = {40226, 50461, 72321, 11620, 83842, 2650, 9073};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3544971118390067E9;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 5;
    int totalWork = 13736;
    vector<int> a = {30138, 14085, 81568, 3310, 45913, 32542, 67474, 22241, 74271, 24341, 23004, 31804, 30239, 12089, 42282, 91113, 57796, 92185, 55359, 13460, 89584, 77518, 56837, 52483, 14672, 77592, 21723, 33253, 5376, 81084, 68741, 43546, 62105, 34373, 1260, 39218, 74246, 41176, 60243, 37412, 30937, 79979, 94199, 3689, 53651, 88089, 75374, 75927, 16252, 7905};
    vector<int> p = {72954, 70757, 48638, 52302, 22669, 95593, 27127, 58743, 99693, 51955, 72475, 4972, 5946, 6473, 79662, 74918, 95403, 78778, 22323, 50992, 20311, 10201, 94899, 63898, 11632, 29772, 26126, 17980, 80314, 35279, 15552, 53587, 64669, 57412, 24950, 62975, 85100, 87076, 22144, 42940, 74073, 43503, 53552, 53545, 99395, 35957, 25065, 23457, 99451, 22354};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.429962618680051E7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 33;
    int totalWork = 33640;
    vector<int> a = {41414, 98076, 25824, 6484, 21765, 42372, 76921, 68396, 86705, 30515, 98633, 63374, 39340, 61095, 44057, 44956, 84285, 90744, 52114, 98847, 80619, 53536, 98257, 1563, 41263, 80589, 78326, 7861, 76668, 3384, 40962, 80264, 87549, 75265, 25853, 83245, 56478, 79789, 60866, 86468, 8455, 24187, 33059, 95180, 81059, 20882, 7499, 57582, 82114, 47832};
    vector<int> p = {37766, 40027, 59513, 84582, 56653, 52487, 13101, 12770, 15227, 71307, 61746, 20555, 64685, 84753, 26318, 51776, 89708, 69910, 18392, 44498, 23603, 31530, 50176, 77632, 30340, 38955, 62421, 29910, 87797, 62919, 75199, 74242, 44891, 17531, 73263, 86782, 74464, 8298, 38100, 54353, 37581, 6043, 55898, 64494, 85606, 42594, 60199, 72131, 79493, 55521};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1245024271130335E9;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 2;
    int totalWork = 1897;
    vector<int> a = {20473, 10478, 64486, 10024, 72572, 8972, 2073, 20665, 81011, 8712, 46542, 52114, 84613, 85161, 30533, 13943, 83312, 72553, 9679, 22866, 12118, 26348, 41120, 4015, 11582, 41961, 98777, 46647, 49676, 38803, 22148, 60928, 28944, 40839, 39477, 86964, 93101, 40840, 54640, 71275, 41027, 9374, 52948, 14614, 82315, 45352, 33866, 66565, 59303, 45612};
    vector<int> p = {78734, 68176, 59928, 65632, 53339, 35023, 69980, 53366, 79252, 42423, 90056, 82122, 25239, 1295, 35342, 95135, 18981, 520, 87581, 49054, 43518, 98519, 50889, 55241, 84495, 60267, 82518, 39545, 46831, 19052, 77938, 47715, 24754, 30394, 26914, 15420, 94443, 83689, 34272, 35466, 79259, 10091, 3205, 95755, 70488, 93093, 81221, 43716, 70763, 45697};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1780378.5950200998;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 14;
    int totalWork = 19448;
    vector<int> a = {32925, 95012, 47489, 78732, 51301, 67326, 52885, 34871, 53117, 21663, 97934, 23888, 74041, 13661, 62293, 44688, 26076, 90104, 55197, 77427, 65281, 97614, 44306, 53222, 18545, 49267, 94892, 11810, 73338, 28180, 99745, 50028, 79233, 74474, 95716, 17116, 4968, 65017, 951, 76991, 67602, 93541, 57652, 54211, 62222, 87868, 24388, 7879, 26864, 23631};
    vector<int> p = {46808, 73242, 32364, 97735, 8655, 26646, 62240, 6804, 99015, 54354, 93373, 75647, 67933, 47819, 53680, 88243, 94120, 42165, 74558, 63087, 94316, 3511, 45476, 9833, 5853, 69405, 2874, 57524, 44671, 33534, 69427, 4603, 26890, 4557, 70748, 90902, 50961, 38185, 88682, 77530, 84789, 75832, 86840, 76450, 78107, 24803, 34930, 97228, 49914, 34815};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0498530219985715E8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 18;
    int totalWork = 329;
    vector<int> a = {13773, 27230, 82005, 57084, 64308, 5901, 38455, 91491, 93380, 51606, 8930, 61871, 28254, 86152, 21285, 41688, 81441, 45856, 67712, 57188, 58408, 77942, 47388, 42916, 89814, 98744, 49018, 73841, 9771, 13510, 91761, 29936, 41783, 66289, 66723, 56110, 94620, 57146, 30749, 86222, 54806, 348, 46516, 59517, 99149, 2905, 36145, 33714, 38910, 17772};
    vector<int> p = {13695, 33335, 3454, 86363, 15958, 82064, 77943, 67878, 34652, 59771, 57046, 25265, 36103, 52161, 66241, 70211, 2910, 91632, 4473, 23047, 11883, 69640, 43264, 51293, 56116, 92661, 13724, 90694, 2607, 2658, 64190, 50616, 65945, 43761, 49630, 31369, 72547, 11865, 62310, 26570, 80599, 32852, 21654, 16640, 53428, 37853, 54595, 47822, 8659, 26655};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3915420.4708323316;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 41;
    int totalWork = 37378;
    vector<int> a = {70255, 20168, 64009, 58136, 39503, 16928, 26546, 46936, 52858, 77660, 98891, 65589, 11844, 49027, 45790, 324, 65381, 52221, 7347, 34905, 23836, 66377, 48487, 75013, 92030, 67650, 49788, 64057, 62688, 74561, 94163, 36765, 3035, 59001, 51987, 93968, 48423, 38444, 83896, 75243, 17350, 61706, 21653, 26387, 14510, 5409, 69998, 40518, 10627, 26002};
    vector<int> p = {77593, 16642, 81979, 10362, 33201, 48662, 38810, 55812, 16595, 71810, 1036, 19980, 59149, 14064, 77908, 69, 50448, 92262, 49673, 6520, 7563, 41285, 65299, 85463, 28725, 3488, 87807, 45280, 21203, 91708, 65379, 88315, 85619, 62855, 20969, 66438, 28161, 42789, 21138, 38267, 52806, 18020, 17816, 13957, 55018, 97871, 99241, 28408, 2823, 51581};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2493845778745801E9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 22;
    int totalWork = 22366;
    vector<int> a = {32722, 69364, 41535, 13958, 88325, 70861, 60764, 68773, 90445, 74775, 12032, 28552, 63725, 55097, 59173, 3851, 79657, 33426, 11911, 19814, 2502, 19190, 88807, 59858, 90951, 76783, 5521, 6208, 19309, 32304, 74507, 89756, 43792, 2327, 1706, 41042, 49932, 43856, 66507, 60223, 35504, 74030, 41956, 73118, 59676, 87876, 95616, 21863, 95044, 40911};
    vector<int> p = {80150, 80194, 85498, 49885, 8537, 76218, 10010, 41346, 81844, 74661, 85207, 56336, 37281, 73409, 86202, 661, 51391, 99860, 92661, 55308, 60818, 76123, 43581, 88873, 13146, 88933, 55210, 22581, 81893, 31220, 86022, 97864, 89125, 82087, 27899, 24231, 79475, 60106, 85707, 90368, 86947, 3550, 58889, 67918, 48384, 88270, 35023, 77754, 6197, 70033};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 5.819879801970946E8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 45;
    int totalWork = 19873;
    vector<int> a = {59200, 13439, 80641, 57015, 29409, 32115, 33680, 27255, 89353, 29280, 44365, 35559, 63868, 61817, 47943, 56138, 4305, 5487, 93156, 73981, 43291, 86429, 24123, 46991, 67939, 24286, 18157, 41971, 10099, 42264, 83055, 57826, 90216, 79143, 99664, 24267, 84977, 88774, 6673, 6210, 77622, 24805, 71295, 32127, 67573, 27009, 67455, 3093, 5223, 67965};
    vector<int> p = {51344, 99302, 8763, 74649, 72434, 65603, 94214, 37433, 63122, 93579, 21065, 97288, 84983, 25870, 55186, 729, 25919, 58554, 29320, 23577, 5931, 57415, 27295, 13548, 57916, 6637, 16966, 18196, 74105, 99856, 95573, 96139, 54751, 38715, 83988, 42441, 99679, 28724, 54999, 69033, 28512, 80796, 37337, 5698, 29340, 75180, 818, 90669, 14968, 18746};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 8.024323609216467E8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 7;
    int totalWork = 23234;
    vector<int> a = {3206, 93967, 33947, 47830, 83382, 4248, 26709, 4195, 88091, 11260, 74210, 60074, 78800, 70359, 83302, 53285, 37769, 23302, 83762, 19293, 80544, 60281, 15347, 18366, 98450, 94013, 61308, 72506, 32088, 16285, 47987, 73813, 39963, 38625, 9776, 31623, 73476, 93661, 52581, 78539, 95415, 24751, 20048, 87546, 21998, 8949, 17856, 68663, 7526, 3484};
    vector<int> p = {58976, 66737, 14902, 94321, 79487, 48555, 22854, 58649, 57923, 35577, 49549, 56184, 34007, 46097, 51496, 37283, 58356, 56719, 59404, 63531, 8119, 24567, 98304, 2200, 9995, 52001, 43594, 70226, 15747, 73425, 22734, 65019, 21041, 18631, 46088, 14927, 97309, 44706, 62847, 40272, 43480, 83438, 96802, 75033, 37343, 52691, 57053, 23632, 75128, 77618};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6104254062369898E8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 11;
    int totalWork = 13988;
    vector<int> a = {82570, 66307, 1513, 81539, 63030, 27631, 35398, 2013, 99884, 28422, 82737, 95015, 32029, 85186, 47386, 15400, 22780, 63120, 68610, 91626, 81394, 12515, 63599, 83267, 42074, 81513, 52207, 69802, 17901, 86170, 15079, 7400, 24824, 3055, 61604, 66979, 66269, 1950, 33133, 78980, 39303, 86364, 70564, 55792, 77304, 47918, 23371, 96483, 87229, 89096};
    vector<int> p = {46612, 88395, 23604, 50639, 23784, 11190, 37018, 60094, 38342, 8370, 65610, 92022, 97937, 28840, 26428, 20466, 79031, 89267, 6324, 64487, 96323, 98831, 47460, 40936, 48898, 57107, 97529, 64671, 14775, 90424, 74410, 96898, 53279, 40001, 81396, 14722, 69073, 17813, 79649, 15068, 88896, 69031, 45729, 98360, 41643, 19503, 81112, 10509, 64064, 620};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1694512904817738E8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 5;
    int totalWork = 79130;
    vector<int> a = {21048, 57445, 8247, 82500, 84302, 28841, 36712, 80087, 24851, 16118, 60353, 50114, 90882, 66032, 82387, 77135, 78839, 12459, 52963, 30857, 49366, 48832, 32004, 20242, 77604, 376, 58034, 21282, 20541, 35459, 51857, 9015, 18177, 57248, 11331, 42231, 19037, 94221, 68410, 97822, 10331, 85986, 22144, 97712, 83625, 10888, 73735, 81542, 39821, 52894};
    vector<int> p = {27247, 20451, 17708, 98121, 75799, 79017, 84169, 55453, 5122, 10318, 18432, 83874, 61086, 38462, 54534, 38958, 16986, 37378, 46554, 13894, 98157, 90288, 85006, 27823, 33673, 36667, 13703, 13509, 39406, 64250, 67891, 45799, 9495, 62650, 30886, 26680, 41432, 48739, 89537, 91954, 68314, 18126, 7191, 18698, 84811, 58620, 24274, 8629, 73544, 92164};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.193751939168075E8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 20;
    int totalWork = 50033;
    vector<int> a = {72897, 83733, 19882, 66707, 16993, 73180, 6661, 85062, 7335, 38524, 46512, 74774, 44141, 82228, 59892, 64890, 51213, 11082, 13902, 17540, 59471, 79530, 92835, 56967, 93122, 67958, 19114, 66465, 99765, 33462, 14201, 89238, 99497, 51711, 71512, 23280, 20070, 9411, 26704, 15826, 80840, 91791, 39565, 31459, 8665, 30640, 13266, 86389, 66099, 46234};
    vector<int> p = {58472, 74755, 15334, 67375, 35044, 23248, 84721, 59057, 25398, 68952, 32462, 47548, 42774, 5910, 5534, 78592, 1719, 46351, 43991, 1167, 80772, 86396, 5342, 36245, 90815, 16299, 50467, 28125, 68577, 70867, 78409, 65205, 72319, 95577, 45108, 67446, 12561, 52346, 13031, 69250, 63965, 41553, 61989, 77079, 60066, 13606, 11215, 72647, 56293, 31665};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 7.830473806634895E8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 30;
    int totalWork = 70086;
    vector<int> a = {31549, 61620, 8882, 97416, 34983, 51932, 15798, 39824, 72124, 81543, 19287, 80127, 15438, 45072, 7382, 96992, 87045, 55054, 19857, 61817, 76039, 36970, 10275, 82382, 84903, 22670, 1440, 33527, 21925, 45922, 60169, 10573, 71866, 38130, 47357, 39923, 21319, 8233, 7007, 11193, 7097, 48414, 33052, 88323, 50524, 30811, 25347, 50450, 75981, 64028};
    vector<int> p = {6003, 81220, 6837, 94799, 879, 74185, 55390, 97793, 48628, 83506, 64753, 57737, 80917, 71019, 64362, 75504, 48280, 37463, 66798, 14803, 6013, 22960, 96492, 70742, 52061, 43486, 43554, 60417, 36585, 19247, 94400, 51203, 24135, 62546, 42925, 3491, 89475, 88625, 51212, 55287, 81750, 35903, 79340, 35593, 24054, 52857, 41614, 71959, 54874, 19768};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0726642169785876E9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 50;
    int totalWork = 40869;
    vector<int> a = {246, 53149, 80767, 7573, 65417, 60270, 89691, 61214, 98540, 36179, 42491, 14559, 78879, 76868, 44953, 93089, 99479, 13989, 32107, 12551, 7964, 68345, 78734, 47195, 1201, 56197, 35620, 69897, 84512, 52716, 36591, 9474, 20706, 46793, 84845, 88240, 43080, 72035, 670, 14378, 52921, 22275, 56923, 77311, 73978, 82557, 42192, 38843, 56404, 50545};
    vector<int> p = {28426, 68614, 60444, 89380, 61816, 1040, 8404, 28490, 77432, 75889, 84038, 54034, 72532, 23194, 15028, 14611, 20820, 19906, 37319, 46383, 88230, 82368, 82413, 52390, 99476, 28483, 11193, 39167, 1512, 39173, 18385, 27125, 68874, 32705, 76578, 41317, 83797, 88259, 14244, 90014, 42249, 40624, 22306, 47692, 47634, 44370, 54009, 89587, 65528, 60525};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9290577162181766E9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 4;
    int totalWork = 11644;
    vector<int> a = {85252, 72818, 43371, 64593, 16973, 15671, 46173, 48295, 5141, 9135, 76671, 21190, 92053, 53585, 70080, 7300, 2406, 99822, 53392, 49860, 99401, 13010, 19358, 9511, 89192, 38320, 96060, 16032, 82613, 37209, 64890, 39705, 88005, 19842, 61155, 52352, 21035, 3390, 12367, 53547, 71735, 62597, 37062, 57628, 49049, 68856, 79240, 95682, 61387, 99406};
    vector<int> p = {71170, 5152, 96654, 16424, 81583, 33964, 71686, 16711, 34163, 57902, 60321, 82488, 553, 4680, 23606, 43106, 53816, 5607, 18768, 28290, 82853, 53447, 24927, 81351, 98992, 99537, 21028, 44183, 76142, 61422, 94874, 87302, 80793, 56829, 19421, 91951, 78855, 8720, 72009, 36093, 66006, 30707, 84354, 16556, 43368, 40892, 10005, 14517, 78550, 10083};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.542699764002801E7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 35;
    int totalWork = 16165;
    vector<int> a = {9819, 61759, 72992, 21961, 94837, 54505, 29678, 89603, 81884, 47930, 42423, 82916, 77972, 80178, 13862, 32690, 26212, 37072, 91897, 65520, 60405, 57891, 19553, 7271, 9866, 84938, 12241, 62365, 66331, 43061, 62282, 50769, 4766, 55544, 79324, 26818, 30887, 31001, 18227, 35510, 73640, 53110, 71192, 70998, 15831, 87853, 59277, 79438, 73690, 86948};
    vector<int> p = {56640, 5665, 66907, 56382, 52204, 92986, 80978, 47161, 82233, 3474, 3348, 10723, 4461, 99402, 93290, 54468, 19831, 17493, 9143, 30205, 67093, 98128, 84968, 23518, 372, 44329, 84102, 58747, 76280, 12156, 28853, 65159, 42341, 81847, 97111, 20426, 17761, 81366, 60002, 51232, 60590, 18111, 83917, 41534, 16790, 20784, 20332, 19293, 38364, 24322};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4195008893720865E8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 23;
    int totalWork = 65746;
    vector<int> a = {69089, 3910, 3055, 27579, 90808, 66404, 6981, 46505, 7628, 38948, 45618, 88957, 13379, 10965, 19645, 29218, 67090, 55140, 46958, 74509, 97172, 20029, 78314, 40994, 84829, 85226, 22063, 71187, 54807, 29923, 31643, 59967, 97158, 20101, 1039, 16665, 70728, 98362, 62583, 94879, 29721, 33459, 34223, 92700, 12458, 84285, 69005, 74150, 15848, 20383};
    vector<int> p = {23286, 37799, 2815, 70845, 81169, 73172, 92540, 49709, 28560, 40243, 85548, 39770, 82657, 5203, 14700, 97302, 41891, 27102, 60253, 86396, 1147, 17621, 53140, 60757, 76442, 94314, 38755, 7294, 21793, 5764, 17690, 79523, 41236, 28665, 35675, 97709, 2957, 60647, 46420, 226, 40578, 54669, 33570, 51063, 50924, 33330, 85036, 66649, 14665, 39089};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0115026422977116E9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 10;
    int totalWork = 45365;
    vector<int> a = {31725, 49388, 52758, 98436, 94298, 11773, 32018, 88357, 34017, 2671, 48019, 60573, 63027, 15224, 83496, 44306, 69993, 6466, 81710, 40390, 19256, 13555, 41977, 89393, 21354, 61416, 87302, 95445, 91585, 9167, 93232, 82802, 49875, 7337, 99845, 41089, 81293, 18646, 2243, 75230, 2333, 13914, 89186, 83258, 51131, 55485, 19870, 90575, 51813, 42376};
    vector<int> p = {64883, 4504, 14765, 98087, 94900, 16809, 43295, 9422, 37286, 193, 97162, 52870, 52800, 97013, 39934, 18332, 37906, 39727, 14503, 58490, 65076, 5601, 29870, 88092, 87330, 8887, 80065, 36064, 26270, 12333, 13746, 5993, 38480, 38409, 45938, 36026, 41408, 39832, 78918, 22699, 95488, 13965, 64821, 68048, 30470, 43729, 81168, 87264, 4471, 58984};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4241127635717446E8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 32;
    int totalWork = 26409;
    vector<int> a = {96365, 92219, 95850, 76202, 68646, 96422, 26496, 94052, 26142, 12333, 50184, 86468, 74902, 90781, 8892, 94333, 18771, 92606, 24532, 46649, 33182, 79228, 86955, 55310, 78512, 36448, 72442, 98361, 43519, 65130, 80111, 7729, 30924, 13050, 79795, 10435, 78041, 57465, 8204, 90518, 53766, 86832, 85392, 79596, 42841, 45635, 91196, 20116, 39881, 44366};
    vector<int> p = {57033, 19183, 35049, 77271, 62984, 30408, 23446, 48231, 56051, 64178, 75553, 13048, 67605, 17523, 78930, 3576, 31645, 63879, 98881, 5349, 57628, 85292, 36980, 27009, 80302, 54882, 72513, 82630, 72385, 12816, 71176, 50335, 4279, 97958, 818, 78719, 57792, 96883, 37760, 15250, 73065, 70890, 97087, 87389, 46123, 92570, 53710, 9714, 36554, 55816};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 8.263661709664099E8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 6;
    int totalWork = 18436;
    vector<int> a = {95792, 75375, 88905, 18725, 22846, 35675, 8974, 20449, 22244, 11586, 20974, 72608, 95389, 1446, 74106, 42125, 64009, 10555, 70928, 3772, 30531, 97440, 29257, 63153, 43301, 5033, 47461, 53575, 61, 37309, 69472, 72560, 32996, 68267, 91597, 26349, 89600, 88998, 88325, 50015, 2332, 34625, 51083, 24722, 65365, 86416, 59083, 34571, 10298, 26572};
    vector<int> p = {49359, 18109, 75421, 63876, 59281, 92618, 65013, 78258, 21830, 7661, 6988, 6796, 56380, 55475, 49882, 19227, 10479, 54907, 94269, 62093, 48414, 91392, 10757, 62016, 51925, 50814, 12838, 56800, 15565, 11715, 76908, 64131, 69498, 62109, 85812, 66109, 5067, 61037, 42381, 33208, 11659, 76147, 87513, 80427, 74274, 30609, 60200, 1993, 58262, 75548};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.111058524989317E7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 8;
    int totalWork = 58979;
    vector<int> a = {10, 3, 8, 3, 5, 2, 3, 4, 9, 10, 6, 5, 9, 10, 2, 6, 1, 2, 2, 6, 5, 7, 8, 7, 10, 6, 2, 5, 10, 1, 6, 9, 1, 7, 8, 7, 3, 5, 1, 9, 1, 8, 5, 6, 1, 6, 9, 3, 7, 9};
    vector<int> p = {42603, 81448, 22854, 8546, 91977, 14296, 46438, 40484, 78421, 54898, 68324, 66238, 29790, 9740, 36682, 69142, 56657, 14018, 77759, 25433, 35350, 42992, 3122, 13931, 75308, 46418, 92277, 33778, 78953, 90945, 76897, 44487, 4706, 35775, 82969, 54359, 62568, 14589, 73968, 84966, 69172, 21031, 87901, 27769, 26831, 85579, 48392, 52692, 86444, 97622};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.22825612375E8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 48;
    int totalWork = 8471;
    vector<int> a = {8, 7, 5, 2, 7, 10, 7, 3, 4, 3, 4, 2, 7, 6, 7, 3, 9, 9, 3, 7, 1, 3, 6, 10, 3, 7, 9, 5, 10, 5, 3, 6, 3, 9, 8, 8, 2, 6, 3, 10, 6, 5, 2, 4, 6, 5, 8, 6, 7, 7};
    vector<int> p = {84009, 73464, 57384, 75151, 98963, 7223, 70679, 99109, 33453, 10429, 63252, 13368, 47795, 26259, 50161, 22526, 75799, 90561, 75716, 52916, 91904, 85158, 89161, 95816, 36654, 20674, 82577, 64515, 29215, 60309, 56442, 6778, 49790, 91158, 4064, 73141, 37224, 14268, 49291, 75510, 26750, 22531, 98407, 45430, 37826, 71320, 17101, 2302, 87448, 72785};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4886388612734085E8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 21;
    int totalWork = 29464;
    vector<int> a = {9, 9, 1, 5, 2, 4, 2, 8, 8, 2, 1, 6, 4, 6, 1, 1, 9, 1, 5, 8, 6, 8, 5, 7, 6, 4, 5, 2, 3, 5, 8, 3, 10, 1, 5, 1, 1, 6, 5, 7, 8, 5, 10, 5, 10, 1, 2, 6, 4, 7};
    vector<int> p = {14643, 38558, 44185, 26548, 52884, 70990, 14716, 45013, 96047, 89495, 2909, 81821, 5517, 28787, 40522, 18568, 59420, 72055, 89149, 79405, 86723, 53897, 89062, 21795, 51657, 36965, 33061, 6277, 80280, 61630, 75103, 34236, 42669, 8254, 69729, 30439, 73335, 10771, 35441, 67391, 8052, 78325, 12352, 68766, 24606, 25764, 28795, 83331, 58390, 92500};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 5.860763289756098E8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 9;
    int totalWork = 17024;
    vector<int> a = {2, 6, 1, 1, 6, 5, 6, 9, 2, 6, 9, 8, 1, 1, 9, 1, 2, 6, 5, 8, 9, 6, 3, 8, 1, 4, 4, 9, 8, 2, 7, 3, 7, 8, 5, 2, 6, 5, 5, 9, 7, 2, 4, 1, 4, 10, 1, 9, 2, 10};
    vector<int> p = {62685, 33556, 52068, 76485, 50992, 88618, 67552, 87595, 92723, 5917, 3480, 1742, 56597, 73770, 49584, 1638, 94245, 14186, 68369, 54028, 28967, 50245, 77374, 90752, 64122, 74891, 84117, 55324, 3773, 34970, 59206, 31570, 21436, 3700, 68414, 35830, 84540, 87040, 34794, 96811, 38995, 43431, 55260, 31562, 31941, 6980, 75206, 79266, 24598, 20963};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0443677947169814E8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 23;
    int totalWork = 60727;
    vector<int> a = {6, 8, 7, 10, 10, 2, 5, 10, 4, 3, 5, 2, 10, 5, 3, 10, 6, 3, 1, 3, 1, 7, 9, 10, 4, 3, 2, 8, 4, 3, 10, 10, 10, 3, 7, 10, 8, 7, 7, 7, 3, 7, 1, 2, 10, 7, 8, 3, 7, 6};
    vector<int> p = {92925, 34345, 38123, 92401, 21088, 36144, 14427, 57536, 79719, 82166, 91927, 51788, 10917, 98491, 7615, 90345, 40106, 41285, 94533, 88614, 81495, 11249, 1308, 81852, 16790, 5922, 74192, 56359, 37560, 57004, 21494, 41461, 47964, 46705, 95879, 98547, 75971, 81019, 27690, 84707, 17860, 31699, 52171, 74322, 73679, 93059, 24257, 3866, 57545, 89514};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4149396326929827E9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 9;
    int totalWork = 54034;
    vector<int> a = {7, 8, 9, 10, 1, 5, 7, 1, 7, 3, 1, 2, 8, 10, 6, 4, 3, 1, 1, 7, 8, 6, 4, 8, 6, 6, 6, 4, 6, 8, 4, 6, 7, 9, 10, 4, 2, 8, 1, 9, 4, 1, 8, 2, 1, 10, 7, 9, 3, 10};
    vector<int> p = {98011, 10009, 43694, 42541, 10242, 61982, 73352, 44165, 56218, 40537, 67378, 33588, 87481, 42104, 45213, 31216, 85191, 32188, 73444, 36844, 65882, 3818, 47761, 11640, 46783, 46454, 72324, 49425, 8794, 41230, 60325, 20376, 50905, 14205, 98174, 66211, 91189, 2955, 93158, 866, 68112, 21999, 73330, 23610, 31579, 21060, 16890, 50954, 93706, 81996};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.159115591219512E8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 22;
    int totalWork = 64449;
    vector<int> a = {8, 3, 9, 5, 8, 5, 1, 7, 10, 2, 6, 9, 10, 10, 3, 5, 2, 6, 3, 8, 9, 10, 9, 10, 7, 1, 1, 1, 2, 8, 10, 10, 4, 5, 5, 6, 7, 2, 10, 6, 7, 5, 9, 6, 8, 9, 6, 3, 2, 7};
    vector<int> p = {38009, 42003, 58790, 42272, 30441, 34617, 58326, 35515, 50263, 35545, 2243, 28436, 93380, 36158, 40503, 79911, 29243, 80253, 44858, 85949, 69555, 47180, 99122, 50250, 54734, 61957, 18578, 91969, 59259, 76969, 82538, 70089, 84094, 73226, 24251, 29206, 19267, 57597, 4191, 21789, 11575, 10140, 78399, 96102, 35887, 52653, 34799, 88893, 79414, 30793};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6517308896000001E9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 31;
    int totalWork = 98278;
    vector<int> a = {5, 3, 6, 2, 4, 10, 1, 8, 8, 6, 9, 4, 2, 4, 2, 9, 9, 9, 5, 1, 6, 4, 7, 3, 2, 6, 3, 9, 1, 5, 6, 4, 4, 3, 3, 1, 6, 7, 1, 2, 3, 7, 2, 2, 1, 7, 4, 8, 3, 10};
    vector<int> p = {47706, 74520, 52955, 48037, 18595, 50436, 48120, 2626, 2700, 91414, 43954, 24194, 96873, 97722, 42310, 86861, 7970, 98638, 86379, 71089, 64195, 61537, 69756, 47262, 4894, 98250, 31029, 12045, 59904, 95551, 85546, 97102, 68628, 98472, 78259, 59888, 35381, 38459, 52842, 56952, 28567, 46951, 20981, 25112, 47571, 98325, 29810, 92690, 34879, 52153};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.210131817788618E9;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 47;
    int totalWork = 41932;
    vector<int> a = {2, 2, 3, 5, 3, 9, 4, 4, 1, 2, 10, 9, 8, 9, 8, 8, 10, 5, 2, 1, 9, 3, 5, 8, 3, 9, 2, 7, 6, 6, 10, 5, 10, 8, 5, 5, 9, 7, 9, 4, 10, 10, 5, 7, 1, 4, 3, 5, 1, 4};
    vector<int> p = {84783, 62813, 96649, 53816, 29346, 35245, 35760, 84666, 40684, 91924, 40570, 68662, 56083, 94148, 56769, 8550, 25070, 81368, 74785, 46846, 37383, 38080, 91075, 8447, 39994, 90725, 52354, 39044, 99128, 1582, 14479, 58622, 38352, 92821, 90980, 26627, 24007, 6598, 54460, 47429, 85366, 6557, 12517, 73035, 5840, 16031, 30014, 95893, 69962, 11796};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.884454917151751E9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 38;
    int totalWork = 95074;
    vector<int> a = {7, 6, 7, 2, 10, 3, 3, 9, 1, 1, 9, 7, 1, 9, 1, 6, 6, 7, 3, 9, 9, 4, 2, 2, 9, 6, 8, 5, 10, 7, 3, 7, 5, 3, 9, 10, 7, 1, 1, 6, 8, 1, 9, 6, 3, 7, 1, 5, 4, 10};
    vector<int> p = {75082, 56084, 19479, 71994, 42063, 3200, 89956, 71797, 52455, 81387, 43184, 10343, 14592, 58763, 47585, 1278, 10391, 64318, 93029, 68836, 47373, 15833, 86167, 54122, 76266, 85641, 43088, 4462, 36435, 89231, 99887, 88793, 23762, 97098, 61884, 18479, 62087, 88060, 70881, 57727, 19840, 39881, 76679, 27890, 76817, 77833, 98915, 76683, 73969, 18650};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8702870576702127E9;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 32;
    int totalWork = 46760;
    vector<int> a = {9, 63, 6, 50, 71, 76, 69, 88, 13, 51, 79, 61, 65, 77, 91, 42, 21, 7, 57, 40, 36, 61, 44, 7, 10, 84, 48, 39, 94, 94, 23, 74, 97, 59, 20, 17, 36, 19, 65, 14, 9, 9, 21, 22, 3, 88, 11, 7, 70, 10};
    vector<int> p = {25547, 62490, 95984, 5173, 82271, 68235, 591, 12956, 92754, 4994, 50948, 96886, 34133, 90401, 64890, 31254, 98907, 72549, 36810, 69723, 33213, 538, 19045, 75477, 28530, 91674, 35582, 35756, 15936, 327, 86744, 34791, 58658, 7115, 59523, 87771, 32164, 55532, 95207, 25206, 55938, 68594, 64673, 7636, 91371, 78873, 94513, 50344, 36092, 33103};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0500738310116384E9;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int K = 48;
    int totalWork = 56375;
    vector<int> a = {93, 4, 64, 96, 63, 39, 30, 46, 77, 64, 92, 37, 33, 100, 57, 36, 79, 60, 9, 64, 40, 71, 57, 56, 83, 65, 69, 5, 15, 19, 56, 31, 69, 12, 89, 88, 38, 100, 50, 82, 22, 24, 37, 55, 56, 85, 22, 42, 61, 33};
    vector<int> p = {85819, 45532, 79003, 36708, 96714, 37077, 71550, 58368, 28306, 71014, 96905, 34545, 12633, 90523, 40347, 84526, 12790, 99722, 23937, 38566, 50058, 10597, 1798, 62808, 8239, 15247, 17220, 40866, 76959, 1148, 30367, 38073, 28714, 70973, 64360, 50599, 82398, 53396, 83695, 69906, 79431, 29310, 36586, 36100, 72290, 93514, 99004, 86037, 24382, 66833};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.835734336689489E9;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int K = 32;
    int totalWork = 79810;
    vector<int> a = {83, 1, 53, 62, 87, 72, 9, 90, 49, 3, 73, 49, 33, 87, 37, 78, 88, 39, 46, 55, 50, 80, 3, 66, 20, 71, 31, 7, 100, 23, 68, 19, 43, 33, 61, 53, 90, 37, 55, 76, 55, 34, 3, 56, 69, 98, 81, 22, 62, 74};
    vector<int> p = {34106, 28102, 42940, 2726, 63390, 51707, 63976, 23632, 76018, 88880, 33931, 53610, 60491, 78917, 66020, 41182, 91965, 32087, 85426, 70360, 79365, 77366, 46342, 13512, 12362, 788, 74592, 57074, 47962, 38550, 58203, 54544, 54008, 46377, 86662, 30152, 40045, 99817, 24972, 61334, 43104, 71702, 57746, 19944, 53177, 22293, 73973, 90840, 15149, 10136};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5101036008202324E9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int K = 31;
    int totalWork = 76416;
    vector<int> a = {13, 87, 74, 74, 9, 37, 29, 25, 76, 14, 96, 73, 84, 31, 57, 41, 98, 89, 43, 1, 31, 74, 76, 51, 33, 13, 32, 49, 55, 26, 79, 86, 39, 48, 43, 49, 63, 13, 58, 93, 89, 58, 23, 26, 25, 81, 17, 61, 96, 64};
    vector<int> p = {30306, 18838, 89438, 54909, 81143, 25723, 92133, 24744, 37665, 75229, 84161, 36522, 57121, 10705, 55025, 3439, 28445, 67801, 63732, 77337, 29965, 99251, 41444, 88214, 65162, 37936, 7429, 92442, 72889, 44097, 57502, 605, 82164, 19118, 62183, 66991, 92773, 20397, 61981, 16313, 4148, 59331, 42733, 4767, 32792, 88023, 57006, 41815, 67087, 3586};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.081022745371938E9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int K = 33;
    int totalWork = 68662;
    vector<int> a = {90, 44, 20, 79, 41, 89, 97, 30, 95, 54, 62, 67, 30, 79, 34, 7, 47, 65, 66, 44, 89, 37, 89, 56, 63, 65, 59, 39, 28, 89, 66, 54, 21, 70, 89, 87, 4, 11, 57, 48, 14, 28, 98, 37, 10, 65, 68, 2, 2, 60};
    vector<int> p = {88679, 38353, 63027, 54946, 25990, 26540, 8289, 78755, 47115, 2565, 21854, 62919, 49660, 76791, 83011, 86254, 62210, 83587, 92601, 38237, 39072, 37361, 80611, 3115, 47606, 11100, 60434, 52589, 52879, 80244, 68748, 11460, 24687, 95326, 59022, 92528, 4314, 84032, 43560, 551, 44175, 19555, 88874, 41413, 6152, 61771, 92819, 50704, 8740, 59956};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2646666991653433E9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int K = 37;
    int totalWork = 83857;
    vector<int> a = {11, 26, 48, 75, 27, 64, 62, 60, 97, 96, 56, 30, 3, 72, 14, 29, 39, 49, 3, 8, 22, 74, 6, 63, 64, 99, 17, 1, 80, 3, 27, 90, 20, 94, 41, 9, 2, 10, 11, 20, 55, 63, 5, 77, 45, 49, 36, 79, 15, 41};
    vector<int> p = {39554, 32442, 70193, 90583, 54392, 96478, 19627, 13928, 80606, 6966, 81450, 82416, 65845, 1265, 66737, 71565, 99203, 94391, 61016, 79241, 72637, 57921, 7978, 47536, 75592, 23420, 78030, 53732, 56538, 25226, 91944, 12163, 90737, 87231, 91700, 28347, 8625, 59855, 61757, 83175, 28760, 2855, 41355, 60401, 60554, 21545, 65833, 54381, 25184, 2194};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8720925610707893E9;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int K = 13;
    int totalWork = 9796;
    vector<int> a = {21, 25, 77, 62, 85, 76, 62, 77, 34, 82, 88, 59, 45, 44, 81, 8, 13, 3, 65, 37, 33, 37, 96, 61, 49, 27, 60, 84, 10, 68, 71, 92, 88, 72, 11, 100, 76, 99, 46, 42, 14, 21, 22, 24, 94, 56, 95, 81, 94, 85};
    vector<int> p = {21292, 16695, 87253, 40564, 27014, 77515, 65927, 86297, 72135, 36047, 93041, 74188, 55247, 28541, 96285, 26903, 41582, 89329, 30390, 38114, 57037, 71609, 14052, 83361, 23531, 89076, 54100, 14960, 76770, 92750, 63569, 15152, 80537, 11269, 61006, 73580, 35326, 49406, 22148, 53292, 92730, 58375, 75521, 24451, 121, 98642, 25486, 14000, 54175, 27076};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.411735006130501E8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int K = 1;
    int totalWork = 70174;
    vector<int> a = {23, 4, 48, 14, 21, 26, 17, 70, 84, 89, 41, 20, 96, 99, 19, 83, 60, 84, 52, 6, 79, 6, 60, 60, 61, 66, 75, 92, 28, 89, 71, 53, 78, 94, 95, 41, 51, 14, 77, 32, 87, 64, 8, 83, 2, 18, 85, 4, 29, 41};
    vector<int> p = {70624, 23087, 33526, 5179, 72199, 51499, 14309, 34111, 43595, 40420, 66679, 90812, 4898, 70645, 47080, 34628, 46052, 75606, 1011, 26323, 93831, 95547, 23899, 21381, 29858, 39612, 23397, 82254, 46813, 88768, 74481, 73757, 17683, 35743, 51125, 4472, 10640, 95228, 58806, 52438, 5207, 96412, 13822, 17955, 51915, 87793, 2099, 9424, 93634, 78135};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 7.580411400000001E7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int K = 43;
    int totalWork = 45773;
    vector<int> a = {10, 90, 12, 71, 83, 34, 27, 62, 68, 38, 10, 34, 71, 93, 21, 80, 51, 22, 81, 92, 98, 15, 43, 43, 43, 66, 12, 30, 91, 51, 32, 23, 28, 63, 3, 81, 53, 90, 3, 45, 80, 30, 80, 49, 64, 46, 48, 20, 58, 83};
    vector<int> p = {19723, 88534, 12166, 1507, 64295, 68624, 62441, 50083, 62745, 88796, 92896, 63550, 98418, 3730, 47304, 30710, 4557, 78724, 82485, 62603, 95960, 47581, 36936, 93517, 44280, 33917, 40223, 62134, 25775, 71549, 38819, 49955, 76756, 83722, 13231, 99244, 6573, 2176, 81177, 41887, 41803, 80158, 56864, 35495, 10942, 54947, 28966, 42571, 82078, 89587};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9593938011177075E9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int K = 8;
    int totalWork = 47951;
    vector<int> a = {36, 37, 35, 29, 50, 16, 24, 47, 81, 71, 64, 96, 50, 7, 23, 7, 17, 57, 19, 3, 57, 67, 40, 89, 60, 19, 74, 53, 24, 2, 8, 43, 56, 85, 34, 46, 23, 12, 22, 80, 74, 35, 51, 5, 10, 97, 48, 68, 7, 29};
    vector<int> p = {14235, 86977, 56891, 76008, 29263, 9775, 10119, 56656, 5149, 74179, 81269, 81763, 33425, 14428, 92192, 46061, 38308, 73942, 8395, 77070, 17620, 33108, 42002, 38826, 6260, 89683, 71543, 3432, 23746, 17523, 86564, 76409, 66923, 24621, 56044, 89427, 26434, 30736, 47410, 16770, 78605, 48330, 56578, 64790, 28751, 24819, 7835, 87180, 13461, 89940};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.032732432204082E8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int K = 39;
    int totalWork = 71829;
    vector<int> a = {74, 34, 94, 33, 51, 26, 11, 76, 33, 10, 97, 35, 46, 25, 18, 76, 69, 82, 64, 22, 58, 3, 21, 15, 69, 13, 62, 58, 46, 77, 30, 58, 95, 72, 88, 85, 77, 59, 68, 7, 78, 95, 18, 62, 56};
    vector<int> p = {43998, 55389, 89878, 53515, 42553, 351, 69354, 87367, 6845, 89333, 7835, 18042, 49500, 62390, 48931, 8998, 21398, 7212, 67212, 62899, 97667, 79100, 68567, 53471, 31955, 65931, 2115, 1902, 32900, 21658, 52112, 13985, 8003, 10520, 20842, 22555, 46560, 67822, 99378, 79361, 62452, 19784, 56025, 33372, 66653};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0626492061839626E9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int K = 21;
    int totalWork = 64194;
    vector<int> a = {50, 91, 51, 36, 29, 4, 21, 61, 31, 52, 49, 59, 85, 23, 4, 34, 30, 44, 43, 45, 89, 98, 15, 52, 83, 39, 23, 19, 53, 73, 17, 68, 72, 16, 45, 67, 99, 54, 43, 73};
    vector<int> p = {14438, 77991, 4535, 1176, 81586, 15405, 14655, 61249, 55525, 50784, 58175, 61854, 41500, 29652, 69767, 27800, 148, 95993, 14684, 37655, 32053, 48357, 45976, 76833, 8821, 14378, 31281, 70345, 6471, 30031, 29234, 71409, 88129, 95438, 22389, 37779, 46616, 12960, 89431, 90491};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.217763465519685E9;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int K = 7;
    int totalWork = 83327;
    vector<int> a = {14, 9, 74, 96, 34, 49, 87, 2, 97, 73, 82, 85, 65};
    vector<int> p = {12327, 94873, 25394, 50363, 45221, 10357, 94782, 94426, 43108, 58209, 50142, 43182, 4136};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.833021948299595E9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int K = 21;
    int totalWork = 57349;
    vector<int> a = {90, 25, 22, 9, 87, 68, 6, 10, 19, 8, 80, 40, 23, 71, 52, 22, 87, 72, 15, 44, 78, 19, 94, 25, 14, 10, 39, 79, 7, 12, 40, 96, 83, 53, 30, 16, 75, 80, 92, 60, 8, 23, 49, 10, 100, 29, 92, 76};
    vector<int> p = {10725, 1260, 76369, 12667, 34103, 31930, 61179, 84684, 22846, 65753, 61269, 71696, 93669, 10795, 14835, 17305, 12014, 54266, 85558, 72736, 18084, 13256, 92660, 84466, 16453, 93122, 56731, 2703, 99598, 18834, 15091, 23934, 41351, 7679, 62395, 8134, 35156, 16413, 72762, 2025, 66966, 92237, 42882, 14179, 77514, 34251, 23656, 346};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.182129081778351E8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int K = 22;
    int totalWork = 49644;
    vector<int> a = {81, 76, 42, 17, 55, 85, 48, 99, 35, 4, 85, 3, 50, 69, 52, 11, 93, 75, 53, 70, 67, 96, 14, 46, 37, 60, 88, 49, 51, 95, 94, 61, 29, 9, 81, 22, 37};
    vector<int> p = {12540, 48252, 50501, 49288, 16523, 4596, 20118, 11516, 61777, 89554, 54507, 28033, 19637, 48035, 29055, 32440, 4874, 17890, 22738, 9168, 17302, 18661, 80607, 22647, 2443, 64486, 82919, 44282, 94809, 21440, 39332, 54971, 61468, 57886, 35727, 61306, 67607};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 8.576811994655174E8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int K = 20;
    int totalWork = 31257;
    vector<int> a = {59, 33, 6, 98, 20, 95, 52, 62, 39, 29, 84, 59, 38, 71, 7, 42, 84, 79, 35, 67, 22, 94, 92, 24, 75, 57, 97, 67, 89};
    vector<int> p = {72469, 46003, 61086, 69615, 25018, 90961, 28262, 58447, 1547, 53192, 35864, 97141, 49398, 77697, 21450, 31043, 30119, 40011, 48850, 60063, 36418, 35440, 82167, 85591, 79150, 29996, 29743, 78741, 52370};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2068412059274926E9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int K = 9;
    int totalWork = 76317;
    vector<int> a = {41, 30, 67, 11, 91, 81, 58, 61, 98, 3, 21, 4, 89, 61, 22, 55, 27, 84, 95, 93, 33, 43, 49, 11, 95};
    vector<int> p = {87805, 48133, 37337, 29151, 5787, 17119, 3849, 61469, 82927, 61902, 8179, 4972, 37900, 29008, 60062, 32107, 75361, 26706, 46948, 97183, 58294, 36676, 1852, 85955, 45454};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.054037790425532E8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int K = 10;
    int totalWork = 14870;
    vector<int> a = {62, 22, 46, 83, 49, 1, 71, 29, 19, 30, 17, 3, 68, 28, 3, 43, 49, 18, 20, 73, 92, 65, 14};
    vector<int> p = {62938, 78731, 30879, 28484, 91712, 38219, 76027, 94926, 95615, 39031, 23999, 530, 22105, 41571, 53653, 13780, 52998, 85890, 3902, 77983, 92331, 5368, 66111};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.892996177364865E8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int K = 19;
    int totalWork = 23568;
    vector<int> a = {99, 65, 56, 71, 78, 91, 45, 11, 64, 46, 21, 55, 82, 56, 71, 50, 12, 25, 90, 79, 82, 87, 88, 59};
    vector<int> p = {26677, 62231, 37894, 70531, 57288, 43162, 85083, 95283, 8479, 78928, 76744, 40102, 16062, 81862, 15523, 8929, 56124, 61053, 40998, 37051, 87191, 60770, 43507, 31881};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.019263716847637E8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int K = 9;
    int totalWork = 27949;
    vector<int> a = {75, 11, 30, 34, 16, 50, 93, 98, 97, 62, 59, 55, 6, 77, 55, 75, 18, 70, 24, 36, 47, 36, 68, 13, 23, 88, 28, 83, 29, 41, 77, 31, 97};
    vector<int> p = {69222, 38206, 3970, 6988, 37244, 12810, 82500, 50817, 90110, 45563, 47406, 72976, 90963, 61290, 77787, 98848, 72200, 61827, 40259, 52431, 267, 60719, 31644, 82914, 91627, 75493, 58862, 46142, 23541, 20048, 97081, 91616, 89400};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.349823558863636E8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int K = 24;
    int totalWork = 62697;
    vector<int> a = {8, 95, 84, 11, 79, 77, 99, 48, 52, 78, 72, 74, 33, 89, 53, 63, 72, 57, 87, 73, 33, 94, 76, 68, 11, 40, 72, 67, 10, 97, 29, 13, 27, 96, 95, 79, 85, 96, 70, 98, 43, 65};
    vector<int> p = {62839, 83766, 70673, 38902, 73496, 98677, 59474, 15656, 11892, 13838, 79730, 43684, 71673, 70417, 20592, 85058, 19065, 64796, 56416, 94121, 16900, 67569, 84971, 9502, 52539, 81781, 75631, 94432, 25719, 15477, 6336, 66146, 3209, 12787, 90968, 16773, 18822, 45228, 20351, 12309, 10091, 73663};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3553979065373833E9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int K = 9;
    int totalWork = 49338;
    vector<int> a = {51, 7, 42, 96, 61, 99, 44, 21, 94, 73, 47, 92, 4, 6, 75, 69, 44, 26, 53, 96};
    vector<int> p = {15770, 14843, 76230, 43648, 64142, 90986, 60843, 73452, 10514, 46413, 65715, 68591, 97334, 36336, 69134, 4107, 79034, 12134, 99260, 33479};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0410558094010695E9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int K = 3;
    int totalWork = 18710;
    vector<int> a = {52, 68, 77, 62, 65, 97, 59, 59, 23, 83, 17, 70, 54, 1};
    vector<int> p = {95195, 57677, 50193, 97182, 4492, 62314, 1377, 25807, 26617, 89631, 69890, 50008, 50501, 78412};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.921727080000001E7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int K = 7;
    int totalWork = 7381;
    vector<int> a = {63, 5, 56, 79, 34, 11, 47, 46};
    vector<int> p = {92288, 91672, 458, 11436, 57950, 39000, 12044, 54944};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8334202217266187E8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int K = 3;
    int totalWork = 96100;
    vector<int> a = {26, 100, 27};
    vector<int> p = {9532, 96811, 11483};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.437929315686275E9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int K = 4;
    int totalWork = 37516;
    vector<int> a = {18, 23, 65, 47, 17, 61, 46, 98, 58, 7, 18, 77, 17, 72, 68, 95, 8, 77, 3, 37, 5};
    vector<int> p = {79856, 45442, 98809, 60931, 76512, 75963, 27177, 22070, 22306, 58611, 57510, 90439, 51560, 89475, 39441, 56660, 458, 72660, 49828, 83978, 41675};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 8.141547095568863E8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int K = 27;
    int totalWork = 64018;
    vector<int> a = {70, 62, 88, 77, 21, 9, 64, 71, 37, 35, 44, 63, 67, 29, 79, 73, 42, 70, 70, 100, 85, 51, 80, 25, 100, 47, 7, 6, 88, 26};
    vector<int> p = {6044, 17532, 38813, 32645, 22542, 35094, 73310, 44017, 9387, 12685, 96094, 33079, 12051, 40542, 29043, 85672, 84050, 78927, 25323, 59362, 57068, 41730, 68006, 32579, 19701, 42975, 99453, 85963, 81739, 66865};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.593143731043299E9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int K = 17;
    int totalWork = 56215;
    vector<int> a = {88, 91, 24, 46, 64, 18, 22, 65, 38, 17, 34, 22, 46, 5, 62, 93, 73, 63};
    vector<int> p = {69216, 5387, 43596, 85092, 87667, 88245, 36769, 79744, 37754, 59539, 46019, 22557, 93398, 14757, 78554, 80265, 21265, 57917};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.160728765983291E9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int K = 2;
    int totalWork = 79472;
    vector<int> a = {74, 74, 67};
    vector<int> p = {44685, 79263, 81458};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.929063933405405E9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int K = 11;
    int totalWork = 81970;
    vector<int> a = {56, 3, 34, 31, 16, 82, 54, 67, 66, 89, 49, 5, 68, 70, 75, 11, 5, 60, 53, 48, 67, 30, 15, 99, 40, 3, 100, 33, 67, 77, 42, 95, 79, 28, 30, 78, 18, 73, 78};
    vector<int> p = {88175, 1328, 87983, 70372, 97503, 71500, 35129, 94591, 84107, 41693, 2682, 48606, 31293, 72823, 34596, 1074, 6007, 40987, 3441, 96472, 10123, 73276, 26121, 50533, 56019, 18186, 9493, 82501, 85750, 77289, 72313, 41215, 41177, 20757, 58434, 9546, 21438, 6947, 44509};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.557732032214766E8;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int K = 4;
    int totalWork = 1000;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> p = {20, 30, 40, 58, 60, 70, 80, 90, 100, 150};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 531764.705882353;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {61956, 79013, 45517, 40463, 15281, 69586, 88636, 2540, 52103, 76573, 2893, 60890, 80639, 70045, 39320, 9023, 27667, 63305, 82556, 12775, 63716, 89630, 13529, 48000, 1173, 51741, 1174, 85276, 45006, 71051, 73724, 23763, 67291, 31663, 65401, 74334, 90250, 71511, 47710, 13373, 15696, 4467, 8449, 33265, 17317, 53432, 56092, 57955, 56707, 54014};
    vector<int> p = {98860, 40411, 74603, 643, 83251, 56874, 64705, 61190, 44310, 35009, 86539, 6285, 53408, 42615, 99861, 5951, 44413, 41319, 44368, 64714, 7264, 20688, 26670, 34271, 92317, 61043, 29639, 50353, 23792, 94872, 97240, 3770, 91348, 37002, 54687, 46325, 78253, 25750, 62464, 5509, 56543, 38704, 92963, 2989, 86004, 73998, 88148, 2198, 16698, 45899};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1220803202466264E9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int K = 42;
    int totalWork = 99696;
    vector<int> a = {1, 41, 68, 21, 94, 75, 56, 22, 81, 13, 83, 4, 81, 88, 36, 50, 14, 64, 37, 68, 8, 17, 60, 66, 97, 76, 95, 35, 51, 82, 72, 40, 59, 46, 54, 89, 68, 38, 38, 92, 68, 33, 91, 17, 46, 24, 30, 87, 15, 1};
    vector<int> p = {71, 66, 73, 91, 70, 30, 15, 33, 44, 86, 82, 38, 39, 31, 78, 66, 17, 61, 23, 75, 85, 9, 64, 5, 36, 86, 32, 75, 42, 55, 28, 81, 95, 71, 3, 48, 39, 5, 70, 60, 29, 36, 39, 37, 80, 29, 94, 29, 61, 8};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0859722909963988E7;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int K = 6;
    int totalWork = 1000;
    vector<int> a = {10, 2, 32, 43, 5, 6, 7, 8, 9, 10};
    vector<int> p = {20, 30, 40, 58, 60, 70, 80, 90, 100, 150};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 254623.85321100918;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int K = 40;
    int totalWork = 99999;
    vector<int> a = {36795, 34353, 23205, 21729, 33968, 90096, 71190, 64494, 28982, 10219, 91349, 50620, 10754, 42729, 77692, 18205, 53664, 14460, 73862, 31710, 23345, 85689, 45023, 59538, 49272, 88438, 58191, 14022, 61272, 60806, 77254, 17176, 30387, 12065, 49453, 70179, 98779, 43931, 99615, 90131, 21938, 80670, 69067, 37494, 61146, 58879, 41312, 76307, 85596, 75938};
    vector<int> p = {66255, 33366, 80894, 97882, 21622, 64902, 69304, 98300, 72295, 17570, 62392, 62540, 74825, 79839, 21851, 98047, 96648, 16956, 89552, 60535, 68672, 17312, 36230, 83830, 47227, 92578, 34918, 10895, 19326, 56773, 36409, 33342, 74984, 77523, 57081, 81181, 53889, 61989, 95975, 47045, 44525, 17035, 50666, 37338, 62736, 54131, 54971, 72550, 26540, 43513};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.639576671567143E9;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int K = 2;
    int totalWork = 20;
    vector<int> a = {10, 10, 1};
    vector<int> p = {640, 8640, 6400};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 36363.63636363637;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int K = 39;
    int totalWork = 98765;
    vector<int> a = {9990, 35597, 8749, 68536, 64760, 36658, 71274, 66777, 59114, 52894, 31447, 8487, 44827, 81859, 61296, 91299, 46012, 49169, 79440, 83845, 71592, 65647, 307, 3613, 63202, 83495, 25063, 72789, 53994, 45338, 44527, 83731, 24667, 83253, 4051, 14107, 19204, 73916, 17416, 84432, 84353, 18243, 73911, 66331, 95605, 79452, 28685, 12548, 93606, 57834};
    vector<int> p = {11726, 21645, 4057, 49785, 5415, 70992, 70871, 79874, 59191, 78023, 19481, 30505, 25612, 96073, 1515, 89031, 70091, 88678, 60553, 26439, 482, 38817, 97747, 99417, 89225, 62492, 5830, 13989, 42484, 48370, 96349, 25885, 43544, 76925, 86467, 7468, 535, 17944, 55475, 51946, 75338, 44926, 31118, 55889, 99018, 85425, 31000, 27114, 4218, 85815};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5677233687317376E9;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int K = 33;
    int totalWork = 51781;
    vector<int> a = {89384, 30887, 92778, 36916, 47794, 38336, 85387, 60493, 16650, 41422, 2363, 90028, 68691, 20060, 97764, 13927, 80541, 83427, 89173, 55737, 5212, 95369, 2568, 56430, 65783, 21531, 22863, 65124, 74068, 3136, 13930, 79803, 34023, 23059, 33070, 98168, 61394, 18457, 75012, 78043, 76230, 77374, 84422, 44920, 13785, 98538, 75199, 94325, 98316, 64371};
    vector<int> p = {66414, 3527, 76092, 68981, 59957, 41874, 6863, 99171, 6997, 97282, 2306, 20926, 77085, 36328, 60337, 26506, 50847, 21730, 61314, 25858, 16125, 53896, 19583, 546, 98815, 33368, 15435, 90365, 44044, 13751, 71088, 26809, 17277, 47179, 95789, 93585, 5404, 2652, 92755, 12400, 99933, 95061, 49677, 93369, 47740, 10013, 36227, 98587, 48095, 97540};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5645939526674204E9;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int K = 25;
    int totalWork = 50;
    vector<int> a = {7331, 27897, 71237, 1520, 19299, 58597, 10073, 6656, 40988, 18409, 8646, 50384, 33249, 22460, 15189, 36443, 1992, 94197, 10756, 11239, 1567, 9899, 30216, 493, 96798, 69397, 954, 77175, 22747, 6972, 19844, 9792, 65046, 24231, 18434, 14399, 86967, 1905, 9238, 45125, 47486, 9712, 80922, 4499, 23728, 46384, 19732, 9459, 3858, 25559};
    vector<int> p = {24355, 20092, 72734, 4152, 15165, 1168, 5942, 3340, 11460, 23685, 17776, 35183, 41126, 4383, 1353, 37933, 81603, 19759, 10349, 10048, 5776, 25601, 10909, 9439, 21211, 3016, 15922, 3980, 36837, 28206, 18159, 20487, 4493, 74434, 13190, 2874, 22831, 49212, 32607, 15170, 57195, 6962, 20595, 10899, 27889, 8049, 29878, 25238, 10442, 31813};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 307012.4100825996;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int K = 4;
    int totalWork = 1000;
    vector<int> a = {131, 983, 91, 657, 118, 596, 416, 949, 127, 5};
    vector<int> p = {559, 572, 880, 493, 361, 413, 722, 464, 48, 120};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 359377.9527559055;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int K = 25;
    int totalWork = 1000;
    vector<int> a = {96646, 44074, 750, 91098, 93927, 58223, 67157, 8394, 76649, 23681, 3082, 78878, 34609, 62329, 61582, 14856, 18310, 11442, 1462, 48676, 96491, 6457, 54109, 46590, 60147, 8893, 57901, 26959, 55644, 64464, 48104, 35524, 24916, 93352, 45339, 53017, 1930, 50811, 579, 14377, 47283, 37735, 5418, 58753, 16401, 55734, 14425, 93731, 77098, 95694};
    vector<int> p = {14123, 30540, 3959, 27679, 80652, 17735, 15458, 95472, 15456, 83389, 4107, 38619, 34960, 34171, 81647, 47594, 78290, 47085, 81735, 88157, 43960, 78107, 81475, 29568, 12388, 18563, 43606, 11947, 52980, 82943, 48521, 81774, 65640, 64105, 34535, 70266, 80995, 15717, 90800, 26934, 15485, 84048, 72013, 79357, 44668, 7078, 39525, 4774, 28614, 3800};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6148195162476476E7;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int K = 50;
    int totalWork = 100000;
    vector<int> a = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> p = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00000036E10;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int K = 25;
    int totalWork = 99999;
    vector<int> a = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    vector<int> p = {25547, 27644, 32662, 32757, 20037, 12859, 8723, 9741, 27529, 778, 12316, 3035, 22190, 1842, 288, 30106, 9040, 8942, 19264, 22648, 27446, 23805, 15890, 6729, 24370, 15350, 15006, 31101, 24393, 3548, 19629, 12623, 24084, 19954, 18756, 11840, 4966, 7376, 13931, 26308, 16944, 32439, 24626, 11323, 5537, 21538, 16118, 2082, 22929, 16541};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.9555018198329E8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int K = 15;
    int totalWork = 53256;
    vector<int> a = {22002, 76163, 43190, 95243, 27103, 83228, 66842, 26650, 76818, 73927, 99601, 33044, 46344, 14655, 9406, 52846, 82390, 86822, 4911, 49486, 30674, 60188, 31917, 81140, 56734, 83912, 17704, 79631, 59580, 72120, 84622, 67473, 72642, 77909, 819, 46174, 43693, 70620, 43202, 97037, 87145, 13125, 8018, 42360, 54993, 55328, 53102, 54894, 56038, 1316};
    vector<int> p = {3, 1, 5, 3, 7, 3, 5, 7, 1, 8, 6, 6, 8, 9, 8, 6, 1, 8, 8, 10, 7, 7, 9, 1, 2, 10, 4, 10, 4, 7, 4, 8, 5, 10, 4, 3, 1, 10, 10, 4, 8, 9, 8, 10, 7, 8, 7, 1, 3, 6};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 95845.65148355669;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int K = 25;
    int totalWork = 88888;
    vector<int> a = {55309, 91926, 3165, 19183, 53833, 18078, 55478, 65264, 59191, 11329, 58726, 63357, 1864, 93519, 56030, 92813, 52054, 20458, 84916, 39895, 77915, 53384, 73421, 79367, 64032, 45245, 62641, 43072, 85194, 56386, 28782, 23253, 71016, 70575, 30457, 57273, 41036, 4532, 6020, 60751, 73544, 61256, 18625, 3381, 73240, 28600, 71276, 17383, 79992, 78993};
    vector<int> p = {56767, 41258, 32917, 84028, 46996, 55892, 11083, 63515, 12303, 94441, 655, 95421, 65211, 50997, 64259, 5653, 85607, 75980, 53137, 35259, 65129, 85607, 11043, 66629, 33608, 70045, 60394, 78163, 21622, 13704, 31646, 57079, 97818, 2533, 60839, 65340, 15796, 98913, 30170, 86102, 58448, 78496, 5053, 7958, 35896, 76452, 99, 9213, 90392, 76382};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7243763614140239E9;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int K = 35;
    int totalWork = 1;
    vector<int> a = {42, 43, 10, 46, 30, 50, 39, 44, 13, 45, 41, 41, 17, 53, 7, 52, 26, 8, 43, 47, 52, 30, 53, 44, 18, 8, 42, 17, 29, 41, 3, 2, 32, 44, 55, 3, 38, 10, 41, 50, 49, 52, 28, 29, 19, 45, 17, 12, 39, 49};
    vector<int> p = {28, 35, 48, 33, 18, 45, 34, 7, 30, 9, 52, 11, 26, 28, 14, 22, 21, 33, 15, 44, 2, 46, 51, 20, 6, 6, 47, 27, 29, 29, 50, 29, 50, 45, 2, 16, 17, 7, 17, 19, 5, 45, 42, 49, 38, 34, 4, 48, 50, 42};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 114.02511880515956;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int K = 42;
    int totalWork = 90891;
    vector<int> a = {84382, 61280, 46992, 48765, 48025, 40433, 78476, 96330, 40052, 55127, 74380, 23063, 35495, 42452, 50204, 38838, 62849, 81809, 94515, 50798, 44874, 35010, 75547, 80994, 97465, 67926, 22527, 23244, 83170, 90212, 30486, 67551, 67844, 77478, 32668, 32220, 17910, 27495, 44901, 74313, 82622, 19281, 97375, 18116, 61732, 63930, 73305, 40933, 45739, 67819};
    vector<int> p = {8082, 6964, 2829, 83628, 87958, 293, 67905, 26836, 23537, 51074, 33399, 70374, 34977, 1242, 47851, 83996, 33462, 65760, 11490, 78362, 40073, 94111, 13994, 53799, 12227, 75726, 17729, 85531, 33010, 63467, 69702, 41091, 86782, 72530, 41071, 91091, 72822, 25327, 17926, 12710, 76401, 51325, 83084, 27729, 68918, 47286, 11724, 18731, 29398, 23213};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2243837431393056E9;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int K = 33;
    int totalWork = 99999;
    vector<int> a = {84147, 60213, 28941, 51395, 2295, 50607, 54769, 70369, 45863, 61767, 96921, 75138, 45342, 67696, 45632, 43423, 30144, 40354, 10297, 87993, 75467, 23581, 41150, 24851, 46396, 22566, 90548, 46170, 95067, 17176, 43548, 88370, 84020, 72376, 16357, 64699, 54281, 37067, 68183, 13861, 30230, 93831, 97115, 1450, 54997, 46412, 93904, 99336, 79882, 9189};
    vector<int> p = {8829, 59663, 89245, 93473, 46333, 94744, 28306, 69142, 39709, 71875, 15483, 16944, 73819, 33002, 63175, 76766, 17694, 53146, 1297, 40184, 846, 58639, 96419, 31843, 17177, 36471, 86028, 73525, 68655, 79436, 2191, 27179, 67212, 28254, 41842, 68782, 97843, 91477, 51920, 53585, 8448, 46765, 36764, 95099, 32701, 52964, 62452, 95138, 71068, 31437};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3.307772028717124E9;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {19, 24, 14, 16, 13, 22, 23, 16, 15, 16, 16, 15, 14, 20, 24, 20, 14, 13, 22, 24, 22, 15, 21, 18, 16, 15, 19, 14, 25, 19, 15, 22, 22, 14, 23, 16, 14, 22, 20, 22, 24, 21, 21, 24, 14, 15, 22, 25, 19, 23};
    vector<int> p = {20, 12, 21, 11, 21, 18, 17, 19, 17, 11, 11, 12, 19, 15, 21, 21, 17, 20, 15, 19, 17, 16, 21, 14, 11, 19, 15, 12, 12, 21, 15, 13, 12, 14, 19, 21, 19, 18, 18, 19, 14, 20, 19, 21, 14, 16, 12, 20, 14, 16};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.784883303411131E7;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int K = 25;
    int totalWork = 25;
    vector<int> a = {16808, 75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924, 37710, 64441, 38166, 84493, 43043, 7988, 22504, 82328, 31730, 78841, 42613, 44304, 33170, 17710, 97158, 29561, 70934, 93100, 80279, 51817, 95336, 99098, 7827, 13513, 29268, 23811, 77634, 80980, 79150, 36580, 58822, 11968, 10673, 1394, 19337, 25486, 91746, 25229, 94092, 40195, 86358};
    vector<int> p = {35002, 21154, 16709, 57945, 15669, 71491, 88125, 2197, 9531, 60904, 27723, 54667, 28550, 18025, 97802, 6854, 40978, 47409, 8229, 74934, 60299, 38982, 28636, 8014, 23866, 89815, 39064, 54537, 39426, 1670, 24116, 20095, 75630, 46502, 46518, 34196, 30106, 10405, 19452, 94299, 82189, 21124, 99506, 46883, 6753, 31567, 36717, 30338, 54439, 53145};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 416584.19699286134;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {42, 6335, 19170, 11479, 26963, 5706, 23282, 9962, 2996, 4828, 32392, 3903, 293, 17422, 19719, 5448, 14772, 1870, 25668, 17036, 28704, 31323, 17674, 15142, 28254, 25548, 32663, 20038, 8724, 27530, 12317, 22191, 289, 9041, 19265, 27447, 15891, 24371, 15007, 24394, 19630, 24085, 18757, 4967, 13932, 16945, 24627, 5538, 16119, 22930};
    vector<int> p = {18468, 26501, 15725, 29359, 24465, 28146, 16828, 492, 11943, 5437, 14605, 154, 12383, 18717, 19896, 21727, 11539, 19913, 26300, 9895, 23812, 30334, 4665, 7712, 6869, 27645, 32758, 12860, 9742, 779, 3036, 1843, 30107, 8943, 22649, 23806, 6730, 15351, 31102, 3549, 12624, 19955, 11841, 7377, 26309, 32440, 11324, 21539, 2083, 16542};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 6.387170405378189E8;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int K = 25;
    int totalWork = 50;
    vector<int> a = {97694, 97457, 96203, 99194, 98757, 97616, 98687, 96331, 95189, 96014, 96566, 95471, 95696, 96490, 97678, 95326, 96690, 99460, 96884, 99127, 96170, 98149, 98855, 97608, 96647, 97360, 97315, 99727, 96445, 95224, 98506, 98098, 95815, 99540, 97181, 96748, 97295, 95297, 96769, 97561, 99956, 96519, 95368, 95692, 95372, 98039, 99772, 96734, 99946, 98723};
    vector<int> p = {98124, 98978, 99201, 99894, 98184, 96383, 95362, 97341, 96583, 99094, 99282, 97718, 96380, 95692, 99392, 95664, 97756, 96066, 99509, 97276, 98651, 98819, 96237, 99203, 95776, 96574, 97693, 96680, 98262, 99869, 96446, 96911, 97780, 97381, 95177, 98077, 95687, 95407, 97419, 95034, 97190, 95406, 97778, 97677, 95326, 98698, 99792, 99294, 97871, 96044};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4811096.287020049;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {61955, 79012, 45516, 40462, 15280, 69585, 88635, 2539, 52102, 76572, 2892, 60889, 80638, 70044, 39319, 9022, 27666, 63304, 82555, 12774, 63715, 89629, 13528, 47999, 1172, 51740, 1173, 85275, 45005, 71050, 73723, 23762, 67290, 31662, 65400, 74333, 90249, 71510, 47709, 13372, 15695, 4466, 8448, 33264, 17316, 53431, 56091, 57954, 56706, 54013};
    vector<int> p = {98859, 40410, 74602, 642, 83250, 56873, 64704, 61189, 44309, 35008, 86538, 6284, 53407, 42614, 99860, 5950, 44412, 41318, 44367, 64713, 7263, 20687, 26669, 34270, 92316, 61042, 29638, 50352, 23791, 94871, 97239, 3769, 91347, 37001, 54686, 46324, 78252, 25749, 62463, 5508, 56542, 38703, 92962, 2988, 86003, 73997, 88147, 2197, 16697, 45898};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1219351243831468E9;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {51343, 75730, 85277, 50561, 25201, 51051, 48812, 66787, 48091, 78896, 14170, 45190, 88313, 98316, 46772, 39384, 48377, 93164, 62340, 74049, 76291, 42939, 89623, 63025, 57671, 70246, 48918, 87826, 58096, 63960, 65074, 86352, 44584, 56062, 90643, 65881, 65822, 74178, 86118, 53909, 71931, 59668, 69080, 49012, 94700, 15068, 65045, 37216, 67360, 53255};
    vector<int> p = {58312, 73925, 70334, 86145, 41117, 70928, 52725, 70456, 95554, 74925, 78065, 56853, 49504, 87302, 78557, 75272, 82853, 47754, 68069, 52983, 55740, 47266, 92982, 93139, 49234, 82366, 51964, 65159, 54034, 71492, 72802, 47102, 85162, 68005, 70037, 79907, 34498, 79949, 56254, 52709, 47625, 86435, 92942, 46894, 48683, 54042, 44719, 90347, 84435, 51480};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 5.163273724393576E9;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int K = 30;
    int totalWork = 98000;
    vector<int> a = {10, 13, 17, 101, 1231, 1234, 31231, 12312, 1235, 54643, 75634, 23543, 23536, 66452, 23423, 14235, 4543, 5234, 123, 123, 10, 13, 17, 101, 1231, 1234, 31231, 12312, 1235, 54643, 74534, 23543, 23536, 63452, 23423, 24235, 4543, 5234, 123, 123, 123, 5435, 345, 22334, 1236, 7480, 435, 234, 123};
    vector<int> p = {10, 13, 17, 101, 1231, 1234, 31231, 12312, 1235, 54643, 75634, 23543, 23536, 66452, 23423, 14235, 4543, 5234, 123, 123, 10, 13, 17, 101, 1231, 1234, 31231, 12312, 1235, 54643, 74534, 23543, 23536, 63452, 23423, 24235, 4543, 5234, 123, 123, 123, 5435, 345, 22334, 1236, 7480, 435, 234, 123};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.379763618535432E8;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int K = 2;
    int totalWork = 1000;
    vector<int> a = {100000, 100000, 1};
    vector<int> p = {1, 2, 1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1071.9992800072002;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {6451, 14589, 24465, 8046, 13503, 26373, 26295, 7302, 13079, 857, 25315, 28358, 14669, 1558, 30162, 21187, 27695, 12572, 2292, 16131, 4034, 436, 2171, 700, 15084, 25975, 21682, 16861, 29553, 13931, 23953, 29266, 17953, 17006, 7310, 16004, 12111, 25048, 24757, 28960, 26500, 24924, 8443, 19994, 26741, 17199, 18640, 31985, 15923, 7020};
    vector<int> p = {13043, 26676, 30882, 3000, 18058, 13893, 20780, 8738, 27250, 16221, 22710, 8012, 17108, 9424, 16851, 26576, 27897, 28051, 6968, 9437, 11615, 19451, 3697, 22561, 17420, 28871, 30418, 26348, 23330, 3937, 25775, 24722, 17332, 30561, 24784, 1041, 29912, 26451, 1055, 18675, 253, 31930, 14244, 28534, 30079, 25941, 12467, 23531, 22649, 13728};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.860400380558916E8;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int K = 27;
    int totalWork = 88999;
    vector<int> a = {4883, 2111, 10475, 6878, 17372, 30773, 4840, 27524, 115, 8283, 29615, 4014, 18009, 17195, 17059, 25291, 15729, 16552, 8391, 22286, 31362, 27860, 25415, 21485, 20922, 30266, 11760, 9378, 14630, 23653, 7603, 30381, 15163, 30311, 806, 26704, 31056, 2387, 11522, 10002, 15906, 28355, 17062, 7741, 8270, 19282, 11923, 13664, 13531, 21795};
    vector<int> p = {32698, 24759, 9318, 3370, 2810, 7216, 21946, 21976, 15825, 29249, 7922, 8797, 26176, 5621, 26731, 8941, 25372, 29130, 11668, 21361, 23696, 9265, 23919, 24580, 19606, 19474, 2836, 22903, 22402, 9542, 28205, 14798, 29816, 29980, 13179, 14529, 26096, 18133, 7504, 28731, 569, 30759, 29715, 20702, 19443, 5565, 18111, 26237, 23188, 1973};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 8.282420901557297E8;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int K = 15;
    int totalWork = 53256;
    vector<int> a = {968, 386, 474, 525, 567, 238, 932, 967, 119, 106, 793, 771, 362, 532, 220, 982, 835, 649, 302, 264, 288, 497, 27, 809, 412, 674, 751, 669, 437, 792, 73, 525, 559, 223, 444, 680, 67, 128, 324, 581, 197, 860, 633, 991, 356, 243, 640, 965, 962, 732};
    vector<int> p = {3, 1, 5, 3, 7, 3, 5, 7, 1, 8, 6, 6, 8, 9, 8, 6, 1, 8, 8, 10, 7, 7, 9, 1, 2, 10, 4, 10, 4, 7, 4, 8, 5, 10, 4, 3, 1, 10, 10, 4, 8, 9, 8, 10, 7, 8, 7, 1, 3, 6};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 432417.35570343985;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {28684, 63462, 92970, 28103, 4623, 30012, 40868, 87462, 52198, 46929, 52218, 4835, 94982, 22485, 98011, 35607, 22028, 23354, 95044, 23026, 21965, 94536, 31221, 80157, 8274, 11956, 60261, 71949, 55918, 53236, 26263, 37666, 82047, 44896, 67698, 5712, 94245, 20110, 67713, 17876, 98641, 169, 63022, 98026, 7168, 94906, 97212, 71530, 8335, 2609};
    vector<int> p = {5929, 65966, 69148, 78317, 51222, 1122, 17107, 30910, 80211, 6879, 10715, 4022, 69289, 91239, 44528, 93553, 29226, 17571, 50481, 55466, 88840, 40129, 51090, 61518, 45277, 89910, 92102, 67736, 67527, 99139, 32240, 70685, 66415, 2004, 95953, 39956, 99124, 51651, 1385, 31813, 59197, 49073, 60281, 8565, 14012, 88180, 9135, 10974, 90888, 83168};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6070084878065372E9;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int K = 22;
    int totalWork = 1000;
    vector<int> a = {68, 57, 30, 60, 36, 35, 67, 61, 93, 37, 100, 87, 81, 17, 54, 44, 3, 22, 78, 41, 82, 12, 32, 53, 96, 1, 58, 42, 23, 14, 49, 73, 26, 21, 90, 10, 21, 41, 55, 89, 96, 30, 58, 33, 68, 39, 97, 98, 54, 35};
    vector<int> p = {19, 44, 4, 24, 48, 69, 33, 76, 70, 41, 45, 4, 44, 30, 52, 25, 96, 92, 46, 90, 19, 52, 80, 20, 37, 43, 12, 61, 71, 95, 93, 21, 27, 59, 77, 59, 48, 31, 94, 54, 88, 67, 43, 93, 69, 86, 29, 51, 79, 36};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 85471.4475431607;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int K = 30;
    int totalWork = 47474;
    vector<int> a = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 54222, 19817, 91839, 27586, 82847, 58274, 68799, 69489, 28475, 67894, 48674, 48576, 38375, 43287, 54744, 54844, 54822, 23846, 65847, 54828, 56849, 78275, 18495, 32857, 99999, 19385, 100000, 12838, 54839, 43828, 29486, 58373, 49583};
    vector<int> p = {95844, 48432, 23855, 48549, 54837, 54827, 184, 28576, 1, 48543, 54372, 54382, 54382, 54399, 9184, 21844, 24854, 29586, 49127, 38288, 19999, 100000, 1, 48383, 38576, 48375, 38288, 19486, 38283, 48673, 29183, 54384, 45822, 23564, 45322, 76766, 87354, 54352, 53357, 18888, 3274, 1232, 43666, 42844, 32848, 18388, 57377, 37177, 17788, 18811};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 8.186933274813396E8;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int K = 6;
    int totalWork = 18787;
    vector<int> a = {91, 29570, 24149, 7205, 9837, 17231, 4310, 7031, 24933};
    vector<int> p = {32198, 2434, 26131, 12863, 18461, 24612, 4569, 18139, 7002};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2571196933532952E8;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int K = 10;
    int totalWork = 100000;
    vector<int> a = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869};
    vector<int> p = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.162418800648298E8;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int K = 1;
    int totalWork = 10;
    vector<int> a = {100000};
    vector<int> p = {100000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.36;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int K = 2;
    int totalWork = 300;
    vector<int> a = {10, 20, 50};
    vector<int> p = {15, 20, 250};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 77500.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {16808, 75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924, 37710, 64441, 38166, 84493, 43043, 7988, 22504, 82328, 31730, 78841, 42613, 44304, 33170, 17710, 97158, 29561, 70934, 93100, 80279, 51817, 95336, 99098, 7827, 13513, 29268, 23811, 77634, 80980, 79150, 36580, 58822, 11968, 10673, 1394, 19337, 25486, 91746, 25229, 94092, 40195, 86358};
    vector<int> p = {35002, 21154, 16709, 57945, 15669, 71491, 88125, 2197, 9531, 60904, 27723, 54667, 28550, 18025, 97802, 6854, 40978, 47409, 8229, 74934, 60299, 38982, 28636, 8014, 23866, 89815, 39064, 54537, 39426, 1670, 24116, 20095, 75630, 46502, 46518, 34196, 30106, 10405, 19452, 94299, 82189, 21124, 99506, 46883, 6753, 31567, 36717, 30338, 54439, 53145};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6663367879714453E9;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int K = 30;
    int totalWork = 100000;
    vector<int> a = {57148, 51001, 13357, 71125, 98369, 67226, 49388, 90852, 66291, 39573, 38165, 97007, 15545, 51437, 89611, 41523, 27799, 15529, 16434, 44291, 47134, 90227, 26873, 52252, 41605, 21269, 9135, 55784, 70744, 17563, 79061, 73981, 70529, 35681, 91073, 52031, 23811, 79501, 1607, 46365, 76868, 72137, 71041, 29217, 96749, 46417, 40199, 55907, 57677, 68590};
    vector<int> p = {78796, 83463, 50721, 30963, 31779, 28646, 94529, 47831, 98222, 61665, 73941, 24397, 66286, 2971, 81613, 52501, 26285, 3381, 51438, 45360, 20160, 59400, 45006, 95423, 19949, 3213, 3181, 34385, 31901, 51111, 10191, 14089, 95685, 11396, 8701, 33277, 1481, 517, 46253, 51313, 2255, 5948, 66085, 37201, 65310, 21105, 60985, 10748, 89271, 42883};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.90494696208866E9;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int K = 2;
    int totalWork = 300;
    vector<int> a = {900, 3600, 720};
    vector<int> p = {1, 9, 5};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2166.6666666666665;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int K = 35;
    int totalWork = 100000;
    vector<int> a = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> p = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.00000036E10;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int K = 1;
    int totalWork = 100;
    vector<int> a = {99991, 99902};
    vector<int> p = {99904, 99953};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9990403.60032403;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int K = 30;
    int totalWork = 10;
    vector<int> a = {40202, 510, 44838, 25645, 71383, 72283, 91551, 13693, 77689, 80882, 34473, 72723, 77045, 4573, 1294, 98598, 79433, 75569, 96027, 62681, 11676, 35756, 4407, 85105, 90021, 60528, 97844, 61963, 76876, 11040, 74619, 33430, 27902, 19457, 75427, 99285, 8092, 66978, 29330, 85781, 47860, 63803, 74857, 24905, 68377, 76151, 39855, 64162, 51721, 35882};
    vector<int> p = {26844, 79749, 71638, 31251, 81206, 78011, 8131, 79050, 39974, 1359, 6442, 30945, 34789, 34344, 66754, 10216, 49981, 74847, 93546, 79312, 76980, 41406, 43115, 51837, 82663, 27844, 27989, 22518, 92007, 79710, 74752, 35203, 75811, 62743, 66454, 57017, 40754, 90937, 52420, 97081, 92296, 58862, 28026, 27085, 93207, 94781, 53653, 43188, 85980, 47199};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 304701.92259461386;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int K = 3;
    int totalWork = 369;
    vector<int> a = {365, 751, 809, 179, 585, 652, 400, 61};
    vector<int> p = {44, 88, 277, 789, 404, 755, 933, 677};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 42087.00509770604;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int K = 25;
    int totalWork = 100000;
    vector<int> a = {94110, 95769, 96721, 92928, 93217, 94587, 98521, 94350, 96276, 94758, 93344, 94512, 91624, 99086, 98562, 99604, 95273, 96849, 97840, 91155, 93692, 98535, 91806, 97870, 94275, 99996, 94091, 95339, 94130, 99704, 98921, 96432, 93761, 92109, 98174, 94983, 95420, 91266, 91556, 96914, 91443, 96538, 99646, 92374, 98276, 93817, 90847, 96829, 96254, 93926};
    vector<int> p = {95761, 97702, 94264, 90989, 90538, 91250, 93208, 94642, 99209, 95268, 94865, 99419, 97145, 93140, 96502, 94918, 91950, 93034, 99565, 94894, 93723, 97748, 97254, 94305, 93180, 92607, 93304, 90181, 98063, 92380, 96788, 95582, 95977, 97698, 90046, 98934, 96636, 95642, 94959, 93258, 97520, 93404, 92466, 97277, 98315, 90672, 91516, 98483, 99827, 93109};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.267738704106474E9;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int K = 2;
    int totalWork = 1;
    vector<int> a = {89384, 30887, 92778};
    vector<int> p = {36916, 47794, 38336};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 37639.26808006061;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int K = 2;
    int totalWork = 46104;
    vector<int> a = {6, 9, 84};
    vector<int> p = {14, 71, 4};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3903471.999999999;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int K = 25;
    int totalWork = 1;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> p = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1094.7368421052633;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int K = 2;
    int totalWork = 601;
    vector<int> a = {1, 600, 1};
    vector<int> p = {1, 3600, 7};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 2166003.9999999995;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int K = 5;
    int totalWork = 97714;
    vector<int> a = {67373, 75322, 1256, 64820, 44600, 17722, 29905};
    vector<int> p = {55940, 39812, 73941, 15668, 11706, 46229, 11128};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7176032974730487E9;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int K = 41;
    int totalWork = 99999;
    vector<int> a = {4102, 46700, 33401, 50004, 16904, 72406, 47800, 35800, 96201, 46402, 70500, 14504, 28105, 82707, 96109, 49100, 99500, 94200, 82700, 43600, 39100, 60400, 90200, 15300, 29200, 38200, 42100, 71600, 71800, 89500, 44700, 72600, 77100, 53800, 86900, 91200, 66700, 29900, 3500, 89400, 70300, 81100, 32200, 33300, 67300, 66400, 14100, 71100, 25300, 86800};
    vector<int> p = {54700, 64400, 66200, 75700, 3700, 85900, 72300, 74105, 52905, 77800, 31600, 3507, 19000, 84200, 28800, 10607, 4009, 94200, 26400, 64800, 44600, 80500, 89000, 72900, 37000, 35000, 600, 10100, 39300, 54800, 62900, 62300, 8400, 95400, 75600, 84000, 96600, 37600, 93100, 30800, 94400, 43900, 62600, 32300, 53700, 53800, 11800, 8200, 92900, 54100};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1657596657577662E9;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int K = 25;
    int totalWork = 1000;
    vector<int> a = {16808, 75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924, 37710, 64441, 38166, 84493, 43043, 7988, 22504, 82328, 31730, 78841, 42613, 44304, 33170, 17710, 97158, 29561, 70934, 93100, 80279, 51817, 95336, 99098, 7827, 13513, 29268, 23811, 77634, 80980, 79150, 36580, 58822, 11968, 10673, 1394, 19337, 25486, 91746, 25229, 94092, 40195, 86358};
    vector<int> p = {35002, 21154, 16709, 57945, 15669, 71491, 88125, 2197, 9531, 60904, 27723, 54667, 28550, 18025, 97802, 6854, 40978, 47409, 8229, 74934, 60299, 38982, 28636, 8014, 23866, 89815, 39064, 54537, 39426, 1670, 24116, 20095, 75630, 46502, 46518, 34196, 30106, 10405, 19452, 94299, 82189, 21124, 99506, 46883, 6753, 31567, 36717, 30338, 54439, 53145};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6663367879714454E7;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int K = 3;
    int totalWork = 10;
    vector<int> a = {10000, 10000, 10000, 1};
    vector<int> p = {1, 1, 3000, 1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 15.399730013499326;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int K = 50;
    int totalWork = 100000;
    vector<int> a = {6, 4, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> p = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0295081967213116E10;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int K = 2;
    int totalWork = 100000;
    vector<int> a = {100000, 100000, 1};
    vector<int> p = {1, 2, 1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 107199.92800072;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int K = 10;
    int totalWork = 100000;
    vector<int> a = {91655, 2678, 35465, 20526, 58568, 89690, 28710, 62358, 78875, 49332, 8018, 39993, 80649, 7902, 96117, 3217, 73532, 36337, 19610, 8885, 75293, 11686, 92712, 68320, 54324, 11669, 49994, 92682, 45450, 51384, 73639, 93005, 4937, 33704, 4234, 89280, 48249, 51582, 40858, 97598, 15812, 62162, 48417, 50495, 40210, 14494, 10376, 29244, 40620, 65466};
    vector<int> p = {16957, 47037, 3103, 13738, 11145, 49454, 89560, 4753, 56155, 80108, 64343, 47181, 16036, 3159, 20110, 47999, 60341, 57072, 62989, 2056, 80639, 83512, 58342, 70152, 52051, 27441, 16265, 71777, 73538, 20731, 18664, 25269, 11453, 85720, 37524, 94818, 35733, 82663, 82301, 61644, 92892, 22283, 81461, 54643, 42209, 31333, 79117, 97911, 24759, 63445};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.006207505867702E8;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int K = 49;
    int totalWork = 26217;
    vector<int> a = {37924, 46140, 38220, 64764, 64993, 35007, 71863, 96686, 19554, 68532, 88361, 80904, 25678, 766, 38546, 76950, 49582, 27683, 25142, 26575, 19989, 55076, 22108, 8380, 94714, 57784, 63392, 74311, 15136, 87268, 37283, 37090, 81078, 22105, 37250, 71280, 75642, 40074, 98372, 48884, 83961, 18248, 17388, 80308, 46994, 39451, 66607, 74185, 16888, 92575};
    vector<int> p = {46815, 78246, 45846, 72250, 88486, 13987, 24268, 96534, 36111, 14629, 92856, 93503, 16765, 2411, 53360, 90746, 92319, 26391, 19244, 54431, 80827, 27320, 77665, 19669, 18151, 15632, 16519, 2409, 99480, 52454, 33468, 16267, 67377, 29483, 71649, 85093, 81117, 1441, 60098, 12376, 7959, 55532, 73107, 96340, 22886, 50425, 97462, 28724, 78759, 90566};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3838045718357222E9;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int K = 2;
    int totalWork = 100000;
    vector<int> a = {100000, 100000, 3601};
    vector<int> p = {5000, 100000, 3601};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4.951442563295722E8;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int K = 2;
    int totalWork = 20;
    vector<int> a = {3600, 900, 100000};
    vector<int> p = {2, 4, 7};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 80.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int K = 2;
    int totalWork = 1;
    vector<int> a = {1, 360, 1};
    vector<int> p = {1, 3600, 12};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3606.5;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int K = 3;
    int totalWork = 20533;
    vector<int> a = {32060, 918, 48501, 60534, 87566, 47425, 78136, 57232};
    vector<int> p = {89425, 48201, 47730, 41672, 37655, 57289, 90919, 96013};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 8.080109728661506E8;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int K = 1;
    int totalWork = 1;
    vector<int> a = {100000, 3600};
    vector<int> p = {60000, 3600};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 3601.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int K = 25;
    int totalWork = 1;
    vector<int> a = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 65536, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> p = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.036;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int K = 3;
    int totalWork = 97714;
    vector<int> a = {36916, 47794, 38336, 85387};
    vector<int> p = {60493, 16650, 41422, 2363};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4729732607293856E9;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int K = 50;
    int totalWork = 50;
    vector<int> a = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> p = {99999, 99998, 99997, 99996, 99995, 99994, 99993, 99992, 99991, 99990, 99989, 99988, 99987, 99986, 99985, 99984, 99983, 99982, 99981, 99980, 99979, 99978, 99977, 99976, 99975, 99974, 99973, 99972, 99971, 99970, 99969, 99968, 99967, 99966, 99965, 99964, 99963, 99962, 99961, 99960, 99959, 99958, 99957, 99956, 99955, 99954, 99953, 99952, 99951, 99950};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 4998337.003912189;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int K = 15;
    int totalWork = 25;
    vector<int> a = {12341, 21235, 31236, 41236, 51265, 62341, 71272, 81237, 91472, 10163, 12461, 2361, 11225, 34723, 23471, 34517, 12376, 34189, 13482, 23472};
    vector<int> p = {20234, 30346, 40346, 58346, 60345, 70234, 80362, 90234, 100, 150, 21336, 23513, 34511, 23411, 75298, 34519, 98567, 86424, 45628, 23417};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 760847.6755790096;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int K = 2;
    int totalWork = 12345;
    vector<int> a = {999, 1000, 1001};
    vector<int> p = {1, 100000, 1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 56787.0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int K = 4;
    int totalWork = 100000;
    vector<int> a = {26963, 5706, 23282, 9962, 2996, 4828, 32392, 3903, 293, 17422, 19719, 5448, 14772, 1870, 25668, 17036, 28704, 31323, 17674};
    vector<int> p = {24465, 28146, 16828, 492, 11943, 5437, 14605, 154, 12383, 18717, 19896, 21727, 11539, 19913, 26300, 9895, 23812, 30334, 4665};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8642589803012747E8;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int K = 2;
    int totalWork = 300;
    vector<int> a = {10000, 10000, 1};
    vector<int> p = {2, 3, 5};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 816.0683931606841;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int K = 18;
    int totalWork = 63341;
    vector<int> a = {17364, 76727, 6986, 35989, 59877, 89181, 53670, 74180, 41243, 49774, 81355, 2132, 8345, 66062, 81656, 50462, 48088, 62171, 18893, 4020, 17724, 14803, 41765, 83358, 8929, 25699, 93341, 47247, 56788, 84462, 25587, 19779, 59230, 6934, 99146, 74647, 1307, 98025, 38505, 60837, 30249, 54667, 99107, 21979, 79548, 79164, 17201, 6551, 36430, 15622};
    vector<int> p = {64027, 78977, 15348, 88774, 39511, 517, 87147, 66836, 95848, 61387, 35185, 98160, 3079, 20629, 4017, 26539, 43455, 87284, 57206, 44047, 21234, 94504, 1792, 56236, 46425, 63506, 56277, 37249, 30569, 66551, 17710, 15491, 29905, 95187, 2994, 17964, 97888, 86871, 57985, 56291, 26755, 27522, 75334, 42371, 66956, 25303, 1776, 68427, 34222, 42272};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 7.167429410433986E8;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int K = 50;
    int totalWork = 16447;
    vector<int> a = {41360, 5948, 48029, 16447, 43515, 81053, 54491, 69761, 18719, 32854, 81077, 32677, 87473, 84262, 31095, 88844, 30084, 67875, 17241, 7320, 59143, 24888, 4524, 21947, 24652, 51260, 3503, 77882, 14692, 10223, 19745, 25245, 92037, 62387, 91602, 75862, 78125, 55653, 17938, 42635, 60960, 72375, 24555, 25730, 41198, 63691, 32074, 39336, 32112, 2062};
    vector<int> p = {3319, 30877, 78416, 89646, 7207, 71616, 33608, 99737, 75143, 9747, 72387, 788, 50105, 25258, 17408, 26517, 63451, 1718, 94358, 41118, 32738, 48072, 41457, 98551, 26726, 12580, 2297, 58662, 54135, 45220, 81267, 13773, 75117, 21669, 7905, 17152, 73789, 80243, 28901, 6241, 97223, 82380, 73668, 23514, 87916, 40723, 81957, 11222, 84605, 32371};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 7.794743257711672E8;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int K = 50;
    int totalWork = 99997;
    vector<int> a = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> p = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999703599892E9;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int K = 2;
    int totalWork = 100000;
    vector<int> a = {100000, 100000, 3601};
    vector<int> p = {1, 20, 20};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 172990.60819876255;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int K = 2;
    int totalWork = 100;
    vector<int> a = {60, 50, 40};
    vector<int> p = {1013, 1000, 983};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 107244.44444444444;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int K = 25;
    int totalWork = 8913;
    vector<int> a = {16808, 75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924, 37710, 64441, 38166, 84493, 43043, 7988, 22504, 82328, 31730, 78841, 42613, 44304, 33170, 17710, 97158, 29561, 70934, 93100, 80279, 51817, 95336, 99098, 7827, 13513, 29268, 23811, 77634, 80980, 79150, 36580, 58822, 11968, 10673, 1394, 19337, 25486, 91746, 25229, 94092, 40195, 86358};
    vector<int> p = {35002, 21154, 16709, 57945, 15669, 71491, 88125, 2197, 9531, 60904, 27723, 54667, 28550, 18025, 97802, 6854, 40978, 47409, 8229, 74934, 60299, 38982, 28636, 8014, 23866, 89815, 39064, 54537, 39426, 1670, 24116, 20095, 75630, 46502, 46518, 34196, 30106, 10405, 19452, 94299, 82189, 21124, 99506, 46883, 6753, 31567, 36717, 30338, 54439, 53145};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4852059791189492E8;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int K = 2;
    int totalWork = 10000;
    vector<int> a = {10000, 40000, 100000};
    vector<int> p = {3, 2, 1};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 12472.727272727272;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int K = 1;
    int totalWork = 10000;
    vector<int> a = {1};
    vector<int> p = {100000};
    FoxAndBusiness* pObj = new FoxAndBusiness();
    clock_t start = clock();
    double result = pObj->minimumCost(K, totalWork, a, p);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0359999999999999E9;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707311&rd=15037&pm=11454
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
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define FOR(i,a,b) for(__typeof(b) i=(a);i!=(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(),a.end()
#define EACH(i,a) FOR(i,a.begin(),a.end())
#define PB push_back
#define iss istringstream
#define SZ(a) (int)a.size()
#define CLEAR(a) memset(a,0,sizeof(a))
#define ll long long
 
class FoxAndBusiness {
public:
  double minimumCost(int, int, vector <int>, vector <int>);
};
 
const double err = 1e-8;
 
double add[55];
 
double FoxAndBusiness::minimumCost(int K, int totalWork, vector <int> a, vector <int> p) {
  double lo = 0.0, hi = 1e60;
  int N = SZ(a);
  double th = 3600.0 * K;
  for(int it = 0 ; it < 1000 ; it++) {
    double mid = (lo + hi) * 0.5;
    for(int i = 0 ; i < N ; i++) {
      add[i] = a[i] * (mid - p[i]);
    }
    sort(add, add + N);
    double sum = 0.0;
    for(int i = 0 ; i < K ; i++) {
      sum += add[N - 1 - i];
    }
    if (sum >= th) {
      hi = mid;
    }  else {
      lo = mid;
    }
  }
  double ans = (hi + lo) * 0.5 * totalWork;
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/