/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12471
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

class TeamContestEasy {
public:
    int worstRank(vector<int> strength);
};

int TeamContestEasy::worstRank(vector<int> strength) {
    int ret;
    return ret;
}


int test0() {
    vector<int> strength = {5, 7, 3, 5, 7, 3, 5, 7, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {5, 7, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {2, 2, 1, 1, 3, 1, 3, 2, 1, 3, 1, 2, 1, 2, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> strength = {45, 72, 10, 42, 67, 51, 33, 21, 8, 51, 17, 72};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> strength = {37259, 215372, 76880};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> strength = {731923, 857695, 434453, 112651, 235589, 775029};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> strength = {5527, 17, 4061, 1158, 5988, 3973};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> strength = {5152, 5656, 158, 3213, 4166, 1688, 163, 2764, 2144};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> strength = {114, 192, 61, 100, 19, 61, 70, 222, 147};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> strength = {28481, 557292, 14188, 61649, 510253, 509530, 749211, 171570, 441589};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> strength = {939350, 594583, 904620, 931194, 255896, 408520, 467721, 716407, 348210, 831899, 630938, 633637};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> strength = {32, 69, 35, 12, 54, 84, 10, 4, 43, 26, 11, 47};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> strength = {553001, 283676, 468773, 385379, 158635, 34680, 721788, 219491, 89841, 678361, 763023, 350352};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> strength = {171939, 929691, 90490, 469076, 646438, 611143, 166816, 540492, 111275, 370457, 758599, 846634};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> strength = {1384, 6863, 5952, 5012, 1461, 4192, 5755, 6031, 7139, 127, 2532, 5185, 5327, 792, 5259};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> strength = {25, 36, 42, 2, 6, 22, 28, 26, 44, 7, 2, 39, 56, 43, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> strength = {272502, 4822, 621068, 338245, 251133, 335672, 277774, 196568, 763694, 10787, 221884, 445463, 299476, 538898, 783515};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> strength = {13023, 7314, 17634, 3271, 20216, 23648, 5576, 13687, 22194, 22883, 17640, 7818, 6353, 2705, 12763};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> strength = {797556, 688187, 886053, 681374, 946316, 441354, 271543, 666634, 415026, 862704, 420812, 59960, 572081, 136383, 176675, 502554, 890909, 180137};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> strength = {145159, 68808, 84286, 48815, 143150, 136763, 49484, 67591, 134471, 78250, 52114, 78967, 73838, 333, 122756, 29803, 4198, 16451};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> strength = {944593, 695075, 5739, 147002, 867211, 821966, 430618, 802396, 592716, 66589, 523934, 709968, 174465, 98323, 564154, 935220, 899752, 781062};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {8489, 4307, 9532, 8679, 11082, 3084, 9871, 12175, 4298, 6705, 1669, 5230, 9351, 11790, 11414, 936, 1049, 6425};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {538212, 834747, 155602, 373339, 547873, 837904, 723060, 368502, 927594, 508709, 127459, 742530, 296297, 460777, 970328, 954604, 893761, 632078};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> strength = {959020, 997641, 519415, 179569, 590028, 344526, 41619, 24050, 774135, 627513, 376405, 372363, 809376, 533728, 480189, 590712, 189704, 236456, 336757, 327050, 511864};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> strength = {19122, 6878, 24097, 7276, 9383, 3582, 6212, 13564, 20800, 21918, 4789, 17756, 1528, 7224, 1599, 17774, 3110, 21429, 22100, 1157, 17587};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> strength = {3, 3, 2, 1, 2, 3, 4, 2, 3, 2, 1, 2, 1, 2, 2, 3, 2, 3, 2, 4, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> strength = {394304, 332513, 516239, 124522, 320966, 550153, 102122, 319563, 338965, 62210, 674917, 816512, 347266, 294291, 236823, 79706, 112918, 229328, 225809, 255899, 611251};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> strength = {1, 6, 3, 5, 3, 4, 1, 2, 1, 3, 2, 2, 1, 6, 4, 6, 3, 6, 4, 6, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> strength = {689897, 399107, 30228, 18652, 475540, 653491, 699934, 656809, 510743, 159355, 693370, 532843, 145773, 562575, 606510, 5462, 189330, 232671, 24699, 469162, 314455};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> strength = {1451, 649182, 51530, 826168, 849383, 179813, 945142, 378184, 622671, 216394, 782681, 246000, 797833, 105989, 459358, 905027, 284299, 852913, 487048, 746247, 497385};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> strength = {803774, 670012, 513154, 50683, 825965, 100907, 37261, 152528, 720275, 591109, 667898, 374091, 153892, 239425, 746265, 27805, 312214, 197580, 87663, 610773, 465643, 323780, 412987, 138888};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> strength = {802707, 594332, 644363, 387278, 667351, 586275, 105363, 160364, 547121, 264900, 7096, 629807, 443783, 569173, 556631, 829191, 705811, 168280, 252385, 183312, 619560, 757281, 147472, 229097};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {484503, 761371, 75595, 524904, 312424, 215182, 11103, 4355, 5902, 723837, 135222, 125138, 429231, 906525, 511730, 86494, 416491, 72993, 16028, 386944, 739107, 221710, 446377, 98084};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> strength = {542976, 956931, 488885, 761744, 424084, 240747, 537839, 146634, 1999, 579767, 670167, 533222, 977066, 331818, 314770, 642250, 100410, 15986, 323453, 971389, 966059, 416379, 768426, 215233};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> strength = {474811, 479568, 815719, 286304, 688662, 292157, 379312, 511500, 822825, 145551, 851880, 941400, 140150, 150046, 123620, 198936, 346809, 69850, 827554, 708490, 165605, 250149, 546293, 692832};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> strength = {5326, 26159, 10651, 20224, 30104, 22117, 2295, 13242, 5977, 2569, 2406, 25248, 5281, 24245, 13037, 8699, 28714, 11464, 14965, 1231, 1411, 5924, 6128, 24016};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> strength = {210909, 411218, 560249, 766374, 500298, 205709, 509865, 528239, 81348, 880837, 913652, 829129, 244826, 186819, 98635, 449502, 141183, 824882, 327969, 148250, 836690, 712525, 374966, 450472};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> strength = {132084, 796410, 843927, 494787, 110542, 383876, 297103, 476833, 580033, 106265, 172026, 527885, 851141, 698229, 46898, 388777, 223312, 607541, 689190, 209449, 615349, 424872, 443379, 248150, 867702, 312342, 245629};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> strength = {423459, 882126, 959041, 286335, 341023, 384085, 800455, 745678, 184430, 50671, 76650, 158061, 483034, 271717, 284810, 976568, 20670, 933393, 515048, 29107, 40790, 880324, 286212, 292477, 935291, 123537, 543880};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> strength = {990425, 550911, 758331, 60274, 810964, 630444, 842427, 257992, 913445, 750414, 145710, 183370, 911350, 663355, 861298, 671743, 793660, 112282, 387964, 794766, 831349, 404941, 775904, 850052, 514625, 173195, 944575};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> strength = {553892, 476273, 161991, 611039, 499824, 600316, 354175, 633243, 337802, 638967, 56158, 501193, 52213, 135637, 88239, 196866, 162639, 80064, 3552, 131872, 237336, 677491, 173728, 437643, 283577, 210259, 386952};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> strength = {2211, 2340, 2705, 2244, 484, 554, 99, 1775, 2998, 3185, 2750, 2975, 3121, 228, 704, 1927, 560, 1822, 2722, 2342, 616, 1307, 824, 1700, 1225, 2380, 3081};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> strength = {78975, 674709, 603422, 4283, 192735, 236674, 384510, 661626, 624459, 914029, 900187, 492099, 902659, 71283, 914241, 414892, 472537, 149712, 31431, 228143, 676621, 681513, 91452, 516358, 287943, 496389, 171760};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> strength = {4573, 41, 9887, 7562, 6642, 5404, 5511, 9425, 1274, 6228, 4618, 5070, 4909, 1741, 8209, 6311, 6371, 8118, 12088, 10165, 2830, 2526, 12242, 6071, 11280, 6188, 1363};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> strength = {67324, 347423, 225961, 39357, 33436, 418276, 20938, 17066, 256404, 468698, 452723, 159720, 150379, 450010, 458094, 222023, 357646, 465215, 51939, 58986, 397897, 398706, 444955, 477279, 509009, 241937, 147807};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> strength = {808926, 911354, 490913, 680013, 506861, 550974, 505713, 659141, 551597, 92412, 429487, 510378, 475869, 900294, 186656, 466098, 350295, 332158, 223251, 43245, 503176, 45048, 741165, 706634, 917472, 697460, 735359, 646202, 152794, 977924};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> strength = {251, 127, 353, 50, 272, 330, 211, 289, 314, 164, 76, 107, 291, 204, 79, 22, 256, 193, 125, 69, 118, 127, 214, 270, 324, 68, 222, 254, 242, 169};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> strength = {138252, 809063, 839728, 524030, 92745, 588355, 428886, 761449, 927681, 511363, 358228, 208415, 486478, 81985, 280157, 591131, 428351, 745115, 622707, 896695, 61967, 230237, 286302, 514849, 296642, 974690, 145501, 481723, 811751, 348847};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> strength = {435940, 110744, 835099, 237521, 123236, 875013, 300051, 376570, 181120, 626323, 6309, 489646, 310602, 495084, 739410, 234023, 273881, 671126, 515369, 278061, 577463, 96226, 449070, 10890, 173862, 646591, 294007, 838761, 315981, 305837};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {23904, 20622, 17431, 6402, 26517, 13841, 16985, 11470, 18134, 9144, 18130, 7667, 23908, 25785, 24492, 25326, 16961, 5703, 25978, 16203, 1234, 16380, 4701, 7864, 27038, 15523, 17310, 16858, 22917, 1704};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> strength = {736060, 791538, 792935, 153229, 819276, 207537, 254462, 502917, 524965, 678270, 90853, 654423, 968133, 535191, 902345, 2266, 216920, 210144, 986364, 111456, 387037, 688712, 144609, 308007, 737457, 787037, 728495, 287660, 897868, 951384};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> strength = {46, 38, 86, 50, 65, 5, 75, 58, 55, 79, 49, 36, 10, 67, 85, 65, 63, 7, 73, 58, 76, 36, 83, 12, 45, 14, 76, 7, 3, 30};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> strength = {30, 34, 4, 36, 15, 8, 33, 17, 17, 40, 11, 40, 41, 7, 38, 43, 44, 34, 22, 46, 27, 29, 15, 8, 42, 9, 16, 4, 47, 26};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> strength = {192, 60, 47, 196, 88, 35, 5, 178, 109, 22, 131, 82, 37, 279, 271, 180, 20, 242, 294, 111, 183, 11, 45, 249, 301, 283, 171, 152, 98, 271};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> strength = {25645, 87589, 71595, 12998, 60715, 63401, 65689, 86938, 19970, 5523, 65733, 49313, 27879, 46625, 5751, 53186, 52299, 55130, 28582, 70991, 61546, 10275, 14546, 54047, 71840, 78958, 53360, 6423, 66343, 52029, 35683, 63975, 43297};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> strength = {6447, 7484, 1245, 2663, 279, 7267, 7286, 1352, 3635, 1067, 268, 6150, 4954, 2533, 4031, 4159, 3023, 727, 5889, 4121, 4299, 2715, 1413, 2470, 255, 6139, 988, 6800, 107, 7093, 2210, 3216, 935};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> strength = {731682, 985832, 363424, 67057, 605718, 194077, 743534, 222664, 267628, 645377, 828646, 260487, 946228, 416102, 700786, 214006, 764379, 405326, 937637, 755682, 410184, 730216, 893340, 364490, 858915, 657882, 867927, 738016, 583463, 411586, 194413, 34945, 454872};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> strength = {734028, 170931, 839839, 219461, 95954, 6486, 126299, 425903, 157203, 924308, 613962, 485597, 302703, 842353, 410109, 333800, 1175, 689004, 205729, 140852, 740363, 853936, 969728, 656082, 12986, 868400, 198757, 813569, 690345, 36722, 160074, 38888, 541379};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> strength = {809768, 413433, 756059, 813048, 531291, 464543, 108504, 826006, 527793, 283025, 423983, 352989, 198216, 749766, 982922, 73830, 657756, 430237, 110595, 623028, 368347, 535956, 655428, 452360, 504166, 761754, 636082, 287686, 844293, 942471, 310333, 856608, 313211};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {594, 474, 160, 555, 533, 277, 777, 662, 301, 184, 577, 238, 59, 109, 182, 576, 554, 7, 76, 169, 303, 13, 304, 604, 81, 726, 69, 179, 484, 145, 611, 335, 285};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> strength = {1, 50, 38, 19, 14, 10, 54, 44, 35, 36, 44, 28, 13, 51, 41, 54, 47, 49, 45, 11, 22, 4, 14, 2, 37, 27, 48, 28, 22, 52, 21, 21, 54};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> strength = {688, 2088, 1862, 617, 10, 1181, 397, 2422, 1571, 1321, 1491, 2535, 940, 530, 969, 770, 282, 1592, 2278, 2120, 2336, 1288, 1177, 1983, 317, 1645, 1912, 2312, 2336, 1706, 1952, 2395, 977};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> strength = {23, 50, 65, 62, 37, 54, 37, 46, 41, 35, 56, 16, 51, 54, 91, 17, 53, 8, 30, 76, 6, 74, 70, 18, 38, 34, 70, 61, 12, 79, 76, 27, 53};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> strength = {10296, 12566, 6405, 31023, 10210, 8476, 26537, 29798, 22840, 34864, 12311, 23481, 32506, 8754, 15326, 10257, 23884, 1344, 3745, 14526, 13839, 17592, 3329, 17725, 33846, 5112, 2511, 20615, 24990, 27687, 20397, 5239, 9516};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> strength = {2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> strength = {896087, 323924, 772976, 10875, 203487, 508372, 167157, 507509, 589518, 844463, 623787, 597573, 797907, 414295, 827263, 118463, 279854, 858307, 774858, 261500, 647754, 268299, 77557, 406464, 412491, 711116, 613085, 464079, 193045, 360797, 500770, 117733, 57555, 747757, 269193, 312875};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> strength = {729811, 266020, 990308, 804626, 864332, 790897, 602452, 477271, 448821, 506406, 665709, 429880, 643089, 8964, 781120, 189276, 558299, 184268, 795445, 270104, 599948, 335344, 113094, 467358, 835428, 122544, 529282, 223502, 861980, 255010, 184039, 586124, 963683, 69329, 728723, 833590};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> strength = {796022, 355937, 761907, 95237, 301913, 630525, 760034, 770805, 8442, 201772, 501789, 312021, 76282, 639424, 83379, 681139, 2890, 416514, 594187, 226892, 210539, 316560, 184714, 313470, 38063, 792433, 831134, 72633, 911043, 438344, 901209, 409330, 537641, 459053, 539235, 144552};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {97, 358, 293, 59, 259, 140, 295, 256, 131, 236, 129, 70, 117, 352, 23, 304, 175, 389, 212, 240, 346, 4, 204, 338, 200, 259, 372, 62, 267, 188, 263, 133, 263, 85, 134, 48};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> strength = {239900, 619354, 790607, 689867, 416313, 464992, 532951, 472152, 254991, 763774, 470985, 470083, 223818, 566550, 493203, 381952, 78313, 369417, 481456, 628361, 956408, 844695, 431295, 692160, 581795, 408089, 138095, 126131, 789637, 245949, 713342, 427102, 653438, 283889, 684098, 908333};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> strength = {703900, 671408, 743142, 661519, 32962, 386097, 194757, 456715, 6536, 403524, 986762, 998958, 183930, 879929, 307927, 826000, 247652, 405488, 40345, 804581, 293959, 408964, 667203, 111419, 538836, 36547, 45325, 452913, 226893, 24897, 827394, 963355, 911429, 487947, 7926, 157860};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> strength = {362387, 82072, 966904, 676376, 8687, 11218, 510801, 324822, 608246, 565122, 733835, 4857, 95311, 251954, 785669, 192344, 335819, 518785, 129124, 850260, 451212, 430629, 879133, 330619, 244439, 6608, 128909, 381650, 214315, 665706, 535348, 747910, 698715, 747377, 463202, 954954};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> strength = {641344, 230809, 782353, 710654, 379500, 128308, 402952, 229288, 859611, 730261, 755151, 35252, 762979, 824734, 99163, 516068, 19200, 878030, 686043, 946607, 305318, 103501, 864760, 523230, 693152, 164844, 110165, 735155, 695881, 131180, 454030, 768615, 220229, 618912, 378409, 25751};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> strength = {211649, 477991, 378549, 401967, 234063, 299351, 50943, 548327, 280675, 505067, 178858, 9753, 400084, 161637, 128116, 243858, 53930, 360887, 535455, 465342, 147702, 321763, 119189, 383593, 340895, 509299, 502081, 425060, 492929, 524853, 330496, 47937, 358248, 183903, 535678, 218717};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> strength = {418535, 195288, 748443, 925416, 89702, 10592, 627421, 919517, 345623, 339146, 735557, 501068, 829037, 565598, 852195, 304963, 450731, 108202, 643378, 39754, 793578, 619623, 167562, 394079, 225626, 677409, 210642, 255211, 214872, 45355, 525350, 88126, 180054, 93161, 562896, 386509};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> strength = {190558, 53544, 85861, 166841, 429792, 41734, 565132, 482455, 228659, 591730, 2614, 122852, 209056, 35410, 53065, 479234, 336676, 569217, 199160, 131798, 5764, 437889, 361525, 400710, 582154, 14376, 380343, 34893, 437680, 3099, 170755, 40382, 415288, 364840, 534890, 346069};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> strength = {24315, 2911, 23212, 9559, 3010, 15004, 17142, 12831, 22198, 18339, 20622, 14213, 19329, 1587, 14736, 23517, 21148, 7094, 12862, 4042, 12550, 18678, 16787, 11898, 21504, 20473, 14305, 19950, 15094, 21501, 2913, 5226, 17374, 16352, 9631, 24026, 2507, 8866, 23947};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {362340, 303781, 368082, 323158, 327049, 317294, 321463, 156473, 181208, 70418, 61211, 140327, 330679, 272287, 42049, 302060, 281398, 57889, 280003, 380764, 214911, 221413, 170238, 388219, 90287, 10445, 75816, 140383, 120424, 277117, 48322, 289254, 356330, 229571, 142937, 392075, 366559, 234199, 152111};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> strength = {15876, 856252, 905747, 369190, 673309, 300217, 450878, 88418, 52994, 151065, 698464, 433413, 841635, 492521, 965598, 11078, 791198, 863826, 970996, 213972, 759628, 947800, 465367, 586300, 304878, 236047, 986405, 19646, 46308, 764929, 177375, 675199, 444529, 552491, 420768, 568285, 336152, 286808, 619187};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> strength = {270338, 764019, 759590, 213848, 149824, 616039, 15627, 600968, 771814, 231924, 129198, 425415, 60973, 642267, 527992, 884726, 703282, 592903, 535038, 659197, 618206, 246071, 539255, 911331, 340331, 449217, 77965, 282613, 994083, 514605, 787037, 475688, 352151, 308293, 404558, 568440, 252348, 736293, 332729};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> strength = {534084, 982277, 547341, 88608, 94823, 186454, 137828, 576115, 986403, 344970, 599580, 253797, 646065, 617663, 195163, 399557, 348321, 216140, 809842, 777801, 520035, 643134, 35691, 80241, 36871, 746460, 883872, 279717, 220646, 583012, 768615, 760498, 213690, 131184, 248670, 278873, 516528, 869120, 570525};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> strength = {537429, 496782, 313857, 496074, 297522, 26773, 519702, 415235, 695558, 23321, 299534, 194424, 466867, 514780, 675054, 148827, 178098, 8450, 497343, 652806, 462391, 459198, 407601, 322485, 363072, 102910, 379947, 507205, 384044, 731237, 291750, 77404, 258507, 637685, 65718, 128513, 334102, 433095, 171288};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> strength = {12, 2, 9, 6, 13, 6, 7, 2, 9, 12, 14, 7, 2, 4, 11, 5, 2, 14, 5, 4, 7, 14, 4, 9, 4, 12, 6, 8, 5, 4, 14, 10, 9, 12, 9, 8, 2, 6, 9};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> strength = {14255, 17290, 816, 4725, 11895, 20655, 13466, 10813, 15903, 1747, 785, 6382, 8998, 18845, 2562, 14305, 11705, 11089, 13861, 2964, 21193, 2706, 10353, 8246, 19541, 9507, 6118, 8983, 10621, 2393, 17888, 563, 15345, 11388, 21369, 20065, 18920, 8945, 9722};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> strength = {541073, 358636, 328426, 578505, 312074, 567060, 368126, 254280, 480545, 506556, 449008, 470290, 352063, 195505, 430994, 201590, 78028, 170322, 331835, 513438, 472016, 230859, 590647, 518086, 248469, 85252, 329691, 485861, 592725, 364937, 30419, 209609, 321587, 175317, 28514, 139605, 411144, 98231, 266004};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> strength = {836984, 185902, 411418, 313421, 453125, 619167, 80174, 730748, 542012, 541002, 954939, 515499, 614310, 748665, 527453, 125534, 202111, 720313, 66737, 55158, 713328, 429863, 512743, 823046, 124126, 455251, 508461, 22762, 233183, 364422, 802503, 588324, 425525, 719218, 224401, 523853, 500384, 726198, 714022};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> strength = {329838, 656940, 427562, 657266, 4481, 324810, 870560, 5703, 809931, 113741, 760325, 456207, 261132, 89931, 584140, 525748, 454119, 47167, 193527, 285693, 807066, 292027, 690950, 410107, 751114, 188759, 78055, 763024, 240311, 852260, 34212, 141791, 565396, 205669, 390286, 247042, 815781, 246677, 459115};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> strength = {245702, 548610, 246319, 760541, 471276, 892818, 730408, 604026, 863895, 947688, 895721, 183783, 366206, 453829, 819936, 406012, 412520, 811006, 568523, 192377, 756253, 498026, 353247, 156055, 483032, 870760, 720872, 779535, 552882, 636976, 306559, 963083, 316151, 342293, 61570, 274412, 273869, 738136, 851087};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> strength = {925190, 988615, 529384, 700300, 316898, 884803, 441659, 447990, 920447, 127468, 274068, 197501, 800065, 597792, 996140, 234391, 848974, 347724, 368118, 522610, 474455, 846038, 400854, 226331, 306956, 289126, 108615, 434316, 107249, 933831, 24293, 161669, 342999, 324862, 418623, 572932, 400992, 19530, 604708, 890378, 979760, 711782};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {976575, 922161, 344069, 555926, 985995, 897358, 728366, 876306, 960794, 100439, 197282, 952799, 236999, 484790, 221107, 640621, 102993, 406121, 486975, 271407, 307794, 359658, 12330, 466099, 741911, 139407, 251429, 938209, 246612, 130474, 835114, 911092, 798788, 252825, 430072, 355764, 606265, 574219, 124777, 581555, 531456, 723363};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> strength = {31, 47, 39, 10, 27, 13, 30, 17, 11, 33, 31, 41, 13, 20, 41, 3, 44, 19, 49, 13, 5, 37, 22, 27, 36, 38, 4, 16, 21, 32, 38, 1, 49, 24, 9, 49, 10, 1, 33, 38, 39, 11};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> strength = {679858, 639820, 264003, 644158, 360430, 374102, 420543, 655476, 456400, 700681, 569817, 602610, 288434, 256921, 571174, 716983, 628497, 562697, 550603, 404597, 36261, 207021, 503698, 572913, 690623, 142013, 478166, 303625, 665789, 512117, 317044, 239887, 487485, 247178, 492498, 411198, 402288, 361328, 119527, 323489, 344426, 625850};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> strength = {510010, 433470, 715598, 88309, 178768, 560982, 544495, 494744, 81858, 130603, 641983, 242880, 380660, 544089, 64070, 271008, 627694, 284343, 20250, 317071, 145972, 359334, 545558, 391957, 318888, 241497, 220730, 33048, 341743, 454512, 479603, 680264, 170566, 816598, 784298, 388164, 130854, 457813, 525825, 313012, 609921, 642638};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> strength = {18, 293, 426, 386, 363, 91, 335, 101, 90, 388, 272, 85, 379, 83, 207, 74, 30, 255, 319, 428, 39, 20, 183, 269, 175, 342, 316, 6, 265, 355, 331, 413, 271, 244, 376, 80, 250, 32, 144, 209, 112, 286};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> strength = {602913, 935030, 452827, 439835, 123338, 550873, 930279, 640102, 754125, 137638, 504306, 41872, 213943, 529585, 785451, 532889, 175275, 10027, 374042, 132778, 567132, 327785, 527830, 950583, 316868, 844691, 980776, 446986, 312142, 583220, 229783, 226275, 775426, 970914, 626595, 189802, 415667, 185907, 24623, 765628, 61239, 945804};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> strength = {95514, 640, 66891, 48435, 15403, 67558, 58068, 91094, 108418, 52097, 38928, 17416, 103856, 108158, 18566, 71969, 1001, 20527, 32331, 1782, 110568, 76280, 22289, 42930, 29328, 18732, 15808, 44973, 13072, 82641, 896, 54107, 7838, 50079, 93175, 62971, 65823, 39140, 12033, 91731, 95832, 47316};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> strength = {24312, 11786, 26325, 26645, 13968, 30618, 12888, 12730, 11101, 23782, 13038, 23292, 11465, 19334, 18470, 32364, 15562, 32650, 6999, 25380, 29759, 20222, 4583, 4104, 32698, 29975, 3488, 8431, 26973, 32752, 7367, 31043, 3206, 11101, 16904, 2966, 10384, 20532, 5720, 13121, 17708, 32714};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> strength = {5559, 12902, 1194, 6452, 8088, 11255, 5764, 7731, 3201, 1361, 13171, 5889, 6088, 709, 5911, 8006, 7869, 5143, 6863, 644, 9319, 3735, 12105, 4741, 5433, 4140, 7766, 14156, 9251, 7899, 11242, 12729, 7131, 4848, 3434, 8409, 13857, 8046, 13271, 2166, 9458, 9197};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> strength = {906219, 243996, 622438, 457321, 683877, 652908, 561905, 979839, 694846, 554629, 704321, 439166, 857500, 875829, 739312, 369152, 328092, 377788, 27955, 786668, 273477, 861788, 297236, 377941, 458348, 717483, 906256, 692636, 291788, 992692, 521577, 673569, 556340, 79050, 818915, 567615, 511289, 986279, 897633, 517001, 854236, 950392};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> strength = {175580, 699079, 620917, 222803, 861801, 384358, 750275, 293066, 724181, 346128, 625419, 346426, 102659, 737515, 938777, 173890, 769719, 987875, 812692, 764347, 76838, 289294, 653794, 640564, 592125, 814644, 829259, 44334, 47044, 461290, 210775, 860234, 229507, 576226, 207848, 417685, 246394, 896717, 981686, 409357, 873073, 395631};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> strength = {502366, 492565, 238346, 323239, 90257, 719671, 664271, 803487, 173336, 181193, 815981, 105230, 535250, 195075, 715834, 204157, 614184, 745706, 8895, 242872, 789364, 534791, 526584, 273951, 321280, 740559, 350892, 588074, 814844, 446701, 716843, 407858, 135846, 622757, 264694, 629662, 583592, 495795, 711227, 209268, 546465, 19391};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> strength = {911060, 984102, 286601, 679544, 816890, 661424, 822908, 418475, 306528, 580296, 610011, 169268, 720030, 26437, 97953, 289373, 925336, 115660, 343793, 251992, 576828, 116526, 631079, 206825, 351208, 910110, 859593, 550896, 454056, 96781, 607964, 469655, 353885, 867812, 978131, 336084, 402681, 858653, 94178, 22427, 450918, 127934, 98610, 760804, 456774};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> strength = {816949, 956378, 873674, 125545, 584627, 497347, 770032, 735204, 583682, 539272, 614200, 317665, 123923, 642363, 713321, 474407, 616864, 154434, 152310, 530185, 931021, 824169, 92838, 491364, 777392, 517232, 446661, 63348, 542890, 258578, 897747, 761228, 849370, 436580, 203686, 740290, 630353, 915967, 966799, 307623, 152477, 48848, 496998, 176212, 857430};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> strength = {45, 20, 55, 23, 60, 34, 8, 3, 9, 23, 31, 22, 43, 5, 42, 49, 14, 33, 1, 13, 25, 1, 32, 12, 19, 35, 51, 54, 16, 35, 34, 20, 12, 13, 11, 35, 34, 11, 45, 23, 11, 10, 53, 10, 5};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> strength = {6, 8, 6, 2, 3, 5, 4, 5, 2, 8, 8, 8, 3, 8, 4, 3, 3, 4, 5, 2, 2, 7, 7, 2, 3, 5, 3, 2, 6, 3, 5, 5, 8, 6, 5, 1, 2, 8, 6, 7, 6, 2, 1, 3, 4};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> strength = {80783, 11934, 92363, 78320, 40906, 86776, 67057, 35237, 44778, 13002, 30076, 17337, 16991, 29296, 29549, 84071, 48209, 22697, 93483, 88141, 68440, 70602, 17809, 52772, 84086, 95453, 47315, 14708, 45155, 89423, 27398, 39551, 43575, 4655, 21616, 44330, 17031, 61695, 82993, 30498, 70757, 52868, 11037, 94652, 37505};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> strength = {4155, 1103, 4178, 732, 1617, 2021, 1274, 4500, 2102, 552, 951, 439, 4584, 478, 399, 380, 4770, 4549, 4482, 3408, 1466, 4304, 4904, 1947, 1402, 2752, 4745, 2746, 5036, 1083, 3003, 5087, 126, 1867, 870, 1137, 36, 3925, 3012, 3392, 2509, 1076, 1972, 1545, 1102};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> strength = {48, 83, 13, 40, 63, 3, 41, 12, 9, 69, 65, 100, 80, 26, 37, 64, 59, 18, 63, 40, 8, 48, 26, 80, 29, 32, 69, 26, 44, 75, 38, 33, 29, 37, 44, 2, 2, 20, 37, 83, 59, 57, 25, 36, 31};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> strength = {5, 6, 8, 8, 7, 9, 2, 6, 4, 6, 2, 4, 1, 9, 9, 1, 3, 6, 10, 3, 5, 7, 7, 2, 2, 7, 4, 7, 10, 6, 2, 4, 3, 3, 3, 4, 8, 4, 4, 4, 5, 6, 8, 2, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> strength = {21959, 755, 22551, 7579, 15630, 6711, 26110, 17321, 4589, 28670, 5143, 29821, 963, 11026, 8462, 8092, 27773, 11837, 21094, 9601, 25078, 28922, 11468, 15615, 26169, 29053, 14801, 9541, 2636, 10386, 28569, 28838, 4901, 14757, 9811, 11795, 12129, 16412, 12279, 10506, 29817, 27963, 5377, 5874, 4566};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> strength = {587525, 269697, 753403, 455868, 100217, 436171, 557051, 81476, 809160, 273029, 444875, 512877, 303737, 897141, 771573, 93330, 227400, 759583, 549455, 109393, 729679, 500543, 81256, 16014, 414111, 691972, 55373, 197295, 779741, 888159, 307249, 21100, 529879, 751540, 554012, 725512, 254782, 820970, 261842, 830395, 658292, 547691, 821341, 429660, 449166};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> strength = {31, 11, 19, 27, 28, 18, 10, 26, 13, 25, 26, 17, 24, 6, 11, 4, 33, 1, 34, 3, 13, 24, 13, 20, 15, 19, 4, 3, 20, 28, 14, 3, 26, 34, 30, 27, 4, 3, 38, 6, 22, 22, 37, 13, 20};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> strength = {439946, 635764, 10078, 338736, 544496, 1207, 396312, 178664, 722226, 585480, 324888, 132933, 654324, 753741, 625760, 464831, 356873, 614346, 613004, 606560, 193523, 411163, 389598, 499724, 507382, 448061, 735335, 128353, 289111, 421318, 520014, 454073, 604598, 34229, 245056, 40396, 255109, 221540, 18036, 551411, 363812, 484378, 78937, 759303, 315419};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> strength = {134984, 14060, 46724, 7901, 75839, 10234, 1694, 126787, 17137, 111816, 44689, 122494, 121966, 17147, 132445, 47547, 105665, 72030, 90569, 3818, 36762, 50258, 73182, 91647, 421, 133540, 20025, 80356, 56019, 82114, 30018, 86692, 91720, 22747, 114150, 113053, 65576, 40973, 118538, 3369, 82132, 59025, 107106, 125274, 43617};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> strength = {208, 217, 124, 315, 373, 422, 360, 510, 157, 153, 472, 322, 120, 147, 524, 538, 444, 144, 76, 291, 324, 298, 446, 243, 487, 7, 217, 202, 56, 83, 420, 397, 261, 445, 192, 289, 513, 42, 38, 316, 430, 292, 305, 183, 31};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
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
    vector<int> strength = {965557, 975491, 270959, 855538, 413224, 218157, 497465, 474138, 29352, 859987, 402383, 677890, 372534, 709039, 199863, 809433, 759565, 207283, 514784, 166188, 868751, 31806, 201925, 104934, 282106, 243860, 651906, 478695, 858389, 760364, 527817, 567813, 674709, 733436, 85651, 804780, 935102, 982923, 613663, 194049, 654118, 324957, 831618, 134813, 289402, 138960, 385991, 968793};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> strength = {454486, 846702, 967793, 130687, 370285, 829229, 702326, 154693, 422490, 884071, 187144, 665992, 95542, 591358, 606864, 762882, 97017, 183577, 512592, 541462, 4270, 925826, 27091, 36665, 522541, 762545, 107312, 800466, 932988, 886668, 508344, 469617, 736109, 940434, 586314, 501925, 93572, 75473, 517902, 674558, 407902, 179725, 566214, 430503, 368289, 38841, 361747, 317889};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> strength = {69007, 55605, 36673, 2500, 16409, 10239, 9302, 3558, 57258, 32341, 33943, 3453, 8781, 37748, 22543, 21471, 63716, 19770, 2958, 21959, 20480, 67165, 66231, 37041, 28269, 70191, 5800, 14137, 8391, 24603, 42426, 41992, 49951, 8623, 26486, 36095, 45056, 7572, 54219, 54929, 23586, 36, 57043, 2347, 51395, 7746, 39270, 68942};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> strength = {788, 711, 560, 205, 40, 692, 765, 552, 300, 438, 268, 354, 710, 786, 614, 744, 82, 516, 238, 609, 810, 475, 767, 682, 33, 44, 633, 101, 243, 798, 468, 382, 75, 259, 697, 692, 199, 218, 281, 770, 355, 409, 681, 542, 50, 81, 100, 238};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> strength = {298121, 700777, 988349, 748069, 374382, 423819, 963689, 117381, 435114, 573465, 931257, 986456, 954174, 262846, 177891, 574133, 15805, 553485, 496123, 554818, 363087, 166885, 437076, 672228, 197096, 957856, 836083, 569852, 861891, 257631, 239205, 290896, 820967, 714904, 199453, 670690, 404278, 506923, 527535, 240804, 586169, 603949, 507272, 496095, 483059, 767969, 157045, 494968};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> strength = {4, 45, 34, 42, 38, 16, 31, 46, 30, 23, 13, 31, 35, 5, 17, 12, 21, 36, 14, 31, 6, 28, 6, 7, 23, 40, 19, 20, 47, 46, 30, 28, 20, 16, 17, 38, 35, 21, 32, 21, 47, 42, 7, 35, 35, 27, 21, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> strength = {69959, 991227, 704906, 413243, 462843, 81487, 147538, 210013, 960646, 629075, 183849, 91203, 574284, 821595, 26723, 782560, 563384, 50420, 775203, 534977, 896790, 555220, 871359, 177806, 419583, 91619, 835391, 979231, 974827, 264864, 442373, 210872, 278762, 266546, 13510, 782563, 465710, 335180, 725942, 898729, 991168, 946363, 769666, 713132, 507411, 625423, 725751, 527908};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> strength = {14542, 726190, 688789, 186697, 101879, 701025, 326978, 179972, 60066, 128884, 526298, 892681, 242023, 565142, 812311, 162560, 635443, 664269, 898539, 668536, 594402, 509881, 171768, 601275, 362454, 933867, 586936, 365398, 318846, 146910, 577746, 711030, 719813, 528810, 244111, 986402, 427395, 253614, 218160, 436586, 493355, 413226, 98615, 423651, 977606, 220477, 406995, 965939};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> strength = {102582, 130409, 56500, 133999, 93259, 111606, 128179, 22761, 89994, 79473, 16194, 46918, 68510, 48081, 138607, 31350, 63323, 66004, 5630, 76131, 80395, 13744, 109522, 3790, 123337, 25336, 103771, 141257, 35923, 45344, 151569, 43834, 119526, 83398, 117990, 126466, 76096, 49028, 131503, 112351, 72715, 68652, 134896, 65356, 132414, 92168, 49653, 98781};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> strength = {32, 56, 11, 51, 4, 30, 53, 21, 59, 62, 48, 51, 9, 8, 1, 57, 40, 19, 7, 46, 19, 24, 6, 54, 6, 60, 14, 12, 46, 7, 5, 28, 38, 45, 40, 1, 56, 22, 15, 20, 15, 25, 1, 18, 36, 6, 36, 38};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> strength = {86823, 69064, 153755, 26029, 100939, 76830, 59214, 30906, 88953, 32163, 125901, 146320, 52098, 29522, 61368, 61986, 96183, 39441, 179986, 141336, 38520, 46913, 52617, 151808, 9201, 121566, 50706, 64907, 4862, 144251, 167719, 110813, 55295, 172212, 164395, 20971, 40493, 19582, 156904, 179021, 91109, 79154, 67333, 10466, 107911, 34659, 8204, 104189};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> strength = {225751, 141188, 102048, 20695, 105033, 80782, 138732, 208617, 27511, 214187, 124528, 154425, 32832, 211317, 198996, 166804, 229813, 221868, 184440, 189056, 31497, 140763, 70824, 179046, 174997, 188888, 173822, 68618, 175942, 192009, 1748, 213947, 33188, 134564, 9188, 71782, 190239, 174543, 89662, 62501, 11896, 154311, 128261, 185845, 87849, 229948, 79398, 22085};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> strength = {197704, 26813, 192438, 104025, 58161, 109425, 17831, 194818, 182193, 252811, 252434, 60282, 48015, 31491, 50290, 101491, 113665, 69434, 257438, 182301, 199339, 274055, 254327, 59322, 61486, 55613, 211561, 229081, 247915, 151489, 211269, 177111, 220494, 189590, 169650, 52874, 18844, 275772, 164022, 277037, 223788, 33149, 136591, 124505, 229689, 221232, 97439, 12571};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> strength = {263570, 103797, 166263, 296537, 129081, 256889, 105325, 202259, 305949, 181924, 106948, 147758, 56688, 161817, 213516, 102563, 263357, 242807, 223889, 231950, 67995, 269060, 51927, 54588, 45462, 228783, 106155, 251231, 69721, 142363, 203261, 103509, 67605, 131232, 150724, 161556, 48557, 302114, 228030, 315375, 246797, 106762, 213682, 74020, 169995, 99732, 182100, 297058};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> strength = {579049, 396916, 886, 243157, 447281, 398941, 476684, 150091, 938804, 456819, 702727, 811614, 675228, 909359, 603354, 157640, 26595, 507191, 284127, 964358, 703007, 868089, 40096, 80427, 86491, 760998, 488369, 379473, 668417, 752862, 108794, 649837, 170708, 980788, 272946, 577214, 204441, 688765, 509702, 132370, 214373, 708827, 580442, 931332, 827969, 680353, 18598, 145638};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> strength = {989327, 956426, 194421, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> strength = {909665, 265110, 946318, 41, 16, 12, 71, 12, 979230, 138, 52, 1, 50, 22890, 7512, 32936, 335, 1, 56, 5070, 209, 21, 915567, 12, 396, 8, 44, 162, 2, 3, 1635, 2, 640, 8, 231, 1, 1, 26701, 754, 1935, 1, 79, 6, 5092, 59, 412, 1, 8};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> strength = {194712, 804092, 985923, 425138, 292822, 695028, 520217, 606409, 262826, 183956, 29125, 732462, 84883, 221642, 714436, 750587, 155324, 450396, 170989, 126590, 692380, 801178, 453471, 553745, 878446, 606822, 836655, 982663, 113773, 499553, 396415, 680130, 64602, 783697, 345337, 945890, 151959, 437598, 811817, 18557, 512001, 490807, 421813, 854424, 718148, 259090, 801017, 215502};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> strength = {943681, 681901, 546749, 1, 1, 1, 746294, 1, 1, 1, 1, 1, 1, 1, 689210, 1, 1, 1, 1, 1, 1, 1, 1, 880363, 1, 1, 937819, 1, 1, 1, 1, 1, 1, 1, 793675, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 832221, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> strength = {947468, 782669, 657942, 1, 920035, 1, 1, 1, 1, 781033, 1, 878315, 1, 1, 1, 1, 1, 1, 1, 765770, 1, 852123, 1, 1, 1, 1, 1, 1, 1, 966401, 1, 1, 810407, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 949181, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> strength = {570466, 958327, 816467, 17, 403, 953808, 734850, 5824, 917784, 921731, 161921, 1734, 823437, 3218, 81, 932681, 2704, 981643, 1232, 475, 873323, 6558, 45660, 1813, 4714, 224, 32301, 28081, 6728, 17055, 561, 15146, 842613, 5559, 1860, 783, 989, 2811, 20664, 112531, 1933, 866794, 805528, 53821, 2465, 137385, 39, 2007};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> strength = {356569, 957670, 781807, 1, 1, 1, 1, 1, 1, 1, 1, 1, 973794, 1, 1, 1, 1, 1, 1, 951037, 1, 1, 1, 1, 963543, 1, 883559, 849470, 1, 1, 1, 1, 777184, 856133, 1, 767058, 1, 1, 865946, 1, 1, 1, 1, 1, 890104, 1, 875069, 789244};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> strength = {136394, 776741, 898397, 846089, 1, 1, 1, 951189, 1, 842445, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 857080, 1, 1, 770360, 1, 1, 892411, 1, 905232, 1, 831967, 1, 823495, 1, 1, 836740, 785581, 1, 1, 724054, 1, 758448, 918758};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> strength = {790127, 459712, 830585, 1, 1, 1, 802687, 1, 1, 1, 1, 1, 1, 972891, 1, 1, 865102, 1, 1, 649408, 1, 1, 1, 1, 890842, 800427, 884138, 1, 1, 820343, 828758, 1, 819653, 1, 1, 1, 757381, 739946, 1, 1, 683607, 938428, 1, 1, 1, 793942, 729970, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> strength = {610297, 849870, 523999, 6557, 976530, 731458, 7404, 795100, 147040, 110947, 159692, 40785, 4949, 2903, 1688, 37278, 620703, 28156, 16823, 1159, 12132, 971379, 5916, 1159, 988589, 12215, 133, 1490, 911360, 920059, 544070, 40249, 514852, 852, 745070, 1105, 715897, 714696, 589133, 698317, 5683, 631612, 16453, 101000, 764881, 101, 2053, 754661};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> strength = {844350, 528147, 560959, 1, 703322, 1, 1, 490616, 1, 1, 902566, 1, 779972, 664291, 715956, 1, 1, 1, 975618, 1, 1, 806734, 434398, 510404, 1, 1, 506226, 546055, 1, 863415, 743533, 1, 625945, 903774, 1, 1, 1, 588827, 1, 1, 606336, 1, 1, 915243, 1, 1, 1, 822344};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> strength = {776677, 750246, 529703, 1, 564644, 547415, 1, 820468, 1, 882157, 645841, 585604, 1, 782460, 1, 981532, 796225, 934864, 1, 1, 1, 1, 1, 811009, 733386, 1, 766123, 973314, 1, 1, 1, 733736, 1, 1, 794577, 944511, 707624, 595080, 593254, 1, 1, 1, 939745, 1, 717347, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> strength = {97696, 711511, 581106, 810253, 1, 1, 713804, 1, 1, 1, 1, 623991, 428704, 934227, 568839, 482965, 1, 476447, 1, 646709, 1, 788894, 358405, 1, 1, 1, 724700, 646520, 1, 1, 595779, 1, 1, 579258, 864426, 1, 1, 515722, 1, 508061, 1, 778668, 1, 620469, 817316, 675041, 671350, 701628};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> strength = {381108, 452451, 973957, 995338, 1, 1, 1, 429214, 880294, 1, 500932, 926127, 997629, 1, 1, 1, 568684, 1, 1, 1, 864577, 478034, 624671, 893692, 547775, 804015, 1, 1, 431482, 578359, 1, 532723, 848361, 555453, 704422, 723331, 1, 948477, 1, 781837, 902687, 1, 646076, 1, 1, 873166, 523937, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> strength = {538507, 875851, 277004, 309992, 652662, 981948, 28810, 625267, 571545, 793877, 944348, 943622, 400981, 900409, 466155, 90919, 990736, 351591, 832548, 117131, 54881, 280019, 326729, 778096, 432296, 202337, 611874, 793295, 447779, 579776, 802066, 823453, 57596, 385569, 296196, 111016, 900888, 804755, 602244, 471208, 990412, 834365, 697514, 452801, 471584, 432247, 201841, 938101};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> strength = {267191, 362766, 373860, 1, 250745, 261414, 59800, 486130, 1, 1, 649331, 1, 1, 1, 87321, 1, 1, 76485, 1, 1, 537978, 677183, 551777, 607887, 109252, 198742, 475528, 1, 1, 710949, 1, 1, 737382, 190142, 1, 366519, 627895, 1, 370879, 185754, 740175, 1, 25704, 660219, 736730, 547379, 1, 129593};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> strength = {610297, 849870, 523999, 6557, 976530, 731458, 7404, 795100, 147040, 110947, 159692, 40785, 4949, 2903, 1688, 37278, 620703, 28156, 16823, 1159, 12132, 971379, 5916, 1159, 988589, 12215, 133, 1490, 911360, 920059, 544070, 40249, 514852, 852, 745070, 1105, 715897, 714696, 589133, 698317, 5683, 631612, 16453, 101000, 764881, 101, 2053, 754661};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> strength = {5, 7, 3, 5, 7, 3, 5, 7, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> strength = {405488, 893039, 602324, 170099, 908524, 234535, 797607, 11694, 902162, 512477, 598535, 80106, 936434, 508843, 521915, 78036, 827985, 20243, 937074, 886909, 265374, 716970, 577870, 774055, 787550, 63696, 458248, 656264, 776252, 266915, 939933, 498681, 765158, 320039, 863666, 813892, 604121, 433313, 613979, 491195, 286980, 128050, 851954, 500434, 593337, 145840, 160340, 450829};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> strength = {5, 4, 1, 5, 5, 5, 5, 5, 5};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> strength = {1, 1, 1, 9, 9, 9, 9, 9, 9};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> strength = {1, 2, 2, 6, 6, 6, 6, 6, 6};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> strength = {1, 2, 3, 7, 8, 8, 9, 9, 9};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> strength = {1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> strength = {1, 1, 1, 10, 10, 10, 10, 10, 10};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> strength = {2, 2, 1, 3, 1, 1, 3, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> strength = {2, 2, 1, 1, 3, 1, 3, 2, 1, 3, 1, 2, 1, 2, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> strength = {2, 2, 1, 3, 3, 3, 2, 2, 2, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> strength = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 8, 7, 6, 5, 4, 3, 1, 2, 3, 4, 5, 5, 6, 9, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> strength = {2, 2, 2, 10, 10, 10, 10, 10, 10};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> strength = {1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> strength = {2, 2, 2, 1, 1, 1, 100, 100, 100};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> strength = {1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> strength = {3, 3, 3, 9, 9, 9, 9, 9, 9};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> strength = {5, 5, 5, 1, 1, 1, 2, 2, 2, 9, 9, 9};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> strength = {1, 1, 1, 3, 3, 3, 4, 4, 4, 5, 5, 5};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> strength = {1, 1, 1, 2, 2, 2, 2, 2, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> strength = {5, 10, 12, 2, 2, 3, 3, 4, 4, 5, 5, 1000};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> strength = {1, 1, 1, 7, 7, 7, 7, 7, 7};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> strength = {1, 2, 3, 1, 2, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> strength = {8, 3, 2, 3, 3, 6, 6, 10, 10};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> strength = {2, 2, 1, 3, 2, 2, 3, 1, 1, 3, 1, 1, 1, 2, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> strength = {5, 4, 3, 7, 6, 5, 4, 3, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> strength = {40, 2, 1, 40, 40, 40, 40, 40, 40};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> strength = {5, 6, 3, 5, 7, 3, 5, 7, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> strength = {1, 1, 1, 3, 3, 3, 3, 3, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> strength = {1, 30, 50, 30, 50, 30, 50, 50, 50};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> strength = {1, 1, 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 2, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> strength = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> strength = {3, 3, 3, 2, 2, 2, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> strength = {1, 2, 1, 111, 111, 111, 222, 222, 222, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> strength = {3, 3, 3, 5, 5, 4, 3, 2, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> strength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> strength = {10, 5, 20, 20, 20, 30, 30, 40, 40, 50, 50, 60};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> strength = {1, 1, 4, 1, 1, 2, 2, 4, 4};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> strength = {1, 1, 1, 35, 40, 45, 50, 55, 60};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> strength = {50, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> strength = {1, 2, 3, 11, 12, 13, 1, 1, 1, 2, 2, 2};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> strength = {1, 1, 1, 7, 7, 1, 6, 6, 1, 5, 5, 1, 4, 4, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> strength = {1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> strength = {8, 8, 1, 10, 9, 8, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> strength = {1, 2, 3, 1, 1, 1, 5, 5, 5};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> strength = {10, 10, 10, 50, 50, 50, 50, 50, 50};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> strength = {2, 3, 1, 2, 3, 2, 3, 2, 3, 2, 3, 1, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> strength = {6, 6, 6, 7, 7, 6, 1, 1, 7};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> strength = {10, 10, 10, 11, 11, 11, 11, 11, 11};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> strength = {1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> strength = {1, 1, 1, 2, 2, 2, 1, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> strength = {610297, 849870, 523999, 976530, 731458, 7404, 795100, 147040, 110947, 159692, 40785, 4949, 2903, 1688, 37278, 620703, 28156, 16823, 1159, 12132, 971379, 5916, 1159, 988589, 12215, 133, 1490, 911360, 920059, 544070, 40249, 514852, 745070, 1105, 715897, 714696, 589133, 698317, 5683, 631612, 16453, 101000, 764881, 2053, 754661, 1000000, 1000000, 1000000};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> strength = {5, 5, 2, 6, 1, 1};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> strength = {2, 1, 1, 1, 1, 2, 2, 3, 3};
    TeamContestEasy* pObj = new TeamContestEasy();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23084082&rd=15493&pm=12471
********************************************************************************
#line 5 "TeamContestEasy.cpp" 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <iostream> 
#include <sstream> 
#include <set> 
using namespace std; 
bool cmp(int a,int b) 
{ 
    return a>b; 
} 
class TeamContestEasy { 
  public: 
  int worstRank(vector <int> strength) { 
    int a[50], i, j, p, s, l, r, ans = 1; 
    p = strength[0]+strength[1]+strength[2]; 
    s = strength[0]; 
    s =min(s,strength[1]); 
    s =min(strength[2],s); 
    p -=s; 
    j = 0; 
    for(i = 3; i< strength.size(); i++) 
    a[j++] = strength[i]; 
    sort(a,a+j,cmp); 
    l = 0; 
    r = (j*2)/3 - 1; 
    while(l < r) 
    { 
        if (a[l] + a[r] > p) 
        { 
            ans ++; 
            l++; 
            r--; 
        } else r--; 
    } 
    return ans; 
  } 
 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/