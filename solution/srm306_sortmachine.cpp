/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6413
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

class SortMachine {
public:
    int countMoves(vector<int> a);
};

int SortMachine::countMoves(vector<int> a) {
    int ret;
    return ret;
}


int test0() {
    vector<int> a = {19, 7, 8, 25};
    SortMachine* pObj = new SortMachine();
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
    SortMachine* pObj = new SortMachine();
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
    SortMachine* pObj = new SortMachine();
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
    vector<int> a = {2, 1, 3, 4, 5, 6, 7, 8, 9};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {4, 5, 1, 6, 7, 2, 8, 9, 3, 10, 11};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {1, 3, 4, 5, 6, 7, 8, 9, 2};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {10, 11, 12, 1, 3, 4, 5, 6, 7, 8, 9, 2};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {-6, 5, 1, -8, 2};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {-2, -8, 9, 0};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {731, 87, 48, 660, 57, 784, -613, -680, -207, -454, 589, 67, 136};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {988, 54, -2, 128, 353, 429, 638, 123, -369, 127, 334, -543, 465, -177, 892, 386};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {377, -492, -739, -771, 313, 741, 382, -407, 105, 883, -352, 268};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {269, 214, -460, -438, 488, 665, 854, 887, -255, -688, -766, -879, -518, 374, 17, -49, 642, -837, -555, 880, 267, 200, -117, -495, 635, -659, -37, -332, -945, -632, -968, -612, 18, 678, 146, -725, 866, -748, 276, -892, -970, 157, -215, -717, 260, -314};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {106, 307, -682, -482, 877, -650, 705, 845, 787, -402, 988, -762, 795, 973, -409, -107, 623, -10, -300, -659, 644, 262, 878, 754, -279, 972, 18, -686, 703, 255, 341, -623, 163, -621, -987, 480, -632};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {-39, -198, 649, 663, -443, 907, 81};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {471, 252, -192, 888, 100, -727, -254, -870, 74, -904, 770, -650, 934, -180, 518, -892, -454, -721, -369, -612, -780, -832, 367, -643, 933, -50, -631, -315, 2, 800, 677, 853, -761, -875, 635, 964, 449, -281, -776, 960, 552, 472, -107, 28, 368};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {268, 431, -291, 446, -94, -576, 318, 327, -131, 853, -733, 136, 108, -823, -994, -577, 440, -439, 605, 937, -34, 384, 778, 173, 791, -136, -781, -353, -867, 618, 874, 171, 864, -705};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {-233, -87, 74, 416, -718, 468, -294, 712, -349, -752, -734, -69, 433, -939};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {711, 739, -956, 917, -566, -152, 194, 222, 12, 405, -290, -728, -998, 306, 974, 768, 250, -841, -827, 586, -511, 495, -626, -817, 960, 627, -164, -264, 70, 752, -883, -300, -694, -851, -786, -638, 880, -779, -610, 459, -861};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {-916, -470, 686, -399, 343, 372, 167, 703, 229, 216, -773, 610, 584, 368, 518, 91, 228, -313, -444, 690, 62, -147, 436, 570, 212, 700, 60, -720};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {-771, 392, -52, 930, -51, -789, 94, 695, -37, -772, -956, 691, 559, 226, -940, -728};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {460, 52, 149, 895, -217, 946, -41, 482, 260, -723, -153, 674, 892, 201, 565, 321, 619, 497, 159, 142, -743, 813, 860, 600, -554, -477, -63, 898, -868, -473};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {-43, 528};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {-889, -295, 581, -251, -195, -337};
    SortMachine* pObj = new SortMachine();
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
    vector<int> a = {195, 462, 545, 141, -225, 611, 454, 772, -714, 403, -641, -940, 436, -86, -401, -497, 211, -120, 964, 680, -466, -885, 894};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {-628, 789, 508, 140, -762, 39, 192, 714, 869, 755, 950, -66};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {-957, 531, -279, -179, 461, -482, -259, 249, 704, -530};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {258, 137, -338, -591, -793, -404, 636, 424, 238, 85, -394, 707, 506, 919, -150, -175, -313, -51, -540, -787, -56, -234, 902, 951, -603, -141, 986, -783, -510, 276, -738, -906};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {619, 98, -825, 184, 253, -168, -723, -640, 381, -866, -534, 998, 434, -182, 839, -34, -916, -515, -858, 316, -155, 285, -639};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {292, -76, 379, 996, -655, 11, 780, 752, 56, 333, -566, -333, 471, -494, -668, -430, -760, -662, -577, 159, -600, -212, 598, 938, -1, 429, 817, 535, 485, 264, -810, -970, 814, -269, -364, 798};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {157, 115, 400, 623, 234, -455, 421, -178, -378, -164, 906, 73, -624, -967, 742, 551, 995, 581, 397, -560, -151, 687, -476};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {114, -205, -753, -852, -190, 611, 911, -195, -944, -895, 403, -603, -393, 86, -98, -628, -516, 679, 457, 945, -632, -185, -90, -976, 399, -1, -871, 176, -228, 279};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {488, -796, 788, -607, -797, -227, 648, 279, -118, -425, 520, -935, 555, -480, -277, 6, -229, 980, 634, 139, -239, -390, 958, -414, -930, -994, 18, -553, -743, -783, -352, 823, -708, 828, 372, -851, 898, -580, -202, 263, 80};
    SortMachine* pObj = new SortMachine();
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
    vector<int> a = {710, 24, 650, 487, -7, -269, -884, -337, -111, -174, 170, 618, -559, 355, 377, 677, -756, -718, -945, 670, -893, -75, -866, 60, -757};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {653, 368, -695, 727, 350, -480, -182, 956, 840, -618, 522, 435, -615, 14, -163, -946, 942, -121, 498, -502, 384, -265, 545, 822, -338, 92};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {336, 596, 170, -971};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {429, -990, -565, 873, 736, 898, -464, 355, -686, 104, 157, 263, -254, 972, 249, 546, 743, 990, -853, -732, 693, -716, 692, -166, 741, -468, 211, -353, -812, -306, 511, -975, -360, 697, 146, 32, 711};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {483, -426, -6, -353, -337, 37, -453, 758, -258, 971, 161, -934, 502, -499, -134, -111, 456, 859, 732, -919, 578, -505, -36, 96, -498, -288, 940, -112, 881, 76, -444, 239, 661, -621, 990, -526, -583, 311, -469, -15, 489, -483, 448};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {-394, -646, -989, 959, 620, 631, -254, -819, -922, 919, 302};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {-827, 292, -3, -225, 982, 680, -126, -258, 447, -461, 8, 952, 454, -311, -848, -841, -217, 160, -24, 15, 255, 502, -907, 943, 907, 500, 914, 289, -533, 719, 302, -2, -634, -518, 934, -585, 562, -246, -531, 654, -915, -845, -275, -345, -365, 735, -975};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {976, -946, -824, 680, -644, -95, 128, -892, 816, -263, -592, -669, 887, 447, -653, -759, 572, 171, 635, 98, -904, 78, 143, -416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {44, 286, -49, -246, -378, 403, 511, 299, 18, 868, 938, 824, -403, 416, -697, -157, -652, -72, -132, 512, -290, 74, -707, -948, -812, 426, 806, 757, 118, 884, 292, -765, 363, 855, -460};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {-875, 489, 452, 897, 199, -428, 809, 752, -395, -272, -618, 172, -483, 276, -380, -79, -602, -43, 679, 471, -960, 245, 605, 25, -771, 325, -98, -742, -20, 876, 640, -597, 908, -831, -836, -871, -54, -925, -939, -560, -662, 773, -393, -247, 202, 833};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {307, -452, -97, -811, -831, -420, 669, -990, -64, 40, 840, -380, -206, -183, 282, -888, -748, -30, -121, 140, -717, 208, 631, 950, -248, 997, -407, -773, -267, 994, -896, -942, 504, 377, -331, -676, -552, 750};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {295, 916, -419, 716, -139, 140, -735, 299, -625, 120, -596, -969, 259, -506, 956, -844, -937, 875, 607, 182, 448, -988, 793, -884, -82, 405, -318, -87, -90, -615, 260, -748, 224, 323, 868, 215, -467, 88, -331, -561};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {-340, 659, 183, 935, 517, 902};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {158, 497, -55, -581, 228, -193, 710, 704, -963, 750, 830, 466, -425, -15, 834, -478, -737, -754, -499, 231, 885, 344, -135, 424, -139, -646, -832};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {318, -657, 375, -622, 959, -196, -207, 456, -506, -128, -888, 991, -350, -591, -895, -486, -847, 146, -414, -405, 874, 414, -158, 166, 478, 269, 599, -238, 334, 383, -360, -464, -41, -826, 568, -495, -855, 778, -963, 433, -260, -391};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {833, -554, 23, -967, -114};
    SortMachine* pObj = new SortMachine();
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
    vector<int> a = {-990, -950, -939, -931, -916, -892, -825, -787, -652, -649, -607, -552, -544, -543, -514, -388, -319, -304, -233, -176, -158, -89, -55, 5, 24, 57, 58, 75, 175, 177, 187, 205, 240, 260, 276, 312, 484, 499, 594, 612, 618, 680, 715, 750, 822, 930, 933, 985, 990, 999};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {934, 917, 847, 819, 805, 804, 720, 664, 620, 592, 562, 498, 475, 462, 393, 340, 319, 305, 251, 237, 226, 216, 202, 118, 78, 65, 16, -22, -43, -96, -113, -119, -264, -267, -298, -340, -341, -495, -593, -643, -650, -693, -706, -716, -731, -805, -815, -938, -952, -994};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {982, -993, -872, -855, -840, -798, -743, -728, -686, -667, -642, -637, -629, -562, -446, -379, -375, -368, -363, -320, -284, -272, -192, -136, -111, -100, -95, -89, -49, 5, 27, 43, 64, 286, 398, 536, 546, 568, 634, 758, 763, 785, 796, 812, 897, 898, 925, 961, 964, -1000};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {-745, -706, 269, -279, 990, -734, 690, 473, -278, -546, 970, 586, -499, -994, -580, 588, -157, 349, -228, 435, 950, -806, 385, 359, -939, -597, -576, 153, 274, -714, 809, 759, 78, 891, 755, -915, 170, 134, 87, -878, 250, -134, -301, -96, 115, -548, -865, 651, 788, 218};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {-223, -499, -550, -486, 421, -609, -36, -985, 345, -948, -63, 713, -992, -838, -193, 613, -882, 968, -428, 933, -237, 125, 49, 765, 215, -615, -880};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {-510, 788, -434, -629, -653, -725, -997, 436, -258, 776, -968, 476, 397, 541, -75, 91, 681, 823, -999, 591, 576, -851, -802, -783, 559, 721, -543, -68, 157, 729, 122, -52, 539, -460, -506, -298, -706, 871, 780, -299, 133};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {-102, 254, 898};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {391, -273, 637, 134, -707, -461, -539, -706, 862, 448, 889, -743, -39, 43, -274, -678, 935, -711, -620, 496, 164, -892, 257, 314, -422, 368, -332, -198, -408, -358, 376, 500, -843, 259};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {437, -605, 216, 22, 747, -626, 918, 219, 455, -307, 967, -218, -711, -520, 668, 823, -49, 870, 287, -772, -132, 324, -601, 521, -640, -473};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {67, 271, -453, 138, 402, 969, 2, -265, 884, 842, 212, -458, -543, 839, -798, 499, -80, -821, -269};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {-923, 253, 445, -308, 892, 446, -960, -304, 521, -793, -669, 460, -776, -297, 831, 791, -376, -735, -624, 301, 203, 2, -900, -195, -425, -221, -714, 135, 714, -38, 665, -218, 5, 672, -350, -722, -639, 299, -92, 731, 17, -528, 600};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {441, -382, -743, -65, -29, -774, -453, -922, -813, 969, -619, 755, -565, 482};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {311, 129, 102, -18, -152, -558, -874, -709};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {315, 312, 698, 30, -702, 156, 420, -319, -467, -481, 306, -457, -581, 313, -205, 912, -720, -326, 977, 443, 77, -161, 794, 670, -957, -218, 332, -736, 292, -33, -782, -327, 803};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {356, -824};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {67, 758, -693, 333, -59, -583, -368, 841, -589, -643, -967, -579, -876, 910, 967, 500, -873, 490, -67, 257, 461, 882, 730, -859, 255, 229, -187, 736};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {-968, -567, -621};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {308, -106, -939, -179, -420, 906, -192, 801, 589, -436, -38, 378, 622, 110, -798, -113, -214, -320, 633, 313, 548, 298, 572, -654, -506, 885, -94, -356};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {250, -225, 251, 142, 264, -837, 847, 196, 587, 568};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {589, -145, 718, -174, 652, 619, 422, 699, -397, -147, -288, 365, 478, -268, 425, -903, 75, 420, 731, -772, 317, -532, -17, -614, 801, 613, -599, -738, -6, 442, -68, 626, 314, -487, 780, 970, 653, 510, -81, -727, -308, -908};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {575, -43, -159, -289, -211, 346, 290, -256, 678, 760, 70, -477, 62, -462, -216};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {-328, -37, -593, 650, -738, 524, -807, -855, 304, 867, -466, -620, -799, -291, 539, 814, -251, 493, 781, -9, -901, -908, -868, 480, -158, 233, -590, 141, 206, 463, 259, -747, 221, 145, 816, -15, -503, -198, 126, 230, 704, 310, -299, 353};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {869, 424, 471, -262, 402, 767, 526, -656, 345, -264, 705, 25, -714, -431, 920, -602, -318, 60, -436, -801, -449, 905};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {-605, -662, 43, -793, 842, 529, 697, -846, -328, -131, 280, 13, -466};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {10, -476, -122, -125, 566, 481, -368, -346, 517, 323, 810, 32, -801, 447, -387, 571, -150, 376, 72, -48, -40, -66, -683, 375, -147};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {687, 686, -984, 619, -909, 811, 755, -428, -961, -243, 928, -155, 395, -952, -734, -358, -185, -87, -167};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {722, 346, -297, -926, -873, -615, 240, -11, 422, -919, -938, 31, 901, -434, 141, -630, 476, 621, 743, 641, 325, -753, 573, -511, -894, -968, 710, -942, 894, -153, -891, 730, -39, 257, -319};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {-901, 677, 546, 211, -911, -698};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {-874, 847, -478, 786, 814, 861, 656, -695, 983, 168, 284, -979, -253, 676, -142, 398, 647, -483, 451, 226, -484, -168, 859, 715, 866, 102, -586, -624, -661, 762, -213, -793, 267, 758, -592, -680, 336, -830, -540};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {378, -564, -100, -727, -243, 178, -212, -482, 314, -642, 326, 423, -58, 171, 611, 525, -248, -164, 342, 224, 655, 954, 603, -743, 646, 622, 775, -405, 569, 816, -40, 297, -262, 991, -930, 772, 739, 105, 161, -583, 26, 8, 485, -850, 707, -352, -434};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {-932, 767, 223, 505, 697, 381, 458, 335, -836, 540, -817, 757, -400, -747, 422, -77, -652, 488, 878, -342, -724, -806, 234, -573, 764, -313, -769, -160, 760, -580, 380, -291, 307, -799, 582, -823, 300, 653, 167, 111};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {-829, -669, 468, 545, -456, 558, 366, 540, 942, -922, -371, -949, -221, 937, -265, -927, -720, -24, 515, 404, 500, -326, -548, 494, -84, 180, -20, 266};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {-274, 581, 733, 60, -871, 1, 869, -734, -702, 8, 770, -298, 553, -268, 870, -76, -209, 432, 913, 364, 798, 889, -502, 343};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {1, 3, 4, 5, 6, 7, 8, 9, 2};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {-2, -8, 9, 0};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {976, -946, -824, 680, -644, -95, 128, -892, 816, -263, -592, -669, 887, 447, -653, -759, 572, 171, 635, 98, -904, 78, 143, -416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {5, 1, 2, 3, 4};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {5};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {976, -946, -824, 680, -644, -95, 128, 129, 816, -263, -592, -669, 887, 447, -653, -759, 572, 171, 635, 98, -904, 78, 143, -416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {180, 20, -270, 480, -110, 100, -10, -330, 260, -130, -30, -170, 360, -430, -450, -150, 380, -490, 460, -350, 160, 440, -230, -290, -410, 60, -210, -50, 400, -90, -370, 120, 340, 200, -310, -190, 240, 220, -470, 320, 300, -250, 140, 0, -70, 280, -390, 420, 80, 40};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {-2, -1, -10, 5};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> a = {10, 2, 4, 7, -11, -101, 9, 8, 6, 999, 998, 997, -999, -998, -997, 123, 124, 125, -123, -122, -111};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> a = {976, -946, -824, 680, -644, -95, 128, -892, 816, -263, -592, -669, 887, 447, -653, -759, 572, 171, 635, 98, -904, 78, 143, -416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783, 53};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> a = {4, 7, 1, 2, 3, 5};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> a = {-2, -8, 9, 0, 443, -33, 67, 22};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> a = {1, 2, 3, 4, 5};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> a = {976, -94, -82, 68, -644, -95, 128, -892, 216, 263, -592, -669, 887, 447, -653, 759, 57, 171, 635, 98, -904, 78, 14, 416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> a = {976, -94, -2, 68, -644, -95, 128, -892, 216, 263, -592, -669, 887, 447, -653, 759, 57, 171, 635, 98, -904, 78, 14, 416, -40, -846, 784, -702, -738, -858, 582, 603, -535, 529, 84, -964, 934, 36, 783, 123, 432, 0, -11, -21};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> a = {1, 50, 2, 49, 3, 48, 4, 47, 5, 46, 6, 45, 7, 44, 8, 43, 9, 42, 10, 41};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> a = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> a = {-1, 2, 3, 4, 5, -5, -6, -3, -2, 100, 101, 99, -1000, -999};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> a = {1, 2, 6, 9, 3, 4, 5};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> a = {15, 4, 88, 6, 999, 65, 33};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> a = {7, 8, 9, 2};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> a = {1, 2, 40, 30, 50};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> a = {2, 4, 56, 54, 53, 3, 57, 58, 59, 1, 21, 22, 23, 20, 100};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> a = {2, 4, 3, 1};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> a = {1, 4, 5, 6, 7, 8, 3, 2, 9};
    SortMachine* pObj = new SortMachine();
    clock_t start = clock();
    int result = pObj->countMoves(a);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22269126&rd=9986&pm=6413
********************************************************************************
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <map>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
#define FU(i,a,b) for (i=a; i<=b; i++)
#define FD(i,a,b) for (i=a; i>=b; i--)
#define FVU(i,a)  for (i=0; i<a.size(); i++)
#define FVD(i,a) for (i=a.size()-1; i>=0; i--)
#define SZ(a) a.size()
#define NP(a,b) next_permutation(a,b)
#define NUL(i,a) for (i=0; i<a,size(); i++) a[i]=0;
string str(long i)
{
  char a[100];
  sprintf(a,"%ld",i);
  return a;
}
 
 
 
class SortMachine {
  public:
  int countMoves(vector <int> a) {
    vector <int> b;
    b=a;
    sort(b.begin(),b.end());
    long i,j,q,w,e,r,n=a.size()-1;
    q=-1;
    FU(i,0,n)
    if (a[i]==b[q+1])
    {
      q++;
      if (q==n) break;
    }
    return n-q;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/