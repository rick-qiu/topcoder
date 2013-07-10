/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11502
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

class YetAnotherIncredibleMachine {
public:
    int countWays(vector<int> platformMount, vector<int> platformLength, vector<int> balls);
};

int YetAnotherIncredibleMachine::countWays(vector<int> platformMount, vector<int> platformLength, vector<int> balls) {
    int ret;
    return ret;
}


int test0() {
    vector<int> platformMount = {7};
    vector<int> platformLength = {10};
    vector<int> balls = {3, 4};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> platformMount = {1, 4};
    vector<int> platformLength = {3, 3};
    vector<int> balls = {2, 7};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> platformMount = {4, 4, 4};
    vector<int> platformLength = {10, 9, 8};
    vector<int> balls = {1, 100};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {1};
    vector<int> balls = {0};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> platformMount = {100, -4215, 251};
    vector<int> platformLength = {400, 10000, 2121};
    vector<int> balls = {5000, 2270, 8512, 6122};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 250379170;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> platformMount = {8827, -3448, -3, -6879, -6453, -8440, -9562, -5507, 9337, 1641, 9964, -2378, -1780, 5909, 9001, 7026, 8926, 1892, 5687, -7660, -6678, 9939, 3453, -8430};
    vector<int> platformLength = {503, 996, 1564, 1898, 1129, 693, 1517, 1057, 400, 40, 1429, 1026, 859, 1040, 18, 1403, 1106, 286, 1790, 613, 317, 901, 1470, 164};
    vector<int> balls = {-9102, -5799, -4414, -4217, -4097, -4043, -2230, -1334, 280, 545, 663, 815, 949, 1681, 1689, 2472, 2623, 2903, 3419, 3452, 4941, 5372};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 693613082;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> platformMount = {-9087, 2340, -1193, -6716, -3874, 328, -8380, 5253, 2494, -117, 3407, 1722, 547, 1515, -759, 430, 7819, -7026, 7980, -6789, 2382, 6515, 3932, -3170, -1952};
    vector<int> platformLength = {1446, 780, 62, 468, 963, 1322, 1697, 1867, 1012, 1072, 966, 88, 926, 2, 840, 819, 519, 861, 799, 580, 1388, 361, 964, 342, 1683};
    vector<int> balls = {-5871, -4652, -4574, -3928, -2227, -2089, -2038, -288, -154, 2518, 2704, 2724, 4523, 7465, 9106, 9271, 9376, 9603, 9986, 9998};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 96904046;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> platformMount = {4443, -1919, 1325, 8418, -5926, -1359, 4606, 4892, -5240, 8670, -3393, 837, -7458, -9052, 7356, 8651, 4443, 7984, 1355, -7530, -3870, 9203, 5091};
    vector<int> platformLength = {929, 1642, 1641, 1321, 406, 1466, 1571, 403, 1576, 452, 1840, 763, 225, 508, 27, 3, 893, 371, 1218, 229, 611, 533, 1821};
    vector<int> balls = {-9487, -8324, -8051, -7858, -7702, -4704, -4677, -4651, -4336, -2380, -600, -483, -421, 1960, 2084, 2926, 3594, 3867, 4071, 4075, 6233, 6264, 6338, 6738, 9258};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 995250141;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> platformMount = {1734, 4480, 62, 4150, 4275, -7081, -8939, 4488, 3779, -9334, 4563, 3760, -4651, -157, 3036, 5480, 4553, -4836, 1267, -5618, -975, -5779, -9966, -2669, 5858};
    vector<int> platformLength = {390, 904, 1263, 515, 35, 467, 416, 1049, 697, 546, 1499, 68, 411, 1944, 1907, 168, 1827, 979, 516, 86, 1244, 275, 956, 1166, 563};
    vector<int> balls = {-9961, -9936, -9742, -8773, -8016, -6706, -6205, -6060, -3422, -2986, 1319, 1464, 1560, 1632, 2438, 2997, 5057, 5103, 5363, 6745, 7481, 8891, 9984};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 625332906;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> platformMount = {5586, 1832, -5080, 5670, -2225, 3135, -7181, 8137, 7710, 9866, 4995, -4495, -625, -8775, -2073, 6459, 3722, -8133, -9758, -5069, -884, -1215, -3112, -331, 7922, -3688, -35, -9434, -3467, -7208, 5995, 7781, -8935, 7392, -5610, -5361, 6036};
    vector<int> platformLength = {585, 1272, 839, 1878, 989, 694, 343, 1064, 857, 1159, 127, 1858, 1533, 758, 236, 350, 1674, 151, 1371, 1763, 1459, 198, 74, 602, 1018, 539, 473, 382, 1376, 21, 128, 1112, 709, 390, 9, 1179, 1178};
    vector<int> balls = {-9649, -8502, -8372, -8358, -7350, -7266, -6707, -6700, -6438, -3069, -1801, -1717, 225, 1504, 1510, 1734, 3111, 6875, 8237, 9036};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 619851547;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> platformMount = {-9807, 8948, -9789, -7448, -3310, 6847, -2826, 8663, 3884, -7618, -2915, -1084, 4637, 2243, -6431, 9045, -7783, 8797, 7400, 6640};
    vector<int> platformLength = {64, 633, 139, 469, 897, 1360, 714, 753, 450, 1308, 851, 1332, 412, 1885, 21, 607, 627, 389, 896, 915};
    vector<int> balls = {-8640, -6642, -6032, -5022, -4681, -4433, -3702, -2358, -603, -410, -123, 148, 306, 3183, 3272, 3698, 4561, 8262, 9403, 9910};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 48946816;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> platformMount = {-6419, -8670, 8916, 7343, -5873, 3969, -6485, 1804, 1147, -8901, -2938, 2336, 2428, -1263, 7722, 5156, 3386, 4887, 5988, -9098, 4536, -8656};
    vector<int> platformLength = {1469, 1487, 884, 997, 1284, 1532, 210, 1971, 1116, 993, 408, 835, 196, 442, 1938, 289, 936, 371, 1788, 383, 323, 954};
    vector<int> balls = {-9772, -8065, -7849, -7759, -7416, -7282, -7232, -7202, -4730, -3878, -2019, -707, -527, -503, 346, 417, 640, 770, 3909, 7088, 9180, 9730};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 158857454;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> platformMount = {-628, -637, 5799, 7236, -6416, -6800, -87, -4977, -2982, 5952, -2313, 9804, -8475, -3188, 6778, -4975, -496, 5563, -3029, -8280, 5394, 1663, -6535, 2418, 2586, 8839};
    vector<int> platformLength = {516, 951, 1269, 961, 1492, 1674, 1535, 579, 703, 1307, 1074, 246, 9, 1857, 912, 447, 22, 1268, 1538, 256, 207, 1451, 1683, 221, 397, 754};
    vector<int> balls = {-9964, -9888, -9631, -9483, -8307, -8049, -7720, -7646, -5264, -1594, 307, 541, 730, 1207, 3006, 3473, 4564, 5434, 5514, 7251, 7837, 8075, 9788};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 577680816;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> platformMount = {974, -7378, 7263, -359, 7924, 704, -4034, 9295, 9520, -7473, -1850, -3892, 608, -9537, -6469, -2281, -7575, 6488, 3856, -5775, 865, -4655, 2422, -2554, 2116, -2405, -8691, 6061, -2396, 5761, -9217, 2308};
    vector<int> platformLength = {411, 420, 120, 163, 126, 806, 708, 990, 952, 535, 133, 38, 970, 531, 203, 205, 405, 522, 425, 919, 339, 706, 365, 679, 738, 458, 158, 514, 57, 409, 582, 813};
    vector<int> balls = {-9672, -9059, -8243, -8233, -8157, -6820, -5778, -4258, -4257, -2751, -1244, -1193, -1100, -982, -851, -752, -606, 65, 1043, 1344, 1555, 2541, 2893, 4707, 6067, 6166, 8440, 8574};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 923712556;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> platformMount = {1128, -3299, 6506, 9919, 9126, -1833, 2575, 1787, 25, 5615, 6224, -1100, 2269, 5005, 3526, 4713, -9367, 4318, -6309, -2300, -9435, 162, 1605};
    vector<int> platformLength = {740, 892, 164, 47, 261, 733, 883, 153, 658, 11, 32, 608, 875, 355, 465, 907, 835, 238, 866, 935, 246, 716, 350};
    vector<int> balls = {-7980, -7766, -7317, -5951, -5526, -3259, -1579, -78, 1229, 1599, 2947, 3140, 5206, 6230, 6640, 6908, 7165, 7356, 7893, 8776, 9225};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 866540480;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> platformMount = {-340, 5039, -3775, -3847, -9190, -3681, -7059, 2409, 8444, -3214, -1859, 5115, -9413, -9216, -9744, 9328, -3227, 3377, -4292, -3754, -3106, 643, 2362};
    vector<int> platformLength = {698, 961, 967, 714, 399, 201, 395, 688, 472, 834, 354, 890, 49, 199, 769, 875, 800, 461, 476, 733, 210, 366, 133};
    vector<int> balls = {-9461, -9284, -8618, -7824, -6166, -4554, -3928, -2716, -2089, -1576, -1008, -242, 6, 2490, 2508, 2523, 2724, 3155, 3764, 3971, 5354, 5589, 5976, 6509, 7007, 7350, 7414, 7814, 8192, 9699, 9874, 9994};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 95425293;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> platformMount = {-2655, 8259, 2458, -1893, -7272, 1628, 2984, 9353, 1094, -3411, 1949, -3067, 9332, 5713, 7923, -8621, 9409, -2551, 9072, 2771};
    vector<int> platformLength = {321, 384, 899, 854, 140, 931, 591, 69, 259, 602, 445, 506, 129, 405, 285, 319, 123, 110, 664, 187};
    vector<int> balls = {-9542, -6798, -6342, -6300, -5739, -5224, -4518, -2338, -252, 363, 427, 574, 1013, 1379, 1586, 3051, 4555, 5656, 6070, 7564, 7896, 8354, 9583};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 845751218;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> platformMount = {8876, 3001, -6644, -1719, -2270, -9491, 9380, 4632, 3355, 7352, -9522, 1911, 9130, 9505, 6844, -4213, -2380, -6410, -8551, 6279, -6423};
    vector<int> platformLength = {798, 532, 955, 124, 70, 302, 89, 406, 480, 646, 938, 477, 160, 734, 758, 708, 168, 403, 972, 508, 394};
    vector<int> balls = {-9821, -8785, -5290, -4746, -4556, -3373, -2198, -1011, -179, 584, 2458, 2819, 3915, 4191, 4228, 5138, 5662, 5975, 7462, 8344};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 429251521;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> platformMount = {6655, 2351, 7252, -1295, 144, 5500, -30, -7868, -256, -9925, -1499, -5374, 2340, -7078, 3004, -8324, 3107, -1657, -2221, -4546, -1218, -630, -987, -8025, 2873, -3386, -8927, -1936, 7267, 399, 8274, -3670, 9658, 6887, 4104, 1358};
    vector<int> platformLength = {356, 488, 657, 249, 925, 915, 400, 158, 773, 35, 215, 62, 228, 220, 590, 285, 503, 83, 955, 75, 208, 958, 266, 829, 186, 812, 54, 945, 536, 564, 954, 386, 957, 967, 969, 258};
    vector<int> balls = {-7958, -7920, -7674, -5938, -5569, -5169, -4688, -4458, -3849, -1558, -1229, 487, 3035, 3873, 5984, 6976, 7000, 7212, 9076, 9467, 9594};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 114577700;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> platformMount = {-5058, 1552, -9291, 6468, -5012, -1066, -6392, 2871, 6015, 6114, 5698, 6887, -4289, -64, 7139, 6470, -87, 3968, 2575, -558, -9531};
    vector<int> platformLength = {969, 549, 356, 300, 600, 430, 252, 871, 766, 663, 236, 727, 268, 262, 66, 842, 50, 244, 234, 975, 894};
    vector<int> balls = {-9976, -9763, -8459, -8036, -7414, -7374, -6655, -4997, -4705, -3795, -3719, -3303, -968, 676, 747, 1250, 1382, 2248, 2648, 6498, 8455, 8862, 9524, 9745};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 573357728;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> platformMount = {99, 7777, 7518, -6266, 8688, 1181, -5184, -5101, -4927, 973, -7187, 8933, 2800, -5594, 8997, -138, 3608, 4902, -191, -7870, -7081, 9800, -2167, 8253, -5945, 3558, 3996, -1151, -4997, -8502, -8897, -7393, 6555, 4159};
    vector<int> platformLength = {475, 491, 494, 567, 651, 640, 114, 339, 658, 284, 580, 605, 705, 790, 287, 331, 988, 236, 222, 371, 77, 780, 698, 554, 497, 602, 805, 644, 602, 79, 797, 954, 96, 97};
    vector<int> balls = {-8845, -7189, -6003, -5021, -4338, -4322, -3044, -2724, -1829, -1490, -1194, -73, 3095, 3439, 4958, 5690, 7359, 7862, 8011, 8898};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 936987240;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> platformMount = {4921, -6058, -621, -7427, 9386, -6612, -9548, 5070, 9229, 7776, -8476, -7223, 4638, -6981, -8544, -3196, -2846, -9449, -1513, 6000, 313, -7777, 4361};
    vector<int> platformLength = {413, 578, 802, 416, 912, 634, 445, 884, 525, 889, 72, 718, 468, 915, 410, 168, 486, 56, 220, 168, 997, 801, 574};
    vector<int> balls = {-9819, -9677, -9016, -7794, -5678, -5260, -4817, -4203, -3959, -1806, -230, 1000, 1177, 1180, 1651, 2284, 2407, 2492, 2855, 4736, 4815, 6050, 7822, 8064, 8992};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 414294593;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> platformMount = {7389, 9504, 6558, 5371, 5858, -5365, 3042, 9001, -3658, -3815, -142, -883, 83, -4696, -7755, 5127, -5774, -2755, 561, -5718, 9298, -7341};
    vector<int> platformLength = {933, 486, 358, 602, 227, 555, 186, 425, 188, 435, 15, 408, 512, 501, 587, 477, 717, 111, 917, 683, 863, 878};
    vector<int> balls = {-8884, -8590, -7072, -5163, -4929, -3537, -3364, -3054, -2770, -2334, -1349, -1316, 1166, 1576, 2611, 3012, 4177, 6708, 6801, 8596};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 108067795;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> platformMount = {-5064, -6014, 1930, 9504, 9033, -6532, 4880, -8345, -7800, -5144, -6389, 757, -1354, -93, 9895, 6520, 5155, -7075, -5403, -2343, -2780, 1520, 9256, 3379, 8666, -1997, -5497, 1981, -2295, -9438};
    vector<int> platformLength = {3, 1, 8, 5, 3, 6, 7, 4, 5, 10, 7, 3, 10, 2, 2, 3, 9, 5, 9, 8, 5, 2, 6, 10, 5, 6, 2, 6, 8, 8};
    vector<int> balls = {-9632, -8823, -7548, -6827, -6301, -6051, -5888, -5713, -4354, -3025, -2301, -1848, -1630, -812, 80, 991, 2488, 3370, 3519, 4645, 6738, 6955, 7259, 7505, 8666, 8862, 9742};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> platformMount = {4653, -335, -3325, -5118, -8276, 6774, -9330, -980, 2111, -3714, 2860, -7361, -2639, -876, 2044, -9481, 731, 7987, -4604, -906, -7034, 9583, 3316, 2351, -3829, 8193, -4590, -9801, -1929, 9092, -7658, -9689, -6082, -4670, 3347, 9473, 8293, -3604, -5840, -4553, 4093, -7721, 5113, -4643, -9046};
    vector<int> platformLength = {7, 5, 1, 2, 10, 5, 10, 2, 9, 6, 9, 4, 8, 9, 1, 1, 9, 3, 5, 5, 1, 10, 7, 8, 9, 1, 4, 9, 1, 10, 1, 10, 4, 5, 5, 2, 4, 5, 1, 3, 8, 10, 6, 3, 5};
    vector<int> balls = {-9634, -9623, -9530, -9029, -8375, -6806, -5983, -5840, -5641, -5635, -5182, -4353, -1153, -950, -253, -168, 498, 1468, 3086, 3147, 3487, 4179, 4202, 4594, 4849, 5783, 6216, 6822, 9362};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> platformMount = {-18, 3301, 2158, -4312, -948, -4950, -2272, 4631, -4483, 6470, 8766, -7901, -666, 3502, -7198, -7143, -9032, 9622, -2208, 1843, 2796, -5191, -1194};
    vector<int> platformLength = {1, 8, 9, 1, 8, 1, 10, 1, 5, 1, 4, 5, 8, 5, 3, 8, 6, 2, 6, 7, 9, 5, 9};
    vector<int> balls = {-9842, -9449, -8951, -8844, -8405, -8045, -7509, -7264, -6946, -6661, -5421, -4651, -3687, -2361, -2272, -2059, -1701, -554, -550, -513, -215, 102, 661, 799, 883, 2534, 3046, 3759, 4032, 5016, 5927, 6124, 7121, 7467, 7734, 7814, 9824};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> platformMount = {5082, 8216, 2917, -440, -8068, -2248, -4561, -5242, -3500, -1619, 8233, 2938, -7177, -8791, -9003, -7538, 5605, 7269, -2139, -1200, 2845, 2429, -7876, 740, 5580, 9382, 2053, 749, -1088, -2915, 4403, -7659, -6580, -6956, -2724, 2376, -8860, 8848, 8986, 1170, -4785, -5679, -5452, -1702, 7383, -9303, -3555, 6982, 2436};
    vector<int> platformLength = {10, 8, 4, 10, 10, 5, 5, 3, 8, 4, 4, 2, 8, 9, 5, 8, 4, 7, 3, 8, 6, 7, 10, 6, 2, 7, 2, 5, 2, 6, 5, 1, 3, 9, 4, 1, 7, 7, 5, 6, 2, 3, 1, 6, 4, 8, 2, 3, 4};
    vector<int> balls = {-8699, -8697, -6218, -4118, -3444, -3238, -2915, -2878, -1522, 452, 2106, 2415, 2537, 2899, 4612, 4812, 4977, 8336, 8877, 9135, 9254};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> platformMount = {1553, -5836, 9937, 6394, 7082, 4280, -5223, 1415, -829, 1567, -1496};
    vector<int> platformLength = {2, 8, 2, 8, 9, 10, 8, 2, 1, 10, 4};
    vector<int> balls = {-9671, -9636, -9209, -9127, -8905, -8870, -8840, -8833, -8622, -8297, -7924, -7809, -7619, -7234, -6362, -5612, -5495, -5140, -4613, -4491, -4307, -4045, -3112, -2571, -2527, -2359, -1900, -1519, -215, 1415, 2064, 2484, 2733, 3519, 5054, 5533, 6274, 7593, 7614, 7713, 8113};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {3};
    vector<int> balls = {-2, 2};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> platformMount = {0, 0, 0, 0, 9};
    vector<int> platformLength = {6, 5, 21, 7, 8};
    vector<int> balls = {-6, -4, 18};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> platformMount = {-9046, -2742, -1705, 8924, -2709, -6172, 8421, 486, 5021, 7977, -6472, 6117, 4150, 7593, -3186, 8064, 5988, 4355, 2429, 564, -151, -2769, 201, 9668, -7462, -1829, -2747, -5029, 99, 690, 8474, -3529, 6247, -2953, 2797, -5255, 6962, -5285, 7217, -2349, 5693, 7864, -4465, -8248, 8612, 4542, -6252, 1680};
    vector<int> platformLength = {487, 446, 153, 470, 278, 186, 98, 776, 139, 122, 359, 198, 1037, 391, 179, 144, 557, 148, 155, 385, 662, 450, 366, 212, 447, 178, 24, 71, 150, 177, 314, 301, 815, 213, 58, 591, 298, 163, 186, 297, 71, 516, 78, 30, 390, 106, 871, 479};
    vector<int> balls = {-9937, -9388, -7879, -7380, -7179, -6977, -6928, -5834, -5198, -4579, -4183, -3884, -3492, -3287, -2849, -2307, -2278, -2070, -1811, -1600, -1043, -242, 582, 604, 871, 1304, 1867, 2098, 2377, 2844, 3096, 4227, 4651, 4785, 5064, 5225, 5474, 5507, 5616, 5732, 6945, 7254, 7959, 8564, 8587, 9448, 9591, 9612, 9974};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 785697498;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> platformMount = {8773, 2557, 9410, 1692, -2796, 7335, -6130, 3044, 535, -2697, -251, -2570, -5719, -5460, -303, -2080, -9354, 3029, -5539, 3728, 9865, 6410, 3471, -8632, 2240, -4944, -3829, -4205, -7769, -4943, -2064, -3379, 905, -3313, 9407, 9483, 8098, 4933, 3044, 7629, 590, -333, 5766, 3810, -2352, -1976, 1467, 7556, -9765, -3405};
    vector<int> platformLength = {25, 72, 83, 307, 478, 324, 469, 2, 373, 100, 370, 1333, 554, 771, 226, 452, 76, 331, 175, 203, 3547, 355, 376, 1068, 466, 43, 301, 4, 156, 192, 678, 1209, 27, 1628, 94, 16, 187, 30, 418, 12, 409, 18, 796, 54, 319, 1605, 71, 125, 4401, 554};
    vector<int> balls = {-9573, -9401, -9223, -7891, -7614, -7503, -7425, -7050, -6164, -5137, -4808, -4797, -4214, -4030, -1871, -1645, -746, -547, -123, 133, 387, 1032, 1279, 1841, 1880, 1904, 2203, 3157, 3541, 3691, 3900, 3954, 4303, 4724, 4959, 5491, 5524, 5558, 6796, 7050, 7482, 7493, 7753, 8427, 8766, 8845, 9164, 9190, 9387, 9486};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 302327215;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> platformMount = {-8126, 5263, -536, -6984, 7762, -9784, -5524, -8652, 1635, 4916, -2782, 3155, 9712, 1789, -6074, -9192, -8156, 5512, 8411, -3957, 8906, 3118, 1901, -2081, -202, -5176, 7547, -2836, -597, 8170, 3408, -7993, 3818, 3056, -7237, -4444, -5804, 240, 5554, 9814, -4495, -9116, -187, -3598, -8433, 9723, 6881, 9067, 2676};
    vector<int> platformLength = {538, 203, 197, 120, 68, 17, 332, 354, 2016, 255, 196, 931, 638, 43, 476, 599, 8, 111, 910, 83, 1531, 774, 152, 833, 1208, 178, 384, 44, 41, 588, 1138, 192, 1088, 23, 138, 175, 376, 908, 35, 730, 681, 564, 2041, 222, 311, 486, 651, 84, 364};
    vector<int> balls = {-9832, -9680, -8909, -8478, -7532, -7378, -7077, -6507, -6479, -6440, -5250, -4749, -4705, -4020, -3905, -3287, -2845, -2787, -2493, -2087, -973, -491, 1657, 2013, 2309, 2677, 2790, 2952, 3018, 3080, 4518, 5126, 5127, 5368, 5563, 5745, 5890, 6969, 7293, 8999, 9216, 9953};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 466266719;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> platformMount = {-9507, -386, 5665, 2236, -635, -4264, -7066, 4491, -2352, 3627, -429, 4393, -5774, -1465, -6267, 498, -2160, -9614, 4687, -9694, -2854, 2070, -3792, -4831, 4207, 526, 7510, -2259, -9146, 1356, -6347, -4831, -7641, -7355, 2359, -3765, -2092, 8718, 9238, -4359, -7713, 9517, -1685, 3653, -1731, 6305};
    vector<int> platformLength = {1189, 16, 175, 156, 392, 1222, 501, 146, 38, 53, 8, 447, 259, 297, 19, 131, 42, 8953, 522, 2310, 5, 745, 508, 99, 535, 196, 728, 36, 4373, 462, 404, 114, 85, 350, 177, 415, 121, 77, 30, 195, 632, 1807, 86, 60, 353, 1096};
    vector<int> balls = {-8910, -8393, -8128, -7941, -7731, -6968, -6470, -5755, -5486, -4936, -4761, -3326, -3146, -2865, -2853, -2719, -2389, -2332, -2132, -1932, -1555, -1256, -1175, -794, 349, 623, 685, 749, 897, 1490, 1688, 3234, 3599, 3687, 4291, 4908, 5133, 5282, 7038, 7443, 8300, 8501, 8674, 8862, 9258};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 850018390;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> platformMount = {2555, -9958, -4434, -7751, -7940, -5189, 5979, 3696, -2543, -7510, -2821, -7754, -6662, 9401, -7717, -4828, 3819, 2577, -7397, 495, -1805, 8122, -1929, 7712, -9763, 8700, 5119, -7937, -28, 236, 3311, -5066, 1748, 2904, -2943, 7952, 7447, 6481, 3758, 3369, -1371, 5150, 4690};
    vector<int> platformLength = {25, 6808, 90, 550, 107, 310, 582, 261, 467, 534, 65, 755, 876, 147, 764, 817, 450, 43, 649, 571, 99, 86, 133, 293, 334, 1125, 246, 748, 219, 579, 1340, 230, 555, 180, 103, 42, 684, 77, 433, 946, 120, 209, 673};
    vector<int> balls = {-9862, -9217, -7880, -6944, -6903, -6801, -5880, -5697, -5642, -4475, -4329, -4031, -3629, -3401, -3382, -2303, -2177, -1974, -1727, -1312, -591, -322, 332, 956, 1342, 1383, 1629, 1671, 2388, 2454, 2483, 2582, 2994, 3138, 3285, 4903, 5205, 5718, 6381, 6663, 6759, 7945, 8125, 9329, 9600};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 831225548;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> platformMount = {7589, 9105, -9770, -167, 3951, -450, 9555, -5743, -1269, 4053, 8624, 9774, -7216, 9819, -6449, -4666, -5147, 3681, 8947, -7511, 5792, 9530, 9565, -2652, 3255, 5738, -700, -9929, -8074, 8944, 5157, 748, 9357, -4520, -1252, 5482, 2511, -3188, 2883, -8494, -4930, -9702, 5873, -4835};
    vector<int> platformLength = {243, 1317, 7508, 491, 276, 370, 427, 443, 469, 9, 721, 172, 111, 89, 163, 715, 310, 464, 1016, 103, 85, 820, 1216, 266, 81, 259, 159, 127, 4552, 722, 108, 314, 692, 450, 68, 440, 79, 685, 489, 728, 270, 1946, 36, 149};
    vector<int> balls = {-8072, -7535, -7514, -7174, -6622, -6570, -6475, -6197, -6194, -5137, -4814, -3803, -3766, -3064, -2982, -2510, -1863, -1229, -937, -926, -628, 350, 853, 963, 1407, 1647, 1816, 1944, 2516, 2619, 3377, 3850, 4184, 4754, 4862, 4978, 5042, 5388, 5850, 5924, 6412, 6481, 6575, 7037, 7112, 7138, 7518, 8336, 9671, 9956};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 475108492;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> platformMount = {-2965, 5075, -5324, -15, -1203, 4218, 4863, 7076, 8377, -6935, -3468, -2701, 4124, -463, 8824, -46, 9878, 9514, -6624, -1510, -8458, -8088, -7375, -9275, -5018, 2234, -3373, -1037, 9851, -8867, 9387, -5277, 2201, 4412, 7138, -1269, -6557, -6677, 8637, -2521, 8246, -1029, 2566, 2681, -1035};
    vector<int> platformLength = {2262, 92, 2417, 127, 546, 456, 148, 64, 252, 292, 2682, 110, 348, 253, 1041, 98, 6671, 729, 197, 272, 390, 60, 14, 296, 1097, 820, 1694, 413, 2813, 76, 1454, 2808, 215, 1259, 252, 282, 16, 206, 1643, 226, 150, 311, 1481, 1334, 396};
    vector<int> balls = {-9961, -9411, -8931, -8845, -8402, -7703, -7380, -7223, -6868, -6582, -6485, -5730, -2899, -2725, -2533, -2232, -2066, -1849, -1393, -1303, -731, -729, -630, -256, -131, 58, 925, 980, 1586, 1618, 3196, 3667, 4996, 6533, 6675, 6807, 6817, 6820, 7755, 9569, 9602};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 778306748;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> platformMount = {3603, 1924, 9170, -6301, 2484, -8187, 3731, 7965, -3014, -2693, 9995, -4639, 3699, -1130, 2981, -2869, 9237, 9843, -9958, -7575, 1557, -9517, 5222, 1321, -8078, -7673, 3979, -6469, 8178, 4852, 1465, -2757, 5080, 1376, 2553, 7561, 2338, 6139, -3161, -1014, 6111, 9540, -3198, -8615};
    vector<int> platformLength = {204, 8, 364, 2407, 31, 638, 13, 162, 267, 262, 33, 967, 86, 398, 591, 87, 421, 9370, 6535, 6, 196, 7620, 167, 885, 530, 505, 158, 318, 555, 26, 604, 508, 249, 784, 537, 230, 6, 91, 263, 160, 28, 993, 495, 184};
    vector<int> balls = {-9117, -9037, -8601, -8570, -8405, -7664, -7654, -7504, -4982, -4721, -4667, -3339, -2640, -1861, -1716, -863, 130, 249, 1522, 1799, 1820, 2112, 2198, 2429, 3045, 3126, 3409, 3624, 3673, 3808, 4318, 4684, 4969, 5031, 5690, 5737, 5954, 6079, 6191, 7560, 8252, 8601, 8827, 8969, 9395};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 707236936;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> platformMount = {4653, -7071, -1114, 7657, 7186, -3767, -559, 2193, -5948, 9026, 4171, -1646, 1671, -3267, -2312, 6009, 5923, -7670, -7099, 9731, 7954, -4385, 4980, -2464, -2131, -6684, -8032, 9889, 5102, -9863, -6631, 1559, 9312, 5809, 3057, -6117, -9381, -1773, -2195, 39, 3023, -2256, 7788, -9105, -180};
    vector<int> platformLength = {135, 743, 83, 379, 805, 252, 484, 5, 695, 9761, 231, 549, 529, 887, 821, 24, 218, 118, 1494, 8686, 373, 56, 644, 985, 597, 74, 161, 7051, 344, 7732, 1798, 273, 919, 357, 371, 1110, 261, 210, 549, 1024, 588, 43, 94, 46, 654};
    vector<int> balls = {-9726, -9487, -9127, -9062, -8747, -8736, -8353, -8095, -7698, -7446, -7352, -7241, -4887, -4849, -4801, -4321, -4036, -3725, -3618, -2307, -2245, -1584, -1125, -848, -833, 263, 509, 1273, 1398, 1497, 2186, 3159, 3243, 3521, 4491, 4718, 5616, 5979, 6309, 6612, 6838, 7731, 7839, 8214, 8502, 8632};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 771866171;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> platformMount = {-691, 9484, 3284, 7761, 9111, -5879, -3850, 8113, 8699, 456, -2767, 1952, 7221, 4659, -6846, 816, -4915, -4923, 339, -8793, 4015, -4292, -1555, -2300, 4027, -3073, 1671, -104, 509, 7910, -6320, 182, -362, -9790, -3199, 4239, -4688, -3060, -8756, 1262, -4182, 7021, 5013, -4156, -6582, 8934, 233, 8466, 5085, -6551};
    vector<int> platformLength = {208, 202, 220, 404, 217, 59, 273, 112, 201, 264, 42, 222, 662, 191, 354, 322, 1, 968, 81, 393, 253, 84, 379, 104, 114, 182, 673, 290, 337, 92, 330, 857, 873, 857, 108, 129, 755, 187, 867, 203, 553, 663, 669, 269, 159, 65, 770, 195, 393, 30};
    vector<int> balls = {-9982, -9940, -9937, -8638, -8419, -8360, -8306, -7638, -6733, -6446, -6424, -5991, -5990, -5641, -4562, -4527, -3772, -3542, -3130, -2613, -2438, -1786, -645, 262, 378, 757, 1325, 2437, 2876, 3118, 3368, 3893, 4248, 4849, 5582, 6401, 6464, 6579, 7601, 8039, 8095, 8257, 8407, 8415, 8808, 9246, 9647};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 338430640;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> platformMount = {-4137, -5458, 7711, -6706, 6572, 8207, 1531, 1394, 2527, 9089, 8188, 6269, -1680, 3994, 2755, 524, 4665, -8453, 3503, -334, -9575, 8843, -2667, 5548, 9602, -4853, 2119, -599, 8423, 8952, 3541, 3263, -7443, -250, 8964, -6339, -433, 815, 5972, -3658, 6656, -5638, -1886, -4089, 8812, 5354, -4557, -812, 7393, 5362};
    vector<int> platformLength = {4, 94, 1624, 178, 68, 1718, 1274, 1446, 597, 268, 365, 29, 296, 1272, 1087, 244, 104, 271, 1412, 385, 392, 311, 1275, 985, 7231, 191, 822, 308, 573, 845, 1726, 713, 130, 105, 157, 346, 436, 1, 28, 1640, 300, 28, 288, 1773, 218, 179, 319, 202, 1246, 406};
    vector<int> balls = {-9749, -9138, -9125, -8674, -8353, -8204, -8137, -7834, -7790, -7712, -7447, -7308, -7115, -6832, -6751, -6263, -6243, -5815, -5518, -5094, -4709, -4675, -4341, -4143, -4128, -2141, -2018, -1718, -1710, -790, -315, -45, 239, 721, 2303, 2340, 4342, 4576, 4835, 5939, 5976, 6114, 6405, 6426, 6624, 8356, 9349, 9403};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 282936152;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> platformMount = {-4597, 6008, -1550, 4048, 9977, 8236, 4585, -7438, 7192, -9862, -6392, 5850, -7158, -4097, 5572, 681, 6027, -9553, -6979, -7818, -87, -9719, 3025, -6192, 3344, -1308, -2697, 4480, -971, -7799, 8635, -7648, -1017, -9757, -3225, 9634, 2951, 5021, -7952, -2030, -9501, -6508, -139};
    vector<int> platformLength = {461, 234, 23, 269, 7703, 192, 688, 10, 724, 35, 274, 560, 91, 127, 529, 14, 665, 287, 2, 22, 433, 144, 1909, 56, 1485, 298, 16, 352, 191, 126, 203, 363, 436, 84, 296, 5140, 200, 2, 307, 129, 23, 195, 89};
    vector<int> balls = {-9895, -9819, -9518, -9441, -9174, -9138, -8513, -7932, -7858, -7270, -6991, -6949, -6583, -6257, -6089, -5735, -4292, -3894, -3658, -2926, -2711, -2500, -1842, -1663, -1610, -1473, -433, 229, 381, 426, 513, 615, 747, 959, 1549, 1842, 3900, 4649, 4670, 5822, 6755, 7003, 7140, 7883, 8053, 9133, 9163};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 369278095;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> platformMount = {-7230, 7894, 9430, 1070, 853, 7640, -1982, -1499, 4404, 1284, -158, 8556, 8149, -8248, -1831, -8094, -7893, 7933, -4815, -1456, -3815, -5153, -201, 7264, -1453, 2595, -5434, 4898, -288, -2689, -3810, -8980, 9317, 2294, 9048, -1176, -2476, 2564, -3794, 7886, -2000, -9001, -2641, 9496};
    vector<int> platformLength = {400, 206, 619, 1531, 1571, 621, 1029, 378, 91, 427, 1369, 833, 576, 148, 404, 288, 1, 189, 381, 440, 156, 324, 301, 10, 245, 1304, 388, 451, 1716, 409, 424, 80, 188, 1592, 491, 130, 320, 903, 45, 595, 910, 128, 1067, 676};
    vector<int> balls = {-9992, -9719, -9501, -9071, -8939, -8399, -8009, -7860, -7064, -7032, -6777, -5296, -5216, -4485, -4334, -3802, -3629, -2921, -1833, -1274, -1002, -749, -714, 1511, 1788, 1907, 1936, 2095, 3707, 3787, 4015, 4311, 4523, 4548, 5224, 5573, 6742, 6907, 7103, 8136, 8991, 9922};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 325158323;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> platformMount = {-7367, 6232, -7180, -7231, 3033, -219, 7479, -6113, -9051, 2349, 4629, 3189, -6822, -8398, -2392, 6875, 537, 3905, -6929, 3875, -4160, -223, 699, 4204, -5908, 9212, -1713, 988, 2493, -4245, -7715, -2492, 2801, 3092, -1106, -4420, 3659, -6948, -4239, -3393, -4556, 8790, -619, -8379, 5229, 2017, 8262, 1647};
    vector<int> platformLength = {710, 338, 476, 731, 13, 472, 134, 71, 122, 210, 84, 352, 651, 136, 665, 82, 40, 819, 672, 132, 45, 187, 96, 1190, 864, 309, 227, 197, 111, 237, 976, 1085, 519, 219, 214, 42, 1200, 691, 257, 2005, 134, 746, 902, 1498, 314, 144, 297, 525};
    vector<int> balls = {-9962, -9724, -9296, -9280, -8766, -7192, -6444, -5980, -4458, -4345, -4046, -1958, -1939, -1474, -1469, -993, -744, -718, -714, -710, 430, 1886, 1895, 2048, 2387, 2509, 2517, 2742, 3366, 4584, 4763, 4784, 5376, 5410, 5587, 6068, 6206, 7184, 7553, 7559, 8168, 8618, 9497};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 780865885;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> platformMount = {9860, 9131, 3157, -7211, 1586, 2060, -8387, -6799, -4920, 7644, -6165, -6581, 6651, -4422, 3315, 4679, -7040, -5128, 1564, 1257, -2995, 20, 9095, 4154, 6801, -7311, -4898, -8090, -31, 3391, 1496, 5501, -7589, 2599, 2043, -724, -5694, -4261, 2257, -5123, 1609, 1525, -9198, 106, -3735, -1898, -1933, -309};
    vector<int> platformLength = {6838, 305, 515, 943, 296, 828, 40, 227, 840, 677, 555, 699, 370, 1069, 492, 293, 1365, 946, 470, 319, 88, 117, 435, 871, 78, 46, 952, 680, 163, 324, 205, 10, 449, 1678, 526, 48, 87, 1032, 506, 194, 102, 385, 2733, 66, 215, 618, 449, 173};
    vector<int> balls = {-9100, -9073, -9015, -8472, -8434, -8386, -6985, -6040, -5979, -5835, -5566, -5328, -5269, -4041, -3094, -3047, -2769, -2268, -2198, -2166, -1306, -1183, -1171, -831, -347, -42, 124, 196, 568, 613, 1023, 1587, 2451, 4227, 4705, 5482, 5503, 6732, 6962, 8093, 8387, 9101, 9409};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 234134260;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> platformMount = {-9976, 5206, 4515, -9058, -2574, -406, -7201, -3836, 7814, -751, -9800, 5703, -2517, 5080, -2916, -2063, -4664, 1490, -1775, -8872, 6950, 6902, -2586, -9556, 4265, 9605, 7405, -4363, 1602, 905, -1568, 3876, 3717, 2499, -6526, 7171, -3414, -9949, 3486, 8832, -3369};
    vector<int> platformLength = {7273, 877, 20, 523, 295, 117, 369, 64, 511, 288, 9792, 579, 720, 1246, 358, 175, 102, 451, 477, 316, 79, 237, 374, 9818, 414, 201, 673, 508, 1253, 580, 257, 152, 131, 59, 467, 183, 91, 7055, 440, 366, 296};
    vector<int> balls = {-9236, -8601, -8466, -8055, -7581, -7481, -6768, -6096, -5833, -5648, -5605, -4861, -4221, -3571, -3120, -2320, -2304, -2265, -1787, -1128, -577, -317, 55, 708, 2263, 2644, 2705, 3127, 3185, 3689, 3826, 5297, 6416, 6507, 6530, 6979, 7784, 8793, 9359, 9652, 9840, 9888};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 921446951;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> platformMount = {-3471, 2499, 4041, -289, -9287, 8206, -5649, -816, -774, -1859, 1516, -3530, 9675, -5286, -635, -3596, 6242, 7742, -5925, -4483, 562, -6749, -1286, 3945, -2258, 6638, 4185, -6374, -8677, 5290, 2928, -9653, 6045, 711, 6684, -7765, -7793, 5266, 4670, 2258, 477, 3589, -6519, 7321, -9030};
    vector<int> platformLength = {818, 28, 2929, 123, 450, 201, 621, 565, 500, 224, 151, 1687, 140, 885, 201, 1512, 2006, 229, 437, 222, 682, 207, 374, 1342, 2, 1217, 141, 388, 149, 3093, 448, 111, 1752, 99, 867, 898, 194, 779, 2684, 257, 542, 214, 467, 1213, 69};
    vector<int> balls = {-9787, -9285, -9080, -9039, -8902, -8774, -8756, -8497, -8322, -7240, -7058, -6797, -6117, -5435, -3296, -2453, -2396, -2023, -1989, -1687, -1490, -1326, -911, -330, 629, 800, 1046, 1093, 1556, 2036, 2203, 2495, 2542, 3152, 3198, 3290, 3329, 3760, 7355, 7772, 8434, 8725, 9214, 9278, 9730};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 557607027;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> platformMount = {-8969, -7625, 9248, -651, 9191, 7638, -139, -8699, -8228, 470, 8079, -5449, 5867, -7081, 6644, 9056, -3511, -6732, -1638, -992, 1782, 8314, -1669, 2989, -4581, 9866, 5265, 904, -8761, -8192, -511, -3494, -9760, -954, -9825, -661, -5027, -5337, -576, -5050, 1424, -3367};
    vector<int> platformLength = {375, 312, 255, 1635, 333, 381, 2022, 272, 131, 1227, 81, 521, 34, 184, 258, 54, 26, 21, 166, 390, 148, 194, 48, 38, 162, 128, 240, 1058, 212, 314, 1626, 381, 1, 1278, 100, 22, 225, 247, 385, 701, 848, 280};
    vector<int> balls = {-9991, -9662, -9134, -8650, -8301, -8240, -7896, -7436, -7137, -6925, -6796, -6670, -6617, -5239, -5154, -5134, -4248, -3450, -2442, -2093, -1945, -1601, -1485, -1423, -1172, 1476, 1662, 1945, 2150, 2840, 2995, 3038, 3167, 4295, 4709, 5616, 6107, 6256, 6569, 6894, 7850, 8247, 8471, 8849, 9502, 9611, 9647, 9845, 9988};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 723368033;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> platformMount = {3788, -3710, -5746, -4805, -696, -5036, -8936, -5702, -1200, -489, -2586, -7601, 1444, 9835, -9702, -1272, -9841, -12, 3355, 828, 6923, -4045, -1331, -4894, -8740, 6953, 2712, -2532, 5065, 4667, -7853, -8970, -7964, 9895, 150, -7189, 4849, -8954, -982, 6401, -1667, 3953, -305, -7471, -8186};
    vector<int> platformLength = {455, 342, 82, 599, 68, 435, 764, 619, 61, 818, 237, 166, 37, 8472, 93, 161, 124, 468, 527, 167, 590, 18, 305, 303, 877, 545, 182, 232, 127, 323, 57, 401, 71, 7546, 86, 595, 124, 1153, 364, 358, 333, 426, 431, 711, 104};
    vector<int> balls = {-9959, -9775, -8477, -8178, -7954, -7523, -6608, -5645, -5620, -5561, -5459, -4592, -4221, -4107, -3521, -2830, -2365, -1736, -1244, -1167, -178, 381, 1306, 1769, 2022, 2077, 2582, 2663, 3483, 3984, 4021, 4396, 4781, 5107, 5387, 5817, 5987, 6495, 7121, 7789, 8507, 8569, 9681};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 735979614;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> platformMount = {-2588, -9611, -8165, -1656, 7535, -3057, -9671, 6115, -9460, -6304, 6226, -2065, -5899, -8818, 8723, -462, 4172, -260, -3361, 1551, 1219, -8369, 1735, 3156, 8444, 4385, 5314, 8903, 5848, 479, 4449, -3743, 8956, 3406, 9156, -3535, -3977, -4783, -3156, -3700, -7440, 5625, -4629, -6716, 6999, 7739, -8966};
    vector<int> platformLength = {79, 7498, 1026, 950, 61, 396, 147, 219, 73, 1674, 106, 33, 156, 426, 397, 428, 212, 576, 534, 437, 319, 666, 773, 449, 665, 9, 24, 543, 13, 571, 196, 360, 382, 19, 103, 98, 228, 1581, 671, 459, 355, 175, 824, 1371, 332, 93, 422};
    vector<int> balls = {-9547, -9307, -9150, -9032, -7978, -7723, -7638, -7127, -7040, -7017, -4565, -3676, -2800, -2601, -2457, -2429, -2324, -2278, -1252, -966, -246, 1, 683, 1491, 1535, 2388, 3003, 3888, 4284, 4646, 5186, 5259, 5568, 5938, 6296, 7035, 7629, 7971, 9120, 9256, 9823, 9999};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 14591226;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> platformMount = {-4043, -8500, 9217, 3959, 3659, 9131, 2297, -2053, -9301, 5390, -3024, 4569, 5435, 8451, -4525, 3696, 5620, -2901, -8471, 1917, -3680, 8715, 1787, -6677, -169, -6823, -5119, -7527, 150, -3508, 3197, 5904, 9599, 2995, 7478, -6518, -9859, 9948, 9284, -4058, 7022, -6650, -8575, 9941, -2731, 8808, -8566, -3057, 640};
    vector<int> platformLength = {36, 1618, 34, 53, 605, 92, 7, 490, 82, 306, 25, 618, 339, 1250, 400, 735, 276, 715, 1302, 253, 29, 2082, 1394, 356, 212, 157, 22, 598, 132, 353, 168, 284, 88, 177, 2194, 307, 3950, 4089, 162, 1, 1482, 312, 22, 8624, 720, 836, 398, 308, 167};
    vector<int> balls = {-9834, -9751, -9177, -7318, -7258, -6826, -6337, -6252, -5975, -5232, -4949, -4070, -4045, -3724, -3659, -2705, -2521, -1922, -1905, -1838, -937, -445, -103, 136, 284, 500, 2018, 2386, 2471, 2561, 2817, 2918, 2940, 3130, 3890, 4327, 5093, 5479, 5585, 6108, 6620, 9118, 9231, 9451, 9472, 9808};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 370753201;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> platformMount = {-1716, -6782, -5247, -8887, -7667, -5808, 402, 4991, 1822, 4431, -9003, -2175, -5081, 1357, 1353, 7283, 9145, 4675, 7038, 1855, -539, -3571, -9607, 9395, 9748, 877, 611, -3219, 250, -1979, 2947, -2996, 8567, 9584, -2868, 5023, 6771, 1313, -9918, 8701, 2220, -9603, -7022, 6160, -5334, -8162, -2225, 5892, 7200, 2618};
    vector<int> platformLength = {569, 905, 462, 759, 240, 571, 188, 63, 50, 177, 1057, 312, 424, 642, 606, 92, 405, 161, 126, 427, 945, 1052, 202, 44, 20, 896, 254, 1275, 480, 174, 213, 89, 157, 68, 111, 540, 281, 321, 1735, 139, 380, 51, 192, 136, 439, 451, 490, 170, 282, 258};
    vector<int> balls = {-9815, -9487, -8322, -7502, -7460, -7432, -6506, -5451, -4931, -2891, -2769, -2723, -2707, -2060, -1852, -522, -172, 68, 556, 1812, 2351, 2516, 2788, 4035, 4096, 4400, 4677, 5326, 5618, 5688, 5689, 5759, 6336, 6487, 6612, 7331, 8000, 8420, 8585, 8625, 9237, 9407, 9722, 9795};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 14419400;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> platformMount = {-4254, 3345, 6779, 7849, -659, 5178, -5660, 5863, 5510, -6173, 1917, 1661, -1730, 7337, -1817, -1646, 8690, 7804, -6962, -9095, -6767, 241, -6197, -6669, -6110, 7038, 6060, -28, 7102, -3787, 8629, 1519, -6599, 6655, -2889, 1527, 4719, -1433, -4534, 4082, -8654, 2299, 69, 8362, -4546, 3798};
    vector<int> platformLength = {1323, 48, 49, 520, 849, 162, 1012, 387, 141, 1940, 1824, 700, 577, 77, 892, 522, 435, 467, 1331, 4112, 1328, 684, 2420, 1880, 997, 469, 20, 1531, 360, 605, 368, 2586, 106, 65, 1945, 2384, 94, 65, 1317, 336, 3131, 41, 2657, 336, 1009, 786};
    vector<int> balls = {-8313, -5599, -4161, -2164, -1055, -693, 2255, 2333, 3283, 3407, 4437, 4645, 4765, 4988, 5179, 5857, 6578, 6852, 7514, 7650, 8190, 8740, 8954, 9354, 9655};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 146558041;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> platformMount = {6148, 6553, -3107, 9167, 9254, 7106, -1641, 7490, -6159, 2467, 6351, 9026, -2837, 899, 1211, 3891, 9804, -7771, 869, 5443, -8208, 2789, 2711, 5369, -3352, 4888, 6857, 2379, -8432, 225, -8453, 6480, 6937, 1744, -3658, 5754, -6606, 3346, -6161, 7627, 9627, -8066, -4387, -8445, 9128, 1234};
    vector<int> platformLength = {4455, 5526, 68, 314, 3494, 7806, 2780, 4971, 2781, 5012, 1057, 83, 2883, 6462, 2590, 7050, 5940, 828, 1261, 283, 501, 3196, 5460, 4236, 1566, 2941, 4908, 2041, 356, 7954, 979, 874, 3266, 2503, 2894, 1405, 561, 3630, 384, 6713, 8064, 1075, 2892, 371, 12, 5944};
    vector<int> balls = {-9080, -7920, -6964, -3987, -777, 7723, 8104, 8761, 9209};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 148125287;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> platformMount = {-4743, -4745, -3957, -3153, -6947, 482, 7140, 7571, 6068, 3987, -9787, -2622, 7371, 3465, -8573, -5775, 3519, 2532, -1056, -9727, 8158, 9856, 6105, 2725, -9557, 2669, -3627, 6604, 3385, 1006, -2407, 8268, 2186, 3974, -1831, -6479, 7636, 4393, 2714, 9127, -5331, 3143, 9768, 1558};
    vector<int> platformLength = {843, 303, 3555, 2063, 235, 448, 1, 431, 934, 917, 670, 783, 289, 2146, 1426, 547, 1556, 3223, 3128, 569, 519, 4882, 273, 1995, 1161, 905, 1371, 811, 2343, 454, 3909, 92, 537, 3007, 3378, 537, 288, 1775, 3142, 111, 321, 1859, 1941, 2497};
    vector<int> balls = {-9799, -8250, -7450, -6888, -5736, -5418, -4125, 455, 1039, 1535, 5903, 7158, 8041, 8654, 8695, 8727, 8740, 9399};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 185518907;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> platformMount = {9351, 631, -349, -1805, 2398, 2261, -6380, -3704, -5784, 3900, -6727, -1165, 5541, 8819, -5041, -3725, 6929, -909, 6087, 7560, -6577, -149, -3131, -2339, -7154, -3829, 2766, 7954, -1877, -779, 529, 8566, -997, 3337, 5708, 6829, -6407, 648, 4541, -9013, 5071, 4894, -1891, -6709, -6006, 1085};
    vector<int> platformLength = {8271, 1003, 3455, 1896, 937, 544, 386, 3672, 1821, 448, 84, 1731, 444, 2948, 2839, 176, 1482, 911, 1561, 36, 147, 224, 1963, 3342, 940, 1210, 93, 690, 1425, 2087, 574, 8137, 1957, 81, 1925, 1970, 452, 3149, 101, 771, 742, 57, 180, 180, 1344, 1672};
    vector<int> balls = {-8702, -7768, -6812, -6314, -2276, 1301, 1706, 2041, 3012, 3436, 4957, 7138, 8515};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 223008868;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> platformMount = {229, 9976, 2321, -5723, -5816, -7518, -2076, -6049, -5033, -3743, 7520, 961, 7097, -9604, -7671, 9880, 6020, 6662, -7679, -3206, 8861, 4222, 5826, 2558, 4238, 9330, 9023, -5068, -975, -5921, 5692, 6240, 4951, 3375, 2643, 8194, -7065, 4275, -8822, -9474, 8038, -3181, 0, -4941};
    vector<int> platformLength = {277, 3095, 120, 894, 481, 464, 1598, 221, 374, 2021, 1054, 1241, 684, 336, 309, 4895, 706, 25, 21, 584, 618, 139, 578, 178, 5, 5851, 98, 147, 92, 381, 367, 166, 622, 838, 275, 988, 47, 161, 556, 9820, 245, 1921, 203, 1425};
    vector<int> balls = {-9241, -9172, -8106, -7684, -7129, -6877, -6627, -6552, -6259, -6178, -6104, -5073, -2280, -111, 131, 1568, 1628, 1773, 2173, 2616, 2636, 3663, 4075, 4291, 4469, 4665, 5343, 6814, 7951, 9183};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 915585788;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> platformMount = {-1730, 8444, 6214, -4392, -3475, 2710, -73, 2148, -4118, -8452, -3441, -6248, -392, 3785, 1492, 5772, -7371, -1154, 3164, -4789, -6052, 5847, -8890, 9713, 4625, -9124, -8669, 4625, 1108, -1553, 1267, 6607, 8658, -1839, -8373, 7342, -5350, -7416, 7343, -4164, 6501, 7356, 4922};
    vector<int> platformLength = {97, 505, 50, 225, 1264, 43, 836, 66, 798, 1079, 1420, 1186, 278, 281, 81, 466, 125, 129, 498, 47, 471, 39, 89, 286, 195, 369, 882, 1183, 96, 216, 454, 534, 2210, 134, 559, 1371, 900, 201, 2232, 126, 525, 1657, 788};
    vector<int> balls = {-9497, -9090, -8886, -7507, -7233, -6759, -6403, -4954, -4887, -4459, -2605, -2513, -2097, -1710, -1436, -1036, -670, -289, 718, 1141, 1216, 1694, 1868, 2406, 3039, 3793, 4368, 5963, 6048, 6326, 6907, 9176, 9968};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 504292696;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> platformMount = {9086, -2455, -5972, -7590, -3558, 6371, 9880, -9768, 9383, 5841, -7604, 3619, -1093, 5674, 6345, -529, 2571, -4798, -6210, 3747, 3266, -8468, 1462, 3577, -1487, -3277, 5929};
    vector<int> platformLength = {330, 527, 9265, 3545, 174, 143, 3158, 1963, 4603, 80, 4710, 1026, 336, 1016, 2497, 1925, 1316, 352, 7520, 3038, 238, 8294, 483, 1990, 1304, 1157, 2613};
    vector<int> balls = {-5455, -3179, -2401, -2096, 523, 837, 838, 3978, 6610, 6734, 8139, 9174};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 298870733;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> platformMount = {-5279, -603, -3768, -6642, 6652, 2223, 7428, 8345, -479, 1579, 4324, -2091, -1601, 2978, 5635};
    vector<int> platformLength = {51, 4907, 122, 4886, 417, 4200, 6485, 1126, 1323, 47, 1603, 4333, 8891, 1164, 1920};
    vector<int> balls = {-9088, -3973, -3760, 9439};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 371735334;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> platformMount = {-4081, -5142, 8263, -3439, -4676, -6466, -2333};
    vector<int> platformLength = {58, 586, 625, 146, 235, 1018, 887};
    vector<int> balls = {-9570, -9555, -9552, -9367, -9211, -8950, -8561, -8062, -8019, -7859, -7441, -7388, -7267, -5924, -5697, -4717, -3927, -3376, -3159, -2815, -1737, -1143, -1115, -485, -195, 728, 1626, 1662, 2352, 2705, 2803, 2933, 5271, 5483, 5619, 6014, 7537, 8486, 8672, 9010, 9077, 9385, 9672, 9688, 9715, 9908};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 469845770;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> platformMount = {-3802, -2373, -561, 6310, -2894, 523, 6513, 3621};
    vector<int> platformLength = {77, 311, 1290, 384, 448, 127, 10, 435};
    vector<int> balls = {-7687, -6445, -5707, -5578, -4670, -3358, -2789, -1634, -1360, 181, 1404, 3179, 3254, 4211, 5425, 6511, 6551, 7014, 7067, 7177, 7821, 9178};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 636066691;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> platformMount = {-3662, -2541, -3192, -7264, 2559, 3295, -9214, 591, -3421, -467, -8430, -6080, 9463, -755, -1591};
    vector<int> platformLength = {230, 43, 319, 2111, 792, 1638, 68, 289, 100, 1170, 42, 48, 237, 938, 538};
    vector<int> balls = {-9407, -8885, -8853, -7375, -4192, -3944, -3517, -3327, -2915, -2879, -2456, -1859, -770, 479, 776, 1099, 1413, 1931, 3639, 3913, 4360, 4372, 4491, 5759, 5847, 6102, 7421, 8301, 8553, 9127, 9377, 9746};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 760100850;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> platformMount = {9873, 1498, 9940};
    vector<int> platformLength = {2634, 257, 5560};
    vector<int> balls = {-7437, -4161, -3772, -1998, 313, 538, 1033, 3420, 7576, 8419, 8857};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 283884624;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> platformMount = {-8948, -4287, 2986, 5999, -5515, 3482, 5060, -8515, 681, 6590, -6760, 2273, 32, 7957, 5387, 8342, -6547, 125, 3731, 1008, -994, 9367, 9158, 2054, 3717, -7511, -8978, -8480, 2513};
    vector<int> platformLength = {670, 594, 68, 1468, 434, 353, 1791, 232, 376, 141, 557, 46, 154, 53, 94, 98, 723, 553, 918, 976, 847, 6070, 179, 213, 669, 478, 937, 885, 668};
    vector<int> balls = {-9641, -9432, -8436, -7900, -7276, -6896, -6836, -5611, -5084, -4696, -3968, -3635, -3483, -2407, -1644, -629, -507, -351, -137, 442, 590, 676, 1839, 2683, 2821, 2927, 3232, 3317, 4256, 6081, 6177, 7556, 7838, 7973, 8625, 9322};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 339210600;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> platformMount = {-5914, 7444, 1151, -9197, -2248, -561, -9630, 7840, 3187};
    vector<int> platformLength = {1268, 3164, 5073, 1772, 7899, 3304, 8887, 3274, 6829};
    vector<int> balls = {-8914, -7872, -5201, -3747, -3656, 4527, 4590, 8240, 8426, 9734};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 864705439;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> platformMount = {4290, -3622, 5488, -9066, -5927, 4308, 4564};
    vector<int> platformLength = {4901, 822, 8670, 5791, 403, 8339, 8807};
    vector<int> balls = {-8836, -5818, -4952, -4670, -3355, -3353, -3266, -786, -491, 9353};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 305781880;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> platformMount = {6911, -1045, -1367, -5624, -6213, 6233, -1307};
    vector<int> platformLength = {6139, 2524, 7237, 5441, 7078, 7877, 8850};
    vector<int> balls = {3066};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 988144244;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> platformMount = {8147, -7666, 3764, 2528, -5931, -3265};
    vector<int> platformLength = {5220, 505, 4178, 142, 1285, 280};
    vector<int> balls = {-7726, -6820, -4287, -3068, 1396, 2412, 2797};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 557709778;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> platformMount = {3258, -6822, 1767, -8539, -4208};
    vector<int> platformLength = {4685, 5182, 2022, 2573, 97};
    vector<int> balls = {-9740, -401, 5302, 6234, 6957, 7486};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 45309360;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> platformMount = {-454, 7853, -1594, 3901};
    vector<int> platformLength = {248, 2182, 458, 6252};
    vector<int> balls = {-7710, -7222, -4999, -3650, -3561, 1940, 9107};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 995314226;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> platformMount = {-435, -8122, 6601, -8852, 3107, 8352, -9039, -8254, 9299};
    vector<int> platformLength = {3205, 1193, 3432, 690, 1452, 1427, 974, 384, 3639};
    vector<int> balls = {-9628, -7754, 2198, 4212, 5439, 6003};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 117664268;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> platformMount = {-7388};
    vector<int> platformLength = {2610};
    vector<int> balls = {3247, 3340, 3638, 4261, 5022, 6385};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 2611;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> platformMount = {-2255, -9081};
    vector<int> platformLength = {3702, 9528};
    vector<int> balls = {5550};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 35285887;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> platformMount = {4098, -6460, -2120, -8246};
    vector<int> platformLength = {30, 140, 655, 1034};
    vector<int> balls = {-5291, -3874, -981, 2157, 2826, 3715, 6163, 8004};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 967734142;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> platformMount = {-3017, 1947};
    vector<int> platformLength = {2439, 1983};
    vector<int> balls = {-7445, 7813};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 4840960;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> platformMount = {4383, -4472, 4395, 3467, -4175, -2793, -793, 2784, -9224, 7314, -615};
    vector<int> platformLength = {128, 19, 40, 510, 28, 168, 217, 106, 554, 1271, 196};
    vector<int> balls = {-9794, -7938, -6931, -6439, -6233, -6052, -4978, -4449, -3887, -3816, -3068, -3009, -2406, 662, 811, 1206, 4190, 4555, 5237, 5266, 5632, 8610, 8646};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 877445994;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> platformMount = {1718, -7501, 8357, -3396, 6846, -2333, -5480, -6411, -6903, -2400};
    vector<int> platformLength = {561, 196, 360, 403, 327, 467, 330, 856, 909, 177};
    vector<int> balls = {-8537, -4083, -1580, -1063, -631, 232, 2574, 6338, 8967, 9079};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 152927163;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> platformMount = {10000, 10000, 10000, 100, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 3240, 10000, 7000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 3253741;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> platformMount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-9999};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 663160665;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> platformMount = {10, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-6663};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 49422166;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, -10000, -9999, -9998, -9997, -9996, -9995, -9994, -9993, -9992, -9991, -9990, -9989, -9988, -9987, -9986, -9985, -9984, -9983, -9982, -9981, -9980, -9979, -9978, -9977, -9976, -9975, -9974, -9973, -9972, -9971};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 890281083;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> platformMount = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> platformLength = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 82750627;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> platformMount = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> platformLength = {999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995, 999, 998, 997, 996, 995};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 641585835;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> platformMount = {100, -4215, 251};
    vector<int> platformLength = {400, 10000, 2121};
    vector<int> balls = {5000, 2270, 8512, 6122};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 250379170;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> platformMount = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {9000, 9001, 9002, 9003, 9004, 9005, 9006, 9007, 9008, 9009, 9010};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 395362020;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> platformMount = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, 10000, -10000, -10000, -10000, 10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000};
    vector<int> platformLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> balls = {0};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 896709533;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> platformMount = {0, 0, 0, 0, 0};
    vector<int> platformLength = {1000, 1000, 1000, 1000, 1000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 959911;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> platformMount = {322, 0, 1234, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 123, 12, 12, 21, 56, 789, 654, 3214, 1111};
    vector<int> platformLength = {322, 1, 1234, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 123, 12, 12, 21, 56, 789, 654, 3214, 1111};
    vector<int> balls = {-10000, 10000, 1, 2, 3, 4, 5, 12, 21, 1112, 1111, 45, 46, 56, 5674, 4554, 1234};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 319299497;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> platformMount = {0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 910000009;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> platformMount = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 663160665;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> platformMount = {7};
    vector<int> platformLength = {10};
    vector<int> balls = {5, 15};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> platformMount = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 861972325;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> platformMount = {1, 4};
    vector<int> platformLength = {2, 2};
    vector<int> balls = {100};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> platformMount = {0, 100, 200, 300, 400};
    vector<int> platformLength = {50, 50, 50, 50, 50};
    vector<int> balls = {60};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 270608040;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> platformMount = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {1};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 836271060;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> platformMount = {-9000, -8000, -7000, -6000, 0, 1000, 2000, 3000, 4000, 6000, 8000, 10000};
    vector<int> platformLength = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 747766068;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 319299497;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> platformMount = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 254389622;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000, 10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 595889599;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> platformMount = {1};
    vector<int> platformLength = {10};
    vector<int> balls = {0, 2};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> platformMount = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    vector<int> platformLength = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    vector<int> balls = {-900};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 71821010;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> platformMount = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> platformLength = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> balls = {0};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 65610000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> platformMount = {7, 1000, 999, 888, 777, 666, 555, 444, 333, 222, 111, 1111, 1111, 110};
    vector<int> platformLength = {10, 100, 999, 888, 333, 456, 1984, 188, 234, 345, 456, 456, 10000, 9999};
    vector<int> balls = {3, 4};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 772671063;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> platformMount = {0, 5};
    vector<int> platformLength = {1, 7};
    vector<int> balls = {0, 2};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995, 9995};
    vector<int> balls = {-10000, 10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 150478074;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {10};
    vector<int> balls = {-1, 1};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {100};
    vector<int> balls = {10, -10};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 927100009;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> platformMount = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000};
    vector<int> platformLength = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 927100009;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {10};
    vector<int> balls = {1, -1};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> platformMount = {1, 2, 3, 4};
    vector<int> platformLength = {10000, 10000, 10000, 10000};
    vector<int> balls = {-10000, -9999, -9998, -9997};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 810038009;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 61257952;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> platformMount = {-5000, -4500, -4000, -3500, -3000, -2500, -2000};
    vector<int> platformLength = {100, 100, 100, 100, 100, 100, 100};
    vector<int> balls = {9999};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 534245784;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> platformMount = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 663160665;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> platformMount = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 424288671;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> platformMount = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> platformLength = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> balls = {0};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 95100054;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> platformMount = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 345430447;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> platformMount = {1, -10000, 3, 4, 5};
    vector<int> platformLength = {400, 10000, 2121, 1000, 1000};
    vector<int> balls = {10000, 9999, 9998, 9997};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 497171031;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> platformMount = {0, 100, 200, 300, 400, 10000};
    vector<int> platformLength = {50, 50, 50, 50, 50, 5000};
    vector<int> balls = {60};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 310795863;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {10};
    vector<int> balls = {-2, 2};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> platformMount = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    vector<int> platformLength = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000};
    vector<int> balls = {-100, -200, -300, -400, -500, -600, -700, -800, -900, -1000, -1100, -1200, -1300, -1400, -1500, -1600, -1700, -1800, -1900, -2000, -2100, -2200, -2300, -2400, -2500, -2600, -2700, -2800, -2900, -3000, -3100, -3200, -3300, -3400, -3500, -3600, -3700, -3800, -3900, -4000, -4100, -4200, -4300, -4400, -4500, -4600, -4700, -4800, -4900, -5000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 404440860;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-1, 1};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {5};
    vector<int> balls = {-2, 2};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> platformMount = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> platformLength = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> balls = {-1, -2};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 234388915;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> platformMount = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> platformLength = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 82750627;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {9950, 9951, 9952, 9953, 9954, 9955, 9956, 9957, 9958, 9959, 9960, 9961, 9962, 9963, 9964, 9965, 9966, 9967, 9968, 9969, 9970, 9971, 9972, 9973, 9974, 9975, 9976, 9977, 9978, 9979, 9980, 9981, 9982, 9983, 9984, 9985, 9986, 9987, 9988, 9989, 9990, 9991, 9992, 9993, 9994, 9995, 9996, 9997, 9998, 9999};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 430062357;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> platformMount = {9174, -1458, -1303, 1188, -89, 7125, -606, 8009, -3175, -8058, 1105, -7494, -476, -5064, 5524, 5556, 2285, -3589, 3969, 567, -6539, -710, -2167, 86, -1040, 8482, -1073, 3441, -3186, 9702, 8857, -292, -1756, 1274, -5384, -8125, -1602, 4011, -6396, 5223, 9674, 4709, -8551, -803, -6635, -9306, -1526, 5650, 826, -7558};
    vector<int> platformLength = {6414, 3527, 6092, 8981, 9957, 1874, 6863, 9171, 6997, 7282, 2306, 926, 7085, 6328, 337, 6506, 847, 1730, 1314, 5858, 6125, 3896, 9583, 546, 8815, 3368, 5435, 365, 4044, 3751, 1088, 6809, 7277, 7179, 5789, 3585, 5404, 2652, 2755, 2400, 9933, 5061, 9677, 3369, 7740, 13, 6227, 8587, 8095, 7540};
    vector<int> balls = {-1009, 7398, -593};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> platformMount = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -1000};
    vector<int> platformLength = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> balls = {9951, 9952, 9953, 9954, 9955, 9956, 9957, 9958, 9959, 9960, 9961, 9962, 9963, 9964, 9965, 9966, 9967, 9968, 9969, 9970, 9971, 9972, 9973, 9974, 9975, 9976, 9977, 9978, 9979, 9980, 9981, 9982, 9983, 9984, 9985, 9986, 9987, 9988, 9989, 9990, 9991, 9992, 9993, 9994, 9995, 9996, 9997, 9998, 9999, 10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 319299497;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> platformMount = {2};
    vector<int> platformLength = {5};
    vector<int> balls = {1, 3};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> platformMount = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 451680275;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> platformMount = {7};
    vector<int> platformLength = {10};
    vector<int> balls = {300, 400};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> platformMount = {0, 200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2200, 2400, 2600, 2800, 3000};
    vector<int> platformLength = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> balls = {10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 453773626;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> platformMount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 663160665;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> platformMount = {0, 0, 0, 0};
    vector<int> platformLength = {9999, 9999, 9999, 9999};
    vector<int> balls = {-9999};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 509996001;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> platformMount = {3, 10};
    vector<int> platformLength = {1, 1};
    vector<int> balls = {2, 3, 4};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> platformMount = {0};
    vector<int> platformLength = {1000};
    vector<int> balls = {-1, 1};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> platformMount = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> platformLength = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> balls = {-100, 100};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 991000009;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> platformMount = {7};
    vector<int> platformLength = {10};
    vector<int> balls = {6, 8};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> balls = {100};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 961894076;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> platformMount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> platformLength = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    vector<int> balls = {10000, -10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 817846707;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> platformMount = {1, 2, 3};
    vector<int> platformLength = {10000, 10000, 10000};
    vector<int> balls = {-10000};
    YetAnotherIncredibleMachine* pObj = new YetAnotherIncredibleMachine();
    clock_t start = clock();
    int result = pObj->countWays(platformMount, platformLength, balls);
    clock_t end = clock();
    delete pObj;
    int expected = 300021001;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15056181&rd=14538&pm=11502
********************************************************************************
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
 
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(),(a).end()
#define sz(a) ((int) (a).size())
#define pb push_back
 
class YetAnotherIncredibleMachine {
public:
  int countWays(vector <int>, vector <int>, vector <int>);
};
 
const int mod = 1000000009;
 
int YetAnotherIncredibleMachine::countWays(vector <int> a, vector <int> b, vector <int> balls) {
  int n = sz(a);
  long long res = 1;
  REP (i, n) {
    int mult = 0;
    FOR (j, a[i] - b[i], a[i] + 1) {
      bool ok = true;
      REP (k, sz (balls)) {
        if (balls[k] >= j && balls[k] <= j + b[i]) {
          ok = false;
          break;
        }
      }
      mult += ok;
    }
    res *= mult;
    res %= mod;
  }
  return res;
}
 
 
//Powered by [KawigiEdit] 2.0!
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/