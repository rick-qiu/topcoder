/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10886
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

class BatmanAndRobin {
public:
    double minArea(vector<int> x, vector<int> y);
};

double BatmanAndRobin::minArea(vector<int> x, vector<int> y) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {100, 100, 90, 90, -100, -100, -90, -90};
    vector<int> y = {100, 90, 100, 90, -100, -90, -100, -90};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
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
    vector<int> x = {-1000, -1000, 1000, 1000, 1000, -1000};
    vector<int> y = {-1000, 1000, -1000, 1000, 0, 0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
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
    vector<int> x = {-1000, -1000, 1000, 1000, 0};
    vector<int> y = {-1000, 1000, -1000, 1000, 0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {-904, -812, -763, -735, -692, -614, -602, -563, -435, -243, -87, -52, -28, 121, 126, 149, 157, 185, 315, 336, 390, 470, 528, 591, 673, 798, 815, 837, 853, 874};
    vector<int> y = {786, 10, -144, 949, 37, -857, -446, -969, -861, -712, 5, -972, -3, -202, -845, 559, -244, -542, -421, 422, 526, -501, -791, -899, -315, 281, -275, 467, 743, -321};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1067472.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    vector<int> y = {1, 2, 3, 1, 2, 3, 1, 2, 3};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4};
    vector<int> y = {2, 3, 4, 1, 2, 3, 1, 2, 3, 4, 1, 2, 4};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {113, -75, -169, 462, 925, 741, -702, 9, 362, 795, 956, -884, -938, -31, 552, -415, -359, 566, 926, -320, 319, 782, -722, 511, -457, 7, 246, 558, -653, -558, 816, 727};
    vector<int> y = {-509, -416, 357, -152, 522, 32, -334, -671, -755, 174, 39, 107, 23, -654, 599, 174, 788, 754, 398, -455, -304, -620, -791, 78, -216, 615, -217, 22, -835, -941, 579, -471};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 987092.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {555, 892, 888, -189, -449, -984, -496, 506, -634, -555, -852, -409, 365, -293, -889, 300, 733, 290, -410, 197, 332, -251, -587, -61, 647, 812, -908, -133, -440, 232, 975, -839};
    vector<int> y = {-336, 737, -93, 13, -602, 440, -696, 808, 749, 448, 120, 308, 830, 284, -741, 152, 5, -738, -394, -708, -808, 699, -370, 37, 789, 427, -144, 438, 510, 951, 925, 362};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1017802.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {796, -303, 101, -176, 544, 57, 299, 132, 735, 51, -62, 271, 629, -753, -991, -767, 788, -460, 311, 532, 380, -154, 574, 693, -929, -297, -924, 643, 238, -241, -844, -108};
    vector<int> y = {-767, 389, -893, 641, -670, -760, -184, 703, -645, 583, 504, 140, -974, 244, 433, 647, -530, 202, 783, 764, 498, 604, -391, 556, 988, 744, -317, -130, 751, 989, 334, -905};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 936696.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {42, -881, 457, 175, 368, -828, 418, -53, -35, -175, 998, 500, 678, -474, -276, -515, 526, -846, -490, 545, -105, 659, -47, 105, 795, -283, 462, 70, -397, 463, -338, -568};
    vector<int> y = {668, 645, 558, -154, 405, 410, -506, 727, 255, 256, 678, 699, 346, 591, 379, -920, -794, -768, -66, -127, 652, -477, -219, 731, -143, 833, -889, -52, 671, -178, -703, -979};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 996264.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {40, 34, 20, 18, 37, 37, 36, 39, 20, 39, 35, 17, 17, 23, 30, 24, 38, 29, 29, 30, 24, 22, 19, 16, 31, 36};
    vector<int> y = {-5, 1, 0, -2, -1, -19, -20, -4, -20, -16, 0, -16, -4, -22, -22, 2, -2, 2, -22, 2, -22, -21, -1, -15, -22, 0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 112.5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {12, 0, -11, 16, -2, -6, -19, -3, -3, 5, -1, 20, -7, -13, 27, 21, -6, 1, 5};
    vector<int> y = {-25, 3, 6, -7, 5, -16, -14, -18, -17, 5, -16, -2, 6, -18, -13, -3, 2, -19, -4};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 240.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-8, -29, -16, -15, -12, -11, -20, 9, 4, -11, -25, 3, 9, 8};
    vector<int> y = {-30, -13, 7, 7, 8, -30, -27, -9, 2, 8, -22, -25, -13, -17};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 233.5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {28, 15, -52, -14, 21, -41, 33, 37, -4, 27, 36, -24, 14, -34, -20, -50, -35, -49, 26, -28, -24, 22, 25, 6, 5, 19, -48, 38, 23, -20, -46, 43, -18, 28, -42, 33, 35, -6};
    vector<int> y = {-37, 33, 28, -39, 39, -44, 42, 41, -21, -41, 5, 32, -17, -47, 8, 5, 37, 32, 42, 35, -47, -49, 6, 13, 14, 9, 4, 16, -48, 28, 2, 9, 12, -33, -43, 10, 5, -24};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2588.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-14, -10, 30, 17, -1, -5, -11, 21, -10, 26, 2, 31, 19, -7, 23, -15, -12, -13, 27, -1, 27, -9};
    vector<int> y = {28, 0, 6, -6, 40, -4, 33, 38, 34, 34, -7, 8, 39, 37, 37, 8, 32, 30, 1, -6, 33, -1};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 503.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-29, -20, -64, -19, -68, -23, 15, -27, -15, -10, 15, 32};
    vector<int> y = {-27, -33, -30, -70, -37, -57, -2, -44, 31, -27, -68, 15};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1746.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-1000, 1000, -633, 399, 1000, -426, 1000, -925, -93, 1000, 1000, -866, 1000, 516, -1000, 1000, -242, -632, 874, 1000, -1000, -581, 169, 1000, 1000, -1000, 223, -238, -1000, -543, -1000, 471};
    vector<int> y = {-175, 452, 693, 1000, 134, 900, -220, 401, 1000, 291, 630, -811, 470, 1000, -482, 145, -1000, 694, 766, 448, -62, 745, -1000, -26, -306, -128, -1000, 1000, -34, -1000, 83, -842};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1185552.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-345, 142, 1000, 577, 658, -975, 938, 964, 9, 1000, 803, 841, 1000, -673, -456, 1000, -1000, 402, 796, -75, 921, 1000, -579, -672, -768, 182, 1000, -285, -441, -722, 1000, 1000, 1000, 221, -673, -553, 1000, 1000};
    vector<int> y = {978, 1000, -15, -974, 973, -452, -613, 667, 1000, 69, 828, -710, 621, 650, -971, -254, -225, -1000, 835, 1000, 710, -68, 744, -755, 555, -1000, 583, -1000, 882, 601, -190, 24, -214, 1000, -754, -874, -236, 617};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1280307.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-174, 66, 140, -755, -316, 49, -687, -715, 129, -523, -378, 868, -721, 611, 103, -426, -837, 75, -800, 556, 779, 129, 122, -654, 479, 860, 805, 349, 35, -315, -208, 749, -790, -809, -439, -813, -897, -894, 908, 714, 894};
    vector<int> y = {-549, -163, -581, -530, 199, -421, -854, -357, 784, -806, -67, 877, -330, -121, 17, 696, 783, 290, -387, -845, 642, 956, 319, 963, 345, 497, -129, 178, -467, 175, -532, 99, 731, -386, -277, 594, 259, 646, -215, 267, -178};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1158267.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-547, -954, 688, -985, -970, 776, 613, 11, 759, -376, -567, 555, 351, -713, -998, -132, 70, -662, -63, -185, -59, -928, -450, -463, 948, -24, 311, 526, -532, -113, -772, -813, 851, 674, -513, 889, 77, 73, -637, -435, 848};
    vector<int> y = {-162, -282, 704, -158, -17, -844, 131, 256, 2, 179, -426, 766, -649, 638, -211, -76, -481, -491, -168, 599, -318, -622, -640, 968, 593, 166, 941, 292, 366, 277, -747, 917, -577, 355, -868, -248, 167, 408, 205, 394, 841};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1282038.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {783, 828, 316, -60, -943, 846, -915, -329, 916, 931, -462, 840, 235, 25, -641, 658, -473, -906, -805, -886, 69, -795, 178, -297, 510, -761, 301, -563, 469, 894, 594, -590, 777, 737, -789, 432, -749, -276, 172, 320, 585};
    vector<int> y = {-956, -367, -705, 37, -717, 164, -240, -848, -449, 400, -313, -846, 636, 979, -738, -274, 471, -219, -962, -484, -701, 675, 937, 699, -717, 974, 678, -655, 988, -102, 771, -515, -178, -267, -841, 604, -461, 349, 83, 862, -868};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1330526.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {173, -442, -542, 407, -664, -511, 615, -814, -648, 174, 304, -926, 452, 702, 516, 674, 221, 870, 758, 712, 234, -573, -398, -746, 595, -247, 45, 645, 606, 304, -352, 522, -30, 475, 287, 580, -340, 324, 124, 968, -801};
    vector<int> y = {-616, 367, -966, 562, 388, 43, 730, -579, 566, -316, 605, -725, 62, 586, -399, -819, -377, -602, 262, -35, -687, 611, -225, 984, 964, 495, -291, 428, 800, 516, 140, 525, -103, 583, -850, -63, -319, 219, -906, -725, -249};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1082015.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {33, 37, 24, 23, 21, 36, 39, 19, 39, 25, 36, 24, 34, 29, 18, 16, 26, 31, 35, 23, 40, 29, 18, 17, 38, 35, 27, 22, 37, 17, 38, 30, 25, 40, 30, 41, 32, 31, 19, 15, 16, 20};
    vector<int> y = {-31, -10, -7, -31, -9, -29, -13, -28, -25, -31, -9, -31, -8, -31, -11, -24, -31, -31, -29, -7, -14, -7, -27, -25, -11, -9, -7, -8, -28, -13, -27, -31, -7, -24, -7, -19, -7, -7, -10, -19, -14, -29};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 188.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {5, 8, -1, 1, 13, 10, 1, -5, 1, 0, 20, 4, 1, 10, -3, -7, 2, 8, 0, 13, 15, 9, 0, -7, 16, 7, -9, -2, -7, -7, 5, -3, 12, 6, 0, 0, 1, 5, 12, 9, -6, 17, 2};
    vector<int> y = {-3, -1, 19, 19, 25, 5, -1, 14, 28, -21, -6, -1, 4, -6, 6, -5, 19, -25, -5, -3, -5, -6, 4, -8, -3, 28, 17, -3, 1, 10, -4, -5, -27, -27, -6, 19, -25, 28, 6, 28, 8, 16, -25};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 475.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-14, -30, -6, -22, -28, -31, -26, -27, -21, -9, -8, 2, -19, -8, 6, -7, -28, -29, -25, -3, -20, 3, -16, 1, -29, -18, -2, 6, 7, -24, -1, -4, -17, -16, -23, -3, 0, -11, -21, -5, -18, 2, -19, -25, -15};
    vector<int> y = {-11, -36, -12, -14, -40, -32, -43, -19, -14, -12, -48, -17, -13, -12, -24, -12, -20, -22, -16, -14, -13, -41, -12, -16, -38, -12, -14, -36, -32, -16, -15, -13, -12, -48, -45, -46, -44, -49, -46, -13, -48, -43, -47, -44, -48};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 438.5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {10, 37, -8, 35, -33, -2, 13, -28, 3, -14, -14, -5, 18, -12, 14, 24, -37, -21, 15, -44, 48, -23, 30, 34, -41, -9, -33, 27, -39, -30, -8, 3, 48, 44, 14, -33, -3, 39, 12, -4, 8, 20, -26};
    vector<int> y = {-21, -41, -37, -14, -39, -22, -24, -42, -2, -41, 17, -32, -9, -12, -25, -42, -13, -16, -11, 0, -22, 21, -5, -10, -8, 12, -15, -29, -11, 20, -11, -30, -26, -12, -35, -9, -26, 3, 2, -30, -2, 8, -6};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1799.5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-10, -18, -23, 11, -16, -15, -24, 21, 19, 13, -24, 18, 13, -13, 21, 9, -25, 15, -20, 12, -17, 6, -13, 22, -23, -9, 20, 3, 17, -8, -10, 16, -22, 20, -15, -20, 11, 22, -21, -21, 6};
    vector<int> y = {50, 8, 40, 48, 7, 6, 16, 36, 14, 7, 38, 12, 47, 49, 18, 49, 18, 45, 44, 7, 47, 4, 5, 20, 14, 51, 38, 3, 11, 51, 4, 44, 42, 16, 48, 10, 6, 34, 43, 11, 50};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 556.5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {-18, -44, 8, 23, -56, 9, -40, 6, -6, -21, -12, 42, -36, -34, 7, -19, -30, 25, 11, 7, -23, -14, -2, -30, 16, -29, 25, -1, -37, 23, 7, -30, 46, 4, 36, 1, -42, -15, -28, 21, -32, -12};
    vector<int> y = {55, 27, 30, 19, 50, -19, 13, -30, 14, -3, 28, -8, 45, 47, -18, 19, 61, -54, -15, 30, 6, -13, 9, 49, -30, 13, -3, 44, 10, -21, -37, 5, -10, 18, -6, 42, 36, -12, 4, 22, 6, 46};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2005.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {1000, 928, 1000, 500, 1000, 202, 693, -660, 1000, 972, 913, 201, -913, 630, -470, -573, -1000, 130, 377, -1000, 1000, 302, -1000, 605, 1000, -257, -868, 1000, -163, 409, 1000, 192, 935, -341, 419, -893, 1000, -377, -966, 221, 629, -727, -146, 639, -537, 1000};
    vector<int> y = {-197, -736, -72, -1000, 212, -1000, 652, 715, -310, -692, -751, 1000, 462, 715, -1000, 802, -302, 1000, 968, -70, -360, 1000, -116, -1000, -318, -1000, -644, -82, 1000, 936, -334, 1000, 410, 1000, 926, 482, 282, 998, -546, -1000, -1000, 648, -1000, -1000, -975, 114};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1386935.5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {210, 1000, 1000, 42, -645, -313, -966, -1000, 1000, -980, -1000, 854, -656, 26, -697, 669, -104, -347, -575, -112, 1000, 125, 932, 719, -505, -1000, -1000, 409, -106, -1000, -847, 493, 568, -733, -935, -5, 137, 1000, 614, -31, -1000, -846, 711, -654, -963};
    vector<int> y = {-1000, 397, -464, -1000, 994, -1000, 673, 39, -46, 659, 638, -705, -779, 1000, 942, -890, -1000, 1000, 1000, 1000, 505, 1000, 746, -840, -930, -197, 503, -1000, -1000, -330, -588, 1000, 1000, -702, 704, -1000, -1000, -69, 1000, 1000, 612, 793, 967, 985, 676};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1441857.5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {846, -625, 667, 128, -754, -661, -176, 232, 353, -813, -801, -11, -66, 217, -948, 44, 625, 787, 483, 65, -687, 439, -648, 787, 213, 310, -826, 817, -241, 756, 946, 788, 844, 678, 626, 71, -790, 497, 59, 210, 149, 87, -591, 733, 669, 490, 246, 86, 927, -292};
    vector<int> y = {-146, -515, 632, 656, -435, 899, -856, 818, 394, -37, -352, 630, 458, -42, 755, 497, -589, 427, -571, -334, -732, 672, 199, -719, 101, 890, -486, 872, 242, 635, -424, -531, -132, 78, 755, -968, 521, 771, 824, -747, -587, 970, 200, -956, 309, 701, 845, -774, -723, -349};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1216245.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {930, -781, 77, -62, -242, -97, 277, -844, -611, -828, -617, -544, -256, -995, -219, 917, 777, 346, -758, 401, 957, -449, -852, -258, -230, -708, -66, 349, 722, 23, 758, 781, -288, -645, -553, -750, -580, -216, 206, -21, 76, -50, 828, 206, 681, 11, 725, -200, 520, 427};
    vector<int> y = {426, 525, 494, -529, 896, 39, 146, 552, -975, 188, -134, 181, 218, 784, -686, 327, 793, 29, 753, 686, -21, 654, 791, -360, -743, -745, 397, 385, -42, 262, 219, -95, -307, 211, 332, -868, 63, -34, -995, -764, -795, 572, -37, -661, -736, -120, 976, 785, 723, -993};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1304001.5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-182, 148, -645, 732, 766, 293, 358, 18, 769, -495, -54, -504, 52, 438, -480, -462, -944, 287, 432, 398, -245, 578, -413, 343, -986, 864, -70, 319, 780, -820, 947, 6, -47, 605, 56, -766, -339, -896, -3, 420, -470, 355, -943, 930, -93, -413, -794, -15, -410, 315};
    vector<int> y = {944, 630, 702, -873, 902, 963, -438, -246, 182, -697, 256, 848, 134, 572, 251, 453, -614, -313, -29, 708, 106, -36, -950, -37, -75, 598, -416, 222, -702, 368, 746, -188, 485, -649, -302, 495, -515, -978, -257, -679, -762, -894, 999, -607, -550, 921, -941, -864, -87, 719};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1438228.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {689, -946, 374, -592, -952, -628, -789, -718, -128, -44, -819, -339, 184, 802, 649, -416, 195, -50, -957, 89, -835, 917, 489, 939, -995, -734, -175, 626, -94, 907, 209, -282, -544, -997, 626, 860, -846, 897, -286, -187, 434, 761, 354, -949, -989, 463, 819, 802, 525, 123};
    vector<int> y = {-485, -774, 486, 731, 328, -444, -956, -393, -69, 591, -447, 81, 542, 785, -841, -433, -486, 700, -964, -442, 845, 925, -596, 266, -657, 403, -222, 973, -534, -733, 619, 138, -168, 942, 32, 23, 91, -169, 368, -824, 950, 692, 372, 161, 460, 856, -124, -895, 677, -443};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1415551.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {-30, -7, -25, -20, -16, -14, -15, -23, -11, -14, -25, -9, -21, -22, -13, -32, -27, -28, -29, -31, -15, -16, -24, -17, -29, -12, -23, -28, -13, -27, -12, -20, -10, -8, -10, -11, -9, -31, -18, -26, -7, -24, -18, -8, -26, -6, -21, -30, -17, -22};
    vector<int> y = {-16, -5, -21, 2, 2, 2, 2, 2, -20, -22, 1, -2, -22, 2, -21, -10, -20, -1, -2, -15, -22, -22, -22, 2, -18, -20, -22, -19, 1, 0, 0, -22, -19, -16, -1, 0, -18, -5, -22, -20, -15, 2, 2, -4, 0, -10, 2, -4, -22, -22};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 188.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {4, 1, -24, -16, -10, -22, -23, -11, 7, -17, -4, -16, -9, -8, 13, 5, -9, 6, -4, -6, -1, -17, -13, 7, -7, -12, 13, -9, 6, 0, 8, 5, -5, -5, -6, -2, -10, -2, -13, -1, 9, -18, -24, -17, -8, 6, -15, 0, 12, -14};
    vector<int> y = {-11, -23, 14, 1, -20, 20, 18, -19, -9, 25, -11, 26, 2, 11, 9, 0, 25, 13, 23, 11, 21, 2, 26, 15, 0, -5, -3, -7, -1, 15, -8, -9, 2, -23, 25, 13, 1, 23, 2, -11, -19, 24, 13, 3, 25, -9, 25, -9, -5, 25};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 513.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {2, 16, 16, 18, 25, 22, 14, 15, 7, 19, 2, 17, 6, 20, 9, -6, -4, 12, 18, 27, -2, 7, 26, 25, -2, -3, -5, -9, 23, -7, -5, -8, 21, -1, 24, 5, 6, 19, 9, 22, 24, 13, -7, 4, 3, -9, 5, -6, 15, 11};
    vector<int> y = {-43, -42, -8, -41, -33, -38, -7, -8, -44, -40, -7, -9, -6, -39, -44, -12, -39, -43, -9, -23, -9, -6, -31, -17, -41, -10, -39, -17, -36, -36, -11, -35, -11, -9, -35, -43, -44, -10, -6, -12, -15, -7, -14, -7, -43, -33, -7, -38, -42, -43};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 370.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-44, 2, -14, 10, -18, -16, -26, -7, -15, -3, -19, -26, -12, -9, 19, 4, 0, -15, 15, -38, -5, 13, 4, 8, 7, -43, -30, -10, -8, -49, -14, -5, 13, -6, 25, 2, -19, -23, -45, 11, 0, -20, -1, -26, 10, 5, -15, 4, -16, 7};
    vector<int> y = {4, 33, 35, 23, 33, -7, 36, -18, 26, -1, -10, 23, -1, 25, 1, 9, 11, -14, 45, 36, 8, 10, 3, 7, -27, 3, -1, 36, -18, 10, 15, -26, -10, 17, 38, 44, 10, 6, 4, 15, 0, 32, 9, 0, -26, -17, 14, -17, 8, 28};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1472.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {-12, -17, 27, 1, 29, 28, 23, 30, 20, -4, 3, -2, -6, 0, -1, -10, 26, 11, -9, 21, -13, 21, -14, -11, 18, 0, -15, 18, -13, 23, 2, -9, 13, 26, 15, -12, 29, 28, -14, -10, -16, 22, 22, 32, 13, -16, 3, 31, 14, -11};
    vector<int> y = {-16, -7, -15, -24, -11, 13, 19, -9, -21, -22, -24, 23, -21, 24, 23, 18, 16, -24, 19, -20, 15, 20, 13, 17, 22, -24, -11, -22, -15, -19, -24, -19, 24, -16, 23, 16, 11, -13, -13, -18, -9, -20, 20, 0, -24, 9, 24, 7, -24, -17};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 727.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-72, 4, -59, -32, 26, -58, -34, -23, -63, -18, -25, -19, -21, 8, -25, -4, 2, -62, -45, 35, -37, 0, -64, -4, -64, -67, -3, 39, -65, 6, -31, 38, -66, 24, 7, -57, -3, -74, 36, -23, 42, 0, -51, -71, -63, 11, 12, -53, -33, -29};
    vector<int> y = {27, -21, 20, 1, 3, -13, 28, 58, 29, 15, 60, 51, 29, -43, -16, 5, 15, 15, 28, -22, 18, -2, -3, -33, 31, -14, 7, -31, 33, -42, 64, -7, 35, -44, -23, -14, -5, -9, -36, 26, 9, -38, -16, -12, -16, -44, -44, 25, 17, 21};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3043.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {262, 652, -1000, 625, 1000, -1000, 339, 1000, 624, 928, -249, -404, 1000, -1000, -677, 819, 807, 1000, 770, -1000, -149, -1000, -153, 509, -86, -381, -773, 602, -492, -681, -1000, -331, -1000, -1000, -704, -674, 854, -269, -349, -727, 5, -613, 1000, 1000, 809, -426, -1000, -107, 1000, -929};
    vector<int> y = {-1000, -714, 268, 958, -152, 19, 1000, 223, -742, -438, 1000, -922, 218, -6, 847, 764, -559, 75, 813, -242, -1000, 330, 1000, 1000, -1000, -945, 751, -764, 1000, 843, 357, -995, 297, 93, 820, 850, 729, -1000, 1000, 797, -1000, 911, 303, 353, 774, -900, 501, -1000, 209, -397};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1291627.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {1000, 212, -1000, 887, 867, -327, 123, 1000, 1000, 338, 802, 300, -375, -560, -1000, -961, -350, -157, 1000, -148, -1000, 479, -105, 1000, -1000, 533, 1000, 805, -917, 620, 807, -1000, -1000, -104, 452, -766, -1000, 280, 152, -419, -387, 47, 710, 233, 759, 1000, -869, 368, 650, 1000};
    vector<int> y = {-464, -1000, 491, 660, -633, -1000, 1000, -305, -196, -1000, 745, -1000, -1000, 1000, -245, 718, 1000, 1000, -125, 1000, 203, 1000, 1000, -74, 583, -967, -50, 742, 762, 927, 740, 606, 214, -1000, -1000, -635, -254, -1000, 1000, -982, -1000, -1000, -790, 1000, -741, 396, -532, -1000, -850, -279};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1387659.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {0, 5, -2, 0};
    vector<int> y = {3, 2, -4, -6};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {8, 14, -2, 11};
    vector<int> y = {-11, 0, -3, 0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {5, 28, 4, -2};
    vector<int> y = {26, -8, 8, -22};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-16, 54, -14, 17};
    vector<int> y = {2, -3, 27, 56};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {85, 45, -98, -74};
    vector<int> y = {103, -106, -22, -60};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-153, 44, -51, -37};
    vector<int> y = {-80, 72, 40, -157};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-447, -411, -216, 297};
    vector<int> y = {-14, 127, -384, -358};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
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
    vector<int> x = {315, -387, 633, 374};
    vector<int> y = {592, -698, 383, -569};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-4, -2, 2, 2};
    vector<int> y = {-5, -5, -7, -4};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {-4, 2, 0, -8, 8};
    vector<int> y = {-1, 5, 14, 1, -3};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-5, -6, -8, 2, 17};
    vector<int> y = {10, -22, -12, 18, 20};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 37.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {56, -3, 19, 8, -6};
    vector<int> y = {26, -29, 29, -17, 14};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 51.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {-76, -15, 111, 87, 42};
    vector<int> y = {-63, 94, 56, -69, 11};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3772.5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-27, 25, 79, 186, 93};
    vector<int> y = {-35, -211, 167, 49, -156};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4412.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-91, 261, 241, 187, 173};
    vector<int> y = {-391, 164, -370, 429, -18};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 18394.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {847, -149, 449, 299, -191};
    vector<int> y = {-187, 384, -476, -180, 8};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 58420.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {5, 4, -6, -4, -2};
    vector<int> y = {-3, 0, 1, -6, 6};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-4, 8, -4, 9, 2};
    vector<int> y = {-11, -6, -10, 10, 11};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {0, 19, -28, 11, -6};
    vector<int> y = {3, 11, -4, 17, 8};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {2, 33, -52, -15, -13};
    vector<int> y = {-1, 45, 49, -16, -21};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 27.5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-2, -92, -28, 70, -17};
    vector<int> y = {-55, -1, 62, -19, -33};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 585.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {116, 103, -134, -203, 82};
    vector<int> y = {-168, 157, 133, 155, -65};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3435.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {264, -319, 91, -327, -315};
    vector<int> y = {-63, 264, 338, 287, 150};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 410.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-92, -117, -542, 628, -487};
    vector<int> y = {454, 269, -174, 40, 103};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32150.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {1, 6, 5, 3, 6, 6, 5};
    vector<int> y = {7, -4, -2, 2, -6, 7, 1};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {9, -4, 14, 10, 9, -12};
    vector<int> y = {-7, -5, 4, -3, -1, 7};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 15.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {-26, 24, -6, -21, 20, -20, -24};
    vector<int> y = {-21, 7, 10, -27, 3, -16, 13};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 108.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {-5, -37, -46, -7, 14, 18, 52};
    vector<int> y = {11, -19, -8, -2, 32, 4, -26};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 464.5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {36, -80, 112, -62, -62, -92, -76};
    vector<int> y = {25, 28, -43, -85, -14, -66, -7};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2163.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {-29, 185, -142, -105, -87, 93, -206};
    vector<int> y = {-60, -176, 53, -166, 26, 140, 14};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 15750.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {-269, -413, 194, -393, -430, -48, 363};
    vector<int> y = {285, -367, 212, 16, 105, 19, -180};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 63740.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {-597, 583, 325, -303, 803, 731, -843};
    vector<int> y = {-830, -430, -301, -394, -42, 403, -404};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 179921.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {5, -535, 1, -7, -545, -538, -548, -7, -547, 10, 2, -532, -1, -5, 9, -538, -550, -533, -546, -3, -546, -532, 10, -2, -5, -536, 3};
    vector<int> y = {631, 454, 625, 622, 457, 455, 453, 640, 449, 633, 635, 453, 628, 625, 621, 446, 445, 444, 457, 631, 445, 444, 629, 628, 623, 448, 638};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 269.5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {-89, 815, 810, -81, 815, 811, -90, -89, 812, 820, 820, 809, 807, -98, -94, -89, 815, -86, 816, -90, -97, 814, -99, 817, -88, 809, -90, -91, -82, 812, 817, 810, 819, -80, 817, -83, -92, -93, 809};
    vector<int> y = {-534, -459, -453, -545, -457, -449, -538, -539, -457, -446, -460, -450, -451, -542, -547, -544, -445, -534, -443, -534, -548, -451, -546, -445, -533, -443, -545, -535, -550, -442, -452, -442, -440, -545, -443, -535, -534, -531, -451};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 247.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {627, 719, 814, 620, 717, 718, 725, 715, 715, 805, 640, 806, 809, 815, 820, 812, 623, 811, 621, 718, 806, 713, 640, 633, 710, 634};
    vector<int> y = {721, 262, 184, 713, 266, 264, 265, 261, 260, 182, 710, 174, 171, 179, 190, 174, 728, 179, 714, 273, 186, 280, 728, 723, 265, 720};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2423.5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-278, -179, -730, -717, -173, -714, -177, -273, -714, -274, -265, -267, -713, -280, -722, -710, -177, -262, -270, -713, -170, -189, -172, -720, -173, -185, -717, -280, -721, -184, -268, -717, -185, -177, -727, -280, -271, -172, -275};
    vector<int> y = {728, 269, -800, -813, 267, -812, 277, 726, -819, 727, 725, 719, -802, 711, -812, -807, 273, 724, 717, -801, 271, 270, 277, -815, 262, 275, -800, 725, -812, 260, 725, -804, 279, 279, -808, 727, 715, 274, 725};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 9212.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {-530, 270, -549, 271, 273, -535, -542, -361, -364, -361, -537, -540, 280, 724, -369, 730, 261, 726, 715, -533, -350, 713, 261, -350, -356, 260, 714};
    vector<int> y = {-910, -89, -910, -88, -99, -908, -901, -546, -531, -531, -893, -907, -94, 173, -533, 177, -85, 185, 170, -903, -535, 183, -94, -530, -535, -98, 188};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 9743.5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {-86, -369, -2, 7, -360, -366, 638, -96, 627, -99, -368, -3, 628, 1, 636, 620, -363, -365, 621, -84, -362, -7, -357, -7, 3, 3, -87, -89, 636, -361, 621, 5, -84, 621, -80, -98, -92, 624, -6};
    vector<int> y = {360, 356, 817, 800, 368, 366, -178, 355, -171, 354, 361, 819, -171, 820, -173, -180, 351, 363, -187, 367, 359, 804, 351, 800, 806, 816, 358, 355, -176, 360, -176, 815, 360, -180, 359, 352, 369, -181, 805};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 18395.5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {547, 541, -263, 633, 636, 638, 624, -273, -10, -3, -9, 543, -7, -271, -276, -279, -174, 540, -181, -5, -173, -173, 623, 550, -181};
    vector<int> y = {-98, -90, -447, -728, -718, -727, -721, -440, 277, 273, 264, -84, 265, -458, -459, -445, 98, -89, 82, 270, 81, 94, -722, -97, 88};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 45721.5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {363, -729, -540, -549, -186, 357, -542, -725, -547, -715, -177, 363, -532, -187, -718, 354, -186, -545, 354, -550, -533, 353, -717, -181, -534, -539, -171, -713, -720, -181, -532, -550, 366, -540, 370, -550, -180, -536, -725};
    vector<int> y = {367, 361, 450, 539, -534, 357, 457, 355, 535, 367, -536, 363, 445, -531, 357, 358, -549, 543, 369, 530, 530, 368, 366, -547, 454, 542, -538, 368, 366, -549, 530, 540, 366, 459, 354, 460, -542, 444, 361};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20702.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {-891, 173, -807, 171, -908, 800, -898, 820, -904, 809, -898, -809, -801, -907, 805, -809, -910, -910, -890, -896, -908, -901, 180, 170};
    vector<int> y = {626, 632, -893, 631, -8, -170, 730, -185, 2, -188, 728, -900, -896, 3, -182, -902, 624, -6, 634, 639, 720, 711, 634, 635};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 55437.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {-354, -172, -820, 364, 624, -359, -354, -897, -811, 368, -910, 624, 620, -350, 357, -357, -904, 625, -190, -807, 636, -183, -364, 370, -801, -180, -802, -897, 628, -170, -908, -890, 370, -816, 366, -176};
    vector<int> y = {459, 725, 812, -352, -174, 445, 450, 3, 805, -351, 10, -179, -180, 442, -358, 453, -2, -187, 724, 804, -178, 725, 454, -364, 800, 726, 812, -5, -190, 718, -9, 3, -367, 805, -360, 714};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 185688.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {-187, -894, -537, 897, 901, 621, -808, -817, -907, -352, -896, 892, -549, -898, -181, 637, -807, -180, 903, 626, -354, -361, -806, -530, -540, -361, 630, -184};
    vector<int> y = {816, -804, 178, -724, -725, -10, -905, -905, -816, -801, -807, -720, 172, -809, 815, 6, -903, 815, -729, -8, -809, -802, -891, 183, 190, -804, -7, 814};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 309494.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {369, 261, 262, 271, -817, -90, 268, 720, 369, -93, -801, 715, -81, 711, 278, 268, 279, -85, 363, 278, -802, -95, 261, 270, -819, -90, 362, 350, -91, 722, -98, -97, 716, -800, -98};
    vector<int> y = {-820, -184, -170, 9, -802, -457, -2, -620, -812, -449, -800, -620, -88, -624, -180, -8, -182, -80, -810, 1, -801, -441, -183, 2, -819, -452, -816, -815, -93, -630, -95, -458, -624, -809, -89};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 134344.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {-270, -815, 350, 634, 636, -820, 890, -803, 362, -721, 267, 635, 908, 899, -820, 265, -267, 266, -818, -714, -809, -280, -710, 351};
    vector<int> y = {360, 620, 183, -904, -909, 712, 173, 728, 174, -631, 266, -901, 181, 171, 640, 260, 357, 279, 627, -637, 714, 357, -635, 187};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 260737.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {-890, -540, -534, 813, 630, -713, -544, -723, 625, 351, 816, 358, -725, -711, 800, -535, 806, 728, 720, 723, 805, 809, 635, -909, 719, 629, -726, 359, -540, -906, 803, 730, 355, 805, -899, 620, 820, 805, -910, 356};
    vector<int> y = {-358, 808, 810, 895, 715, -544, 801, -543, 718, 896, 83, 906, -534, -542, 92, 810, 84, 6, -8, 3, 891, 900, 716, -367, 0, 718, -534, 908, 813, -355, 92, 2, 893, 895, -368, 712, 897, 89, -350, 899};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 254503.5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {-2, -1, 0, 1, 2, 0, 0, 0, 0};
    vector<int> y = {0, 0, 0, 0, 0, -2, -1, 1, 2};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {0};
    vector<int> y = {0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {0, 1};
    vector<int> y = {-1, 0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {1000, 1000, -1000};
    vector<int> y = {0, 1, 0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {1};
    vector<int> y = {1};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {123};
    vector<int> y = {456};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {0};
    vector<int> y = {0};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {-904, -812, -763, -735, -692, -614, -602, -563, -435, -243, -87, -52, -28, 121, 126, 149, 157, 185, 315, 336, 390, 470, 528, 591, 673, 798, 815, 837, 853, 874};
    vector<int> y = {786, 10, -144, 949, 37, -857, -446, -969, -861, -712, 5, -972, -3, -202, -845, 559, -244, -542, -421, 422, 526, -501, -791, -899, -315, 281, -275, 467, 743, -321};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1067472.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {-959, -542, -669, -513, 160, 717, 473, 344, -51, -548, 703, -869, 270, -181, 957, -509, -6, 937, -175, 434, -625, -403, 901, -847, -708, -624, 413, -293, 709, 886, 445, 716, -236, 533, 869, 903, 655, -714, 27, 890, -311, 800, 307, -682, 665, -338, 134, 708, -761, -135};
    vector<int> y = {535, 631, -354, -259, -973, -147, -281, 737, 516, -222, -690, 34, -821, 842, -712, -909, 36, -62, 255, -363, 433, 794, 883, -274, -642, 343, -1, 86, -619, 547, 620, -383, -928, 945, -253, 835, -36, 373, 925, -705, -64, -577, -386, 318, 535, 528, -890, -919, -82, -467};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1279891.5;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {444};
    vector<int> y = {333};
    BatmanAndRobin* pObj = new BatmanAndRobin();
    clock_t start = clock();
    double result = pObj->minArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22752635&rd=14239&pm=10886
********************************************************************************
//Authored by Irvan Jahja (dolphinigle)
//TopCoder
 
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
#define FORN(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
 
#define REP(X,Y,Z) for (int (X) = (Y);(X) < (Z);++(X))
#define RESET(Z,Y) memset(Z,Y,sizeof(Z))
 
#define SZ(Z) ((int)Z.size())
#define ALL(W) W.begin(), W.end()
#define PB push_back
 
#define MP make_pair
#define A first
#define B second
 
#define INF 1023123123
#define EPS 1e-11
 
#define MX(Z,Y) Z = max((Z),(Y))
#define MN(X,Y) X = min((X),(Y))
 
#define FORIT(X,Y) for(typeof((Y).begin()) X = (Y).begin();X!=(Y).end();X++)
 
using namespace std;
 
typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;
 
class BatmanAndRobin {
public:
  double minArea(vector <int>, vector <int>);
};
 
int n;
 
double PolygonArea(vector< pair<int,int> > points) {
  double ret = 0;
  FORN(i,SZ(points)) {
    ret += (db)(points[i].A * points[(i+1)%SZ(points)].B);
    ret -= (db)(points[i].B * points[(i+1)%SZ(points)].A);
  }
  return abs(ret) / 2.0;
}
 
bool leftturnorcollinear(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3 ) {
    return ( x2 - x1 ) * ( y3 - y1 ) - ( y2 - y1 ) * ( x3 - x1 ) >= 0LL;
  }
 
bool leftturn(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3 ) {
    return ( x2 - x1 ) * ( y3 - y1 ) - ( y2 - y1 ) * ( x3 - x1 ) > 0LL;
  }
 
vector< pair<int,int> > convexhull (vector< pair<int,int> > abc) {
 
  sort(ALL(abc));
  abc.erase(unique(ALL(abc)),abc.end());
  vector< pair<double, pair<int,int> > > p;
  vector< pair<int,int> > ans;
  int tn = SZ(abc);
 
  double midx = 0.0,midy = 0.0;
  FORN(i,tn) midx += abc[i].first;
  FORN(i,tn) midy += abc[i].second;
  midx /= (double)tn;
  midy /= (double)tn;
  FORN(i,tn) p.PB(MP(atan2((double)abc[i].second - midy,(double)abc[i].first - midx),MP(abc[i].first,abc[i].second)));
  sort(ALL(p));
  reverse(ALL(p));
  
  FORN(i,tn) {
    ans.PB(MP(p[i].second.first,p[i].second.second));
    while (SZ(ans) > 2) {
      int bz = SZ(ans);
      if (leftturn(ans[bz - 1].first,ans[bz - 1].second,ans[bz - 2].first,ans[bz - 2].second,ans[bz - 3].first,ans[bz - 3].second)) break;
      swap(ans[bz - 1],ans[bz - 2]);
      ans.pop_back();
      }
    }
  int pd = 0;
  while (SZ(ans) - pd > 2) {
    if (!leftturn(ans[pd].first,ans[pd].second,ans[SZ(ans) - 1].first,ans[SZ(ans) - 1].second,ans[SZ(ans) - 2].first,ans[SZ(ans) - 2].second)) {
      ans.pop_back();
      continue;
      }
    if (!leftturn(ans[pd + 1].first,ans[pd + 1].second,ans[pd].first,ans[pd].second,ans[SZ(ans) - 1].first,ans[SZ(ans) - 1].second)) {
      pd++;
      continue;
      }
    break;
    }
  vector< pair<int,int> > trans;
  REP(i,pd,SZ(ans)) trans.PB(ans[i]);
  return trans;
  }
 
double BatmanAndRobin::minArea(vector <int> x, vector <int> y) {
  
  n = SZ(x);
  
  if (n <= 4) return 0.0;
  
  double ret = INF;
  
  FORN(i,n) FORN(j,n) if (i != j) {
    //dipisahin garis ini
    vector< pair<int,int> > batman;
    vector< pair<int,int> > robin;
    FORN(k,n) {
      if (leftturnorcollinear(x[i], y[i], x[j], y[j], x[k], y[k])) {
        batman.PB(MP(x[k],y[k]));
      } else {
        robin.PB(MP(x[k],y[k]));
      }
    }
    
    MN(ret, max(PolygonArea(convexhull(batman)), PolygonArea(convexhull(robin))));
  }
  return ret;
  
}
 
 
//Powered by [KawigiEdit] 2.0! - modified by dolphinigle

********************************************************************************
*******************************************************************************/