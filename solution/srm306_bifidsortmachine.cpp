/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6415
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

class BifidSortMachine {
public:
    int countMoves(vector<int> a);
};

int BifidSortMachine::countMoves(vector<int> a) {
    int ret;
    return ret;
}


int test0() {
    vector<int> a = {8, 12, 25, 7, 15, 19};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {1, 2, 3, 4, 5};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {1000, -1000, 0};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {6, 5, 4, 3, 2, 1};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {2, 3, 4, 5, 9, 6, 7, 8, 1};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {8, 1, 5, 9};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {1, -10, -1, -8, 4};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {-36, 746, -309, 955, -737, -31, 922, 780, -861, 359, -284, 905, 83, -162, -603, 584, -133, -342, -657, -836};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {885, -299, 802, 989, 49, 324, -242, 923, 355, 721, -290, -201, 223, -462, -395, -989, -809, 313, -307, 689, -447, 140, 890, 593, 985, 225, -912};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {-581, 901, -421, 874, -923, -147, -839, -37, -953, 624, -60, 296, 67, 311, -259, 290, 746, -999, -981, 459, -614, 48, 274, -653, -560, 344, -864, -336, -341, 225, -111, 789, -36, -192, 693, 278, 709, -777, 549, -977, -42, 869, 465, -71};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {917, 709, -730, -429, -149, 269, -108, 521, 763, -472, 415, -8, 669, -993, 136, -978, -671, -542, -335, -201, 78, -887, 847, 102, -175, -85, -783};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {-945, 555, 295, 197, 178, 492, -473, 249, -31, 32, 525, 388, 487, -881, 10, -712, -903, 50, 12, 111, 445, 334, 603, 256, 363, 806, 383, -926, -106, 297, 112, 921, -751};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {-587, -719, 322, -6, -101, -205, -36, 338, -924, -545, -288, -220, 903, 709};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {663, -948, -712, 503, -805, -585, -244, 777, -623, -415, 114, 754, -148, 548, 416, -110, 894, -672, 938, 742, 262, 278, -12, -915, 868, 164, -621, 458, 939, 909, -271, -875, -757, -724, -910, 143, 241, 428, 183, 83, 381, -28, -328, -755};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {-937, -732, -150, -449, -101, -141, -267, -819, -346, -450, -495, -496, 805, 5, 95, -430, -82, -663, 990, 799, 910, -943, 948, 64, -280, -640, 894, -398, 380, 869, -111, 44, 527, 236, -923, -750, 391, 520, 972, -227, -599, -595, -686, 890, -880};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {849, 113, -560, -651, 133, -348, -1000, 468, -34, -12, -856, -508, -394, -859, -660, 533, 917, 551, -233, -981, 93, 907, -326, 523, 428, -368, 823, -966, -764, -826, 960, 429, -522, 498};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {460, -205, -652, -508, -635, 90, 836, 952, 21, -602, -616, 878, -189, -396, -565, -325, -580, 206, -210, -799, -549, -797, 386, -427, 941, -604, 896, 515, 409, -624, -208, -523, 490};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {87, 379, -828, 253, -793, -941, -613, -677, 56};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {494, 806, -703, -763, 270, 200, 561, 328, -120, -501, 450, 994, 553, -749, 247, 848, -884, -198, 923, 608, 44, 419, -508, 195, 479, -255, -572, 738, -921, -349, -78, -371, -475, -476, -881, -335, -865, -557, -206, 961, -251, 37, -40, 776, -435, 591, -860, 869};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {-480, 766, 3, 813, 798, -628, -753, 53, 977, 130, 466, 512, -476, -241, 228, 999, -462, -700, 112, 618, -72, -940, -815, 97, -154, 332, 138, 843, 856, 983, -734, 881, 220, 280, 106, 107, -17, 957, 937, -667, -594, -460, 980, 4};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {-294, -697, -901, 276, 825, 619, 907, 773, 985, -509, -650, -607, -818, -794, 113, -325, 997, 443, -762, -567, -767, 514, 172, -54, -198, 418, -858, -233, -968, 287, 718, 22, -629, -366, 645, -571};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {729, -842, -844, -18, 584, 200, 407, 266, -499, -852, -633, -888, 547, -28, 693, -427, 367, -447, -719, -337, 700, -108, 533, 908};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {116, -476, -455, -653, 266, 904, 149, -820, -185, -670, -69, -239, -417, 399, 774, -505, 275, -804, -437, -596, 615, 272, -102, -218, 998, 454, 981, -445, -454, 39, -255, 606, -427, -902, 558, -613, -977, -989, -130, -705, -633, -316, -696, 808, 392, 319, 491, -117, 607, -167};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {134, -936, 794, -395, -196, 632, 780};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {-796, 73, -495, -555, -774, 938, -817, 407, 848, -413, 270, -94, -485, 622, -970, 623, 211, 229, 455, -845, -657, 34, 841, 268};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {-630, 244, -69, -799, -113, -917, 935, -891, -543, 51, 848, 324, 995, 85, 714, 101, 109, -615, 674, 339, 177, 287, -783, -437, -793, 713, 803, 919, -902, 574, 165, -645, 63, -584, -90, -278, 524, -513};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {-94, -218, -950, 755, -320, 964, 661, -968, 919, -760, 289, 926};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {-708, -815, 112, -281, 380, -894, 534, 471, 290, -165, -678, 280, 276, 193, 473, 220, 676, 91, 142, -961, -650, -590, 344, -395, -335, 875};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {-21, -889, -164, -865, 801, -229, 357, 280, 907, -722, 684, -898, -126, -750, -610, 853, -457, 629, -419, 510, -935, 786, 900, -86, -94, 530, -643};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {-59, -766, 638, 988, -760, 819};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {16, 281, -823, -694};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {308, -680, 701, 440, -243, 668, -978, 609, 800, -431, 48, 557, -109, 120, -57, -238, -634, -106, -462, 571, -477, 363, -298, -31, -619, -816, 984, 278, 206, 366, 123, -293, 610, 183, -668, -737, 980, 739, -113, 457};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {281, 479, -550, -90, 833, 873, 939, -980, 151, 860, -405, -84, 513, -936, 666, 527, 670, 656, 428, -210, -746, 543, 876, 842, -851, -445, 699, -841, -813, 869, -789, -42, -966, 407, -437, -888, -478, -327, -749, -567, -115, 191, 676, -66, -867};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {158, 575, -823, -358, -286, -148, -919, -983, -978, 239, 761, 412, 54, 65, -17, 791};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {713, -422, -614, 380, 454, -116, -502, -855, -352, -821, -276, 505, 636, -812, -788, -318, 344, -697, 433, 48, 927, -802, -257, 665, -836, -649, -369, -474, -439, 962, -581, 240, -521, -200, -457, -673, 585, -224, 5, -553};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {776, 94, 851};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {-282, -954, 409, 852, -945};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {204, -909, -439, 860, -45, 654, -199, -625, 892, -541, 244, -514, -747};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {-621, 843, -41, -733, -273, -826, 52};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {-657, 449, 756, 622, -682, 416, -59, 946, -625, -74, -420, -939, 92, 275, 114, -306, 703, 642, -61, -125, 338, 369, -567, -148, -778, 390, 189, 722, -886, -919};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {-230, 320, -500, 202, -202, -656, 899, 654, -200, 604, 540, 992, 884, -849, -760, -92, 84, 373, 311, 89, 400, -99, 62};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {-345, 349, 497, 136, -543, -377, -686, 496, -994, -701, -714, 280, 988, 426, 240, 364, -364, -159, -469, -984, 998, -200, -316, -421, 7};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {-505, 307, -103, 436, 996, 141, -59, -380, 119, 827, 58, 158, -263, -931, 734, -521, 321, -378, 39, 752, -969, 206, -863, -204, -104, 909, -584, -312, -22, -635, 62, -703, 328, -764, 438, 682, 11, 354, -235, -666, 253, 952, 179};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {-769, -563, 169, -288, 417, 320, 303, 885};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {923, -977, 986, -443, -32, 483, 893, 791, 308, -156, -254, -79, -775, 539, -60, -224, 437, -316, 335, 928, -392, -732, 125};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {-810, 655, 385, -237, -550, 46, -107, -341, -754, 529, 295, -207, -957, -473, -406, 49, -986, 86, 758, -582, 93, 504, 437, -770, 16, 1, -790, -735, -240, 693, 194, -393};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {-96, -963, -579, 471, 725, -869, 272, 215, 446, -392, 678, 820, -675, 913, 261, 965, 21, 576, 884, 376};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {-209, -712, 252, 386, -925, 281, 163, 925, -396, 716, 390, 374, -515, -705, -324, 901, 240, -567, -824, -297, 915, 204, -282, -516, -970, -197, -554, -80, -16, -433, -277, -355, -744, -892, -977, 983, 695, 552, -603, 700, 972, 136, -307, -450, -470, -771, -310, -954, -740, 904};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {-258, -279, -547, -415, 985, 489};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {665, 530, 780, -733, -970, 932, -461, 970, -313, 572, 387, -760, 946, -88};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {269, 573, 166, -977, 901, -942, -903, -635, -618, 935, -955, -602, -388, -126, -85};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {722, 819, -309, 99, 120, 141, -984, 608, -978, -980, 409, 553, 579};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {-582, -567, -541, -428, -397, -359, -236, -73, -828, -954, -63, -676, -39, -37, -36, -895, -18, 12, -722, -877, 17, 61, 71, 121, 135, -696, 191, 194, -973, -741, 235, -584, 316, 387, 550, 580, 588, 680, 687, 760, 765, -946, 777, 841, -700, 873, 994, 898, 950};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {-799, 170, 543, 351, 827, 368, 496, 531, -230, -434};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {928, 444, -225, 525, 722, 778, 427, 181, 263};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {163, -619, 700, 202, 810, 144, -397, -65, -742, -798, -520, -422, -799, -108, 571, 327, -595, -71, -289, -155, -388, -514, -30, -570, -386, -501, 410, 773, -795};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {-840, -456, -315, -156, -45, 264, 315, -599, 348, -814, 394, 437, 648, 722, -802, -971, -946, 442, 491, 904, 588, -909, 930, 631, -938, -518};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {283, 626, 400, -861, -583, -545, 395, -336, -257, 998, 711, -255, -227, -101, -627, -5, 302, 26, 81, -858, -584, 326, 831, 702, 455, 84, 104, 135, 418, 196, -890, 208, 232, -927, 919, 279, 978};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {-531, 611, -80, -58, -877, -125, 986, 763, 728, 423, -384, 905, -305, -522, -562, 856, -102, 2, 46, 722, 355, 136, 929, 185, 440, 754, 193, 597, 235, -942, 798, 294};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {-692, -673, -656, -877, -591, 863, -702, -564, -826, -468, -433, -411, -357, -317, -253, 922, -137, -53, -17, 247, 266, 339, 387, 520, -898, 529, 638, 658, 750, 754};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {-119, 875, 180, 249, 273, -371, -925, -275, -896, -174};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {-705, -634, 583, -392, -158, 137, 172, 227, 284, 524};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {304, 687, -696, -629, -841, 829, 260, 439, -628, -618, 277, -531, -905, -482, 52, -477, -838, 393, -466, -323, 311, 288, -153, -120};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {659, 963, 752, -899, 402, 754, -825, 950, 12, 926, 299, 273, 219, 209, -316, 483, 656, -179, 528, -265, -191, 781, -459, 103, -759, 11, 267, -114, -819};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {-845, 940, -822, -797, -647, -510, -314, -147, -126, 44, 98, 292, 307, 846};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {911, -932, -510, -356, 225, 832, 277, -874, -545, -903, 485};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {254, 491, 952, -120, 469, 432, -679, -538, 959, -889, -353, 413, 421, -139, 394, 955, -448, -355, -854, 373, 476, -890, 453, 358, 627, -885, -337};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {-808, -528, 381, -785, 898, -462, -941, -453, -605, -395, -323, 427, -274, -237, -99, -96, -11, -592, 44, 47, 649, 226, 372, 743, 523, -716, 229, -960, 239, -819, -746, 363, 846};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {405, 743, -706, -411, -291, -115, 63, 421, -8, 218};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {-855, -772, -729, -621, -598, -440, -343, -238, -134, 59, 267, 301, 318, -981, 364, 422, 427, 606, 954, 778};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {-971, -764, -709, -701, -610, -534, -518, -493, -476, 812, -292, -227, -173, -89, 34, 195, 220, 261, 283, 287, 359, 364, 640, 747, 797};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {881, 119, -167, 308, 208, 13, -116, -925, -362, 293, 33, -234, -967, 962, 796, 631};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {354, -565, -561, 874, -468, -443, -980, -660, -339, 234, 757, -316, 741, -254, -243, -617, -234, 838, 503, 578, -172, -128, -116, -8, -766, 631, -880, -2, 29, 46, 57, 90, -575, 127, 157, 159, 181, 794, 674, 481, -877, -744, 491, 569};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {-443, -266, 327, -784, 667, -709, 818, -651, 848, 646, 947, -858};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {26, 181, 95, 615, -29, 896, -17, -764, -923, 103, 934, 196, -745, -938, -717, 677, -310, -190, -947, 825, -67, -175, 975, -77, -137, 106, -45, -26, 135, 284, 245, 148, 962, 780, 219, 458, 389, -950, 146};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {-242, -631};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {-325, -222, -207, 61, 747, -458, 977, -758, 929};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {526, -871, 516, -207, -752, -913, -356, -310, 277, -771, 169, 157, -282, -915, -19, 620, -693, 944, 149, -791, -744, -93, -703, 289, 913, -686, -982, 351, -126, -867, -380, 723, 644, -108, 805, 676, -523, 496, -432, -428, 181, 443, -573, -979, 121, -286, -806, 109, -929, 51};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {-269, -229, -115, -100, -503, 95, 90, 565, -74, -675, -433, 75, -121, 403};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {687, 486, 310, -354, -738, -442, 26, -532, 600, 991, -225, 864, -612, -826, 400, 276, -647, 4, 11, -924, 965, -889, -281, -203, -456, -200, -271, -692, -284};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {-775, -876, -958, 265, 797, 466, 385, -10, 21, 22, 221, 970, -834, -836, -365, -84, -72, -9, -158, -715, 159, -74, 637, -803, 413, -954, -749, 692, 343, 533, -685, -726, 751, 316, -41};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {-171, -818, -292, -840, -685, -782, 207, -112, -636, -364, -70, -452, 2, -420, 206, -678, 918, 939, 878, 999, -406, -712, -230, -817, -980, 454, 419, -695, 394, 344, -578, -419, 644, 354, 505, 247, -81, 618, 493, -1, 487, 537, 978};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {-907, -889, -842, -786, -764, -722, -685, -563, -560, -556, -543, -502, -475, -439, -362, -356, -349, -341, -332, -312, -277, -220, -201, -174, -103, -92, -11, -7, 1, 57, 151, 214, 296, 303, 332, 392, 405, 427, 441, 455, 490, 515, 546, 613, 649, 716, 739, 795, 832, 875};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {980, 914, 902, 890, 882, 853, 752, 709, 661, 645, 457, 329, 300, 295, 266, 211, 195, 157, 153, 140, 120, 58, 46, 13, 9, -62, -107, -155, -169, -183, -245, -266, -276, -314, -325, -401, -410, -418, -472, -504, -550, -639, -704, -767, -789, -816, -843, -882, -944, -947};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {977, -883, -789, -720, -711, -688, -642, -559, -555, -498, -496, -330, -313, -292, -268, -258, -211, -175, -114, -107, -104, 49, 57, 184, 213, 266, 275, 321, 328, 329, 353, 424, 430, 431, 484, 514, 601, 606, 607, 638, 668, 699, 768, 781, 788, 834, 852, 910, 922, -987};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {1, 5, 3, 7};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {100, 1, 2, 3, 4, 5, -100};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {5};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {1, -10, -1, -8, 4};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {-820, -172, 146, 101, 869};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> a = {688, -969, -13, -614, -203, -219, 618, -104, 731, -497, 968, -310, 115, -311, 181, 775, 161, 958, 582, -744, -581, 463, 270, 321, -797, -867, -977, 948, -592, -563, 521, 635, 297, 185, 410, -231, 325, -91, -98, -546, 935, -607, 512, -300, -194, -60, 785};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> a = {3, 14, 4, 20, 10, 17, 50, 37, 25, 24, 23, 18, 16, 27, 6, 47, 8, 38, 26, 19, 29, 21, 11, 15, 12, 41, 36, 30, 13, 22, 45, 1, 48, 28, 46, 42, 34, 9, 5, 44, 39, 35, 7, 43, 49, 32, 33, 2, 31, 40};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> a = {1, 5, 7, 2};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> a = {690, 633, -649, -975, 409, -678, 624, -976, -460, -102, -983, 120, 202, 75, 826, -339, -709, 620, 204, -666, 718, -299, 290, 383, 634, 235, 571, -651, -984, -99, 448, 263, -466, 356, -155, 500, 678, -531, 81, -783, -76, 98, -106, -875, 730, -723, -656, -980, 454, 548};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> a = {5, 3, 1, 2, 4};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> a = {544, 123, -132, 616, 594, -176, 299, 670, -258, -636, -891, 812, 944, -865, -946, -762, 257, 793, -330, 111, -197, 86, -395, -933, 122, 856, -518, 937, 762, -491, -874, 568, -362, 410, -112, 27, -831, 579, 353, -820, -864, -252, 452, -545, 18, -953, -135, -449, 424, 346};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> a = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 2, 49, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 50};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> a = {3, 2, 1};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> a = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> a = {17, 19, 20, 5, 4, 2, 1, 30, 31, 0, 50, 8, 100};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> a = {1000, -1000, 0, -10, 23, 24, 57, -6, 81, 99, -16, 253, -812};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> a = {1000, -1000, 0, -10, 23, 24, 57, -6, 81, -16, 253, -812, 123, 124, 125, 126, -54, -77, 99, 444, -216, -301, -49, -888};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> a = {976, -946, -824, 680, -644, -95, 128, -892, 816, -263, -592, -669, 887, 447, -653, -759, 572, 171, 635, 98, -904, 78, 143, -416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> a = {8, 12, 25, 7, 15, 19, 976, -946, -824, 680, -644, -95, 128, -892, 816, -263, -592, -669, 887, 447, -653, -759, 572, 171, 635, 98, -904, 78, 143, -416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> a = {1, 3, 2, 5, 4, 6};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> a = {-154, -15, 874, -85, 612, -78, 98, -762, 46, 22, -4, 3, -6, 7, 89, -1, 254, -241, 144, -42, 239, -254, -147, -542, 625, 652, -444, 222, 333, 555, -666, 999, -888, 777, -777, 888, -999, 666, -555, 444, -222, -333};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> a = {4, 88, 33, 53, 6, 834, 23, 69, 466, 2, 363, 58, -24, -536, -66, -23, -84, 223, 27, 94, 19, 34, 8, 279, 552, 76, 0, -41, -11, -94, -26, -55, -196, -385, 95, 923, -332, -677, -799, -909, -108};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> a = {180, 20, -270, 480, -110, 100, -10, -330, 260, -130, -30, -170, 360, -430, -450, -150, 380, -490, 460, -350, 160, 440, -230, -290, -410, 60, -210, -50, 400, -90, -370, 120, 340, 200, -310, -190, 240, 220, -470, 320, 300, -250, 140, 0, -70, 280, -390, 420, 80, 40};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> a = {10, 1, 2, 3, 4};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> a = {309, 101, 404, 844, 996, 35, 555, 697, 656, 842, 345, 756, 661, 138, 479, 190, 614, 482, 874, 147, 191, 89, 702, 294, 88, 698, 18, 234, 941, 302, 148, 235, 236, 353, 943, 99, 278, 66, 215, 68, 363, 402, 815, 933, 988, 220, 616, 604, 284};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> a = {1, -10, -1, -8, 11, 12, 4};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> a = {378, 263, 273, 98, 23, 51, -92, -921, -1, -2, -4, -3, 5, 4, 7, 3, 8, 9, 10, 0, 2, 213, 68, 680, 1000, -1000, 991, 999, 100, 15, -16, -777, -666, -555, -896, 102, 108, 78, 96, 45, 56, 67, 32, 128, 125, 250, 500, -500, -432, 460};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> a = {1, 2, 3, -1};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> a = {3, 1, 4, 2, 5};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> a = {1, 10, 7, 4, 8, 3, 9, 2, 6, 5};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> a = {-981, -998, -983, -964, -961, -994, -956, -979, -953, -999, -960, -996, -955, -965, -974, -991, -975, -952, -997, -987, -970, -980, -959, -976, -967, -985, -968, -995, -972, -993, -982, -988, -969, -963, -1000, -977, -957, 1000, -958, -978, -990, -962, -954, -986, -992, -966, -971, -989, -984, -973};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> a = {41, 467, 334, 500, 169, 724, 478, 358, 962, 464, 705, 145, 281, 827, 961, 491, 995, 942, 436, 391, 604, 902, 153, 292, 382, 421, 716, 718, 895, 447, 726, 771, 538, 869, 912, 667, 299, 35, 894, 703, 811, 322, 333, 673, 664, 141, 711, 253, 868, 547};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> a = {123, 23, 1000, 222, 4, 28, -23, 7, 8, 2, 3, 11, 12, 0, 10, 333, 444, -120, -22, 13, 17, 293, 5, 6, 9, 54, 234, 546, 981, 111, 876, -111, -222, -333, -444, -233};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> a = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 1, 2, 3, 5, 4};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> a = {1, 50, 2, 49, 3, 48, 4, 47, 5, 46, 6, 45, 7, 44, 8, 43, 9, 42, 10, 41, 11, 40, 12, 39, 13, 38, 14, 37, 15, 36, 16, 35, 17, 34, 18, 33, 19, 32, 20, 31, 21, 30, 22, 29, 23, 28, 24, 27, 25, 26};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> a = {-939, -925, -870, -844, -832, -805, -783, -739, -710, -686, -629, -625, -562, -538, -534, -472, -482, -412, -395, -394, -369, -294, -283, -262, -203, -218, -181, -128, -100, -90, -42, -6, 37, 25, 62, 80, 145, 179, 185, 244, 255, 307, 301, 323, 389, 422, 419, 489, 505, 503};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> a = {19, 11, 10, 9, -6, -4, -5, 13, 20, 21, 22, 23, 25, -26, 3, -1, 2, 5, 0, 7, -3, 12, -7};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> a = {1, -10, -1, -8, 567, 78, 34, 4, 56, 231};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> a = {1000};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
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
    vector<int> a = {1, -10, -1, -8, 4, -34, 34, 67, -455, 452, -467, 578, -71, -5, 65, 56, 135, -456, -678, 12, -413, 45, 666, 133, -547, 321, -4, 124, -999, 107, 458, -618, 923, -80, -301, 581, 149, -471, 0, -912, 393, -710};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> a = {1, 2, 5, 4, 6, 3, 8, 0};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> a = {1, 7, 4, 5, 9, 2, 10, 23, 28, 60, 40};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> a = {2, 3, 4, 1};
    BifidSortMachine* pObj = new BifidSortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=9986&pm=6415
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
using namespace std; 
 
// LIB CODE 
#define ALL(v) (v).begin(),(v).end() 
#define SORT(v) sort(ALL(v)) 
typedef vector<int> VI; 
#define INFINT 1000000000 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define SZ(v) ((int)(v).size()) 
#define FORSZ(i,a,v) FOR(i,a,SZ(v)) 
#define REPSZ(i,v) FORSZ(i,0,v) 
// REAL CODE 
 
class BifidSortMachine { 
public: 
  int countMoves(vector <int> a) { 
    VI b=a; SORT(b); 
    int ret=INFINT; 
    REPSZ(i,b) FORSZ(j,i,b) { 
      bool ok=true; 
      int low=-10000; 
      REPSZ(k,a) { 
        if(a[k]<b[i]||a[k]>b[j]) continue; 
        if(a[k]<=low) ok=false; 
        low=a[k]; 
      } 
      if(ok) ret<?=i+SZ(a)-j-1; 
    } 
    return ret; 
     
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/