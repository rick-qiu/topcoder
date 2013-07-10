/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2235
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

class FanFailure {
public:
    vector<int> getRange(vector<int> capacities, int minCooling);
};

vector<int> FanFailure::getRange(vector<int> capacities, int minCooling) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> capacities = {1, 2, 3};
    int minCooling = 2;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> capacities = {8, 5, 6, 7};
    int minCooling = 22;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> capacities = {676, 11, 223, 413, 823, 122, 547, 187, 28};
    int minCooling = 1000;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 2};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> capacities = {1000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int minCooling = 50;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> capacities = {460, 191, 332, 693, 617, 837, 468, 983, 909, 214, 112, 586};
    int minCooling = 2278;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 5};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> capacities = {521, 16, 655, 906, 653, 957, 625, 842, 792, 15, 739};
    int minCooling = 6313;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> capacities = {516};
    int minCooling = 241;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> capacities = {89, 886, 545, 819, 567, 586, 340, 824, 148, 384, 845, 523, 259, 727, 520, 980, 426, 494, 533, 736};
    int minCooling = 7586;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> capacities = {229, 102, 817, 103, 486, 65, 543, 360, 289, 397, 995, 896, 347, 201, 733, 90, 966, 39, 843, 49, 851, 668, 904, 741, 500, 287, 463, 45, 639, 753};
    int minCooling = 8219;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 6};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> capacities = {120, 33, 225, 827, 144, 542, 592, 152, 998, 428, 235, 281, 192, 822, 733, 559, 705, 709, 78, 213, 614, 660, 504, 524, 880, 286, 304, 467, 546, 803, 939, 339, 369};
    int minCooling = 5123;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 14};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> capacities = {736, 678, 982, 498, 809, 32, 89, 324, 642, 354, 531, 624, 859};
    int minCooling = 5733;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> capacities = {177, 749, 10, 86, 993, 461, 952, 518, 823, 608, 160, 255, 914, 798, 33, 736, 264, 481, 446, 842, 194, 365};
    int minCooling = 1410;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 13};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> capacities = {192};
    int minCooling = 45;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> capacities = {328, 973, 135, 66, 802};
    int minCooling = 719;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> capacities = {450, 53, 454, 971, 270, 835, 320, 436, 319, 739, 19, 809, 625, 345, 107, 960, 647, 922, 136, 655, 651, 275, 80, 994, 353, 675, 637, 843, 206, 294, 729, 486, 452, 86, 586, 165, 121, 997, 734, 260, 553, 183, 492, 947, 204, 334, 611, 755, 962};
    int minCooling = 12193;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 14};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> capacities = {460, 425, 524, 776, 94, 392, 15, 513, 40, 757, 996, 662, 984, 192, 250, 140, 380, 753, 159, 916, 644, 706};
    int minCooling = 3630;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 8};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> capacities = {452, 367, 916, 53, 433, 219, 29, 730};
    int minCooling = 1937;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> capacities = {947, 965, 650, 863, 156, 507, 740, 895, 823, 55, 550, 986, 505, 326, 135, 779, 238, 46, 375, 264, 190, 857, 611, 17, 474, 929, 725, 679, 355, 52, 487, 676, 121, 342, 570, 62, 894, 921, 648, 532, 484};
    int minCooling = 20675;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> capacities = {959, 460, 721, 446, 808, 705, 464, 258, 343, 534, 982, 588, 695, 762, 559, 967, 256, 802, 270, 780, 608, 930, 82, 207, 678, 554, 810, 746, 340, 968, 423, 97, 870, 158, 566};
    int minCooling = 2677;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 24};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> capacities = {217, 518, 774, 447, 926, 352, 927, 173};
    int minCooling = 378;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> capacities = {325, 886, 304, 268, 370, 361, 948, 255, 239, 486, 215, 547, 967, 222, 742, 692, 79, 748, 680, 359, 718, 309, 378, 288, 971, 525, 63, 634, 258, 784, 236, 895, 305, 754, 376};
    int minCooling = 12252;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 5};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> capacities = {468, 768, 877, 394, 883, 16, 743, 380, 774, 880, 608, 704, 745, 677, 988, 442, 413, 555, 372, 427, 423, 299, 284, 347, 868, 492, 965, 171, 696, 496, 367, 144, 390, 524, 906, 865, 534, 497, 813, 409};
    int minCooling = 3000;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 29};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> capacities = {253, 959, 619, 780, 232, 494, 395, 102, 742, 565, 423, 75, 643, 914, 234, 32, 803, 790, 499, 319, 216, 936, 263, 530, 836, 853, 295, 162, 999, 730, 886, 811, 224, 590};
    int minCooling = 15953;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> capacities = {549, 440, 161, 964, 135, 92, 322, 859, 13, 576, 82, 636, 780, 871, 408, 685, 980};
    int minCooling = 4775;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 4};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> capacities = {670, 624, 589, 897, 343, 763, 730, 43, 104, 801, 226, 975, 393, 260, 315, 406, 24, 216, 957, 149, 736, 331, 672, 852, 599, 497, 221, 129, 881, 800, 788, 953, 286, 31, 733, 991, 106, 748, 282};
    int minCooling = 7926;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 14};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> capacities = {736, 746, 606, 778, 175, 124, 54, 343, 212, 304, 151, 508, 844, 394, 940, 863, 847, 980, 3, 744, 942, 361, 493, 374, 384, 397, 975, 738, 28, 534, 311, 934, 748, 628, 611, 49, 367, 155, 150, 137, 590, 555, 729, 505, 380};
    int minCooling = 4071;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 25};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> capacities = {122, 160, 238, 220, 856, 425, 442, 143, 579, 115, 469, 566, 484, 133, 165, 13, 503, 380, 984, 342, 411, 936, 387, 597, 423, 650, 312, 752, 871, 111, 179, 487, 71, 976, 456, 813, 51, 235, 540, 145, 177, 86, 660, 618};
    int minCooling = 8275;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 13};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> capacities = {710, 802, 948, 866, 943, 129, 369, 759, 168, 728, 930, 583, 740, 944, 278, 766, 339, 915, 393, 152, 807, 80, 922, 306};
    int minCooling = 5995;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 9};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> capacities = {603, 874, 198, 502, 142, 650, 65, 180, 518, 476, 973, 529, 15, 779, 102, 562, 387, 643, 842, 323, 257, 805, 470, 309, 713, 138, 204, 296, 770, 259, 334, 797, 43, 719, 405, 341};
    int minCooling = 6804;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 12};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> capacities = {674, 415, 799, 675, 61, 881, 259, 561, 543, 84, 745, 163, 560, 861, 646, 238, 463, 330};
    int minCooling = 8362;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> capacities = {580, 635, 543, 167, 994, 386, 608, 298, 984, 276, 659, 485, 297, 946, 154, 426, 420, 906, 707, 786, 238, 959, 288, 807, 651, 943, 112, 827, 794};
    int minCooling = 625;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 25};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> capacities = {11, 106, 522, 987, 535, 452, 90, 944, 878, 305, 247, 826, 394, 929, 619, 111, 472, 961, 322};
    int minCooling = 313;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 15};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> capacities = {304, 706, 398, 697, 73, 679, 826, 117, 232, 40, 222, 745, 681, 94, 895, 747, 720, 516, 917, 116, 77, 609, 30, 283, 150, 600, 854, 26, 684, 627};
    int minCooling = 1793;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 16};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> capacities = {221, 386, 146, 708, 540, 86, 505, 653, 726, 603, 740, 737, 240};
    int minCooling = 3925;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 3};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> capacities = {855, 156, 869, 623, 538, 913, 386, 795, 392, 62, 346, 185, 541, 231, 373, 751, 271, 949, 885, 507, 792, 138, 493, 789, 821, 34, 948, 370, 61, 914, 329, 38, 858, 532, 814};
    int minCooling = 2994;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 20};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> capacities = {542, 273, 6, 20, 71, 198, 417};
    int minCooling = 635;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> capacities = {194, 549, 740, 519, 874, 582};
    int minCooling = 2381;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> capacities = {135, 860, 780, 741, 151, 778, 482, 650, 626, 69, 484, 897, 544, 821, 389, 83, 356, 116, 979, 813, 987, 718, 292, 365, 448, 214, 402, 393, 139, 344, 153, 655, 818, 668, 82, 851, 776, 735, 455, 125, 437, 578, 377, 348, 555, 439, 939, 321};
    int minCooling = 22891;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> capacities = {847, 877, 269};
    int minCooling = 1020;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> capacities = {349, 735, 687, 160, 84, 478, 405, 396, 841, 479, 301, 13, 152, 246, 949, 849, 657, 318, 264, 552, 491, 730, 259, 844, 972, 427, 340, 736, 655, 944, 935, 700, 932, 748, 430, 767, 808, 753, 752, 30, 504, 876, 447, 793, 417};
    int minCooling = 10722;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 17};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> capacities = {881, 581, 768, 151, 706, 164, 261, 312, 789, 410, 576, 712, 590, 59, 823, 867, 51, 246, 393, 661};
    int minCooling = 4233;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 7};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> capacities = {219, 585, 301, 793, 864, 687, 259, 436};
    int minCooling = 1458;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> capacities = {549, 35, 233, 569, 558, 885, 994, 991, 516, 696, 22, 692, 749, 659, 307, 63, 122, 435, 910};
    int minCooling = 1792;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 10};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> capacities = {736, 480, 235, 134, 713, 421, 286, 780, 429, 425, 837, 76, 349, 775, 339, 766, 830, 707, 40, 490, 25, 919, 825, 358, 483, 782, 280, 301, 907, 972, 450, 13, 327, 302, 47, 500, 187, 298, 178, 401, 866, 179, 192, 874, 22, 42};
    int minCooling = 11710;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 10};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> capacities = {269};
    int minCooling = 88;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> capacities = {546, 790, 728, 560, 415, 847, 393, 500, 752, 289, 974, 114, 355, 352, 602, 729, 127, 834, 536, 54, 523, 502, 521, 439, 11, 963, 600, 208, 87, 708, 389, 737, 9};
    int minCooling = 11549;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 5};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> capacities = {311, 50, 706, 527, 636, 366, 80, 485, 238, 302, 99, 861, 312, 806, 812, 848, 488, 295, 610, 817, 765, 694, 854, 35, 753, 304, 152, 16};
    int minCooling = 11675;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> capacities = {39, 338, 527, 254, 869, 457, 548, 856, 998, 37, 910, 242, 526, 573, 42, 57, 673, 960, 748, 771};
    int minCooling = 10091;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> capacities = {273, 405, 691, 916, 917, 813, 285, 665, 616, 827, 118, 714, 942, 93, 444, 780, 762};
    int minCooling = 4373;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 6};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> capacities = {527, 311, 180, 573, 922, 513, 724, 282, 886, 415, 151, 692};
    int minCooling = 601;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 9};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> capacities = {649, 908, 976, 281, 487, 269, 428, 984, 402, 663, 716, 183, 528, 979, 703, 231, 778};
    int minCooling = 6066;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> capacities = {637, 161, 135, 520, 349, 702, 880, 429, 717, 607, 480, 479, 275, 993, 501, 515, 116, 291, 199, 810, 555, 260, 489, 206, 634, 955, 322, 770, 529, 268, 518, 224, 692, 129, 39, 188, 517, 265, 44, 254, 152};
    int minCooling = 17415;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> capacities = {48, 306, 331, 100, 316, 142, 805, 899};
    int minCooling = 2287;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> capacities = {955, 96, 161, 259, 642, 242, 772, 369, 311, 785, 92, 991, 620, 394, 128, 774, 973, 94, 681, 771, 916, 373, 523, 100, 220, 993, 472, 798, 132, 361, 33, 362, 573, 624, 722, 520, 451, 231, 37, 921, 408, 170, 303, 559, 866, 412, 339, 757, 822, 192};
    int minCooling = 3619;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 30};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> capacities = {1000};
    int minCooling = 1;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> capacities = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int minCooling = 45;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 7};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> capacities = {676, 11, 223, 413, 823, 122, 547, 187, 28};
    int minCooling = 1000;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 2};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> capacities = {2, 4, 6, 8};
    int minCooling = 1;
    FanFailure* pObj = new FanFailure();
    clock_t start = clock();
    vector<int> result = pObj->getRange(capacities, minCooling);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5070&pm=2235
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
 
class FanFailure { 
public: 
vector <int> getRange(vector <int> a, int b) { 
  int i, j, k, x, y, z, n; 
  vector <int> ret; 
  ret.push_back(-1); 
  ret.push_back(-1); 
  sort(a.begin(), a.end()); 
  for( i = 0; i <= a.size(); i++ ) { 
    if( accumulate(a.begin()+i, a.end(), 0) >= b ) 
      ret[0] >?= i; 
    if( accumulate(a.begin(), a.end()-i, 0) >= b ) 
      ret[1] >?= i; 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/