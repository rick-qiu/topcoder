/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11580
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

class LongestSequence {
public:
    int maxLength(vector<int> C);
};

int LongestSequence::maxLength(vector<int> C) {
    int ret;
    return ret;
}


int test0() {
    vector<int> C = {-2, 3};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
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
    vector<int> C = {524};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> C = {1, -1};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
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
    vector<int> C = {11, -7};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> C = {-227, 690, 590, -524};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 713;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> C = {514, -514};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 513;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> C = {524, -524};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 523;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> C = {1};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> C = {-1};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> C = {1, 2, 3, -1, -2, -3};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> C = {1000, -1000};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> C = {1000, -999};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1997;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> C = {999, -1000};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1997;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> C = {882, -731, 865, -734, -590, -61, 906, -200, -738, 479, 342, 761, 992, -254, -559, -190, 838, 758, -263, -785};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> C = {697, 643, 482, -706, 959, 233, -501, -23, 843, 769, -551, 700, 862, 935, 664, -291, -383, 375, -62, -150, 113, -332, 601, 630, 505, -578, -338, 809, -933, 162, -323, -604, -505, -452, -628, 324, -22, 416, 229, -174, 293};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> C = {-669, -46, 178, 995, -80, 874, 534, 348, -778, -621, -299, 784, 305, 749, 696, 475, 357, -180, 811, 697, 257, 884, 909, 757, 547, -613, -426, -65, -943, 730, 372, -393, -307, 473, 157, -601, 391};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> C = {431, -364, -244, 283, 889, 449, 457, 191, 476, -69, 241, 464, 675, 683, 832, -348, 218, 765, 412, -834};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> C = {-738, 663, 598, 979, -767, 164, 957, 927, 842, 217, 385, -121, -821, -754, -533, 144, 850, 953, -956};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> C = {-526, 565, -917, -316, -597, -585, 882, 174, 800, 779, 400, 82};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 375;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> C = {-749, 882, 216, -866, 716, -589, -699, -702, 682, -682, 421, 925, -415, -344, -121, -443, -103, -533, -581, 782, 919, -739, 854, 96, 803, 753, 669, -358};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> C = {-282, 203, 700, 698, 274, 912, -285, 859, -724, -828, 888, -541, -621, -797, -397, -732, 641, -719, -936, 209, 548, -808, -914, 832, 333, 307, 90, 164, 622, -313, -562, -184, -834};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> C = {-565, 75, 516, -208, 732, 462, -265, -935, -756, 599, 336, -503, -668, -871, -939, 476, 100, -725, -278, 914, -635, 757};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> C = {-886, 108, 907, 266, 100, 111, -523, 528, 103, 726, 346, -297, 370, 258, 158, 617, -231, 847, 524, -599, 596, -589, -294, 454, 592, 249, 87, 632, 752, -818, -821, 261};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> C = {-611, -836, 483, -148, 258, -894, 290, -740, -276, -958, -809, 103, 569, 621, -991};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> C = {-342, -471, 205, 337, -511, -168, 503, -607, 301, 944, -951, 190, -859, 162, -121, -891, 939, -930, -207, 110, 813, 789, -778, -130, 235, -786, -753, 682, -303, -960, -488, -727, -523, 172, 880, 223, 650, -686, 225, -879, -760, -449, -351, 911, -232, -345, -872, -164, -518};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> C = {258};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> C = {-196, -834, 561, 207, -266, -699, -802, 499, -817, 688, -480, -778, -238, -274, 896, -770, 694, 951, -377, -742, 974, -606, 423, -421, -978, -545, -736, -892, -783, -367, -670};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 247;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> C = {499, -795, 133, -261, 778, -930, 484, 574, -191, 145, -927, 494, -739, 980, 681, -512, 366, 948, 444, 846, 334, -843, -951, 855, -652, -929, -389, -669, -203, -288, -563, -530};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> C = {-470, -567, -888, -237, 845, -443, -537, 321, -230, 517, -276, -1000, 561, -684, -945, -638, 425, 880, -469, -318, 705, -353, -319, -668, 658, -942, 692, 858, 662, 861, -212, 874, 331, 367, -438, -823, -378, 307, 571, 216, -464, 653, -701, 507, 141, 598};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> C = {632, 709, -779, 672, 546, -710, -701, -149, -475, 472, -968, 808, 760, 488, 568, 685, 828, 548, 255, 306, -271, -829, 395};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> C = {419, -498, 537};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 614;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> C = {-948, 877, -424, -509, 328, 854, 231, 613, 528, 657, -606, 185, 347, -596, -240, 745, -833, -860, 258, -520, 768, -539, -891, -478, 654, -360, 296, 928, -903, -613, 281, -781, -359, 803, -913, 335, -682, 404, -826, -257, 968};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 257;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> C = {-172, -503, 774, -544, 444, 833, -924, 722, -298, 485, -494, -357, 885, -454, 418, 448, -929, 190, 773, -586, -887};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> C = {-647, -359, 659, -492, -871, 331, -690, -358, -406, -745, 932, -261, 728, -853, 220, -293, 453, -402, -579, 245, -275, -455, -700, 574, -427, -347, -262, -442, -800, -893, 918, 224, 486, -751, -568, -844, -914, 651, -483, 746, -901, -676, 361, 770, -198, -194};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> C = {365, 867, -356, -842, 826, 372, -292, 933, -297, 745, -808, 269, 250, 588, -638, -570, 978, 353, -404, -973, 950, -810, -364, 774, 650, -210, 820, 370, -707, 549};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> C = {975, 691, 445, 849, -926, -478, -839, -634, 377, 649, -598, 942, -590, -378, 712, -278, -551, -956, 721, 474, -390, 400, -900, 989, 973, -907, -795, -666, 836, 651, 698, 730, 624, 719, 499, 341, -758, -743, -921, -219, -730, -864};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> C = {474, 719, 815, 675, -635, 981, -305, 212, -427, 896, 630, -518, 514, 725, -345, 926, -303, 243, 960, -799, -844, -506, -446, -322, -931, -798, -666, 385, -504, -398, 409, 455, 772, -365, 677, -959, -738, 750, -233, -958, 785};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 262;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> C = {-390, 725, -405, 372, -582, -744, 317, 386, 286, 332, -462, 898, 612, -502, 234, 743, -858, -707, -218, -692, -726, -845, 589, 382};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 393;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> C = {-376};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> C = {479, 601, 533, -651, 421, 631, 765, -444, -259, -261, 815, -758, -422, -500, -416, -410, 532, -700, -552, -650, 973, -740, 807, 818, -492, -731, 894, -879, -964, -612, -483, 835, 426, 858, 952, -493, -282};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 425;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> C = {530, -291, 380, 436, -661};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 613;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> C = {953, 357, 890, -663, -455, 536, -794, -852, 253, -482, 614, 292, 317, 795, 576, -640, 927, 347, 324, 745, 690, 321, -999, -275, 564, 872};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> C = {845, 756, -783, -975, -377, -333, 612, -310, 684, 458, 954, -801, -915, 262, -336, -796, -613, -902, -669, -698, 305, -939, -764, 762, 896, -521, -394, 976, -386};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 457;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> C = {693, 367, 940, 468, -923, -496, 915, 824, 609, -327, 617, -647, 755, 583, -988, -950, -413, 905, 805, -698};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> C = {444, 846, -729, -465, -290};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 606;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> C = {364, 862, 911, 411, 512, -785, -373, -607, 731, -797, 971, 764, -467, 660, 684, 431, -899, -923, -819, 484, 692, -960, 851, 581};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> C = {746, -948, 696, -951, 492, -542, 683, -303, -497, -315};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 669;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> C = {628, -847, -869, 912, -954, 532, -781, 333, 488, -926, 351, -751, 796, 356, -968, 791, 753, -524, -408, -646, -584};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> C = {570, 858, -875, 363, -680, 620, -641, 982, -514, 530, -460, 726, -481, -396, 924, 707, -972, -758, 560, -881, 609, -478, 864, -669, 571, -486, -368, 820, -871, 596};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 529;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> C = {461, -443, -672, 535, 354, 785, 854, 650, 905, -673, -471, -386, -400, 568, -727, -978, -614, 497, 891, 397, 706, 463, -492, 389, -410, 546, 413};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> C = {-809, -621, -425, -439, -664, -713, -715, -768, -457, 584, 639, 619, -619, -603, -480, 989, 562, 380, -462, -368, 621};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 433;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> C = {802, -379, -390, -962, -684, -358, 581, -383, 477, -359, 519, -464, 628, -690};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 683;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> C = {-984, -779, 546, -472, -783, -657, 436, 640, -522, -970, 468, 850, 682, -669, -764, -733, 779, 796, 923, 441, 515, 898, 685, -533, 723, 895, -592, -486, -660, 812, -386, 869, -544, 929, 775, 991, -428, 500, 873, -770, 618};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 473;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> C = {521, -774, 523, -779, -885, -736, -378, -754};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 807;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> C = {633, -513, -888, 736, -763, 721, 416, -560, 472, 692, 948, 835, -697, -822, 826, -987, 984, -835, 454, 700, -517, -570, -690, -485, 510, 636, 917};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 521;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> C = {412, -561, 907, -657, 934, -762, 378, 748, -822, 781, -739, 832, -579, -910, 746, 430, -859, 973, -881, -951, -947, 414, -804, 766, -864, -611, 654, -695};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 697;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> C = {-718, -902, 567, 996, 989, -847, -469, -651, -442, 781, -925, -408, 775, -749, 767, 650, 523, 576, -540, 676, -484, 885, -627, -845, -950, 487, 854, -923, -787, -663};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 541;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> C = {-727, -755, 489, -455, 833, -650, -997, -800, 839, -805, -651, -907, 978, -486, -735, 571, -510, 894, -464, 914, -849, -905, 980, 416, -600, 943, -519, -587, 902, 606, -977, -434};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 490;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> C = {-634, -886, -877, 659, 518, 496, -736, -690, 570, 647, -806, 696, -507, 825};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 517;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> C = {-480, -414, 849, 994, 881, 718, -795, -932, -955, -696, 876, 654, -623, 711, -627, 723, 573, 981, -701, -560, 772, 961, 712, 566, 623, 761, -634, -999, 727, 426, 713, -739};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 485;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> C = {-639, -631, -439, 580, -454, 425, 530, 506, -958, -429, 976, -711, -987, 1000, -790, 689, -956, 768, 503, 601, -462, -791, 789, 861, -696, -637, -642, 688, 775, 609, -896, 501, -663, -860, -568, 599, 812, -571, -627, 762};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> C = {661, 977, 797, 814, 606, 545, 578, 514, 902, -654, 477, 700, 694, 500, -688, -803, 536, -934, -977, 887, -463, 941, 505, 774, -435, -944, -541, -741, 775, 489, -449, 839, 871, -684, -520, -924, 789, 975, -574, -743, 692, 983, 859, 867, -592, 819, -918};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> C = {-776, 957, -547, -938, -736, 505, -925, -491, -490, 897, 700, -567, 601, -494, 515, 468, 829, -775, -920, -561, 760, 550, 507, -798, 961, -700, 979, -873, -849, 613, -813, -513, 854, -997, 949};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 515;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> C = {976, -464, 852, 863, -721, -583, 918, -486, 456, -924, -638, -521, 886, -844, -896, 683, -976, -535, 470, 451, -884, 665, 567, -717, -466, -762, 645, -837, 576, -709, 677, -530, -476, -848, 1000, 809, 476, -876, 866, 846, -697, -950, -773, -769, -561, -983, 730};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 473;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> C = {-459, -666, 589, 701, -996, -773, -649, -689, -575, 903, 909, 613, -677, 637, -753, -679, 650, -751, 912, -886, 927, -942};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 652;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> C = {490, 933, 681, 658, -977, -632, -625, 563, -982, 701, 837, -532, 999, 959, -525, 561, -948, 536, 719, -704, -546, -504, 692, 724, 488, -604, -587, -981, 897, 757, -799, 887, -792, -772, -937, 743, 925, -533, 996, -779, -862, 834, 685, 791, -766, 478, -701};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 535;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> C = {538, 512, -726, 702, 686, 547};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1025;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> C = {836, -909, 718, 687, 808, -987, -839, -961, 512, -503, 492, 924, 940, -860, -486, 724, -513, -985, 546, -854, 682, 587, 773, 879, -700, 562, -602, 688, 672, -742, 777, -641, -856, 525, 488, 884, 533, 548, 938, 516, -786, -779, -883, 790, -866, -509, -721, -487, 746, -637};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 502;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> C = {854, -562, 986, 678, 575, -619, -777, 693, -903, -609, -510, 611, -872, -694, -529, 690, -881, 580, -944, 923, -628, -866, -869, -786, 748, 504, 617, -688, -877, 734, -665, 532, -681, 855, -704, -616, 560, 779, -859};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 534;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> C = {-839, -764, -771, -582, 778, -693, 611, 707, 708, -606, -967, -588, 911, 845, 726, -573, 604, -937, 681, 653, -631, 860, -928, 622, -644, 811, 863, -695, -534, -812, 878, 976, 589, 539};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 576;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> C = {-844, -999, -939, 897, 589, 858, -848, -680, 750, 682, 678, 856, 916, -962, -716, -774, 955, 568, 699, 730, 524, -862, 865, -898, 587, -813, 820, -964, -988, 713, 563, 741, 554, -638, -986, 803, -617, 548, 571, 717, 752, 594, -858, 943};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 679;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> C = {-943, 688, -641, -820, 918, 552, -743, 983, 576, -802, 579, -990, -913, -586, 797, -595, 938, -821, 561, -671, -603, 808, -833, -825, 758, -807, 753, -858, -995, -601, -972, -906};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 687;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> C = {-936, 609, -966, 865, 825, 937, -804, -965, 886, -902, 781, -575, 879, 771, -749, 986, -959, 863, 985, -553, 531, 653, 752, -619, -558, -946, -779, -700, 989, 635, 576, -743, -652, -1000, 585, 738, 844, 626, 804, -973, 887, -917, 895, 597, 816, -536, -557, 889, -705, -624};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 575;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> C = {592, 603, -685, -957, -945, 856, 545, 703, -996, -655, -970, 944, -842, 711, 728, -684, -740, -734, -906, 995, 949, -712, 795, -939, 601, 685, -715, 804, 678, -899, -706, -979, -803, -729, -667, 874, -542, -563, -662, -695, 723};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 562;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> C = {-798, 705, 953, -836, -682, -922, 793, -806, 665, 904, -566, 704, -714, -855, 593, 576, -780, -910, -959, -740, 723, -702, 561, -878};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 575;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> C = {580, -935, -687, 821, 921, -643, 597, 828, 809, -601, -682, 950, 697, 767, -787, 901, -634, -954, -999, -620, -950, -710, 645, 982, 900, -979, 736, -872, -657, 956, 677, -560, 698, 803, 969, 628, -944, 558, 873, -806, -769, 992, 779, 594, -623, 772, -732, 775, 980};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> C = {-947, -744, 793, -923, 651, -674, 973, 624, 885, 699, 719, -655, -989, 980, -979, -928, -804, -737};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 698;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> C = {621, 971, 834, -901, 706, 976, -700, -697, -939, -831, -1000, 762, 985, 889, -789, -687, 715, -672, -817};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 724;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> C = {981, 977, 773, 733, -941, -730, -654, -791, 790, 617, -761, 993, -690, -922, -865, -697, -622, -889, -702, -599, 626, -996, -896, -971, -633, -881, 980, -999, -652};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 629;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> C = {-595, 685};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1274;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> C = {-745, -864, -630, -999, -767, -951, 876, 996, -778, -812, -845};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 951;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> C = {-735, 909, 819, 679, -648, 982, -729, 640, 660, -864, -764, -788, -809, -955, -661, -890, -922, 710, -860, -936, 900, 638, 682, 668, -632, -932, 987, 678, -996, -926, 822, -786, 924, 639, -983, 806};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 647;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> C = {-685, 639, -788, -994, -892, 747, -948, -768, -952, 732, 827, -921, 659, -733, -920, 860, 889, 667, -751, -862, -627, 959, -986, -882, -943, -934, 978, 853, 734, 949, 966};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 686;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> C = {957, -935, 926, -782, -996, 668, 859, 630, 783, 980, -938, -632, -774, -711, -976, -793, 635, -732, 907, 855, -821, -924, -913, 747, 814, 903, 961, -722, 884, 764, 650, 864, 759, -633, 862, -927, 906, 799, -835, 808, -878, -812, -707, -937, -640, -888, 763, -636, -769, 848};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 634;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> C = {929, -782, -722, -755, -888, 904, 909, 899, 650, 653, 640, 658, -918, 882, 787, 1000, 935, 863, 914, -906};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 790;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> C = {-764, 694, -775, -785, 934};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 941;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> C = {-681, 935, 921, -689, -920, 725, -732, 690, -870, -728, 686, 844};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 691;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> C = {-879, -674, 875, -756, 901, -919, 871, 948, -994, -871, 932, 994, 687, 981};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 767;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> C = {843, -965, -849, -903, 959, -963, 903, 754, 966, 889, 788, -881, 740, -898, -707, -840, 871, -986, -723, -709, -753, 761, -801, -711, 710, 755, 786, -776, -787, 687, -925, 730, -731, -683, 965, 683, 821, -990, -988, 995, -796, 943, -725, 751, -700, -730, 722};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> C = {734, 872, -859, -777, -948, 944, -927, -970, -783, 689, 690, -786, 766, 999, -770, 688, -879, -877};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 871;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> C = {-939, -699, -979, 761, 793, -799, 941, -880, 878, 892, 828, 907, 853, 755, 744, -1000, -941, 887, -999, -938, -916, 937, -876, 737};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 798;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> C = {-898, 828, -801, 988, 813, -845, 954, -948, -933, -971, -934, -755, 765, 846, 817, -816, -969, -902, -826, -952, -750, 874, 725, 831, 937, -853, 729, 751, 855, -983, 976};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 754;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> C = {-981, -913, 798, -953, 831, -961, -941, -817, -824, 979, -881, -865, 916, -993, 812, -842, 945, -970, -932, 1000, 797, -756, 898, 859, 907, 745, -741, -867, 718, 983, 711, -772, 748, 870, 933, 957, -806, -737, 791, 774, 938, -878, -944, 821, -822};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 755;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> C = {-918};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> C = {-731, -994, 982, 911, 915, 966, -808, -747, -999, 887, 916, 817, -996, 819, -941, -940, 886, -891, 812, 847, -914, 850, -760, 820, 919, -755, -843, -772, -855, -869, -936, 892, 834, 732, -874, -875, 865, 935, -796, 928, 920, 833, 843, 736, 735, 831};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 746;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> C = {804, 967, -982, 923, 968, -785, -921, -915, 748, -839, 946, 874, -836, 838, -750, -935, 977, 798, 750, -800, -971, -914, -788, -977, 965, 847, 975, 918, -741, 924};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 749;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> C = {765};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> C = {838, 917, -805, -998, -799, -791, 986, -789, -815, -856, -811, -871, -879, -865};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 864;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> C = {929, -995, 780, 891, 957, 765, -786, 925, 993, 814, 885, -907, -778, 766, 843, -982, 827, 817, -940, -770, 996, -948, -956, -900, -824, -920, 934, 768, -832, -852, -834, -927, -791, 799, -807, 976, 849, 836, 987, -771};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 779;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> C = {-783, -969, -853, -837, -951, -874, -995, -820};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> C = {-988, -804, 864, -976, 940, -848, -859, -881, 869, -813, -850, -889, -919, 810, -794, 997, 846, -854, 891, 990, 821, 805, -812, 910, -830, -905, 986, -959, -797, 957, 795, -982, 937, -946, -874, -849, 974, -930, 921, 875, 837, -873, -932};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 796;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> C = {-903, 997, 836};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1062;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> C = {-859, 985, -827, -979, -888, -913, 844, 974, 980, -898, -942, -833, 817, 975, -835, 874, 837, 934, -921, -876, -851, 846};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 836;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> C = {-962, 911, 948, 944, 847, 881, 968, -937, -893, -965, -959, -864, -925, -828, -870, 928, -867, 992, -818, 863, 828, 900, 936, -919, -991, 867, 904, -938, 918, -975, 878, 930, 849, 857, 851, -967, 873, -906};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 827;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> C = {-914, 851, -895, 995, -848, -999, 988, -942, 970, -830, -821, 906, 881, -903, -883, 959, -875, 839, 825, 993, -845};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 832;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> C = {948, 899, -988, -913, -949, -942, -910, -890, 911, -904, 965, -987, -895, 931, -855, -930, -944, 848, -959, -882, -923, 889};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 888;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> C = {941, -967, 845, 909, -979, -983, -856, 971, 993, 867, 915, -887, 988, -925, -858, 842, -1000, 976, 950, -884};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 866;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> C = {976, -890, -954, 920, -858, 990, -882, -906, -953, -916, -961, -987, -872};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 953;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> C = {930, -951, -891, -981, 874, -949, 918, -894, 950, -965, -905, -906, -868, -937, 970, -927, 877, 971, 955, 947, 999, 882, 935, 867, -963, -964, -888, -966, -971, 963, -995, 881, 914};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 873;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> C = {956, -992, 911, 916, 870, -932, -927, 993, -956, 965, 876, -886, 866, 973, 872, -935, 994, -978, -906, -974, -942};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 911;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> C = {-923, 899, 905, 990, -874, 910, -880, 880, 951, -970, -956, -904, 941, -886, 876, 944, 995, 918, -927, 939, 978, 928, -997};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 879;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> C = {-966, 944, 964, -906, 956, -926, -918, -967, 920, -922, 954, 935, 973, -901, 885, 985, -899, 988, 997, -919, 923, 908, -884, 977, -988, -914, -955, -983, 929, 970, 986, -885, -949, 897, 999, -941, -930, 946, -882, 933, 976, -913, 951, 887, 909, 910};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 884;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> C = {-947, -951, -983, -994, -913, 979, 931, 917, -907, -929, -984, 934, -957, 976, 986, 923, -901, -995, 937, 929, 903, 904, 994, 906, 905, 949, -900, 910, -938, 990, 894, 908, 959, 925, 953, 968, -971, -906, -997, -936, -898, 942, 952, 963, 919, 922, 992, -985};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 903;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> C = {1000, -999};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1997;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> C = {5, -5};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> C = {-227, 690, 590, -524};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 713;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> C = {1, -1000};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> C = {1, 2};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> C = {-1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 975, 974, 973, 972, 971, 970, 969, 968, 967, 966, 965, 964, 963, 962, 961, 960, 959};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1917;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> C = {3, -3};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> C = {-2, 3, 100, -100};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> C = {1000, -999};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1997;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> C = {2, 3, -1000};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> C = {2, 4, -4};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> C = {1, -3};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> C = {2, -1};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> C = {421, 326, 472, -869, 569, -91, 189, 149, -770, -507, 899, -563, -571, 838, 758, 166, -742, 353, -302, 226};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> C = {10, -10};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> C = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 500};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> C = {15, 31, 99, 817, -199, -999};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> C = {1, -2};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> C = {997, -991, 983, -977, 971, -967, 953, -947, 941, -937, 929, -919, -911, 907, -887, 883, -881, 877, -863, 859, -857, 853, -839, 829, -827, 823, -821, 811, 809, 797, -787, 773, -769, 761, -757, 751, -743, 739, -733, 727, -719, 709, -701, 691, -683, 677, -673, 661, -659, 23};
    LongestSequence* pObj = new LongestSequence();
    clock_t start = clock();
    int result = pObj->maxLength(C);
    clock_t end = clock();
    delete pObj;
    int expected = 672;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14549&pm=11580
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
 
class LongestSequence {
public:
  int maxLength(vector <int>);
};
 
const int N = 50010;
 
int ss[N*50], ff[N*50], x[N], deg[N], last[N], pred[N*50];
 
int LongestSequence::maxLength(vector <int> c) {
  int n = c.size(), i, j, ok = 0, e;
  for (i=0;i<n;i++)
    for (j=i+1;j<n;j++)
      if (c[i]*c[j] < 0) ok = 1;
  if (!ok) return -1;
  int ll = 0, rr = 50000;
  while (ll < rr) {
    int mid = (ll+rr+1) >> 1;
    int m = 0;
    for (i=0;i<n;i++)
      if (c[i] > 0) {
        for (j=0;j<=mid-c[i];j++) {
          m++;
          ss[m] = j;
          ff[m] = j+c[i];
        }
      } else {
        for (j=0;j<=mid+c[i];j++) {
          m++;
          ss[m] = j-c[i];
          ff[m] = j;
        }
      }
    for (i=0;i<=mid;i++) last[i] = 0;
    for (i=1;i<=m;i++) {
      pred[i] = last[ss[i]];
      last[ss[i]] = i;
    }
    for (i=0;i<=mid;i++) deg[i] = 0;
    for (i=1;i<=m;i++) deg[ff[i]]++;
    e = 0;
    for (i=0;i<=mid;i++)
      if (deg[i] == 0) {
        e++;
        x[e] = i;
      }
    i = 1;
    while (i <= e) {
      j = last[x[i]];
      while (j > 0) {
        deg[ff[j]]--;
        if (deg[ff[j]] == 0) {
          e++;
          x[e] = ff[j];
        }
        j = pred[j];
      }
      i++;
    }
    if (e == mid+1) ll = mid;
    else rr = mid-1;
  }
  return ll;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/