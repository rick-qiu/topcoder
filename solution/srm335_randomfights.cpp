/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7384
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

class RandomFights {
public:
    double expectedNrOfPoints(vector<int> A, vector<int> B, int n);
};

double RandomFights::expectedNrOfPoints(vector<int> A, vector<int> B, int n) {
    double ret;
    return ret;
}


int test0() {
    vector<int> A = {6};
    vector<int> B = {4};
    int n = 1;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {1, 7};
    vector<int> B = {3, 5};
    int n = 2;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {3, 7};
    vector<int> B = {1, 5};
    int n = 2;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {1, 2, 3, 5};
    vector<int> B = {3, 1, 5, 2};
    int n = 6;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -35.666666666666664;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {45, 35, 236, 2342, 5543, 21, 32, 2, 6, 23, 24, 23, 41, 1};
    vector<int> B = {2345, 45, 2345, 345};
    int n = 50;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2721986164E8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {34, 3245, 2534, 53, 53, 46, 346, 246, 346, 2, 624, 624, 6, 245, 6324, 6542, 624, 6};
    vector<int> B = {345, 234, 523, 4624, 6, 2456, 345, 634, 634, 7, 3457, 376, 34, 6234, 62, 523, 52, 35, 32};
    int n = 7;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -9713701.714285715;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 2, 3, 4};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {5, 6, 6, 7, 54, 46, 432, 2};
    vector<int> B = {7, 6, 434, 345, 7, 45, 12, 3};
    int n = 8;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -111828.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {25832, 32711, 1780, 29957, 23097, 4619, 46201, 5138, 5372, 37779, 39501, 3080, 32090, 41322, 11592, 46982, 34128, 6754, 5787, 19084, 24425, 215, 36529, 18645, 34704, 40115, 34250, 22098, 27000, 939, 22517, 47023, 26616, 16270, 48033, 3231, 34296, 5213, 24447, 3151, 44386, 44157, 30260, 10410, 41961, 29234};
    vector<int> B = {18671, 23054, 39089, 45596, 27664, 47508, 46482, 22208, 37526, 48442, 27290, 19555, 40412, 42744, 41555, 31044, 27437, 30755, 21304, 20311, 21710, 11167, 19806, 44430, 41904, 37160, 40058, 17637, 27404, 42854, 23060, 46274, 38358, 38872, 45933, 25363, 26841, 41610, 33415, 5075};
    int n = 43406;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2778477372164968E12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {10772, 2055, 20542, 22205, 21418, 46963, 36881, 18539, 6090, 14830, 49110, 34705, 24994, 46399, 44168, 17113, 30887, 39036, 41220, 40378, 1883, 39039, 16257, 33133, 17389, 16443, 46132, 49070, 17978, 49357, 48606, 16647, 34145, 45415, 28470, 25287, 30708, 33150, 27061, 38326, 47535};
    vector<int> B = {36946, 42278, 24819, 15464, 4378, 15762, 583, 26898, 40604, 48312, 21365, 32206, 25365, 37977, 5645, 43084};
    int n = 43997;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4299645684013525E12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {44415, 24764, 49143, 33491, 44211, 26415, 9819, 32124, 25537, 19433, 7955, 37808};
    vector<int> B = {29304, 8372, 49857, 46922, 46853, 3017, 37440, 1352, 32816, 24676, 8328, 21646, 9439, 25089, 34995, 23207, 42711, 38920, 42602, 2711, 22474, 47182, 25817, 24345, 41143, 10233, 37980, 47552, 33477, 42329, 16318, 4223, 47033, 43136, 15798, 43642, 26663, 49396, 8657, 17659, 33765, 7331, 18545, 28036, 39742};
    int n = 43713;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -3.7997811109193857E12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {39182, 43686, 331, 7441, 5666, 26290, 22589, 36850, 18417, 8960, 45187, 4398, 25629, 25906, 23068, 49600, 15175, 38151, 18213, 34317, 46968, 25803, 14716, 18255, 21343, 31135};
    vector<int> B = {21468, 35099, 28080, 14305, 1458, 3869, 27425, 21822, 13886, 41200, 25908, 26350, 36728, 37269, 29179, 16066, 1443, 23225, 6162, 42648, 36667, 49705, 16803, 13618, 5721, 17745, 5901, 1880, 30168, 43706, 8550, 33877, 9902, 29651};
    int n = 42006;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3367887221860583E12;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {5064, 18013, 600, 17062, 49024, 30542, 45977, 27736, 21549, 48394, 9181, 44060, 46226, 47870, 32159, 42068, 49751, 33599, 10276, 48569, 5592, 11074, 27144, 42013, 18742, 18057, 13016, 28040, 34549, 24617, 19263, 37833, 41570, 4181, 5714, 18443};
    vector<int> B = {37085, 31056, 49437, 37991, 48280, 46440, 47312, 14750, 17177, 37695, 48188, 49428, 42732, 36297, 23422, 29648, 4327, 2757, 19738, 40337, 12220, 25621, 31242, 23166, 10010, 12866, 8587, 17419, 8980, 10535, 36557, 12471, 28296, 18622, 4078, 8483, 7239, 13821, 11478, 11697, 12924, 2904, 49074, 37338};
    int n = 46657;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -5.037546726287212E12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {11533, 47325, 13655, 44715, 10447, 39502, 30513, 40681, 5012, 36562, 26920, 10217, 4162, 1299, 25642, 26688, 3255, 30333, 15790, 46062, 6687, 5322, 16020, 15160, 15741, 19377, 16594, 46431};
    vector<int> B = {6587, 27858, 3515, 24176, 9883, 32104, 45100, 38951, 37952, 2218, 12965, 32318, 31919, 15057, 32501, 33471, 18491, 39215, 47512, 23807, 46295, 25667, 41608, 13170, 45298, 21245, 6298, 4915, 7836, 11689, 42000, 39231, 10861, 20553, 9388, 3992, 10672, 46512, 34276, 8134, 47098};
    int n = 46822;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.035772633160808E13;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {15316, 38779, 11169, 18668, 24137, 47811, 39806};
    vector<int> B = {9776, 26779, 20280, 18627, 46036, 16698, 15291, 1643, 31884, 4786, 27464, 39464, 7822, 32025, 13675, 5580, 14313, 14024, 17642, 41879, 31465, 45202, 48888, 20046, 10444, 18021, 39653, 26950, 40663, 14930, 2668, 34997};
    int n = 43120;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9909510919632778E12;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {38017, 34136, 41445, 6619, 25518, 17719, 12641, 40161, 39644, 1174, 42691, 27120};
    vector<int> B = {9739, 35011, 41878, 38231, 31884, 22305, 20959, 1528, 44607, 49408, 35923, 40535, 44172, 32101, 13969, 21191, 37188, 3409, 22154, 43503, 20636, 21304, 7446, 32110, 23204, 35269, 4377, 23543, 30981, 46439, 49627, 29200, 1743, 20558, 22238, 43045, 28830, 34761, 22128, 39115};
    int n = 45420;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -2.4557648006351733E12;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {26547, 37925, 19340, 30620, 47280, 11621, 1698, 29427, 21628, 6151, 17216, 796, 1747, 10301, 40457, 3082, 49372, 305, 36419, 9909, 28751, 24143, 10191, 5334, 6088, 48193, 8985, 2941, 13169, 8158, 46068, 37631, 39471, 13170, 14596, 5214, 37699, 39186, 35814, 38472, 36999, 13723, 1674};
    vector<int> B = {46643, 17757, 21029, 8020, 17890, 38023, 34553, 24863, 27107, 9623, 2341, 27307, 20861, 13818, 39801, 28651, 26884};
    int n = 45578;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.342630313601904E12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {39511, 3368, 27763, 19325, 31579, 379, 48970, 11325, 43731, 28256, 7927, 6062, 13, 7355, 14815, 7721, 9325, 806, 4828, 43510, 33200, 1078, 42923, 48389, 7992, 24512, 9572, 29246, 5865, 21806, 25121, 30962, 16142, 41092, 34971, 42766, 32815, 23157, 15696, 46057, 25912, 27980, 5140, 22936, 23711, 4034, 18208, 6432};
    vector<int> B = {31852, 39166, 43590, 30574, 19422, 26097, 40025, 9592, 30691, 4200, 43298, 44446, 22293, 31242, 39781, 12912, 41402, 22230, 27115, 222, 8923, 12688, 29508, 3442, 37318, 26505, 8876, 22619, 35103, 49264};
    int n = 42349;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.66311512595364E11;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {11859, 20857, 17186, 34101, 46939, 24026, 39926, 18363, 38304, 40123, 49808, 24391, 40784, 49602, 48793, 14545, 30881, 21156, 43846, 42213, 6233, 10338, 7795, 1493, 41821, 21933, 23414, 35438, 46897, 15239, 33490, 47099, 44697, 7556, 44980, 10778, 42828, 39926, 41652, 42891, 40651, 6438, 28720, 25902, 15720, 11305, 26410, 4275, 46293};
    vector<int> B = {19052, 26146, 41859, 17194, 40608, 38179, 47753, 30490, 20542, 6354, 47524, 41802, 6607, 32817, 12730, 15723, 15375, 31548, 45610, 6652, 20298, 9527, 12511, 28941, 39761, 35392, 47352, 14815, 13898, 46841, 21443, 40524, 33349, 26832, 30010, 16221, 45081, 15852, 15281, 40477, 30964, 40144, 18789, 648, 24720, 30637, 14269, 23784, 8826, 2640};
    int n = 46843;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -3.807347935340935E10;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {31278, 34598, 38313, 30059, 38261, 48841, 39881, 4543, 48170, 16113, 46092, 45192, 3825, 46689, 19517, 11907, 46672, 7467, 9326, 7911, 23697, 42585, 30812, 33177, 17403, 41427, 20816, 16568, 15579, 35918, 21950, 26325, 35377, 4080, 33812, 35915, 10540, 46332, 47510, 25618, 6220, 47408, 34347, 35229, 33667, 27143, 22967, 30813};
    vector<int> B = {17465, 9079, 18297, 17039, 34101, 26829, 23648, 12700, 19649, 1229, 46299, 28017, 2286, 43150, 23060, 31664, 8048, 36006, 41018, 28370, 23638, 24828, 43991, 24283, 34166, 23256, 11210, 36108, 27479, 6921, 39576, 49315, 45151, 37763, 37704, 497, 20267, 19351, 24198, 7959, 29335, 24015, 8339, 10771, 15416, 10774, 14778, 45976, 2666};
    int n = 43181;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.616079401725667E12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {11832, 3679, 18683, 18014, 24872, 38936, 41857, 5268, 47959, 33606, 9062, 25879, 18251, 15535, 17543, 36697, 10788, 26370, 14445, 27967, 12124, 43409, 18538, 49769, 27523, 48337, 26662, 37997, 16517, 23407, 15931, 39401, 7589, 22364, 38934, 46104, 14917, 16218, 16676, 39197, 34104, 47226, 22720, 4821, 31561, 11735, 42159, 28658, 20303};
    vector<int> B = {2304, 11139, 14201, 27206, 14851, 16077, 12611, 5299, 24647, 46021, 32518, 7644, 6089, 5529, 37603, 15200, 30031, 15814, 24336, 45659, 9750, 16378, 29800, 23518, 44087, 41974, 2469, 32969, 7743, 13244, 23302, 10173, 14019, 18384, 33344, 24515, 23463, 1497, 12114, 24492, 16484, 10278, 29539, 34201, 16694, 19349, 30563, 14352};
    int n = 47608;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8832848423902695E12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {13048, 10226, 21983, 31429, 43047, 46983, 23660, 49106, 4935, 2474, 22816, 33205, 12078, 17623, 48040, 47493, 5570, 15320, 34598, 14596, 34562, 44348, 39319, 28758, 27634, 28442, 13069, 11332, 4443, 26664, 3175, 9101, 28868, 32942, 17402, 10891, 11373, 6888, 32589, 20431, 43837, 38366, 39798, 27224, 37571, 20618, 13581, 31007, 3073, 47251};
    vector<int> B = {18704, 12447, 40831, 33327, 36294, 12942, 38425, 31288, 21634, 8812, 40064, 10424, 7612, 5172, 10775, 40714, 28762, 49137, 20877, 30865, 48805, 35854, 19384, 14337, 31305, 38135, 18330, 24445, 37924, 11518, 27909, 26392, 10641, 3061, 24249, 46055, 5555, 16252, 22923, 10791, 22624, 19247, 48908, 35290, 16556, 14925, 11189, 23933, 24437, 30208};
    int n = 49244;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1656744671623125E12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {11514, 9445, 5595, 37966, 2029, 17412, 42774, 15811, 19744, 9584, 11267, 13923, 26043, 13538, 49947, 1753, 12090, 29915, 11988, 13547, 19848, 26199, 1800, 42467, 26152, 16688, 40332, 18213, 22490, 23097, 40585, 26273, 1286, 13296, 35956, 23922, 37646, 22665, 41083, 18465, 44190, 18350, 46255, 16452, 497, 23694, 7640, 10505, 20579};
    vector<int> B = {3602, 3017, 26457, 38125, 32395, 10381, 45133, 15694, 20136, 10291, 8036, 13218, 5169, 45429, 5781, 47906, 14980, 24654, 28109, 4481, 30105, 47299, 26591, 32805, 18176, 29236, 29417, 40932, 8761, 2082, 19231, 4062, 30016, 49118, 1192, 46811, 3164, 21130, 29339, 13480, 25343, 30480, 15365, 6746, 8410, 47847, 43543, 14619, 16969, 49981};
    int n = 40103;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2197924619763647E12;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {12641, 2048, 5360, 5912, 43526, 8139, 8779, 41599, 38047, 5685, 40526, 22092, 40552, 16830, 40459, 27448, 3209, 24886, 35290, 268, 22972, 41535, 8820, 47023, 317, 5651, 23921, 4999, 34366, 22694, 41120, 1586, 1002, 44465, 45768, 17235, 47651, 15311, 27914, 30728, 14214, 24518, 1681, 8189, 234, 31720, 12005, 12622, 29054};
    vector<int> B = {44648, 31481, 21930, 43807, 23543, 42718, 30625, 34998, 30427, 32695, 4944, 35675, 42768, 26820, 49489, 15294, 46776, 3374, 35151, 25345, 43499, 25303, 49007, 29184, 39640, 32746, 40179, 5858, 24943, 18755, 41266, 11659, 13727, 16332, 17846, 19532, 1661, 23554, 45126, 37327, 41637, 40039, 49151, 29532, 42085, 29773, 37356, 47290};
    int n = 48367;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.727720826353862E12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {24069, 10480, 38859, 22188, 15908, 8485, 22660, 23023, 8632, 25274, 28551, 44349, 40690, 19899, 11905, 43329, 40650, 41178, 18436, 15679, 37772, 24407, 46440, 9022, 48898, 17556, 29785, 35995, 4794, 2473, 35324, 47425, 10327, 16490, 33207, 28022, 25961, 13887, 32182, 16456, 4985, 19657, 28272, 46586, 15297, 32097, 46736, 38045};
    vector<int> B = {29234, 7273, 15879, 20520, 12212, 40161, 48022, 41996, 8338, 27040, 36346, 8462, 31270, 39054, 27390, 21529, 22215, 35476, 5629, 4600, 37819, 39879, 33020, 28633, 41233, 46235, 21726, 30449, 29432, 42573, 25659, 32404, 14723, 35437, 37466, 42476, 13424, 14661, 23566, 17781, 37838, 40850, 8833, 20897, 20072, 25545, 32961, 23449, 18369};
    int n = 48501;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.260473378688828E12;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {46884, 9739, 20393, 33136, 49964, 2601, 30253, 33186, 21375, 25152, 12952, 9900, 265, 28509, 28299, 38077, 31132, 15497, 3244, 18721, 4938, 11957, 31638, 40833, 10191, 36258, 12551, 22046, 38581, 48101, 26898, 3480, 26743, 42150, 6643, 44479, 46228, 13052, 48293, 17061, 33799, 11216, 24507, 8806, 49762, 15812, 47207, 13550, 7055, 46533};
    vector<int> B = {17529, 6850, 48990, 48330, 25201, 43970, 35612, 36246, 23364, 40544, 7026, 9754, 28285, 35454, 41532, 24235, 13588, 39442, 40488, 39437, 45495, 399, 42227, 30567, 45031, 37522, 11887, 39122, 29921, 12669, 26437, 41091, 9158, 47282, 37533, 31234, 45814, 33807, 2558, 31310, 18051, 5479, 13494, 17214, 26663, 46457, 22702, 1278};
    int n = 41577;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6.324363488758231E12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {24569, 17992, 28423, 41028, 42881, 19990, 17090, 22249, 7335, 40163, 38879, 12073, 24740, 14775, 30343, 11617, 37148, 15419, 46688, 4382, 25445, 39782, 16671, 11730, 5184, 5360, 1482, 3314, 12092, 8861, 18871, 21547, 5198, 18199, 38192, 21263, 35824, 43456, 13774, 27826, 32653, 19835, 10862, 18134, 41863, 34981, 41162, 38776, 41166};
    vector<int> B = {15211, 23964, 45610, 22756, 36509, 31920, 32383, 14649, 39756, 20111, 22491, 33036, 42408, 30595, 44921, 36891, 18849, 23237, 701, 1841, 34298, 26909, 9753, 11634, 30964, 44400, 6352, 44628, 21958, 4525, 23905, 46368, 23493, 9651, 44693, 46163, 20136, 21478, 33866, 30501, 31914, 9666, 25637, 34191, 42849, 20867, 42831, 18742};
    int n = 43275;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -6.08629539480537E11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {30099, 14881, 27233, 15005, 48390, 40546, 3699, 11972, 27418, 10768, 1087, 12832, 35519, 1259, 10637, 12328, 23173, 30748, 47620, 27901, 26496, 21249, 34838, 23997, 45113, 17856, 38473, 27132, 48452, 27834, 13180, 23455, 11543, 19609, 12389, 4291, 542, 2747, 12216, 37775, 45373, 30191, 10108, 8947, 35293, 31285, 5403, 46758, 18842, 16408};
    vector<int> B = {5693, 37160, 27968, 9821, 12315, 36374, 29712, 37745, 10193, 22543, 44039, 20685, 360, 34968, 25972, 9786, 42468, 33951, 25400, 4990, 49882, 14116, 5442, 38693, 29474, 31290, 37821, 5831, 8699, 22718, 43445, 12311, 28401, 32508, 2693, 23203, 17850, 22321, 6482, 31897, 33308, 44308, 3207, 34481, 13122, 2700, 40736, 30878};
    int n = 45195;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -7.371200971496965E12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {10947, 27040, 20975, 5237, 49059, 17223, 29993, 18514, 13027, 2743, 23616, 15098, 19517, 28375, 18075, 14242, 20124, 22294, 3936, 21736, 18151, 4134, 30319, 39781, 4425, 29877, 42148, 43158, 1779, 38022, 24157, 14900, 6240, 30262, 42305, 158, 30309, 1804, 9496, 9597, 4835, 37774, 32566, 46956, 38504, 39178, 15772, 26708};
    vector<int> B = {14040, 39096, 10750, 33184, 20906, 38530, 28168, 15318, 6278, 12218, 12218, 36219, 27575, 32564, 35485, 13326, 18786, 27509, 15014, 14402, 9890, 35538, 3378, 25384, 12141, 7811, 17985, 34108, 39490, 44788, 15638, 49061, 13053, 45624, 24206, 41882, 41518, 1837, 13611, 49773, 49933, 4663, 49506, 32337, 4419, 40050, 40453, 26781};
    int n = 15;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -1.3023242433333333E9;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {33942, 42936, 17651, 2030, 7650, 3447, 37892, 29152, 19242, 23266, 17994, 29039, 18734, 43466, 12798, 8390, 6605, 46671, 22281, 35805, 35414, 16943, 37437, 44831, 46814, 25724, 17133, 19842, 28063, 14560, 32594, 9806, 49528, 46621, 34529, 27635, 28046, 33105, 14234, 4400, 34097, 24782, 36554, 6393, 6036, 47843, 36329, 39424, 25174, 35707};
    vector<int> B = {24592, 42328, 49268, 43830, 44463, 48485, 45059, 47771, 7821, 13908, 35000, 22935, 3983, 43915, 17752, 32251, 13689, 43796, 18791, 35154, 16575, 8959, 43486, 36775, 32627, 36943, 12659, 16747, 49703, 21836, 34465, 19139, 7201, 22969, 10615, 4476, 1492, 32361, 39591, 42270, 48338, 3433, 4852, 12895, 33959, 23663, 5962, 39118, 49382};
    int n = 19;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -5.550734630684211E9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {26238, 31160, 30841, 41413, 27800, 30665, 21255, 34650, 4805, 673, 33996, 33966, 40359, 19135, 41589, 43072, 31383, 32494, 31562, 34012, 26524, 19307, 2248, 28991, 34679, 26074, 34592, 36395, 44030, 39154, 2321, 45660, 48059, 14114, 21621, 43772, 44864, 18938, 8419, 17020, 14687, 19400, 9140, 17081, 12940, 20617, 44240, 6904, 27119};
    vector<int> B = {46094, 8394, 13439, 36274, 23386, 43815, 128, 15210, 26783, 30552, 24020, 32519, 33707, 669, 15911, 38266, 38477, 8627, 13266, 3716, 19411, 44654, 47051, 45493, 24760, 23256, 33582, 43692, 18819, 7937, 49531, 47525, 6003, 26130, 867, 6252, 9315, 9724, 45950, 4936, 12184, 47043, 47761, 24941, 32903, 2196, 873, 47219, 41000};
    int n = 12;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0795209966666666E8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {21327, 17202, 1050, 49219, 42988, 38315, 39286, 48088, 1840, 17493, 8870, 5789, 48366, 28364, 773, 25687, 48316, 18293, 12594, 38020, 20250, 43742, 29684, 3400, 49142, 37919, 23825, 43485, 27435, 459, 29762, 21610, 1893, 32530, 48174, 32637, 39560, 28740, 2268, 37013, 36179, 32708, 49542, 4566, 41991, 33479, 41145, 10487, 33622};
    vector<int> B = {34153, 35243, 29815, 23531, 34914, 4494, 13731, 23231, 15154, 9249, 35097, 25163, 14177, 40607, 6108, 34623, 46805, 24097, 14975, 21977, 20536, 48577, 16570, 3765, 25832, 32866, 10239, 40257, 49325, 20291, 26670, 44733, 5008, 3862, 28326, 22566, 26845, 17656, 12941, 17380, 30453, 27224, 11243, 33768, 40623, 2444, 13285, 18434, 20974};
    int n = 2;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -4.85487707E8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {14722, 30945, 47644, 19404, 33261, 4539, 37804, 10468, 19383, 47465, 30586, 13819, 48872, 27035, 41230, 25647, 19958, 46011, 23465, 42597, 17920, 30526, 45491, 19569, 24182, 17566, 2089, 12995, 5030, 376, 31717, 29344, 12209, 14362, 44205, 43315, 34919, 46303, 20877, 30906, 44917, 2049, 39949, 45285, 21125, 11959, 33766, 16081, 1806};
    vector<int> B = {25660, 38468, 12790, 39456, 3078, 1935, 16422, 44896, 1999, 40719, 49990, 9920, 38332, 40429, 44503, 10821, 18596, 3103, 8817, 9531, 36820, 26148, 4841, 35360, 15418, 22169, 22997, 49340, 49988, 29149, 39818, 46020, 46198, 5287, 35994, 27661, 33808, 2640, 25301, 2043, 45695, 13028, 21862, 10736, 21112, 3259, 42962, 6989};
    int n = 19;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1660449349473686E9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {21920, 20145, 17809, 39888, 15978, 22818, 11241, 17512, 40409, 4177, 30078, 1277, 18230, 42097, 27375, 1026, 34577, 40360, 43086, 21668, 34294, 5075, 38672, 9271, 8498, 24908, 20290, 9314, 27492, 44362, 37058, 924, 49378, 48776, 46648, 18157, 21485, 43354, 39963, 26182, 44541, 2921, 27450, 30513, 49127, 17616, 8292, 41539};
    vector<int> B = {2175, 47574, 29520, 12726, 49437, 37176, 11899, 10142, 28889, 35970, 42002, 41298, 1519, 8528, 30556, 47062, 10741, 33244, 49443, 13598, 47289, 44395, 46026, 17255, 37175, 43769, 23866, 4007, 32002, 34032, 44300, 24436, 39041, 20655, 34466, 1483, 21212, 6787, 3399, 16330, 46784, 28860, 44986, 29454, 23230, 40923, 10949, 17987, 25292};
    int n = 115;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -4.679376352217391E9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {44178, 19767, 47505, 38497, 19328, 47044, 40611, 36684, 4040, 26052, 16480, 38167, 10477, 33367, 26671, 33286, 8753, 39490, 3860, 46517, 49847, 23110, 37587, 8535, 46254, 19293, 22554, 28146, 4755, 22087, 23510, 44797, 17716, 38091, 18953, 126, 12528, 45748, 32041, 31213, 845, 11450, 44957, 17010, 16352, 45746, 36054, 23612, 45127};
    vector<int> B = {37576, 37042, 27551, 16679, 32195, 2749, 34894, 44533, 40193, 25343, 18477, 32450, 32273, 33778, 41074, 6345, 30631, 26751, 23116, 5229, 5729, 33699, 12077, 234, 4313, 16978, 18340, 17680, 34753, 42009, 45493, 38193, 48750, 49803, 26420, 41110, 746, 41143, 40088, 27864, 15416, 35342, 25550, 45197, 28458, 36625, 38321, 12434};
    int n = 72;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.234532541027778E9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {3230, 28496, 32708, 25582, 45676, 37953, 18399, 19850, 3271, 33825, 13394, 14598, 22295, 37643, 33134, 4245, 15587, 15637, 35716, 13239, 35724, 886, 14216, 5839, 4418, 41785, 29691, 13559, 46134, 20625, 22734, 39651, 20079, 40769, 44184, 31956, 7128, 29846, 3507, 13380, 33944, 27789, 45552, 987, 6986, 9635, 12185, 37568, 48391, 34062};
    vector<int> B = {29275, 26535, 48340, 13284, 23513, 41023, 35870, 32887, 48160, 5177, 47473, 25826, 28451, 25451, 33284, 14680, 45884, 46427, 21883, 44377, 23694, 29818, 48705, 7752, 17990, 18631, 37670, 49973, 47960, 32622, 30271, 31837, 34336, 590, 20920, 22569, 2777, 44162, 26071, 48445, 2015, 4232, 34467, 8018, 30679, 33685, 44054, 15884};
    int n = 47;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -9.559456774595745E9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {8390, 44500, 26732, 9876, 27467, 10515, 9493, 22207, 20209, 43902, 19148, 27184, 6789, 14134, 23128, 41361, 1595, 44631, 45243, 41411, 13126, 37500, 47417, 4817, 39208, 47608, 38830, 20529, 5451, 5846, 13034, 19118, 40937, 40530, 9916, 29860, 10812, 13692, 6277, 15369, 13265, 40588, 37837, 1777, 45791, 40746, 34966, 21041, 21820, 4571};
    vector<int> B = {40092, 4374, 48513, 31829, 36853, 45462, 1748, 13043, 32065, 4358, 27330, 24210, 15530, 49481, 23752, 17955, 21209, 13309, 11538, 22866, 16481, 40743, 15784, 46352, 1203, 24896, 20075, 39555, 15967, 32321, 23331, 6487, 7194, 21792, 49703, 29554, 19880, 43043, 5306, 49649, 17437, 24933, 34728, 1535, 13006, 31703, 25699, 29670, 28936};
    int n = 100;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -4.66400182808E9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {24505, 28007, 45595, 34537, 23335, 34094, 14822, 10931, 33545, 838, 13745, 981, 46, 18032, 4010, 26811, 37969, 40672, 10526, 11662, 42710, 4981, 10533, 37396, 1653, 48490, 33176, 45692, 3229, 2711, 44995, 10488, 5080, 31821, 17636, 14758, 26115, 3193, 6149, 27059, 19257, 8095, 4854, 33875, 36487, 13772, 11005, 16460, 29094, 28183};
    vector<int> B = {14321, 4706, 16410, 20504, 15813, 34458, 1179, 15021, 16742, 44011, 29452, 42759, 45989, 34213, 31541, 10347, 13768, 35677, 40866, 49537, 41580, 16601, 46686, 28033, 35349, 43208, 21297, 33379, 37794, 27405, 48571, 384, 13493, 40686, 42469, 16541, 21118, 1663, 22226, 6140, 4931, 38474, 1141, 30190, 10066, 15329, 37989, 19749};
    int n = 101;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0746233774158416E9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781};
    vector<int> B = {13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141, 13, 141};
    int n = 90;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2960156330666667E11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781, 16397, 32781};
    vector<int> B = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9142184452096E13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {13, 13};
    vector<int> B = {16397, 32781};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -6.2633776513024E13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {31530, 27056, 22838, 20753, 49856, 11935, 34766, 47574, 44063, 47178, 48367, 39238, 27826, 44267, 25429, 22363, 40949, 43694, 15783, 49975, 49911, 47815, 40813, 20522, 5338, 46171, 42411, 45968, 18384, 45641, 23859, 7226, 43330, 29008, 48388, 49908, 17380, 31754, 48681, 12521, 32614, 26742};
    vector<int> B = {12892, 2904, 26398, 32945, 19788, 27573, 5535, 5639, 28700, 5194, 20138, 32821, 690, 30206, 1648, 23740, 18957, 568, 1552, 26608, 8422, 13179, 33135, 12477, 20481, 6975, 30343, 1448};
    int n = 1007;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0606078389741211E11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {42559, 13912, 42910, 19704, 47255, 19204, 26190, 37998, 48175, 44048, 48786, 29475, 38547, 42929, 35884, 44316, 39249, 34080, 46991, 46838, 40589, 32967, 33689, 30559, 49369, 41005, 20986, 23448, 32837, 44806, 46141, 23779, 45942, 30229, 38978, 30402, 39121, 42417, 21814, 42234, 47708, 21233, 36312, 35867, 35037, 32219};
    vector<int> B = {48589, 2043, 24403, 12550, 28197, 12494, 10308, 26514, 743, 15169, 14342, 2321, 40025, 215, 28724, 10838, 18304, 3051, 6484};
    int n = 35301;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -1.7108584746309438E12;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {40373, 44727, 25217, 38012, 38965, 49539, 46289, 42500, 49490, 27161, 46069, 39001, 31434, 47229, 43688, 28853, 24947, 45253, 44350, 45972, 49389, 44021, 42010, 27184};
    vector<int> B = {13662, 28294, 1607, 18612, 974, 2427, 15885, 24086, 286, 4519, 2399, 3790, 3011, 3497, 909, 26511, 9721, 25332, 1734, 34593, 3356, 8309, 24157, 44441, 4929, 11746};
    int n = 47064;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -1.839567936377838E12;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {4746, 48474, 48553, 39156, 47467, 27280, 49669, 39505, 30174, 20385, 29572, 35170, 48914, 41013, 47647, 47585, 31927, 47832, 48003, 25736, 27187, 28862, 19104, 33630, 37326, 30457, 34564, 41794, 43734, 32686, 47235, 31230, 47895, 44368, 45297, 32166, 49148, 49972, 17757, 42245};
    vector<int> B = {2367, 4151, 35780, 4914, 30245, 12129, 64, 1757, 21608, 18605, 31921, 24601, 24359, 4566, 14329, 37496, 5176, 22516};
    int n = 19655;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.53281874883785E12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {48855, 47348, 41698, 18896, 43217, 40261, 43949, 33768, 47953, 36732, 42910, 36141, 46376, 45603, 48342};
    vector<int> B = {13837, 344, 2929, 6566, 3232, 873, 2980, 29908, 13796, 27664, 2639, 3966, 36928, 26757, 11139, 13555, 47610};
    int n = 43371;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5406979900901626E12;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {7874, 38580, 11486, 31739, 3152, 12883, 14776, 409, 6692, 17481, 8012, 13183, 9768, 9839, 13537, 19552, 23961, 4788, 7941, 859, 7422, 15947, 14638, 12562, 3650, 1431, 1613, 25360, 2824, 7088, 11808, 7116, 1054, 25621, 9954, 16799, 2409, 22263, 1283, 8378, 3226, 6568, 15724, 26416, 43403, 3823, 520};
    vector<int> B = {17177, 20194, 35953, 39607, 42804, 45438, 37512, 49952, 42348, 44816, 15994, 24844, 46544, 49028, 37579, 40103, 49589, 48734, 35646, 36470, 49407, 19778, 42791, 41663, 49656, 34821, 30190, 40276, 32173, 48849, 48890, 49712, 27522, 27538, 40908, 42447, 23017, 40212, 44631, 48211, 48846, 39212, 49706, 27903, 25709, 29819};
    int n = 21665;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -8.889615639892883E11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {585, 24822, 3650, 9068, 40726};
    vector<int> B = {11935, 45154, 38142, 30923, 42804, 45826, 48225, 33198, 41467, 49309, 49092, 46267, 39868, 38434, 34183, 48193, 12934, 27108, 25971, 42793, 28893, 42190, 23991, 33501, 49378, 28922, 45147, 23357, 34976, 49783, 3783, 11458, 39654, 34839, 21691, 34886, 49711, 22311, 44315, 48172};
    int n = 45948;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9476079377038936E12;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {20437, 43088, 35754, 41560, 105, 2268, 1297, 990, 11237, 12161, 5872, 13310, 42219, 4550, 7888, 8397, 18633, 19770};
    vector<int> B = {45330, 44062, 12130, 45910, 32278, 45315, 32509, 27148, 38679, 45486, 45436, 44057, 40290, 30031, 45324, 15522, 27944, 48213, 26888, 39126, 49953, 22910, 47141, 45382};
    int n = 27328;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1819353107363042E11;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {7729, 1511, 21619, 4427, 234, 8898, 4934, 4173, 33983, 29089, 12667, 33601, 15191, 3258, 23095, 22630, 1532, 2806, 20082, 20788, 19018, 22306, 3754, 322, 26083, 17309, 10927, 32333, 31119, 18776};
    vector<int> B = {49864, 47657, 17325, 23574, 40649, 26189, 12549, 45704, 46508, 30158, 45964, 34318, 29745, 18218};
    int n = 22355;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -2.97203710476598E12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {22828, 4140, 11975, 20878, 1137, 19736, 22526, 22054, 10487, 6475, 5757, 3513, 19061, 16432, 28931, 20794, 8780, 11190, 16254, 6636, 4991, 15546, 2012, 32420, 9222, 1208, 8873, 22570, 22635, 650, 32505, 4158, 3895, 12504, 8720, 3682, 13179, 23176, 3715, 1987, 2895, 25470, 15027, 765, 10166, 1840, 480, 14449, 25322, 9973};
    vector<int> B = {31028, 30219, 44816, 33261, 38293, 40681, 49035, 28117, 26527, 32633, 47347};
    int n = 15830;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -1.4736047475908604E12;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {11, 0, 9, 1, 0, 3, 0, 14, 1, 15, 14, 14, 4, 13, 7, 3, 6, 10, 0, 6, 8, 8, 5, 1, 12, 11, 2, 4, 12, 12, 10, 1};
    vector<int> B = {4, 9, 3, 1, 3, 3, 7, 13, 14, 15, 5, 4, 13, 6, 14, 12, 12, 5, 9, 9, 11, 13, 15, 8, 14, 4, 15, 7, 14, 2, 11, 9, 6, 5, 10, 7, 7, 14, 4, 10, 4, 2, 9, 3};
    int n = 42164;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -7.812741777043989E11;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {3, 10, 2, 14, 3, 15, 14, 14, 13, 9, 0, 10};
    vector<int> B = {1, 0, 4, 2, 1, 1, 4, 13, 5, 11, 4, 6, 7, 4, 8, 10, 8, 2, 9, 11, 10, 2, 3, 0, 4, 4, 10, 3, 2};
    int n = 17444;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7081227509666104E12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {2, 4, 0};
    vector<int> B = {14, 7, 6, 7, 15};
    int n = 28704;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9517434587091486E11;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {13, 4, 13, 1, 9};
    vector<int> B = {5, 14, 3, 2, 0, 3, 8, 0, 13};
    int n = 4101;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -4.477074592962019E11;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {6, 10, 3, 7, 10, 9, 8, 15, 13, 3, 13, 13, 6, 9, 2, 10, 15, 15, 14, 4};
    vector<int> B = {9, 12, 8, 14, 6, 14, 15, 13, 12, 3, 3, 12, 9, 1, 9, 9, 10, 15, 11, 6, 2, 10, 6, 9, 9, 2, 10, 12, 10, 10, 14, 13};
    int n = 24989;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.059365464850833E12;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {14, 4, 5, 4, 3, 9, 6, 0, 15, 2, 0, 8, 8, 14, 2, 8, 10, 3, 2, 13, 5, 7, 10, 9, 10, 7, 5, 3, 2, 4, 6, 5};
    vector<int> B = {25400, 788, 10692, 48210, 25374, 20235, 39743, 43147, 22926, 34438, 41515, 8094, 5335, 35132, 2919, 30770, 3215, 42178, 35690};
    int n = 42030;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -3.9644369015213477E12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {0, 0, 5, 1, 6, 4, 15, 3, 9, 0, 15, 6, 0, 2, 5, 3, 4, 14, 4, 5, 1, 9, 2, 13, 9};
    vector<int> B = {47691, 16390, 5529, 34463, 5007, 6108, 12037, 47697, 24571, 7945, 44933, 8355, 5258, 37719, 22173};
    int n = 48443;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8170033882356177E12;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {25522, 49715, 3962, 5345, 16887, 38827, 39155, 48697, 2279, 38737, 4120, 44847, 38327, 38839, 40232, 29663, 22691, 20216, 16663, 32464, 29059, 14771, 22979, 19892, 27872, 26619, 28710, 46054, 19184, 40137, 13084, 34733, 45137, 19302, 38437, 31747, 33781, 17956, 20211, 9733, 12633, 34047};
    vector<int> B = {4, 4, 2, 0, 6, 6, 5, 7, 2, 5, 4, 8, 7, 14, 2, 2, 9, 1, 3, 9, 15, 3, 2, 2, 4, 12, 13, 9, 10, 10, 4};
    int n = 43580;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7062613530048677E12;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {19064, 19440, 37032, 12004, 26842, 47790, 33662, 31838, 9203, 40389, 10888, 41127, 4796, 19131, 3835, 11741, 23762, 23046, 17007, 11609, 17145, 12238};
    vector<int> B = {13, 7, 1, 15, 1, 12, 10, 15, 6, 10, 2, 3, 2, 7, 4, 1, 2, 11, 12, 4, 5, 2, 13, 10, 15, 14, 11, 6, 7, 2, 2, 15, 9, 8, 13, 15, 4, 12, 0, 5, 13, 15, 14, 4, 11, 5, 4};
    int n = 40747;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.223787602257056E12;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {39086, 10872, 27431, 35797, 3142, 39701, 48946, 28603, 28942, 28602, 4059, 23896, 48151, 42458, 7063, 13814, 9509, 4448, 13029, 13422, 10634, 43181, 28516, 14186, 31111, 30815, 10048, 42600, 19034, 26240, 40177, 21820, 16683, 7480, 42177, 20958, 25849, 7915, 5127, 10620, 32940, 13430, 49881, 44151, 4563, 23358, 18309, 14712, 25003, 11924};
    vector<int> B = {26724, 47462, 8698, 32449, 17954, 16880, 46707, 29290, 30999, 29393, 34958, 35269, 32508, 26765, 37372, 14276, 41820, 5569, 6100, 2638, 39495, 15492, 40850, 38970, 11802, 13380, 33206, 1148, 46498, 25582, 13944, 14289, 48045, 28478, 28391, 9476, 24700, 27674, 39133, 9470, 26752, 465, 23178, 7449, 37305, 41083, 14027, 10273, 47158};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4468368706658726E12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {12024, 31182, 27041, 47010, 39151, 15190, 31480, 30715, 1845, 9727, 22877, 48906, 6142, 32646, 5623, 29392, 21965, 10114, 19207, 31277, 27112, 8835, 2613, 30925, 29718, 27285, 38, 38406, 21011, 30534, 47867, 9041, 38738, 12774, 12188, 49879, 38824, 10956, 25566, 49191, 7205, 33534, 27802, 14509, 49199, 35845, 11737};
    vector<int> B = {29991, 22205, 25076, 7007, 3052, 30511, 26150, 49742, 23718, 36479, 2661, 20616, 2783, 21419, 2628, 18029, 38435, 21936, 15460, 39393, 36390, 25692, 17055, 20727, 27004, 4056, 30734, 43774, 11213, 1699, 31486, 43286, 45974, 42046, 40581, 1013, 44082, 41660, 13296, 31985, 30143, 12535, 43756, 24487, 10597, 557, 17222, 33639, 1894};
    int n = 49999;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.684943330552193E12;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {42274, 6648, 38692, 4017, 38942, 45051, 25578, 42318, 32858, 11827, 34382, 18836, 32364, 12869, 8141, 21301, 12711, 24528, 24685, 25820, 5881, 15693, 44459, 46420, 6590, 7099, 20025, 35872, 13203, 16243, 48162, 45694, 1455, 21657, 4585, 40252, 27331, 29534, 48408, 4027, 21700, 41501, 6681, 44304, 8138, 46823, 17898, 21020, 26531, 22763};
    vector<int> B = {22708, 34629, 34186, 32163, 3025, 22387, 19660, 24293, 48762, 26660, 34155, 29948, 13360, 38569, 43491, 49736, 24827, 17769, 26328, 33558, 36233, 25330, 32637, 31042, 21060, 33364, 3411, 43610, 49240, 48348, 28346, 36491, 25811, 3819, 33079, 7415, 7171, 48216, 3918, 27412, 1924, 47177, 26844, 46149, 5946, 4223, 30599, 31940, 34307};
    int n = 49997;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -7.367088155727168E11;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {14502, 38511, 15790, 45565, 6897, 35765, 21623, 28135, 11047, 6434, 37445, 42131, 15309, 36356, 1767, 44890, 24074, 44341, 13358, 13740, 18929, 7220, 36244, 10671, 1431, 2686, 21911, 39612, 2489, 45417, 27735, 25621, 14054, 36806, 47765, 39426, 36871, 18377, 6733, 7961, 31199, 15352, 33876, 49175, 37750, 5939, 1684, 11763, 34870, 45532};
    vector<int> B = {395, 30669, 28255, 46266, 11695, 14746, 32887, 18971, 40512, 24867, 22122, 3593, 33226, 48424, 46494, 46328, 24207, 38800, 5896, 9019, 38970, 15668, 3043, 21890, 41820, 1273, 27424, 12562, 10331, 17647, 22689, 16050, 6685, 29961, 29777, 11774, 46667, 27599, 44749, 45877, 20631, 24585, 12670, 18944, 44427, 5406, 14179, 43081};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -3.6302567941463706E12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {2661, 19968, 26049, 49790, 22915, 5359, 14086, 38742, 17360, 23605, 34607, 24834, 31107, 15907, 47948, 45991, 33855, 37529, 24928, 32431, 45017, 7250, 36406, 47959, 19045, 40906, 28898, 14870, 29776, 15141, 27190, 31916, 33291, 4859, 2952, 33297, 11825, 31440, 4667, 35788, 29692, 25176, 22257, 5511, 13022, 18023, 17881, 3373, 6769, 40091};
    vector<int> B = {49359, 48041, 1517, 12699, 7857, 16377, 40534, 42979, 38563, 30494, 30723, 191, 37369, 44163, 49270, 6529, 33734, 28472, 37179, 17345, 1241, 46376, 26232, 37540, 15003, 521, 21275, 6080, 40124, 28894, 44898, 24121, 12556, 45269, 12954, 6867, 19344, 44947, 39089, 8317, 11845, 19878, 47131, 3588, 27968, 11915, 42259, 34586};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -5.047051637996085E12;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {7266, 28725, 32896, 8667, 8212, 25653, 11728, 20322, 4503, 10270, 2418, 44197, 7996, 39911, 36872, 48501, 23981, 17116, 6106, 9211, 30634, 21600, 47712, 40970, 11306, 26745, 22107, 40188, 20651, 41776, 5151, 35538, 42502, 12148, 31027, 3478, 45842, 40310, 17069, 911, 14202, 17848, 41357, 20745, 9978, 7124, 48247, 10629, 44990};
    vector<int> B = {36247, 47495, 37842, 6734, 39102, 21132, 693, 7929, 14351, 41361, 13012, 22829, 20241, 17248, 502, 26616, 29622, 29756, 28079, 4116, 26258, 19689, 29188, 7908, 33541, 25576, 7738, 31214, 650, 25334, 20204, 46259, 36830, 19653, 38220, 25662, 27840, 17584, 24425, 13891, 32801, 28515, 29102, 14877, 14136, 14348, 10732, 14750, 12347};
    int n = 49997;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 7.652577588311531E12;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {36828, 21340, 20809, 39728, 49855, 30353, 47852, 14873, 17893, 21409, 24804, 38309, 39904, 32561, 28362, 49759, 1418, 31446, 16159, 10389, 44013, 188, 35204, 15961, 37306, 41677, 33221, 46622, 47803, 45652, 12238, 1587, 31635, 40703, 34054, 46428, 17270, 29380, 49382, 46562, 48506, 40274, 31262, 27299, 38520, 38451, 6158, 32109, 21436};
    vector<int> B = {24628, 31693, 13382, 30445, 1183, 5860, 29408, 23915, 17371, 19534, 27376, 7823, 26425, 7827, 10794, 24879, 10607, 33076, 14886, 26594, 19643, 48835, 44546, 957, 41600, 21619, 22246, 39685, 22211, 47295, 39938, 40628, 43202, 36270, 19794, 7403, 30890, 4853, 39923, 25466, 8364, 44527, 2899, 12654, 24360, 24199, 28071, 38513, 9290};
    int n = 49997;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4.540388713606496E12;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {42065, 35578, 33370, 25734, 19408, 2709, 44847, 47095, 34569, 18404, 48039, 8258, 47385, 5704, 3257, 29050, 15376, 31822, 21263, 38461, 37680, 48705, 14300, 6251, 33000, 47201, 10188, 22897, 46179, 36815, 48499, 29142, 15757, 10152, 9403, 6208, 32280, 18910, 46257, 14975, 13610, 28129, 6410, 34728, 27079, 35032, 35599, 18367, 2338};
    vector<int> B = {552, 42593, 29944, 6718, 25659, 19806, 21204, 22409, 33189, 29941, 9350, 19528, 6102, 31126, 48118, 25055, 8952, 37820, 5434, 14678, 16413, 46668, 39156, 25598, 24173, 24302, 19495, 37607, 6429, 32782, 40768, 49331, 12373, 41704, 49611, 24243, 8219, 12222, 23174, 41019, 15228, 36237, 37168, 17054, 26459, 7256};
    int n = 49998;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.418483608777647E12;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {30719, 28681, 37525, 3439, 434, 1742, 39884, 47952, 18947, 30636, 29934, 22607, 7264, 3507, 8721, 46607, 12668, 36406, 25926, 11681, 14034, 49641, 49526, 40115, 45704, 45537, 32535, 8953, 10679, 7396, 29987, 12545, 22012, 32832, 1238, 8944, 16683, 36224, 47639, 42691, 24501, 15912, 3215, 1705, 9278, 34338};
    vector<int> B = {44042, 46723, 10506, 32163, 6690, 37614, 2091, 31805, 841, 26658, 46377, 8027, 22199, 24318, 17211, 42375, 40128, 49383, 22099, 48062, 20150, 16249, 26367, 23202, 44811, 38746, 42656, 29556, 16275, 33870, 10842, 9439, 43814, 15445, 12057, 13481, 46032, 45334, 6745, 15011, 47984, 3143, 2999, 9343, 21960, 18084, 48080, 25071};
    int n = 49999;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -3.080051008888924E12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {21888, 30836, 44941, 29250, 11705, 8727, 44879, 21605, 42731, 16578, 42133, 16664, 47008, 4344, 36871, 28514, 28366, 33988, 23654, 45702, 47687, 33030, 46240, 6992, 49430, 25707, 43753, 7395, 24585, 8045, 19140, 36084, 34483, 33598, 40905, 40746, 16604, 45981, 4202, 5175, 115, 11255, 44521, 44095, 26610, 25211, 1386, 8841, 48527, 9421};
    vector<int> B = {41257, 19519, 17316, 36877, 38714, 30964, 42794, 27215, 12392, 2347, 7127, 3730, 12395, 19392, 6765, 24151, 36070, 2755, 30949, 4329, 47181, 926, 43486, 1156, 9587, 5901, 31980, 38461, 14797, 3165, 28555, 29596, 49710, 11440, 5095, 11157, 27665, 6781, 6607, 24851, 906, 24289, 3946, 28919, 47169, 19047, 45506, 15363, 2918, 19627};
    int n = 49998;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3918275665697407E12;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1};
    vector<int> B = {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0};
    int n = 49999;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5.493709153093309E12;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0};
    vector<int> B = {0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0};
    int n = 49999;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0642101684387495E12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1};
    vector<int> B = {1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0};
    int n = 49999;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -1.413009211412639E12;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {199, 67, 199, 12, 220, 31, 107, 32, 83, 17, 198, 199, 87, 154, 83, 97, 85, 158, 21, 245, 129, 227, 15, 172, 81, 149, 202, 84, 0, 197, 210, 222, 12, 229, 57, 224, 184, 78, 18, 20, 139, 186, 247, 215, 207, 202, 132};
    vector<int> B = {171, 19, 130, 218, 182, 170, 200, 29, 64, 42, 232, 246, 57, 237, 19, 18, 177, 147, 219, 161, 93, 126, 185, 216, 25, 85, 135, 111, 96, 130, 6, 35, 214, 180, 90, 53, 191, 93, 137, 234, 133, 53, 255, 9, 54, 181, 13, 96, 3};
    int n = 48;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 42388.375;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {195, 111, 160, 252, 109, 242, 185, 109, 162, 175, 143, 113, 33, 119, 102, 103, 80, 219, 102, 181, 186, 179, 27, 67, 139, 152, 244, 253, 22, 105, 196, 84, 80, 202, 68, 190, 82, 160, 142, 50, 219, 151, 163, 172, 204, 156, 231, 175};
    vector<int> B = {170, 99, 160, 190, 31, 226, 123, 226, 121, 212, 6, 40, 41, 56, 55, 31, 70, 207, 227, 94, 8, 161, 72, 252, 77, 120, 132, 22, 23, 100, 28, 77, 12, 53, 118, 70, 244, 4, 95, 40, 63, 171, 133, 33, 125, 72, 254};
    int n = 50;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 287295.68;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {191, 29, 205, 52, 38, 13, 55, 148, 113, 239, 66, 13, 69, 130, 182, 146, 40, 139, 122, 89, 7, 84, 29, 92, 177, 40, 80, 219, 89, 216, 106, 216, 24, 58, 227, 154, 104, 164, 217, 42, 171, 117, 142, 217, 162};
    vector<int> B = {140, 232, 185, 247, 207, 240, 31, 179, 166, 83, 39, 200, 126, 228, 48, 137, 70, 24, 92, 44, 245, 137, 17, 79, 2, 116, 123, 112, 234, 58, 7, 116, 173, 226, 234, 33, 82, 150, 152, 164, 95, 34, 77, 12, 97, 120, 135};
    int n = 50;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -12056.28;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> A = {138, 61, 142, 255, 219, 26, 101, 70, 197, 2, 141, 135, 216, 250, 37, 229, 101, 232, 82, 172, 3, 25, 189, 201, 13, 188, 19, 77, 33, 100, 133, 238, 162, 138, 70, 133, 55, 9, 15, 145, 74, 160, 158, 179, 139};
    vector<int> B = {116, 50, 48, 106, 139, 17, 115, 160, 82, 2, 136, 167, 24, 212, 161, 61, 145, 213, 149, 229, 84, 91, 92, 101, 92, 63, 149, 74, 139, 93, 0, 95, 34, 22, 4, 58, 75, 206, 42, 176, 144, 110, 159, 91, 97, 226};
    int n = 45;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 127403.4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {156, 100, 146, 217, 16, 195, 166, 84, 54, 144, 3, 1, 11, 173, 151, 69, 16, 159, 20, 102, 201, 17, 113, 17, 63, 79, 105, 213, 127, 203, 251, 166, 25, 156, 233, 91, 162, 250, 57, 48, 50, 196, 183, 68, 231, 250, 112, 28, 96, 67};
    vector<int> B = {56, 30, 66, 104, 37, 23, 183, 215, 18, 182, 234, 33, 30, 15, 140, 124, 42, 25, 83, 66, 94, 48, 117, 112, 164, 147, 49, 40, 44, 231, 70, 47, 231, 179, 122, 112, 12, 226, 21, 119, 149, 68, 99, 246, 194, 12, 54, 68};
    int n = 47;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 137916.06382978722;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {34, 3245, 2534, 53, 53, 46, 346, 246, 346, 2, 624, 624, 6, 245, 6324, 6542, 624, 6};
    vector<int> B = {345, 234, 523, 4624, 6, 2456, 345, 634, 634, 7, 3457, 376, 34, 6234, 62, 523, 52, 35, 32};
    int n = 7;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -9713701.714285715;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {34, 3245, 2534, 53, 53, 46, 346, 246, 346, 2, 624, 624, 6, 245, 6324, 6542, 624, 6};
    vector<int> B = {345, 234, 523, 4624, 6, 2456, 345, 634, 634, 7, 3457, 376, 34, 6234, 62, 523, 52, 35, 32};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3.554157166328439E12;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {49998, 49997, 49996, 49995};
    vector<int> B = {49997, 49990, 49996, 49995};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -6.233876919701828E10;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {1};
    vector<int> B = {49998, 49998};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -2.5395092429469086E13;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {0};
    vector<int> B = {49998};
    int n = 1;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -2.499800004E9;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {1, 5, 4, 4, 4, 4, 8, 6, 111, 551, 12, 51, 512, 512, 66, 7, 2, 34, 5, 3, 346};
    vector<int> B = {1, 2, 4, 5, 6, 7, 7, 1};
    int n = 77;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3986245.922077922;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {1, 2, 3, 4};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {511};
    vector<int> B = {213};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 208001.616;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {1, 2, 3, 4};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1873353775805095E12;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {13, 27, 84, 46};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -8.913384772085927E11;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {1, 3, 4, 100, 1000, 200, 4, 6, 7};
    vector<int> B = {12, 23, 45, 67};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -2.1027388486532253E12;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> A = {1, 2, 3, 4, 5, 3424, 43, 345};
    vector<int> B = {343, 23, 2134, 23, 43532};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -6.152359735381179E11;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> A = {1, 3, 7, 11, 13};
    vector<int> B = {17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    int n = 49876;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -2.216667787181693E12;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> A = {1};
    vector<int> B = {2};
    int n = 50000;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = -22.99956;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> A = {45, 35, 236, 2342, 5543, 21, 32, 2, 6, 23, 24, 23, 41, 1};
    vector<int> B = {2345, 45, 2345, 345};
    int n = 50;
    RandomFights* pObj = new RandomFights();
    clock_t start = clock();
    double result = pObj->expectedNrOfPoints(A, B, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2721986164E8;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=10659&pm=7384
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <iterator> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
class RandomFights { 
public: 
   vector<int> decode( vector<int> X, int n ) 
   { 
      vector<int> R(n); 
      int j = 0; 
      int m = X.size(); 
      for ( int i=0; i<n; ++i ) { 
         R[i] = X[j]; 
         int s = (j+1)%m; 
         X[j] = ( ( X[j] ^ X[s] ) + 13 ) % 49999; 
         j = s; 
      } 
      return R; 
   } 
 
   long double expected( const vector<int> &A, const vector<int> &B ) 
   { 
      int n = A.size(); 
      vector<long double> cumb(n+1), cumb2(n+1); 
 
      cumb[0] = cumb2[0]; 
      for ( int i=0; i<n; ++i ) { 
         cumb[i+1] = cumb[i] + B[i]; 
         cumb2[i+1] = cumb2[i] + (double)B[i]*B[i]; 
      } 
 
      long double ret = 0; 
      for ( int i=0; i<n; ++i ) { 
         int a = A[i]; 
         int winb = distance( B.begin(), lower_bound( B.begin(), B.end(), a ) ); 
         ret += 
            (long double)winb * a*a - 
            (long double)2 * a*cumb[winb] + 
            cumb2[winb]; 
      } 
      return ret; 
   } 
       
   double expectedNrOfPoints( vector <int> inputA, vector <int> inputB, int n ) { // caret here 
      vector<int> 
         A = decode( inputA, n ), 
         B = decode( inputB, n ); 
 
      sort( A.begin(), A.end() ); 
      sort( B.begin(), B.end() ); 
 
      return (double)( expected( A, B ) - expected( B, A ) ) / n; 
   } 
}; 
 
 
  
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/