/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6224
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

class InsertionSortCount {
public:
    int countMoves(vector<int> A);
};

int InsertionSortCount::countMoves(vector<int> A) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {20, 40, 30, 10};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {-1, 1, 0};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
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
    vector<int> A = {-1000, 0, 1000};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
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
    vector<int> A = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {-1000, 1000, 0};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {1000, -1000, 0};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {1000, 0, -1000};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {0, -1000, 1000};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {0, 1000, -1000};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {325};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {-1000};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {234, 654, 747, 34, 37, -37, 43, 235, 5, 35, 674, -23, 6, 4, 454, 3, 53, 354, 23};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {-989, -986, -829, -821, -749, -716, -683, -606, -540, -520, -411, -410, -400, -385, -366, -357, -353, -310, -8, 0, 78, 104, 116, 118, 221, 224, 261, 301, 351, 434, 445, 453, 482, 486, 501, 509, 577, 585, 600, 630, 636, 654, 723, 786, 809, 867, 886, 938, 950, 966};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {952, 923, 828, 757, 695, 656, 588, 571, 557, 547, 333, 319, 305, 269, 245, 217, 156, 154, 152, 134, 133, 72, 71, 39, 23, -3, -40, -135, -166, -176, -218, -363, -389, -442, -466, -476, -488, -512, -518, -551, -582, -593, -620, -629, -659, -744, -749, -753, -822, -880};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {-861, -726, -571, -691, -725, -564, -527, -381, 672, 778, 348, 271, 279};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {-957, -956, -896, -122, -688, -626, -625, -419, -417, 38, -410, -389, -382, -357, -253, -186, -155, -818, -48, -19, -415, 902, 234, 244, 319, 498, 499, 607, 649, 822, 679, 678, 752, 664, 177};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {-210, 493, -402, -121, 474, -340, 617};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {-984, -980, -916, -892, -813, 9, -709, -693, -656, -615, -539, -481, -453, -381, -312, -280, -274, -258, -139, -133, 870, 371, -74, -33, -18, -781, 123, 275, 308, -80, 481, 549, 758, -114, 933, 954};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {-937, -912, -818, -629, -618, -589, -406, -330, -221, -183, 184, -107, -34, -19, 19, 33, -143, 220, 256, 321, 325, 336, 342, 354, 358, 395, 426, 466, 474, 479, 715, 764, 836, 936, 966, 967};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {17, -734, -619, -923, 671};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {-960, -763, -745, -704, -604, -491, -490, -396, -381, 817, -246, -177, -16, 12, 70, 90, 191, 232, 313, 322, 374, 506, 569, 590, 607, 632, 660, 678, 684, 716, 801, 802, -308, 849, 865, 913, 931, 990};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {-915, -845, -747, -640, -523, -505, -475, -402, -364, -342, -332, -308, -250, -242, -212, 77, 326, 962, 733, 754, 332, 1000};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {-898, -852, -843, -648, -497, -350, -212, 678, -171, -134, 758, -8, 124, 70, 71, 97, 17, 286, -204, 714, -120, 837, 842};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {-910, -847, -738, -386, -320, -316, -278, -15, -3, 57, 283, 390, 643, 971, 978};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
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
    vector<int> A = {967, 931, 918, 878, 874, 791, 781, 780, 773, 756, 743, 687, -972, 590, 495, 477, 467, 289, 200, 174, 123, 120, 677, 47, 73, -231, -293, -298, -305, -309, -366, -400, -512, -865, -713, -745, -844, -595, -966, -126};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 722;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {821, 716, 604, -640, 297, 278, 246, 237, 195, -13, -29, -38, -217, -738, 380, -659, -724, -541, -794, -822, -953, -959};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {644, -960};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {906, 892, 864, 835, 819, 753, 710, 573, -442, 419, 203, 394, 368, 331, 260, 413, 165, 64, -45, -48, -87, -130, -142, -174, -183, -197, -198, -244, -316, -379, -404, -453, -412, 461, -452, -408, -559, -570, -640, -662, -699, -705, -712, -747};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 883;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {973, 924, 896, 837, 803, 790, 743, 733, 700, 615, 586, 527, 521, 477, 475, 306, 297, 250, 222, 179, 131, 99, 68, 41, -44, -67, -158, -274, -277, -290, -322, -487, -528, -545, -546, -694, -816, -825, -847, -941, -963, -974};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 861;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {963, 945, 944, -577, 843, 779, 759, 725, 586, 480, 479, 472, 422, 391, 312, 165, 81, 60, 36, -157, -232, -352, 872, -602, -812};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {647, 591, 554, 434, -269, -456, -75, -102, -137, 206, -350, 127, -546, -653, -742, -796, -883};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {992, 969, 930, 894, 836, 835, -831, 797, 795, 832, 693, 649, 449, 98, 28, -77, -141, -142, -393, -510, -574, -663, -726, 792, -956};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {928, 927, 655, -87, 631, 473, 411, 193, 116, -14, -179, -165, 642, -303, -919, -931};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {954, 752, 595, 570, 264, 191, 0, -57, -159, -298, -511, -730, -762, -764, -799, -857, -942};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {937, -893, -888, -868, -865, -838, -801, -742, -690, -595, -478, -444, -422, -415, -331, -319, -289, -283, -263, -222, -209, -181, -165, -134, -116, -73, 3, 18, 19, 133, 170, 183, 207, 301, 334, 387, 437, 448, 482, 523, 642, 696, 707, 722, 753, 788, 791, 792, 806, 884};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {-909, -883, -855, -851, -843, -801, -751, -690, -674, -647, -602, -560, -481, -419, -399, -360, -351, -350, -344, -341, -258, -221, -216, -176, -103, -60, 49, 124, 154, 155, 161, 169, 212, 227, 313, 370, 437, 523, 527, 538, 566, 628, 760, 782, 797, 817, 823, 849, 941, -927};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {1000, -909, -887, -885, -728, -659, -635, -471, -454, -452, -428, -421, -399, -367, -362, -353, -315, -284, -243, -228, -224, -129, -123, -116, -27, -15, 13, 82, 161, 198, 286, 306, 309, 328, 340, 384, 403, 440, 471, 473, 576, 602, 605, 688, 715, 772, 855, 871, 947, -1000};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {139, 892, 639, -196, 551, 730, -751, 14, -965, -381, -634, -838, 492, 207, 192, -790, 952, -155, 664, 722, -815, -224, 196, 157, -51, 963, -932, -181, -302, -973, -282, -770, -60, -765, -395, -972, 926, -860, -688, 960, 40, 514, 406, 248, -654, -833, -341, -892, -776, 986};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 692;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {-830, -749, -35, 659, 592, -908, 511, 715, 837, 401, 862, -96, 180, -356, 820, -348, -630, -65, -603, 475, -363, 268, -519, 897, 430, 641, 719, 347, -756, -250, -721};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {806, 997, -605, -277, 652, 281, 661, 204, 133, -826, 872, -323, 92, -17, -629, 930, -842, 327, -265, 884, 214, -160, -558, 860, -159};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {-313, 768, -288, 691, 590, 144, -49, -373, 980, 16, 390, 289};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {-39, 132, 178, 323, -642, -922, -250, -316, 739, 681, -861, 186, 240, 489, 165, -842, 57, 500, 918, -867, 936, 828, 950, -352, 561, -390, 148, 955, -204, -374, -636, -118, 652, -820, -538, -682, 793};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 329;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {-489, 129, 419, -116, 494, 982, 66, -226, 292, -172, 698, 765, 381, 386, -587, 32, -315, -344, 708, 927, -965, -156, -595, 238, 537, -416, 836, 215, 72, -543, 719, -924, -244, -18, -472, 220, -649, 738, -443, 502, 790, 867, -523, 731, -471, 213, 112, -300, -292, -94};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 653;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {311, -782};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {-654, 47, -461, -594, 473, 113, 739, 557, 850, -550, -852, -227, -523, 791, -721, 493, 333, -607, -106, 278, -679, 918, -601, 652, 208, -888, 391, 579, -482, -216, 590, 818, 402, 209, -204, -217, 408, 351, -182, 620, -944, -969, 539, -300, 190, 274, -209, -54, -533, -614};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 631;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {872, 877, 825, -797, 821, -791, 180, -251, 156, -944, -356, -430, -992, 201, -619, -257, 943, 250, -990, -334, -183, -729, 896, 111, -223, 892, -80, -269, -807, 502, 494, -914, 260, -513, 81, -457, -60, 940, -870, 330, -925, -21, 620, 533, 534};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 479;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {-687, 448, -104, 825, -143, -397, 756, 307, 988, 546, 781, 957, -721, -589, 898, 361, -891, -871, -202, -256, -543, -3, -170, 532};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {-880, -401, -883, -170, 227, -759, 818, 542, 255, 1, -52, -780, -365, 188, -885, -337, 651, 229, 552, -728, 623, 621};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {-627, 618, 629, 853, -752, -184, -948, 430, 435, -228, 643, -882, -202, -863, 373, 504, -816, -675, -906, -352, 131, -99, 783, -918, 896, -370, 877, -639, -572, 803, 271, 417, 422, 723, -212, -876, -664, 179, 912, -700, -41, 197, -735, -424, 358, 132};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {-91, 372, 107, -330, 913, 465, -338, 316, 670, 403, -555, -227, 759, -499, 766, -665, 689};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {-993, 114, -323, -665, -672, -577, -133, -996, 194, -299, -431, 637, -253, -832, 973, 306, 647, 40, -999, -986, 606, -329, -987, -269, 419, 545, -803, -228, 720, -784, -155, -961, 693, -474, -432, -52, -597, -78, -318, 275};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {-52, 646, 299, -605, -2, 750, 885, -963, -615, -1000, -976, 551, 653, 968, 363, -167, -258, 27, 924, 289, 135, 462, 523, -524, 605, -197, 303, 39, -920, -552, -687, -4, 935, -955, -134, 201, 948, -957, 499, -689, -408};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 446;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {987, 125, 831, 117, -167, -67, 67, -98, -438, 262, 773, 507, -909, 554, -923, -830, -252, -144, 30, -284, 668, 489, -444, -622, 253, 921, 334, 687, -775, -251, -590, -138, -145, 890, -660, -95, 857, -270, 197, 25, 612, -986, 606, 563, -169, 319, 878, -73, -669, 201};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 621;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {-505, 865, 587, 86, -431, -120, 678, -387, 425, 898, 1000, -191, 937, -508, -261, 126, -736, -837, 239, 980, -187, 288, -426, 361, 866, 713, -755, -162, 374, 910};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 207;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {608, 753, -947, -100, -713, 531, -190, 224, 85, -361, -230, 669, -963, 923, -389, -740, 301, -189, -135, 368, 612, 433, -819, -480, 187, 561, 549, -31, -112, 575, -984, -951, -812, -447, 484, -927, -538, -33, 703, 23};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 415;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {693, -461, -675, 705, 39, 608, 820, -379, 440, 628, -245, -771, 519, 195, -507, -391, 173, 501, -856, 779, 186};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {12, -221, -143, -671, -177, -482, 835, -495, 21, 127, 618, -526, -326, -689, -521, -431, -621, -531, 437, 507, -75, 308, 323, -355, 368, -841, -941, -641, 287, 628, 723, -349, -583, -860, -421, 731, 211, -584, -509, 242, 787, 192, -901, -738, -965, 753};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 535;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {-671};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {952, -174, -93, -380, 759, -894, 543, -734, -913, -957, 279, -228, -186, 902, 366, -643, 213, -102, 243, -941, -612, -761};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {237, 552, 605, -616, -540, -58, -360, -839, -672, -274, -144, 537, 830, -814, -703, 554, 463, 879, -959, -423, -293, 479, 577, -507, 115, -206, -676, -917, 987, 307, 962, -6, -951, 66, 623, 442, -435, 356, 75, 545, -620, 746};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 391;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {238, 942, 906};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
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
    vector<int> A = {647, -692, -66, -532, 892, 300, -585, 54, -965, 297, 545};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {-444, 3, -358, 314, -578, -577, -453, 154, 817, 595, -594, 198, -570, 120, -506, -604, -744, -105, -887, -755, 115, -522, -819, 310, 790};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {-563, 968, 825, -445, -527, 258, -359, 528, 261};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {-203, 930, 908, 338, -794, -688, 570, -207, -475, -36, 700, -6, -29};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {606, 713, -449, 124, 193, 380, -53, 322, -332, -194, 771, 597, 333, 58, -59, -941, -426, -363, 39, 930, 488, -76, -324, -380, 111, -868, -719, 962, 359};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {-601, 713, 67, 476, -933, -499, 441, -263, -172, 195, -724, 793, 322, -813, 404, 584, 935, 771, -52, 612, 873, 606, -394, 746, -69, 46, -275, 454, -965, -544, 985, -811, -615, 738, -927, 10, -94, 678, 443, 528, -400, 689, 181, -989, -824, 823, -473, 555, 103, 342};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 617;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {-955, 412, 251, 315, -871, 307, 978, -648, -488, -163, -658, -281, 484, 349, 452, 434, 980, -264, -467, -296, -883, -708, -387};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {-567, 772, -124, -674, -213, -865, 962, 666, 11, -374, -916, -28, -944, 479, -507, 257, -818, -463};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {-83, 486, -369, -184, -257, 760, -365, 19, 140, 396, 901, -222, -410, -466, 599, 957, 514, -608, 226, 49, -70, -113, 671, -995, 120, 645, 866, -568, -610, -656, 317, -505, -750, -776};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {-795, 197, 343, 492, 943, 309, -815, -201};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {-898, -268, -294, 559, 456, 566, -303, 862, -301, 936, -8, 247, -871, -239, 837, -123, -823, 72, 207, 363, 860, 684, 666, -956, -117, -655, -197, 831, 757, 963, -763, 976, 416, -792, -158, 152, -617};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {150, -822, 368, -364, 214, 577, -550, -169, -864, 412, 830, 769, 751, 637, 818, 608, -17, -306, -615, -570, 86, 557, 27, -367, -693, 825, 408, 94, 21, 237, 148, 654, 319, -73};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 271;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> A = {-524, 672, 4, 282, -470, -961, 650, -192, 188, 158, 369, -381, -277, -486, 678, 49, -34, -553, 70, -660, 719, 417, 882, 253};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {-123, -945, -285, 606, -394, -196, 987, 53, -832, -132, 146, -654, 653, -920, 958, -641, 926, -816, -855, -969};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 107;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {-865};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {961, 112, 113, -468, 526, -962, 893, -256, 10, -655};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {20, 40, 30, 10};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {-5, -4, -2, 0, 6, 7};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
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
    vector<int> A = {-1000, 0, 1000, 99, -99};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {25, 10, 38, 1, 89, 6};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {20, 10};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
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
    vector<int> A = {90, 45, 70, 30, 15, 86, 34, 512, -1000, 433};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {-1, 1, 0, 4, 5, 6, 76, 12, 78, 89, 56, 45, 343, 232, 454, 565};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {3, 2, 1, 4};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
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
    vector<int> A = {2, 8, 9, 11, 5, 10};
    InsertionSortCount* pObj = new InsertionSortCount();
    clock_t start = clock();
    int result = pObj->countMoves(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16067947&rd=9822&pm=6224
********************************************************************************
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <iterator> 
#include <iostream> 
#include <functional> 
#include <sstream> 
#include <numeric> 
 
#define CLR( x , y ) ( memset( (x) , (y) , sizeof( (x) ) ) ) 
#define EPS 1e-9 
 
using namespace std; 
 
class InsertionSortCount 
{ 
  public: 
  int countMoves(vector <int> A) 
  { 
    int i,j,k,x=0,y=0,z=0; 
    int ret=0; 
    for(i=0;i<A.size();i++){ 
      for(j=i+1;j<A.size();j++){ 
        if(A[i]>A[j])ret++; 
      } 
    } 
     
     
    return ret; 
  } 
     
 
   
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/