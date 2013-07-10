/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11784
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

class MagicalGirl {
public:
    double maxExpectation(int M, vector<int> day, vector<int> win, vector<int> gain);
};

double MagicalGirl::maxExpectation(int M, vector<int> day, vector<int> win, vector<int> gain) {
    double ret;
    return ret;
}


int test0() {
    int M = 2;
    vector<int> day = {1};
    vector<int> win = {75};
    vector<int> gain = {1};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int M = 10;
    vector<int> day = {5, 5, 5, 5};
    vector<int> win = {100, 100, 100, 100};
    vector<int> gain = {1, 1, 1, 1};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int M = 10;
    vector<int> day = {5, 5, 5, 5, 5};
    vector<int> win = {40, 80, 60, 20, 0};
    vector<int> gain = {10, 10, 10, 10, 10};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int M = 2;
    vector<int> day = {2};
    vector<int> win = {100};
    vector<int> gain = {2};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int M = 20;
    vector<int> day = {2, 13, 8, 7, 9, 4, 6, 21};
    vector<int> win = {18, 83, 75, 23, 45, 23, 10, 98};
    vector<int> gain = {10, 9, 8, 10, 7, 16, 13, 20};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 35.908;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int M = 11;
    vector<int> day = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 101.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int M = 100000;
    vector<int> day = {1000000};
    vector<int> win = {100};
    vector<int> gain = {100000};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int M = 30763;
    vector<int> day = {224108, 341283, 950560, 479251, 2705231, 3398309, 2018285, 2531359, 4999456, 4989161, 965440, 3869826, 1830670, 95555, 1101959, 948705, 2729528, 3598967, 3765364, 4593715, 4432836, 1358863, 1177103, 4725059, 314250, 2095017, 985921, 3179873, 4817382};
    vector<int> win = {92, 56, 39, 66, 9, 76, 75, 32, 59, 72, 83, 29, 79, 26, 80, 64, 67, 89, 4, 75, 65, 31, 16, 5, 38, 15, 6, 62, 96};
    vector<int> gain = {214, 14108, 26950, 6828, 12799, 16625, 6787, 3149, 29656, 29513, 10118, 30485, 19340, 27556, 13267, 11806, 18671, 10086, 23991, 17664, 18610, 2220, 23574, 20978, 27984, 14903, 21843, 24705, 21336};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 30763.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int M = 4171;
    vector<int> day = {246454, 4674565, 2459180, 2248443, 617094, 429545, 4440836, 4255831, 4793834, 1304529, 2120720, 3192617};
    vector<int> win = {77, 39, 18, 53, 47, 10, 19, 33, 29, 48, 84, 23};
    vector<int> gain = {548, 341, 3027, 4024, 607, 2508, 3275, 2169, 1789, 2930, 2924, 131};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4171.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int M = 17950;
    vector<int> day = {2370404, 2375079, 3940428, 4824971, 1439100, 3640559, 290348, 1732039, 3759233, 2074569, 4624531, 1270205, 827856, 3256788, 4242354, 759899, 4736079, 3881376, 3341745, 1633460, 3277157, 3139121, 4020791, 4298253, 3596542, 1240911, 4152835, 3010498, 4097096, 1917001, 2400119, 4659346, 92872, 2672510, 94919, 4343359, 30821, 4872114, 3244158, 4968319, 618924, 92671, 2598106, 3963598, 2656091, 2297169};
    vector<int> win = {30, 47, 31, 29, 2, 60, 84, 63, 82, 42, 36, 50, 19, 93, 39, 22, 0, 82, 88, 87, 74, 61, 34, 26, 44, 39, 73, 65, 100, 50, 92, 46, 16, 87, 72, 29, 19, 74, 10, 69, 22, 70, 63, 50, 52, 66};
    vector<int> gain = {14175, 7408, 2570, 14768, 3755, 1551, 3450, 1122, 12082, 9944, 12390, 15846, 17639, 17284, 13252, 7437, 2592, 2172, 5393, 14988, 15505, 7395, 575, 5181, 4630, 17916, 1604, 13850, 3590, 2965, 1729, 7259, 5852, 14959, 357, 12942, 3740, 17112, 3425, 4429, 8824, 14746, 17593, 2503, 13429, 4936};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 17950.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int M = 30013;
    vector<int> day = {1885602, 3662382, 993702, 4523747, 1060978, 1947435, 313390, 1195095, 2400028, 1488449, 3022771, 4250208, 953452, 3940777, 1511521, 1794472, 3307075, 489616, 4543163, 909455};
    vector<int> win = {37, 46, 77, 13, 2, 71, 41, 1, 26, 38, 50, 39, 16, 83, 6, 66, 15, 17, 78, 58};
    vector<int> gain = {6300, 28632, 112, 1041, 27961, 5729, 22641, 19222, 13175, 20371, 26047, 4416, 29323, 619, 7420, 28288, 9240, 12217, 22552, 631};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 30013.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int M = 22958;
    vector<int> day = {306840, 4480956, 3090741, 1976729, 2396761, 3859845, 4012196, 1952406, 18967, 2602870, 2040600, 2459751, 24170};
    vector<int> win = {44, 44, 4, 96, 42, 62, 88, 22, 94, 13, 60, 63, 94};
    vector<int> gain = {14125, 18127, 7978, 14207, 8614, 15300, 8953, 11337, 987, 15070, 17679, 16065, 9356};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 23646.32;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int M = 83699;
    vector<int> day = {4279829, 2650193, 2186631, 4807118, 2121901, 1379739, 2571610, 3920638, 408020, 945843, 1926698, 1980496, 505816, 4759323, 4567033, 1661259, 4442748, 1266748, 2784106, 3195207, 1498375};
    vector<int> win = {82, 91, 30, 69, 29, 8, 44, 39, 85, 41, 48, 32, 98, 23, 51, 49, 82, 11, 8, 45, 40};
    vector<int> gain = {28919, 10039, 64964, 11292, 41830, 77260, 47330, 65055, 41357, 60422, 65614, 24741, 50868, 21785, 38787, 47657, 41830, 63389, 81258, 65191, 62811};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 83699.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int M = 79288;
    vector<int> day = {2448183, 2118242, 1266663, 3421217, 171510, 2125178, 252256, 967050, 115787, 1264169, 984277, 376073, 2128556, 4752528, 970093, 2519427, 840574};
    vector<int> win = {68, 41, 53, 23, 20, 70, 62, 25, 22, 61, 55, 35, 5, 11, 7, 2, 49};
    vector<int> gain = {25068, 68127, 50825, 62723, 31622, 49148, 68026, 9293, 5592, 33934, 32578, 45533, 56586, 64126, 73130, 10774, 53821};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 79288.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int M = 91464;
    vector<int> day = {4888114, 3287141};
    vector<int> win = {73, 85};
    vector<int> gain = {36653, 47886};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 91464.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int M = 63817;
    vector<int> day = {757615, 955284, 3227207, 3923214, 1707078, 1463617, 997679, 1056129, 2886546, 1152179, 4124680, 4509989, 4515504, 1956476, 4243796, 2863517, 3856208, 411136, 4434307, 4329970, 197750, 3816218, 1136381, 1463566, 3697612, 2930375, 863597, 189395, 341151, 1699817, 70016, 2572498, 2645806, 4505206, 4703674, 3860436, 962622, 1281575, 3182913, 1957173, 2022040, 3176809, 2426991, 3058916};
    vector<int> win = {21, 25, 61, 10, 30, 91, 18, 5, 29, 30, 20, 86, 99, 37, 25, 55, 41, 35, 24, 70, 29, 45, 76, 55, 1, 93, 72, 43, 41, 79, 14, 65, 41, 62, 73, 87, 50, 38, 68, 21, 75, 78, 88, 43};
    vector<int> gain = {30056, 27877, 33488, 1224, 27960, 38844, 28550, 34056, 29148, 28020, 47601, 61298, 51812, 14790, 38193, 6341, 23646, 51354, 29661, 2157, 4140, 5546, 42063, 40304, 3871, 7981, 33935, 16766, 18512, 1815, 5327, 60243, 39613, 42323, 18981, 46052, 49372, 52274, 23740, 5174, 18671, 54584, 4088, 2069};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 63817.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int M = 42173;
    vector<int> day = {3195044, 3410538, 2674623, 1690796, 744289, 909482, 1191706, 1311675, 2884644, 3057251, 1638362, 1706473, 3155518, 1568251, 4999590, 2597489, 817687, 5568, 1665413, 141633, 77514, 1683633, 829749, 2212777, 1077860, 2007312, 2239077, 1290800, 2908809, 456166, 3960122, 113822, 1771855, 2489407, 1608862, 4444371, 3840961, 2868970};
    vector<int> win = {37, 28, 99, 81, 33, 64, 6, 40, 57, 45, 36, 68, 93, 79, 13, 51, 32, 67, 86, 75, 30, 2, 60, 42, 37, 89, 62, 77, 82, 5, 21, 8, 4, 59, 61, 48, 76, 83};
    vector<int> gain = {27760, 24494, 7278, 40405, 33435, 4950, 18085, 22950, 12672, 38287, 25577, 31614, 37225, 21249, 6282, 2358, 5849, 18675, 35660, 8176, 17263, 4373, 5504, 13447, 33819, 32924, 1226, 544, 26155, 23924, 7481, 25416, 19044, 17744, 33865, 34790, 2967, 1672};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 42173.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int M = 68035;
    vector<int> day = {3091319, 449680, 240819, 511439, 1540051, 4519403, 950256, 2360137, 3948184, 151333};
    vector<int> win = {64, 90, 71, 24, 50, 77, 94, 88, 25, 26};
    vector<int> gain = {48171, 27146, 32965, 629, 60146, 48480, 64008, 7461, 34059, 8616};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 68035.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int M = 62965;
    vector<int> day = {3664651, 1166739, 4154207, 1833900, 47996, 2813266, 2570176, 1491645, 1631100, 3984941, 479819, 1462506, 3302450, 4980686, 4525271, 2123649, 510710, 2128165, 2453202, 2911395, 1514346, 3535861, 128173, 4491734, 2157022, 2186487, 4421163, 969396, 622026, 2095110, 4964965, 921018, 2460329, 2864594, 3101529};
    vector<int> win = {100, 64, 81, 10, 10, 27, 43, 4, 38, 35, 43, 55, 48, 41, 35, 77, 9, 27, 16, 34, 51, 9, 93, 33, 75, 76, 13, 6, 82, 13, 53, 84, 54, 72, 43};
    vector<int> gain = {17067, 38712, 672, 62463, 43793, 44738, 34094, 21920, 46703, 28478, 29476, 14135, 58676, 12228, 32772, 32886, 58331, 2707, 35876, 57219, 48178, 35948, 62754, 58051, 20066, 24509, 24291, 48920, 45595, 57407, 12090, 4915, 26331, 8683, 58622};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 62965.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int M = 44081;
    vector<int> day = {341970, 2970923, 359801, 2451044};
    vector<int> win = {74, 5, 13, 22};
    vector<int> gain = {2441, 41139, 40347, 38361};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 44081.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int M = 15994;
    vector<int> day = {2680843, 2954242, 3137196, 4329975, 657216, 1644388, 390767, 2889952, 1840889, 922237, 1488132, 2515369, 3313608, 1982351, 1012687, 4203796, 77239, 3743887, 4000874, 3840712, 3048720};
    vector<int> win = {10, 64, 49, 54, 12, 20, 92, 94, 47, 35, 57, 67, 43, 44, 39, 14, 53, 60, 38, 15, 87};
    vector<int> gain = {13302, 13593, 4637, 14773, 2118, 3347, 126, 1890, 2897, 8951, 6721, 10466, 1508, 2872, 12955, 3007, 14822, 2416, 9240, 9459, 4978};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 15994.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int M = 28406;
    vector<int> day = {3572740, 4711277, 3469766, 3832310, 2582498, 4676226, 205736, 4494917, 3040242};
    vector<int> win = {64, 2, 100, 64, 44, 32, 92, 8, 77};
    vector<int> gain = {5845, 2845, 6385, 17125, 14214, 10186, 13414, 10359, 13204};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 28406.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int M = 10898;
    vector<int> day = {4735763, 4350174, 3282605, 432474, 3140790, 127208, 4406032, 2735690, 2831103, 1303907, 3838030, 222897, 3007312, 3598125, 2326698, 4355649, 219135};
    vector<int> win = {95, 76, 5, 3, 91, 35, 33, 86, 42, 76, 40, 95, 79, 47, 15, 20, 6};
    vector<int> gain = {7863, 10792, 633, 8561, 3122, 1795, 5023, 5847, 10477, 8791, 8294, 5697, 7665, 2927, 8463, 1287, 8019};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 10898.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int M = 51862;
    vector<int> day = {1961586, 2693990, 1473238, 714809, 3801166, 799286, 1031788, 2898247};
    vector<int> win = {69, 15, 38, 69, 42, 37, 79, 8};
    vector<int> gain = {19794, 13146, 6618, 20439, 32821, 2972, 46872, 29979};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 51862.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int M = 10099;
    vector<int> day = {2420795, 324675, 3992848, 1492459, 4497505, 3434119, 1689979, 3713251, 752950, 4057531, 1206467, 903445, 3046407, 1304703, 2899078, 2662246, 337396, 1732249, 3472360, 3496173};
    vector<int> win = {59, 55, 86, 33, 82, 29, 2, 95, 62, 47, 76, 75, 64, 11, 91, 57, 45, 65, 96, 85};
    vector<int> gain = {5775, 1102, 1602, 5654, 10081, 462, 94, 747, 191, 163, 6984, 2435, 6365, 3698, 7468, 419, 3181, 1549, 8997, 5251};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 10099.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int M = 13239;
    vector<int> day = {1533769, 1657623, 1838367, 46120, 3631327, 4899917, 3700576, 2708363, 1842306, 2247528, 4535337, 2277944, 4889212, 328392, 3215784, 2219983, 1025867, 4732897, 779150, 3020054, 3543266, 4320058, 1660830};
    vector<int> win = {48, 71, 99, 78, 44, 84, 8, 56, 72, 77, 25, 49, 20, 39, 45, 97, 52, 30, 30, 7, 94, 39, 93};
    vector<int> gain = {2843, 6741, 12401, 11325, 690, 11835, 7651, 3714, 11815, 8682, 5176, 5786, 7503, 1118, 9429, 2205, 10231, 7164, 5806, 10149, 12755, 6018, 5963};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 13239.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int M = 81755;
    vector<int> day = {2275888, 2716322, 2472334, 4286341, 786150, 1738717, 3366124, 1286227, 1564016, 2551896, 2456957, 2632673, 4822324, 753300, 4788041, 1082643, 3176444, 1774298, 1525114, 139444, 3291909, 179762, 281889, 2459438, 351680, 1653629, 4716369, 1051795, 2483669};
    vector<int> win = {91, 88, 87, 13, 92, 51, 49, 44, 59, 18, 56, 65, 89, 47, 30, 84, 7, 90, 59, 82, 17, 16, 89, 97, 18, 50, 47, 49, 47};
    vector<int> gain = {47313, 78466, 79959, 59698, 39000, 53837, 11788, 68837, 38505, 26780, 10677, 18361, 55030, 50928, 57474, 7415, 4258, 77881, 72406, 26381, 57147, 13844, 75605, 80957, 77741, 2589, 13405, 81172, 45901};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 81755.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int M = 40705;
    vector<int> day = {1364629, 4792547, 2361381, 3112860, 679730, 4750702, 4064356, 4747362, 4127555, 149855, 173173, 1544753, 4170053, 3777815, 4980437, 4326923, 2509813, 2001288, 2010260, 959047, 1971014, 2159290, 2467862, 4608653, 1926606, 3613418, 3262822, 1316028, 4799769, 3051142, 401326, 4864244, 2012053, 1335970, 985920, 2279452, 4009636, 1144470};
    vector<int> win = {88, 25, 46, 91, 92, 13, 92, 75, 17, 19, 48, 99, 36, 55, 48, 56, 93, 33, 48, 16, 9, 82, 8, 27, 67, 63, 52, 96, 93, 76, 65, 74, 35, 0, 72, 33, 31, 41};
    vector<int> gain = {11638, 17501, 26435, 1903, 8000, 2257, 24917, 40254, 35516, 38609, 3837, 16147, 35532, 35906, 33600, 35354, 15879, 37366, 31035, 17709, 13376, 36725, 20066, 18851, 9641, 26349, 32593, 27192, 23813, 9116, 24750, 26452, 35672, 36913, 24589, 25578, 38945, 32541};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 40705.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int M = 22532;
    vector<int> day = {2515475, 4080362, 1172122, 930577, 4686247, 1997472, 2309440};
    vector<int> win = {36, 95, 82, 85, 67, 33, 56};
    vector<int> gain = {18269, 9342, 14865, 19652, 8721, 14101, 17906};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 22532.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int M = 50672;
    vector<int> day = {858739, 1432687, 4973925, 2726432, 2810723, 1830006, 241286, 931808, 1374473, 3359874, 748125, 798759, 4105294, 1674777, 340437, 4534944, 128958, 391751, 2309501, 3992341, 2506205, 4631146, 3865881, 3509768, 652399, 4832885, 1613681, 4010558, 1423614, 3111725, 3731665, 1454958, 2214488, 541711, 2084631, 1826006, 3089102, 439623, 4689337, 3871190, 1554886, 602090};
    vector<int> win = {46, 55, 77, 23, 74, 34, 92, 60, 34, 80, 19, 31, 21, 55, 8, 72, 60, 11, 13, 29, 18, 96, 71, 12, 32, 75, 81, 91, 80, 58, 45, 83, 47, 29, 25, 18, 94, 40, 56, 19, 79, 86};
    vector<int> gain = {24035, 5170, 22438, 43570, 2314, 10906, 28360, 47090, 2504, 32730, 47564, 50247, 45131, 42781, 11441, 45181, 30948, 6338, 25082, 2918, 10442, 49146, 48992, 598, 10485, 46141, 7389, 25573, 34851, 9285, 7491, 22320, 38902, 40722, 17603, 23784, 8675, 31413, 25110, 41409, 38373, 32548};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 50672.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int M = 28079;
    vector<int> day = {4656249, 4702908, 1390984, 3840846, 4530192, 4210474, 3250889, 4992895, 3191807, 1540257, 1247620, 831644, 2971410, 2228120, 72196, 1142830, 1040261, 226649, 3576312, 3739760, 4485065, 4679459, 4162052, 2414756, 2649334, 3372985, 2751056, 3595135, 3657763, 4408977};
    vector<int> win = {53, 29, 96, 15, 32, 24, 95, 1, 52, 28, 89, 59, 6, 94, 96, 32, 4, 79, 37, 77, 64, 89, 47, 54, 6, 23, 85, 76, 78, 2};
    vector<int> gain = {22043, 11996, 13515, 18001, 13401, 8361, 9588, 98, 11680, 6260, 18513, 20308, 5748, 10697, 5573, 23265, 8278, 18937, 21220, 15695, 19786, 16615, 14106, 25435, 25279, 8549, 8740, 19850, 27287, 13765};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 28079.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int M = 43124;
    vector<int> day = {863551, 1118816, 3445605, 2613075, 497684, 88086, 3732246, 4659895, 31971, 3054049, 4750112, 2127441, 246707, 3262677, 2014522, 3722582, 537020, 3850231, 2696079, 325518, 4347116, 1006867, 1580129, 4594806, 2002005, 1846470, 2227985, 4021567, 948861, 4294612, 3096729, 4809934, 1354173, 4292115, 789250, 647754, 3950531, 2281198, 1276702, 4631393, 455808, 228931};
    vector<int> win = {79, 27, 80, 14, 99, 31, 21, 6, 22, 72, 66, 57, 31, 13, 27, 20, 20, 84, 56, 28, 39, 1, 56, 25, 54, 17, 10, 12, 39, 97, 6, 42, 2, 84, 75, 42, 68, 29, 77, 51, 99, 63};
    vector<int> gain = {12314, 14663, 4649, 17427, 38555, 7074, 38782, 9476, 38164, 1957, 5483, 5277, 7642, 12140, 29089, 6770, 8749, 24760, 35883, 12416, 40593, 3653, 24717, 27451, 3380, 18813, 13494, 37739, 8, 20454, 9789, 20434, 41074, 34220, 1484, 41836, 39884, 24897, 23928, 39018, 23087, 26755};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 43124.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int M = 58698;
    vector<int> day = {779338, 3870105, 786291, 1296900, 4102385, 4761715, 2095040, 1261221, 4528710, 4340341, 1345497, 3010960, 827600, 1694852, 4506903, 4560586, 2171959, 2059349, 178725, 4411147, 2827018, 2425076, 135651, 1076992, 2362681, 1186414, 4328819, 3915515, 2542571, 3690983, 77311, 2264830, 131801, 1735525, 3856497, 3574484, 2402065, 49731, 3278793, 3038552, 3855284, 3513088, 4919130, 2626235, 4863048, 4985821, 3261133, 2048690, 4955687};
    vector<int> win = {25, 50, 62, 69, 41, 62, 40, 41, 16, 84, 45, 74, 63, 81, 58, 97, 84, 41, 39, 28, 78, 27, 35, 59, 15, 17, 70, 41, 25, 21, 62, 54, 25, 43, 89, 53, 19, 92, 94, 67, 70, 49, 12, 35, 52, 11, 1, 35, 76};
    vector<int> gain = {41193, 15090, 45711, 48184, 4358, 19335, 56765, 16516, 27721, 8966, 44370, 23307, 33252, 57806, 8346, 41055, 10552, 31196, 57284, 24716, 4865, 27186, 14306, 6276, 12048, 44077, 26384, 14331, 18808, 11216, 38518, 39691, 55074, 12346, 47172, 6675, 13325, 50052, 6489, 25879, 39897, 17537, 43993, 43033, 44815, 1114, 53972, 47163, 42841};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 116141.48897199999;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int M = 17109;
    vector<int> day = {1844217, 2660521, 1002751, 2429233, 4066362, 1101274, 527770, 1169245, 4574991, 2301417, 4176867, 53577, 813836, 2543267, 3131281, 3223027, 1734525, 3357735, 370034, 666332, 2396193, 3120425, 479447, 3955146, 4499193, 1746112};
    vector<int> win = {39, 40, 14, 35, 8, 20, 40, 87, 23, 42, 48, 78, 30, 6, 68, 38, 92, 26, 98, 50, 83, 38, 90, 29, 72, 9};
    vector<int> gain = {5013, 11143, 3159, 10266, 6793, 4699, 9322, 14414, 14102, 15424, 15435, 15148, 6825, 10015, 9949, 10977, 4464, 9366, 7546, 9156, 9918, 13086, 13408, 2128, 8909, 5455};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 17109.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int M = 50073;
    vector<int> day = {2596863, 3983648, 3545605, 450681, 4871886, 3892010, 168802, 4042997, 4791180};
    vector<int> win = {53, 94, 3, 56, 62, 31, 52, 43, 77};
    vector<int> gain = {13530, 26663, 31615, 40864, 16866, 25420, 13609, 19797, 9116};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 50073.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int M = 62402;
    vector<int> day = {2601306, 4865371, 1160911, 976219, 4375185, 3761164, 1518295, 1190678, 4980278, 3881522, 2322779, 3714210, 3715894, 1999920, 1782457, 4461989};
    vector<int> win = {5, 8, 82, 17, 11, 4, 26, 46, 78, 69, 16, 16, 0, 80, 92, 5};
    vector<int> gain = {55173, 27428, 31722, 60576, 17038, 54376, 20418, 40517, 37031, 18369, 46059, 34491, 51773, 41171, 28903, 17625};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 62402.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int M = 3862;
    vector<int> day = {4794423, 2975054, 3049219, 3479396, 61554, 2429921, 4892880, 1413894};
    vector<int> win = {33, 52, 43, 40, 46, 97, 95, 34};
    vector<int> gain = {2560, 423, 2849, 3483, 2444, 778, 611, 1171};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 3862.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int M = 92348;
    vector<int> day = {3795531, 4854608, 4959059, 1423605, 1654328, 296332, 4448095, 1034559, 549754, 2897480, 2891104, 1028931, 2093979, 2038872, 4637088, 2702648, 2252261, 2197525, 715438, 2376807, 4727096, 2273596, 620649, 4987920, 2423063, 4639901, 2697305, 650996, 3204699, 3039821, 1020838, 2943516, 2762927, 4275012, 3907935, 1895632, 170499, 2545968, 3259332, 4235105, 2112777, 576224, 2910108, 3665696, 514139, 3422810, 3873440};
    vector<int> win = {98, 97, 97, 98, 100, 97, 97, 97, 98, 96, 100, 99, 100, 99, 98, 96, 99, 97, 95, 99, 100, 100, 100, 97, 98, 98, 96, 98, 98, 97, 95, 99, 100, 99, 99, 100, 95, 98, 96, 100, 99, 96, 96, 97, 97, 98, 100};
    vector<int> gain = {90821, 36924, 70976, 61572, 34207, 29630, 22561, 27510, 25587, 91426, 33284, 39955, 86192, 68163, 25779, 90015, 64915, 9835, 16835, 35783, 31282, 52292, 63803, 2728, 64478, 28802, 24387, 35398, 91769, 49535, 32950, 13086, 26725, 56202, 51256, 34472, 18699, 13625, 91181, 10265, 83973, 39098, 57180, 48046, 48173, 7786, 70332};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 92348.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int M = 91681;
    vector<int> day = {3070805, 2981878, 3767786, 560719, 1001080, 4197717, 133566, 2288912, 3378263, 2332037, 21136, 3920298, 1781959, 1040525, 3675941, 3879781, 1580254, 4722969, 583253, 3955072, 871621, 4778697, 3499358, 2294572, 799853, 3615663, 2016831, 3152574, 2002455, 60245, 1601150, 3002576, 659306, 322821, 4152467, 3240672, 1408177, 4721295, 3257642, 1022591, 2631579, 1861031, 1967444, 2432515, 1736009, 842100, 264007, 915542, 1289764};
    vector<int> win = {100, 99, 99, 98, 97, 99, 98, 98, 98, 99, 95, 97, 98, 97, 98, 96, 96, 96, 95, 97, 99, 98, 95, 99, 97, 97, 100, 96, 97, 96, 99, 100, 96, 99, 100, 95, 97, 95, 97, 97, 98, 98, 100, 98, 96, 98, 95, 99, 98};
    vector<int> gain = {74222, 4745, 52571, 48338, 48601, 7843, 18050, 85628, 71947, 90500, 29842, 65347, 39541, 54328, 71132, 15510, 63231, 36588, 5018, 71249, 78877, 81446, 20754, 80931, 63933, 65503, 82478, 83724, 38857, 54678, 78864, 14632, 70563, 88426, 27826, 25166, 90542, 84927, 81814, 83752, 91459, 38965, 39800, 81015, 37679, 25743, 78497, 74742, 88574};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 159650.2544;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int M = 94843;
    vector<int> day = {1581187, 4236800, 2366167, 1819549, 760650, 1090691, 3705715, 2817330, 787587, 131574, 1556339, 3530933, 503163, 4308532, 1893237, 530063, 1352706, 1890600, 4351723, 2432416, 3810554, 2011204, 1467737, 124617, 52395, 3250075, 3721386, 3534499, 51073, 4184183, 352875, 4399606, 3781580, 4796148, 2021471, 3608291, 3862287, 62291, 2014089, 2019179, 2436434, 3569240, 2073525, 1415989, 1098784};
    vector<int> win = {98, 98, 98, 97, 100, 98, 98, 97, 100, 97, 99, 99, 98, 100, 100, 97, 95, 96, 96, 95, 97, 98, 95, 98, 98, 96, 96, 96, 98, 97, 96, 98, 96, 98, 95, 98, 95, 98, 98, 96, 95, 100, 95, 100, 99};
    vector<int> gain = {33829, 32924, 4568, 87853, 83832, 92567, 15355, 72856, 64063, 51301, 75397, 27838, 28440, 82072, 86072, 32307, 59604, 92369, 48180, 73221, 10590, 44516, 6518, 43640, 62497, 36222, 36332, 73059, 73827, 77787, 36048, 14279, 43263, 57911, 56162, 40546, 38127, 69839, 13328, 76955, 19405, 22109, 27992, 85435, 50710};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 218406.58348399997;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int M = 96778;
    vector<int> day = {2367331, 3215211, 4625651, 3198454, 2970090, 4866191, 146401, 341928, 3696075, 720619, 2080392, 366544, 4305832, 1676195, 131613, 3287446, 19460, 733571, 3731270, 420804, 2022009, 80134, 4982460, 4166491, 1247428, 1763887, 4192336, 384398, 4740003, 2052660, 4117731, 600837, 1295886, 567870, 2944893, 1154747, 3139947, 2864075, 2911159, 2015056, 657191, 2828780, 2605648, 3585081, 4640580, 2250183};
    vector<int> win = {96, 97, 100, 95, 100, 99, 96, 97, 96, 99, 97, 98, 99, 98, 95, 95, 95, 98, 99, 95, 98, 99, 100, 100, 97, 95, 96, 100, 98, 97, 99, 98, 95, 95, 96, 96, 99, 99, 100, 97, 99, 96, 99, 95, 100, 95};
    vector<int> gain = {49137, 73075, 89481, 36218, 31088, 95784, 75736, 87934, 87527, 57118, 65224, 93272, 15799, 54906, 70273, 10040, 35802, 77026, 39896, 17850, 27657, 92795, 50110, 13049, 58999, 82664, 44457, 53453, 84853, 48822, 22452, 5468, 79671, 18895, 86299, 21120, 75515, 20999, 66534, 92238, 57161, 41, 49844, 1461, 69082, 85607};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 237716.1412;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int M = 95001;
    vector<int> day = {2459040, 1378370, 44709, 3802196, 1562641, 2474271, 115021, 4612619, 3320175, 2330340, 517271, 1984430, 1906919, 3905012, 2541873, 2830113, 1560664, 3797027, 2017712, 2482444, 3894311, 251963, 2729720, 359450, 4864429, 2650713, 1139941, 4789180, 4598199, 737601, 984374, 383924, 2228469, 4770886, 3942221, 1007019, 3983356, 2003539, 278160, 4624811, 2127797, 1391941, 2501483, 2256565, 1251963};
    vector<int> win = {100, 95, 96, 96, 95, 100, 98, 95, 99, 99, 97, 98, 96, 97, 96, 97, 99, 95, 100, 97, 98, 99, 99, 95, 95, 100, 96, 100, 97, 97, 97, 98, 100, 95, 98, 95, 98, 99, 95, 95, 97, 95, 96, 96, 100};
    vector<int> gain = {80556, 65477, 53937, 52826, 82450, 54968, 72828, 47375, 56640, 79841, 10819, 31872, 62243, 75966, 15135, 41809, 4863, 59919, 24325, 29612, 83863, 54982, 27463, 33964, 8436, 87498, 55745, 85951, 2858, 45166, 57830, 42648, 34259, 8483, 93205, 23288, 33298, 11040, 60573, 79536, 4035, 15181, 48891, 34311, 14218};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 201585.46080000003;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int M = 99026;
    vector<int> day = {393975, 1611749, 3215877, 2775102, 4402556, 10151, 4391608, 1504752, 940437, 1686832, 4467271, 2302228, 1766284, 1698184, 4595070, 2271332, 842860, 790952, 127084, 3835883, 434074, 190784, 4730740, 1884154, 2232713, 407010, 20527, 4249094, 619524, 3832148, 3424423, 426488, 200840, 1119346, 2601037, 1645067, 1005847, 3314537, 3921461, 1152866, 3430711, 2270382, 1033525, 1233823, 4754656, 406613, 2096761, 3401261};
    vector<int> win = {98, 100, 100, 95, 97, 100, 98, 97, 98, 96, 100, 100, 97, 99, 95, 96, 96, 99, 100, 97, 98, 99, 99, 100, 96, 96, 100, 95, 95, 97, 95, 99, 95, 99, 95, 98, 100, 100, 99, 98, 100, 97, 98, 99, 98, 96, 95, 97};
    vector<int> gain = {83927, 49995, 46507, 63067, 71263, 79580, 30240, 98718, 57252, 87162, 47462, 83784, 60207, 37303, 39851, 34490, 52909, 37806, 83992, 60249, 32933, 46155, 95436, 22339, 27678, 32239, 33282, 64769, 86970, 82199, 8831, 65540, 26949, 65695, 7952, 45873, 8277, 88226, 44389, 88432, 59796, 53312, 50393, 61182, 13684, 86117, 4815, 98676};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 119553.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int M = 99623;
    vector<int> day = {3986479, 1670722, 503143, 3819821, 2180472, 1895347, 3273376, 471210, 1522470, 3755556, 729145, 4586428, 3584855, 4332447, 2947808, 276941, 3320041, 776079, 4236213, 2317484, 2768945, 1145223, 4994206, 2504459, 4834165, 2563338, 3062406, 1529058, 260482, 3305441, 1525594, 2756618, 2037927, 4063976, 3860827, 4355171, 429399, 4430481, 598575, 216382, 181307, 4526879, 2368399, 959972, 4617230, 3963196, 2022746};
    vector<int> win = {95, 95, 100, 95, 98, 96, 98, 97, 100, 96, 100, 100, 96, 100, 95, 98, 99, 96, 96, 97, 96, 99, 97, 97, 100, 100, 97, 99, 95, 98, 98, 99, 98, 95, 95, 95, 96, 98, 97, 96, 99, 95, 95, 95, 95, 99, 96};
    vector<int> gain = {52328, 30249, 64597, 89114, 90594, 48112, 87822, 95178, 4149, 46053, 58554, 94841, 44326, 20779, 33090, 20369, 22047, 58771, 69307, 32296, 90813, 17133, 18138, 50416, 33871, 4510, 90202, 28053, 21722, 86173, 79578, 71825, 83534, 90080, 55016, 93919, 88742, 96656, 55778, 99514, 39361, 25716, 35634, 23198, 89583, 97701, 63230};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 99623.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int M = 98731;
    vector<int> day = {1040284, 2681289, 4932712, 4908118, 3412482, 3663713, 3770704, 649098, 2830988, 3583993, 1902040, 4912736, 221218, 3716622, 1048968, 2028454, 1177677, 2950127, 4263341, 3541821, 1410813, 965312, 4244886, 3908907, 1047956, 2992504, 262058, 431514, 28361, 4081378, 4706800, 2014807, 4453413, 1780240, 3086357, 4048419, 778793, 2078500, 2342394, 2491206, 1750102, 160309, 4570371, 3946695, 3042596, 3167376, 2754714, 4542645};
    vector<int> win = {96, 96, 98, 96, 100, 100, 98, 97, 95, 99, 100, 99, 95, 98, 97, 98, 97, 99, 95, 97, 99, 96, 98, 97, 99, 99, 95, 100, 96, 96, 99, 99, 97, 99, 95, 97, 100, 98, 99, 100, 97, 100, 97, 96, 95, 96, 100, 96};
    vector<int> gain = {8418, 10243, 86426, 48859, 11811, 67159, 73589, 91488, 66183, 30604, 26783, 46738, 47641, 62692, 6632, 80485, 18577, 55311, 18311, 3319, 21915, 65831, 20210, 45997, 5180, 64545, 37697, 73868, 35723, 45748, 84445, 78968, 81994, 28669, 32496, 26608, 3703, 85355, 2346, 61349, 24727, 4608, 70185, 651, 24155, 15215, 76220, 40040};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 123142.76;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int M = 98299;
    vector<int> day = {249557, 53299, 3585164, 2545644, 1561728, 4513195, 3452254, 1220872, 2404889, 1393384, 4630354, 187851, 2821832, 4997287, 3671938, 4583157, 1855595, 2397738, 1088716, 3461561, 3284113, 4428966, 4210037, 1216446, 4664063, 3711430, 2342609, 2577537, 87102, 519222, 244957, 1319505, 3577435, 2292025, 4722565, 699586, 4005174, 1096244, 3933294, 579915, 4498708, 2840688, 209021, 3849496, 2585182, 3920364, 3639246};
    vector<int> win = {97, 97, 98, 99, 95, 100, 97, 98, 99, 97, 98, 98, 98, 99, 97, 96, 95, 99, 95, 99, 96, 95, 95, 100, 96, 96, 99, 98, 97, 96, 97, 95, 99, 99, 99, 95, 95, 97, 96, 95, 100, 100, 95, 96, 99, 96, 100};
    vector<int> gain = {82703, 71287, 62411, 69126, 15195, 32761, 7979, 81417, 26801, 28718, 92428, 46873, 23632, 6527, 63274, 89836, 13166, 80396, 93261, 73931, 57113, 31224, 67376, 29755, 33803, 93319, 89428, 56066, 13755, 71214, 30780, 86150, 26146, 39318, 17094, 91298, 70200, 55344, 29917, 90519, 40035, 56490, 8193, 3188, 63894, 16165, 80860};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 159714.2759;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int M = 93475;
    vector<int> day = {1289822, 2447380, 4550948, 1791236, 2140642, 1630347, 2223243, 2742967, 130508, 4563870, 3423865, 2872883, 211623, 4768535, 3071547, 1161441, 2001619, 587953, 997252, 2621009, 1248404, 1680429, 820217, 1320645, 2918033, 3099184, 481491, 1621763, 3998374, 1949443, 4834337, 4404951, 1777315, 350690, 3360420, 3368287, 3569083, 2869181, 2640545, 1476813, 2868501, 911786, 462434, 2135657, 2818719};
    vector<int> win = {95, 99, 100, 100, 100, 95, 98, 95, 100, 97, 100, 99, 95, 95, 99, 100, 100, 99, 95, 96, 96, 97, 99, 100, 99, 99, 96, 98, 98, 100, 97, 99, 97, 95, 95, 97, 99, 95, 98, 96, 100, 99, 100, 97, 98};
    vector<int> gain = {87887, 89502, 18570, 7686, 92944, 66749, 90239, 47852, 59017, 35391, 36553, 64322, 55187, 60733, 27659, 56914, 36784, 80232, 35888, 74974, 88704, 4652, 52360, 6752, 26587, 50351, 88486, 53304, 6069, 63720, 23425, 53916, 81463, 89093, 3581, 5350, 56803, 60924, 7279, 81993, 856, 36413, 47141, 2213, 19555};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 93475.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int M = 97453;
    vector<int> day = {567506, 1371712, 2521128, 4357344, 373955, 84564, 3771722, 4342696, 3222251, 2885315, 3961473, 3070377, 1727816, 4593266, 1251264, 3254827, 231472, 171707, 4581421, 998312, 3554828, 143851, 2419780, 3559761, 4630392, 795635, 2915987, 3575993, 185156, 3547707, 3711597, 4229368, 1762742, 1847482, 1770423, 3409977, 1959638, 826559, 4550670, 2370860, 4538929, 3098204, 2767934, 2170709, 2038566, 1912949, 2759996};
    vector<int> win = {98, 98, 95, 96, 97, 96, 98, 95, 95, 99, 96, 98, 99, 98, 100, 100, 99, 95, 95, 100, 98, 99, 100, 100, 99, 97, 100, 98, 100, 95, 100, 99, 97, 98, 96, 100, 98, 98, 97, 98, 99, 100, 95, 99, 99, 95, 99};
    vector<int> gain = {37936, 77912, 73203, 58623, 5560, 50309, 60928, 37679, 89783, 59901, 16404, 89826, 74967, 31885, 41013, 66633, 3271, 69906, 45290, 22977, 23248, 69976, 62535, 11532, 49842, 3445, 7749, 77935, 76002, 80973, 17069, 15180, 86462, 96560, 5290, 995, 84915, 29333, 12832, 25982, 34640, 17967, 46820, 55121, 50805, 86103, 9644};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 275946.78796800005;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int M = 91924;
    vector<int> day = {2560777, 1951588, 80742, 2322939, 1134254, 3381817, 3499384, 1301446, 4474691, 546802, 3459863, 1559596, 1140427, 4382576, 4036504, 319920, 3666894, 2289511, 2232582, 608762, 2496663, 2817488, 4807101, 4335187, 2375735, 4570071, 2124608, 2185515, 3843472, 702334, 3955699, 1942116, 3955387, 3922153, 2718866, 1810597, 1225730, 1140064, 1389816, 3835095, 4277398, 4504912, 639816, 1365355, 872090};
    vector<int> win = {100, 98, 96, 100, 96, 97, 98, 98, 100, 99, 98, 96, 99, 97, 98, 97, 96, 99, 98, 99, 96, 99, 96, 96, 95, 96, 98, 95, 95, 98, 95, 98, 95, 95, 99, 99, 100, 97, 96, 100, 100, 100, 95, 100, 100};
    vector<int> gain = {34323, 48187, 77059, 63507, 44072, 87169, 57395, 55593, 56269, 42130, 4327, 33532, 37441, 19038, 11537, 76775, 42448, 20581, 82065, 74306, 14289, 45278, 29959, 69197, 52821, 70511, 47559, 74856, 32314, 24463, 49143, 56578, 10837, 59880, 65181, 52538, 18301, 84598, 61746, 50436, 13505, 12037, 58312, 49438, 22990};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 165453.36;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int M = 99774;
    vector<int> day = {3763168, 2280815, 4854056, 2232865, 1507455, 2701882, 2315031, 2204328, 717035, 2290982, 4872848, 3346490, 1481789, 2356223, 4179581, 1621077, 2021922, 3461736, 3672892, 2050895, 1225162, 1452645, 2023584, 4429837, 782522, 1235218, 4892336, 4031021, 157082, 1107883, 2031606, 4212221, 2769015, 1157873, 3494400, 3326657, 2565330, 2237675, 3641603, 2619393, 4684784, 3917090, 1888931, 2459081, 2058584};
    vector<int> win = {100, 95, 96, 98, 96, 96, 97, 100, 95, 98, 95, 100, 97, 96, 96, 96, 96, 99, 99, 99, 100, 95, 100, 100, 100, 99, 95, 99, 95, 95, 97, 97, 99, 95, 100, 95, 97, 100, 98, 99, 96, 95, 96, 100, 100};
    vector<int> gain = {63351, 76492, 54782, 59253, 51668, 35854, 28718, 67407, 52675, 54134, 46860, 3660, 27951, 84935, 51050, 32442, 37721, 71842, 9319, 39309, 38350, 5197, 21678, 27228, 43128, 76032, 75404, 97738, 17248, 37406, 69850, 15187, 70091, 56130, 1263, 16831, 62304, 36387, 9580, 90020, 18560, 51717, 33752, 50648, 44879};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 99774.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int M = 97192;
    vector<int> day = {630393, 235931, 1939936, 4174719, 4421637, 4998794, 3387368, 489425, 301764, 2840545, 2390689, 1887530, 361500, 1652112, 4112180, 4312111, 1408278, 1089247, 2596588, 2199864, 287089, 4382728, 838264, 2189522, 3310062, 349898, 3600252, 3071599, 3983362, 3619847, 629617, 2831601, 2500951, 3796983, 275792, 3056899, 4651995, 3223779, 4560267, 3756432, 210047, 2629323, 523125, 3943001, 2440794, 2561329, 4099220};
    vector<int> win = {99, 98, 96, 96, 97, 95, 96, 95, 99, 97, 98, 98, 97, 96, 98, 97, 95, 99, 97, 97, 97, 97, 99, 95, 97, 95, 96, 100, 95, 100, 95, 99, 95, 96, 98, 95, 95, 96, 100, 99, 98, 95, 98, 100, 98, 95, 95};
    vector<int> gain = {85458, 5295, 12339, 39198, 56358, 63782, 61848, 53572, 33078, 56457, 89160, 44104, 25976, 78283, 35623, 77171, 18586, 81208, 23656, 77605, 86112, 12080, 15280, 96585, 84673, 62928, 12106, 60916, 19825, 69378, 16713, 82682, 31609, 69216, 21737, 57793, 54171, 71460, 8271, 29196, 28846, 14531, 8988, 86185, 60424, 30189, 63118};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 97192.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int M = 98501;
    vector<int> day = {501400, 4611295, 4029042, 170143, 241658, 4855147, 1924478, 453239, 3726914, 3024094, 539559, 4940588, 3629487, 2663516, 4562656, 2991252, 3693335, 2470464, 1869630, 2797148, 1655825, 2125974, 1674894, 4892723, 2202540, 4940417, 4589949, 1227036, 2708934, 4609541, 342638, 2770560, 4383333, 4971405, 4874952, 3258218, 2702322, 1861687, 1554933, 1656521, 3446393, 3253267, 3887140, 4084354, 7995, 1869736, 2877207, 1316603, 409212, 1898703};
    vector<int> win = {98, 95, 97, 97, 96, 99, 96, 97, 99, 97, 95, 95, 99, 100, 95, 98, 99, 96, 97, 100, 96, 98, 95, 100, 97, 95, 99, 97, 95, 97, 95, 100, 100, 97, 98, 99, 99, 98, 95, 95, 95, 98, 100, 96, 98, 100, 98, 97, 99, 99};
    vector<int> gain = {35549, 83019, 85114, 78180, 46604, 73279, 22221, 45686, 37798, 67184, 73866, 28577, 14346, 51098, 74304, 49872, 38846, 39379, 21713, 50961, 61062, 24330, 66202, 42456, 9777, 11825, 6633, 20960, 60167, 65398, 62447, 93437, 80062, 36963, 13168, 40240, 84423, 23452, 2630, 58479, 81843, 17122, 7983, 90025, 6523, 82050, 8247, 38484, 95224, 44189};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 103083.42;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int M = 99062;
    vector<int> day = {3853995, 1621574, 2901395, 1962056, 1471335, 2219780, 971551, 825760, 4471019, 931819, 1684440, 200834, 3267713, 1560550, 3836424, 3569293, 2570469, 3880361, 4915326, 465382, 2248008, 460215, 1061597, 961524, 3486398, 1471885, 3403130, 2381138, 4831456, 718421, 1080162, 3312160, 4920155, 10580, 1966578, 4543585, 181215, 1937325, 1585325, 207807, 1686400, 1582763, 3630058, 2650883, 472073, 2988683, 1591506, 961373, 819748};
    vector<int> win = {95, 98, 96, 95, 98, 100, 96, 100, 99, 99, 96, 95, 96, 99, 100, 95, 100, 99, 95, 99, 97, 99, 95, 96, 99, 99, 97, 100, 95, 99, 97, 95, 95, 99, 100, 98, 95, 95, 95, 99, 99, 98, 97, 99, 97, 99, 98, 99, 98};
    vector<int> gain = {31877, 31923, 71309, 86026, 44923, 70388, 58209, 29559, 95552, 16124, 73270, 10094, 54420, 31433, 86236, 9477, 6949, 56292, 40548, 53136, 43248, 40881, 74048, 23836, 51671, 51987, 25150, 60736, 30649, 88300, 13795, 90909, 90189, 19752, 32832, 19723, 20648, 23812, 46067, 6148, 33568, 27110, 30476, 54906, 55779, 71489, 64557, 24574, 14476};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 108651.38;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int M = 94902;
    vector<int> day = {2740283, 1201094, 2473824, 3798197, 1535838, 2388755, 3795910, 2329056, 536009, 1863374, 1617344, 2922759, 4473902, 348485, 1535026, 347916, 4670241, 1945467, 2742499, 4636659, 3274141, 420278, 4397455, 4476197, 442879, 1609203, 2525030, 321069, 3799785, 4713774, 660731, 3207357, 1137, 1413642, 1440230, 1963130, 4506079, 825231, 579410, 4909147, 2233411, 1242790, 3980655, 3823662, 3079693, 4312479, 921089, 1152388};
    vector<int> win = {97, 98, 97, 96, 100, 97, 95, 95, 99, 96, 97, 97, 100, 99, 98, 97, 95, 100, 96, 97, 99, 99, 100, 99, 95, 97, 96, 97, 98, 95, 96, 97, 97, 97, 97, 100, 96, 100, 95, 100, 99, 98, 98, 95, 100, 99, 99, 96};
    vector<int> gain = {28631, 92417, 80304, 40479, 41194, 83099, 19012, 51599, 92713, 21786, 18503, 27117, 54122, 79540, 38251, 19178, 6219, 27281, 38558, 35997, 11107, 59246, 94004, 87577, 83345, 56992, 3540, 89382, 79432, 79121, 56640, 84833, 6941, 48381, 38538, 15213, 66692, 85327, 75040, 91013, 51677, 38749, 21281, 8504, 41326, 21275, 81939, 70802};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 94902.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int M = 95646;
    vector<int> day = {2295324, 3569994, 2472467, 1959527, 4661776, 3172709, 148456, 2480903, 3940147, 4965418, 1911496, 610985, 1973000, 2638780, 1384313, 3033168, 716311, 4729309, 2931910, 2095332, 3438443, 3672232, 737724, 3056431, 4501973, 987976, 2112364, 2732271, 3057463, 2452142, 4587964, 600295, 2965801, 2500192, 2800645, 440781, 1538471, 4388372, 51990, 2123661, 1903617, 1483833, 2202464, 3429605, 947274, 3356511, 836616, 832888, 4958250};
    vector<int> win = {98, 97, 99, 98, 99, 99, 100, 97, 100, 96, 96, 99, 97, 97, 99, 98, 95, 100, 95, 98, 96, 95, 98, 97, 96, 97, 98, 96, 98, 97, 97, 97, 98, 95, 98, 97, 96, 100, 95, 95, 100, 97, 96, 97, 97, 98, 98, 99, 97};
    vector<int> gain = {61589, 82814, 10180, 51990, 54508, 13863, 55842, 24892, 47329, 11343, 3347, 34806, 79137, 26009, 82635, 71967, 10658, 51176, 27027, 27351, 36749, 63443, 24213, 23013, 30938, 24930, 14909, 1454, 72351, 33710, 34331, 53961, 72212, 55356, 6131, 3669, 75020, 9981, 93748, 42545, 5898, 16708, 19619, 29774, 78258, 64807, 70634, 50509, 8665};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 142853.69999999998;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int M = 95453;
    vector<int> day = {4317016, 4663209, 4907115, 2662734, 2011014, 295583, 541794, 4767472, 4041741, 1100185, 1428262, 4733079, 1877796, 4168145, 3104635, 3632669, 3277969, 3166532, 1199166, 4603731, 2910739, 639012, 4773021, 4806588, 2116778, 2685510, 3072523, 2847584, 1401098, 1767668, 682270, 451275, 2546524, 1899021, 1505120, 830107, 4452957, 862480, 115649, 1200965, 808412, 781477, 3970019, 1614737, 72640, 1427332, 3202092, 4920425};
    vector<int> win = {100, 96, 100, 100, 100, 97, 95, 97, 96, 98, 95, 96, 96, 100, 96, 97, 96, 99, 97, 98, 98, 96, 98, 99, 98, 99, 100, 97, 97, 100, 100, 96, 99, 96, 98, 96, 98, 99, 95, 97, 99, 96, 98, 97, 100, 96, 100, 99};
    vector<int> gain = {73873, 90255, 40963, 12686, 67979, 92321, 7935, 14534, 63103, 42392, 1742, 58042, 34367, 39469, 34264, 34916, 70428, 13635, 2130, 50984, 67052, 65458, 28147, 631, 6594, 92905, 87124, 36707, 95059, 17654, 2003, 69031, 7599, 73894, 53878, 26543, 58195, 9060, 70564, 15089, 47889, 60724, 31620, 85083, 66165, 61461, 62497, 49616};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 206329.35;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int M = 91048;
    vector<int> day = {2056452, 4704041, 4284834, 4872283, 1170058, 2151138, 1451737, 456520, 708946, 4804058, 1166590, 4232244, 859172, 4219837, 3901146, 154863, 2481066, 2831114, 1010247, 1239640, 2996082, 1618212, 1841800, 651767, 3353279, 1498708, 1528689, 627573, 454359, 4324932, 4631402, 2246622, 1382806, 3878341, 354753, 2520678, 2838186, 2859675, 2775925, 2783361, 3396870, 3624908, 825547, 1884537, 1742831, 4777444};
    vector<int> win = {97, 96, 98, 100, 96, 95, 100, 96, 97, 96, 99, 99, 99, 99, 96, 97, 96, 97, 96, 96, 100, 96, 97, 97, 96, 100, 97, 99, 100, 96, 95, 100, 96, 95, 100, 98, 98, 96, 98, 95, 98, 96, 100, 100, 97, 100};
    vector<int> gain = {68986, 11259, 51237, 35521, 35843, 77162, 9746, 25475, 45826, 46864, 39078, 51204, 1923, 45499, 66719, 90675, 23069, 76799, 21317, 73895, 64593, 72381, 23661, 22169, 82870, 29455, 81735, 1911, 12951, 71854, 11031, 78795, 2763, 46485, 90144, 78987, 89069, 51339, 61316, 41559, 39458, 20180, 38181, 25213, 7846, 39729};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 91048.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int M = 93517;
    vector<int> day = {23367, 28352, 35810, 56704, 70640, 72846, 102511, 126139, 131873, 134114, 153463, 169313, 170673, 192244, 222101, 238198, 249439, 273685, 285007, 291936, 317025, 342469, 364205, 396535, 400369, 419257, 451777, 472468, 495584, 495756, 512473, 533952, 545218, 562027, 586917, 590552, 595048, 598203, 617573, 619711, 650602, 655028, 678908, 701805, 729220, 729381, 760892};
    vector<int> win = {99, 89, 32, 69, 6, 61, 93, 36, 83, 72, 50, 54, 22, 13, 7, 42, 68, 6, 75, 95, 59, 23, 40, 35, 85, 72, 96, 32, 18, 83, 76, 82, 86, 67, 53, 18, 43, 36, 86, 78, 97, 32, 80, 78, 29, 55, 26};
    vector<int> gain = {26643, 7324, 19962, 15331, 4069, 11738, 5333, 15520, 31748, 9842, 17345, 6945, 21114, 11715, 5659, 3753, 11671, 8594, 20675, 17438, 27243, 22662, 6304, 26761, 1871, 29866, 22808, 17304, 4700, 17902, 15000, 25116, 10226, 15525, 10514, 20620, 307, 27656, 27258, 25983, 4742, 7346, 17736, 7222, 14869, 28451, 14073};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 127853.2025625;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int M = 98782;
    vector<int> day = {22711, 29164, 30177, 57879, 73344, 88173, 102411, 116208, 125459, 147657, 155314, 158776, 175652, 181492, 190985, 209517, 222412, 222587, 235957, 242930, 246303, 250011, 275545, 281372, 299186, 303940, 305445, 335169, 358453, 386103, 418665, 431307, 454139, 456971, 466717, 480942, 491512, 509356, 519669, 550359, 563117, 594886, 625948, 639921, 658218, 661579, 679272, 689805, 717821};
    vector<int> win = {80, 78, 82, 23, 65, 64, 16, 6, 36, 100, 38, 26, 30, 12, 50, 65, 86, 45, 67, 44, 45, 9, 94, 1, 28, 99, 1, 95, 81, 41, 32, 49, 62, 5, 99, 75, 6, 72, 81, 39, 62, 38, 80, 86, 93, 41, 47, 57, 32};
    vector<int> gain = {11511, 27189, 26277, 23125, 22030, 27290, 6047, 9712, 29120, 2848, 1962, 30279, 11896, 16007, 6273, 23548, 19174, 10738, 4455, 6485, 25723, 26472, 30111, 11450, 21998, 22615, 27378, 27451, 9658, 2060, 12332, 11016, 1181, 7740, 9119, 32246, 23578, 24958, 22943, 31745, 27896, 18894, 17156, 7621, 32194, 8971, 25515, 9987, 6469};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 119934.90172159999;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int M = 98979;
    vector<int> day = {24803, 57513, 75498, 96887, 115424, 128093, 141830, 154111, 177176, 182160, 211471, 242325, 260356, 284688, 296391, 301176, 302450, 330417, 339228, 358791, 372322, 379314, 387064, 393043, 412831, 445388, 468472, 482452, 490155, 495583, 504432, 513290, 521508, 539573, 560067, 571773, 577351, 588100, 605268, 609572, 641233, 664782, 675460, 693802, 712456, 716943, 718347, 734087};
    vector<int> win = {53, 36, 98, 19, 53, 5, 52, 85, 76, 20, 28, 56, 54, 40, 49, 42, 78, 90, 99, 61, 51, 66, 95, 72, 12, 65, 82, 25, 88, 78, 62, 82, 52, 81, 11, 20, 52, 22, 99, 87, 2, 63, 7, 56, 35, 62, 28, 9};
    vector<int> gain = {21938, 9913, 24249, 4115, 22752, 9813, 16459, 17896, 19651, 7673, 10504, 17009, 13417, 6696, 659, 32085, 3495, 6218, 20111, 26206, 12177, 22826, 3364, 32760, 14595, 17272, 13185, 2485, 3868, 22088, 12884, 15051, 27582, 11153, 3156, 3220, 31759, 2735, 31928, 5390, 3835, 2786, 11709, 29017, 21423, 17869, 32547, 16444};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 140932.66679288;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int M = 98950;
    vector<int> day = {24713, 56461, 89222, 120926, 123893, 149497, 150161, 159629, 163114, 164657, 186377, 205972, 206341, 233104, 261304, 280358, 299617, 317539, 332269, 342189, 350630, 373496, 391438, 411488, 436828, 443079, 461374, 467302, 484814, 487463, 513682, 519051, 536387, 548836, 573739, 589534, 619030, 645368, 653443, 654144, 658633, 680592, 697717, 721672, 750888, 751254, 757062, 778587, 792354};
    vector<int> win = {98, 73, 61, 76, 51, 55, 33, 30, 57, 99, 13, 78, 76, 92, 66, 83, 96, 22, 93, 64, 95, 34, 24, 52, 82, 57, 53, 100, 28, 41, 15, 76, 3, 14, 82, 45, 21, 47, 8, 26, 9, 58, 3, 50, 75, 20, 40, 48, 36};
    vector<int> gain = {10212, 9928, 15140, 20432, 868, 19906, 3865, 15321, 13680, 7625, 9185, 31220, 27143, 25568, 30639, 2793, 16687, 8499, 32249, 12003, 13679, 9615, 3577, 18418, 4693, 14821, 24879, 19595, 31474, 23243, 8669, 18947, 89, 762, 2442, 30487, 18468, 1489, 3968, 22119, 17135, 31185, 10062, 26870, 29402, 13087, 3910, 28844, 16907};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 117701.11222399998;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int M = 94644;
    vector<int> day = {22642, 32984, 45312, 71451, 97868, 124404, 127055, 150589, 151074, 172367, 184006, 196494, 206063, 233271, 243332, 257576, 267489, 273825, 280498, 302053, 329285, 350610, 375714, 382698, 406599, 407654, 424292, 431377, 448792, 467055, 471421, 478074, 478726, 509330, 541721, 569824, 583502, 586134, 604635, 625564, 632221, 647717, 668251, 691886, 710045, 713949, 745658};
    vector<int> win = {25, 94, 77, 12, 9, 68, 9, 50, 30, 24, 78, 69, 50, 83, 30, 98, 2, 35, 48, 86, 42, 48, 66, 43, 19, 19, 22, 68, 56, 33, 97, 17, 46, 81, 71, 49, 84, 2, 77, 59, 95, 62, 13, 14, 59, 98, 29};
    vector<int> gain = {9910, 4503, 5948, 18407, 27511, 2498, 4877, 4375, 19843, 182, 29779, 7942, 11071, 10491, 27364, 20803, 6546, 16320, 9819, 9531, 23146, 14167, 21655, 10435, 25400, 29108, 12345, 31891, 29551, 2802, 7977, 26309, 15112, 13263, 24849, 30042, 4353, 7211, 19936, 12469, 14809, 28045, 9289, 24094, 15894, 21918, 26690};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 96493.278656;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int M = 93025;
    vector<int> day = {5371, 20699, 26725, 39418, 51700, 73243, 94673, 119237, 126050, 153048, 179584, 206989, 208218, 232792, 246651, 250934, 253052, 282849, 306910, 326253, 326535, 349132, 364142, 386490, 400360, 408212, 421669, 423057, 443980, 474857, 499911, 524897, 535600, 552381, 552529, 562310, 585039, 608566, 610036, 610247, 619943, 643888, 648204, 658120, 673893};
    vector<int> win = {42, 89, 99, 41, 50, 6, 5, 52, 88, 70, 65, 28, 6, 74, 36, 78, 3, 16, 7, 51, 29, 67, 48, 80, 93, 86, 61, 99, 62, 73, 77, 68, 90, 38, 100, 90, 75, 21, 31, 55, 52, 17, 30, 55, 97};
    vector<int> gain = {16384, 21799, 18155, 12772, 14559, 25118, 15278, 26447, 29384, 18325, 5460, 29794, 10879, 2421, 24596, 30729, 12110, 29260, 17386, 11026, 22911, 15819, 786, 21170, 4325, 21320, 2193, 17153, 25428, 4157, 1708, 29049, 11045, 8903, 9583, 6011, 17843, 29736, 16679, 25803, 23009, 9029, 14569, 16911, 11921};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 133112.86418409602;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int M = 92218;
    vector<int> day = {15553, 30342, 45157, 50240, 81456, 88928, 100572, 109318, 132031, 148997, 172976, 200461, 229532, 236227, 236605, 237626, 256632, 260187, 270312, 283821, 307982, 327183, 353449, 365519, 396216, 420787, 444833, 449381, 471810, 482242, 483752, 499358, 511027, 513893, 534492, 565030, 590052, 590985, 597551, 622637, 633990, 634348, 660988, 676740, 709120};
    vector<int> win = {14, 1, 73, 92, 31, 53, 73, 69, 74, 49, 24, 65, 51, 40, 76, 76, 39, 57, 2, 89, 48, 59, 35, 40, 17, 33, 57, 14, 64, 42, 42, 9, 34, 46, 28, 49, 51, 4, 82, 8, 55, 58, 38, 58, 74};
    vector<int> gain = {14661, 27605, 26186, 20327, 9474, 7216, 16358, 10639, 19303, 17052, 6018, 17502, 24469, 27711, 11377, 27324, 7344, 3681, 1865, 6901, 11361, 8434, 26724, 26936, 7509, 18689, 18018, 29208, 27068, 4934, 23717, 23821, 3531, 16025, 18900, 28404, 11834, 5753, 15961, 11403, 20166, 23943, 15075, 3318, 6320};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 123282.52653912;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int M = 92524;
    vector<int> day = {30669, 61357, 63173, 90163, 93521, 114251, 121951, 152674, 152693, 155533, 165453, 170216, 174868, 201689, 207058, 227772, 245627, 250745, 258854, 276863, 282611, 289450, 297994, 324237, 324693, 339882, 358483, 373260, 397722, 398028, 404351, 429309, 431974, 444546, 459326, 487242, 509854, 511348, 517901, 550106, 575477, 590986, 614586, 629917, 638332, 667392, 674556, 681373, 700978, 720499};
    vector<int> win = {74, 20, 16, 39, 62, 51, 14, 5, 38, 58, 47, 4, 91, 6, 78, 34, 17, 40, 62, 40, 95, 98, 78, 76, 52, 33, 61, 57, 16, 82, 91, 5, 29, 44, 22, 66, 91, 79, 23, 82, 72, 44, 98, 100, 9, 47, 93, 28, 11, 40};
    vector<int> gain = {17135, 32185, 16241, 16664, 29744, 27219, 5791, 8059, 27516, 10868, 25581, 7848, 4303, 1788, 24651, 12292, 22954, 25202, 19306, 8661, 8081, 17280, 19009, 29127, 1677, 28530, 21899, 12139, 29610, 5306, 14406, 28339, 4986, 1390, 7734, 19064, 28817, 456, 12896, 30453, 6663, 4774, 19855, 25673, 23033, 29704, 13522, 28920, 31752, 3988};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 104461.36393163621;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int M = 92987;
    vector<int> day = {17746, 48848, 73459, 74570, 105311, 112902, 132635, 148605, 158429, 167479, 183842, 201695, 211681, 227264, 246255, 274217, 290694, 301114, 303991, 313239, 336000, 362118, 364366, 369141, 399782, 414434, 436789, 438452, 443784, 443892, 448684, 460789, 475642, 498142, 508034, 519070, 548521, 552267, 578660, 604005, 607654, 635010, 665965, 680164, 691707, 707701, 710329, 742314, 751674, 771024};
    vector<int> win = {29, 16, 15, 80, 86, 38, 3, 12, 89, 32, 70, 28, 88, 7, 8, 28, 94, 87, 13, 24, 17, 74, 63, 45, 83, 60, 45, 10, 25, 37, 91, 95, 35, 13, 56, 73, 79, 68, 54, 28, 2, 42, 58, 20, 69, 9, 54, 1, 34, 50};
    vector<int> gain = {13016, 29845, 26927, 946, 21697, 16624, 14040, 19199, 4040, 29183, 26311, 24049, 17407, 31083, 4322, 29840, 21182, 29760, 29585, 16780, 3358, 3437, 27200, 7349, 12927, 28741, 29665, 15745, 32514, 19201, 18791, 1417, 18960, 24892, 1100, 23308, 13522, 11893, 21772, 4971, 26806, 6289, 18856, 28075, 26096, 12886, 9252, 7415, 25079, 3569};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 92987.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int M = 97658;
    vector<int> day = {14899, 46098, 78515, 92192, 110837, 134936, 150352, 163233, 164816, 176125, 201024, 216920, 238296, 247546, 258836, 287203, 288314, 299350, 317694, 337083, 338900, 353149, 360297, 368961, 392898, 396557, 424839, 435157, 461041, 481003, 502242, 532191, 560808, 580422, 607974, 624609, 635936, 653237, 684408, 697770, 704965, 710600, 713237, 727115, 731693};
    vector<int> win = {26, 78, 76, 87, 94, 72, 69, 82, 30, 16, 92, 7, 93, 3, 34, 99, 44, 18, 95, 63, 63, 23, 16, 29, 34, 70, 95, 73, 19, 80, 19, 65, 50, 24, 98, 90, 41, 13, 85, 16, 40, 74, 7, 74, 87};
    vector<int> gain = {11072, 27236, 24505, 4625, 19629, 21113, 10225, 4416, 3684, 11603, 2687, 23071, 26925, 15105, 20701, 21245, 20182, 7346, 20171, 24205, 12464, 3902, 28876, 24168, 5646, 13725, 23204, 17801, 17098, 29549, 5600, 15056, 28096, 22385, 20558, 19327, 1873, 5644, 10881, 11712, 4064, 5066, 5710, 4892, 32344};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 137155.59883686807;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int M = 91621;
    vector<int> day = {12284, 16222, 39756, 42013, 60167, 73306, 74166, 99088, 101383, 127717, 152033, 165784, 181073, 187547, 203243, 225106, 233227, 244605, 249735, 254024, 261438, 262788, 268056, 297094, 313320, 341040, 345274, 362404, 363272, 379161, 390996, 418395, 447663, 475257, 482653, 487367, 491209, 510588, 541969, 549405, 554060, 568811, 569119, 598489, 628971};
    vector<int> win = {100, 99, 99, 99, 100, 100, 99, 100, 99, 100, 100, 100, 100, 100, 100, 100, 99, 99, 100, 99, 100, 99, 99, 100, 99, 99, 100, 99, 99, 99, 100, 99, 99, 100, 100, 100, 99, 100, 100, 99, 99, 99, 100, 100, 99};
    vector<int> gain = {29891, 31703, 31738, 20881, 24523, 881, 383, 30508, 16266, 8945, 1727, 18497, 961, 20737, 2234, 718, 31567, 31888, 24275, 12882, 20154, 23377, 32081, 1618, 2733, 18489, 18401, 14552, 14965, 12805, 29715, 1263, 4738, 6578, 31705, 11560, 10988, 8450, 8203, 4632, 18924, 10494, 31461, 22744, 15966};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 620393.5615066661;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int M = 94823;
    vector<int> day = {17536, 49319, 53853, 79623, 89356, 102051, 108855, 128796, 161509, 163501, 172986, 186955, 190490, 221161, 235444, 253807, 259579, 290510, 317181, 323611, 341894, 347239, 355125, 364823, 389728, 411182, 422429, 450234, 463796, 490157, 501436, 505615, 534226, 537943, 553396, 562793, 577094, 593346, 625920, 629063, 635456, 643646, 672520, 701420, 717986, 728161, 731054, 734182, 737043, 741271};
    vector<int> win = {100, 99, 99, 99, 100, 99, 100, 99, 100, 99, 99, 99, 99, 99, 99, 99, 99, 100, 100, 99, 100, 100, 100, 100, 100, 100, 100, 100, 99, 100, 100, 100, 99, 99, 99, 99, 99, 100, 100, 99, 100, 99, 99, 99, 99, 99, 100, 99, 100, 99};
    vector<int> gain = {6769, 1445, 5781, 7303, 28673, 21869, 14803, 17017, 11880, 16675, 26647, 6284, 4639, 21006, 9693, 24, 2115, 26425, 7045, 15738, 6421, 29681, 18386, 16019, 25213, 20042, 17004, 29000, 8834, 3482, 3678, 10752, 20947, 30972, 31896, 6697, 20033, 1486, 7790, 22195, 5443, 26163, 18456, 28307, 3697, 10130, 9008, 4417, 26121, 24853};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 727642.8286464316;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int M = 94782;
    vector<int> day = {31166, 33620, 51588, 70019, 74764, 93177, 114159, 143994, 151335, 157587, 159497, 163894, 169120, 195318, 203761, 222067, 252072, 265832, 288428, 312036, 332057, 335017, 360362, 364349, 374276, 376461, 392678, 412624, 425674, 433026, 453608, 465935, 488482, 510244, 529371, 548902, 549168, 565842, 594719, 616710, 633873, 637108, 645203, 648951, 669933};
    vector<int> win = {99, 99, 100, 100, 100, 100, 100, 100, 99, 100, 99, 100, 99, 99, 100, 99, 100, 100, 99, 99, 99, 100, 99, 100, 99, 99, 99, 99, 100, 100, 100, 100, 100, 99, 100, 100, 99, 100, 99, 99, 99, 99, 100, 100, 99};
    vector<int> gain = {13090, 21641, 368, 20626, 10318, 10876, 29637, 29392, 32194, 16615, 14207, 10237, 10047, 647, 11838, 1990, 27368, 24477, 2889, 10400, 9157, 9325, 24073, 32319, 5185, 24512, 11403, 18463, 18604, 22883, 7683, 4095, 2491, 6310, 13636, 14432, 24323, 31454, 6984, 6922, 8577, 23011, 31150, 14216, 7701};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 670857.4687008372;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int M = 92240;
    vector<int> day = {13508, 29670, 48892, 52199, 63505, 64693, 75154, 106058, 136410, 142087, 165683, 172290, 184676, 209391, 212775, 235072, 258817, 262111, 271114, 299290, 310042, 336949, 365786, 366621, 368196, 376527, 388869, 389595, 390477, 407962, 428672, 449408, 452690, 461858, 466640, 485724, 512967, 543009, 572445, 577910, 583563, 603663, 630594, 647196, 671736};
    vector<int> win = {99, 99, 99, 99, 100, 99, 99, 100, 99, 100, 99, 99, 99, 99, 100, 99, 100, 100, 100, 99, 100, 100, 99, 99, 100, 99, 100, 100, 99, 100, 100, 100, 100, 99, 99, 100, 99, 99, 99, 100, 100, 99, 99, 100, 100};
    vector<int> gain = {3138, 21158, 25221, 8917, 20392, 11650, 11427, 9084, 16866, 10940, 20542, 20214, 9773, 24686, 5429, 13581, 23463, 32692, 22153, 12752, 4052, 6959, 31968, 15378, 284, 32131, 2306, 17384, 20810, 4057, 11870, 8495, 26639, 20573, 32134, 4612, 25981, 22721, 7855, 18762, 9356, 29881, 7218, 3367, 19865};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 651142.4903706638;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int M = 93966;
    vector<int> day = {16008, 23661, 26654, 41559, 72410, 75320, 101845, 109920, 119290, 137674, 168028, 192269, 207600, 232708, 262197, 287890, 309821, 316180, 342436, 375034, 382188, 411654, 412865, 421304, 425381, 435800, 458630, 486710, 494521, 517763, 535007, 542562, 543795, 551057, 568252, 579652, 580842, 599975, 605468, 628870, 655757, 669596, 677925, 710669, 733881, 740485, 752941, 762498};
    vector<int> win = {100, 100, 99, 99, 99, 100, 100, 100, 100, 99, 100, 99, 99, 100, 100, 100, 100, 99, 100, 99, 99, 99, 99, 99, 100, 99, 100, 99, 99, 99, 99, 100, 100, 100, 99, 99, 99, 99, 99, 99, 99, 100, 99, 99, 100, 99, 99, 99};
    vector<int> gain = {13755, 5715, 31567, 7527, 27629, 26678, 4425, 2599, 14116, 13091, 17343, 27555, 29845, 22285, 21321, 28736, 30430, 29805, 25894, 28714, 10365, 8897, 28087, 11214, 15958, 14089, 11008, 6752, 31281, 6729, 12078, 18518, 32058, 12297, 31499, 17899, 10879, 19672, 10380, 9629, 6517, 15557, 9540, 2735, 6260, 23012, 31982, 18344};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 766499.087324054;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int M = 94178;
    vector<int> day = {20357, 36689, 42511, 48638, 75554, 104519, 110100, 117228, 133114, 165542, 168935, 180294, 187915, 192255, 204358, 235606, 240278, 272698, 300537, 303045, 318510, 321829, 336611, 344108, 344266, 344327, 353042, 380577, 381393, 413226, 424908, 435528, 465455, 479088, 484517, 509669, 521824, 550369, 568455, 576617, 585350, 606014, 620747, 646276, 649840, 649866, 654914};
    vector<int> win = {99, 99, 99, 99, 100, 100, 100, 100, 99, 100, 100, 99, 100, 100, 99, 99, 100, 100, 100, 99, 100, 99, 100, 99, 99, 99, 99, 100, 100, 99, 100, 100, 100, 100, 99, 99, 100, 99, 99, 99, 99, 100, 100, 99, 99, 99, 100};
    vector<int> gain = {29005, 20992, 14631, 8646, 7697, 10638, 20822, 2859, 6790, 6854, 16422, 11566, 26791, 8302, 1941, 21157, 11025, 31506, 15745, 6511, 3974, 28544, 15919, 14571, 18796, 5450, 28357, 22655, 7243, 13639, 4047, 30227, 30291, 14355, 8126, 23699, 6868, 9354, 19812, 10864, 23747, 11857, 31354, 26656, 26940, 21581, 19995};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 701591.0291561486;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int M = 97203;
    vector<int> day = {10065, 37474, 40087, 53804, 63638, 67342, 96657, 99087, 119072, 126600, 148466, 162242, 171115, 178367, 186549, 218539, 238771, 241270, 251997, 252432, 252679, 260568, 291850, 304037, 309594, 334086, 357508, 387100, 392848, 424616, 441167, 458678, 459920, 492667, 523706, 555218, 585811, 591256, 605087, 636720, 638376, 641586, 665516, 677048, 679032, 682592, 694947, 711991};
    vector<int> win = {100, 100, 99, 99, 100, 99, 100, 99, 99, 99, 100, 99, 100, 100, 100, 99, 99, 100, 99, 100, 100, 100, 100, 99, 100, 99, 99, 100, 100, 100, 100, 100, 99, 100, 99, 99, 99, 100, 99, 99, 99, 100, 100, 100, 100, 99, 99, 100};
    vector<int> gain = {6246, 27270, 944, 3351, 1178, 23241, 17918, 7005, 17591, 25253, 25686, 27359, 15382, 26945, 12307, 4309, 10934, 14215, 2676, 20861, 6072, 13990, 5917, 26262, 19425, 16017, 32407, 21989, 23579, 29821, 16587, 22452, 17396, 14695, 6027, 19790, 4126, 10380, 26889, 18308, 6381, 9711, 19038, 7467, 19676, 31958, 4613, 4508};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 722409.3498632734;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int M = 90254;
    vector<int> day = {3494, 33462, 47333, 64808, 92836, 115749, 129409, 145702, 161860, 194409, 196613, 213826, 232891, 237657, 239114, 244606, 272809, 292152, 310876, 311711, 337320, 339475, 341318, 370178, 392094, 413509, 439084, 453804, 470348, 471851, 492783, 517686, 528826, 554943, 556209, 561420, 572153, 576833, 584091, 614840, 627434, 641389, 667215, 686542, 702127, 724880, 749253, 771661, 788870, 817088};
    vector<int> win = {100, 100, 99, 99, 99, 99, 100, 99, 100, 100, 100, 100, 99, 99, 100, 99, 99, 99, 99, 99, 100, 99, 99, 99, 99, 99, 100, 99, 99, 100, 100, 99, 99, 99, 100, 99, 99, 100, 100, 100, 99, 99, 99, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {6982, 30695, 166, 14232, 31965, 2422, 5650, 13569, 24804, 3552, 14680, 5240, 2070, 1213, 26582, 18248, 16149, 30891, 8716, 31489, 4322, 17865, 26145, 26612, 2407, 28732, 14942, 12216, 2029, 2733, 18352, 19368, 8614, 11465, 1066, 2914, 5157, 31169, 28033, 9033, 18401, 14024, 21391, 19204, 25269, 29079, 13009, 27645, 27235, 14060};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 748405.4328675708;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int M = 90124;
    vector<int> day = {17070, 27857, 41455, 60176, 65903, 66527, 71021, 73784, 87828, 109961, 115154, 121331, 140707, 150707, 169655, 173872, 174857, 197430, 220764, 232151, 236832, 241265, 270012, 288097, 319431, 347610, 359533, 360793, 372195, 379659, 401440, 428968, 458283, 464476, 471631, 471855, 483139, 513250, 536885, 564177, 566753, 576944, 595580, 602713, 603170, 625247};
    vector<int> win = {100, 100, 100, 100, 99, 99, 100, 99, 99, 99, 99, 100, 100, 99, 99, 100, 99, 99, 100, 99, 100, 100, 99, 99, 99, 100, 100, 99, 100, 100, 99, 100, 100, 99, 100, 99, 99, 100, 100, 100, 100, 99, 99, 100, 100, 100};
    vector<int> gain = {8792, 17305, 30096, 21490, 3116, 11219, 26464, 17438, 9775, 3094, 19236, 31929, 2626, 30288, 13117, 7236, 3051, 9011, 12021, 17731, 17106, 20662, 7414, 1215, 9542, 12436, 3536, 18629, 12985, 26316, 13942, 26341, 11839, 6176, 29377, 12980, 26900, 2198, 22508, 9290, 7443, 18938, 22295, 3781, 22336, 31321};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 643628.8959762505;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int M = 90819;
    vector<int> day = {18745, 19672, 20895, 45890, 71019, 76268, 97436, 103240, 109375, 127608, 135649, 152426, 166509, 189077, 221680, 235749, 251847, 280650, 311984, 343408, 373835, 398111, 400249, 408517, 429615, 437671, 461606, 493111, 502775, 516374, 518179, 526141, 536958, 557774, 580226, 592904, 614157, 633839, 643077, 645390, 674405, 703209, 723505, 731289, 741842, 745224, 755292, 775004};
    vector<int> win = {99, 100, 99, 100, 100, 100, 100, 100, 100, 100, 99, 100, 99, 100, 100, 100, 99, 100, 100, 100, 100, 100, 100, 100, 100, 99, 99, 100, 99, 100, 100, 99, 99, 100, 100, 99, 99, 100, 99, 100, 100, 100, 100, 100, 99, 99, 99, 100};
    vector<int> gain = {4157, 22114, 15688, 45, 8730, 15059, 8275, 30994, 26033, 9398, 27011, 10160, 24161, 2919, 27675, 8787, 17903, 28615, 28927, 16910, 20226, 12986, 16697, 313, 30628, 31657, 16503, 27117, 27592, 12033, 6026, 5258, 30654, 29874, 28392, 13874, 2752, 20144, 14635, 16204, 18793, 16246, 3472, 2562, 12345, 126, 4729, 6339};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 764798.3793791812;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int M = 94189;
    vector<int> day = {94188, 188376, 282564, 376752, 470940, 565128, 659316, 753504, 847692, 941880, 1036068, 1130256, 1224444, 1318632, 1412820, 1507008, 1601196, 1695384, 1789572, 1883760, 1977948, 2072136, 2166324, 2260512, 2354700, 2448888, 2543076, 2637264, 2731452, 2825640, 2919828, 3014016, 3108204, 3202392, 3296580, 3390768, 3484956, 3579144, 3673332, 3767520, 3861708, 3955896, 4050084, 4144272, 4238460, 4332648, 4426836, 4521024};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189, 94189};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4615213.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int M = 90317;
    vector<int> day = {90316, 180632, 270948, 361264, 451580, 541896, 632212, 722528, 812844, 903160, 993476, 1083792, 1174108, 1264424, 1354740, 1445056, 1535372, 1625688, 1716004, 1806320, 1896636, 1986952, 2077268, 2167584, 2257900, 2348216, 2438532, 2528848, 2619164, 2709480, 2799796, 2890112, 2980428, 3070744, 3161060, 3251376, 3341692, 3432008, 3522324, 3612640, 3702956, 3793272, 3883588, 3973904, 4064220, 4154536, 4244852};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317, 90317};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4335169.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int M = 91373;
    vector<int> day = {91372, 182744, 274116, 365488, 456860, 548232, 639604, 730976, 822348, 913720, 1005092, 1096464, 1187836, 1279208, 1370580, 1461952, 1553324, 1644696, 1736068, 1827440, 1918812, 2010184, 2101556, 2192928, 2284300, 2375672, 2467044, 2558416, 2649788, 2741160, 2832532, 2923904, 3015276, 3106648, 3198020, 3289392, 3380764, 3472136, 3563508, 3654880, 3746252, 3837624, 3928996, 4020368, 4111740, 4203112};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373, 91373};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4294485.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int M = 99088;
    vector<int> day = {99087, 198174, 297261, 396348, 495435, 594522, 693609, 792696, 891783, 990870, 1089957, 1189044, 1288131, 1387218, 1486305, 1585392, 1684479, 1783566, 1882653, 1981740, 2080827, 2179914, 2279001, 2378088, 2477175, 2576262, 2675349, 2774436, 2873523, 2972610, 3071697, 3170784, 3269871, 3368958, 3468045, 3567132, 3666219, 3765306, 3864393, 3963480, 4062567, 4161654, 4260741, 4359828, 4458915, 4558002};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088, 99088};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4657090.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int M = 98331;
    vector<int> day = {98330, 196660, 294990, 393320, 491650, 589980, 688310, 786640, 884970, 983300, 1081630, 1179960, 1278290, 1376620, 1474950, 1573280, 1671610, 1769940, 1868270, 1966600, 2064930, 2163260, 2261590, 2359920, 2458250, 2556580, 2654910, 2753240, 2851570, 2949900, 3048230, 3146560, 3244890, 3343220, 3441550, 3539880, 3638210, 3736540, 3834870, 3933200, 4031530, 4129860, 4228190, 4326520, 4424850, 4523180, 4621510, 4719840, 4818170, 4916500};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331, 98331};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 5014831.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int M = 97280;
    vector<int> day = {97279, 194558, 291837, 389116, 486395, 583674, 680953, 778232, 875511, 972790, 1070069, 1167348, 1264627, 1361906, 1459185, 1556464, 1653743, 1751022, 1848301, 1945580, 2042859, 2140138, 2237417, 2334696, 2431975, 2529254, 2626533, 2723812, 2821091, 2918370, 3015649, 3112928, 3210207, 3307486, 3404765, 3502044, 3599323, 3696602, 3793881, 3891160, 3988439, 4085718, 4182997, 4280276, 4377555, 4474834, 4572113};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280, 97280};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4669393.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int M = 98834;
    vector<int> day = {98833, 197666, 296499, 395332, 494165, 592998, 691831, 790664, 889497, 988330, 1087163, 1185996, 1284829, 1383662, 1482495, 1581328, 1680161, 1778994, 1877827, 1976660, 2075493, 2174326, 2273159, 2371992, 2470825, 2569658, 2668491, 2767324, 2866157, 2964990, 3063823, 3162656, 3261489, 3360322, 3459155, 3557988, 3656821, 3755654, 3854487, 3953320, 4052153, 4150986, 4249819, 4348652, 4447485, 4546318, 4645151, 4743984};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834, 98834};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4842818.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int M = 99578;
    vector<int> day = {99577, 199154, 298731, 398308, 497885, 597462, 697039, 796616, 896193, 995770, 1095347, 1194924, 1294501, 1394078, 1493655, 1593232, 1692809, 1792386, 1891963, 1991540, 2091117, 2190694, 2290271, 2389848, 2489425, 2589002, 2688579, 2788156, 2887733, 2987310, 3086887, 3186464, 3286041, 3385618, 3485195, 3584772, 3684349, 3783926, 3883503, 3983080, 4082657, 4182234, 4281811, 4381388, 4480965};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578, 99578};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4580543.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int M = 94003;
    vector<int> day = {94002, 188004, 282006, 376008, 470010, 564012, 658014, 752016, 846018, 940020, 1034022, 1128024, 1222026, 1316028, 1410030, 1504032, 1598034, 1692036, 1786038, 1880040, 1974042, 2068044, 2162046, 2256048, 2350050, 2444052, 2538054, 2632056, 2726058, 2820060, 2914062, 3008064, 3102066, 3196068, 3290070, 3384072, 3478074, 3572076, 3666078, 3760080, 3854082, 3948084, 4042086, 4136088, 4230090, 4324092, 4418094, 4512096};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003, 94003};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4606099.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int M = 92017;
    vector<int> day = {92016, 184032, 276048, 368064, 460080, 552096, 644112, 736128, 828144, 920160, 1012176, 1104192, 1196208, 1288224, 1380240, 1472256, 1564272, 1656288, 1748304, 1840320, 1932336, 2024352, 2116368, 2208384, 2300400, 2392416, 2484432, 2576448, 2668464, 2760480, 2852496, 2944512, 3036528, 3128544, 3220560, 3312576, 3404592, 3496608, 3588624, 3680640, 3772656, 3864672, 3956688, 4048704, 4140720, 4232736, 4324752, 4416768, 4508784};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017, 92017};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4600801.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int M = 98374;
    vector<int> day = {102900, 2053032, 201273, 1456188, 1902603, 749146, 440468, 409565, 1573232, 1763272, 2024066, 1259442, 466681, 98373, 552400, 1561416, 1986897, 1995470, 1062696, 2198339, 1664899, 778047, 2227221, 1161069, 543514, 2066327, 1463424, 1877423, 1878324, 853113, 2070048, 2125371, 443421, 2317621, 437992, 299646, 328613, 1055535, 650773, 1928083, 2077366, 1357815, 1049859, 2096438, 2031844, 1861645, 951486};
    vector<int> win = {98, 99, 98, 96, 95, 97, 98, 100, 97, 100, 100, 100, 98, 97, 97, 97, 95, 96, 96, 98, 95, 99, 98, 99, 95, 96, 98, 96, 100, 95, 100, 95, 96, 100, 99, 96, 96, 98, 95, 99, 97, 95, 96, 100, 98, 97, 100};
    vector<int> gain = {11947, 11084, 98374, 98374, 7186, 98374, 12027, 98374, 5110, 98374, 23276, 98374, 1720, 98374, 17832, 98374, 98374, 9014, 15805, 98374, 98374, 5594, 20909, 98374, 98374, 3444, 6855, 12706, 22172, 98374, 24849, 3528, 9778, 98374, 26488, 98374, 11546, 26009, 98374, 3014, 23234, 98374, 98374, 25706, 17046, 98374, 98374};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1480699.827910172;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int M = 98537;
    vector<int> day = {3101533, 3002452, 1502396, 1476513, 429517, 2192148, 1600932, 1046081, 98536, 633881, 2608308, 1798004, 947545, 528053, 1067126, 1183638, 429178, 327848, 2903916, 2407022, 1279441, 2505558, 2203232, 732417, 2805380, 3002997, 849009, 1377977, 215191, 3112637, 1485272, 2519518, 313727, 2706844, 830953, 2093612, 318591, 330642, 554780, 1699468, 1278709, 2313583, 1995076, 1173445, 129145, 1896540, 2291181, 1079324};
    vector<int> win = {98, 96, 99, 99, 97, 98, 98, 99, 96, 96, 96, 97, 99, 98, 95, 97, 96, 99, 96, 95, 98, 98, 97, 97, 97, 100, 96, 99, 97, 98, 95, 96, 96, 100, 95, 95, 98, 97, 97, 95, 100, 95, 97, 100, 98, 99, 95, 100};
    vector<int> gain = {98537, 98537, 23610, 98537, 12430, 98537, 98537, 98537, 98537, 98537, 98537, 98537, 98537, 98537, 25820, 6728, 98537, 2112, 98537, 98537, 23926, 98537, 497, 98537, 98537, 18865, 22217, 98537, 98537, 32033, 2612, 4214, 98537, 98537, 98537, 98537, 29027, 24605, 7292, 98537, 98537, 17305, 98537, 98537, 18119, 98537, 98537, 7783};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1755935.2856307123;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int M = 98939;
    vector<int> day = {1751513, 2511172, 923806, 2541924, 1363470, 1340051, 108935, 929521, 542524, 1454699, 1887733, 2085609, 12896, 382421, 207873, 1986671, 2184547, 1757483, 443586, 1117189, 740400, 839338, 878696, 2431016, 1652575, 2298237, 641462, 2397175, 840883, 1103073, 365187, 892572, 2283485, 1004135, 886496, 1245120, 1789813, 1785842, 1758135, 2424870, 1553637, 858172, 306811, 337311, 1109379, 1216127};
    vector<int> win = {100, 100, 100, 99, 97, 95, 95, 97, 100, 99, 95, 98, 95, 100, 99, 98, 95, 96, 100, 100, 100, 96, 97, 98, 98, 98, 96, 99, 96, 100, 96, 95, 99, 100, 100, 100, 98, 100, 100, 95, 98, 100, 99, 96, 99, 100};
    vector<int> gain = {98939, 98939, 9129, 27007, 15710, 98939, 98939, 3496, 98939, 98939, 98939, 98939, 9997, 11604, 98939, 98939, 98939, 25002, 98939, 29083, 98939, 98939, 11672, 11350, 98939, 22870, 98939, 98939, 3277, 98939, 23485, 27354, 98939, 98939, 14422, 24986, 19177, 11483, 24219, 3709, 98939, 31238, 98939, 2748, 18708, 98939};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1785260.7294200633;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int M = 95760;
    vector<int> day = {1774585, 1573126, 1345679, 120986, 2522847, 678283, 774042, 819559, 1450369, 516672, 657717, 1050897, 1070213, 2313183, 633004, 670426, 432666, 1024918, 95759, 2294663, 213845, 1940500, 1782006, 1249920, 920132, 1909162, 2198904, 612431, 1813249, 2103145, 411282, 1546128, 1583067, 2427088, 824373, 1881941, 1025316, 309604, 144199, 787227, 946905, 1678826, 2007386, 134393, 2407061, 2401545, 1354610, 958853, 1154161, 405363};
    vector<int> win = {100, 100, 95, 95, 96, 99, 96, 100, 96, 98, 97, 95, 97, 100, 96, 97, 98, 99, 96, 100, 98, 97, 95, 96, 98, 95, 98, 98, 100, 100, 96, 97, 96, 95, 100, 95, 96, 100, 100, 100, 99, 98, 97, 99, 97, 97, 100, 98, 95, 98};
    vector<int> gain = {95760, 28275, 95760, 4436, 95760, 22046, 95760, 31199, 95760, 95760, 14755, 24672, 8414, 11123, 1955, 32037, 9631, 95760, 95760, 95760, 95760, 12137, 18571, 95760, 95760, 17549, 95760, 95760, 4176, 95760, 19829, 95760, 13539, 23660, 11662, 95760, 25822, 95760, 14137, 22683, 3206, 95760, 95760, 3754, 31467, 95760, 25014, 5821, 95760, 95760};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1517917.389633272;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int M = 97190;
    vector<int> day = {1620551, 500517, 1323059, 1740199, 396590, 1852348, 1010112, 1204972, 1235552, 353653, 1107301, 1239021, 723593, 815734, 2443527, 52980, 2230690, 1107783, 2036312, 2327879, 712390, 377479, 2628877, 35280, 1837388, 1350360, 291044, 1732358, 1523362, 1426173, 263796, 614331, 2726066, 2531688, 428744, 2035007, 494387, 1259052, 245774, 1639484, 2425068, 127484, 4446, 2133501, 638457, 912923, 1880738, 517142, 1937818, 159958};
    vector<int> win = {95, 98, 99, 98, 96, 100, 98, 95, 98, 95, 97, 100, 97, 100, 99, 97, 98, 100, 96, 98, 95, 99, 100, 98, 100, 100, 95, 97, 98, 95, 96, 95, 95, 100, 100, 99, 96, 95, 95, 97, 100, 98, 95, 97, 100, 98, 96, 100, 100, 98};
    vector<int> gain = {97190, 15005, 97190, 31635, 10604, 3228, 97190, 97190, 15349, 97190, 97190, 4982, 6155, 97190, 9431, 11604, 97190, 31763, 12693, 97190, 97190, 9118, 97190, 14245, 97190, 5925, 8982, 97190, 97190, 97190, 1708, 97190, 97190, 97190, 23823, 97190, 97190, 567, 97190, 14618, 97190, 97190, 24389, 97190, 870, 97190, 13, 24101, 97190, 21101};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1416827.5387958945;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int M = 96664;
    vector<int> day = {96663, 869091, 2005714, 1678212, 2062947, 1550230, 2160192, 2063529, 406731, 634272, 1084813, 2353518, 1316552, 310068, 411559, 1509878, 1786369, 1312483, 646735, 1523882, 508222, 742625, 213405, 1202080, 636238, 193326, 974521, 2038704, 2013684, 666017, 1811167, 1626444, 1413215, 965754, 1003300, 772428, 604885, 1650646, 1983361, 1215820, 1105417, 762262, 1886698, 2256855, 1757394};
    vector<int> win = {99, 95, 96, 95, 98, 95, 99, 99, 99, 96, 95, 98, 96, 98, 100, 99, 96, 97, 98, 97, 99, 96, 98, 100, 98, 100, 98, 98, 98, 98, 97, 99, 97, 95, 99, 95, 97, 97, 98, 97, 100, 95, 99, 96, 96};
    vector<int> gain = {96664, 96664, 7698, 10085, 21798, 15783, 96664, 21099, 96664, 12491, 96664, 96664, 13951, 96664, 5352, 96664, 2391, 96664, 9520, 4120, 96664, 96664, 22142, 96664, 25154, 96664, 28590, 22061, 12533, 204, 30250, 96664, 96664, 96664, 13629, 27682, 96664, 28902, 96664, 21070, 30242, 32322, 96664, 96664, 96664};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1519928.848535856;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int M = 93742;
    vector<int> day = {1971216, 673356, 2287841, 2497814, 1945171, 2591555, 2061276, 1657799, 860838, 1470317, 1185001, 2266772, 2880014, 3071187, 2155017, 954579, 154603, 2721751, 1048320, 31288, 1162588, 1851430, 1845281, 1564058, 1246368, 2710426, 275768, 1441954, 463250, 2295878, 2414862, 1254692, 369509, 2977446, 2685296, 2883705, 2786273, 1142061, 650732, 1460123, 47105, 767097, 1348213, 2248758, 1751540, 137962, 2389619, 183247, 556991};
    vector<int> win = {95, 98, 96, 98, 99, 95, 96, 98, 95, 100, 100, 100, 99, 96, 98, 98, 97, 97, 99, 100, 98, 99, 97, 98, 95, 96, 98, 96, 98, 100, 95, 97, 100, 96, 100, 100, 100, 98, 99, 95, 95, 100, 96, 97, 99, 100, 95, 98, 100};
    vector<int> gain = {22364, 26552, 26348, 93742, 93742, 93742, 93742, 93742, 93742, 31760, 2353, 27448, 93742, 93742, 93742, 93742, 16416, 7073, 93742, 20855, 8213, 14189, 93742, 93742, 93742, 163, 93742, 93742, 93742, 30459, 14454, 8104, 93742, 93742, 93742, 21841, 93742, 93742, 93742, 4869, 23366, 93742, 93742, 93742, 93742, 93742, 93742, 27649, 93742};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 2043321.0772543377;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int M = 92600;
    vector<int> day = {737715, 1423141, 1826461, 546768, 1868889, 1841317, 1375039, 2059673, 2387269, 1253586, 1162566, 1392721, 1935257, 2273541, 352402, 1627465, 1649297, 1733862, 454169, 2027856, 204620, 1534866, 1054673, 2082123, 769232, 112021, 1147272, 1420043, 2254067, 1516256, 2174474, 1039908, 947309, 2412670, 1441168, 222340, 2411945, 330118, 797608, 1346185, 19422, 2148122, 368589, 639367, 250846, 854710, 649373, 2294670};
    vector<int> win = {98, 100, 97, 95, 97, 98, 97, 100, 97, 100, 96, 97, 97, 96, 98, 96, 99, 98, 98, 99, 97, 96, 99, 96, 95, 99, 99, 95, 99, 98, 96, 99, 95, 99, 96, 99, 99, 96, 98, 100, 95, 97, 96, 95, 98, 96, 95, 97};
    vector<int> gain = {92600, 28374, 92600, 92600, 13265, 2932, 6065, 27051, 92600, 92600, 13715, 32153, 92600, 12018, 9497, 92600, 13798, 92600, 92600, 92600, 92600, 29920, 15161, 616, 22123, 92600, 92600, 19416, 92600, 92600, 13346, 92600, 92600, 5653, 516, 24868, 32409, 92600, 2273, 92600, 20057, 92600, 21955, 92600, 15179, 92600, 5749, 31886};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1394090.5425787081;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int M = 97624;
    vector<int> day = {621333, 1875769, 1493628, 971393, 595128, 399882, 1370858, 204636, 107013, 1418496, 902397, 707151, 1390123, 1630153, 1175612, 1591251, 2078846, 1056776, 959432, 1663101, 1611732, 1401252, 1671855, 1981223, 1431608, 918281, 942465, 2414614, 2204001, 1769478, 2428168, 1603312, 2316991, 1652348, 1973392, 914596, 302259, 804774, 497505, 1867101, 1081528, 9390, 2219368, 1273235, 2106378};
    vector<int> win = {96, 98, 95, 100, 99, 95, 95, 99, 96, 97, 97, 99, 100, 97, 97, 100, 95, 98, 100, 97, 98, 99, 96, 98, 98, 98, 99, 95, 98, 100, 96, 99, 97, 100, 95, 97, 99, 98, 96, 98, 97, 97, 99, 96, 99};
    vector<int> gain = {14400, 31522, 97624, 13732, 97624, 97624, 97624, 97624, 97624, 5595, 97624, 97624, 2840, 12899, 97624, 97624, 97624, 97624, 17456, 22316, 28552, 5412, 21443, 10534, 11300, 31989, 9684, 97624, 97624, 97624, 7490, 7099, 97624, 20563, 97624, 20993, 97624, 97624, 97624, 97624, 21213, 20306, 31004, 97624, 32369};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1638685.984986993;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int M = 99801;
    vector<int> day = {723575, 2644944, 2446051, 1156168, 2859870, 1056368, 1575657, 1821511, 1393645, 19658, 2233585, 1706382, 2660270, 1475857, 1359052, 1366333, 1934185, 319058, 1710673, 2333385, 1255968, 2033985, 2760070, 2133785, 956568, 623775, 3073594, 1722400, 343746, 2973794, 2542320, 1607341, 1259252, 424175, 12975, 1834385, 523975, 856768, 2433185, 841116, 2886221, 119458, 731287, 219258, 2642120, 757165};
    vector<int> win = {99, 98, 99, 98, 99, 96, 98, 98, 97, 99, 95, 100, 98, 97, 95, 98, 95, 99, 98, 97, 95, 97, 99, 97, 100, 95, 97, 99, 100, 98, 99, 96, 95, 97, 97, 95, 100, 97, 100, 98, 100, 98, 100, 96, 96, 100};
    vector<int> gain = {99801, 15582, 9335, 99801, 99801, 99801, 99801, 99801, 9724, 25167, 99801, 99801, 24644, 99801, 99801, 20267, 99801, 99801, 14549, 99801, 99801, 99801, 99801, 99801, 99801, 99801, 99801, 11038, 5317, 99801, 99801, 30925, 19666, 99801, 27925, 13817, 99801, 27530, 99801, 99801, 14124, 99801, 8544, 99801, 99801, 10029};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 1995515.2000507645;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int M = 84288;
    vector<int> day = {624410, 296780, 270600, 177129, 442515, 84034, 215116, 588509, 129384, 235274, 671455, 184511, 606492, 330693, 24778, 150944, 150849, 45820, 109128, 509195, 93893, 251050, 229453, 156049, 555270, 516391, 77850, 557572, 676256, 308829, 543425, 324383, 525567, 634856, 653911, 482777, 347614, 373657, 216950, 426996, 277851, 613546, 465904, 404904, 475376};
    vector<int> win = {64, 79, 79, 82, 62, 21, 78, 87, 34, 24, 95, 32, 67, 96, 29, 22, 69, 25, 29, 51, 23, 53, 33, 77, 27, 23, 86, 84, 32, 74, 67, 29, 59, 84, 50, 25, 98, 36, 41, 34, 70, 49, 61, 71, 51};
    vector<int> gain = {4203, 15192, 22687, 28269, 14193, 29470, 11120, 7594, 21590, 4602, 13999, 19992, 20063, 9560, 9172, 20393, 30299, 17941, 6705, 15839, 7024, 12426, 3955, 536, 27187, 16530, 12513, 16596, 32489, 28688, 20028, 15121, 7553, 542, 429, 1775, 18880, 21232, 13634, 27186, 16582, 456, 12905, 25069, 25982};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 94147.86;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int M = 16828;
    vector<int> day = {21708, 99672, 108199, 166795, 193074, 219993, 204126, 5198, 24604, 171345, 61513, 238632, 160764, 40698, 206158, 175290, 249477, 256198, 189273, 194559, 136259, 21454, 74519, 87018, 252385, 151649, 137665, 115557, 230563, 36153, 127284, 23132, 77421, 258637, 100826, 38103, 56961, 133453, 220106};
    vector<int> win = {32, 91, 55, 39, 38, 49, 47, 65, 61, 48, 77, 81, 92, 83, 29, 36, 66, 66, 96, 50, 92, 50, 92, 48, 23, 34, 53, 50, 97, 60, 86, 41, 91, 24, 88, 46, 79, 98, 41};
    vector<int> gain = {1353, 3134, 3511, 10947, 7638, 3616, 14427, 5174, 2517, 635, 14111, 11740, 2914, 15558, 3458, 10719, 4798, 11939, 6137, 9579, 6520, 1464, 15012, 5556, 13719, 10503, 4826, 11195, 2713, 1546, 11320, 13211, 13638, 9775, 14437, 10306, 7570, 1, 11279};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 19614.972638963547;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int M = 39910;
    vector<int> day = {391310, 223181, 301183, 20763, 537916, 481572, 97194, 415951, 512537, 353248, 311886, 60541, 356860, 172864, 236826, 50462, 412517, 168238, 202060, 454338, 344645, 102371, 280722, 502228, 359033, 251686, 499810, 240809, 448508, 44877, 125192, 157042, 305263, 66734, 457337, 119302};
    vector<int> win = {92, 21, 57, 22, 31, 99, 75, 53, 28, 49, 57, 53, 66, 78, 92, 99, 39, 58, 46, 51, 22, 71, 94, 66, 43, 81, 25, 30, 74, 20, 86, 32, 91, 83, 51, 69};
    vector<int> gain = {24125, 14492, 16634, 17652, 15337, 21396, 8003, 29736, 19864, 2690, 17304, 6594, 86, 27629, 6825, 8166, 71, 22463, 23059, 2834, 19251, 32033, 28215, 11015, 32685, 27309, 22663, 24820, 9020, 786, 29669, 8267, 20135, 31407, 18687, 11925};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 39910.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int M = 24058;
    vector<int> day = {92596, 142140, 67914, 126086, 89724, 262006, 122267, 44161, 30687, 253131, 91778, 19357, 67349, 196346, 243243, 162379, 223693, 125914, 282918, 265626, 35370, 178830, 50276, 285384, 209358, 52480, 101045, 253659, 286991, 17256, 152572};
    vector<int> win = {55, 50, 42, 22, 45, 45, 33, 51, 68, 55, 80, 21, 80, 68, 89, 96, 57, 94, 87, 87, 57, 26, 75, 57, 41, 58, 99, 47, 69, 96, 23};
    vector<int> gain = {5619, 10579, 6912, 19759, 108, 7528, 6724, 21793, 12306, 3155, 23202, 5884, 18011, 16536, 19147, 21725, 19459, 7007, 10079, 7205, 8759, 15691, 12436, 17506, 5518, 2852, 12437, 6857, 2031, 4915, 4983};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 28504.32;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int M = 5525;
    vector<int> day = {64547, 46533, 84368, 5930, 94153, 25377, 5054, 62942, 13181, 34335, 76172, 83316, 32722, 49962, 97822, 67119, 20146, 70715, 40137, 88164, 25941, 56177, 74037, 59525, 80647, 92351, 99530, 39705, 1639, 16347, 26304, 72198, 53082, 88130, 38215, 49880, 106791, 31820, 32180, 44290, 35845, 73459, 12673, 8198, 53088, 9282, 102980};
    vector<int> win = {91, 20, 42, 96, 20, 42, 88, 56, 31, 40, 67, 53, 97, 36, 25, 90, 34, 33, 51, 51, 89, 54, 77, 77, 81, 51, 81, 57, 20, 58, 75, 75, 53, 77, 79, 88, 49, 52, 30, 81, 30, 34, 52, 74, 64, 99, 42};
    vector<int> gain = {1927, 4492, 4622, 741, 2644, 5228, 584, 3514, 4802, 2731, 2163, 4579, 4587, 5212, 3596, 2890, 4125, 1508, 3543, 5345, 1327, 2560, 4012, 4604, 4642, 4500, 1200, 236, 3380, 2574, 3124, 4473, 903, 9, 2051, 1907, 4956, 1001, 146, 1601, 2040, 2145, 354, 3675, 4815, 2218, 2730};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 6602.096;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int M = 3351;
    vector<int> day = {48924, 21719, 24503, 46480, 17462, 6517, 56805, 31747, 4459, 2444, 34706, 36384, 42601, 29446, 14030, 44379, 41079, 45792, 17117, 51419, 37315, 6254, 18397, 11453, 34528, 37628, 24955, 19823, 14451, 37067, 42664, 12666, 48901, 34091, 21794, 35540, 49524, 26809, 8643, 29558, 40711, 54702, 46875, 19358, 22323, 36222};
    vector<int> win = {52, 66, 49, 61, 47, 44, 32, 70, 84, 39, 90, 47, 75, 46, 49, 73, 23, 80, 71, 88, 40, 53, 42, 49, 36, 53, 51, 49, 100, 62, 29, 62, 83, 91, 61, 69, 100, 85, 61, 40, 28, 89, 26, 51, 95, 35};
    vector<int> gain = {1609, 1614, 3024, 1016, 2017, 2478, 3229, 1374, 776, 2330, 1380, 270, 804, 630, 1090, 2401, 1857, 1162, 435, 3019, 929, 1081, 2304, 776, 452, 2680, 1968, 2470, 2991, 1568, 748, 2086, 16, 264, 333, 319, 3307, 2719, 2966, 2356, 598, 2356, 646, 2720, 2981, 2853};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4292.640194078921;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int M = 69163;
    vector<int> day = {619577, 561997, 237707, 594199, 161767, 517177, 124110, 85372, 294950, 445376, 6869, 476249, 665671, 128108, 81566, 61837, 194406, 525653, 81525, 652156, 225675, 36689, 331677, 669398, 397844, 517682, 635673, 547160, 584138, 61919, 311166, 665906, 337816, 669403, 322170, 686768, 270148, 92130, 173264, 372035, 148004, 299733, 388928, 424929, 508671, 95429, 369961};
    vector<int> win = {71, 64, 73, 84, 77, 56, 78, 78, 60, 46, 44, 51, 52, 85, 25, 62, 23, 47, 89, 99, 57, 43, 60, 32, 47, 60, 88, 26, 99, 76, 82, 100, 28, 82, 43, 35, 45, 41, 96, 38, 37, 36, 46, 44, 68, 70, 81};
    vector<int> gain = {1468, 1623, 2726, 18198, 32698, 2160, 21880, 1159, 18272, 19021, 241, 9828, 187, 17732, 29297, 1042, 26238, 19994, 677, 1215, 22024, 8241, 12935, 24739, 27424, 12239, 24846, 11474, 21527, 22849, 27955, 16411, 4015, 14132, 26975, 28894, 7524, 11563, 28180, 13646, 30497, 16221, 23175, 30081, 28136, 9753, 3432};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 91915.52845047778;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int M = 2214;
    vector<int> day = {7237, 17315, 20218, 22986, 6632, 20771, 7842, 9687, 22084, 13900, 24440, 24613, 14267, 8580, 556, 9815, 16460, 8540, 3194, 15897, 6344, 9589, 27729, 26639, 10455, 3441, 19613, 4753, 23067, 5883, 11769, 2618, 18188, 18695};
    vector<int> win = {45, 21, 80, 89, 40, 38, 23, 48, 82, 87, 48, 21, 61, 75, 99, 26, 35, 79, 54, 98, 89, 97, 45, 33, 80, 58, 46, 25, 87, 76, 84, 98, 94, 35};
    vector<int> gain = {44, 1460, 861, 779, 1031, 1968, 853, 1236, 333, 1705, 191, 2077, 1793, 1987, 1515, 1948, 1999, 1822, 287, 786, 1520, 1422, 1808, 1410, 1247, 2134, 2020, 1811, 368, 152, 1938, 1902, 1674, 1769};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 4991.133249095811;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int M = 13091;
    vector<int> day = {168430, 18383, 192846, 39813, 104419, 29467, 136921, 127317, 169557, 52620, 72429, 4629, 169529, 156880, 73199, 21757, 190720, 122136, 110604, 190330, 152773, 103158, 169448, 94044, 143359, 34936, 108135, 87681, 61106, 151664, 95328, 205453, 184276, 115280, 171947, 130590, 48817, 61693, 77360, 10299, 12427};
    vector<int> win = {87, 28, 77, 61, 47, 27, 66, 67, 52, 88, 46, 42, 27, 91, 60, 79, 56, 80, 72, 47, 47, 94, 77, 77, 25, 55, 36, 71, 95, 64, 24, 20, 40, 66, 78, 46, 86, 83, 79, 28, 80};
    vector<int> gain = {901, 1135, 11574, 9301, 5065, 6535, 7433, 1274, 4718, 6533, 8218, 3054, 4981, 12104, 7963, 8859, 732, 3206, 3884, 5557, 1926, 2367, 4370, 4013, 9550, 3159, 9047, 3647, 6564, 5389, 5819, 8616, 12633, 2902, 6918, 9781, 12800, 414, 9514, 4129, 4064};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 16209.4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int M = 21219;
    vector<int> day = {105694, 129123, 124293, 27882, 177577, 133982, 109737, 78433, 154047, 36171, 136123, 170116, 131936, 48363, 197847, 35953, 207739, 209152, 175529, 132317, 42552, 140061, 16463, 109737, 90268, 187311, 80183, 213225, 140498, 60091, 153097, 209693, 161544};
    vector<int> win = {52, 52, 45, 23, 52, 95, 67, 51, 76, 26, 62, 63, 30, 44, 55, 42, 74, 47, 61, 98, 77, 39, 75, 51, 93, 74, 56, 93, 25, 20, 26, 83, 42};
    vector<int> gain = {6947, 7499, 5324, 6218, 18977, 6546, 1221, 16529, 6532, 1507, 14647, 4005, 9304, 18462, 17474, 9665, 3543, 1401, 2038, 7361, 1808, 7811, 11352, 8358, 8586, 7022, 19237, 1957, 16878, 11056, 2359, 11316, 10943};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 28544.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int M = 54289;
    vector<int> day = {572031, 294547, 312797, 92522, 434085, 296754, 525468, 583783, 155869, 352394, 116535, 401475, 355766, 411914, 449266, 431009, 325059, 533164, 107515, 63228, 266580, 119999, 530872, 95969, 206981, 235454, 41987, 245311, 371608, 204682, 153132, 420710, 564335, 61334, 556714, 282548, 134550, 181357, 396970, 463180, 398334, 493316, 28988, 293068};
    vector<int> win = {99, 95, 95, 96, 99, 98, 98, 96, 100, 95, 99, 98, 100, 98, 95, 99, 97, 98, 97, 99, 97, 95, 100, 100, 99, 100, 95, 97, 97, 95, 96, 100, 95, 99, 100, 100, 100, 96, 100, 96, 96, 97, 99, 100};
    vector<int> gain = {4888, 25757, 8732, 28116, 19797, 24648, 14356, 6649, 6267, 22470, 24386, 14666, 27392, 8542, 25686, 20468, 610, 28570, 31633, 30748, 22327, 10589, 32581, 17990, 28913, 31730, 31354, 15965, 3287, 4008, 21294, 24393, 30653, 30827, 29572, 16110, 7351, 12463, 2377, 10018, 18648, 26336, 24743, 15704};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 509182.0016978797;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int M = 61347;
    vector<int> day = {230509, 12775, 515259, 144410, 450768, 572496, 153634, 544995, 397241, 527760, 241201, 427092, 478909, 311407, 358109, 625410, 170427, 364569, 32933, 393251, 603440, 578115, 240061, 193866, 337577, 56240, 467135, 506509, 625445, 99591, 109332, 637423, 114300, 275562, 473109, 200416, 540007, 73905, 552994, 287775, 247501, 517606, 168191};
    vector<int> win = {95, 96, 96, 99, 96, 100, 96, 98, 97, 95, 97, 99, 95, 100, 97, 99, 99, 100, 96, 97, 98, 98, 100, 100, 96, 98, 98, 97, 100, 96, 100, 96, 97, 95, 98, 95, 95, 95, 95, 97, 97, 98, 98};
    vector<int> gain = {8500, 27861, 1491, 19547, 14712, 18173, 27849, 6305, 12416, 11170, 14552, 19116, 13052, 27785, 31079, 13929, 10452, 32745, 9184, 3874, 14531, 23388, 28729, 13381, 24453, 23625, 5695, 11055, 20736, 23137, 12955, 21686, 7694, 3701, 15469, 5314, 7603, 25466, 29817, 25363, 20983, 7110, 24724};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 494242.4502243477;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int M = 48360;
    vector<int> day = {73642, 176768, 255609, 597443, 491325, 212327, 214459, 44513, 580474, 608657, 99028, 23933, 103902, 304328, 321528, 520652, 312235, 183398, 364914, 111450, 471720, 396469, 487014, 451487, 528265, 489124, 277121, 554659, 329915, 362766, 262043, 390611, 448525, 272360, 149679, 171582, 619632, 492114, 235638, 418402, 228746, 109759, 143982, 339018, 652247, 50906};
    vector<int> win = {99, 100, 98, 99, 99, 99, 95, 97, 97, 97, 96, 97, 97, 98, 98, 97, 96, 98, 100, 98, 95, 95, 95, 96, 99, 100, 98, 97, 97, 98, 100, 98, 97, 99, 95, 96, 99, 95, 99, 96, 95, 100, 100, 97, 97, 97};
    vector<int> gain = {14353, 26608, 1694, 29115, 20503, 9873, 12259, 31622, 30923, 8139, 25151, 15732, 10491, 17354, 4081, 21471, 13481, 9212, 29097, 5753, 30146, 3222, 19278, 12600, 111, 7684, 18659, 22474, 1743, 28222, 9523, 16286, 16119, 4760, 22561, 20, 11125, 12326, 15879, 26047, 13532, 1012, 7574, 22350, 4332, 17415};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 437801.66602838057;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int M = 71246;
    vector<int> day = {576642, 257795, 280516, 296979, 45835, 483376, 187619, 313943, 369610, 220159, 425700, 182688, 529688, 345424, 449705, 415021, 547947, 25662, 156186, 228243, 503565, 77689, 381972, 113636, 301092, 379530, 223958, 166814, 177732, 119617, 550882, 170806, 462423, 144120, 399550, 11868, 154749, 82267};
    vector<int> win = {98, 95, 99, 95, 95, 95, 100, 96, 99, 98, 95, 99, 99, 98, 95, 97, 97, 99, 97, 98, 100, 99, 96, 96, 99, 95, 95, 98, 95, 97, 100, 99, 96, 98, 96, 100, 95, 99};
    vector<int> gain = {6063, 426, 28126, 12505, 3329, 7592, 28190, 7655, 8903, 18729, 27237, 5463, 5033, 8430, 31640, 8845, 3708, 16738, 20449, 22015, 24074, 22466, 12636, 7610, 26273, 23400, 16774, 20285, 11609, 1288, 29275, 7590, 14969, 2639, 17958, 16653, 16927, 25705};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 431464.40333787823;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int M = 5391;
    vector<int> day = {82969, 70837, 100432, 79927, 61540, 32769, 88947, 88790, 39637, 89033, 34882, 47839, 100220, 16148, 3770, 58905, 50688, 70164, 44901, 13141, 25978, 81639, 31427, 89540, 93243, 4943, 9308, 55982, 25298, 20492, 61338, 15123, 27103, 45307, 10451, 51215, 56934, 24288, 85255, 34873, 65509, 52738, 94857, 13777, 89370, 74011, 69299, 70206, 76624};
    vector<int> win = {98, 96, 100, 99, 97, 95, 97, 97, 97, 97, 96, 99, 98, 100, 100, 99, 96, 95, 99, 96, 99, 100, 96, 96, 100, 99, 99, 97, 95, 98, 96, 100, 98, 97, 98, 95, 100, 95, 97, 96, 100, 99, 96, 96, 100, 96, 99, 95, 96};
    vector<int> gain = {3371, 1421, 2580, 5214, 131, 2074, 3482, 1613, 5301, 4086, 4379, 1095, 2133, 3146, 4529, 4213, 5, 203, 448, 1671, 2220, 5116, 432, 1850, 4842, 1459, 2441, 610, 900, 4498, 2981, 1879, 2196, 4796, 940, 5065, 3092, 3339, 925, 2166, 3045, 397, 3665, 2758, 2318, 1639, 3376, 1033, 2613};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 66695.6463475982;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int M = 3890;
    vector<int> day = {54723, 24783, 31321, 35265, 31255, 15947, 58701, 54801, 1996, 61279, 29115, 49460, 21522, 47885, 25794, 10472, 11306, 108, 12621, 52311, 32813, 4019, 8810, 42789, 45370, 54597, 42614, 18337, 36915, 64234, 19516, 7722, 44078, 56746, 23278, 34661, 56641, 53804, 38623, 27677, 42303, 38021, 59204, 31690, 63943};
    vector<int> win = {97, 95, 95, 99, 95, 99, 96, 99, 100, 97, 96, 97, 96, 96, 95, 99, 99, 97, 95, 98, 98, 97, 98, 98, 98, 95, 100, 96, 95, 96, 100, 97, 100, 95, 97, 97, 100, 99, 95, 99, 96, 97, 97, 95, 99};
    vector<int> gain = {1947, 86, 293, 1256, 1334, 3814, 2147, 3251, 1429, 861, 3491, 2740, 3717, 1569, 3246, 286, 1451, 1222, 2126, 3068, 1704, 2979, 1743, 2397, 738, 1431, 2830, 3626, 3459, 1530, 3081, 2492, 1516, 3825, 3848, 1040, 201, 253, 553, 312, 457, 2717, 1570, 1851, 340};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 46201.69801299083;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int M = 30037;
    vector<int> day = {182078, 210471, 367815, 276520, 39184, 344960, 357701, 438109, 384144, 387868, 315028, 178183, 3843, 121681, 198954, 64138, 280704, 248025, 437609, 423575, 160865, 233570, 375129, 339709, 95967, 362052, 75209, 210202, 394355, 41254, 289109, 23545, 41737, 184310, 303122, 179930, 80048, 247597, 144049, 248379, 361299, 54045, 314459, 211455, 234915, 164591};
    vector<int> win = {97, 98, 96, 97, 95, 100, 97, 98, 100, 98, 100, 97, 100, 98, 97, 97, 99, 95, 95, 99, 96, 96, 100, 96, 98, 98, 96, 95, 100, 100, 97, 99, 100, 95, 97, 100, 98, 97, 98, 95, 96, 99, 95, 99, 96, 97};
    vector<int> gain = {1507, 8909, 12991, 2661, 5131, 6871, 2191, 9503, 5478, 10996, 15465, 8177, 9164, 23797, 28474, 6147, 25077, 23363, 263, 13788, 16590, 2420, 28829, 10157, 29606, 13942, 6232, 22375, 12754, 5452, 28342, 5600, 20152, 20110, 5662, 2411, 17922, 4879, 11826, 19658, 4808, 7, 1919, 15384, 14561, 2238};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 310603.41185284115;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int M = 81784;
    vector<int> day = {540137, 43755, 208194, 426136, 612466, 248756, 484148, 63998, 233083, 100029, 443876, 133670, 512631, 520950, 253345, 419907, 334922, 354573, 431846, 478289, 313273, 380251, 62084, 385583, 153971, 272849, 430329, 300600, 34546, 443214, 17751, 552792, 371201, 178373, 102745, 463113, 283723, 284457, 412078, 113574, 97146, 579951, 68712, 70632, 212432, 630164, 354330, 130984};
    vector<int> win = {96, 96, 95, 97, 97, 96, 97, 96, 99, 99, 98, 96, 99, 95, 99, 96, 97, 100, 97, 95, 96, 98, 95, 100, 100, 99, 100, 100, 97, 100, 95, 100, 95, 95, 98, 95, 96, 100, 97, 98, 95, 98, 97, 97, 95, 95, 98, 97};
    vector<int> gain = {26334, 11144, 1488, 30316, 26530, 15429, 32429, 9860, 12146, 31459, 24235, 27652, 14041, 15622, 29894, 23924, 5975, 19869, 15465, 23904, 29405, 24850, 32612, 13189, 7441, 965, 17545, 28060, 2539, 22466, 3014, 26744, 21670, 7837, 24795, 62, 31030, 2313, 8602, 5156, 9953, 28741, 26334, 22612, 7852, 9411, 23223, 27760};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 512413.9400822465;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int M = 30849;
    vector<int> day = {89658, 326343, 374730, 65741, 136114, 149128, 41943, 60031, 13118, 103654, 26776, 320938, 132612, 249860, 377968, 389382, 265839, 285362, 233687, 359050, 194583, 340387, 74699, 438954, 44016, 377736, 413300, 131032, 185831, 226244, 279950, 280008, 200454, 333242, 286050, 132612, 306509, 177418, 394777};
    vector<int> win = {95, 97, 99, 99, 98, 96, 97, 99, 97, 100, 96, 99, 100, 95, 98, 96, 99, 98, 100, 100, 98, 100, 97, 100, 98, 96, 100, 95, 100, 95, 98, 97, 98, 100, 97, 95, 99, 95, 98};
    vector<int> gain = {2737, 9052, 709, 11797, 16844, 19422, 834, 14530, 286, 24867, 18217, 9285, 6420, 29744, 18438, 25628, 2533, 7301, 25264, 6789, 7423, 11019, 26369, 25652, 17901, 944, 24525, 13485, 1601, 12421, 5611, 4720, 21738, 16162, 13880, 3062, 29365, 26322, 9731};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 337441.6562224681;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int M = 25757;
    vector<int> day = {129907, 29335, 192108, 105964, 198721, 209778, 225166, 210320, 206939, 165314, 132861, 207365, 242634, 34117, 210288, 69505, 240444, 174945, 23086, 63686, 144624, 19984, 100958, 202859, 104491, 88513, 214328, 134705, 100490, 57562};
    vector<int> win = {95, 97, 99, 97, 95, 100, 97, 96, 100, 100, 95, 97, 98, 100, 95, 97, 96, 99, 95, 99, 99, 96, 96, 100, 99, 97, 99, 96, 97, 96};
    vector<int> gain = {4917, 12295, 2439, 10136, 1616, 6610, 3327, 1995, 2333, 14050, 20890, 6521, 25313, 10162, 1423, 7250, 6847, 25534, 19442, 17518, 13369, 2552, 838, 3330, 20449, 10190, 24777, 1336, 5441, 10638};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 208002.36043020088;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int M = 20;
    vector<int> day = {2, 13, 8, 7, 9, 4, 6, 21};
    vector<int> win = {18, 83, 75, 23, 45, 23, 10, 98};
    vector<int> gain = {10, 9, 8, 10, 7, 16, 13, 20};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 35.908;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int M = 2;
    vector<int> day = {2};
    vector<int> win = {100};
    vector<int> gain = {2};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int M = 11;
    vector<int> day = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 101.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int M = 20;
    vector<int> day = {2, 13, 8, 8, 9, 4, 6, 21, 19, 22};
    vector<int> win = {18, 83, 75, 23, 45, 23, 10, 98, 60, 40};
    vector<int> gain = {10, 9, 3, 10, 7, 16, 13, 20, 5, 12};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 35.908;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int M = 5;
    vector<int> day = {2, 4, 4};
    vector<int> win = {60, 80, 90};
    vector<int> gain = {1, 5, 4};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 8.5;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int M = 100000;
    vector<int> day = {995775, 216984, 3508490, 306733, 1814061, 1827974, 2681058, 1549731, 2741977, 4383528, 2051149, 3376373, 3864415, 4455496, 3301119, 1899223, 1310603, 4942877, 3116221, 1175961, 4761015, 2977311, 747295, 2374125, 1202707, 796931, 2056495, 1945741, 2717890, 2484392, 809262, 4732434, 2188106, 4428520, 3219930, 1754806, 118084, 1562218, 2088283, 2964018, 2549460, 1533644, 1745570, 144042, 2288016, 2029168, 1795178, 2528055, 2501833, 4349805};
    vector<int> win = {40, 22, 12, 63, 20, 48, 16, 89, 97, 1, 56, 84, 0, 69, 84, 90, 88, 13, 87, 68, 11, 4, 95, 70, 82, 18, 28, 13, 81, 13, 89, 45, 66, 97, 25, 62, 55, 14, 19, 79, 86, 41, 91, 95, 86, 5, 13, 17, 82, 34};
    vector<int> gain = {2956, 30489, 62686, 50849, 87537, 84928, 33054, 148, 75970, 41108, 13929, 54579, 53778, 39526, 66883, 96194, 88289, 41862, 78160, 67734, 89652, 48027, 54136, 45363, 3528, 82479, 40143, 93728, 26423, 1482, 22550, 59026, 6839, 19560, 16263, 90946, 24234, 69477, 3721, 58707, 4747, 91174, 15037, 73432, 36245, 27596, 21193, 75844, 38161, 45184};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int M = 11;
    vector<int> day = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> win = {100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> gain = {1, 2, 3, 4, 10, 10, 10, 10, 10};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int M = 10;
    vector<int> day = {9, 7, 7};
    vector<int> win = {0, 60, 50};
    vector<int> gain = {10, 10, 5};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int M = 100000;
    vector<int> day = {100000, 100, 90000};
    vector<int> win = {100, 0, 10};
    vector<int> gain = {100000, 10000, 1};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 101000.0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int M = 2;
    vector<int> day = {1};
    vector<int> win = {75};
    vector<int> gain = {1};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int M = 10;
    vector<int> day = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> win = {1, 2, 3, 4, 5, 60, 7, 8, 90};
    vector<int> gain = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 18.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int M = 10;
    vector<int> day = {9, 18};
    vector<int> win = {40, 100};
    vector<int> gain = {10, 10};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 16.6;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int M = 100000;
    vector<int> day = {152157, 63576, 2532, 7654, 25235, 75732, 89644, 2526, 585685, 345987};
    vector<int> win = {69, 100, 1, 52, 73, 43, 12, 98, 73, 34};
    vector<int> gain = {14352, 76436, 42346, 254, 1235, 7896, 25367, 23754, 98465, 34};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 169938.99;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int M = 2;
    vector<int> day = {1, 1, 1};
    vector<int> win = {51, 51, 51};
    vector<int> gain = {1, 2, 2};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 2.02;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int M = 100000;
    vector<int> day = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 1, 13, 14, 15, 6, 7, 8, 14, 88888, 99999, 654, 3245, 654, 76, 45, 3, 65, 8765, 876, 465, 53, 65, 765, 87, 543, 7654, 7, 65456, 3543, 765756, 8568, 56, 6, 435, 345, 345, 54, 54, 4};
    vector<int> win = {65, 34, 1, 56, 65, 35, 6, 7, 9, 6, 65, 54, 43, 12, 43, 54, 6, 7, 8, 9, 70, 76, 54, 35, 0, 34, 5, 6, 7, 8, 9, 90, 99, 98, 76, 54, 13, 44, 50, 50, 50, 50, 50, 50, 50, 7, 6, 5, 4, 3};
    vector<int> gain = {53, 56, 234, 53453, 23, 34, 25, 35, 23423, 23423, 23423, 23423, 23423, 23423, 23423, 23, 3, 8, 8, 65, 4, 4, 3, 32, 12, 13, 5, 6, 7, 8, 9, 9, 8, 4, 5, 6, 7, 8, 9, 79, 79, 79, 77, 665, 543, 45, 3453, 34543, 34534, 345};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 100002.5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int M = 89947;
    vector<int> day = {4724529, 3132922, 4129159, 4855972, 2636226, 760134, 3751091, 1684477, 1301787, 3671631, 2293195, 4713138, 127093, 2258241, 2140679, 1174027, 2819170, 4777614, 3612021, 1196253, 4895402, 3730683, 653662, 3974116, 1633542, 2234452, 2764758, 3662344, 1145272, 4364160, 938917, 1645506, 2423301, 4976687, 649677, 3200088, 4546960, 3479791, 2735096, 684356, 4826325, 1908894, 1388288, 1432243, 4856190, 1109626, 3557850, 2960169, 3729189, 1751188};
    vector<int> win = {32, 13, 11, 92, 17, 98, 73, 85, 75, 78, 78, 89, 60, 48, 45, 79, 18, 49, 5, 32, 38, 43, 90, 94, 8, 86, 39, 4, 74, 80, 50, 88, 2, 48, 44, 82, 62, 96, 35, 93, 15, 23, 50, 96, 78, 18, 96, 79, 24, 14};
    vector<int> gain = {11601, 76046, 2692, 55976, 64769, 59762, 71087, 21752, 60306, 54491, 71643, 1776, 27210, 37362, 67076, 41678, 1446, 72065, 24134, 34616, 38733, 7586, 74047, 39138, 78973, 4627, 47334, 79385, 73406, 77545, 17693, 73967, 16602, 43423, 24302, 82484, 5367, 86342, 51919, 39937, 50935, 47458, 41962, 17118, 86504, 50781, 63817, 20031, 13770, 64668};
    MagicalGirl* pObj = new MagicalGirl();
    clock_t start = clock();
    double result = pObj->maxExpectation(M, day, win, gain);
    clock_t end = clock();
    delete pObj;
    double expected = 89947.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22907859&rd=14726&pm=11784
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctype.h>
 
using namespace std;
 
class MagicalGirl {
public:
  double maxExpectation(int, vector <int>, vector <int>, vector <int>);
};
 
typedef pair<int, pair<int,int> > witch;
#define ff first
#define ss second
#define MAXN 55
#define MAXM 100005
vector<witch> w;
int n,m;
double mem[MAXN][MAXM];
 
// day, {win, gain}
 
double doit(int wn, int hp) {
  
  if(wn==n) return w[n-1].ff + hp;
  if(wn==0) hp-=w[0].ff;
  else hp=hp-(w[wn].ff - w[wn-1].ff);
  if(hp<=0) return w[wn].ff+hp;
  if(mem[wn][hp] - 1e-5 > -1.0) return mem[wn][hp];
  //printf("(%d) hp: %d\n",wn,hp);
  double ret=0.0;
  // don't fight
  ret=doit(wn+1,hp);
  //printf("(%d) don't : %lf\n",wn,ret);
  int winp=w[wn].ss.ff, hpgain=w[wn].ss.ss, dayno=w[wn].ff;
  // fight
  ret=max(ret, winp/100.0*doit(wn+1,min(m,hp+hpgain)) + (1-winp/100.0)*dayno);
  //printf("(%d) do : %lf\n" ,wn,ret);  
  return mem[wn][hp]=ret;
}
 
double MagicalGirl::maxExpectation(int M, vector <int> day, vector <int> win, vector <int> gain) {
  int i; m=M;
  n=day.size();
  w.clear();
  for(i=0;i<n;i++) {
    w.push_back(witch(day[i],make_pair(win[i],gain[i])));
  }
  sort(w.begin(),w.end());
  for(i=0;i<=n;i++)
    for(int j=0;j<=m;j++)
      mem[i][j]=-1.0;
  //for(i=0;i<n;i++) printf("%d, (%d,%d)\n",w[i].ff,w[i].ss.ff,w[i].ss.ss);
  double res=doit(0,M);
  return res;
}
 
 
//Powered by [KawigiEdit] 2.0!
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/