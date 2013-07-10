/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5870
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

class RogersPhenomenon {
public:
    int countTriggers(vector<int> set1, vector<int> set2);
};

int RogersPhenomenon::countTriggers(vector<int> set1, vector<int> set2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> set1 = {1, 2, 3};
    vector<int> set2 = {4, 5, 6};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {3, 100, 90};
    vector<int> set2 = {5, 1, 18, 29};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {1, 1, 1, 1, 1, 5};
    vector<int> set2 = {-10, -9, -8, -7, -6};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> set1 = {-5};
    vector<int> set2 = {-10};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-5, -4};
    vector<int> set2 = {-10};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> set1 = {12, 94, 53, 43, 58, 85, 55, 83, 47, 57};
    vector<int> set2 = {23, 100, 98, 27, 9, 70, 39, 39, 54};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> set1 = {5};
    vector<int> set2 = {-3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> set1 = {1000};
    vector<int> set2 = {999};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> set1 = {999};
    vector<int> set2 = {1000};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> set1 = {-1000};
    vector<int> set2 = {999};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    vector<int> set2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> set1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> set2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> set1 = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> set2 = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 998, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> set1 = {-259, -805, -506, 434, 301, -817, 768, -346, 521, 810, -620, 699, -890, -202, 961, -820, -889, 670, -702, -826, 661, -140, -356, 514, 811, -617, -953, 755, -348, 176, 689, 381, -842, -602, 933, -978, -391, 378, 531, 603, 496, -332, 448};
    vector<int> set2 = {364, -401, 713, -193, 840, -149, 118, -309, -271, 68, 247, -71, -378, 594, 665, 670, -52, 85, 505, -972, -61, -320, -858, -617, -455, -380, 997, -290, -737, 215};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-147, -7, -157, 59, 278, -206, -906, 79, 564, -368, -616, 121, -581, -705, 48, 607, 896, -557, 758, 489, -472, 948, -904, -86, -828, -378, -18, -444, -275};
    vector<int> set2 = {-982, 543, -726, 188, 254, 817, 637, 713, -604};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {801, -867, 855, 466, -423, -764, 322, 993, 789, -137, -859, 159, 661, -804, -145, 10, -672};
    vector<int> set2 = {485, -167, 841, 337};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-607, 276, -194, 949, 912, 325, -561, -780, -543, 562, 610, -132, -122, 734, 663, -298, 148, -413, -351, -35, 851};
    vector<int> set2 = {687, -430, -332, -300, 939, 676};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> set1 = {80, -427, -690, -431, 338, 224, -253, -821, 366, -371, -921, -4, 880, -270, 179, 487, -265, 797, 669, -102, 204, -833, -758, 843, 387, 681, 520, 759, -32, -247, 683, 271, 118, 37};
    vector<int> set2 = {-728, -589, 139, 266, -117, 437, -870, 853, -635, -607, -571, 346, 753, -133, 208, -753, -868, -323, -86, 914, -357, -692, -410, 639};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {366, -683, 67, -84, -568, -256, -863, 787, -783, 967, 927, 216, -47, 713, -72, -582, -939, 133, -978, -933, 154, 754, -399, 770, -910, 30, -786, 778, 394, 686, -687, 860, 466};
    vector<int> set2 = {-849, -85, -72, 178, -740, 786, -518, 337, 12, -127, -169, -413, 834, -248, -480, 120, -491, 723, 299, -452, 688, 953, 819, 33, 284, -605, -378, -62, 236, 599, 827, 964};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> set1 = {-788, 916, 417, -888, 34, 697, 10, -840, -862, -860};
    vector<int> set2 = {-893, 449, -95, -844, 887, 230, 889, 847, 447, -640, -95, -820, -649, -19, 946, 856, 806, 787, 834, -582, -9, -218, -666, -879, 687, -712, 677, -344, -297, 87, -637, 663, 390, 349, 105, -641, 854};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-809, -137, 13, -334, 192, 268, -457, -289, 895, -198, -198, 655, -99, -635, -345, -102, -354, 541, 319, 40, 876, -195, 406, -802, 789, -820, 712, 944, 774, -190, 398, -265, -231, -824};
    vector<int> set2 = {-527, 775, 747, 913, -736, -691, 362, 914, 337, -87, -152, 953, 423, -787};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> set1 = {-193, -286, 141, 454, -226, -862, 110, -120, 682, -364, -751, 430, -179, -244, 702, -593, 867, 128, -501, -159, -832, 297, 766, 579, -54, -903, 851, -470, -432, -735, -815, -838, 8, -93, 23, 249, -515, -586, 786, -388, 39, -597, -479, -827, 649, 432, 604, 984, 144, 177};
    vector<int> set2 = {-45, -189, -410, 347, -441, 130, -468, -318, -328, -560, 913, -821, 118, 358, -917, -273, -150, -883, 143, -868};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> set1 = {-391, 386, -51, -13, 820, -485, 268, -576, -597, -789, -824, -966, 946, -717, -764, 900, -468, 792, -433, 792, -412, 313, -685, -728, 297, -386, 973, -972, -84, 366, -393, 128, -228, 463, 874, -336, 628, 47, 833, 153, -238};
    vector<int> set2 = {788, -247, -943, 175, -768, -256, 968, 769, 412};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-107, 403, -345, -363, -870, -771, -255, -929, -788, -187, 164, 886, 79, 498, 289, 817, -590, -553, -767, -869, 867, 658, -654, -265, 351, -593, 32, 835, -344, -385, -909, -812, -486, 847, -93, -138, -357, -364, -158, 333, -260, -950, -277, 831, -752, 525, -181, 540};
    vector<int> set2 = {-975, -406, 879, 945, 304, -586, -493, -454, -282, 763, -941, -413, 264, 423, 375, -575, -505, -804, -434, -443, -967, 73, -153, 726, 842, 480, 305, 594, -587, 633, -953, 132, 692, -954, -202, 835, -430, -543, 255, 607};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {869, 39};
    vector<int> set2 = {-361, -458, 527, -984, 910, -924, -667, 629, 974, 741, 448, 217, 335, -746, -79, -31, -477, -120, 966, 600, 348, -967, 357, -445, 766, -952, 579, 642, -544, 162, -603, 283, 527, -770, 78, 958, -807, 737};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {866, 708, -508, -306, 725, 389, -392, 520, 50, -1, -606, -799, -461, 536, 739, -827, -641, -121, -322, 954, -622, 392, 367, -55, -227, 788, -930, 938, -634, -528, 311, -89, 730, 770, -35, 314, -126, 988, -571, -853, -85, 387, 247, -559, -653, -193, -65, -603, -654, -720};
    vector<int> set2 = {852, 775, 308, -446, -905, 272, -620};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {787};
    vector<int> set2 = {-290, -26, -830, 944, -324, -546, 837, 767, 417, -98, 532, -928, -815, 0, 393, 843, -869, -415, -599, 508, 441, -944, -961, 682, 19, -881, -546, 794, -863, 119};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {443, -63, 41, -614, -348, -270, -298, 443, -22, 169, -320, -685, -800, 751, 64, -584, -355, -74, 262, 354, 191, 184, 306, -551, 695, 985, -292, -36, 282, 366, 745, 604, 958, 195, 149, -829, -396, 486, -862, -863, -726, -114};
    vector<int> set2 = {-824, 783, -310, -45, -34, 380, -868, -297, 369, -228, -625};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-471, 923, -322, 354, 64, 780, 498, 551, -735, 877, -708, -751, 713, 400, -153, 210, 708, 704, 681, -525, 820, -503, -178, 888, -466, 708, 309, -148, -586, -547, 227, 802, -65, 783, -16, 433, -991, 623};
    vector<int> set2 = {-639, 226, 909, -280, -56, -415, 191, -720, 249, -669, -265, 339, -903, -360, -1000, -117, 870, -144, -257, 524, -423, -985, 562, -477, -660, -574, -841, -547, 592, 551, 157, 878, 197, 824, 679, -295};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {528, -696, -35, -791, -832, 818, 818, -966, -766, 892, 952, 95, -363, -75, 601, 426, 578, 549, -363, -651, -222, -797, -292, 899, 446};
    vector<int> set2 = {89, 791, -376, 452, 591, -158, 718, -692, 560, -67, -323, 222, -198, -956, 915, -876, -775, -77, 750, 68, 562, -98, -491, 414, -395, 776, -453, 636, 496};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-569, 750, -241, -124, 496, 734, 854, -138, 384, 175, -533, 675, -49, 958, -129, -835, 94, 252, 457, -214, 871, 962, -127, 439, 992, -590, -683, 388, -593, -667, 486, -623, 818, -212, 111, -109, -257, -903, -802, -470, -764, 29, -400, 26, 163};
    vector<int> set2 = {845, -305, 99, 620, -829, 891, -136, -863, 359, 741, 71, 463, 254, -367, -847, 423, -784, 2, -758, 303, -263, 803, 672, 821, -415, 634, 107, 321, -752, 399};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> set1 = {-317, -200, -40, 242, 670, 866, -198, 482, 967};
    vector<int> set2 = {896, -418, -663, 14, 364, 262, -650, -649, -187, 237, -473, 287, 28, -961, -30, -428, 58, 808};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> set1 = {494, 510, 438, -313, 356, 662, 504, -703, -302, -657, 992, 243, 274, -713, 458, 527, -842, -375, -825, -8, 918, 278, 476};
    vector<int> set2 = {987, 841, 135, 62, -462, -583, -495, -884, 52, -445, -298, -974, 3, -127, 562, 329, -378, -681, -4, 544, 764, 237, -775, 385, -279, -378, -812, -695, 137, -71, 645, -498, -38, 312, 459, -109, 84, 823, -173, -191, 83, 91, 396, 348, -922, 606, -813, 367, 593, -546};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> set1 = {-615, -929, -872, -588, 259};
    vector<int> set2 = {-919, -204, -211, -878, 274, 656, 378, -574, 852, 712, 483, 599, -351, 426, 205, -57, 920, 978, -374, 6, -297, 665, -330, -175, 809};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> set1 = {92, 892, -408, -483, 257, -605, 929, -187, -815, -458, -766, 509, 185, 411, 196, -394};
    vector<int> set2 = {-792, -894, -96, 837, 649, -602, 477, 152, -932, 246, -879, 49, -312, 561, -566, -185, 386, -379, 667, 151, -68, 967};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> set1 = {-630, -715, -104};
    vector<int> set2 = {115, -459, -878, 820, 240, -984, 902, 905, 810, -792, 380, 672, 728, 176, 315, 586, 411, 917, 669, -237, 910, -437, 902, 425, 702, -893, -103, 919, -126, -819, 703, -69, -398, 711, -761, 655, 658, -231, -271};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> set1 = {-97, 197, 254, 482, 921, -734, -938, 730, 945, -997, 460, -734, -813, 355, 640, -894, 255, -723, 543, -856, -250, 15, -101, 13, -32, 5, 824, -244, -284, -689, -676};
    vector<int> set2 = {557, -412, -68, -301, 109, -694, 872, -886, -245, -727, -623, -499, -704, 118, 892, 492, 573, -789, 94, 182, 600, 235, -91, -712, -865, -937, 584, -625, -794, -808, 905, 142, -584, 217, -84, 355, 101, -971, 196, 321, -214, -596, -584, -206, -922, 590, -684, -21, -530, -903};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-829, -941, 236, 378, 902, 444, 448, -353, 954, 644, 521, 678, 572};
    vector<int> set2 = {9, 553, 5, -529, -525, -20, -301, 457, 93, -185, 556, -557, -309, 13, -144, -249, -25, -645, -420, -437, -458, -403, -440, -909, 607};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> set1 = {-960, -754, 847, 471, -957, 773, -362, -593, 216, -332, 517, 230, -163, 241, -290, -81, 230, 53, -140, -241, -863, -869, -600, 264, -184, 960, 451, -343, 504, 148, -16, 828, 43, 285, -153, 24, 730, 181, 908, 686};
    vector<int> set2 = {-842, -370, -708, -583, 508, -936, -809, 798, -886, -387, -818, -647, 406, 223, -925, -825, 805, 683, 948, -111, -363, 200, -164, 451, -354};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> set1 = {-960, -829, 629, 578};
    vector<int> set2 = {127, -186, 36, -25, 432, 487, -333, -957, 504, 147, 598, -97, -936, -766, 90, 128, 33, 349, 341, 92, -103, -747, 112, 293, 17, 32, 143, 914, -36, -65, 651, -116, 520, 484, 651, 447, -180, -182, 747, 491, -3, 440, -179, -965, 404, -232, -597, -489};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> set1 = {372, 770, 43, -936, 700, 861, 31, -53, 687, 149, 824, -284, -263, 951, -886, 650, 970, -49, 165, 731, 23, 255, -539, 504, 477, -285, 135, -169, -427};
    vector<int> set2 = {-959, 597, 27, 104, 102, -183, 342, -813, -149, 521, 738, 339, -312, 469, -534, -314};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> set1 = {301, -41, -929, -467, 428, 373, 348, 381, 752, -988, 127, 599, -967, -795, 885, -661, -139, 307, -54, 149, -478, 236, 280, 25, 18, 327, 125, -955, -834, -174, -292, -595, 796};
    vector<int> set2 = {638, 905, 751, -893, 577, -540, -939, -751, 444, 238, -77, -653, 157, -865, -393, 641};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> set1 = {805, 270, 131, -339, 627, -643, -167, -245, -368, -608, 187, 236, 38, -355, -913, 673, -50, -522, -641, -651, -734, -827, -633, 136, -386, 299, 984, 453, 924, 308, 392, 252, -266, 436, -727, -283, 63, 553, -735, -325, -362, -676, 493, 43, 64, 302};
    vector<int> set2 = {-193, -711, 292, -335, -136, -261, -29, 857, -301, -331, -302, -837, 608, -730, 636, -223, 698, 600, 485, -454, -84, 672, -45, -688, 11, -735, 824, 519, -730, -500, 534, -297, -124, 479, -296, -376, 40, 421, 514, 540, 466, 983, -828, 968, -69, -509, -180, -367, 212};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> set1 = {-885};
    vector<int> set2 = {-878, -705, 181, 894, -569, -954, 265, 541, 500, 310, 913, -390, 117, -642, 890, -61, -451, -894, 169, -391, 797, 298, 138, 232, 92, 255, 751, -202, -67, -437, 12, -840};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> set1 = {149, -389, -512};
    vector<int> set2 = {464, 99, -391, 997, -132};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> set1 = {-750, 194, 776, 557, -27, -861, -5, 271, -175, 809, -922, -392, -724, -417, 895, -577, -864, 648, 594, 778, -236, 623, 200, 566, -641, 397, -242};
    vector<int> set2 = {527, 301, -214, -186, -509, 697, -1000, 257, -930, -396, -721, -964, 643, 385, 88, 31, 150, 418, -323, -105};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> set1 = {-948, 522, 357, -426, 476, -509, 749, 387, -495, -638, 60};
    vector<int> set2 = {-886, -839, -408, -703, 673, -240, -511};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> set1 = {185, 206, -395, -888, 965, -71, 433, -963, 132, -73, 480};
    vector<int> set2 = {-515, -786, -283, -680, -619, -599, -966, 717, -635, -102, -367, -959, 772, 727, 124, -18, -727, 455, -872, 535, -842, 325, -938, -887, 834, -516, -734, -369, 455, -400, -438, 913, 216, -582, 972, 325, -426, 755, 813, -49, 915, 988, 367, 884, -869, -201, -503, 209};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> set1 = {-834, -970, -95, -355, -633, 13, -363, -168, -122, -610, 916, -582, 228, -850, -657, -987, 142, 729, 27, 615, 844, 872, 139, 310, 492, 859, -930, -534, 686, 233, -953, -944, 819, -773, 605, -68, 634, 57, 332, -114, -135, -854};
    vector<int> set2 = {-223, -972, -310, 365, 676, -529, -641, -662, -736, 737, 903, -1000, -234, 127};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> set1 = {477, 918, 367, -232, -152, 224, -1000, -729, -535, -528, -789, 939, -945, -316, 605, -155, -195, -434, 42, 573, -244, 466, -367, 22, 302, -564};
    vector<int> set2 = {385, 418, -547, -151, -691, 396, -289, -225, -674, -848, -549, 209, -108, 801, -429, 834, -536, 20, -792, -584, 261, -288, -707, 364, -699, 609, -713, -586, -359, 625, -363};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> set1 = {246, 374, -814, -45, 98, -861, -904, 595, 222, -603, 175, -344, 577, 429, -529, 106, 159, 656, -163, 397};
    vector<int> set2 = {-531, 62, -638, 588, -474, -789, -563, -510, 894, 296, 119, -801, -722, -282, 128, -359, 602, 906, -945, -245, -159, -590, -896, 71, -979, 588, 432, 606, 83, 627, -544, 217, -907, -908, 243, -788, -758, 419, -295, 256, -531, 944, -111, -851};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-781, -821, 427, -275, -807, -902, 976, 141, 453, -818, -674, -943, 685, -145, 627, 192, -745, 313, 879, -833, -503, -660, 448, 626, -460, -703, -395, 340, 841, 565, -415, -25, 710, 385, 915, 782, -582, -761, 986, 900, 664};
    vector<int> set2 = {38, -331};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-891, -630, -43, 290, -503, -935, 750, 879, 717, -385, 773, 403, -731, 194, -56, -835, 706, -715, 489, 565, -901, 432, -670, 511, -16, 902, -859, -588, 25, 170, 971, -795, -768, -517, 861, -631, -75, -964, -270, -894};
    vector<int> set2 = {851, 662, 185, 699, -473, 576, 689, 463, -22, 368, -440, 84, 873, 971, -899, -127, 168, -964, -100, 959, 145, 70, -474, 911, 941, 544, 494, 643, -796, 42, -231, 630, -791, 761, -430, -314, -487, -752, 221, -73, -703, 859, 119, -803, 664, -642, 643, -423, 644};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> set1 = {-593, 74, -340, -57, 604, 10, 699, -346, -272, 485, -509, -849, -667, -956, -481, 216, 225, 741, 792, 36, 144, 641, 245, -791, 588, 26, 135, 465, 360, -700, 833, 342, 481, -204, -685, 423, 868, 921, 175, -790, -968, -293, 946, 824, 583, -364, -664, 0, -290, -945};
    vector<int> set2 = {-733, -564, -359, 209, 482, 925, -187, -834, 791, -303, 19, 424, 557, 299, -212, -408, 416, 610, 655, 304, 993, -141, 551, -118, 656, -797, 747, 877, -939, -586, -276, 890, -376, 979, -242, 690, -455, 357, 555, 484, 985, -782, 913};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> set1 = {-905, 404, 997, -416, -928, -70, 854, 154, -375, -244, -729, -487, 15, 484, -297, -944, -269};
    vector<int> set2 = {118, 497, -729, -472, -945, -248, 728, 391, -632, -329, -752, -743, -416, 255, 767, 664, -705, -810, 964, 752, 495, 665, -150, -78, -442, -808, 464, -743, 333, -661, -969, 18, 649};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> set1 = {-965, -51, -138, -378, -884, 449};
    vector<int> set2 = {-904, 296, 435, 981, 140, -970, -486, 121, 80, 246, 862, 660, 758, -806, -445, -316, 804, 942, 277, -437, 728, -344, -733, 702, 722, 520, -64, -656, -164, 964, 524, 63, 126, -923, 222, -513, -837, -810, 726, 433, 744, -127};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-290, 465, 598, -137};
    vector<int> set2 = {-745, 910, 174, 615, -410, 862, -413, 184, 136, -901, -834, 623, -369, -575, 887, 29, 284, -859, 374, 547, -571, -506, -821, 498, 534, -300};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {-242, 85, 183, 287, 715, -288, 179, -796, -480};
    vector<int> set2 = {542, -34, -690, -677, -765, -312, 672, 35, 669, 909, -315, -662, 300, 300, -957, -93, 810, -43, -292, 458, -11, -481, 859, -357, 239, 870, -640, 57, 772, -776, -253, 552, 978, 395, -293, 160, -110, 214, -1000, -984, -343};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> set1 = {599, 139, -299};
    vector<int> set2 = {60, -957, -675, 238, 43, -752, 476, -1, -403, -734, -19, 845, 864, -373, -246, -758, 998, -979, 913, 41, -315, 618, -942, -90, 958, 159, 819, 211, 259, 475, -22, 871, 470, -714, -817, -765, 482, 14, 386};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> set1 = {-598, -578, 158, -494, -580, -341, 503, -536, -612, -336, 28, 224, -761, 100, 855, 680, 1, 471, 137, -571, -124, -703, 637, 852, -525, -165, 935, 184, -898};
    vector<int> set2 = {367, -494, -893, 695, -764, 767, -871, 75, 91, -738, 283, -342, -635, 45, 32, -129, 405, -249, -89, -665, -886, -407, 392, 778, -343, -736, 177, 153, -8, 861, -528, 623, -844, 570, 383, 258, 191, -229, 88, 897, 898, 247, 1, -973, 184};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> set1 = {-763, -402, -927, -96, -7, -694, 851, 643, -369, 928, 487, -691, 137, 129, 212, -78, -113, -741, -14, 281, -423, -976, -178, -3, 445, -508, 931};
    vector<int> set2 = {-979, -888, -973, 967, -273, 453, -594, -522, 575, -84, 893, 510, 643, -297, 250, -531, 521, -175, 225, -280, -904, 521, 363, 870, 80, 646, 718, 207, -976, -234, 349, -653, -438};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {989, -836, 947, 572, 913, 748, 791, 74, -234, -539, -205, 102, -772, 381, -591, -121, 637, 463, 339, 352, 76, -903, -698, 308, -209, -882, 352};
    vector<int> set2 = {286, 470, -88, 4, -845, -843};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> set1 = {751, 608, -180, 611, 992, -847, -260, 566, -448, 954};
    vector<int> set2 = {353, -749, -854, -554, -797, 906, -181, -808, -185, 907, -538, 25, -603, 505, 818, -1, -379, -485, 965, 674, 50, 87, -81, 128, -612, 695, -666, 486, 472, -967, -933, 639, -923, 841, 968, 635, -672, 432, -619, 755, -291, 471, 515, -106};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> set1 = {-2, -3, -4};
    vector<int> set2 = {-1};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> set1 = {3, 4, 5};
    vector<int> set2 = {4, 5, 6};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> set1 = {4, 5, 6};
    vector<int> set2 = {3, 4, 5};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> set1 = {12, 94, 53, 43, 58, 85, 55, 83, 47, 57};
    vector<int> set2 = {23, 100, 98, 27, 9, 70, 39, 39, 54};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> set1 = {3};
    vector<int> set2 = {1000, 1000, 900};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> set1 = {1, 2};
    vector<int> set2 = {5, 6};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> set1 = {1, 2};
    vector<int> set2 = {3, 4};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> set1 = {-10, 0};
    vector<int> set2 = {-16, -6};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {5, 4};
    vector<int> set2 = {3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {1, 1, 1};
    vector<int> set2 = {1, 1, 1};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> set1 = {1};
    vector<int> set2 = {2, 3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> set1 = {1, 2, 3};
    vector<int> set2 = {4, 5, 6};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> set1 = {-10};
    vector<int> set2 = {-20, -30};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> set1 = {1, 2};
    vector<int> set2 = {5, 6, 7, 8, 9};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> set1 = {1};
    vector<int> set2 = {2, 3, 4};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> set1 = {1, 2};
    vector<int> set2 = {4, 5};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> set1 = {-10};
    vector<int> set2 = {-100};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> set1 = {1, 2};
    vector<int> set2 = {9, 10};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> set1 = {2, 3};
    vector<int> set2 = {1, 1};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> set1 = {1, 1, 1, 1, 1, 5};
    vector<int> set2 = {-10, -9, -8, -7, -6};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> set1 = {5, 5, 5};
    vector<int> set2 = {6, 7, 8};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {99, 100};
    vector<int> set2 = {50, 50, 50, 50};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> set1 = {10, 9};
    vector<int> set2 = {8};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {1, 2};
    vector<int> set2 = {2, 3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> set1 = {1, 2, 3, 4, 5};
    vector<int> set2 = {1, 2, 3, 4, 5};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {4, 5, 6};
    vector<int> set2 = {1};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> set1 = {-1};
    vector<int> set2 = {-2};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> set1 = {2, 2, 3};
    vector<int> set2 = {3, 3, 3, 4};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> set1 = {4, 5, 6};
    vector<int> set2 = {1, 2, 3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> set1 = {-500};
    vector<int> set2 = {-1000, -1000};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {10};
    vector<int> set2 = {1, 2, 3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> set1 = {1, 2};
    vector<int> set2 = {-1, -2};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> set1 = {-100, -101, -102};
    vector<int> set2 = {-50};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> set1 = {-1, -2};
    vector<int> set2 = {-3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {1, 2, 3, 4, 5};
    vector<int> set2 = {-222};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
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
    vector<int> set1 = {1, 2};
    vector<int> set2 = {100, 200};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> set1 = {1};
    vector<int> set2 = {10, 5};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> set1 = {95, 95};
    vector<int> set2 = {-604, -508, -422, -243, -525, -220};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> set1 = {3};
    vector<int> set2 = {5, 18, 29};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> set1 = {1, 2};
    vector<int> set2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> set1 = {2};
    vector<int> set2 = {2, 3};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> set1 = {1, 3, 5};
    vector<int> set2 = {1};
    RogersPhenomenon* pObj = new RogersPhenomenon();
    clock_t start = clock();
    int result = pObj->countTriggers(set1, set2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=8074&pm=5870
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
using namespace std;
 
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ii;
#define rev(A) reverse((A).begin(), (A).end())
#define s(A) sort((A).begin(), (A).end())
 
//----------------------------
 
class RogersPhenomenon {
  public:
  int countTriggers(vector <int> a, vector <int> b) {
    int ac = 0, bc = 0, as = 0, bs = 0;
    for (int i = 0; i < a.si; i++) ac++, as += a[i];
    for (int i = 0; i < b.si; i++) bc++, bs += b[i];
    int c = 0;
    for (int i = 0; i < a.si; i++) if (a[i] * ac < as && bc * a[i] > bs) c++;
    for (int i = 0; i < b.si; i++) if (b[i] * bc < bs && ac * b[i] > as) c++;
    return c;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/