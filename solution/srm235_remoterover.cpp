/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4022
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

class RemoteRover {
public:
    double optimalTravel(vector<int> width, vector<int> speed, int offset);
};

double RemoteRover::optimalTravel(vector<int> width, vector<int> speed, int offset) {
    double ret;
    return ret;
}


int test0() {
    vector<int> width = {100, 300, 200};
    vector<int> speed = {100, 50, 75};
    int offset = 1000;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 17.042083785318038;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> width = {1155, 6184, 2783, 7540, 8156};
    vector<int> speed = {570, 810, 875, 172, 642};
    int offset = 0;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 69.38271426584203;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> width = {5000};
    vector<int> speed = {50};
    int offset = 10000;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 223.60679774997894;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> width = {9033, 8232, 8842, 6518, 2358, 1115, 941, 928, 220, 8460};
    vector<int> speed = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int offset = 10000;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 954.1368054948935;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> width = {9236, 7065, 2283, 506, 6432, 9812, 3133, 1397, 7052, 3729, 2556, 9954, 1367, 6440, 5141, 3091, 2879, 1346, 7080, 1036, 7503, 7775, 433, 7579, 6520, 2287, 1971, 3879, 1725, 8200, 1830, 2774, 3850, 7509, 8531, 7493, 1511, 9399, 9679, 2124, 791, 3432};
    vector<int> speed = {956, 799, 481, 194, 993, 444, 571, 986, 815, 910, 98, 847, 650, 487, 419, 434, 410, 812, 374, 751, 307, 134, 134, 955, 758, 73, 932, 360, 135, 588, 218, 936, 674, 494, 157, 556, 881, 292, 851, 890, 886, 912};
    int offset = 9756;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 501.6129192127166;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> width = {1704, 244, 5035, 7818, 2769, 307, 371, 4421, 3419, 8092, 4870, 957, 4142, 8349, 7158, 7, 2727, 9943, 6076, 9862, 3087, 5156, 3081, 4300, 9483, 3744, 3914, 6425, 4027, 8040, 6743, 1166, 723, 9903, 6020, 8184, 3891, 707, 2762, 4347, 315, 2194, 1099, 6493, 2076};
    vector<int> speed = {24, 746, 178, 224, 690, 112, 730, 811, 81, 906, 481, 191, 491, 591, 416, 980, 165, 330, 629, 588, 317, 461, 990, 504, 998, 408, 62, 369, 363, 8, 897, 322, 595, 423, 546, 889, 472, 316, 92, 449, 832, 615, 593, 730, 344};
    int offset = 9970;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1601.6600284822227;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> width = {6131, 9321, 8209, 9136, 6194, 3479, 5829, 4158, 5494, 4798, 5996, 8811, 9507, 5039, 5252, 7757, 5491, 7565, 2225, 5003, 672, 4491, 7724, 4800, 6621, 3980, 8530, 9004, 6263, 1803, 8879, 7405, 3977, 4548, 9521, 4431, 4484, 4439, 2432, 6297, 7522, 2237, 7226, 4383, 6690};
    vector<int> speed = {924, 339, 314, 401, 242, 310, 434, 712, 842, 714, 811, 525, 702, 904, 75, 213, 490, 853, 501, 877, 995, 856, 328, 590, 863, 526, 565, 960, 616, 916, 895, 138, 963, 921, 133, 604, 327, 680, 819, 684, 993, 914, 551, 442, 904};
    int offset = 7760;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 646.4357091147734;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> width = {8176, 9361, 9756, 6950, 1264, 4969};
    vector<int> speed = {495, 682, 496, 531, 491, 700};
    int offset = 253;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 72.67514264727286;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> width = {2278, 7901, 3988, 7443, 2519, 6973, 8460, 638, 3860, 6667, 9346, 46, 5148, 9005, 8586, 452, 1331, 9289, 561, 6135, 8736, 7733, 4965, 5762, 4152, 9391, 874, 7034, 6427, 8740};
    vector<int> speed = {132, 641, 177, 507, 545, 173, 180, 779, 344, 851, 129, 978, 511, 841, 405, 859, 560, 22, 288, 723, 187, 651, 304, 294, 637, 251, 805, 487, 547, 729};
    int offset = 9498;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 906.9986841995154;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> width = {8118, 6867, 8983, 9166, 6643, 5949, 4869, 4276, 5972, 7336, 9763, 7307, 7649, 4396, 5048, 1991, 4330, 1042, 8219, 7742, 4843, 9005, 8673, 3845, 9703, 6120, 1749, 1258, 185, 8017, 5821, 2396, 7069, 8369, 3157, 7415, 8772, 6943, 8925, 6711, 48, 6744, 7437};
    vector<int> speed = {804, 375, 1, 789, 400, 1, 1, 1, 989, 1, 1, 1, 541, 1, 1, 1, 34, 530, 107, 505, 1, 745, 719, 151, 1, 1, 1, 596, 709, 1, 488, 1, 1, 1, 332, 1, 659, 1, 108, 521, 972, 376, 1};
    int offset = 9067;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 130478.13610265777;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> width = {9635, 2963, 8836, 6105, 8237, 6880, 9072, 1740, 880, 4483, 9051, 9658};
    vector<int> speed = {401, 996, 787, 349, 259, 290, 848, 138, 570, 330, 359, 555};
    int offset = 5889;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 192.74753875165402;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> width = {8728, 4251, 1595, 5973, 8100, 5281, 5063, 932, 3950, 2554, 7273, 5460, 3822, 9587, 3639, 6661, 8218, 7818, 3344, 4067, 3542, 7378, 4630, 6875, 2668, 5373, 4907, 3039, 8505, 4367, 4331};
    vector<int> speed = {345, 260, 524, 254, 16, 355, 907, 195, 270, 394, 318, 337, 460, 143, 684, 100, 88, 56, 75, 928, 976, 420, 491, 632, 129, 43, 835, 656, 689, 562, 175};
    int offset = 2659;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1331.6947851504485;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> width = {6304, 8314, 2841, 8424, 5018, 4185, 8467, 1779, 666, 8287, 5643, 4343, 9975, 293, 6960};
    vector<int> speed = {1, 1, 1, 1, 1, 433, 1, 205, 576, 1, 1, 475, 1, 1, 1};
    int offset = 2826;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 70555.47822116842;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> width = {7541, 2015, 288, 2947, 10, 9794, 8909, 1894, 1927, 3866, 6976, 4188};
    vector<int> speed = {837, 600, 364, 987, 870, 257, 137, 691, 198, 930, 715, 481};
    int offset = 3044;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 154.56239076022194;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> width = {2767, 905, 2897, 1930, 2980, 5621, 3232, 2935, 2594, 6787, 9071, 6720, 5885, 2221, 6376, 2681, 5987, 4080, 560, 2485, 339, 8082, 9241, 87, 5069, 471, 3321, 55, 2723, 4964, 2471, 3934, 4103, 9888, 3465, 3604, 4526, 8418, 7211, 1791, 4222, 660, 6049, 5345, 9542, 3182, 8509, 8937, 2173, 5951};
    vector<int> speed = {522, 701, 579, 415, 997, 134, 889, 11, 996, 506, 198, 356, 630, 599, 504, 156, 963, 910, 12, 168, 133, 469, 143, 94, 611, 687, 899, 259, 682, 76, 190, 171, 931, 380, 260, 157, 470, 66, 70, 469, 405, 231, 858, 678, 301, 672, 243, 102, 627, 391};
    int offset = 7796;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1247.9511575421454;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> width = {755, 5215, 6047, 7462, 3631, 3384, 275};
    vector<int> speed = {778, 945, 987, 853, 301, 853, 184};
    int offset = 6959;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 39.9736616725716;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> width = {8460, 1380, 4066, 2108, 6081, 7908, 1793, 7083, 2692, 8560, 5446, 503, 7403, 5274, 8635, 1116, 470, 8353, 2943, 8186, 7323, 4104, 9124, 6170, 7619, 5319, 7774, 8818, 6171, 2488, 3285, 743, 3491, 7478, 1190, 9831, 7175, 3865, 9099, 656, 7600, 1380, 4074, 7379, 8503, 4087, 3995, 3121, 9165};
    vector<int> speed = {43, 898, 49, 636, 314, 794, 989, 625, 138, 699, 122, 545, 854, 517, 510, 879, 316, 358, 743, 25, 838, 792, 149, 550, 777, 406, 590, 806, 826, 684, 467, 804, 28, 509, 600, 731, 652, 824, 20, 194, 830, 729, 79, 281, 158, 598, 286, 802, 575};
    int offset = 8263;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1762.5377393852918;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> width = {1873, 1217, 1985, 1340, 8635, 6349, 8711, 7401, 7441, 4997, 8578, 9469, 1971, 633, 4202, 4388, 9942, 8185, 7296, 6295, 2738, 1427, 2072, 970, 4373, 6679, 1362, 8700, 8873, 1879, 7155, 8958, 6336, 6594, 1662, 3859, 7094, 7940, 1808, 1421};
    vector<int> speed = {627, 27, 284, 257, 415, 195, 762, 532, 308, 213, 475, 999, 360, 687, 951, 41, 728, 599, 405, 349, 870, 223, 465, 661, 332, 305, 630, 168, 433, 419, 291, 563, 11, 419, 729, 803, 929, 939, 506, 988};
    int offset = 8786;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1185.6088910907129;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> width = {9134, 8742, 5889, 8117, 8215, 9453, 7254, 7953, 5788, 2905, 770, 8708, 2977, 8077, 8216, 2031, 9318, 8286, 6006, 9783, 5255, 1662, 6690, 1780, 6907, 9900};
    vector<int> speed = {593, 390, 862, 723, 231, 73, 241, 887, 130, 968, 456, 526, 281, 379, 924, 951, 111, 742, 70, 959, 734, 291, 890, 875, 576, 855};
    int offset = 683;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 605.8085687345417;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> width = {3282, 6794, 2681, 8498, 1569, 1561, 2212, 949};
    vector<int> speed = {237, 535, 481, 196, 671, 393, 129, 501};
    int offset = 2827;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 101.23604445798776;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> width = {3980, 2876, 7139, 671, 3565, 7886};
    vector<int> speed = {248, 659, 947, 337, 690, 269};
    int offset = 7672;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 66.38330030595517;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> width = {6177, 5647, 2764, 7841};
    vector<int> speed = {448, 929, 786, 941};
    int offset = 4120;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 32.19408148863989;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> width = {9461, 1772, 5754, 2964, 4160, 1611, 9462, 2977, 8874, 3010, 8709, 1994, 6108, 9578, 8127, 9007, 8505, 9606, 2986, 4033, 7816, 2955, 3213};
    vector<int> speed = {424, 158, 324, 851, 437, 151, 260, 293, 685, 281, 598, 812, 529, 367, 62, 822, 337, 646, 675, 443, 602, 139, 576};
    int offset = 9305;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 436.0290305479315;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> width = {6755, 1340, 558, 698, 393, 9180, 7073, 9937, 9149, 5841, 8492, 2553, 9496, 482, 1864, 3728, 2628, 1925, 5469, 1872, 35, 3604, 673, 1283, 2155, 584, 396, 1060, 4074, 2438, 6814, 7033, 1640, 6885, 2186, 6553, 7369, 3141, 9971, 130, 9561, 4970, 2408, 6586, 3181};
    vector<int> speed = {284, 197, 161, 669, 236, 390, 568, 766, 68, 583, 470, 996, 406, 633, 834, 848, 901, 388, 266, 973, 74, 509, 389, 920, 231, 309, 165, 786, 745, 750, 206, 49, 543, 746, 993, 732, 477, 416, 890, 844, 128, 458, 271, 543, 615};
    int offset = 3486;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 692.596186446376;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> width = {8285, 544, 8786, 1651, 7520, 92, 903, 6590, 9420, 8051, 7549, 1538, 3296, 2997, 6068, 1325, 625, 2044, 4788, 3428, 6581, 7980, 5830, 8243, 2322, 9708, 4420, 555, 3851, 2564, 8262, 9926, 577, 7021, 5, 169, 1737, 2351, 7184, 9449, 9051, 221, 7511, 1824, 2307, 2305};
    vector<int> speed = {653, 680, 346, 1, 560, 381, 282, 1, 13, 1, 654, 215, 1, 1, 1, 1, 180, 1, 16, 470, 912, 737, 1, 194, 1, 480, 730, 1, 371, 1, 646, 1, 710, 1, 394, 1, 1, 173, 1, 571, 995, 1, 1, 705, 40, 884};
    int offset = 1305;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 78384.00500164002;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> width = {1745, 4408, 2379, 1708, 148, 6616, 3839, 5254, 30, 4788, 239, 8192, 636, 1917, 7614};
    vector<int> speed = {1, 1, 1, 1, 1, 793, 1, 1, 1, 240, 1, 1, 1, 768, 1};
    int offset = 5040;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 36224.31589129784;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> width = {6645, 4994, 5380, 9555, 8267, 2447, 6076, 7485, 3080, 9306, 5543, 6693, 5092, 3971, 8823, 3343, 5489, 4932, 5093, 3281, 1226, 7719, 9085, 509, 6604, 7239, 8219, 5726, 1313, 3392, 2382, 1818, 8754, 8949};
    vector<int> speed = {765, 501, 296, 698, 182, 584, 559, 330, 685, 336, 897, 56, 232, 544, 242, 510, 53, 301, 132, 905, 30, 415, 151, 687, 298, 851, 65, 387, 856, 598, 640, 852, 86, 586};
    int offset = 5050;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 948.5697381114564;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> width = {988, 6828, 4669, 4158, 875, 8683, 777, 9337, 2303, 7986, 1225, 8117, 4192, 1562, 5588};
    vector<int> speed = {593, 37, 609, 573, 914, 134, 345, 771, 174, 347, 118, 397, 346, 706, 772};
    int offset = 5972;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 370.50625617117413;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> width = {5559, 978, 2860, 5339, 2942, 414, 5202, 4994, 6556, 4291, 8102, 574, 5122, 2104, 7841, 4925, 9589, 7710, 5404, 600, 4216, 513, 3916, 4909, 1355, 4763, 7700};
    vector<int> speed = {536, 936, 959, 536, 24, 381, 35, 102, 391, 691, 876, 291, 1, 821, 780, 31, 786, 995, 430, 45, 937, 698, 153, 163, 547, 110, 93};
    int offset = 9831;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 5909.52316678749;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> width = {1817, 7332, 858, 600, 7403, 6890, 9540, 3701, 7552, 5516, 5058, 6315, 2406, 5542, 236, 3060, 9364, 7991, 5833, 9893, 2860, 2938, 9996, 2253, 5383, 3065, 4948, 2634, 3047, 3817, 1645, 2289, 8904};
    vector<int> speed = {243, 246, 313, 895, 388, 225, 459, 265, 978, 781, 693, 216, 431, 80, 520, 43, 359, 315, 852, 292, 116, 495, 881, 494, 917, 40, 513, 673, 803, 218, 955, 730, 775};
    int offset = 8616;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 595.7875396125969;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> width = {1870, 2213, 4734, 7972, 3449, 7765, 7050, 5061, 7549, 7605, 236, 5311, 4670, 8693, 1071, 7913, 5850, 3652, 2436, 1481, 5933, 8876, 1084, 7084, 6006, 2604, 6431, 4900, 5388, 2308, 254, 83, 8761, 3419, 2423, 456, 1946, 1083, 5838, 2287, 7175, 6079, 2643, 2831, 1336, 8778, 6858, 7941, 2807, 9967};
    vector<int> speed = {971, 737, 1, 154, 324, 1, 1, 223, 228, 1, 391, 1, 743, 675, 724, 855, 717, 283, 1, 363, 348, 786, 1, 1, 382, 225, 1, 285, 1, 532, 1, 309, 1, 1, 51, 39, 724, 328, 154, 621, 746, 482, 490, 457, 1, 1, 307, 865, 930, 83};
    int offset = 39;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 77987.45099512913;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> width = {3605, 2633, 88, 3868, 484, 3019, 6488, 6304, 7902, 2027, 1827, 4898, 2974, 1286, 6756, 804, 8924, 9777, 719, 2045, 6682, 6073, 9718, 6651, 9431, 9337, 4436, 9620, 6015, 1669, 186, 1513};
    vector<int> speed = {648, 633, 451, 1, 146, 431, 157, 874, 828, 671, 545, 327, 673, 434, 683, 15, 151, 365, 33, 315, 885, 820, 534, 520, 72, 110, 717, 271, 68, 176, 559, 713};
    int offset = 5369;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 4556.826316446121;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> width = {9042, 7439, 8447, 1970, 45, 2161, 8849, 9961, 7298, 4588, 4589, 6351, 707, 9090, 9266, 352, 7136, 9443, 528, 2852, 3456, 8272, 1803, 8554, 7649, 6596, 6333};
    vector<int> speed = {1, 1, 60, 1, 1, 1, 862, 1, 1, 675, 1, 266, 609, 1, 1, 427, 1, 1, 1, 1, 1, 1, 1, 232, 430, 384, 739};
    int offset = 2997;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 94615.28502419492;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> width = {2125, 8423, 2458, 6131, 4918, 878, 7467, 6000, 4376, 8586, 1043, 754, 7571, 7306, 8353, 8008, 8942, 6114, 2087, 422, 9950, 4325, 5929, 4931, 6765, 4402, 2482, 3376, 6160, 7431, 9051, 8587, 2587, 5522, 4377};
    vector<int> speed = {962, 282, 683, 58, 560, 170, 375, 277, 415, 818, 368, 203, 90, 595, 660, 263, 139, 639, 616, 904, 712, 165, 955, 913, 888, 909, 221, 523, 382, 669, 346, 139, 316, 913, 710};
    int offset = 8504;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 659.6499947489211;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> width = {5066, 8988, 1475, 1320, 6002, 9828, 3547, 9974, 8718, 2824, 9996, 9673, 2728, 8223, 3486, 4336, 3114, 3714, 749, 1526, 2115, 3939, 214, 7865, 9979, 8700, 3521, 1124, 6233};
    vector<int> speed = {232, 833, 862, 748, 9, 821, 114, 625, 290, 582, 277, 862, 437, 419, 997, 681, 517, 454, 493, 711, 108, 552, 990, 520, 164, 533, 703, 959, 672};
    int offset = 4385;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1032.6679333828695;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> width = {9015, 1813, 7365, 1977, 2402, 9985, 9411, 9388, 8963, 3202, 2237, 7596, 9515, 6279, 8388, 5043, 5947, 1560, 4486, 9602, 6925, 7434, 806, 9531, 9425, 9513, 5190, 6266, 6842, 9644, 2996, 8433, 9371, 3486, 7483, 3981, 9766, 1479, 5277, 1118};
    vector<int> speed = {583, 815, 909, 900, 810, 52, 233, 405, 848, 272, 142, 974, 258, 778, 679, 882, 336, 513, 424, 927, 136, 374, 985, 277, 190, 462, 271, 880, 768, 918, 876, 703, 113, 859, 745, 680, 112, 952, 631, 552};
    int offset = 3849;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 876.5370053520969;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> width = {9501, 8511, 1322, 3468, 7652, 906, 3127, 1610, 6374, 1086, 4860, 1947, 614, 4287};
    vector<int> speed = {1, 437, 255, 917, 1, 611, 511, 805, 660, 770, 52, 201, 828, 446};
    int offset = 5908;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 17316.532437558133;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> width = {7491};
    vector<int> speed = {894};
    int offset = 7158;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 11.589578519316133;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> width = {3823, 4503, 1945, 6065, 7606, 6313, 5717, 9674, 6359, 8659, 7387, 5034, 2677, 8867, 2999, 8134, 829, 3474, 1135, 6017, 5421, 3545, 6057, 1838, 699, 9364, 6291, 7777, 7185, 8382, 2200, 5096, 6541, 3878, 8437, 935, 9837, 8532, 4499};
    vector<int> speed = {497, 576, 933, 383, 744, 845, 416, 727, 37, 408, 694, 352, 360, 139, 501, 637, 172, 57, 422, 570, 353, 734, 296, 663, 576, 614, 77, 223, 52, 317, 317, 970, 152, 534, 735, 316, 630, 46, 366};
    int offset = 7683;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1096.9001851377095;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> width = {9008, 4362, 7322, 4608, 236, 7970, 4783, 3406, 9199, 4863, 904, 7195, 1175, 4741, 2262, 1999, 2884, 4822, 7016, 6897, 2434, 7500, 2818, 7606, 5143, 3821, 2039, 7485, 8181};
    vector<int> speed = {1, 1, 52, 1, 1, 516, 205, 1, 913, 25, 551, 771, 1, 1, 581, 1, 1, 1, 1, 1, 1, 419, 1, 695, 292, 84, 1, 494, 1};
    int offset = 16;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 67132.14326884235;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> width = {7397, 7148, 4316, 3787, 3669, 8315, 3877, 3850, 8963, 3739, 2624, 2908, 554, 2489, 2582, 9828, 16, 3901, 5218, 8283, 6523, 4310, 540, 702, 9938, 6742, 7162, 9900, 7674, 1664, 8990, 4767, 867, 1184, 4481, 2444, 4382, 2916};
    vector<int> speed = {1, 1, 1, 947, 1, 1, 194, 1, 1, 842, 963, 1, 1, 1, 1, 1, 896, 1, 1, 1, 951, 1, 982, 1, 854, 1, 287, 1, 1, 61, 1, 935, 229, 1, 1, 356, 973, 1};
    int offset = 2083;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 126442.75744362312;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> width = {5457, 2871, 4321, 2380, 3922, 8418, 729, 2377, 424, 2439, 2290};
    vector<int> speed = {827, 290, 439, 295, 561, 382, 813, 316, 278, 267, 535};
    int offset = 7936;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 88.64675007146676;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> width = {2186, 3417, 4153, 7711, 1437, 5551, 4706, 1349, 9229, 9814, 914, 2367, 2913, 9563, 4674, 8772, 9375, 8515, 7750, 9171, 9819, 3859, 3431, 4706, 353, 1633, 6723, 4150, 3043, 5055, 2206};
    vector<int> speed = {975, 536, 400, 270, 142, 336, 51, 485, 998, 167, 490, 615, 499, 685, 139, 215, 65, 865, 225, 950, 959, 606, 714, 4, 82, 771, 725, 693, 247, 847, 781};
    int offset = 1356;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1776.1006165127742;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> width = {1633, 3578, 2707, 2489};
    vector<int> speed = {220, 24, 436, 764};
    int offset = 4977;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 168.9514754823039;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> width = {2928, 2523, 328, 6475, 4625, 8488, 978, 4675, 8837, 4671, 279, 6643};
    vector<int> speed = {158, 967, 449, 230, 918, 499, 108, 656, 364, 453, 306, 103};
    int offset = 9505;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 190.23788076796723;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> width = {7853, 1281, 2567, 112, 7360, 222, 397, 2085, 3208};
    vector<int> speed = {150, 390, 550, 22, 528, 742, 426, 881, 177};
    int offset = 1784;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 101.2208892145542;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> width = {4046, 4600, 8319, 9219, 5258, 4670, 4922, 2294, 2820, 7808, 9079, 8356, 1550, 2192, 8841, 4034, 9767};
    vector<int> speed = {625, 729, 588, 105, 483, 203, 168, 762, 275, 781, 278, 676, 648, 761, 384, 89, 766};
    int offset = 9078;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 333.45216024443437;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> width = {3927, 1645, 9375};
    vector<int> speed = {11, 152, 33};
    int offset = 8233;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 689.0218038519076;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> width = {1457, 4810, 3478, 7889, 585, 2068, 1914, 5177, 5440, 7582, 2279, 2339, 745, 8447, 2555, 4635, 3039, 9745, 8620, 9080, 3567, 8548, 8311, 5255, 5518, 3736, 3217, 7596};
    vector<int> speed = {825, 567, 552, 250, 759, 211, 136, 852, 583, 401, 240, 87, 248, 98, 638, 441, 410, 825, 962, 189, 823, 997, 42, 45, 773, 382, 830, 563};
    int offset = 4167;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 685.3659723970964;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> width = {7270, 5001, 6735, 4768, 3295, 7839, 9554, 2872, 4214, 612, 1056, 2268, 9149, 701, 7533, 4880, 5512, 437, 7209, 997, 6001, 2890, 5753, 3719, 5368, 225, 7762, 8850, 7842, 7665, 3697, 5731, 6052, 7565, 915, 9481};
    vector<int> speed = {520, 816, 1, 1, 1, 538, 1, 1, 1, 431, 1, 498, 689, 119, 125, 1, 998, 1, 1, 17, 1, 1, 277, 367, 1, 1, 163, 1, 10, 1, 1, 255, 747, 227, 1, 1};
    int offset = 3761;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 91223.06605478864;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> width = {9236, 7065, 2283, 506, 6432, 9812, 3133, 1397, 7052, 3729, 2556, 9954, 1367, 6440, 5141, 3091, 2879, 1346, 7080, 1036, 7503, 7775, 433, 7579, 6520, 2287, 1971, 3879, 1725, 8200, 1830, 2774, 3850, 7509, 8531, 7493, 1511, 9399, 9679, 2124, 791, 3432};
    vector<int> speed = {956, 799, 481, 194, 993, 444, 571, 986, 815, 910, 98, 847, 650, 487, 419, 434, 410, 812, 374, 751, 307, 134, 134, 955, 758, 73, 932, 360, 135, 588, 218, 936, 674, 494, 157, 556, 881, 292, 851, 890, 886, 912};
    int offset = 9756;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 501.6129192127166;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> width = {3, 54, 654};
    vector<int> speed = {34, 5, 46};
    int offset = 3432;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 86.75018655555829;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> width = {304, 219, 123, 304, 219, 123, 304, 219, 123, 304, 219, 123, 304, 219, 123, 304, 219, 123, 304, 219, 123, 304, 219, 123, 304, 219, 123, 304, 219, 123, 305, 219, 123, 304, 219, 122, 14, 199};
    vector<int> speed = {281, 943, 281, 943, 281, 943, 287, 943, 281, 943, 281, 941, 281, 943, 281, 943, 281, 943, 281, 943, 281, 943, 281, 943, 281, 943, 281, 943, 281, 943, 781, 943, 281, 943, 281, 943, 199, 111};
    int offset = 7182;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 23.04520935704459;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> width = {31, 213, 123, 512, 11, 1, 1234, 31, 213, 123, 512, 11, 1, 1234, 31, 213, 123, 512, 11, 1, 1234, 31, 213, 123, 512, 11, 1, 1234, 1, 12, 53, 23, 64, 23, 77, 1, 5, 5, 5, 1, 5, 12, 3, 4, 51, 23, 4, 1, 2, 34};
    vector<int> speed = {2, 4, 35, 31, 213, 123, 512, 11, 1, 31, 213, 123, 512, 11, 1, 31, 213, 123, 512, 11, 1, 32, 2, 34, 5, 3, 123, 42, 86, 456, 34, 2, 1, 5, 3, 4, 1, 2, 4, 5, 2, 12, 17, 34, 2, 3, 434, 45, 34, 717};
    int offset = 9989;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 2115.4800249869286;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> width = {4241, 2766, 4395, 7991, 4005, 6839, 3104, 2672, 3164, 7427, 1976, 2763, 705, 6054, 7020, 6306, 8958, 7210, 8396, 3219, 2838, 5454, 4548, 2046, 6859, 8199, 6422, 4791, 5151, 7005, 6941, 1569, 7782, 9360, 6699, 9869, 2691, 2390, 5418, 1599, 6249, 9701, 154, 4751, 7082, 2687, 5445, 5531, 7133, 7973};
    vector<int> speed = {525, 85, 373, 213, 496, 949, 592, 722, 737, 617, 992, 31, 137, 468, 666, 155, 172, 208, 957, 120, 519, 168, 588, 804, 863, 52, 70, 992, 546, 528, 265, 61, 997, 561, 593, 765, 108, 124, 397, 168, 758, 746, 413, 164, 763, 396, 99, 917, 376, 347};
    int offset = 3665;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 1083.9961173400802;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> width = {10000, 1};
    vector<int> speed = {1, 1000};
    int offset = 10000;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 10009.994999966919;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> width = {1, 10000};
    vector<int> speed = {1000, 1};
    int offset = 1000;
    RemoteRover* pObj = new RemoteRover();
    clock_t start = clock();
    double result = pObj->optimalTravel(width, speed, offset);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.9950005038;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=274023&rd=6534&pm=4022
********************************************************************************
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
#define ALL(C) (C).begin(), (C).end()
#define forN(I,C) for(int I=0; I<int(C); ++I)
#define forEach(I,C) for(int I=0; I<int((C).size()); ++I)
typedef vector<int> VI;
 
struct RemoteRover
{
    double optimalTravel(VI width, VI speed, int offset)
    {
        double l = 0, h = 1./ *max_element(ALL(speed));
        forN ( t, 100 ) {
            double m = (h+l)*.5;
            double to = 0;
            forEach ( i, speed ) {
                double sq = 1-m*m*speed[i]*speed[i];
                if ( sq <= 1e-100 ) sq = 1e-100;
                double o = width[i]*m*speed[i]/sqrt(sq);
                to += o;
            }
            if ( to > offset ) {
                h = m;
            }
            else {
                l = m;
            }
        }
        double m = (l+h)*.5;
        double ret = 0;
        forEach ( i, speed ) {
            double sq = 1-m*m*speed[i]*speed[i];
            if ( sq <= 1e-100 ) sq = 1e-100;
            double t = width[i]/sqrt(sq)/speed[i];
            ret += t;
        }
        return ret;
    }
};

********************************************************************************
*******************************************************************************/