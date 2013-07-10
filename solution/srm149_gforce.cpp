/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1587
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

class GForce {
public:
    double avgAccel(int period, vector<int> accel, vector<int> time);
};

double GForce::avgAccel(int period, vector<int> accel, vector<int> time) {
    double ret;
    return ret;
}


int test0() {
    int period = 100;
    vector<int> accel = {1500, 1500, 500, 2000};
    vector<int> time = {0, 100, 150, 225};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1500.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int period = 500;
    vector<int> accel = {5, 30, 5};
    vector<int> time = {0, 1000, 2000};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 26.875;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int period = 75;
    vector<int> accel = {1500, 1500, 500, 2000};
    vector<int> time = {0, 100, 150, 225};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1500.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int period = 500;
    vector<int> accel = {10, 60, 10, 80};
    vector<int> time = {0, 1000, 2000, 2500};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 53.75;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int period = 1000;
    vector<int> accel = {5, 30, 130};
    vector<int> time = {0, 1000, 2000};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 80.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int period = 50;
    vector<int> accel = {5, 30, 5};
    vector<int> time = {60, 100, 158};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 23.622448979591837;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int period = 1;
    vector<int> accel = {0, 5, 5, 0, 6};
    vector<int> time = {0, 5, 15, 25, 31};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int period = 3;
    vector<int> accel = {0, 5, 5, 0, 6};
    vector<int> time = {0, 5, 15, 25, 31};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int period = 11;
    vector<int> accel = {0, 5, 5, 0, 6};
    vector<int> time = {0, 5, 15, 25, 31};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4.984848484848485;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int period = 20;
    vector<int> accel = {0, 5, 5, 0, 6};
    vector<int> time = {0, 5, 15, 25, 31};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4.166666666666667;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int period = 26;
    vector<int> accel = {0, 5, 5, 0, 6};
    vector<int> time = {0, 5, 15, 25, 31};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 3.576923076923077;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int period = 30;
    vector<int> accel = {1000, 5};
    vector<int> time = {0, 35};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 573.5714285714286;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int period = 240;
    vector<int> accel = {0, 1296, 4695, 5343, 2943, 1981, 9149, 4249, 1201, 9608, 1114, 974, 5672, 6467, 4498, 7345, 430, 7332, 940, 7906, 4209, 526, 5158, 8482, 1810, 290, 7897, 922, 5264, 8025, 7238, 4881, 3618, 7797, 5435, 1599, 7382, 976, 1282, 7077, 3327, 7708, 1036, 5756, 7100, 4277, 8599, 5700, 1677, 5683};
    vector<int> time = {129, 133, 164, 199, 232, 263, 273, 312, 334, 354, 365, 383, 388, 393, 401, 426, 432, 457, 465, 490, 491, 506, 521, 541, 567, 568, 575, 579, 601, 603, 633, 655, 690, 730, 752, 753, 780, 806, 814, 842, 843, 845, 885, 903, 936, 955, 991, 992, 1020, 1039};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5494.809817622885;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int period = 100;
    vector<int> accel = {0, 0, 0};
    vector<int> time = {0, 1000, 10000};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int period = 10;
    vector<int> accel = {0, 20, 10, 18, 0};
    vector<int> time = {0, 10, 12, 20, 22};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 14.4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int period = 68;
    vector<int> accel = {0, 100, 50, 110, 0};
    vector<int> time = {0, 100, 110, 170, 180};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 79.31372549019606;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int period = 370;
    vector<int> accel = {0, 5082, 275, 7306, 3647, 5991, 1003, 7765, 6465, 9474, 9441, 6816, 225, 844, 2820, 2544, 2422, 8903, 4437, 4703, 7508, 1679, 2568, 78, 1205, 5180, 6592, 8884, 9059, 5907, 5395, 4700, 365, 6428, 3650, 3467, 558, 5443, 2032, 1894};
    vector<int> time = {49, 93, 99, 100, 118, 148, 168, 169, 202, 212, 213, 261, 304, 314, 319, 348, 358, 404, 452, 497, 510, 539, 577, 595, 601, 650, 685, 706, 745, 780, 806, 814, 830, 877, 889, 896, 900, 912, 942, 954};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5362.534404632983;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int period = 249;
    vector<int> accel = {0, 7851, 2929, 5962, 454, 340, 3258, 9858, 4820, 9621, 7961, 3072, 670, 4866, 8669, 862, 1444, 2102, 9035, 8079, 1950, 8576, 5351, 7482, 7677, 1836, 3973, 8680, 8668, 8130, 16, 2125, 8726, 9177, 1038, 4445, 5440, 1822, 8574, 6450, 1788, 7195, 5407};
    vector<int> time = {218, 219, 257, 280, 325, 332, 339, 382, 395, 430, 465, 490, 532, 563, 566, 567, 583, 623, 642, 667, 685, 721, 739, 753, 771, 797, 819, 823, 854, 870, 908, 951, 976, 991, 1009, 1031, 1035, 1068, 1109, 1125, 1137, 1179, 1183};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6466.517672182914;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int period = 553;
    vector<int> accel = {0, 4296, 9193, 9521, 8829, 5072, 8867, 4865, 4707, 6216, 4522, 2283, 1789, 1290, 5732, 5363, 9675, 3296, 4022, 8447, 4188, 6511, 1651, 3981, 5110, 9827, 148, 655, 5120, 9951, 3830, 360, 2779, 4200, 4341, 3964, 1418, 5256, 194};
    vector<int> time = {146, 171, 174, 198, 205, 235, 237, 250, 271, 309, 337, 358, 407, 449, 466, 514, 524, 536, 564, 583, 609, 615, 660, 683, 700, 709, 711, 757, 803, 819, 858, 876, 916, 925, 959, 986, 1004, 1040, 1059};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4802.536276993219;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int period = 599;
    vector<int> accel = {0, 4746, 6014, 4734, 9548, 7850, 8681, 9391, 3926, 5951, 2699, 5525, 7077, 3302, 6157, 4968, 9135, 9946, 6758, 9130, 817, 7623, 3341, 2579, 6143, 2627, 8671, 5662, 9077, 15, 1071, 6496, 1794, 4136, 9861, 689};
    vector<int> time = {128, 133, 187, 239, 241, 286, 322, 325, 345, 346, 362, 375, 417, 444, 498, 519, 525, 579, 585, 594, 617, 666, 696, 697, 729, 769, 800, 831, 859, 901, 907, 944, 966, 1018, 1030, 1054};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6162.5630754737585;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int period = 335;
    vector<int> accel = {0, 6802, 4088, 1654, 7876, 5892, 5237, 6905, 6200, 5999, 1500, 1730, 2340, 8274, 4073, 2927, 816, 4016, 4481, 754, 8616, 3043, 3570, 3395, 4923, 2809, 3708, 3337, 4058, 4631, 9353, 8773, 5730, 432, 3400, 3781, 6929, 9891, 5473, 2160};
    vector<int> time = {77, 84, 115, 127, 132, 156, 169, 183, 214, 220, 265, 297, 339, 357, 400, 450, 465, 494, 526, 555, 576, 619, 661, 709, 751, 759, 765, 802, 822, 828, 858, 901, 907, 911, 928, 972, 998, 1009, 1022, 1025};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5105.533813142378;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int period = 82;
    vector<int> accel = {0, 1424, 2575, 9916, 2347, 6347, 3053, 8989, 7307, 1362, 4383, 8801, 28, 3098, 959, 9714, 3855, 2230, 1959, 8276, 7548, 127, 4837, 3026, 5435, 2544, 7742, 2338, 1328, 1735, 1033, 3341, 8698, 8895};
    vector<int> time = {37, 58, 99, 155, 192, 221, 230, 237, 283, 319, 374, 377, 408, 419, 440, 463, 477, 526, 541, 553, 577, 614, 615, 636, 669, 700, 746, 787, 789, 807, 836, 859, 864, 900};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7090.515134585538;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int period = 283;
    vector<int> accel = {0, 155, 9363, 200, 5761, 4898, 6492, 2219, 6346, 8404, 3681, 135, 9164, 9240, 3103, 7637, 4014, 8090, 8642, 7391, 9286, 5278, 5718, 5844, 6646, 3826, 7665, 7053, 1405, 5407, 6658, 6580, 63, 3231, 72, 8432, 9029, 4490, 5256, 1659, 7197, 9482, 9017, 8883, 5587, 9504};
    vector<int> time = {72, 95, 124, 164, 168, 199, 224, 240, 282, 294, 311, 321, 336, 342, 382, 391, 397, 416, 428, 469, 482, 512, 517, 537, 559, 585, 597, 611, 620, 633, 663, 676, 682, 688, 720, 760, 762, 800, 815, 854, 879, 899, 921, 939, 948, 955};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6720.510943310534;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int period = 135;
    vector<int> accel = {0, 5829, 3842, 338, 8801, 6509, 3841, 5900, 68, 4514, 8955, 3860, 5654, 2034, 2395, 3353, 6271, 5461, 6702, 8024, 3570, 9408, 5809, 7731, 8805, 5583, 4751, 2664, 7552, 1589, 4306, 5551, 7362, 2403, 6225, 9267, 5909, 8841, 7639, 787, 1945, 4435, 5110, 1905, 8208, 3224, 7843};
    vector<int> time = {118, 135, 139, 171, 189, 228, 230, 243, 266, 298, 329, 368, 382, 411, 426, 466, 483, 492, 534, 572, 594, 616, 621, 647, 653, 654, 665, 684, 707, 713, 721, 756, 768, 775, 800, 804, 840, 854, 883, 884, 916, 937, 957, 964, 965, 1001, 1023};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6801.678658161695;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int period = 19;
    vector<int> accel = {0, 6189, 1651, 3035, 3282, 2286, 5424, 3284, 5904, 8944, 933, 2418, 1495, 4631, 3011, 7805, 26, 1150, 5458, 6535, 8925, 1394, 9082, 311, 9847, 14, 4483, 3568, 1914, 3122, 2789, 3025, 3015};
    vector<int> time = {16, 51, 93, 95, 152, 154, 210, 225, 277, 325, 377, 398, 401, 413, 437, 458, 508, 525, 528, 563, 567, 585, 639, 675, 701, 754, 782, 831, 833, 860, 914, 959, 981};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8676.548112778655;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int period = 258;
    vector<int> accel = {0, 889, 2338, 3739, 5116, 1183, 1732, 5916, 1293, 9974, 6712, 3388, 4975, 3885, 4080, 9100, 1239, 4453, 3890, 3406, 6188, 9600, 1162, 479, 3557, 9034};
    vector<int> time = {103, 169, 218, 219, 276, 342, 358, 425, 488, 517, 585, 613, 665, 671, 699, 761, 766, 777, 838, 889, 913, 963, 984, 1006, 1072, 1116};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6147.563236536801;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int period = 415;
    vector<int> accel = {0, 2104, 1693, 8827, 4201, 4984, 7149, 3802, 9245, 1594, 9417};
    vector<int> time = {147, 149, 153, 164, 217, 265, 371, 425, 479, 587, 621};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5922.531841073924;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int period = 100;
    vector<int> accel = {0, 6578, 7707, 5433, 6535, 5337, 6535, 7432, 7054, 3040, 5554, 1061, 7065, 5051, 855, 4335, 792, 6749, 5768, 5130, 7009, 9498, 1517, 7125, 1499, 6744, 3708, 9362, 9044, 8597, 9047, 4424, 5200, 5076, 1600, 4570, 307, 2409, 8089, 1286, 4073, 1849, 800, 760};
    vector<int> time = {12, 14, 50, 66, 73, 89, 112, 157, 189, 191, 220, 256, 288, 305, 343, 358, 389, 420, 462, 483, 494, 503, 546, 560, 600, 603, 643, 651, 693, 701, 737, 754, 763, 804, 810, 813, 820, 856, 869, 903, 936, 965, 987, 999};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8833.709193250288;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int period = 100;
    vector<int> accel = {0, 3238, 8107, 1979, 8187, 7257, 3251, 5185, 2188, 7353, 9862, 4667, 7339, 9224, 9093, 7918, 3116, 3723, 8345, 3299, 4155, 8176, 8295, 1791, 9625, 6411, 4191, 3658, 7910, 4729, 922, 2208, 4401, 9059, 6445, 91, 4162};
    vector<int> time = {56, 109, 111, 143, 189, 221, 225, 264, 296, 334, 358, 394, 411, 458, 506, 517, 518, 519, 538, 574, 622, 672, 692, 715, 748, 790, 811, 814, 823, 840, 847, 848, 857, 891, 900, 943, 993};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8776.549073003216;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int period = 121;
    vector<int> accel = {0, 948, 4878, 3171, 9674, 4334, 3116, 4857, 3785, 9231, 7334, 1431, 227, 9797, 5165, 1791, 8476, 2667, 8489};
    vector<int> time = {117, 142, 150, 151, 207, 258, 316, 392, 493, 556, 569, 649, 739, 742, 835, 931, 1014, 1017, 1026};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6871.61649154503;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int period = 51;
    vector<int> accel = {0, 1873, 1838, 1101, 6607, 5234, 6998, 7272, 8973, 8784, 5334, 2774, 2192, 1045, 7133, 348, 4819, 4947, 855, 1525, 1493, 944, 983, 4373, 2388, 1547, 6649, 9224, 2113, 5902, 675, 5366, 2986, 4513, 671, 1931, 9619, 9849, 8322, 9078, 3598, 2981, 2834};
    vector<int> time = {21, 59, 80, 83, 127, 137, 152, 177, 178, 181, 204, 214, 226, 245, 277, 314, 322, 348, 351, 362, 401, 439, 461, 505, 524, 555, 597, 610, 611, 612, 635, 669, 701, 712, 737, 744, 755, 790, 794, 803, 806, 841, 855};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 9441.628718700476;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int period = 134;
    vector<int> accel = {0, 8263, 8402, 2026, 2638, 7590, 9382, 2860, 6672, 8577, 8545, 8483, 261, 7760, 34, 107, 2295, 7886, 5604, 3944, 2647, 8793, 8429, 739, 3128, 66, 275, 9265, 5857};
    vector<int> time = {132, 182, 243, 260, 297, 327, 354, 355, 382, 396, 439, 507, 517, 527, 535, 592, 607, 636, 691, 737, 757, 788, 816, 830, 838, 862, 905, 941, 971};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8306.543297691862;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int period = 117;
    vector<int> accel = {0, 2244, 9140, 9510, 706, 3626, 502, 9186, 4091, 1598, 9607, 8135, 4328, 9067, 7437};
    vector<int> time = {20, 41, 66, 69, 78, 88, 128, 143, 207, 310, 311, 391, 425, 558, 580};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8003.186696344861;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int period = 89;
    vector<int> accel = {0, 9199, 6125, 8766, 7263, 5248, 3128, 6701, 9136, 9772, 2265, 5297, 3023, 6087, 3105, 6290, 9968, 9634, 5721, 640, 2577, 1304, 8769, 6765, 368, 1792, 5603, 5589, 1168, 3953, 9901, 4289, 6535, 3469, 1575, 2144, 6910, 1759, 7115, 5049, 2181, 1157, 9597, 2742, 1, 1297, 7504, 561, 6990};
    vector<int> time = {65, 87, 113, 121, 137, 172, 188, 200, 215, 241, 265, 297, 302, 336, 372, 385, 402, 418, 423, 424, 459, 488, 491, 523, 544, 565, 592, 627, 662, 690, 730, 756, 792, 824, 836, 839, 871, 883, 896, 930, 955, 987, 998, 999, 1027, 1054, 1068, 1107, 1114};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7245.593964295679;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int period = 171;
    vector<int> accel = {0, 3185, 9215, 8776, 4981, 8394, 1280, 6670, 5533, 5440, 9786, 6301, 3819, 5382, 6552, 3925, 9999, 5112, 1277, 2482, 7562, 4907, 7890, 7410, 2353, 3724, 4458, 2272, 8435, 6638, 8836, 6763, 1459, 4920, 4023, 1882};
    vector<int> time = {84, 103, 114, 163, 215, 221, 258, 265, 270, 291, 315, 339, 391, 428, 460, 512, 524, 571, 618, 630, 679, 696, 721, 748, 782, 799, 838, 884, 919, 960, 964, 1017, 1019, 1052, 1059, 1076};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6848.525300702108;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int period = 464;
    vector<int> accel = {0, 4581, 6854, 4662, 8125, 8539, 3077, 1481, 9644, 2496, 7046, 8368, 8326, 5540, 8738, 659, 9807, 5401, 2211, 6323, 8398, 8439, 1365, 4341, 10000, 2611, 4794, 8029, 1055, 3227, 1605, 31, 501, 1379, 7315, 4097, 8596, 9188, 3531, 1525, 8524, 240};
    vector<int> time = {18, 61, 65, 107, 118, 130, 144, 167, 188, 216, 230, 259, 274, 295, 309, 323, 368, 406, 449, 467, 470, 479, 497, 534, 558, 604, 643, 689, 736, 759, 766, 807, 812, 821, 822, 851, 891, 938, 952, 980, 996, 1038};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5762.511467657032;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int period = 401;
    vector<int> accel = {0, 4887, 6808, 605, 2693, 9200, 8872, 8739, 473, 492, 2840, 7404, 1173, 4580, 9570, 7653, 9718, 2599, 4996, 5344, 2400, 837, 1200, 9016, 6757, 6122, 1357, 7987, 9756, 5852, 2927};
    vector<int> time = {190, 199, 255, 312, 376, 428, 447, 501, 525, 546, 587, 625, 626, 658, 699, 717, 759, 818, 832, 896, 906, 960, 980, 1010, 1035, 1043, 1069, 1133, 1151, 1172, 1216};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6108.5158306334415;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int period = 283;
    vector<int> accel = {0, 4266, 99, 5330, 9292, 4103, 6778, 9619, 5896, 338, 741, 8962, 7682, 5748, 6440, 8870, 2078, 110, 9288, 9125, 3885, 2576, 9317, 3028, 3407, 537, 9216, 1207, 8145, 1702, 4666, 908, 8540, 1641, 6837, 150, 4537, 2784, 5432, 7722, 7914, 6846, 8309};
    vector<int> time = {178, 191, 216, 260, 276, 304, 336, 361, 379, 383, 422, 428, 470, 511, 538, 583, 584, 612, 620, 658, 690, 726, 739, 740, 755, 764, 786, 798, 806, 815, 838, 847, 886, 931, 966, 993, 1014, 1021, 1028, 1067, 1075, 1081, 1095};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6541.52239520981;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int period = 494;
    vector<int> accel = {0, 512, 393, 2454, 6807, 9792, 3259, 7159, 7026, 1344, 3921, 1617, 1640, 3919};
    vector<int> time = {186, 300, 335, 373, 374, 397, 514, 591, 720, 748, 875, 1004, 1072, 1122};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5457.516709421674;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int period = 65;
    vector<int> accel = {0, 2310, 543, 9054, 4202, 2159, 4458, 8506, 8250, 9007, 2309, 4004, 5737, 100, 2945, 9950, 1083, 7346, 3591, 2434, 6146, 2517, 827, 3747, 5549, 1805, 8836, 7112, 3456, 352, 2724, 5879, 2253, 3543};
    vector<int> time = {33, 47, 94, 137, 174, 191, 201, 222, 263, 274, 292, 328, 334, 377, 403, 423, 452, 487, 497, 513, 531, 547, 573, 606, 630, 639, 675, 704, 747, 789, 793, 844, 848, 895};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8318.526525603918;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int period = 336;
    vector<int> accel = {0, 3047, 120, 7537, 9366, 7379, 4581, 9385, 7837, 6872, 7944, 3279, 568, 3514, 6178, 2722, 275, 5466, 3341, 8581, 2932, 5284, 2376, 9713, 9924, 9246, 9783, 5592, 4631, 28, 3929, 3152, 4497, 3337, 391, 515, 4934, 3521, 7355, 5942, 2594, 8192, 43};
    vector<int> time = {48, 80, 106, 108, 109, 122, 124, 143, 179, 214, 221, 260, 297, 323, 362, 404, 441, 471, 478, 515, 529, 560, 568, 601, 613, 651, 678, 681, 710, 731, 734, 748, 794, 798, 803, 829, 857, 860, 892, 916, 917, 960, 977};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5768.525549152242;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int period = 135;
    vector<int> accel = {0, 2764, 8391, 9508, 6404, 9048, 3377, 3549, 8942, 3275, 1008, 7690, 8893, 3763, 142, 1795, 9148, 5719, 850, 863, 3975, 6964, 3393, 5719, 9918, 1593, 5603, 7087, 1051, 2534, 1027, 2258, 5697, 5363, 6072, 6622, 272, 9487, 1022, 3965, 1564};
    vector<int> time = {44, 68, 74, 81, 123, 169, 190, 221, 269, 288, 334, 353, 355, 389, 399, 425, 437, 439, 450, 460, 482, 485, 498, 543, 576, 605, 612, 639, 648, 670, 679, 683, 686, 728, 774, 795, 809, 811, 820, 852, 855};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7116.619161009284;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int period = 873;
    vector<int> accel = {0, 2100, 5375, 6373, 4016, 286, 1278, 9663, 6744, 9088, 4015, 3289, 6900, 9164, 9853, 775};
    vector<int> time = {190, 267, 310, 348, 416, 475, 566, 591, 701, 781, 843, 947, 1063, 1071, 1148, 1149};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5457.700663474418;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int period = 104;
    vector<int> accel = {0, 7700, 3221, 211, 6363, 1991, 7096, 8018, 617, 6376, 8318, 7902, 2887, 4356, 7168, 551, 1466, 2269};
    vector<int> time = {36, 111, 154, 174, 259, 318, 429, 436, 441, 447, 459, 523, 524, 587, 642, 651, 762, 770};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7418.156461565163;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int period = 685;
    vector<int> accel = {0, 2008, 6280, 9995, 1958, 9027, 3420, 6531, 3778, 8829, 1565, 5299, 5106, 8274, 5430, 6691, 1, 6459, 96, 7643, 5455, 4776, 5965, 2754, 6987, 8479, 3836};
    vector<int> time = {80, 90, 157, 158, 194, 207, 247, 276, 286, 341, 350, 353, 366, 381, 455, 469, 507, 510, 554, 596, 646, 648, 720, 779, 811, 821, 887};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5436.560516641175;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int period = 681;
    vector<int> accel = {0, 4468, 6191, 352, 4432, 2255, 9267, 5251, 1059, 1658, 6418, 171, 1095, 8681, 5718, 742, 5369, 944, 418, 7508, 3776, 678, 9793, 4001, 4953, 7358, 8811, 9133, 4621, 8853, 2421, 9798, 513, 1346, 6288, 9941, 1418, 908, 8903, 3375};
    vector<int> time = {129, 174, 194, 195, 215, 235, 251, 262, 312, 352, 371, 383, 389, 413, 452, 501, 541, 588, 601, 608, 652, 671, 681, 711, 727, 770, 771, 806, 832, 872, 906, 939, 945, 967, 994, 1017, 1038, 1058, 1080, 1095};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5130.510688342182;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int period = 650;
    vector<int> accel = {0, 6777, 3931, 5871, 3342, 6202, 5804, 7248, 7768, 5209, 6938, 5770, 2852, 7347, 8505, 8363, 6632, 6577, 729, 2670, 3537};
    vector<int> time = {286, 287, 336, 371, 377, 390, 410, 414, 428, 458, 465, 492, 581, 632, 697, 745, 836, 920, 943, 971, 982};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6247.551071003027;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int period = 217;
    vector<int> accel = {0, 3081, 3120, 929, 9637, 6445, 1351, 6153, 2010, 5345, 9865, 4504, 7919, 9042, 6979, 9972, 5413, 7079, 2899, 2402, 8464, 4938, 5385, 1129, 1333, 6427, 4942, 9316, 610, 1638, 1745, 7777};
    vector<int> time = {142, 202, 222, 284, 338, 387, 436, 449, 508, 518, 519, 558, 578, 622, 653, 701, 755, 805, 812, 828, 840, 900, 931, 980, 1026, 1057, 1096, 1142, 1156, 1176, 1197, 1226};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7976.529296661532;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int period = 572;
    vector<int> accel = {0, 9492, 8252, 3812, 4422, 1670, 4908, 733, 5761, 1671, 9693, 6582, 9137, 9526, 4631, 552, 77, 6773, 9881, 7143, 9335, 1899, 2202, 8382, 4654, 7023, 4269, 7407, 7241, 9320, 8586, 7074, 4953, 4285, 8391, 1385, 4269, 9160, 6890, 8214, 9438, 9803, 6791, 82, 8868, 3802, 2421};
    vector<int> time = {52, 84, 93, 101, 116, 146, 174, 185, 199, 231, 257, 288, 316, 337, 371, 393, 405, 415, 449, 467, 468, 483, 484, 522, 525, 539, 546, 568, 574, 598, 629, 645, 653, 682, 689, 700, 734, 751, 768, 803, 808, 830, 833, 844, 869, 904, 946};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6622.5273795832545;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int period = 686;
    vector<int> accel = {0, 8056, 8359, 9576, 2217, 589, 5413, 33, 8165, 2089, 4310, 7307, 7709, 3194, 5028, 8833, 3901, 2504, 4387, 223, 9660, 777, 6438, 5796, 4512, 9726, 7470, 565, 8135, 1789, 9432, 5392, 3910, 886, 2038, 6406, 8716, 7793, 5920, 9613, 1245};
    vector<int> time = {207, 211, 220, 250, 292, 339, 342, 388, 389, 408, 451, 454, 478, 516, 558, 600, 624, 640, 665, 701, 713, 724, 729, 766, 768, 769, 796, 812, 836, 869, 897, 909, 940, 982, 1008, 1025, 1052, 1082, 1123, 1166, 1167};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5305.84421861078;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int period = 304;
    vector<int> accel = {0, 2273, 663, 9280, 2356, 2798, 7580, 4505, 1847, 5124, 3805, 8566, 7486, 6125, 8530, 262, 8327, 4701, 1881, 685, 5328, 1406, 1587, 1123, 2291, 3016, 721, 4274, 9739, 1985, 3742, 883};
    vector<int> time = {214, 262, 306, 350, 391, 393, 453, 466, 507, 534, 587, 609, 644, 654, 661, 689, 693, 710, 714, 756, 786, 847, 909, 917, 943, 955, 985, 998, 1005, 1058, 1098, 1130};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5248.513833437854;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int period = 114;
    vector<int> accel = {0, 2207, 2420, 2733, 8730, 841, 1574, 4651, 1211, 8082, 4911, 197, 8906, 7629, 1462, 7196, 5561, 8539, 7827, 4954, 5407, 7884, 9664, 939, 1514, 9460, 712, 1016, 800, 9668, 2969, 9410, 6915, 8990, 4522, 343, 921, 3199, 5000, 8518, 4120, 1028};
    vector<int> time = {10, 53, 60, 103, 148, 161, 168, 182, 191, 218, 237, 269, 274, 303, 317, 319, 320, 322, 368, 370, 408, 445, 478, 511, 549, 554, 570, 609, 630, 655, 699, 742, 756, 763, 779, 799, 802, 807, 827, 838, 870, 917};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7165.531391374532;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int period = 142;
    vector<int> accel = {0, 3544, 2114, 7814, 1072, 1611, 9125, 2091, 2770, 2103, 3004, 732, 9043, 1403, 811, 9906, 4010, 9064, 6058, 7055, 6671, 1916};
    vector<int> time = {124, 187, 202, 253, 276, 282, 287, 346, 390, 398, 447, 494, 517, 545, 582, 636, 654, 709, 798, 805, 821, 825};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7459.529885691638;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int period = 646;
    vector<int> accel = {0, 6266, 8184, 1306, 8282, 8544, 861, 1727, 3294, 6751, 6850, 4580, 6923, 8796, 7660, 2925, 5051, 4423, 7897, 7330, 18, 5137, 2785, 1151};
    vector<int> time = {13, 14, 65, 129, 212, 226, 230, 307, 356, 435, 508, 530, 574, 623, 624, 695, 759, 790, 800, 821, 874, 941, 1017, 1096};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5150.587970168863;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int period = 257;
    vector<int> accel = {0, 2547, 3773, 4621, 5874, 2579, 7165, 5636, 4593, 9339, 7543, 3613, 6351, 3373, 7591, 9876, 7756, 5392, 134, 3540, 7759, 2237, 5786};
    vector<int> time = {213, 229, 269, 276, 357, 437, 481, 536, 572, 645, 653, 704, 712, 715, 718, 723, 735, 812, 814, 862, 924, 996, 1016};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6495.544935645995;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int period = 620;
    vector<int> accel = {0, 2100, 899, 5472, 4533, 1894, 1338, 6241, 2634, 5849, 4199, 3665, 8358, 333, 2730, 5876, 1857, 2685, 6666, 6012, 3468, 9647, 1597, 4337, 4276, 1672, 7395};
    vector<int> time = {186, 191, 194, 227, 238, 280, 290, 304, 315, 331, 385, 423, 435, 449, 497, 515, 579, 646, 718, 787, 835, 842, 911, 960, 998, 1026, 1060};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4367.514198549383;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int period = 183;
    vector<int> accel = {0, 8420, 9702, 8949, 7292, 2164, 1154, 3968, 7404, 7459, 5783, 2627, 3322, 2178, 6954, 3488, 1403, 8223, 2999, 2031, 4376, 7073, 1486, 374, 115, 2817, 6324, 3002, 9864, 7652, 2857, 8057, 7616, 7962, 2349, 7314};
    vector<int> time = {173, 175, 207, 261, 290, 327, 374, 389, 444, 468, 507, 539, 548, 563, 618, 649, 669, 683, 714, 736, 768, 807, 832, 834, 860, 881, 887, 938, 990, 1027, 1064, 1087, 1102, 1140, 1144, 1164};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7175.525929006588;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int period = 91;
    vector<int> accel = {0, 9181, 3810, 8013, 9748, 1247, 9468, 3473, 4647, 2839, 162, 8952, 5855, 85, 936, 6829, 49, 4891, 2309, 9792, 9954, 2744, 9079, 5086, 1899, 4177, 7702, 7160, 4601};
    vector<int> time = {26, 58, 73, 130, 150, 206, 221, 277, 329, 350, 416, 422, 483, 507, 552, 604, 660, 689, 704, 727, 764, 800, 826, 866, 882, 930, 970, 977, 988};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7898.5236688002615;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int period = 221;
    vector<int> accel = {0, 7644, 717, 9357, 4922, 2600, 7463, 1923, 7147, 8082, 6963, 5412, 395, 3953, 6647, 8759, 2962, 3803, 742, 7112, 8194, 9107, 5249, 9940, 9939, 1412, 2399, 3810, 2472, 4769, 9192, 2209, 868, 9741, 6720, 3832, 5871, 1512, 760, 170, 9885, 6136, 1340};
    vector<int> time = {151, 192, 203, 214, 252, 254, 294, 319, 323, 332, 363, 398, 431, 449, 495, 541, 576, 582, 598, 606, 652, 669, 679, 698, 720, 722, 757, 762, 789, 815, 842, 877, 918, 937, 981, 994, 1027, 1060, 1082, 1128, 1151, 1188, 1207};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7038.611809168849;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int period = 72;
    vector<int> accel = {0, 3372, 9394, 9663, 4982, 5294, 1091, 8501, 1907, 9917, 9357, 4913, 5917, 5450, 5566, 3240, 1734, 7468, 376, 2709, 7172, 7515, 2770, 541, 4457, 7754, 8380, 4135, 6173, 8920, 8715, 2807, 1107, 5381, 3702, 8631, 2171, 5530, 9498, 8724, 9400, 4257, 5907, 6724};
    vector<int> time = {28, 67, 74, 92, 117, 133, 142, 149, 164, 192, 229, 261, 265, 282, 300, 328, 350, 392, 430, 458, 487, 499, 534, 540, 566, 583, 584, 598, 608, 642, 646, 687, 717, 729, 771, 814, 843, 885, 914, 933, 942, 944, 949, 978};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8799.66475072138;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int period = 469;
    vector<int> accel = {0, 6068, 1770, 1515, 4017, 4891, 994, 1291, 8671, 2369, 4579, 2743, 6639, 1576, 1885, 2610, 1743, 840, 5996, 9120, 6429, 2204, 8415, 2507, 5574, 7286, 9552, 7832, 1987, 205, 261, 765, 940, 5887};
    vector<int> time = {196, 229, 255, 272, 301, 358, 416, 422, 439, 471, 516, 540, 542, 575, 593, 642, 676, 699, 752, 766, 815, 819, 840, 894, 926, 965, 983, 985, 1038, 1051, 1094, 1101, 1126, 1184};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4665.532756229773;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int period = 222;
    vector<int> accel = {0, 1796, 9752, 5646, 8548, 9504, 5141, 7641, 5657, 4662, 3069, 1247, 8799, 139, 3423, 9035, 8231, 9317, 4568, 306, 7629, 1653, 6527, 1939, 5575, 1997, 2054, 8723, 7998, 3343, 6425, 4982, 2012, 1254, 8168, 5135, 6652, 2149};
    vector<int> time = {195, 220, 228, 274, 282, 294, 334, 340, 343, 356, 400, 419, 454, 496, 547, 599, 606, 615, 637, 644, 664, 670, 712, 733, 734, 749, 793, 840, 845, 897, 936, 949, 958, 964, 994, 1037, 1073, 1110};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 5824.528527550684;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int period = 15;
    vector<int> accel = {0, 600, 2432, 7252, 5940};
    vector<int> time = {12, 135, 336, 578, 579};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7104.85365036423;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int period = 49;
    vector<int> accel = {0, 7616, 3543, 2347, 7844, 2539, 4108, 5670, 5552, 8361, 1262, 6230, 4184, 5663, 1187, 688, 7664, 1738, 6613, 1956, 7951, 9907, 6486, 7597, 8343, 8019, 4200, 8977, 2204, 9295, 6767, 6942, 9461, 9853, 4701, 8044, 5189, 4617, 1371, 5556, 1536, 8442, 787};
    vector<int> time = {14, 47, 69, 89, 107, 143, 187, 201, 240, 278, 298, 334, 349, 383, 420, 444, 486, 488, 530, 537, 544, 559, 563, 607, 642, 675, 695, 715, 737, 757, 789, 834, 879, 896, 909, 920, 923, 926, 966, 996, 1017, 1052, 1068};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 9051.632726259631;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int period = 292;
    vector<int> accel = {0, 316, 5305, 1570, 7779, 9125, 3829, 4816, 4968, 9935, 9998, 6247, 8540, 3381, 9567, 3054, 5028, 1238, 2569, 5614, 4348, 8458, 8009, 3518, 2781, 4346, 6550, 2906, 7213, 3089, 5108, 3565, 732, 3859, 3465, 9647, 5480, 1920, 9416, 1647, 6589, 7371};
    vector<int> time = {221, 232, 245, 257, 278, 305, 337, 355, 358, 393, 416, 428, 443, 456, 485, 522, 536, 552, 593, 632, 634, 645, 648, 657, 676, 695, 729, 736, 759, 798, 834, 846, 864, 894, 895, 897, 943, 982, 993, 994, 1013, 1058};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6596.524996996985;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int period = 44;
    vector<int> accel = {0, 2970, 9816, 380, 4060, 6776, 4673, 7221, 4710, 2425, 8240, 6280, 4823, 5912, 3678, 6295, 8454, 2214, 9400, 2552, 4910, 3599, 5649, 715, 4985, 7981, 9160, 7450, 5712, 1178, 3876, 9282, 4425, 6485, 9580, 8400, 6068, 8883, 3084, 8722, 849, 7438, 8303, 9590};
    vector<int> time = {44, 67, 81, 93, 113, 158, 172, 210, 254, 274, 316, 354, 367, 381, 408, 421, 450, 453, 460, 482, 485, 489, 527, 552, 592, 594, 633, 646, 658, 688, 703, 731, 762, 782, 814, 842, 877, 885, 902, 936, 943, 953, 998, 1014};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 8932.577320356046;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int period = 11;
    vector<int> accel = {0, 5, 5, 0, 6};
    vector<int> time = {0, 5, 15, 25, 31};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4.984848484848485;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int period = 3;
    vector<int> accel = {0, 5, 1, 8, 0, 0, 6};
    vector<int> time = {0, 3, 5, 7, 8, 9, 11};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4.361111111111111;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int period = 1;
    vector<int> accel = {0, 1, 0};
    vector<int> time = {0, 1, 10};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 0.95;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int period = 500;
    vector<int> accel = {5, 30, 5};
    vector<int> time = {0, 999, 2000};
    GForce* pObj = new GForce();
    clock_t start = clock();
    double result = pObj->avgAccel(period, accel, time);
    clock_t end = clock();
    delete pObj;
    double expected = 26.875;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4550&pm=1587
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
long double doit(int a, const VI &b, const VI &c, long double x) { 
  long double cur = 0; 
  int j; 
  for( j = 0; j < b.size()-1; j++ ) { 
    if( x <= b[j] && x+a >= b[j+1] ) { 
      cur += (c[j]+c[j+1])*(b[j+1]-b[j])/2.0; 
    } else if( x <= b[j] && x+a >= b[j] ) { 
      cur += (c[j]+c[j]+(x+a-b[j])*(long double)(c[j+1]-c[j])/(b[j+1]-b[j])) 
          *(x+a-b[j])/2.0; 
    } else if( x <= b[j+1] && x+a >= b[j+1] ) { 
      cur += (c[j+1]+(b[j+1]-x)*(long double)(c[j]-c[j+1])/(b[j+1]-b[j])+c[j+1]) 
          *(b[j+1]-x)/2.0; 
    } else if( x >= b[j] && x+a <= b[j+1] ) { 
      cur += (c[j+1]+(b[j+1]-x-a)*(long double)(c[j]-c[j+1])/(b[j+1]-b[j])+ 
          c[j]+(x-b[j])*(long double)(c[j+1]-c[j])/(b[j+1]-b[j])) 
          *a/2.0; 
    } 
  } 
  return cur; 
} 
 
class GForce { 
public: 
long double avgAccel(int a, vector <int> c, vector <int> b) { 
  int i, j, k, z, n; 
  long double ret = 0, cur, hi, lo, x, y; 
  VI pos; 
 
  for( i = 0; i < b.size(); i++ ) if( b[i]+a <= b.back() ) pos.push_back(b[i]); 
  for( i = 0; i < b.size(); i++ ) if( b[i]-a >= b[0] ) pos.push_back(b[i]-a); 
  sort(pos.begin(), pos.end()); 
  for( i = 0; i < pos.size()-1; i++ ) { 
    hi = pos[i+1]; lo = pos[i]; 
    for( j = 0; j <= 1000; j++ ) { 
      x = (hi+2*lo)/3; 
      y = (2*hi+lo)/3; 
      if( doit(a, b, c, x) >= doit(a, b, c, y) ) hi = y; else lo = x; 
    } 
    ret >?= doit(a, b, c, (hi+lo)/2)/a; 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/