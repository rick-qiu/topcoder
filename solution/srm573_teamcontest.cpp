/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12470
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

class TeamContest {
public:
    int worstRank(vector<int> strength);
};

int TeamContest::worstRank(vector<int> strength) {
    int ret;
    return ret;
}


int test0() {
    vector<int> strength = {5, 7, 3, 5, 7, 3, 5, 7, 3};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {3, 9, 4, 6, 2, 6, 1, 6, 9, 1, 4, 1, 3, 8, 5};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> strength = {53, 47, 88, 79, 99, 75, 28, 54, 65, 14, 22, 13, 11, 31, 43};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {213346, 941524, 505050};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {44, 29, 29, 7, 10, 27};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {183857, 538843, 183226, 978182, 430735, 830873};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {400404, 561624, 766792, 847019, 426966, 815536, 5914, 192325, 715917};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {713373, 207435, 350867, 185744, 84951, 671009, 499410, 934708, 349211};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {146, 93, 163, 104, 161, 143, 33, 165, 29, 46, 105, 23};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {6, 3, 4, 4, 3, 4, 4, 3, 5, 6, 6, 3};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1389, 1202, 85, 517, 1105, 1113, 990, 1620, 143, 1955, 1889, 450};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {924386, 963888, 920449, 482763, 221275, 179590, 855776, 238756, 608779, 525653, 396064, 346523, 796212, 155976, 722880};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {415336, 611423, 280838, 158021, 565108, 143221, 168560, 169482, 13051, 8519, 477686, 101466, 338837, 90291, 524942};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {58, 74, 100, 67, 96, 4, 80, 102, 54, 49, 74, 46, 83, 89, 19};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {230988, 692473, 829904, 810585, 841281, 869742, 205319, 182994, 745583, 710632, 364907, 150624, 131777, 393757, 983482};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {4880, 11109, 439, 1074, 775, 5446, 7110, 9084, 7809, 193, 5852, 1025, 3055, 11861, 12490};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {228, 55, 140, 11, 5, 66, 234, 74, 37, 127, 146, 113, 142, 66, 96, 79, 47, 106};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {10649, 7193, 2880, 7286, 2839, 7945, 7372, 1487, 5631, 2033, 1633, 9210, 141, 164, 4290, 6107, 3201, 6114};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {3, 3, 8, 4, 7, 8, 2, 2, 3, 8, 4, 2, 4, 5, 1, 6, 1, 6};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {7, 6, 3, 6, 5, 7, 4, 3, 4, 7, 5, 6, 4, 6, 2, 10, 3, 2};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {228567, 15180, 281697, 677684, 982627, 894198, 591743, 818919, 901955, 914442, 356653, 508996, 205053, 327877, 627396, 171225, 509935, 993546};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {993168, 723069, 919501, 250340, 681590, 281467, 82770, 478546, 9548, 17445, 948929, 919823, 711637, 466531, 531583, 114907, 901381, 3821, 155130, 545119, 345768};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {318, 210, 235, 331, 26, 211, 51, 250, 257, 117, 195, 263, 107, 276, 93, 11, 29, 101, 150, 219, 282};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {833081, 894703, 347589, 78766, 566408, 179293, 375974, 45613, 887753, 85585, 761958, 281999, 984202, 330094, 973166, 25515, 870905, 222883, 287147, 985307, 150671};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {935665, 941001, 179705, 742047, 295037, 715116, 659203, 160533, 121606, 940242, 617590, 4079, 377475, 23633, 958357, 465660, 816196, 356138, 307664, 726884, 767584};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {886190, 414300, 508081, 625435, 25329, 783255, 500693, 787302, 408568, 548289, 834705, 549772, 579719, 343389, 602096, 396171, 734872, 710294, 498495, 227405, 966750};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {14, 2, 14, 10, 13, 9, 17, 11, 3, 8, 12, 12, 21, 12, 13, 9, 18, 4, 10, 2, 15};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {57052, 85095, 84634, 32827, 23682, 56291, 58723, 14893, 45400, 54512, 33714, 36523, 83213, 18240, 26145, 39673, 16237, 28673, 52436, 35699, 16955, 66724, 62420, 80128};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {33, 84, 89, 49, 49, 19, 28, 78, 8, 33, 51, 3, 33, 11, 51, 33, 44, 55, 29, 25, 14, 30, 72, 51};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2112, 1294, 2711, 2255, 1366, 1500, 1243, 2467, 2198, 1284, 2295, 2667, 895, 683, 1466, 1426, 217, 2312, 1653, 1779, 575, 952, 301, 113};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {875383, 359870, 329594, 644359, 372155, 324099, 525218, 397470, 822507, 112355, 72475, 419068, 807820, 762112, 438057, 414597, 237223, 485314, 596191, 455805, 123757, 459125, 766753, 180691};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {720777, 714578, 451543, 58897, 614842, 554419, 679486, 575619, 61226, 421737, 175286, 593238, 949238, 947731, 249695, 77270, 27074, 767676, 750524, 447469, 453596, 552936, 659638, 104725};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {318617, 289471, 92878, 302875, 60308, 149529, 122909, 134904, 80966, 5439, 250702, 352935, 269738, 194436, 242097, 286670, 142040, 353637, 132446, 37069, 127421, 36860, 69047, 121804};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {3, 2, 5, 6, 5, 2, 5, 3, 5, 5, 5, 4, 5, 4, 2, 2, 6, 2, 5, 2, 6, 7, 6, 6};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {381631, 549804, 313860, 21929, 381716, 56934, 79927, 192027, 207673, 162487, 375299, 11367, 133889, 178427, 196290, 491101, 162067, 170826, 206567, 111309, 363549, 137282, 283626, 54214, 129574, 122157, 289696};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {888039, 700826, 998297, 60651, 533645, 547558, 565985, 509515, 369647, 781441, 917914, 119442, 516733, 830067, 71919, 502556, 655862, 181658, 766028, 637683, 850402, 682095, 566473, 412424, 955242, 470267, 749345};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {817434, 668171, 568942, 949620, 780319, 786733, 492990, 368465, 588310, 239086, 351338, 32726, 27976, 410384, 58873, 215390, 821730, 755842, 79887, 275268, 624941, 412283, 828409, 269419, 174930, 622150, 784592};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {828798, 975408, 350859, 473168, 766256, 934623, 239170, 356467, 139213, 432276, 959325, 360745, 151648, 815941, 219455, 782402, 218620, 53867, 421192, 310489, 189792, 596179, 621760, 192003, 119865, 912974, 534285};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {621960, 726376, 830078, 498220, 434445, 838878, 722165, 930218, 660118, 101883, 960640, 809670, 943149, 577160, 658466, 3692, 221780, 612067, 756640, 4656, 775034, 693232, 488646, 724436, 469529, 538540, 160145};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {597, 978, 1162, 392, 337, 650, 239, 48, 214, 562, 472, 227, 1356, 310, 1685, 1452, 718, 309, 1683, 1477, 232, 866, 1024, 349, 12, 571, 737};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {20563, 7503, 5242, 16092, 20040, 3201, 19982, 15526, 15826, 6529, 4305, 4687, 5420, 22498, 21082, 12997, 13317, 18084, 370, 14504, 21010, 12769, 15332, 20944, 3042, 18155, 12114};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {517662, 185107, 487784, 765142, 889259, 930239, 392855, 909910, 804125, 556263, 654047, 996806, 851278, 67217, 309679, 914986, 92029, 105162, 870699, 591446, 877700, 212869, 643747, 78219, 196116, 105160, 657962};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {869081, 973874, 946679, 794770, 558118, 329364, 256501, 251752, 284106, 534214, 993991, 988392, 392735, 799612, 266754, 574464, 798144, 740159, 581831, 819478, 698208, 889749, 998876, 643262, 839288, 136462, 730681, 383829, 264280, 570222};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {23, 28, 13, 5, 30, 16, 12, 13, 23, 17, 6, 10, 7, 2, 6, 10, 2, 22, 1, 14, 11, 14, 14, 5, 1, 16, 13, 10, 15, 26};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {580362, 896160, 360473, 281906, 272666, 809033, 532020, 617486, 200010, 327065, 83678, 683798, 526936, 511018, 332560, 442761, 173911, 315146, 802872, 342488, 465983, 655687, 288206, 274971, 574539, 152488, 508602, 563285, 600466, 428359};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {220588, 155491, 142515, 240162, 101307, 154882, 216028, 220377, 229180, 94384, 208125, 78699, 93972, 78031, 87317, 99687, 206352, 7625, 10796, 31257, 19266, 25261, 154406, 188646, 242237, 45812, 240629, 104775, 123090, 56668};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {815085, 495544, 822797, 690761, 826035, 638820, 143024, 647097, 26203, 934643, 826006, 33193, 436665, 555073, 52588, 117741, 918646, 420818, 231769, 858252, 684127, 406822, 197886, 163840, 51252, 459808, 189581, 568702, 592077, 254809};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {509509, 687402, 441701, 693890, 849950, 486213, 201053, 672924, 114455, 292949, 676428, 819838, 570585, 787514, 428173, 162818, 242425, 235470, 751272, 394685, 311373, 561893, 3434, 301788, 708403, 202810, 222428, 388282, 838960, 63734};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {135, 52, 180, 107, 78, 87, 96, 102, 104, 157, 174, 142, 27, 108, 135, 18, 78, 92, 20, 68, 135, 47, 48, 97, 146, 156, 104, 146, 22, 175};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {22, 1, 46, 26, 11, 31, 11, 20, 20, 8, 1, 26, 12, 38, 13, 40, 10, 41, 44, 24, 14, 23, 3, 45, 27, 42, 3, 42, 19, 41};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {207015, 88569, 796976, 190437, 229122, 804364, 551135, 230286, 122617, 532836, 940138, 935718, 616523, 418709, 303622, 494229, 712207, 564902, 783447, 526077, 240992, 840531, 705411, 645249, 786988, 853186, 522896, 562440, 93217, 231826};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {893903, 801712, 987191, 144273, 342614, 856503, 127607, 934744, 468077, 160775, 27753, 819660, 372471, 872571, 204102, 477051, 627261, 505975, 308689, 357254, 867888, 158493, 562272, 688674, 324886, 894101, 22788, 905552, 716694, 404942, 730562, 797285, 166018};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {909045, 779015, 864210, 522016, 421529, 181258, 486903, 136134, 956159, 976113, 545432, 749510, 468316, 244293, 420168, 818978, 519470, 188045, 662764, 959477, 464824, 544108, 892056, 396684, 432871, 74052, 605039, 266408, 372035, 629965, 106218, 515924, 753535};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {785, 517, 938, 601, 933, 75, 628, 115, 569, 773, 948, 761, 448, 687, 320, 197, 707, 409, 309, 331, 187, 101, 477, 362, 163, 424, 216, 167, 366, 909, 705, 220, 178};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {902230, 553340, 633498, 125697, 188904, 215131, 979177, 670485, 67998, 47990, 188400, 308988, 933344, 125180, 269300, 339219, 494140, 789667, 125835, 677526, 695545, 171782, 690537, 877856, 171470, 634657, 303959, 445278, 750777, 886961, 884449, 657595, 298869};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {205808, 173365, 127683, 80642, 28647, 148938, 126268, 93774, 206932, 126039, 75754, 65219, 205140, 184122, 115938, 198726, 194199, 8218, 81587, 207503, 151628, 6857, 85080, 122849, 148011, 126531, 207830, 101012, 52958, 172883, 95224, 3854, 143757};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {625371, 291551, 928024, 241934, 292181, 211706, 480105, 978007, 545576, 291938, 566801, 426691, 188723, 370313, 611978, 445329, 630406, 588892, 146206, 939346, 517826, 468769, 887072, 502990, 248758, 518925, 447973, 914815, 425618, 605858, 93117, 700361, 355168};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {425040, 231791, 404200, 167775, 226652, 299575, 94805, 394148, 435200, 338853, 470716, 400008, 321042, 35692, 473156, 400264, 182214, 343713, 353695, 206297, 417292, 383888, 472799, 410780, 191098, 107041, 88319, 152244, 209735, 369291, 256059, 150840, 143742};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {726328, 728335, 459400, 483806, 792657, 984502, 45322, 518930, 263112, 989628, 792092, 339691, 63109, 337974, 263998, 961163, 878108, 534817, 584854, 763595, 757173, 893284, 929165, 319742, 779637, 99345, 769468, 198400, 417379, 868532, 905713, 468064, 69090};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1, 9, 1, 5, 7, 6, 2, 4, 6, 3, 2, 8, 4, 7, 6, 2, 5, 3, 5, 3, 2, 9, 7, 1, 4, 4, 1, 7, 7, 7, 9, 9, 2};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {22386, 156146, 432991, 163517, 807570, 834476, 408719, 913960, 260848, 712635, 500233, 638014, 608107, 501674, 959756, 364225, 939220, 956562, 870300, 264935, 512469, 812438, 812607, 463162, 507276, 142016, 35828, 840456, 961666, 408963, 97646, 946792, 570141};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {820995, 776083, 954760, 672572, 735472, 435675, 227509, 745112, 357596, 247952, 9169, 268452, 635661, 538990, 684031, 52336, 880480, 476228, 354928, 275755, 889923, 50201, 477240, 664600, 916497, 307730, 822268, 697801, 600169, 342328, 470767, 797401, 231391, 427988, 734503, 198199};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {958786, 787044, 735459, 660632, 26373, 601744, 169366, 283317, 609923, 746619, 836328, 660684, 229489, 805781, 175412, 483323, 704237, 114686, 378406, 757779, 52281, 173884, 846810, 729674, 866407, 380898, 898626, 125653, 826610, 578949, 814532, 688154, 683078, 304160, 583686, 642331};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {117, 166, 107, 162, 47, 118, 124, 56, 142, 58, 117, 39, 140, 82, 16, 63, 44, 83, 14, 31, 17, 107, 22, 146, 22, 29, 93, 170, 23, 39, 91, 59, 50, 72, 123, 137};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {167716, 155982, 221722, 56657, 149045, 214110, 206721, 568, 44953, 128060, 110085, 233064, 146655, 18045, 126474, 43609, 127551, 22467, 1142, 79210, 210527, 231743, 139725, 167310, 147315, 191424, 209787, 11925, 6972, 168246, 33545, 69330, 11344, 65672, 50195, 191470};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {912197, 629940, 665832, 321681, 847513, 831502, 847069, 818517, 345133, 570912, 692608, 203081, 473737, 934484, 675107, 858728, 930631, 330696, 290094, 314750, 23004, 551956, 802316, 704461, 905489, 110890, 896666, 816813, 454700, 348616, 862190, 875731, 416529, 493032, 698377, 569444};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1500, 900, 2588, 2525, 2288, 1311, 692, 24, 79, 2576, 1622, 713, 1486, 752, 1881, 1074, 740, 1700, 176, 92, 905, 255, 801, 157, 1459, 1878, 215, 2257, 26, 2507, 1242, 1874, 669, 1559, 1752, 2029};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {150932, 981880, 203590, 71762, 579114, 359601, 781737, 466571, 286470, 275401, 529843, 255037, 626770, 299313, 203217, 854181, 388659, 180460, 961934, 286083, 409998, 459907, 35590, 84084, 762064, 46567, 66723, 958682, 233920, 749482, 497934, 527863, 48485, 138762, 330177, 710142};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {437398, 376933, 233752, 535703, 246366, 83847, 486605, 497259, 237623, 584050, 127584, 39228, 9819, 19542, 435557, 583420, 89092, 55222, 397494, 476284, 272663, 346489, 59390, 319279, 370084, 410463, 486626, 31617, 220127, 229339, 286963, 17577, 521342, 388454, 306659, 480385};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {676631, 432123, 584517, 190725, 396941, 638308, 980523, 220112, 247320, 841924, 361651, 71440, 523400, 142638, 724003, 258304, 497575, 871120, 444157, 475941, 407642, 191039, 635254, 265720, 450266, 379993, 169804, 653163, 856108, 809361, 144633, 135169, 432856, 268108, 911584, 238842};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {213311, 697328, 827518, 93319, 63765, 958263, 410856, 853407, 510995, 491408, 794394, 420276, 204589, 294135, 880054, 768562, 661776, 498806, 739635, 378058, 416212, 233751, 576380, 395624, 601015, 761939, 351457, 461003, 68577, 303890, 449833, 253522, 841120, 449650, 543742, 134949};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {442502, 60129, 434207, 993510, 181239, 452871, 20222, 407818, 678222, 708469, 184004, 913688, 533734, 162166, 746091, 981191, 956100, 398302, 574342, 574981, 26901, 840958, 186987, 739550, 917923, 284332, 540252, 516812, 910401, 628394, 124520, 790839, 650410, 571012, 150923, 34992};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {4, 3, 3, 4, 1, 1, 4, 3, 2, 4, 2, 2, 1, 3, 3, 1, 1, 2, 3, 2, 1, 2, 3, 2, 3, 1, 3, 1, 1, 4, 2, 2, 1, 4, 3, 3, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {5198, 5117, 4166, 1007, 249, 4965, 772, 1800, 4008, 5275, 228, 192, 665, 1546, 38, 5176, 2964, 1689, 854, 2696, 4556, 3375, 1920, 4551, 3070, 4447, 327, 2369, 600, 2791, 1246, 4352, 3380, 1055, 1484, 3327, 1310, 4639, 707};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {977385, 670861, 702152, 418611, 695197, 52242, 176765, 607691, 149739, 460289, 552730, 79132, 576154, 118957, 886326, 154091, 527840, 166512, 343204, 346969, 464789, 869845, 825840, 975271, 667134, 733160, 865001, 816092, 58190, 200843, 43977, 232513, 575784, 541486, 504880, 264895, 547652, 561013, 895701};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {58532, 79165, 58069, 70468, 46051, 79101, 26172, 65539, 22193, 74628, 22006, 6158, 34331, 73326, 62002, 20142, 44705, 77278, 17271, 1443, 9461, 36065, 47033, 7283, 10815, 66083, 30008, 6347, 41050, 18459, 25078, 62518, 83039, 23825, 83539, 46587, 47004, 31936, 55863};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {650067, 851795, 821298, 647544, 766601, 605066, 822740, 318288, 232859, 20749, 692756, 836313, 155728, 789996, 774064, 232282, 191266, 215379, 492596, 568005, 723802, 639528, 780236, 729258, 656993, 900618, 101177, 405982, 903343, 175163, 535205, 741216, 199677, 578813, 105433, 172092, 503900, 706600, 64623};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {982489, 739112, 451668, 140554, 789674, 217185, 824608, 789040, 218967, 736273, 251284, 811822, 898330, 910163, 865170, 426851, 755626, 87881, 153143, 506390, 211153, 929630, 904568, 909424, 931976, 672192, 283265, 195492, 632511, 264834, 941676, 647687, 184029, 93423, 3597, 287475, 62431, 629784, 233654};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {432420, 841041, 757066, 382472, 652966, 724140, 266542, 96097, 262870, 530166, 936122, 330300, 217540, 779754, 249965, 666407, 776232, 871147, 698739, 861891, 235838, 15931, 121135, 382464, 360309, 402681, 766476, 723374, 35918, 201121, 885465, 606418, 639228, 279891, 114525, 83159, 622037, 448384, 973178};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1, 3, 3, 2, 3, 1, 3, 3, 3, 3, 2, 3, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 3, 3, 2, 2, 1, 2, 3, 1, 1, 2, 1, 3, 2, 2, 1, 2, 3};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {1, 3, 2, 3, 2, 3, 3, 1, 1, 3, 3, 1, 1, 2, 3, 3, 2, 3, 3, 2, 3, 3, 3, 2, 2, 1, 2, 3, 1, 2, 1, 2, 3, 3, 2, 2, 3, 2, 2};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2840, 535, 1156, 1902, 1439, 2925, 2801, 2852, 871, 1530, 2962, 1674, 2336, 521, 419, 1115, 1521, 1179, 1390, 22, 1480, 878, 2721, 2162, 859, 1477, 371, 2163, 55, 1915, 935, 77, 2543, 911, 867, 1002, 803, 143, 2707};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {728935, 126966, 196117, 70933, 652538, 230031, 220008, 170949, 207149, 748007, 156919, 368745, 750029, 485044, 640194, 40651, 631911, 446187, 692659, 483043, 525705, 661121, 632025, 309374, 526758, 5873, 683669, 768970, 258119, 414688, 203321, 54599, 632996, 572509, 686361, 396855, 310078, 596968, 799631};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {127499, 54100, 599984, 437917, 697776, 815281, 795112, 357357, 372205, 27089, 317866, 434686, 351431, 263759, 14121, 880289, 800811, 548787, 52794, 490718, 383392, 162417, 278170, 981898, 358596, 762466, 400316, 462675, 983673, 353524, 917233, 521544, 920201, 853208, 521500, 460476, 233212, 841883, 756915};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {164, 162, 158, 51, 78, 32, 89, 56, 62, 53, 143, 142, 27, 96, 117, 37, 167, 28, 112, 64, 140, 50, 59, 163, 110, 167, 94, 123, 17, 12, 133, 42, 18, 108, 19, 90, 60, 8, 57, 88, 32, 71};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {768724, 698308, 659562, 786967, 489618, 49167, 100081, 685235, 609139, 598354, 600646, 498478, 674144, 265851, 226836, 355365, 348542, 540339, 358788, 313119, 553455, 589395, 72922, 69103, 454370, 251643, 613472, 492514, 459568, 704302, 625775, 286872, 442338, 402192, 806998, 656873, 254383, 344119, 484137, 702535, 543376, 708026};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {715960, 713029, 800873, 774275, 204391, 662379, 322333, 500196, 460115, 488641, 579854, 38460, 517880, 627632, 914109, 422442, 392754, 375651, 461900, 305800, 770882, 660396, 726519, 35396, 51477, 8901, 765587, 810269, 859858, 57903, 695928, 608383, 688933, 570236, 517075, 556665, 497136, 260928, 449632, 269362, 603848, 359396};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {16127, 18834, 23714, 20231, 20335, 2794, 13863, 9900, 11436, 16724, 24658, 9484, 15073, 13813, 598, 8764, 10595, 20663, 12748, 172, 16684, 13764, 9339, 7208, 23780, 9535, 11633, 13024, 11583, 21077, 11325, 19253, 11417, 8662, 19178, 24051, 22552, 3532, 1979, 8261, 11144, 16687};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {498905, 519496, 263018, 93300, 497377, 166749, 106361, 457690, 317321, 442204, 508381, 302986, 471851, 226368, 34662, 367448, 25688, 179957, 409529, 210619, 194420, 198938, 302569, 212544, 208980, 175419, 349882, 456889, 89118, 108293, 528438, 214555, 40368, 321458, 132957, 99412, 225133, 475597, 172025, 1309, 493833, 508054};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {747791, 910826, 538606, 832410, 852729, 55556, 434487, 201954, 910061, 244174, 361744, 835994, 923488, 888108, 22927, 470843, 286533, 920580, 76104, 176942, 944278, 635031, 907565, 186226, 397608, 696140, 239788, 638751, 277126, 561900, 292250, 978820, 374500, 313473, 108635, 421576, 623116, 704568, 936774, 809426, 258520, 419806};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {776235, 431502, 721961, 785268, 158554, 690620, 128942, 686313, 5248, 152355, 764331, 13213, 38675, 153032, 606576, 447875, 34052, 775040, 815977, 703, 645770, 261484, 318156, 624167, 503247, 363271, 636630, 681985, 794772, 31350, 558509, 688985, 792374, 741047, 610243, 489075, 215637, 330161, 131715, 542642, 710921, 776654};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {574038, 309012, 689627, 266766, 204352, 290422, 284531, 613609, 753458, 621364, 707505, 392, 87553, 191008, 149791, 152869, 84931, 753361, 397059, 633368, 670098, 634851, 722327, 38550, 616968, 325855, 637293, 302309, 199083, 309551, 266345, 108868, 600352, 171939, 629063, 215148, 269504, 56281, 180257, 578375, 201747, 426879};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {655267, 775441, 356081, 578145, 379423, 216885, 578418, 165680, 878512, 905881, 234431, 150387, 830229, 79899, 53269, 756344, 653043, 231448, 862500, 247818, 743225, 793953, 629928, 5799, 365280, 344356, 176586, 97256, 282203, 266588, 803112, 269091, 529385, 242666, 164853, 779803, 820110, 831887, 209564, 349506, 257836, 394881};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {987932, 129465, 741004, 429185, 687399, 631176, 601231, 539465, 278001, 845013, 23989, 9786, 893055, 395995, 417531, 399953, 311193, 919190, 304503, 133447, 941803, 755267, 266937, 855511, 119907, 407343, 128929, 658173, 542798, 788985, 300371, 665092, 496340, 890611, 581465, 285437, 246144, 88505, 713758, 1107, 564144, 675277};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {38, 9, 213, 88, 57, 143, 110, 160, 186, 77, 134, 166, 22, 12, 68, 7, 179, 95, 234, 27, 142, 176, 126, 28, 20, 73, 63, 3, 21, 69, 156, 151, 158, 205, 162, 235, 53, 157, 158, 1, 153, 6};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {649284, 776900, 250807, 433219, 818224, 361863, 37374, 428926, 922599, 168093, 796489, 357371, 909831, 536712, 286012, 19314, 987929, 150721, 963828, 963078, 588786, 220756, 362315, 595754, 533253, 975173, 20143, 846981, 44357, 784773, 209844, 383761, 513459, 19554, 662204, 420253, 994127, 415008, 890972, 297644, 430056, 510062};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {27653, 32357, 5343, 2295, 7299, 22147, 28185, 19925, 21425, 457, 38821, 38208, 4398, 14320, 7003, 11209, 23444, 8860, 39731, 6665, 20882, 43697, 4745, 35280, 41289, 4728, 32794, 4709, 41293, 41238, 13724, 40389, 14542, 16732, 25240, 19041, 30282, 42934, 13424, 21175, 36044, 21293};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {9, 10, 10, 1, 2, 6, 9, 2, 9, 7, 3, 8, 9, 8, 1, 4, 8, 2, 1, 3, 10, 8, 3, 4, 5, 5, 10, 3, 2, 9, 3, 7, 10, 7, 3, 5, 3, 1, 1, 4, 2, 5, 2, 2, 10};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {5, 5, 6, 6, 2, 5, 2, 3, 4, 5, 5, 4, 5, 6, 6, 1, 1, 2, 5, 6, 1, 1, 2, 6, 4, 4, 4, 4, 2, 4, 5, 4, 4, 3, 3, 6, 2, 5, 2, 3, 2, 6, 1, 1, 2};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {987677, 758158, 835948, 173065, 83979, 398590, 176187, 54269, 750951, 707097, 331811, 48652, 433145, 576072, 21735, 900772, 123541, 994105, 150093, 151732, 77022, 625214, 945399, 54443, 549216, 836331, 224892, 660137, 262695, 822456, 834584, 654394, 405777, 122621, 143608, 157886, 917687, 702557, 630206, 904839, 959991, 849178, 334281, 918038, 379494};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {3487, 3591, 4190, 4313, 3618, 3738, 373, 1055, 3056, 2350, 2736, 4085, 3459, 1621, 3913, 2943, 3247, 3710, 3372, 640, 687, 3028, 4214, 3614, 2941, 3506, 1093, 1319, 3746, 4315, 330, 2279, 1681, 2148, 2530, 1940, 420, 653, 2576, 1613, 232, 2010, 1434, 4063, 2033};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {8, 14, 9, 11, 10, 7, 6, 5, 14, 7, 1, 2, 10, 8, 7, 3, 8, 4, 8, 1, 5, 3, 9, 4, 10, 3, 8, 8, 14, 6, 4, 11, 12, 12, 1, 4, 9, 10, 3, 13, 6, 1, 9, 13, 2};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {776650, 548738, 833006, 720298, 208236, 380147, 333492, 704423, 665068, 225239, 4710, 394887, 123041, 801325, 543328, 244276, 774008, 140555, 712828, 760320, 94896, 504827, 358828, 231809, 60754, 133748, 411569, 870135, 489896, 176477, 162800, 701341, 370172, 70339, 517291, 780056, 742690, 725938, 3162, 56298, 606464, 621713, 651696, 532275, 780958};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {589728, 510253, 874500, 614487, 338794, 423913, 107313, 391605, 947148, 292192, 634345, 23879, 561321, 5819, 751783, 519201, 78005, 9622, 381318, 782975, 755268, 941882, 89025, 597620, 198783, 266420, 583328, 81835, 633508, 708008, 434631, 581434, 42796, 8944, 437322, 691439, 110765, 512486, 821339, 338195, 967556, 690836, 520056, 85885, 370807};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2, 3, 1, 2, 3, 2, 1, 2, 3, 3, 2, 1, 3, 3, 3, 1, 3, 2, 1, 2, 1, 1, 3, 3, 1, 1, 2, 1, 2, 1, 2, 3, 1, 1, 3, 2, 2, 1, 3, 3, 1, 1, 1, 2, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {903920, 355314, 375018, 458190, 934765, 518764, 153025, 544372, 21873, 830106, 287290, 219649, 695802, 787807, 12727, 576027, 892805, 833931, 925968, 146131, 93102, 449687, 945802, 937846, 46660, 935597, 290532, 958370, 663695, 765015, 681601, 292369, 185088, 641492, 482658, 455584, 207151, 999334, 162023, 67638, 707320, 633654, 318344, 198971, 328268};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {867, 347, 423, 286, 603, 584, 802, 874, 633, 250, 401, 320, 193, 681, 436, 649, 293, 28, 864, 137, 512, 144, 357, 448, 671, 305, 937, 781, 640, 784, 165, 930, 138, 145, 589, 800, 268, 440, 429, 24, 425, 688, 647, 666, 321};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {740550, 530938, 741517, 507035, 356181, 200202, 295181, 977375, 486252, 91935, 603657, 350506, 331009, 504483, 783134, 403549, 686711, 493861, 836597, 813579, 917439, 357050, 927750, 705289, 751319, 724964, 554923, 175249, 537632, 813469, 258264, 209333, 167974, 994374, 741943, 800132, 163606, 549917, 880778, 975063, 289660, 23003, 277400, 951254, 294979};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {562459, 410301, 725823, 378096, 432774, 536469, 477216, 384020, 758097, 940918, 161796, 811204, 678882, 875361, 647134, 277091, 919015, 422754, 540202, 481309, 546492, 84274, 445582, 886359, 106946, 25985, 400623, 122375, 850093, 577351, 589719, 913724, 586846, 536861, 146723, 785686, 236708, 284929, 844414, 485776, 483880, 656298, 208337, 284726, 813769};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {532884, 293397, 751245, 252151, 548810, 205949, 65732, 907024, 735047, 633561, 342587, 826220, 445353, 706316, 270464, 974161, 527267, 340112, 401731, 295707, 653085, 106389, 189956, 928766, 326158, 741358, 151610, 519719, 749357, 105124, 582421, 663462, 702160, 117169, 364741, 246618, 370867, 816227, 138812, 141025, 632162, 732180, 617310, 315426, 770418};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {582159, 278670, 329216, 545361, 289060, 841691, 790345, 952809, 334988, 89340, 858411, 863666, 830022, 228070, 6105, 312422, 852539, 525524, 662693, 867022, 757557, 676444, 635758, 669612, 918318, 252751, 31844, 142546, 738129, 419611, 424388, 240215, 297815, 327205, 11507, 891707, 236732, 15602, 589083, 310174, 511355, 787235, 752667, 699319, 952687};
    TeamContest* pObj = new TeamContest();
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
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {123, 142, 136, 36, 45, 105, 132, 67, 56, 61, 39, 80, 93, 121, 66, 59, 111, 120, 137, 23, 82, 88, 92, 17, 96, 116, 65, 41, 74, 38, 124, 4, 129, 33, 53, 67, 33, 131, 3, 7, 70, 19, 126, 86, 22, 20, 12, 42};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {817972, 602883, 911504, 35255, 44709, 203648, 121020, 451470, 151830, 39636, 178625, 623552, 256115, 458422, 362964, 384285, 78936, 94205, 617590, 646457, 641767, 720174, 158842, 383371, 655505, 739687, 121195, 225044, 728130, 479602, 23408, 189946, 593842, 267064, 84308, 317115, 129200, 1628, 457031, 577977, 577317, 323205, 136985, 813996, 95970, 610577, 57401, 896275};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {244, 267, 280, 160, 211, 131, 7, 44, 3, 282, 210, 261, 143, 181, 275, 186, 129, 186, 145, 139, 140, 145, 164, 140, 223, 43, 146, 183, 86, 40, 162, 160, 77, 148, 297, 136, 243, 263, 243, 217, 127, 252, 276, 33, 295, 81, 129, 225};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {927761, 723573, 994241, 945767, 709921, 206160, 15081, 142103, 438863, 363385, 218661, 952856, 8348, 212523, 39326, 680351, 882122, 290232, 503795, 304052, 966569, 150482, 536712, 525570, 923655, 723275, 29367, 914750, 251419, 800437, 387573, 3620, 8655, 785686, 573635, 621596, 264991, 385988, 649679, 880156, 189786, 987854, 150215, 385663, 528396, 883523, 892690, 812187};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {7, 13, 13, 4, 3, 3, 9, 8, 10, 5, 9, 11, 11, 11, 11, 1, 12, 5, 6, 10, 10, 8, 8, 11, 1, 4, 10, 10, 11, 11, 4, 8, 2, 1, 2, 7, 7, 6, 6, 6, 10, 5, 7, 8, 7, 7, 8, 12};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {839336, 818854, 536522, 798565, 178509, 297990, 439212, 356842, 109739, 807374, 140814, 111927, 336463, 674668, 381702, 890695, 823515, 327695, 567263, 649124, 433795, 352536, 477782, 883995, 422021, 283792, 66757, 24360, 451667, 841576, 698906, 239968, 260558, 607738, 193891, 902670, 734160, 169631, 91560, 637941, 857285, 619162, 501844, 199012, 150199, 838114, 140689, 279639};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {276717, 235629, 310717, 2308, 224277, 81347, 308192, 339222, 148889, 246737, 194950, 112147, 126794, 70046, 281962, 314195, 336543, 239174, 267204, 304601, 266765, 277002, 260087, 90773, 146997, 40278, 197207, 50020, 315802, 123987, 152341, 212002, 63229, 190787, 201401, 275663, 220311, 307962, 20235, 96894, 269090, 315165, 320830, 143786, 103380, 45826, 12841, 150260};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {663430, 834378, 503885, 657605, 513193, 34833, 835576, 661888, 465904, 295770, 40428, 818890, 170019, 324485, 72165, 134541, 190488, 185642, 552821, 7973, 548954, 843152, 764711, 103880, 68576, 220841, 533033, 504296, 908105, 562017, 354426, 782109, 776873, 874305, 9331, 740416, 451196, 453882, 343108, 652460, 724573, 57523, 643527, 8675, 889388, 425038, 79189, 703832};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2, 3, 5, 5, 5, 5, 5, 5, 2, 5, 2, 5, 5, 3, 4, 1, 2, 5, 3, 5, 3, 4, 2, 3, 4, 2, 3, 1, 3, 2, 1, 2, 2, 1, 1, 5, 5, 1, 1, 4, 3, 2, 3, 2, 4, 5, 3, 3};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {371465, 460619, 171685, 372658, 154179, 208407, 60260, 53707, 382615, 23478, 492888, 494051, 177908, 395075, 448477, 230043, 305130, 82486, 68049, 246734, 412664, 73981, 109611, 124968, 522995, 91739, 143782, 195809, 615, 65701, 280227, 325413, 215727, 463548, 453180, 484263, 454011, 346125, 163575, 15931, 358594, 273701, 47006, 391, 323949, 23057, 84940, 1669};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {542918, 596084, 688165, 28825, 940871, 420330, 171907, 959779, 158666, 458447, 925889, 579204, 142536, 226986, 96864, 949353, 359890, 995215, 438791, 614659, 752610, 964186, 264231, 88493, 734230, 777211, 285290, 619732, 589224, 977677, 315732, 834199, 369788, 63295, 11335, 197433, 553747, 330767, 929694, 887734, 291601, 766479, 255447, 744434, 60883, 543345, 117651, 372885};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {302938, 230738, 964794, 46460, 194456, 845389, 944568, 238899, 150662, 887437, 882270, 381229, 809378, 558649, 625183, 126460, 433342, 262492, 511957, 975424, 824751, 689392, 945567, 608491, 923382, 226804, 690074, 875227, 7783, 300165, 618992, 244954, 405089, 837872, 929054, 793740, 328236, 67382, 530044, 872539, 413781, 401649, 103273, 785529, 746682, 907817, 463737, 120453};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {615681, 554293, 550701, 349929, 847545, 315840, 438841, 276223, 878000, 179222, 579967, 259948, 752677, 450346, 284891, 798667, 410382, 116440, 640189, 367523, 656268, 405708, 80268, 388518, 865887, 979767, 239271, 881778, 295644, 777418, 579245, 642535, 342126, 549782, 31629, 740934, 886668, 105326, 714984, 763094, 924961, 282495, 698448, 979394, 165575, 612035, 385779, 740781};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {176958, 1518, 145391, 154287, 66387, 71463, 76808, 164635, 66217, 7054, 30144, 174722, 28227, 57969, 26167, 162791, 137293, 134840, 89158, 2208, 21634, 103195, 165924, 168157, 55160, 105072, 126290, 95736, 71007, 25283, 123956, 118992, 103160, 102396, 58990, 114358, 66605, 98655, 165316, 22603, 77118, 55386, 23214, 124473, 158361, 68715, 9751, 38261};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {216951, 240699, 78013, 31816, 219613, 177988, 465562, 294481, 410116, 986775, 888169, 132746, 662305, 95227, 443442, 939201, 157665, 203194, 833271, 995675, 62929, 74738, 976231, 855743, 618653, 113279, 142147, 323414, 990726, 981623, 221262, 522733, 409968, 40812, 344354, 123382, 692301, 661757, 99059, 458007, 391488, 739925, 383480, 152074, 902773, 427305, 551750, 790469};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {894052, 946108, 882559, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {935676, 847327, 932594, 1, 920799, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 863788, 1, 1, 1, 865312, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {926635, 937648, 853414, 914918, 993065, 541939, 212222, 261871, 330305, 40834, 750053, 558859, 63412, 86294, 122967, 211512, 245266, 667692, 644958, 437298, 247290, 37196, 505696, 78555, 518973, 76069, 667666, 426884, 798881, 841567, 795531, 425115, 966466, 269597, 327603, 112177, 833106, 283702, 2458, 97445, 976960, 331519, 659941, 502962, 734903, 534374, 67299, 467731};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {880366, 670049, 973097, 736815, 1, 1, 2, 145, 1, 2, 210, 670754, 1, 1, 1, 8, 1, 1, 1, 1, 17, 1, 1, 899916, 26, 1, 1, 1, 682166, 1, 1, 33, 756288, 1, 975160, 1, 1, 1, 1, 1, 1, 1, 730517, 1, 1, 800034, 912806, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {990753, 623110, 881281, 1, 885268, 1, 738807, 1, 1, 1, 1, 1, 1, 858274, 1, 796054, 1, 1, 1, 1, 958457, 1, 1, 1, 690145, 1, 1, 1, 1, 1, 764747, 692605, 1, 1, 729650, 1, 1, 1, 1, 1, 924376, 661819, 655866, 1, 1, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {794754, 738016, 802098, 1, 1, 1, 1, 1, 1, 1, 1, 1, 888441, 1, 653285, 991789, 1, 1, 1, 1, 1, 1, 1, 549488, 1, 815522, 1, 606573, 1, 1, 1, 727139, 620280, 1, 1, 1, 1, 548470, 1, 727484, 605880, 1, 1, 921890, 653289, 935828, 1, 621889};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {983367, 633753, 709458, 735878, 1, 1, 657497, 1, 1, 1, 1, 1, 960425, 644885, 1, 1, 1, 720823, 976251, 1, 734149, 1, 672254, 1, 641075, 1, 1, 675480, 767739, 1, 657024, 849721, 1, 1, 1, 945230, 1, 1, 1, 896539, 1, 1, 723532, 770744, 1, 1, 1, 884797};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {466325, 455099, 940368, 65443, 919407, 20974, 51528, 25908, 984023, 164008, 970331, 731772, 28547, 100077, 763791, 700828, 155455, 6384, 552574, 285419, 426385, 72260, 105411, 299512, 86499, 332414, 437598, 464108, 564311, 115305, 398755, 884338, 50280, 456049, 835793, 270401, 467694, 35142, 428141, 738125, 512461, 534003, 46963, 545791, 948960, 230732, 188093, 108467};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {890556, 633279, 897715, 552969, 129598, 12911, 30662, 3307, 817061, 456881, 40467, 665108, 611389, 12909, 17931, 763102, 557816, 274271, 170410, 14545, 981997, 887953, 863860, 980983, 998434, 702110, 794469, 52, 722055, 734687, 916364, 419774, 415092, 30679, 133634, 1213, 877778, 983723, 682310, 878300, 946831, 694356, 64581, 802619, 1594, 663644, 76694, 6397};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {407668, 395009, 833505, 56202, 472846, 952561, 10381, 270078, 66185, 34443, 58773, 392947, 391121, 2514, 608354, 177485, 67456, 658475, 762949, 885707, 8751, 355065, 942212, 937470, 650107, 216533, 160408, 3597, 348505, 293445, 310725, 4435, 42, 324601, 693947, 559036, 953606, 816503, 303516, 348923, 7428, 30785, 325037, 991490, 3256, 1552, 243483, 778055};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {989652, 324549, 617897, 755063, 1, 445723, 705540, 957806, 815795, 498606, 1, 945004, 1, 1, 1, 370372, 360459, 527008, 1, 870096, 1, 1, 334556, 1, 697515, 610255, 386856, 560725, 450051, 979971, 623706, 1, 1, 1, 1, 416590, 797462, 361360, 520164, 564125, 412609, 1, 902074, 1, 498790, 617268, 335136, 612198};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {812439, 377547, 677336, 533690, 382790, 537320, 831274, 383714, 982158, 389431, 440695, 534922, 922708, 700172, 471018, 268515, 491715, 1, 802673, 657005, 1, 1, 1, 751247, 490396, 361240, 720574, 1, 733753, 387556, 471018, 1, 653910, 1, 439751, 1, 208067, 1, 457402, 1, 1, 536272, 1, 457177, 208001, 268201, 807347, 360095};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {465489, 741759, 672764, 525515, 1, 832200, 1, 410759, 1, 714139, 468888, 280874, 1, 511010, 338293, 495209, 229072, 235527, 249306, 972812, 872729, 1, 494296, 667280, 221033, 1, 523039, 987820, 1, 234866, 971112, 281261, 548325, 399313, 337200, 710455, 804553, 1, 497611, 403234, 684547, 238412, 1, 378399, 930661, 743946, 547896, 477727};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {238105, 793145, 521974, 237691, 1, 606622, 426213, 970535, 60861, 422777, 924820, 74230, 107945, 318917, 451272, 122284, 868579, 163193, 1, 425711, 665360, 796541, 957191, 163071, 1, 85413, 611008, 368963, 60841, 1, 85445, 235780, 910317, 1, 424937, 1, 121140, 945852, 320568, 446147, 585907, 260011, 772147, 713078, 369740, 259801, 76550, 106947};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {312263, 188340, 785496, 228324, 73479, 47112, 633735, 26820, 455937, 111090, 134410, 486282, 565201, 164857, 634225, 473407, 43247, 978040, 314160, 846098, 628399, 253224, 891925, 429589, 744569, 963527, 396006, 345990, 932789, 189, 408790, 172875, 558354, 655200, 175733, 475875, 303155, 645715, 932817, 13700, 22544, 418057, 734652, 184892, 270692, 322024, 248997, 339645};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {203262, 177001, 69142, 1, 1, 32759, 273219, 1, 113389, 26858, 81961, 1, 272630, 1, 1, 33406, 33679, 98984, 81461, 239880, 173461, 26947, 272484, 1, 99479, 32807, 113094, 1, 1, 272576, 159681, 1, 276672, 119510, 239022, 273492, 1, 119798, 1, 191078, 1, 1, 273247, 153009, 1, 272412, 1, 245556};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {500000, 500000, 500000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> strength = {2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> strength = {10, 10, 10, 9, 10, 11};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> strength = {48, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 39, 12, 12, 13, 13, 37, 14, 14, 36, 15, 15, 35, 38, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> strength = {5, 5, 5, 7, 6, 6, 5, 4, 1};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> strength = {10000, 999999, 900005, 699999, 999959, 999998, 799997, 999996, 910295, 999999, 100001, 2000};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {5, 5, 5, 2, 5, 6};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> strength = {9, 9, 9, 1, 10, 10};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> strength = {1, 2, 3, 1, 2, 3};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> strength = {10, 10, 10, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> strength = {10, 10, 10, 1000, 3, 3, 3, 2, 1};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> strength = {9, 9, 1, 5, 7, 3, 5, 7, 3};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> strength = {505424, 918843, 904779, 517082, 81488, 922123, 772479, 788395, 240505, 579566, 605249, 515663, 501336, 546004, 623499, 750469, 813322, 233209, 174595, 674328, 622553, 279284, 415034, 141078, 749193, 862295, 279562, 46256, 335960, 349768, 99866, 60824, 602230, 30032, 20746, 522925, 204199, 923312, 262626, 414126, 233955, 484700, 484073, 966961, 520947, 56512, 509228, 412232};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> strength = {5, 3, 7, 3, 4, 5, 5, 6, 7};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> strength = {13, 517, 463, 281, 586, 636, 540, 103, 573, 893, 890, 639, 45, 320, 23, 667, 305, 556};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> strength = {1, 2, 3, 10, 9, 9, 1, 1, 1};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2, 4, 5, 2, 4, 5};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> strength = {1, 10, 11, 7, 7, 7};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> strength = {1, 1, 6, 1, 1, 1, 1, 2, 2, 5, 6, 7};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> strength = {100, 2, 2, 100, 99, 1};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> strength = {7, 7, 6, 3, 3, 5, 5, 7, 7};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> strength = {1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> strength = {10, 10, 10, 16, 5, 2};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> strength = {3, 4, 5, 2, 3, 3, 5, 6, 7};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> strength = {1, 2, 8, 3, 5, 5, 5, 5, 5};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> strength = {1, 2, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> strength = {1, 2, 3, 1, 3, 3};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> strength = {2, 2, 2, 3, 3, 3};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> strength = {2, 4, 5, 3, 3, 3};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> strength = {22191, 1843, 289, 30107, 9041, 8943, 19265, 22649, 27447, 23806, 15891, 6730, 24371, 15351, 15007, 31102, 24394, 3549};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> strength = {3, 3, 3, 1, 5, 5};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> strength = {2, 2, 2, 1, 1, 4};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> strength = {2, 3, 8, 3, 3, 3};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> strength = {1, 2, 3, 1, 1, 1, 3, 3, 4};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> strength = {1, 1, 4, 1, 2, 4};
    TeamContest* pObj = new TeamContest();
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
    vector<int> strength = {2, 4, 5, 3, 4, 5};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> strength = {1, 2, 3, 1, 2, 4};
    TeamContest* pObj = new TeamContest();
    clock_t start = clock();
    int result = pObj->worstRank(strength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20315020&rd=15493&pm=12470
********************************************************************************
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <iostream>
#include <sstream>
#include <cstring>
#include <numeric>
using namespace std;
typedef long long ll;
#define F0(i,n) for (i = 0; i < n; i++)
#define F1(i,n) for (i = 1; i <= n; i++)
#define CL(a,x) memset(x, a, sizeof(x));
#define SZ(x) ((int)x.size())
const double eps = 1e-10;
const int inf = 1000000009;
int i, j, k, m, n, l;
int ans;
 
struct TeamContest { 
int worstRank(vector <int> s) {
    sort(s.begin(), s.begin() + 3);
    int str = s[0] + s[2];
    s.erase(s.begin(), s.begin() + 3);
    ans = 1;
    while (!s.empty())
    {
        n = SZ(s);
        sort(s.begin(), s.end());
        if (s[n-3] + s[n-1] <= str) break;
        i = n-3;
        while (i > 0 && s[i-1] + s[n-1] > str) i--;
        s.erase(s.begin()+i, s.begin()+i+2);
        s.pop_back();
        ans++;
    }
  return ans;
} 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/