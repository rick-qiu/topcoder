/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4716
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

class CompetitionStatistics {
public:
    int consecutiveGrowth(vector<int> ratingChanges);
};

int CompetitionStatistics::consecutiveGrowth(vector<int> ratingChanges) {
    int ret;
    return ret;
}


int test0() {
    vector<int> ratingChanges = {30, 5, -5, 3, 3, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-1, -5, -9};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {12, 0, 15, 73};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> ratingChanges = {12, 1, 15, 73};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-6, 13, 15, -11, 12, 12, 33, 12, -1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> ratingChanges = {4, 0, -10, -6, 10, 4, 7, -6, 0, -4, 10};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> ratingChanges = {5, 9, -2, -2, 2, 7, 4, 2, -4, 0, -10, -2, 0, 4, 10};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> ratingChanges = {10, 4, 2, 2, -6, -1, -8, -6, -8, -10, 4};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-5, 8, 4, 0, 2, -8, -4, 8, 10, 8, 0, -2, -2, 10, -8, 10, -2};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-8, 8, -8, -6, -2, -7, 2, 6, -10, -10, -8, 0, 2, 2, -4, 6, -2, 4, 6, 3};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-10, 4, -6, 6, -10, 10, 9, -2, 8, -10, 7, -8, -1, 9, -8, -10, -3};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> ratingChanges = {3, -5, -10, 1, -10, 6, 0, -2, -2, 2, -5};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-8, -9, 2, 8, 5, -10, -8, -8, 11, 0, 4, 0, 1, -4};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> ratingChanges = {-7, -4, -8, -9, -2, 9, 6, 11, -9, -4, -8, 1, -2, -9, 0, 4, 5};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-2};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> ratingChanges = {-924, -476, -177, -115, -1000, -392, 566, 590, 182, 590, -255, -908, -210, 198, -652, -166, -267, -41, 743, -866, -280, 93, -727, -599, 719, -781, -70, 419, 824, 789, 386, 584, 630, -52, -675, 827, -436, 365, 836, -1000, 182, -133, 956, 967, -272, -964, -178, -868, -370};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> ratingChanges = {458, -731, 179, -327, 282, 463, -64};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {567, -169, -739, -445, 149, 170, -640, -898, -8, 626, -356, 779, 297, 600, 489, -709, 75, -736, 232, 731, 834, 141, -552, -446, -650, -676, -809, 341, 614, -580, 287, -977, -493, 533, 574, 149, -865, 388, 13, 461, -157};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> ratingChanges = {-788, -149, -242, -217, -714, 225, -375, -517, -769, 881, 241, -226, 147, 520, -716, 311, -664, 419, 706, -357, 529, 953, -273, -847, -101, 903, 713, 728, 227};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {440, -865, 721, 827, -91, -203, 81, -31, 931, -226, -202, -787, 101, 962, -172, -331, -177, -394, -211, -37, 829, 794, 596, 659, -4, 341, -259, -37, -313, 173, -761, -658, -136, -39, 548, 143, -395, -182, 117, -272, -479};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> ratingChanges = {611, -634, 71, 657, -87, -790, 539, 899, 206, -169, -759, -860, 856, -796, 402, -823, -478, -505, 676, -475, -701, -601, 143, 266, -507, 498, 329, 341, -145, 911, 176, -814, -463, -556, 42, 162, 468, -516};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> ratingChanges = {810, -284, 972, -348, -761, -603, 827, -269, -651, 437, -2, 565, 899, 635, 443, 260, -256, -310, -217, 740, 565, -129, 542, -646, -976, 15, -681, 977, 206, -67, 291, 278, 992, -794, -601, 591, -37, 850, -673, 106, -876, 885, -678, -662, -351, 812};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> ratingChanges = {-688, -361, -453, 821, 401, -913, -224, -466, 283, -553, 449};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> ratingChanges = {-556, -604, 872, -579, -127, -511, -898, 594, 17, 227, 910, -747, 976, -391, -826, 926, -657, -889, 255, -607, 109, 32, -295, 715, -367, -640, 468, -628, 854, -947, -298, 617, -678, -577, 252, -894, 995, -424, -236, -102, -664, -205, -106, 359};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {626, 74, 827, -995, 560, 349};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> ratingChanges = {897, 547, 503, 307, -81, 814, 872, 145, 527, 918, 242};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {681, 52, 560, 428, 437, -137, -189, 980, 49, 816, 550, 278, 468, 148, -161, 573, 152, 755, 705, 832, 564, 80, 368, -106, -148, 381, 873, 584, 187, 544, 759, 719, 240, -144, 331, 262, 622, 103, 440, 36, 666, 192, 704};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {143, -98, 366, 775, -85, 482, 530, 613, 855, -166, 220, 119, 903, 152, 163};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> ratingChanges = {137, -153, 980, 446, -60};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> ratingChanges = {732, 891, 771, 730, 116, -23, 67, 341, 306, 362, -84};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> ratingChanges = {-86, -5, 115, 200, 460, 383, 97, 103, 77, 170, 105, 469, -192, 871, 748, 308, 796, 483, 298, 524, 482, 901, 466, 909, -140, 45, 911, 35, 322, 121, 279, 151, 844, 654, -28};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> ratingChanges = {359, 410, -102, 223, 320, 925, 13, -122, 495, 493, 984, 172, -1, 526, 831, 954, 41, 649, -135, 358, 774, -121, 797, 667, 241, 200, 119, 720, -169, 576, 436, 394, -135, 31, 704, 3, 296, -166, 333};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {126, 516, 240};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> ratingChanges = {361, 314, -172, -34, 432, 320, 900, 374, 714, 928, 838, 821, 429, 167, 184, 62, 278, 649, -18, 673, 291, 936, 475, 813, 653, 705, 96};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> ratingChanges = {-6, 381, 594, -41, 776, 6, 595, -85, -109, 696, 265, 868, 711, 449, 119, 53, 344, 798, 210, 315, 606, 645, 460, 298, 290, -131, 38, 816, 760, 880, 299, 592, 247, -20, 611, 780, -150, 552, 95, -98, 119, 312, 106, -90, 32, 288};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> ratingChanges = {-168, 226, 553, 893, 543, 803, 311, 253, 713, 482, 75, 710, 409, 966, 245, -71, -185, 896, 219, 91, 180, 790, 749, -71, 443, 453, -199, 320, -13, 394, 602, 709, 223, 199, 315, 339, 87, 790, 273, 92, -128, 806, 146, 989, 676, 711, 584, 507, 791, -111};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> ratingChanges = {392, 462, 820, 458, -136, 814, 376, 164, -26, 403, 320, 844, 298, 353, 343, 324, 19, 907, 679, 928, -153, 742, 110, 376, 228, 543, 235, 36, 891, 729, -145, 110, -173, 330, 411, 593, 261, 363, 429, 979, 855, 781, 929, -40, 412, 171, 655, 332, 404, 503};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> ratingChanges = {767, 89, -73, 239, 832, 237, 771, 492, 828, 983, -167, -101, 878, 158, 718, -189, -86, -47, 45, 553, 554, -52, 356, 729, -43, -53, 756, 884, 516, 467, 646, 312, -45, -121, 170, 556, -148, 673, 508, 977, -14, 376, 475, 853, 904, 548, 33, 677, 360, 836};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> ratingChanges = {-83, 894, 389, 825, 440, 745, 510, 879, 597, 409, 854, 82, 605, 820, 802, -123, 334, 195, 898, 943, 373, 805, 934, 679, 253, 705, 942, 141, 79, 496, 173, -193, -83, -135, 899, 107, 214, -64, 274, -70, -159, 905, 168, -145, 720, 611, 663, 727, 896, -30};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> ratingChanges = {583, 928, -42, -135, 115, 119, 732, 929, 303, 819, 860, -100, 701, 189, 750, 65, 154, 19, 300, 784, 401, -170, 975, -48, -121, 241, 557, 97, 917, 916, 624, 198, 561, -8, 61, 360, 385, 157, 250, 197, 175, 613, 480, 540, 667, 134, -169, 672, 208, 737};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> ratingChanges = {-78, 99, 584, 928, 619, 926, 412, 987, 656, 24, 484, 554, -194, 815, 328, 411, 556, 871, -39, 674, -58, 977, 637, 691, 800, 444, 573, 563, 130, 448, 885, 66, -67, 552, 689, -53, 11, 263, 705, 826, 737, 21, 407, 429, 414, 831, 816, -8, 446, 288};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> ratingChanges = {-80, 113, 590, 618, -192, 583, -125, -170, -190, 293, -91, 412, 612, 455, 23, 442, 186, 65, 807, 478, 280, 190, -58, -64, 180, 264, 552, 220, 525, -39, 798, 663, 71, 255, 866, 349, 536, 465, 659, 271, 669, 29, -150, 409, 301, 45, 948, 410, 760, 508};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> ratingChanges = {-82, 785, -62, 640, -65, 602, -24, 453, 952, 310, 675, 203, 518, 677, 742, -180, 670, 294, 758, 102, -194, 861, 296, 920, 715, 343, 267, 760, 599, 462, 210, 144, -44, 820, 529, 291, 987, 596, -126, 924, 588, -108, -89, 72, 877, 137, 910, 815, -169, 783};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> ratingChanges = {269, -133, 665, 301, -112, 223, 975, 720, 61, 232, 837, 276, 165, 243, 40, 412, 533, 119, 788, 945, 956, 609, 893, 108, 160, 131, 351, 416, -9, 422, 984, 248, 230, 845, 759, 536, 901, 454, 919, 279, 761, 990, 742, 489, -140, 405, -195, 276, 240, 254};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> ratingChanges = {780, 762, 215, 125, 213, 488, 631, 327, 704, -193, 864, 439, 596, 969, 919, 247, 723, 474, 347, -187, -160, 473, 352, -2, 562, 433, 580, 672, 977, 310, 53, 622, 795, -121, 201, 519, 731, 523, -72, 715, 630, 817, 290, 985, 627, 659, 309, 16, -69, 862};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> ratingChanges = {0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> ratingChanges = {1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> ratingChanges = {0, 0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> ratingChanges = {1, -1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> ratingChanges = {-1, 1, 0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {0, -1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> ratingChanges = {-1, 0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> ratingChanges = {1, 0, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> ratingChanges = {-1, 1, 1, 0, -1, -1, 1, -1, 0, 1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, 0, 1, -1, -1, -1, 1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 1, 1, 0, -1, -1, 1, 0, 0, -1, 1, -1, 0, 1, 0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> ratingChanges = {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> ratingChanges = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> ratingChanges = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> ratingChanges = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> ratingChanges = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> ratingChanges = {-1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {5, 4, 3};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {2, 1, -1, 1, 1, -1, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> ratingChanges = {1, 2, 3, -1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> ratingChanges = {1, 1, 1, -1, 1, 1, 1, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> ratingChanges = {2, 2, 2, -1, 2, 2, 2};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> ratingChanges = {-3, -2, -1, 0};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> ratingChanges = {1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> ratingChanges = {1, 2, 0, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {30, 5, -5, 3, 3, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> ratingChanges = {1, 2, 3, -1, 1, 2, -1, 1, 2, -1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> ratingChanges = {-1, -1, -1, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> ratingChanges = {1, 1, 1, 1, -1, 1, 1, -1, 1, 1, -1, 1, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> ratingChanges = {3, 4, 5, -1, 2, 3};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> ratingChanges = {2, 0, 2};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
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
    vector<int> ratingChanges = {-3, 4, 5, 6, 7, -1, -2, 7, 8};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> ratingChanges = {1, 2, 3, 4};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> ratingChanges = {1, 2, 0, 1, 0, 1, 0, 1};
    CompetitionStatistics* pObj = new CompetitionStatistics();
    clock_t start = clock();
    int result = pObj->consecutiveGrowth(ratingChanges);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9958892&rd=8012&pm=4716
********************************************************************************
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
class CompetitionStatistics{
public:
    int consecutiveGrowth(vector<int> r){
        int m,max;
        max=-1;m=0;
        for(int i=0;i<r.size();i++)
          if(r[i]>0)m++;
          else {if(max<m)max=m;m=0;}
          if(m>max)max=m;
         return max;
 
    }
};

********************************************************************************
*******************************************************************************/