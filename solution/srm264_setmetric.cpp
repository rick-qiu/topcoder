/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4442
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

class SetMetric {
public:
    int nearness(vector<int> target, vector<int> candidate);
};

int SetMetric::nearness(vector<int> target, vector<int> candidate) {
    int ret;
    return ret;
}


int test0() {
    vector<int> target = {4, 9, 2, 1};
    vector<int> candidate = {9, 1, 2, 3, 5, 6};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> target = {0};
    vector<int> candidate = {1000, -1000, 0};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
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
    vector<int> target = {1000, -1000, 0, 5, 289, -40};
    vector<int> candidate = {30, 821, -777, -52, 91, 444, -134, 85};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 679;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> target = {572, 555};
    vector<int> candidate = {877, 173, -394};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 687;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> target = {291};
    vector<int> candidate = {-619, -303, 860};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 569;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> target = {436, -857, 757, 437};
    vector<int> candidate = {149, -981, -140, -476, -286};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2031;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> target = {-909, 462, 176, -974, -486, 867};
    vector<int> candidate = {-639, 102, -982, -255, -150, -383};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2189;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> target = {911};
    vector<int> candidate = {726, 521, 425, -806, 599, 985, -324, -71};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> target = {96, -53, 371, -855, 910, 310};
    vector<int> candidate = {-594, -465, -28, -193, 195, 370};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2016;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> target = {-90, -700, 918, 391, -586};
    vector<int> candidate = {-819, 205, -309, 254, -545, -12, -998, 285};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1008;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> target = {-675};
    vector<int> candidate = {327};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1002;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> target = {-883};
    vector<int> candidate = {810, 852, -147, -238};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 645;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> target = {-968, 471, 525, -334, -188};
    vector<int> candidate = {-315, -476, -471, 144, -554, -47};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1577;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> target = {-744};
    vector<int> candidate = {-601};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> target = {777, -352};
    vector<int> candidate = {812, 796, -115};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> target = {-31, 83, 420, -248, 896, -38, -976};
    vector<int> candidate = {436, -774, 970, 588, 100, 555, 616, -685, 649, -633};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1906;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> target = {620};
    vector<int> candidate = {-349, 748, -651, -55, -152};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> target = {-274};
    vector<int> candidate = {-758};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 484;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> target = {704, 36, -646};
    vector<int> candidate = {-677, 372, -989, 609};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> target = {878, 20, 214, 98, 226, -653, 958, 581, 312, 338};
    vector<int> candidate = {962, -14, 827, -281, 913, -119, -712, -341, -951, 789};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 3371;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> target = {-11};
    vector<int> candidate = {-33, -338, -833, 24};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> target = {-198};
    vector<int> candidate = {-539};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 341;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> target = {895};
    vector<int> candidate = {321};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 574;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> target = {-427, -942, 962, 441, -420, 792};
    vector<int> candidate = {909, 17, 836, 39, -652, 845};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1694;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> target = {-95};
    vector<int> candidate = {835};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> target = {818};
    vector<int> candidate = {-937, -340, -556, 677, 968};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> target = {5, 4, 7, 2, 8, 2, 9, 3, 4, 4};
    vector<int> candidate = {1, 5, 6, 8, 2, 4, 6, 9, 0, 0};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> target = {506, 180, 978, -135, 343};
    vector<int> candidate = {-182, -412, -987, 819, -827, -484, 460, -580, 531, -564, 761, 570, 38, 351, 664, 773, 854, -132};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> target = {-279, 530, -281, 408, -762, -372, 382, -832, 498, 26, 267};
    vector<int> candidate = {209, -14, -678, -427, -189, -884, -335, 671, -549, 840, -23, 157, 628, -834, 819, 828, -576, -500};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1290;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> target = {-471, -835, 614, 720, 347, 141, 465, -501, -706, 566, -113, -266, 464, -338, -943, 234};
    vector<int> candidate = {-655, -699, -49, 295, -688, 115, -83, -21, 88, 839, 842, 28, 513, -305, 99, 417, 18, -837, 282};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1987;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> target = {-167, -760, -702, 828, -317, 183, 517, -746, -948, -320, -757, 15, -101, -994, 139};
    vector<int> candidate = {-618, 356, -721, -836, 128, 429, 469, 453, 688, -709, 635, 236, 254, -342, 221};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 5053;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> target = {-698, -970, -400, -745, 695, 992, 501, 354};
    vector<int> candidate = {940, 224, 52, -975, -281, -964, 881, 469, 786, 509, 850, 39, 725, -924, -243};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 774;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> target = {127, -723, -61, 987, 91, 218, 518, -200, -348, -850, 365, 3, 820, -244, 412, 681};
    vector<int> candidate = {-564, 922, -208, -774, 308, -553, -713, 601, 735, 554, 546, 359, -626, -77, -859, 490};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2889;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> target = {787, 522, -680, -964, -831, -167, -892};
    vector<int> candidate = {-870, 626, -951, 767, 629, -281, 629, 151, 799, 157, -763, -59, 343, -68, -633, -805};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> target = {813, 272, 849, 551, 59, 281, -101, 207, -578, -328, -554, -115, -122, 796, -329, -537};
    vector<int> candidate = {-89, 305, -583, -635, -585, -896, 176, -228, 718, 250, -927, -272, 138, 675, 403, -598, -868, 866};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1755;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> target = {39, -208, 575, 82, -267, 233, -360, 51, -951, 436, 674, 593, 784, -478, 994, 889, 245, 469};
    vector<int> candidate = {-461, 53, -113, -375, 391, -495, -616, -309, -317, -854, 657, -75, 719, -92, -190, 894, -482, -18, 744};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 4317;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> target = {633, 270, -492, -865, -133, -39, -131, -48, 433, -314, -67, 309, 654};
    vector<int> candidate = {-184, -112, -930, 369, -604, -835, -108, -47, 248, -111, -246, -205, -53, 826, 256, 878};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 861;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> target = {-735, 198, -66, -824, 964, -396, 303, -601, 231, -613, 954, -761};
    vector<int> candidate = {299, 419, 537, 171, -842, 980, -794, -385, -135, 537, 17, -635, -999, 704, 759, -896, -128};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1127;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> target = {-115, 728, -557, 64, 727, -690, -567, 229, 519, -738, -459};
    vector<int> candidate = {-285, -748, -345, 853, -356, -716, -265, -671, 4, 828, -728, -724, -444, 117, 464};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 925;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> target = {-170, 185, 331, 905, -733, -437, 217, 998, 497, -618, -373, -814, 227, 589};
    vector<int> candidate = {738, 365, -490, -697, 79, -604, 578, -824, -993, -943, 49, 691, 798, 660, 564};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2272;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> target = {-917, 492, -535, 253, 797, -209, 168, -946, 531};
    vector<int> candidate = {-692, -228, 945, -372, 860, -983, -976, 830, 283, -101, -692, 323, -680, -86, -10};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> target = {183, -925, 566, -228, 803, -911, -234, -719, 616};
    vector<int> candidate = {829, -180, 477, -180, -812, -398, 393, 276, 966, -501, -665, 236, -705, -151, -868, -726, -206};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 630;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> target = {-310, -93, 341, -648, 361, -997, -329, -53};
    vector<int> candidate = {96, 778, 47, 889, -115, -770, 132, -999, -829, -915, 445, -163, 219, 928, -790};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> target = {449, 772, -43, 383, 301, 287, -490, -677, -183, -289};
    vector<int> candidate = {-171, -34, 498, -235, -568, 709, -342, 535, 819, 45, 804, -390, -688, -732, -531, -736, -505, -728, -933};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 983;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> target = {-425, -961, -153, 564, -247, -931, -839, 385, 964, 485, 942, 968, -67, -924};
    vector<int> candidate = {761, 199, -134, 506, -683, 192, 111, 292, 194, -246, -943, 841, -606, 437, 781};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 3122;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> target = {-730, -868, -402, 379, -28, -832, -551, 308, -363, -986, -731, 700, -144, -770, 527};
    vector<int> candidate = {-618, 933, 983, -667, 30, 457, 963, -346, -39, -438, 637, 988, -367, -449, -600, 515, 885, 498, 854, -721};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 3237;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> target = {-867, -46, 843, -490, -34, 347, -394, 328, 994, -24, -194, 403, -238, 715, 722, -500};
    vector<int> candidate = {-257, 889, -267, 501, 796, 923, -516, -485, 507, 155, 432, 48, -968, 352, 788, -380, 250, -3, 959, -271};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 872;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> target = {-412, 253, -989, -633, -577, -995, -298, 761, -597, 460, 176, 322, 611};
    vector<int> candidate = {461, -888, 396, 14, 93, -447, -617, -710, -143, -624, 549, 466, 764, -523, 948, -433, 74, -884, 602, 23};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 814;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> target = {336, -782, -326, -477, -702, 198, -652, -391, 524, 335, -778, 501};
    vector<int> candidate = {763, -500, 539, -432, -859, 196, -875, 217, 257, -986, 522, 289, 813, 731, -869, 528, 986, -521, 954, 326};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1017;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> target = {215, -668, -202, 956, 402, 954, -769, -642, 37, -677, 69, 751, 949, 852, 848, -687, -339, -832};
    vector<int> candidate = {622, -290, -914, -94, -589, -80, -254, -384, -29, -475, -635, 869, 264, -874, 891, -463, -265, 181, -264, 165};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 4304;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> target = {1000, -1000, 0, 5, 289, -40};
    vector<int> candidate = {30, 821, -777, -52, 91, 444, -134, 85};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 679;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> target = {-1000, -1000, -999, -666, -1, 0, 1, -999, -666, 666, 555, 555, -1000, -999, 999, 200, -1000};
    vector<int> candidate = {99, -10, -1000, -999, -10, -1, 0, 1, -999, -666, 666, 555, 175, -1000, -999, 999, 200, -99, 0, -10};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2927;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> target = {153, 158, 160, 152, 161, 166, 160, 924, -1000, 900, 915, -1000, 736};
    vector<int> candidate = {-1000, 976, -325, 160, 1000, 42, 150, 153, 416, 159, -715, 924, 163, 321, 157, 895, 911, 999};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 642;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> target = {1, 5, 6, 8, 17, 35, 21, 49, 654, 999};
    vector<int> candidate = {1000, -1000, 53, 68, 942, 15, 24, 1, 3, 6, 5, 7, 954, 641, 233, 658, 951, 258, 147, 236};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> target = {1000, -1000, 0, 5, 289, -40, 3, 999, -30};
    vector<int> candidate = {30, 821, -777, -52, 91, 444, -134, 85, 293, 273, -20, 0, 39, 333, 28, 993, 23, -30, -2, 221};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 447;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> target = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};
    vector<int> candidate = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 156, 17, 18, 19, 20};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1750;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> target = {4, 4, 2, 1};
    vector<int> candidate = {6, 1, 2, 3, 6, 6};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> target = {1000, -1000, 3, 4, 4, 4, 4, 4, 4, 444, 55, 555, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> candidate = {30, 821, -777, -52, 91, 444, -134, 85, 123, 3, 3, 3, 5, 5, 6, 7, 8, 89, 9, 0};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1270;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> target = {1000, -1000, 0, 5, 289, -40, 827, 999, -39, -2};
    vector<int> candidate = {30, 821, -777, -52, 91, 444, -134, 85, 332, 0, -20, -300, 292, 878, -392, 30, 222, 203, 921, -652};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 520;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> target = {-999, -900, -888, -777, -666, -555, -444, -333, -222, -111, 111, 222, 333, 444};
    vector<int> candidate = {-500, -400, -300, 0, 1, 2, 3, 4, 5, 6, 7, 8, 8, 100, 300, 400, 500, 600, 700, 800};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 4928;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> target = {-1000};
    vector<int> candidate = {1000};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> target = {100, 100, 100, 100};
    vector<int> candidate = {100, 1, 1, 20};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> target = {10, 10};
    vector<int> candidate = {10, 20};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> target = {1000, -1000, 0, 5, 289, -40, 1, 999};
    vector<int> candidate = {30, 821, -777, -52, 91, 444, -134, 85, -1, -99, -1, -1, -2};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> target = {1000, -1000, 0, 5, 289, -40, 999, 1000};
    vector<int> candidate = {30, 821, -777, -52, 91, 444, -134, 85, 85, -444, 85};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 2192;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> target = {5, 5, 5};
    vector<int> candidate = {1, 2, 3, 1000, 1000, 1000};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> target = {1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 0, -100, -200, -300, -400, -500, -600, -700, -800, -900};
    vector<int> candidate = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> target = {0, 100};
    vector<int> candidate = {-111, 1};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> target = {0, 1, 2, 3, 19, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    vector<int> candidate = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 50, 80, 17, 10, 80};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> target = {1, 4};
    vector<int> candidate = {8, -1, 2};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> target = {4, 10};
    vector<int> candidate = {1, 5};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> target = {4, 2};
    vector<int> candidate = {3, -6};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> target = {200, 999};
    vector<int> candidate = {600, -500};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1099;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> target = {15, 25};
    vector<int> candidate = {9, 20, 32};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> target = {2, 5};
    vector<int> candidate = {-2, -1, 4};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> target = {-1000, 0, 1000};
    vector<int> candidate = {-1000, -10, 1};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1009;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> target = {10, 20};
    vector<int> candidate = {11, 0};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> target = {0, 11, 21};
    vector<int> candidate = {10, 20, 100};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> target = {4, 2};
    vector<int> candidate = {3, -6};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> target = {200, 999};
    vector<int> candidate = {600, -500};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1099;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> target = {15, 25};
    vector<int> candidate = {9, 20, 32};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> target = {2, 5};
    vector<int> candidate = {-2, -1, 4};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
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
    vector<int> target = {-1000, 0, 1000};
    vector<int> candidate = {-1000, -10, 1};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 1009;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> target = {10, 20};
    vector<int> candidate = {11, 0};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> target = {0, 11, 21};
    vector<int> candidate = {10, 20, 100};
    SetMetric* pObj = new SetMetric();
    clock_t start = clock();
    int result = pObj->nearness(target, candidate);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=158244&rd=7998&pm=4442
********************************************************************************
#include <algorithm>
#include <cctype>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <vector>
 
using namespace std;
 
typedef vector<bool> VB; typedef vector<double> VD;
typedef vector<int> VI; typedef vector<string> VS;
 
class SetMetric
{
public:
 
int nearness(VI targ, VI cand)
{
  sort(targ.begin(),targ.end());
  sort(cand.begin(),cand.end());
  int i,n=targ.size();
  VB used;
  int dif,ret=1000000000;
  
  for(i=0;i<n;i++) used.push_back(true);
  for(i=n;i<cand.size();i++) used.push_back(false);
  VB ex=used;
  
  do
  {
    VI tmp;
    for(i=0;i<cand.size();i++) if(used[i]) tmp.push_back(cand[i]);
    dif=0;
    for(i=0;i<tmp.size();i++) dif+=abs(tmp[i]-targ[i]);
    ret<?=dif;
    next_permutation(used.begin(),used.end());
  }while(used!=ex);
  
  return ret;
}
 
};

********************************************************************************
*******************************************************************************/