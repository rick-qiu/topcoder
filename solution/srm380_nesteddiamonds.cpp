/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7817
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

class NestedDiamonds {
public:
    double minHeight(vector<int> sides);
};

double NestedDiamonds::minHeight(vector<int> sides) {
    double ret;
    return ret;
}


int test0() {
    vector<int> sides = {4, 2};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sides = {10, 5, 2};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 9.16515138991168;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sides = {1, 2, 5, 3};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 4.69041575982343;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sides = {1, 1};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sides = {1000000, 1};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sides = {100, 99, 1};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sides = {100, 10};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sides = {3385, 2410, 277, 1232, 1049, 681, 1795, 1422, 1615, 493, 2585, 2193, 63, 3565, 2969, 2774, 864, 3768, 3165, 2015};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 5199.142044606975;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sides = {8442, 2854, 1262, 2065, 2655, 4043, 7241, 9633, 4644, 4444, 8833, 9238, 5843, 7437, 1865, 661, 8244, 3445, 5448, 63, 6242, 8042, 2263, 1462, 864, 9036, 6838, 2460, 6442, 9834, 1665, 4242, 8638, 3245, 3049, 7839, 3848, 6040, 4839, 5244, 267, 5043, 6639, 1059, 9438, 3645, 7636, 5644, 463, 7042};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 13733.95463804945;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sides = {10, 10};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sides = {10000, 1};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sides = {10000, 5000, 1000, 500, 100};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 9846.826900072936;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sides = {2, 3, 5, 6};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 8.48528137423857;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sides = {4974, 4876, 4785, 4686, 4582, 4492, 4389, 4283, 4190, 4088, 3981, 3873, 3779, 3686, 3579, 3487, 3381, 3277, 3182, 3080, 2990, 2891, 2798, 2704, 2597, 2496, 2406, 2301, 2197, 2099, 2004, 1907, 1811, 1718, 1609, 1510, 1418, 1313, 1207, 1107, 1016, 910, 809, 717, 625, 525, 418, 310, 218, 110};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 6954.309455294609;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sides = {4974, 4875, 4775, 4675, 4576, 4477, 4377, 4278, 4178, 4079, 3979, 3880, 3781, 3681, 3581, 3482, 3383, 3284, 3184, 3085, 2986, 2886, 2786, 2687, 2587, 2487, 2388, 2288, 2189, 2090, 1990, 1890, 1791, 1691, 1591, 1491, 1392, 1292, 1193, 1094, 994, 895, 795, 696, 597, 498, 398, 299, 200, 101};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 6966.249923739458;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sides = {410257, 10279, 280265, 80274, 230267, 120271, 220267, 370260, 310263, 70274, 180269, 40277, 290265, 190269, 160270, 260266, 170270, 430256, 390258, 20278, 340261, 500253, 210268, 320263, 360260, 30277, 380259, 130271, 110272, 480254, 140270, 490253, 470254, 50276, 460254, 90273, 330262, 100273, 270265, 60275, 240266, 300264, 450255, 420257, 400258, 440256, 250266, 350260, 150270, 200269};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 700206.7150991913;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sides = {800011, 950003, 880008, 510026, 990000, 710015, 920006, 670017, 790011, 500027, 840010, 970002, 520026, 750014, 940004, 570023, 870009, 810011, 640020, 530026, 740014, 890007, 610021, 630020, 600022, 590022, 620020, 680017, 770013, 830010, 860009, 730014, 540025, 660018, 910006, 700015, 780012, 550024, 560024, 580023, 760013, 960003, 850010, 900007, 690016, 650019, 930005, 820010, 980001, 720015};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1389393.1050404706;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sides = {999967, 999995, 999972, 999977, 999971, 999989, 999974, 999980, 999964, 999987, 999994, 999992, 999963, 999979, 999954, 999998, 999970, 999985, 999993, 999959, 999953, 999960, 999982, 999990, 999951, 999997, 999973, 999999, 999966, 999975, 999988, 999955, 999976, 999961, 999965, 999956, 999984, 999950, 999986, 999991, 999983, 999978, 999952, 999969, 999958, 999962, 999996, 999957, 999981, 999968};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1414210.7339799115;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sides = {801086, 950072, 880438, 512281, 990230, 711625, 920182, 672026, 790912, 502191, 840568, 970086, 521994, 751307, 940002, 571881, 870453, 810861, 641640, 532019, 741450, 890526, 611637, 631530, 601348, 591648, 621636, 681780, 771010, 830444, 860251, 731368, 542146, 661828, 910301, 701563, 780751, 552138, 562083, 581689, 761071, 959859, 850340, 900290, 691591, 651875, 930189, 820738, 979950, 721466};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1386813.7354468335;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sides = {77365, 58874, 60942, 63062, 55404, 83512, 97895, 89746, 67112, 79383, 91743, 95772, 53320, 87637, 93761, 85613, 51191, 75354, 71194, 73295, 69088, 81395, 65060};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 137307.41343423523;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sides = {764451, 776004, 766215, 773993, 769220, 774996, 768216, 770221, 771989, 767214, 772993};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1096015.921401692;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sides = {222222, 333333, 555555, 666667, 999999};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 942809.5129865841;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sides = {222222, 333333, 555555, 666665, 999999};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sides = {222222, 333333, 555555, 666666, 999999};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 942808.0987730218;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sides = {266707, 265817, 264928, 264040, 263152, 262263, 261375, 260486, 259598, 258709, 257820, 256930, 256042, 255152, 254264, 253374, 252485, 251597, 250709, 249821, 248933, 248043, 247155, 246265, 245375, 244487, 243598, 242709, 241820, 240931, 240042, 239153, 238265, 237375, 236485, 225597, 224709, 223820, 222931, 222042, 221154, 220264, 219374, 218485, 217597, 216708, 215820, 214932, 214044, 213155};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sides = {1000000, 1000000};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sides = {11, 8, 2};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 15.491933384829668;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sides = {999996, 749997, 249999};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1414207.9055188457;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sides = {1, 3, 4, 4};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sides = {3, 4, 6, 7};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 9.899494936611665;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sides = {49, 78, 93, 94};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 131.52186130069785;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sides = {999996, 749997, 249998};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sides = {1};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sides = {996946};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sides = {1, 4, 3};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 5.656854249492381;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sides = {481964, 375105, 805739, 494426, 302932, 149913, 361663, 64287, 984870, 909404, 26350, 750888, 315721, 670733, 901153, 793373, 94615, 300103, 552318, 55672, 737067, 498846, 860779, 931250, 290060, 787433, 91462, 831000, 560442, 120440, 548133, 682104, 736278, 170808, 27905, 165389, 213774, 136093, 929046, 806588, 23102, 474996, 147068, 734272, 804011, 282090, 562751, 417517, 294102, 445616};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sides = {467531, 675324, 831168, 12988, 25974, 38962, 103896, 155842, 181818, 194805, 999998, 857142, 324675};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1212184.2411432348;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sides = {4, 2};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sides = {1, 100, 101};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sides = {999992, 709127, 53564};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sides = {100000, 200000, 400000};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 346410.16151377547;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sides = {100000, 99999, 1};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sides = {2, 1000, 1001};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sides = {1, 20, 21};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sides = {1000000, 999999};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1414212.1481595326;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sides = {1, 2, 999998, 999999, 1000000};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sides = {1000000, 59000};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 83438.60018001261;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sides = {999999, 400005, 100003, 30100, 8000, 2300, 811, 231, 31, 5, 1};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 776788.5033109076;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sides = {1000, 3000, 3999};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sides = {1000, 999, 100, 99};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sides = {999999, 999998, 999997, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sides = {1, 10, 11};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sides = {4, 3, 2};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 4.47213595499958;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sides = {10};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sides = {1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1422.70306107775;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sides = {9, 10, 11};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sides = {278535, 773215, 324062, 28492, 377815, 223896, 452590, 71234, 370678, 287959, 367356, 243306, 858392, 131720, 955423, 868964, 841877, 817878, 287177, 246642, 960169, 861958, 659720, 237715, 120509, 96776, 899509, 187131, 848924, 643618, 216104, 478129, 883815, 816892, 159298, 639832, 487729, 209965, 351289, 325318, 695068, 719004, 719240, 616248, 354354, 741312, 806940, 422892, 27133, 234521};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sides = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 1414212.148193474;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sides = {999997};
    NestedDiamonds* pObj = new NestedDiamonds();
    clock_t start = clock();
    double result = pObj->minHeight(sides);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13351270&rd=10802&pm=7817
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <memory> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <queue> 
#include <deque> 
#include <stack> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std; 
 
typedef long long Int; 
typedef pair<int,int> PII; 
typedef vector<int> VInt; 
 
#define FOR(i, a, b) for(i = (a); i < (b); ++i) 
#define RFOR(i, a, b) for(i = (a) - 1; i >= (b); --i) 
#define CLEAR(a, b) memset(a, b, sizeof(a)) 
#define SIZE(a) int((a).size())  
#define ALL(a) (a).begin(),(a).end()  
#define PB push_back 
#define MP make_pair 
 
class NestedDiamonds { 
  public: 
  double minHeight(vector <int> v)  
  { 
    sort(ALL(v)); 
    int N = SIZE(v); 
 
    vector<Int> a(N); 
    int i; 
    FOR(i, 0, N) 
      a[i] = v[i]; 
 
    Int Max = 2*a[0]*a[0]; 
    Int Min = 0; 
    FOR(i, 1, N) 
    { 
      if(a[i] == a[i - 1]) 
        return -1.0; 
 
      Int Max2 = min(2*a[i]*a[i], 4*a[i - 1]*a[i - 1] - Min); 
      Int Min2 = max(0LL, 4*a[i - 1]*a[i - 1] - Max); 
      Max = Max2; 
      Min = Min2; 
      if(Max < Min) 
        return -1.0; 
    } 
 
    return sqrt(Min + 0.0); 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/