/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10174
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

class StrengthOrIntellect {
public:
    int numberOfMissions(vector<int> strength, vector<int> intellect, vector<int> points);
};

int StrengthOrIntellect::numberOfMissions(vector<int> strength, vector<int> intellect, vector<int> points) {
    int ret;
    return ret;
}


int test0() {
    vector<int> strength = {1, 2};
    vector<int> intellect = {1, 2};
    vector<int> points = {1, 2};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {3};
    vector<int> intellect = {2};
    vector<int> points = {1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {1, 3, 1, 10, 3};
    vector<int> intellect = {1, 1, 3, 20, 3};
    vector<int> points = {2, 1, 1, 5, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> strength = {1, 2, 100, 5, 100, 10, 100, 17, 100};
    vector<int> intellect = {1, 100, 3, 100, 7, 100, 13, 100, 21};
    vector<int> points = {1, 2, 3, 4, 5, 6, 7, 8, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> strength = {1, 10, 1, 2, 16, 12, 13, 19, 12, 8};
    vector<int> intellect = {1, 5, 1, 8, 3, 5, 3, 16, 19, 20};
    vector<int> points = {1, 1, 1, 2, 1, 1, 2, 3, 5, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> strength = {18, 83, 14, 56, 52, 41, 63, 72, 48, 60, 34, 30, 71, 72, 53, 37, 29, 1, 55, 58};
    vector<int> intellect = {47, 10, 11, 17, 66, 55, 64, 15, 36, 27, 42, 35, 62, 27, 21, 24, 3, 1, 14, 28};
    vector<int> points = {4, 1, 2, 3, 3, 2, 3, 5, 1, 3, 2, 3, 3, 5, 1, 1, 2, 1, 4, 5};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {6, 9, 15, 16, 1, 60, 63, 48, 29, 1, 6, 46, 22, 14, 30, 66, 51, 43, 53, 33, 1, 3, 25, 32, 19, 44};
    vector<int> intellect = {29, 74, 13, 66, 31, 67, 83, 4, 61, 1, 83, 35, 42, 48, 90, 49, 71, 12, 60, 4, 1, 41, 70, 55, 39, 18};
    vector<int> points = {1, 3, 1, 2, 1, 3, 1, 1, 3, 1, 3, 2, 2, 1, 2, 3, 1, 1, 1, 2, 2, 1, 1, 3, 1, 3};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {4, 3, 24, 56, 31, 4, 29, 39, 4, 39, 10, 54, 36, 5, 48, 29, 2, 51, 47, 20, 36};
    vector<int> intellect = {61, 64, 21, 9, 74, 68, 11, 52, 43, 49, 51, 27, 50, 58, 53, 73, 57, 44, 56, 71, 21};
    vector<int> points = {2, 3, 2, 3, 2, 1, 2, 1, 3, 2, 2, 2, 1, 3, 1, 3, 1, 3, 3, 3, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {7, 9, 7, 39, 36, 6, 1, 44, 11, 8, 41, 1, 12, 3, 30, 46, 1, 1, 43, 28, 9, 16, 3, 38, 20, 3, 33, 1, 42};
    vector<int> intellect = {56, 78, 86, 43, 2, 84, 1, 58, 37, 14, 52, 1, 39, 80, 68, 73, 1, 1, 71, 35, 12, 49, 58, 39, 50, 18, 41, 1, 50};
    vector<int> points = {3, 4, 3, 2, 4, 5, 1, 5, 3, 2, 3, 4, 5, 2, 1, 3, 2, 2, 5, 4, 3, 5, 2, 4, 4, 3, 5, 4, 4};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> strength = {57, 45, 36, 62, 8, 46, 24, 36, 33, 56, 41, 50, 54, 47, 38, 15, 2, 41, 11, 8, 31, 23, 36, 21, 5, 54, 49, 55};
    vector<int> intellect = {56, 68, 36, 13, 63, 12, 67, 31, 51, 1, 21, 65, 65, 67, 5, 53, 37, 16, 9, 7, 55, 9, 53, 32, 1, 27, 68, 15};
    vector<int> points = {3, 3, 4, 2, 2, 1, 1, 2, 4, 1, 1, 4, 3, 3, 3, 1, 3, 1, 1, 2, 2, 4, 4, 4, 3, 4, 2, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {25, 58, 19, 14, 34, 1, 62, 2, 38, 15, 12, 1, 8, 58, 50, 26, 21, 27, 1, 26, 9, 8, 15, 43, 42, 39, 19, 30, 61};
    vector<int> intellect = {17, 3, 14, 30, 47, 1, 13, 23, 2, 25, 16, 18, 31, 7, 8, 31, 41, 6, 1, 36, 35, 27, 9, 8, 36, 5, 43, 16, 39};
    vector<int> points = {4, 3, 4, 3, 2, 4, 2, 3, 2, 2, 5, 3, 1, 5, 2, 5, 3, 3, 3, 4, 2, 2, 1, 5, 3, 2, 2, 1, 2};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> strength = {9, 44, 30, 1, 34, 43, 36, 24, 45, 12, 26, 1, 46, 40, 33, 19, 1, 48, 6, 15, 49, 52, 23};
    vector<int> intellect = {38, 27, 35, 1, 59, 14, 65, 24, 14, 17, 73, 1, 3, 26, 64, 65, 1, 58, 44, 20, 37, 75, 12};
    vector<int> points = {3, 3, 3, 1, 1, 1, 1, 3, 1, 1, 2, 3, 1, 3, 2, 2, 1, 1, 1, 1, 3, 1, 2};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> strength = {61, 80, 1, 92, 24, 95, 63, 53, 18, 2, 64, 66, 21, 54, 35, 67, 29, 94, 53, 16, 93, 70, 63, 40, 95, 8, 47};
    vector<int> intellect = {41, 60, 1, 18, 37, 7, 65, 28, 72, 22, 1, 40, 39, 31, 43, 61, 48, 55, 53, 71, 39, 42, 12, 58, 17, 22, 5};
    vector<int> points = {2, 3, 3, 3, 2, 2, 3, 1, 3, 2, 1, 1, 3, 3, 3, 2, 3, 2, 1, 1, 2, 2, 1, 3, 3, 2, 2};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> strength = {27, 29, 32, 6, 83, 58, 77, 50, 63, 1, 77, 58, 60, 24, 59, 48, 3, 16, 6, 1, 72};
    vector<int> intellect = {61, 51, 14, 34, 17, 34, 39, 37, 31, 1, 3, 43, 78, 9, 71, 20, 2, 64, 30, 1, 43};
    vector<int> points = {2, 3, 1, 3, 3, 2, 4, 4, 3, 1, 1, 4, 3, 3, 3, 4, 2, 5, 4, 3, 4};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> strength = {1, 62, 51, 53, 31, 61, 46, 64, 57, 7, 29, 2, 24, 59, 51, 7, 18, 42, 42, 57, 42, 60, 30, 19, 24, 17, 65, 6, 15};
    vector<int> intellect = {1, 39, 4, 87, 65, 56, 6, 45, 46, 74, 75, 26, 83, 87, 88, 42, 41, 36, 13, 63, 38, 49, 41, 4, 23, 83, 26, 90, 50};
    vector<int> points = {4, 3, 1, 3, 5, 2, 1, 3, 4, 4, 4, 5, 4, 2, 5, 2, 5, 2, 2, 1, 2, 3, 1, 2, 3, 2, 5, 2, 4};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> strength = {34, 55, 571, 623, 522, 516, 552, 313, 338, 1, 560, 500, 315, 28, 535, 484, 624, 366, 563, 472, 275, 280, 331, 210, 39, 427, 206, 563, 369, 319, 412, 571, 313, 217, 442, 338, 259, 446, 1, 116, 623, 1, 390, 32};
    vector<int> intellect = {127, 341, 80, 459, 290, 593, 267, 63, 152, 541, 312, 674, 23, 230, 196, 81, 363, 346, 308, 593, 209, 621, 596, 231, 567, 397, 370, 488, 665, 574, 331, 401, 572, 582, 123, 623, 397, 346, 1, 455, 57, 1, 488, 478};
    vector<int> points = {6, 7, 10, 11, 21, 18, 9, 19, 20, 8, 14, 20, 19, 14, 5, 18, 21, 8, 14, 5, 7, 13, 1, 19, 4, 8, 3, 21, 4, 9, 5, 6, 10, 5, 20, 10, 19, 9, 19, 10, 4, 14, 9, 20};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> strength = {370, 62, 119, 209, 265, 85, 302, 8, 423, 292, 19, 146, 131, 318, 553, 132, 387, 554, 434, 429, 324, 303, 241, 485, 97, 361, 256, 115, 548, 62, 207, 374, 238, 149, 49, 180, 49, 130, 1, 21, 334, 451, 523, 390, 153};
    vector<int> intellect = {61, 224, 390, 471, 398, 170, 554, 129, 288, 10, 625, 341, 247, 190, 577, 683, 92, 771, 85, 11, 534, 666, 543, 225, 39, 703, 145, 27, 540, 20, 681, 773, 28, 348, 304, 452, 408, 500, 1, 12, 171, 554, 228, 492, 75};
    vector<int> points = {20, 13, 17, 17, 13, 6, 16, 21, 2, 6, 19, 19, 13, 6, 5, 21, 6, 13, 11, 18, 1, 8, 4, 7, 8, 21, 16, 18, 1, 21, 20, 15, 21, 18, 18, 13, 18, 8, 2, 19, 13, 2, 5, 9, 10};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> strength = {469, 495, 699, 537, 1, 369, 311, 19, 355, 1, 580, 509, 135, 473, 358, 294, 477, 511, 349, 655, 343, 497, 601, 76, 271, 661, 731, 645, 76, 87, 306, 263, 122, 210, 47, 451, 372, 674, 717, 202, 237, 672, 461, 285, 533, 217, 232, 1, 724};
    vector<int> intellect = {920, 739, 718, 21, 1, 527, 554, 87, 591, 1, 589, 305, 561, 601, 568, 100, 239, 704, 648, 927, 990, 832, 676, 693, 681, 695, 533, 147, 209, 787, 5, 960, 648, 536, 989, 20, 596, 837, 784, 936, 576, 7, 146, 289, 183, 171, 168, 1, 416};
    vector<int> points = {22, 20, 12, 18, 20, 12, 5, 1, 2, 16, 3, 2, 3, 19, 16, 13, 22, 13, 12, 12, 13, 7, 9, 7, 17, 2, 7, 1, 20, 16, 15, 1, 5, 17, 19, 9, 14, 14, 20, 1, 8, 24, 18, 3, 4, 24, 22, 8, 11};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> strength = {127, 650, 347, 620, 375, 647, 574, 712, 437, 44, 620, 1, 113, 190, 108, 600, 626, 451, 369, 479, 207, 209, 1, 394, 125, 319, 139, 419, 397, 341, 598, 728, 319, 347, 706, 574, 149, 251, 408, 68, 215, 23, 730, 520, 1, 487, 664};
    vector<int> intellect = {70, 218, 120, 154, 374, 325, 277, 438, 98, 162, 641, 1, 413, 39, 98, 318, 71, 442, 159, 190, 610, 547, 1, 298, 219, 619, 37, 170, 600, 33, 611, 430, 376, 625, 521, 145, 338, 407, 514, 236, 618, 506, 176, 311, 1, 415, 159};
    vector<int> points = {2, 9, 10, 16, 14, 2, 18, 17, 8, 17, 15, 4, 8, 11, 16, 2, 11, 20, 13, 17, 12, 10, 19, 9, 17, 10, 10, 7, 9, 20, 1, 16, 12, 7, 15, 9, 12, 9, 3, 16, 14, 14, 8, 5, 5, 17, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {1, 556, 644, 166, 513, 200, 1, 600, 753, 829, 347, 1, 104, 692, 866, 738, 808, 22, 851, 227, 1, 684, 270, 802, 118, 775, 325, 486, 1, 904, 232, 824, 580, 256, 352, 763, 192, 728, 46, 597, 730};
    vector<int> intellect = {1, 100, 273, 467, 421, 567, 1, 173, 411, 99, 122, 1, 378, 703, 57, 297, 225, 98, 275, 457, 1, 671, 126, 658, 120, 124, 327, 371, 1, 462, 121, 61, 16, 103, 529, 428, 326, 32, 672, 8, 464};
    vector<int> points = {20, 8, 7, 14, 18, 15, 10, 17, 4, 7, 13, 9, 7, 5, 8, 5, 12, 6, 9, 18, 12, 21, 20, 7, 18, 5, 3, 20, 9, 18, 11, 16, 12, 12, 13, 19, 3, 21, 19, 8, 9};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> strength = {256, 55, 489, 448, 606, 215, 548, 672, 619, 240, 554, 684, 156, 148, 252, 536, 389, 503, 290, 455, 192, 283, 30, 46, 275, 264, 1, 341, 257, 115, 302, 174, 23, 434, 43, 304, 290, 558, 513, 1, 472, 573};
    vector<int> intellect = {8, 658, 496, 72, 15, 296, 612, 618, 450, 654, 672, 620, 154, 548, 484, 221, 708, 307, 421, 303, 581, 279, 92, 219, 449, 235, 1, 521, 146, 107, 324, 376, 560, 223, 297, 80, 424, 647, 430, 1, 291, 367};
    vector<int> points = {7, 13, 5, 21, 13, 1, 19, 14, 11, 21, 11, 18, 17, 20, 1, 15, 16, 1, 16, 18, 11, 19, 16, 8, 5, 13, 15, 12, 12, 6, 3, 11, 15, 19, 1, 15, 20, 18, 17, 12, 15, 3};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> strength = {22, 254, 515, 175, 395, 225, 360, 332, 449, 393, 1, 315, 50, 47, 208, 327, 480, 7, 256, 439, 515, 414, 265, 82, 467, 389, 481, 546, 243, 578, 305, 411, 443, 85, 1, 504, 472, 87, 207, 77, 175};
    vector<int> intellect = {322, 321, 28, 538, 29, 260, 444, 513, 86, 506, 1, 243, 356, 18, 161, 218, 17, 505, 255, 28, 154, 206, 425, 67, 310, 333, 85, 2, 142, 411, 394, 423, 345, 272, 1, 291, 180, 287, 128, 152, 508};
    vector<int> points = {6, 4, 20, 9, 19, 12, 17, 12, 11, 4, 10, 6, 11, 3, 19, 13, 4, 3, 2, 9, 2, 1, 2, 3, 15, 10, 10, 13, 8, 19, 14, 4, 1, 1, 19, 19, 4, 1, 2, 18, 10};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> strength = {147, 353, 57, 589, 122, 128, 347, 16, 24, 225, 615, 295, 413, 48, 176, 574, 282, 358, 1, 482, 379, 319, 431, 48, 68, 559, 38, 426, 77, 371, 8, 220, 316, 578, 294, 4, 462, 313, 476, 381, 258};
    vector<int> intellect = {239, 785, 816, 783, 73, 606, 703, 686, 494, 874, 224, 815, 65, 359, 758, 40, 449, 206, 1, 820, 786, 287, 120, 161, 174, 644, 153, 328, 437, 337, 176, 286, 512, 707, 210, 485, 300, 56, 444, 672, 539};
    vector<int> points = {21, 7, 8, 19, 4, 14, 10, 11, 24, 17, 22, 12, 2, 11, 4, 1, 3, 5, 23, 18, 13, 15, 6, 7, 7, 2, 18, 19, 12, 16, 22, 21, 4, 2, 1, 24, 17, 15, 21, 3, 18};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> strength = {798, 619, 1, 474, 636, 666, 556, 601, 103, 386, 329, 658, 590, 1, 725, 244, 486, 90, 726, 784, 380, 14, 171, 722, 374, 81, 485, 343, 181, 233, 685, 88, 4, 44, 712, 711, 438, 701, 378, 683, 800, 728, 380, 288};
    vector<int> intellect = {27, 493, 1, 50, 171, 42, 83, 293, 370, 206, 422, 474, 377, 1, 532, 3, 393, 143, 508, 356, 486, 233, 274, 303, 186, 23, 120, 404, 62, 343, 257, 225, 39, 120, 425, 110, 117, 493, 29, 65, 459, 225, 86, 426};
    vector<int> points = {10, 21, 20, 4, 11, 13, 3, 20, 11, 21, 18, 11, 11, 13, 5, 22, 14, 2, 13, 4, 7, 16, 17, 19, 5, 18, 19, 6, 3, 13, 2, 19, 4, 4, 18, 6, 20, 12, 14, 21, 5, 8, 9, 19};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> strength = {28, 1, 233, 51, 560, 308, 408, 260, 83, 248, 673, 551, 317, 46, 1, 564, 282, 201, 657, 451, 399, 120, 548, 639, 354, 174, 533, 234, 352, 517, 7, 174, 340, 307, 286, 14, 37, 583, 43, 526, 325, 1, 620, 222};
    vector<int> intellect = {279, 1, 766, 494, 646, 673, 810, 473, 98, 891, 741, 38, 342, 476, 1, 28, 509, 57, 738, 833, 66, 427, 884, 200, 25, 442, 785, 782, 276, 733, 430, 806, 701, 369, 733, 713, 321, 898, 201, 57, 551, 1, 902, 635};
    vector<int> points = {1, 15, 21, 4, 3, 9, 18, 16, 7, 3, 9, 17, 17, 6, 8, 8, 22, 17, 21, 17, 22, 14, 8, 10, 14, 8, 14, 19, 21, 11, 7, 5, 6, 6, 13, 9, 22, 8, 2, 9, 14, 15, 8, 21};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> strength = {114, 217, 575, 605, 265, 581, 304, 746, 682, 329, 564, 1, 333, 382, 379, 500, 76, 189, 502, 364, 671, 711, 438, 312, 712, 332, 756, 359, 632, 479, 170, 221, 311, 415, 655, 1, 542, 86, 61, 587, 288, 61, 590, 134, 364, 661, 233};
    vector<int> intellect = {704, 277, 398, 858, 664, 811, 544, 569, 526, 86, 687, 1, 258, 621, 36, 43, 479, 638, 911, 330, 787, 904, 430, 122, 879, 358, 246, 216, 855, 919, 193, 211, 519, 198, 333, 1, 540, 345, 283, 138, 761, 647, 483, 802, 508, 502, 320};
    vector<int> points = {18, 17, 4, 13, 21, 1, 6, 17, 7, 14, 5, 19, 5, 2, 22, 8, 19, 14, 16, 18, 16, 14, 7, 2, 20, 15, 7, 1, 7, 22, 8, 2, 7, 3, 15, 22, 21, 8, 7, 12, 16, 7, 8, 5, 11, 2, 4};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> strength = {603, 710, 65, 577, 751, 786, 358, 339, 257, 35, 1, 58, 681, 640, 370, 310, 1, 194, 1, 664, 617, 748, 135, 705, 371, 1, 652, 771, 616, 688, 749, 694, 552, 148, 145, 1, 780, 35, 1, 628, 175, 278, 2, 609, 271, 437, 424};
    vector<int> intellect = {614, 669, 985, 610, 624, 826, 817, 494, 937, 268, 1, 357, 607, 559, 744, 452, 1, 737, 1, 744, 51, 990, 253, 814, 491, 1, 76, 179, 948, 975, 378, 180, 794, 477, 564, 1, 106, 747, 1, 414, 402, 117, 990, 385, 94, 728, 841};
    vector<int> points = {19, 2, 21, 1, 12, 16, 2, 19, 5, 6, 14, 1, 5, 2, 15, 20, 16, 16, 9, 1, 15, 15, 20, 15, 13, 13, 7, 13, 2, 8, 11, 2, 8, 8, 22, 21, 10, 13, 6, 16, 17, 13, 19, 13, 9, 4, 8};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> strength = {344, 531, 261, 537, 515, 777, 340, 759, 159, 725, 420, 545, 192, 706, 499, 311, 267, 611, 588, 901, 918, 218, 634, 1, 393, 802, 176, 550, 25, 74, 623, 819, 590, 926, 66, 480, 417, 451, 1, 521, 629};
    vector<int> intellect = {282, 293, 480, 78, 401, 568, 293, 148, 13, 271, 491, 505, 96, 2, 501, 512, 542, 388, 440, 358, 476, 78, 480, 1, 84, 294, 407, 512, 582, 234, 224, 85, 349, 211, 521, 602, 351, 472, 1, 181, 85};
    vector<int> points = {2, 9, 5, 2, 7, 6, 11, 3, 2, 20, 17, 19, 3, 7, 3, 2, 4, 10, 19, 1, 4, 16, 21, 19, 9, 11, 14, 8, 6, 4, 18, 7, 11, 21, 21, 1, 5, 5, 7, 8, 2};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {168, 24, 203, 148, 323, 568, 82, 320, 376, 544, 154, 280, 456, 48, 1, 377, 664, 169, 1, 537, 13, 341, 45, 679, 326, 557, 373, 640, 286, 680, 663, 208, 51, 292, 478, 122, 175, 393, 347, 435, 41, 550, 581};
    vector<int> intellect = {488, 26, 96, 503, 342, 393, 428, 87, 84, 449, 291, 128, 386, 296, 1, 254, 46, 479, 1, 242, 15, 114, 72, 324, 490, 274, 409, 338, 450, 55, 194, 414, 271, 218, 441, 258, 237, 31, 231, 220, 457, 398, 102};
    vector<int> points = {2, 20, 23, 22, 17, 2, 6, 5, 22, 20, 14, 22, 23, 5, 16, 9, 24, 12, 21, 15, 8, 12, 14, 10, 9, 12, 5, 10, 19, 23, 17, 9, 24, 4, 21, 7, 1, 13, 18, 22, 23, 4, 15};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> strength = {443, 591, 6, 701, 205, 439, 584, 232, 656, 447, 249, 122, 287, 699, 385, 92, 551, 149, 374, 612, 101, 226, 124, 463, 1, 608, 678, 432, 277, 292, 450, 256, 91, 65, 187, 193, 177, 115, 279, 615, 123, 532, 143, 675, 513, 648};
    vector<int> intellect = {566, 349, 366, 220, 35, 390, 608, 116, 305, 33, 680, 420, 323, 180, 150, 131, 553, 225, 222, 309, 428, 70, 370, 635, 1, 575, 666, 448, 685, 538, 425, 47, 566, 83, 61, 489, 239, 213, 632, 448, 506, 212, 55, 201, 170, 446};
    vector<int> points = {2, 24, 6, 16, 12, 11, 9, 22, 6, 22, 16, 17, 17, 2, 4, 1, 13, 8, 15, 7, 4, 1, 24, 21, 6, 22, 2, 19, 5, 24, 5, 11, 18, 7, 18, 5, 6, 22, 11, 3, 17, 21, 23, 13, 22, 21};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> strength = {409, 584, 300, 82, 1, 124, 711, 638, 783, 788, 35, 389, 81, 279, 2, 329, 765, 327, 536, 494, 541, 742, 542, 750, 97, 72, 345, 622, 808, 529, 467, 1, 545, 20, 152, 708, 511, 377, 762, 380, 677, 693, 285, 152, 1, 361};
    vector<int> intellect = {243, 354, 104, 49, 1, 723, 700, 652, 608, 439, 640, 425, 448, 63, 542, 134, 327, 504, 98, 673, 501, 443, 119, 492, 289, 278, 166, 285, 127, 197, 348, 1, 438, 139, 342, 550, 694, 553, 254, 565, 127, 120, 377, 268, 1, 450};
    vector<int> points = {12, 11, 14, 17, 2, 20, 19, 8, 15, 16, 3, 16, 21, 1, 9, 8, 5, 8, 4, 11, 22, 21, 23, 9, 4, 18, 1, 20, 21, 16, 20, 11, 21, 15, 9, 1, 2, 1, 10, 5, 7, 7, 6, 2, 13, 9};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> strength = {240, 23, 276, 72, 22, 256, 335, 495, 283, 247, 27, 485, 493, 50, 8, 76, 68, 272, 43, 264, 40, 284, 284, 116, 405, 447, 1, 325, 425, 409, 86, 179, 494, 331, 379, 110, 157, 458, 411, 360, 22, 64, 240, 417, 375, 402};
    vector<int> intellect = {511, 175, 443, 129, 63, 155, 583, 180, 432, 130, 489, 279, 122, 355, 595, 442, 339, 388, 480, 449, 89, 181, 454, 43, 479, 277, 1, 187, 401, 200, 8, 388, 416, 454, 42, 370, 326, 586, 560, 433, 267, 281, 84, 415, 419, 546};
    vector<int> points = {13, 4, 14, 6, 17, 13, 17, 16, 17, 10, 7, 18, 9, 11, 19, 1, 6, 14, 20, 14, 13, 19, 15, 10, 3, 8, 3, 1, 18, 5, 7, 14, 6, 20, 13, 13, 20, 1, 13, 2, 5, 9, 10, 8, 7, 10};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> strength = {313, 782, 680, 369, 455, 697, 641, 127, 717, 485, 272, 146, 503, 1, 757, 445, 605, 207, 101, 514, 190, 144, 682, 726, 610, 189, 149, 652, 496, 357, 219, 747, 670, 469, 523, 647, 601, 479, 293, 624, 570, 411, 359, 672};
    vector<int> intellect = {84, 730, 562, 124, 384, 704, 197, 340, 71, 409, 589, 603, 298, 1, 146, 566, 251, 693, 724, 143, 194, 181, 635, 9, 329, 99, 298, 737, 763, 785, 273, 382, 199, 787, 592, 270, 764, 522, 426, 435, 563, 17, 320, 757};
    vector<int> points = {2, 6, 6, 18, 8, 22, 1, 15, 2, 17, 9, 23, 17, 2, 3, 16, 6, 7, 10, 2, 5, 21, 15, 5, 1, 20, 8, 12, 14, 11, 21, 9, 8, 10, 4, 2, 18, 15, 2, 5, 13, 19, 7, 2};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {21, 488, 220, 323, 738, 103, 657, 555, 407, 727, 38, 598, 374, 621, 6, 756, 300, 278, 453, 656, 319, 342, 320, 52, 591, 13, 153, 324, 464, 350, 560, 149, 222, 280, 768, 95, 397, 153, 232, 530, 325};
    vector<int> intellect = {351, 516, 271, 404, 343, 267, 385, 41, 33, 346, 180, 302, 380, 334, 374, 370, 172, 373, 191, 371, 267, 472, 434, 98, 296, 111, 474, 360, 6, 452, 477, 254, 18, 167, 116, 250, 555, 557, 503, 55, 476};
    vector<int> points = {24, 17, 1, 23, 24, 14, 6, 17, 1, 7, 10, 10, 21, 18, 5, 11, 22, 19, 17, 5, 4, 24, 23, 24, 8, 4, 8, 7, 4, 16, 4, 2, 15, 4, 21, 1, 20, 1, 20, 23, 19};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> strength = {219, 495, 190, 94, 116, 328, 181, 178, 1, 1, 296, 685, 683, 569, 433, 335, 179, 100, 28, 50, 530, 168, 131, 331, 461, 570, 51, 359, 705, 476, 460, 627, 607, 1, 432, 147, 369, 289, 543, 73};
    vector<int> intellect = {355, 224, 480, 315, 255, 41, 98, 100, 1, 1, 403, 55, 203, 4, 249, 15, 67, 122, 384, 139, 19, 124, 491, 479, 247, 395, 60, 476, 422, 387, 181, 330, 122, 1, 21, 131, 136, 295, 420, 223};
    vector<int> points = {21, 12, 10, 14, 9, 7, 14, 18, 3, 20, 8, 21, 19, 9, 18, 11, 9, 10, 9, 12, 11, 19, 9, 15, 10, 11, 18, 1, 15, 6, 15, 21, 5, 13, 1, 12, 6, 9, 7, 7};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> strength = {575, 306, 527, 456, 350, 137, 1, 746, 629, 172, 482, 780, 743, 1, 483, 362, 969, 556, 360, 781, 693, 288, 927, 670, 29, 271, 163, 563, 176, 337, 817, 138, 483, 674, 281, 816, 649, 742, 502, 699, 438, 771, 909, 453, 380, 107, 83, 91, 858};
    vector<int> intellect = {313, 682, 709, 253, 670, 379, 1, 315, 101, 477, 346, 147, 701, 1, 547, 504, 735, 37, 697, 732, 744, 506, 593, 473, 385, 313, 308, 106, 747, 480, 312, 190, 49, 745, 164, 472, 474, 143, 49, 375, 127, 410, 678, 652, 622, 233, 671, 576, 472};
    vector<int> points = {3, 15, 24, 14, 22, 14, 20, 17, 20, 21, 14, 17, 14, 11, 2, 21, 13, 19, 14, 15, 9, 14, 13, 24, 21, 11, 24, 24, 9, 13, 23, 1, 14, 3, 4, 20, 4, 16, 7, 18, 14, 5, 17, 19, 3, 17, 20, 1, 22};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {491, 87, 164, 457, 36, 5, 608, 828, 522, 153, 64, 152, 147, 808, 793, 389, 770, 434, 151, 598, 744, 646, 102, 237, 679, 344, 20, 10, 132, 211, 94, 81, 374, 596, 307, 24, 651, 232, 519, 62, 226, 701, 274, 581, 740, 236, 512, 817, 423};
    vector<int> intellect = {234, 617, 721, 224, 620, 241, 76, 555, 361, 503, 682, 88, 228, 839, 510, 135, 509, 250, 210, 283, 279, 77, 572, 324, 76, 531, 859, 269, 332, 822, 703, 527, 543, 164, 155, 243, 302, 504, 769, 30, 245, 506, 350, 361, 463, 30, 152, 722, 520};
    vector<int> points = {8, 20, 6, 23, 7, 23, 14, 2, 1, 1, 5, 9, 16, 3, 5, 5, 12, 8, 23, 24, 23, 23, 13, 2, 9, 10, 6, 4, 3, 1, 4, 7, 7, 22, 16, 12, 22, 2, 11, 5, 15, 14, 22, 18, 6, 10, 2, 20, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> strength = {270, 139, 601, 741, 397, 774, 421, 768, 860, 118, 133, 739, 585, 15, 702, 653, 604, 240, 54, 90, 159, 800, 770, 309, 196, 39, 392, 558, 874, 728, 916, 164, 456, 776, 298, 38, 415, 523, 152, 773, 929, 440, 848, 746, 189, 34, 218};
    vector<int> intellect = {582, 534, 296, 202, 448, 465, 223, 504, 521, 445, 303, 79, 557, 313, 160, 369, 263, 490, 66, 523, 122, 70, 363, 160, 151, 613, 523, 160, 625, 566, 238, 324, 235, 595, 616, 593, 249, 101, 599, 446, 270, 423, 61, 58, 324, 152, 464};
    vector<int> points = {16, 19, 21, 20, 17, 18, 6, 17, 7, 10, 7, 14, 9, 10, 10, 15, 2, 13, 5, 1, 6, 1, 19, 1, 18, 1, 21, 4, 9, 7, 9, 6, 16, 5, 3, 3, 18, 2, 17, 8, 7, 2, 11, 20, 21, 14, 4};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> strength = {146, 115, 632, 247, 117, 289, 93, 1, 324, 627, 474, 343, 128, 568, 714, 9, 21, 374, 597, 92, 408, 635, 542, 673, 1, 417, 1, 95, 330, 428, 374, 422, 547, 580, 425, 137, 637, 581, 665, 175, 571, 584};
    vector<int> intellect = {378, 894, 870, 367, 225, 528, 745, 1, 376, 107, 796, 430, 76, 573, 583, 879, 574, 334, 814, 365, 488, 190, 199, 606, 1, 54, 1, 730, 144, 903, 896, 715, 271, 863, 897, 572, 401, 726, 100, 853, 611, 37};
    vector<int> points = {14, 15, 8, 19, 7, 13, 21, 4, 9, 13, 12, 9, 6, 11, 3, 14, 7, 14, 9, 16, 15, 9, 4, 12, 19, 14, 17, 21, 18, 20, 8, 17, 11, 6, 17, 19, 3, 22, 10, 6, 3, 9};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {1, 258, 472, 368, 18, 755, 1, 793, 618, 68, 829, 498, 477, 854, 528, 502, 237, 739, 736, 764, 689, 403, 861, 334, 812, 839, 225, 533, 78, 609, 277, 601, 208, 633, 569, 189, 410, 752, 279, 56, 239, 528, 16, 68, 200};
    vector<int> intellect = {1, 41, 309, 453, 5, 565, 1, 263, 440, 479, 195, 154, 658, 214, 745, 722, 320, 578, 360, 700, 36, 256, 227, 290, 687, 435, 613, 658, 748, 35, 3, 390, 682, 677, 184, 406, 506, 291, 89, 354, 209, 123, 464, 31, 295};
    vector<int> points = {13, 2, 6, 4, 20, 10, 12, 17, 10, 6, 16, 1, 11, 10, 8, 10, 5, 18, 6, 9, 1, 9, 6, 2, 15, 2, 17, 18, 5, 8, 9, 19, 4, 2, 13, 5, 13, 11, 20, 14, 8, 14, 6, 2, 19};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> strength = {1, 147, 568, 224, 220, 399, 485, 79, 278, 64, 448, 206, 107, 50, 526, 106, 187, 65, 165, 89, 260, 431, 320, 138, 314, 289, 202, 173, 191, 148, 143, 292, 412, 92, 463, 386, 141, 44, 97, 60, 144};
    vector<int> intellect = {1, 462, 471, 740, 879, 910, 429, 947, 578, 581, 540, 381, 261, 423, 369, 756, 172, 378, 789, 343, 354, 480, 547, 589, 156, 100, 732, 305, 220, 922, 110, 789, 794, 404, 598, 52, 133, 773, 871, 352, 921};
    vector<int> points = {20, 3, 23, 6, 19, 21, 4, 12, 21, 9, 24, 9, 18, 9, 4, 14, 19, 6, 24, 4, 17, 8, 22, 4, 21, 24, 7, 15, 9, 8, 20, 14, 21, 8, 13, 2, 10, 18, 4, 19, 17};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> strength = {556, 166, 171, 298, 36, 117, 518, 549, 572, 1, 85, 265, 478, 145, 592, 355, 36, 1, 346, 202, 416, 332, 330, 233, 413, 313, 196, 377, 77, 261, 386, 178, 164, 254, 576, 308, 1, 26, 398, 559, 515, 151, 483, 222};
    vector<int> intellect = {345, 203, 341, 183, 448, 348, 16, 77, 477, 1, 444, 71, 449, 543, 178, 237, 526, 1, 50, 590, 481, 389, 456, 349, 310, 409, 654, 627, 235, 390, 113, 449, 44, 134, 621, 61, 414, 22, 91, 287, 236, 292, 72, 502};
    vector<int> points = {3, 20, 7, 11, 20, 19, 4, 2, 6, 3, 11, 7, 8, 12, 12, 19, 15, 11, 6, 18, 3, 20, 18, 10, 11, 13, 9, 4, 15, 6, 19, 8, 9, 2, 15, 8, 1, 3, 13, 12, 21, 18, 15, 21};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> strength = {411, 105, 389, 197, 255, 285, 455, 25, 456, 404, 273, 95, 43, 196, 393, 505, 129, 81, 333, 1, 351, 171, 481, 361, 223, 341, 353, 440, 358, 96, 185, 76, 496, 369, 320, 418, 486, 49, 302, 328, 64, 451, 93, 192, 1, 454};
    vector<int> intellect = {243, 445, 385, 3, 499, 140, 479, 592, 318, 361, 479, 40, 451, 64, 463, 569, 126, 366, 204, 1, 412, 49, 322, 169, 345, 421, 255, 259, 228, 519, 367, 457, 281, 148, 560, 104, 213, 26, 142, 351, 341, 452, 263, 297, 1, 258};
    vector<int> points = {13, 15, 19, 21, 8, 22, 18, 20, 6, 5, 10, 17, 17, 21, 19, 19, 2, 8, 14, 4, 10, 5, 5, 21, 10, 7, 24, 14, 19, 22, 9, 17, 22, 4, 24, 7, 4, 8, 23, 16, 21, 21, 14, 14, 4, 3};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> strength = {725, 192, 19, 779, 516, 586, 434, 141, 401, 740, 589, 421, 156, 657, 469, 147, 34, 786, 653, 30, 20, 85, 241, 1, 278, 259, 800, 268, 1, 313, 84, 552, 11, 87, 825, 480, 102, 209, 29, 271, 411, 792};
    vector<int> intellect = {1, 392, 208, 192, 17, 318, 273, 364, 655, 106, 649, 57, 255, 599, 735, 575, 189, 562, 736, 82, 405, 72, 388, 1, 763, 100, 301, 803, 1, 383, 692, 521, 567, 764, 699, 662, 358, 792, 3, 42, 184, 192};
    vector<int> points = {6, 12, 5, 13, 12, 17, 20, 7, 6, 19, 2, 10, 7, 21, 23, 14, 4, 8, 10, 17, 6, 9, 12, 13, 6, 14, 15, 11, 19, 3, 16, 10, 1, 8, 4, 8, 7, 3, 14, 13, 1, 6};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> strength = {113, 571, 1, 696, 124, 21, 545, 578, 691, 830, 469, 730, 1, 130, 1, 530, 797, 182, 80, 1, 386, 759, 855, 644, 358, 198, 454, 1, 607, 804, 446, 784, 354, 354, 200, 733, 736, 321, 330, 675, 430, 203};
    vector<int> intellect = {387, 212, 1, 520, 380, 214, 88, 33, 285, 158, 436, 287, 1, 157, 1, 446, 164, 295, 5, 1, 432, 371, 440, 324, 237, 416, 446, 1, 484, 292, 528, 499, 237, 532, 44, 384, 486, 312, 401, 84, 275, 310};
    vector<int> points = {11, 11, 19, 3, 11, 1, 13, 3, 9, 2, 2, 3, 15, 7, 11, 3, 22, 16, 9, 12, 5, 7, 5, 7, 16, 13, 8, 6, 5, 19, 11, 1, 24, 1, 23, 1, 7, 1, 21, 23, 13, 19};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> strength = {408, 581, 135, 75, 324, 349, 567, 505, 529, 744, 705, 438, 620, 359, 441, 375, 349, 319, 159, 206, 441, 293, 634, 511, 246, 201, 390, 43, 21, 258, 260, 428, 135, 603, 289, 534, 476, 138, 234, 742, 89, 476, 236, 254, 1, 25, 717, 205, 178};
    vector<int> intellect = {136, 513, 147, 445, 429, 130, 116, 82, 492, 147, 461, 46, 19, 416, 285, 460, 414, 119, 15, 298, 522, 36, 369, 501, 21, 452, 463, 475, 27, 390, 7, 343, 153, 228, 487, 23, 76, 445, 57, 393, 322, 446, 45, 248, 1, 499, 110, 146, 296};
    vector<int> points = {4, 19, 21, 7, 10, 13, 8, 19, 23, 9, 22, 15, 11, 14, 6, 5, 15, 2, 10, 21, 7, 7, 1, 13, 18, 6, 15, 12, 4, 8, 11, 19, 21, 23, 4, 6, 19, 17, 4, 7, 12, 3, 9, 11, 21, 9, 3, 14, 7};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {538, 505, 443, 100, 328, 574, 341, 467, 304, 569, 115, 168, 331, 501, 205, 574, 142, 107, 438, 392, 412, 484, 14, 112, 181, 124, 212, 169, 216, 491, 310, 580, 572, 197, 32, 23, 402, 489, 1, 446, 235, 597, 475, 436, 530};
    vector<int> intellect = {820, 352, 501, 797, 546, 504, 12, 7, 105, 380, 521, 91, 320, 788, 74, 63, 46, 787, 68, 41, 165, 174, 276, 155, 253, 646, 379, 48, 249, 519, 664, 256, 486, 494, 20, 662, 746, 725, 1, 527, 581, 449, 526, 156, 550};
    vector<int> points = {8, 10, 6, 11, 3, 1, 23, 16, 3, 1, 1, 3, 8, 11, 13, 8, 14, 18, 15, 2, 20, 16, 21, 22, 9, 3, 19, 14, 23, 17, 19, 12, 13, 8, 12, 10, 10, 23, 9, 6, 21, 4, 22, 16, 8};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> strength = {353, 279, 380, 156, 453, 518, 499, 229, 499, 1, 491, 246, 274, 501, 471, 438, 167, 528, 357, 464, 279, 8, 547, 1, 21, 612, 1, 135, 286, 195, 51, 131, 69, 310, 393, 510, 143, 470, 470, 21, 368};
    vector<int> intellect = {457, 493, 240, 251, 609, 121, 388, 622, 675, 1, 165, 13, 185, 120, 549, 297, 228, 457, 266, 656, 638, 495, 407, 1, 491, 268, 1, 662, 669, 479, 29, 557, 581, 259, 79, 83, 381, 637, 188, 558, 552};
    vector<int> points = {17, 2, 18, 7, 20, 19, 22, 6, 7, 7, 14, 14, 1, 8, 18, 4, 14, 6, 14, 1, 21, 15, 9, 1, 20, 1, 13, 18, 12, 2, 20, 15, 20, 14, 3, 20, 20, 2, 13, 8, 8};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> strength = {199, 146, 71, 1, 425, 544, 140, 311, 343, 471, 644, 597, 205, 412, 193, 669, 1, 506, 426, 390, 139, 280, 490, 1, 450, 422, 611, 53, 615, 266, 567, 505, 660, 284, 639, 9, 442, 1, 115, 299, 428};
    vector<int> intellect = {58, 66, 279, 1, 14, 34, 63, 107, 10, 13, 343, 645, 7, 540, 14, 469, 1, 476, 582, 440, 262, 85, 283, 1, 454, 150, 558, 529, 94, 604, 469, 173, 642, 531, 442, 142, 18, 1, 186, 54, 450};
    vector<int> points = {16, 12, 11, 7, 6, 1, 6, 18, 3, 22, 12, 11, 18, 12, 9, 17, 10, 20, 3, 21, 5, 15, 12, 24, 11, 13, 6, 13, 6, 9, 17, 10, 23, 19, 14, 2, 15, 19, 14, 14, 6};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> strength = {396, 314, 389, 48, 21, 9, 236, 80, 640, 244, 25, 412, 193, 161, 345, 618, 215, 89, 589, 52, 320, 140, 271, 643, 296, 265, 434, 679, 42, 194, 240, 336, 325, 185, 311, 262, 2, 278, 115, 238, 97, 302, 593, 530, 480, 627, 126, 516};
    vector<int> intellect = {308, 304, 489, 73, 133, 258, 602, 27, 802, 635, 597, 700, 262, 219, 54, 249, 248, 341, 28, 63, 773, 646, 586, 251, 392, 564, 502, 810, 648, 699, 429, 793, 753, 129, 500, 165, 576, 707, 151, 123, 275, 676, 780, 256, 422, 132, 760, 321};
    vector<int> points = {20, 21, 7, 8, 21, 13, 1, 13, 6, 19, 14, 16, 17, 10, 3, 13, 14, 6, 12, 7, 7, 12, 11, 14, 12, 21, 11, 6, 3, 13, 7, 5, 3, 9, 6, 5, 6, 20, 14, 20, 7, 11, 6, 2, 21, 13, 13, 4};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {554, 426, 127, 506, 47, 334, 231, 274, 545, 776, 760, 329, 278, 22, 667, 329, 56, 179, 623, 801, 117, 128, 745, 349, 255, 538, 364, 513, 325, 311, 170, 719, 521, 93, 29, 151, 238, 527, 822, 780, 147, 365, 555, 546, 81, 724, 531, 381};
    vector<int> intellect = {266, 39, 160, 469, 537, 377, 30, 122, 378, 62, 422, 426, 19, 12, 57, 513, 288, 135, 214, 440, 420, 432, 28, 515, 288, 347, 251, 348, 279, 420, 224, 109, 207, 388, 98, 276, 441, 298, 318, 122, 391, 389, 97, 513, 48, 139, 77, 445};
    vector<int> points = {2, 18, 3, 5, 11, 18, 3, 9, 1, 11, 18, 4, 19, 9, 4, 2, 19, 14, 16, 1, 3, 4, 3, 19, 16, 3, 19, 20, 5, 11, 12, 6, 15, 1, 10, 17, 19, 20, 4, 9, 4, 1, 18, 4, 2, 8, 21, 12};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> strength = {547, 577, 12, 55, 118, 84, 664, 152, 605, 60, 225, 658, 522, 366, 455, 422, 163, 623, 599, 157, 595, 311, 532, 650, 90, 26, 1, 252, 629, 710, 420, 525, 100, 115, 252, 523, 1, 307, 662, 67, 373, 292, 694, 281};
    vector<int> intellect = {633, 732, 455, 391, 164, 555, 314, 278, 84, 353, 383, 175, 49, 608, 192, 410, 222, 399, 132, 137, 660, 325, 304, 572, 368, 230, 1, 473, 190, 270, 631, 355, 433, 60, 531, 169, 1, 609, 281, 503, 277, 92, 430, 478};
    vector<int> points = {20, 8, 6, 4, 2, 19, 10, 11, 11, 16, 2, 9, 12, 13, 11, 8, 18, 12, 20, 4, 17, 20, 4, 14, 19, 19, 14, 20, 17, 6, 17, 19, 20, 14, 9, 7, 12, 8, 8, 1, 7, 5, 9, 7};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> strength = {154, 196, 51, 461, 1, 391, 497, 365, 5, 344, 410, 298, 193, 392, 128, 247, 418, 206, 92, 397, 25, 486, 343, 211, 1, 111, 345, 339, 406, 539, 285, 422, 543, 202, 266, 350, 377, 486, 2, 554, 119, 167, 286, 293, 529, 79, 55};
    vector<int> intellect = {593, 108, 415, 257, 1, 667, 264, 324, 736, 399, 531, 363, 195, 562, 216, 586, 662, 290, 574, 436, 631, 704, 252, 376, 1, 53, 169, 55, 473, 14, 148, 169, 628, 182, 732, 563, 90, 631, 677, 671, 623, 23, 203, 589, 88, 514, 686};
    vector<int> points = {18, 19, 1, 5, 8, 22, 11, 21, 8, 13, 9, 19, 22, 22, 13, 17, 17, 14, 19, 21, 9, 16, 2, 8, 12, 10, 16, 15, 15, 11, 22, 13, 15, 3, 13, 8, 9, 6, 11, 15, 12, 4, 19, 14, 5, 12, 12};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {89, 294, 733, 328, 87, 231, 699, 691, 468, 1, 248, 1, 297, 764, 254, 207, 848, 564, 766, 619, 666, 153, 121, 436, 1, 579, 1, 804, 447, 211, 731, 554, 573, 211, 124, 744, 113, 20, 124, 400, 861, 567, 468};
    vector<int> intellect = {661, 289, 292, 453, 465, 543, 185, 114, 498, 1, 337, 1, 583, 229, 349, 605, 559, 574, 35, 32, 188, 258, 56, 194, 1, 85, 1, 82, 323, 256, 6, 265, 234, 588, 391, 156, 337, 533, 283, 595, 318, 94, 523};
    vector<int> points = {3, 8, 4, 15, 1, 15, 17, 15, 18, 22, 13, 2, 10, 6, 1, 21, 17, 4, 19, 22, 20, 17, 8, 8, 23, 10, 3, 3, 22, 18, 17, 4, 10, 1, 6, 7, 20, 23, 15, 9, 19, 21, 6};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> strength = {527, 143, 5, 359, 373, 172, 412, 74, 256, 489, 1, 61, 52, 445, 529, 267, 377, 375, 18, 199, 184, 212, 244, 389, 90, 413, 248, 306, 209, 1, 234, 213, 464, 1, 251, 86, 355, 193, 195, 306, 39};
    vector<int> intellect = {365, 151, 168, 125, 239, 484, 354, 482, 18, 323, 1, 471, 259, 137, 339, 418, 535, 84, 243, 487, 403, 112, 10, 341, 508, 322, 357, 143, 335, 1, 287, 171, 520, 1, 368, 166, 302, 32, 466, 140, 485};
    vector<int> points = {9, 22, 2, 4, 21, 3, 2, 13, 4, 1, 8, 14, 2, 7, 9, 21, 22, 2, 14, 11, 13, 7, 21, 4, 7, 18, 17, 9, 7, 21, 4, 10, 23, 1, 12, 17, 10, 7, 6, 10, 14};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> strength = {534, 445, 536, 787, 945, 497, 217, 977, 99, 25, 496, 788, 509, 496, 560, 374, 94, 269, 128, 751, 978, 466, 627, 128, 184, 64, 441, 699, 826, 224, 83, 808, 1, 690, 218, 281, 68, 49, 599, 981, 1, 892, 787, 911, 265, 149, 159, 840, 251, 109};
    vector<int> intellect = {829, 477, 403, 394, 858, 692, 584, 306, 419, 468, 976, 466, 461, 123, 120, 751, 549, 213, 572, 750, 737, 784, 154, 781, 348, 545, 663, 599, 461, 348, 424, 810, 1, 206, 857, 651, 779, 933, 336, 167, 1, 694, 58, 227, 667, 413, 828, 164, 897, 487};
    vector<int> points = {15, 15, 16, 21, 13, 7, 14, 26, 10, 11, 6, 3, 3, 6, 9, 21, 27, 6, 5, 19, 16, 4, 16, 22, 24, 10, 22, 9, 20, 13, 16, 1, 15, 27, 9, 29, 4, 17, 27, 2, 26, 9, 20, 21, 15, 23, 30, 29, 17, 28};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> strength = {324, 631, 55, 125, 828, 39, 206, 637, 478, 409, 392, 40, 445, 396, 23, 773, 48, 907, 468, 654, 930, 887, 471, 972, 843, 719, 858, 352, 748, 718, 93, 850, 1, 365, 146, 748, 137, 491, 49, 720, 288, 291, 996, 621, 956, 502, 739, 589, 116, 1};
    vector<int> intellect = {2, 95, 395, 570, 202, 562, 901, 211, 793, 776, 140, 174, 828, 103, 765, 9, 832, 468, 606, 440, 441, 444, 611, 472, 421, 589, 866, 103, 73, 994, 694, 874, 1, 1, 54, 509, 124, 376, 566, 470, 341, 322, 907, 57, 58, 661, 379, 500, 367, 1};
    vector<int> points = {2, 21, 15, 2, 3, 15, 23, 28, 21, 10, 6, 10, 26, 27, 19, 21, 17, 5, 22, 27, 18, 18, 6, 13, 6, 12, 6, 21, 11, 1, 30, 4, 27, 13, 10, 20, 15, 7, 3, 23, 17, 7, 24, 14, 12, 17, 18, 21, 26, 18};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> strength = {849, 672, 66, 205, 644, 625, 679, 189, 224, 767, 877, 754, 323, 388, 579, 695, 185, 1, 412, 228, 113, 207, 960, 1, 108, 95, 935, 404, 661, 33, 740, 464, 914, 999, 791, 449, 927, 978, 921, 599, 67, 291, 403, 227, 647, 387, 814, 438, 877, 1};
    vector<int> intellect = {994, 59, 707, 603, 117, 116, 337, 783, 713, 43, 663, 705, 596, 222, 641, 932, 66, 985, 958, 687, 232, 402, 577, 1, 884, 381, 384, 949, 274, 224, 504, 178, 831, 104, 869, 107, 568, 472, 846, 43, 634, 312, 870, 761, 491, 611, 163, 816, 391, 1};
    vector<int> points = {19, 23, 21, 8, 29, 24, 30, 2, 27, 29, 27, 9, 2, 28, 5, 6, 27, 10, 8, 24, 28, 16, 12, 28, 16, 26, 2, 1, 24, 18, 8, 12, 15, 9, 5, 5, 16, 26, 19, 9, 6, 11, 4, 18, 29, 20, 19, 26, 20, 25};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> strength = {436, 530, 638, 995, 276, 856, 434, 126, 936, 615, 27, 467, 474, 954, 601, 764, 961, 361, 486, 697, 120, 462, 91, 285, 111, 113, 232, 439, 470, 803, 926, 138, 832, 141, 560, 677, 861, 329, 140, 1, 814, 647, 774, 553, 172, 89, 613, 629, 128, 991};
    vector<int> intellect = {977, 191, 324, 87, 542, 305, 261, 691, 848, 429, 641, 566, 977, 230, 772, 189, 969, 419, 620, 390, 220, 296, 748, 526, 198, 857, 35, 657, 925, 653, 381, 868, 685, 888, 960, 141, 277, 438, 928, 1, 184, 334, 602, 836, 596, 468, 475, 396, 46, 773};
    vector<int> points = {21, 24, 6, 15, 6, 29, 26, 20, 30, 14, 28, 26, 1, 10, 22, 9, 24, 6, 27, 25, 28, 13, 16, 24, 18, 7, 2, 6, 27, 2, 29, 19, 24, 9, 1, 19, 1, 14, 29, 27, 12, 20, 18, 21, 21, 26, 30, 14, 11, 19};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> strength = {794, 909, 828, 290, 1000, 643, 855, 227, 549, 976, 99, 68, 1, 1, 618, 341, 815, 683, 499, 24, 468, 1, 889, 245, 606, 421, 388, 381, 654, 955, 148, 313, 556, 742, 668, 595, 730, 495, 956, 779, 304, 590, 789, 515, 376, 398, 416, 874, 106, 142};
    vector<int> intellect = {697, 717, 498, 773, 479, 996, 455, 995, 884, 671, 968, 139, 1, 1, 891, 706, 565, 876, 52, 261, 771, 1, 970, 360, 811, 883, 632, 586, 595, 803, 372, 863, 686, 764, 954, 708, 483, 572, 145, 102, 926, 271, 564, 506, 285, 395, 97, 877, 796, 140};
    vector<int> points = {4, 21, 3, 24, 17, 8, 3, 26, 25, 18, 5, 2, 23, 28, 18, 5, 11, 11, 5, 15, 20, 16, 4, 1, 29, 3, 25, 23, 28, 7, 28, 11, 7, 29, 7, 16, 29, 7, 5, 2, 19, 30, 1, 15, 7, 30, 13, 7, 18, 29};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> strength = {278, 683, 585, 1000, 713, 455, 459, 965, 208, 342, 427, 1, 805, 609, 938, 92, 426, 889, 985, 503, 966, 816, 432, 945, 628, 886, 416, 20, 780, 252, 139, 414, 287, 356, 962, 539, 374, 1, 37, 547, 953, 483, 870, 806, 956, 389, 414, 86, 189, 916};
    vector<int> intellect = {373, 772, 448, 616, 708, 972, 926, 556, 356, 50, 787, 1, 986, 923, 13, 149, 91, 796, 648, 101, 540, 410, 586, 536, 985, 450, 742, 828, 344, 97, 307, 782, 278, 436, 381, 114, 672, 1, 601, 165, 810, 90, 941, 613, 626, 647, 797, 182, 717, 500};
    vector<int> points = {3, 6, 29, 23, 12, 11, 8, 16, 27, 5, 22, 12, 24, 1, 8, 1, 11, 29, 26, 12, 2, 4, 20, 5, 16, 29, 7, 23, 2, 19, 12, 12, 13, 19, 15, 17, 2, 24, 17, 14, 14, 3, 17, 3, 21, 19, 7, 20, 29, 13};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> strength = {469, 29, 742, 82, 404, 169, 168, 926, 629, 342, 28, 987, 617, 164, 844, 18, 537, 275, 959, 922, 44, 829, 944, 86, 686, 1, 151, 399, 686, 1, 44, 724, 118, 967, 66, 88, 622, 159, 497, 684, 416, 726, 250, 359, 476, 518, 502, 948, 244, 640};
    vector<int> intellect = {630, 662, 448, 383, 750, 546, 271, 203, 256, 814, 904, 366, 219, 880, 808, 181, 459, 836, 900, 341, 494, 95, 497, 404, 712, 1, 867, 501, 694, 1, 104, 286, 85, 105, 373, 716, 843, 149, 694, 461, 715, 201, 818, 380, 725, 283, 236, 7, 339, 95};
    vector<int> points = {14, 1, 18, 30, 1, 18, 19, 3, 7, 7, 15, 28, 5, 26, 28, 28, 11, 29, 18, 20, 17, 19, 18, 23, 17, 4, 20, 3, 14, 2, 4, 24, 20, 25, 1, 6, 6, 7, 14, 5, 25, 18, 9, 30, 17, 2, 26, 19, 25, 11};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> strength = {254, 972, 185, 941, 499, 126, 579, 414, 479, 685, 459, 827, 545, 289, 636, 214, 563, 116, 93, 41, 703, 902, 15, 67, 765, 112, 188, 373, 349, 660, 325, 226, 882, 1, 394, 9, 708, 651, 484, 645, 492, 225, 902, 597, 11, 892, 727, 131, 1, 909};
    vector<int> intellect = {666, 28, 492, 891, 224, 222, 755, 99, 213, 715, 128, 893, 756, 385, 669, 509, 355, 411, 985, 425, 294, 456, 8, 69, 588, 603, 943, 839, 832, 610, 907, 739, 240, 1, 250, 935, 497, 9, 728, 159, 935, 987, 754, 729, 481, 492, 270, 722, 1, 163};
    vector<int> points = {18, 18, 20, 7, 1, 6, 12, 27, 9, 7, 21, 7, 13, 12, 10, 16, 13, 4, 2, 2, 7, 10, 14, 26, 30, 13, 8, 24, 1, 20, 22, 30, 8, 26, 25, 8, 3, 30, 14, 6, 3, 4, 16, 12, 24, 3, 5, 18, 2, 11};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> strength = {216, 712, 570, 93, 595, 260, 892, 758, 921, 90, 473, 664, 178, 465, 627, 493, 376, 163, 889, 637, 107, 641, 46, 297, 485, 60, 297, 43, 95, 380, 517, 979, 233, 532, 954, 538, 397, 435, 953, 809, 147, 331, 427, 706, 45, 717, 345, 989, 835, 834};
    vector<int> intellect = {600, 222, 808, 883, 325, 34, 23, 499, 298, 860, 870, 223, 821, 848, 664, 955, 426, 772, 355, 462, 286, 973, 307, 547, 694, 839, 783, 841, 544, 591, 578, 204, 576, 387, 810, 744, 787, 408, 627, 532, 679, 962, 388, 540, 503, 39, 440, 892, 442, 787};
    vector<int> points = {1, 1, 16, 20, 25, 7, 26, 9, 20, 15, 29, 9, 29, 4, 22, 11, 4, 28, 24, 30, 21, 14, 17, 21, 5, 7, 10, 7, 17, 6, 14, 22, 23, 12, 26, 24, 16, 5, 22, 22, 13, 18, 5, 6, 8, 22, 6, 21, 16, 29};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {364, 132, 919, 834, 461, 647, 146, 111, 957, 255, 444, 91, 149, 837, 310, 933, 407, 211, 819, 719, 34, 545, 570, 225, 297, 833, 92, 110, 588, 915, 707, 613, 219, 880, 88, 584, 289, 321, 355, 880, 310, 1, 942, 158, 467, 765, 921, 507, 785, 393};
    vector<int> intellect = {301, 811, 317, 619, 136, 861, 371, 69, 702, 127, 915, 198, 131, 461, 569, 2, 805, 966, 50, 39, 673, 166, 740, 457, 659, 26, 843, 390, 378, 663, 420, 522, 145, 522, 476, 947, 926, 391, 673, 501, 509, 1, 503, 622, 829, 936, 3, 914, 65, 13};
    vector<int> points = {6, 26, 7, 4, 1, 6, 14, 7, 10, 4, 6, 20, 5, 11, 11, 3, 30, 8, 23, 20, 10, 24, 29, 19, 7, 27, 22, 14, 15, 6, 14, 3, 9, 19, 30, 8, 16, 8, 27, 4, 16, 28, 14, 27, 29, 3, 3, 12, 16, 29};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> strength = {102, 775, 457, 710, 126, 901, 404, 20, 793, 540, 443, 781, 464, 398, 8, 1, 86, 787, 618, 297, 49, 262, 444, 374, 829, 943, 789, 738, 1, 918, 640, 597, 414, 965, 541, 816, 750, 253, 836, 549, 82, 671, 464, 332, 42, 83, 817, 414, 848, 572};
    vector<int> intellect = {770, 775, 199, 865, 906, 729, 956, 681, 727, 982, 980, 266, 14, 362, 157, 1, 421, 35, 948, 835, 24, 982, 246, 901, 732, 711, 480, 556, 998, 203, 630, 885, 604, 696, 246, 861, 298, 322, 317, 665, 581, 663, 56, 862, 650, 620, 611, 881, 807, 501};
    vector<int> points = {20, 28, 29, 11, 28, 9, 20, 24, 8, 3, 28, 14, 16, 16, 5, 13, 12, 22, 10, 24, 2, 12, 7, 21, 2, 19, 4, 15, 2, 29, 20, 7, 12, 29, 5, 30, 22, 1, 30, 29, 18, 4, 29, 11, 5, 8, 3, 9, 3, 18};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {536, 85, 1, 617, 910, 73, 273, 108, 972, 803, 253, 294, 292, 333, 228, 184, 605, 375, 916, 178, 378, 163, 433, 95, 506, 848, 146, 798, 200, 993, 1, 65, 827, 735, 941, 377, 566, 881, 978, 782, 569, 706, 615, 763, 829, 115, 246, 327, 971, 1};
    vector<int> intellect = {12, 424, 1, 359, 416, 318, 258, 312, 588, 89, 978, 717, 772, 510, 206, 882, 319, 850, 338, 852, 247, 746, 59, 514, 340, 220, 447, 142, 10, 691, 1, 655, 853, 621, 960, 946, 827, 527, 201, 507, 193, 695, 599, 768, 531, 888, 465, 949, 456, 1};
    vector<int> points = {28, 24, 13, 24, 16, 9, 18, 18, 14, 29, 28, 9, 8, 13, 12, 21, 15, 3, 9, 19, 1, 16, 25, 29, 22, 30, 1, 6, 17, 5, 14, 8, 6, 14, 19, 14, 11, 10, 15, 8, 15, 1, 10, 5, 25, 11, 24, 5, 21, 15};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {559, 1, 652, 909, 244, 475, 1, 73, 710, 1, 779, 105, 717, 931, 115, 221, 779, 901, 963, 542, 416, 94, 898, 726, 558, 989, 571, 453, 1, 524, 725, 668, 1, 492, 211, 765, 525, 941, 629, 288, 439, 898, 571, 798, 231, 298, 184, 825, 149, 319};
    vector<int> intellect = {915, 1, 555, 853, 283, 381, 1, 34, 596, 1, 161, 717, 757, 347, 279, 892, 90, 358, 983, 762, 753, 375, 799, 373, 981, 740, 412, 947, 1, 977, 930, 199, 1, 812, 743, 216, 443, 113, 464, 1, 219, 606, 338, 193, 866, 655, 562, 699, 357, 906};
    vector<int> points = {1, 16, 1, 1, 26, 11, 5, 5, 17, 20, 12, 18, 29, 8, 19, 24, 9, 13, 17, 26, 5, 10, 15, 19, 22, 21, 4, 12, 16, 23, 2, 8, 10, 5, 24, 4, 5, 25, 4, 7, 11, 17, 26, 28, 23, 9, 14, 21, 5, 19};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> strength = {188, 336, 755, 938, 48, 839, 17, 332, 70, 860, 873, 902, 189, 658, 860, 672, 607, 241, 674, 388, 1, 3, 805, 539, 201, 48, 557, 294, 122, 289, 756, 526, 795, 776, 467, 444, 340, 324, 698, 688, 950, 849, 659, 356, 449, 917, 158, 705, 696, 619};
    vector<int> intellect = {156, 486, 802, 532, 982, 589, 316, 944, 453, 687, 346, 814, 13, 719, 73, 169, 853, 532, 660, 22, 1, 121, 970, 475, 580, 45, 271, 197, 973, 740, 185, 976, 386, 162, 236, 57, 710, 38, 492, 998, 927, 36, 513, 772, 746, 856, 197, 319, 155, 801};
    vector<int> points = {29, 1, 16, 2, 16, 2, 23, 29, 7, 12, 14, 30, 20, 16, 26, 2, 17, 19, 3, 23, 3, 10, 4, 27, 23, 30, 22, 24, 17, 16, 9, 10, 15, 5, 30, 5, 18, 19, 3, 11, 4, 22, 9, 10, 15, 19, 9, 6, 14, 20};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {933, 944, 907, 731, 976, 258, 451, 135, 401, 815, 18, 895, 537, 418, 639, 604, 488, 274, 92, 463, 536, 185, 995, 930, 929, 16, 59, 189, 981, 488, 799, 410, 468, 737, 86, 1, 656, 949, 179, 1, 466, 990, 422, 385, 194, 123, 272, 101, 290, 21};
    vector<int> intellect = {359, 724, 832, 91, 275, 466, 622, 275, 862, 51, 786, 13, 462, 110, 945, 256, 478, 32, 559, 184, 398, 445, 874, 994, 960, 467, 399, 74, 482, 342, 690, 951, 426, 68, 922, 1, 20, 657, 274, 1, 830, 299, 40, 216, 843, 926, 872, 463, 418, 304};
    vector<int> points = {17, 28, 20, 8, 17, 4, 19, 28, 24, 9, 13, 3, 13, 23, 17, 18, 30, 3, 23, 16, 26, 13, 5, 28, 6, 23, 12, 27, 1, 22, 14, 9, 1, 25, 9, 5, 22, 22, 30, 25, 11, 14, 18, 23, 13, 10, 25, 14, 12, 26};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> strength = {393, 999, 2, 719, 524, 616, 620, 545, 338, 218, 33, 147, 234, 1, 985, 663, 438, 971, 317, 510, 935, 635, 1, 945, 423, 40, 433, 536, 13, 779, 41, 350, 796, 676, 266, 186, 395, 652, 972, 1, 141, 52, 18, 579, 322, 510, 954, 1, 587, 274};
    vector<int> intellect = {33, 259, 688, 669, 798, 257, 344, 211, 13, 69, 817, 854, 963, 1, 287, 364, 156, 664, 95, 665, 807, 416, 1, 19, 7, 811, 986, 503, 441, 782, 711, 952, 172, 726, 787, 982, 507, 288, 553, 1, 92, 305, 856, 399, 12, 823, 60, 1, 808, 965};
    vector<int> points = {9, 24, 7, 17, 24, 19, 9, 15, 25, 6, 22, 14, 11, 20, 26, 26, 26, 11, 18, 13, 12, 23, 11, 17, 17, 5, 15, 24, 12, 25, 19, 11, 22, 8, 4, 16, 27, 13, 16, 8, 11, 3, 24, 17, 21, 9, 29, 24, 17, 6};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> strength = {896, 532, 809, 305, 2, 345, 341, 373, 956, 19, 952, 382, 445, 155, 387, 541, 567, 714, 159, 84, 154, 185, 254, 435, 871, 681, 383, 843, 313, 730, 85, 638, 327, 446, 351, 860, 650, 550, 496, 126, 700, 235, 408, 190, 974, 1, 487, 340, 72, 431};
    vector<int> intellect = {923, 571, 260, 257, 144, 829, 958, 32, 546, 688, 923, 911, 13, 594, 480, 283, 583, 232, 505, 553, 475, 542, 677, 783, 256, 361, 111, 704, 171, 207, 916, 970, 159, 453, 139, 562, 571, 807, 167, 805, 643, 563, 590, 545, 980, 1, 997, 929, 964, 267};
    vector<int> points = {17, 21, 11, 25, 20, 24, 28, 17, 15, 27, 25, 9, 25, 20, 26, 10, 22, 25, 29, 29, 23, 16, 24, 22, 5, 9, 8, 4, 16, 12, 8, 25, 2, 22, 13, 27, 14, 5, 6, 5, 19, 25, 18, 22, 6, 6, 7, 16, 5, 26};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> strength = {904, 889, 868, 321, 531, 879, 298, 811, 505, 638, 996, 895, 251, 807, 83, 382, 419, 44, 799, 224, 976, 813, 370, 80, 468, 1, 796, 941, 417, 584, 487, 465, 182, 348, 819, 605, 294, 1, 2, 866, 241, 638, 709, 473, 407, 62, 332, 466, 1, 905};
    vector<int> intellect = {833, 283, 303, 289, 38, 429, 674, 820, 530, 858, 274, 683, 986, 912, 693, 160, 714, 565, 695, 35, 441, 132, 469, 974, 482, 1, 500, 641, 763, 592, 354, 934, 761, 174, 155, 477, 448, 1, 764, 89, 78, 213, 259, 503, 824, 488, 411, 773, 1, 960};
    vector<int> points = {15, 15, 22, 23, 13, 6, 29, 17, 9, 13, 6, 24, 5, 8, 29, 24, 12, 10, 5, 10, 5, 29, 23, 10, 30, 14, 4, 13, 3, 16, 3, 13, 25, 20, 23, 21, 30, 3, 5, 5, 12, 26, 26, 15, 4, 12, 21, 25, 17, 28};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> strength = {921, 728, 333, 1, 668, 146, 918, 701, 151, 946, 263, 17, 514, 248, 849, 971, 712, 935, 93, 998, 687, 742, 445, 354, 922, 128, 640, 145, 314, 828, 873, 419, 184, 956, 423, 337, 299, 864, 381, 660, 207, 475, 578, 686, 859, 372, 689, 272, 481, 670};
    vector<int> intellect = {939, 127, 516, 1, 912, 771, 871, 23, 229, 741, 50, 736, 409, 547, 562, 690, 456, 418, 715, 388, 415, 782, 260, 769, 780, 212, 936, 160, 507, 906, 653, 980, 961, 397, 199, 996, 627, 265, 29, 28, 591, 155, 362, 360, 17, 953, 276, 63, 94, 960};
    vector<int> points = {4, 25, 10, 26, 11, 27, 26, 3, 1, 25, 8, 5, 5, 6, 29, 10, 9, 2, 24, 15, 25, 24, 10, 29, 22, 23, 19, 17, 29, 25, 20, 24, 3, 11, 1, 7, 1, 6, 28, 7, 18, 12, 8, 14, 3, 5, 7, 26, 9, 24};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> strength = {786, 697, 57, 568, 670, 68, 805, 988, 502, 569, 197, 130, 667, 866, 59, 805, 798, 430, 1, 596, 640, 641, 668, 889, 219, 337, 225, 733, 326, 993, 831, 473, 924, 505, 280, 238, 236, 291, 828, 949, 849, 614, 453, 734, 267, 757, 252, 403, 778, 273};
    vector<int> intellect = {576, 629, 284, 980, 346, 222, 494, 194, 592, 393, 99, 872, 791, 322, 880, 691, 764, 230, 1, 71, 996, 161, 706, 266, 507, 162, 834, 1000, 175, 757, 725, 719, 837, 663, 25, 531, 377, 37, 58, 762, 602, 419, 613, 520, 251, 216, 887, 91, 482, 872};
    vector<int> points = {19, 30, 28, 19, 19, 12, 13, 9, 8, 11, 3, 8, 30, 10, 13, 19, 1, 18, 7, 30, 15, 6, 5, 9, 19, 11, 30, 16, 4, 16, 25, 5, 23, 22, 26, 22, 17, 21, 18, 9, 23, 20, 16, 10, 19, 25, 2, 27, 25, 18};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {305, 237, 553, 1, 238, 85, 736, 481, 779, 228, 776, 415, 466, 706, 826, 934, 596, 881, 999, 766, 929, 370, 1, 793, 251, 534, 991, 606, 698, 878, 451, 608, 856, 915, 903, 336, 853, 957, 450, 1, 763, 751, 1, 51, 323, 32, 582, 496, 173, 394};
    vector<int> intellect = {198, 271, 276, 1, 998, 386, 757, 605, 748, 536, 763, 700, 6, 239, 3, 954, 527, 283, 626, 444, 358, 762, 468, 703, 168, 696, 72, 360, 104, 211, 625, 620, 133, 943, 676, 208, 355, 362, 616, 1, 183, 873, 1, 660, 823, 904, 882, 198, 983, 548};
    vector<int> points = {17, 7, 4, 4, 13, 2, 5, 5, 24, 17, 5, 15, 27, 11, 9, 23, 9, 8, 28, 8, 21, 30, 5, 16, 6, 1, 17, 13, 12, 25, 1, 4, 23, 27, 17, 25, 2, 12, 26, 21, 4, 28, 6, 25, 3, 26, 13, 20, 27, 6};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> strength = {744, 775, 810, 917, 1, 848, 829, 660, 928, 156, 101, 894, 369, 949, 19, 294, 314, 611, 985, 1, 450, 527, 344, 663, 539, 411, 872, 810, 278, 1, 715, 903, 325, 60, 177, 949, 695, 292, 588, 775, 399, 687, 396, 812, 389, 574, 499, 965, 569, 419};
    vector<int> intellect = {363, 372, 820, 275, 1, 939, 955, 481, 757, 984, 954, 364, 232, 936, 429, 705, 702, 280, 433, 1, 124, 501, 795, 627, 470, 565, 601, 26, 979, 1, 743, 174, 630, 589, 562, 917, 628, 360, 864, 724, 348, 786, 324, 167, 809, 54, 278, 868, 393, 106};
    vector<int> points = {8, 27, 11, 5, 17, 25, 16, 25, 18, 5, 25, 29, 4, 6, 28, 23, 3, 13, 14, 1, 24, 11, 6, 26, 13, 13, 10, 21, 22, 3, 24, 16, 10, 30, 7, 28, 5, 6, 4, 6, 16, 21, 1, 29, 20, 14, 7, 29, 17, 8};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {570, 13, 54, 454, 225, 628, 492, 8, 50, 706, 1, 299, 926, 305, 295, 135, 732, 130, 414, 405, 536, 238, 954, 711, 57, 526, 61, 229, 1, 362, 526, 40, 312, 221, 583, 690, 880, 6, 74, 587, 561, 847, 703, 332, 277, 729, 974, 279, 645, 588};
    vector<int> intellect = {656, 975, 321, 651, 704, 877, 366, 647, 228, 221, 1, 241, 1000, 777, 697, 255, 778, 768, 234, 663, 781, 271, 116, 996, 872, 698, 163, 436, 31, 279, 21, 381, 144, 538, 479, 298, 102, 473, 342, 370, 360, 33, 678, 200, 643, 669, 69, 138, 586, 909};
    vector<int> points = {17, 13, 15, 21, 19, 12, 30, 17, 3, 30, 22, 27, 28, 15, 14, 3, 23, 10, 25, 5, 13, 25, 11, 26, 12, 11, 12, 22, 26, 8, 13, 6, 8, 23, 6, 11, 11, 28, 18, 4, 6, 8, 30, 4, 21, 30, 27, 26, 18, 26};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> strength = {218, 931, 1, 947, 451, 740, 19, 165, 474, 192, 227, 844, 736, 218, 915, 153, 126, 210, 244, 461, 373, 426, 342, 1, 606, 778, 170, 301, 218, 3, 155, 219, 195, 151, 903, 796, 440, 518, 986, 625, 948, 209, 115, 307, 518, 465, 547, 938, 233, 296};
    vector<int> intellect = {320, 78, 1, 436, 100, 79, 253, 39, 798, 780, 650, 788, 626, 336, 321, 583, 870, 906, 878, 494, 903, 429, 654, 1, 593, 504, 558, 698, 323, 399, 412, 418, 392, 70, 35, 65, 574, 500, 355, 36, 753, 316, 486, 241, 712, 669, 75, 421, 766, 707};
    vector<int> points = {23, 3, 26, 30, 5, 30, 26, 26, 20, 19, 13, 4, 30, 9, 21, 3, 23, 28, 16, 30, 16, 6, 11, 7, 8, 28, 15, 3, 29, 17, 11, 28, 25, 18, 9, 20, 14, 20, 17, 19, 7, 16, 12, 1, 11, 13, 9, 26, 13, 21};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> strength = {252, 353, 709, 270, 95, 375, 731, 685, 844, 918, 580, 1, 1, 383, 897, 807, 266, 147, 779, 324, 661, 802, 803, 790, 367, 879, 962, 61, 448, 705, 993, 459, 610, 346, 402, 400, 525, 555, 396, 29, 235, 476, 378, 939, 173, 1, 179, 412, 563, 662};
    vector<int> intellect = {918, 20, 89, 58, 764, 739, 350, 81, 170, 945, 193, 1, 1, 912, 256, 335, 684, 775, 808, 721, 369, 771, 70, 510, 963, 952, 319, 611, 830, 900, 207, 628, 879, 667, 940, 720, 579, 794, 219, 931, 368, 24, 489, 282, 201, 1, 418, 874, 198, 879};
    vector<int> points = {23, 30, 4, 28, 14, 19, 3, 3, 16, 29, 20, 12, 8, 9, 15, 8, 13, 1, 17, 16, 13, 14, 10, 21, 19, 30, 14, 28, 14, 16, 8, 18, 2, 22, 26, 10, 20, 28, 23, 1, 20, 18, 16, 11, 6, 6, 11, 21, 4, 25};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> strength = {250, 904, 982, 824, 359, 217, 688, 455, 387, 751, 554, 116, 727, 211, 21, 800, 540, 326, 104, 259, 923, 90, 47, 104, 701, 943, 857, 894, 827, 478, 32, 471, 943, 537, 652, 820, 936, 232, 783, 165, 880, 813, 801, 765, 521, 295, 956, 611, 443, 561};
    vector<int> intellect = {76, 440, 649, 858, 484, 824, 737, 536, 719, 857, 706, 99, 465, 439, 185, 747, 960, 879, 755, 858, 705, 518, 806, 248, 945, 297, 710, 176, 148, 613, 1000, 223, 417, 655, 386, 611, 571, 724, 695, 304, 952, 409, 895, 636, 812, 299, 956, 875, 189, 999};
    vector<int> points = {6, 5, 3, 23, 25, 9, 18, 5, 12, 20, 26, 25, 8, 6, 16, 18, 18, 9, 28, 18, 2, 24, 25, 5, 18, 4, 24, 17, 27, 15, 27, 16, 20, 5, 15, 10, 7, 21, 19, 1, 14, 7, 27, 28, 15, 16, 17, 3, 9, 13};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> strength = {233, 153, 398, 612, 216, 696, 869, 808, 419, 33, 696, 286, 842, 468, 1, 735, 607, 452, 390, 349, 586, 904, 995, 992, 893, 82, 928, 993, 585, 675, 431, 850, 150, 596, 143, 643, 214, 613, 202, 45, 793, 753, 106, 578, 697, 15, 807, 242, 87, 313};
    vector<int> intellect = {948, 11, 616, 538, 141, 233, 138, 849, 91, 873, 488, 785, 980, 656, 1, 295, 699, 876, 66, 905, 263, 642, 289, 194, 516, 590, 288, 208, 616, 133, 900, 544, 815, 101, 225, 455, 30, 291, 805, 866, 234, 411, 476, 855, 560, 259, 173, 361, 782, 735};
    vector<int> points = {18, 3, 25, 29, 13, 14, 28, 15, 8, 19, 29, 8, 16, 4, 1, 17, 24, 25, 2, 5, 14, 18, 12, 21, 16, 27, 7, 24, 10, 8, 30, 3, 12, 5, 30, 6, 4, 28, 9, 26, 15, 5, 15, 11, 22, 17, 9, 25, 12, 16};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {1, 846, 803, 800, 819, 800, 302, 197, 37, 584, 610, 120, 824, 703, 24, 483, 477, 159, 209, 288, 21, 936, 453, 718, 377, 635, 69, 774, 618, 338, 491, 835, 137, 701, 136, 749, 904, 1, 1, 468, 166, 44, 737, 842, 710, 170, 96, 712, 719, 440};
    vector<int> intellect = {1, 366, 328, 92, 4, 443, 227, 41, 165, 630, 821, 600, 131, 978, 242, 208, 34, 501, 127, 38, 752, 581, 561, 102, 618, 285, 862, 110, 133, 779, 986, 802, 213, 805, 546, 504, 368, 1, 1, 836, 715, 260, 459, 124, 387, 765, 654, 180, 852, 372};
    vector<int> points = {25, 19, 13, 24, 15, 6, 25, 27, 30, 8, 1, 29, 9, 25, 12, 8, 12, 2, 10, 8, 15, 23, 18, 17, 27, 18, 14, 17, 16, 22, 29, 4, 4, 11, 16, 27, 18, 24, 23, 20, 18, 18, 9, 8, 12, 16, 25, 4, 25, 5};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> strength = {673, 311, 412, 223, 565, 288, 1, 201, 126, 107, 466, 535, 61, 378, 838, 960, 290, 646, 105, 887, 279, 560, 404, 884, 901, 969, 641, 457, 764, 410, 959, 998, 309, 579, 696, 420, 371, 358, 781, 21, 340, 677, 904, 576, 964, 70, 696, 137, 202, 853};
    vector<int> intellect = {553, 786, 484, 456, 962, 331, 1, 308, 308, 826, 21, 551, 502, 159, 408, 916, 805, 493, 421, 426, 308, 57, 210, 332, 954, 785, 476, 137, 939, 865, 184, 300, 501, 151, 810, 956, 323, 640, 752, 852, 556, 720, 111, 371, 220, 884, 636, 701, 529, 138};
    vector<int> points = {21, 22, 16, 18, 25, 18, 25, 10, 24, 4, 30, 12, 19, 2, 14, 30, 3, 4, 5, 11, 22, 20, 17, 3, 16, 17, 13, 8, 18, 29, 9, 25, 27, 9, 14, 13, 8, 23, 13, 5, 21, 6, 7, 26, 18, 26, 18, 5, 18, 27};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {976, 422, 23, 602, 536, 154, 341, 629, 472, 381, 269, 472, 515, 345, 287, 757, 425, 806, 37, 594, 323, 909, 416, 611, 250, 743, 672, 576, 1, 206, 574, 265, 604, 634, 596, 488, 184, 829, 459, 1, 757, 919, 547, 260, 709, 225, 846, 203, 455, 124};
    vector<int> intellect = {435, 86, 222, 551, 690, 541, 426, 199, 902, 22, 753, 343, 68, 981, 857, 213, 464, 777, 838, 646, 288, 150, 493, 406, 442, 704, 795, 827, 1, 854, 605, 521, 682, 836, 849, 165, 427, 119, 299, 1, 937, 420, 753, 462, 777, 415, 510, 52, 256, 919};
    vector<int> points = {15, 15, 4, 27, 5, 18, 12, 20, 11, 6, 25, 23, 5, 28, 18, 12, 25, 12, 19, 14, 5, 21, 9, 23, 1, 2, 22, 14, 26, 20, 27, 29, 21, 24, 27, 8, 6, 15, 16, 21, 29, 10, 30, 30, 11, 2, 28, 9, 18, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> intellect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> strength = {38, 29, 16, 20, 14, 40, 36, 61, 31, 99, 44, 144, 44, 67, 225, 88, 75, 9, 322, 110, 16, 309, 155, 308, 360, 332, 267, 350, 558, 123, 535, 584, 114, 603, 550, 154, 209, 607, 702, 537, 507, 609, 224, 807, 897, 754, 954, 738, 379, 1};
    vector<int> intellect = {8, 34, 32, 14, 29, 6, 72, 7, 86, 136, 195, 202, 37, 247, 176, 24, 389, 361, 580, 26, 805, 89, 581, 857, 647, 145, 492, 873, 654, 412, 587, 691, 583, 301, 63, 322, 306, 452, 660, 676, 370, 152, 754, 782, 503, 928, 320, 13, 638, 1};
    vector<int> points = {14, 14, 17, 38, 24, 10, 3, 37, 32, 8, 30, 32, 35, 17, 9, 9, 33, 12, 15, 16, 17, 32, 15, 17, 33, 28, 37, 9, 25, 17, 34, 10, 22, 11, 36, 15, 3, 16, 34, 24, 35, 21, 7, 36, 6, 9, 9, 18, 36, 99};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> strength = {12, 2, 234, 5, 666, 777, 4, 555, 34, 65, 754, 342, 652, 34, 34, 965, 6, 54, 432, 432, 324, 324, 932, 432, 432, 1, 2, 3, 4, 5, 6, 7, 8, 9, 999, 432, 432, 12, 234, 56, 87, 344, 23, 12, 4, 36, 87, 2, 5, 239};
    vector<int> intellect = {87, 4, 6, 3, 5, 3, 7, 4, 65, 6, 3, 954, 632, 6, 7, 54, 632, 956, 4, 57, 2, 5, 46, 12, 7, 89, 480, 237, 4, 973, 294, 254, 6, 247, 982, 84, 83, 747, 835, 457, 354, 639, 840, 38, 47, 84, 866, 357, 457, 932};
    vector<int> points = {1, 2, 9, 7, 27, 6, 7, 6, 5, 3, 2, 41, 8, 2, 1, 29, 1, 4, 3, 2, 4, 7, 3, 6, 5, 2, 113, 42, 7, 8, 4, 9, 3, 2, 4, 3, 1, 8, 12, 7, 16, 5, 27, 8, 8, 9, 3, 32, 6, 5};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> strength = {108, 38, 116, 55, 1000, 99, 40, 19, 1000, 42, 16, 58, 1000, 46, 89, 1000, 134, 1000, 122, 1000, 115, 1000, 31, 1000, 1000, 78, 1000, 128, 66, 1000, 1, 10, 3, 1000, 62, 1000, 1000, 1000, 1000, 1000, 1000, 70, 1000, 1000, 85, 29, 75, 45, 1000, 1000};
    vector<int> intellect = {1000, 1000, 1000, 1000, 36, 1000, 1000, 1000, 7, 1000, 1000, 1000, 52, 1000, 1000, 38, 1000, 118, 1000, 30, 1000, 65, 1000, 102, 122, 1000, 100, 1000, 1000, 79, 1, 1000, 1000, 73, 1000, 90, 46, 20, 16, 86, 133, 1000, 125, 35, 1000, 1000, 1000, 1000, 59, 111};
    vector<int> points = {9, 8, 4, 6, 2, 9, 2, 5, 9, 3, 3, 4, 7, 9, 2, 10, 1, 1, 3, 2, 7, 3, 7, 10, 6, 7, 4, 8, 6, 4, 6, 6, 7, 4, 8, 3, 6, 10, 4, 5, 6, 7, 6, 1, 10, 2, 4, 1, 2, 7};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> strength = {1, 5, 2, 1, 2, 2, 34, 5, 5, 6, 6, 5, 8, 8, 4, 45, 5, 2, 2, 2, 2, 1, 5, 4, 654, 564, 8, 49, 4, 5, 1, 231, 312, 5, 456, 4, 51, 2, 12, 5, 45, 54, 21, 2, 1, 54, 54, 2, 12, 1};
    vector<int> intellect = {1, 45, 45, 5, 12, 2, 5, 45, 5, 5, 55, 4, 2, 2, 5, 8, 89, 8, 4, 5, 2, 2, 2, 45, 45, 56, 4, 5, 12, 356, 45, 4, 89, 789, 65, 5, 124, 56, 9, 8, 8, 54, 5, 5, 2, 2, 2, 4, 5, 6};
    vector<int> points = {15, 2, 2, 2, 3, 5, 4, 5, 8, 95, 5, 5, 6, 9, 8, 8, 1, 2, 3, 6, 5, 58, 8, 5, 2, 1, 2, 5, 8, 8, 9, 9, 69, 14, 4, 5, 6, 6, 89, 8, 8, 8, 4, 5, 6, 6, 8, 8, 7, 8};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> strength = {1, 2, 100, 100, 100};
    vector<int> intellect = {1, 2, 3, 4, 12};
    vector<int> points = {1, 1, 5, 10, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 50};
    vector<int> intellect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 50};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> strength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> intellect = {51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> intellect = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> points = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> strength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> intellect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> points = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> strength = {1, 2, 3, 4, 1000};
    vector<int> intellect = {1, 10, 11, 12, 13};
    vector<int> points = {9, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> strength = {449, 903, 156, 659, 934, 424, 189, 157, 982, 634, 85, 481, 691, 854, 24, 116, 192, 409, 41, 554, 581, 920, 523, 842, 199, 211, 459, 326, 45, 824, 236, 255, 553, 385, 495, 38, 430, 517, 782, 262, 186, 331, 410, 361, 851, 478, 8, 101, 856, 475};
    vector<int> intellect = {776, 100, 579, 854, 271, 870, 358, 748, 461, 777, 731, 584, 140, 636, 563, 769, 674, 998, 454, 969, 1, 535, 825, 128, 533, 549, 409, 505, 414, 614, 368, 859, 343, 42, 41, 914, 792, 468, 889, 876, 45, 85, 173, 988, 976, 360, 834, 709, 79, 410};
    vector<int> points = {471, 42, 691, 846, 772, 431, 660, 538, 413, 7, 269, 618, 825, 56, 774, 476, 660, 291, 331, 628, 917, 916, 661, 163, 561, 822, 897, 780, 740, 630, 977, 730, 146, 392, 359, 779, 798, 53, 789, 375, 444, 947, 259, 616, 54, 129, 206, 519, 905, 12};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> strength = {245, 789, 517, 1, 14, 24, 171, 74, 254, 171, 242, 7, 8, 9, 4, 5, 54, 54, 25, 27, 27, 27, 24, 87, 87, 21, 67, 64, 57, 57};
    vector<int> intellect = {7, 8, 9, 14, 237, 324, 87, 27, 947, 234, 137, 647, 852, 456, 789, 123, 444, 777, 888, 999, 666, 111, 222, 333, 444, 555, 666, 777, 888, 4};
    vector<int> points = {1, 2, 3, 47, 58, 6, 5, 97, 100, 999, 644, 666, 373, 345, 588, 23, 2, 3, 4, 5, 6, 7, 8, 9, 25, 664, 337, 311, 123, 888};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> strength = {1, 11, 100, 100};
    vector<int> intellect = {1, 100, 11, 12};
    vector<int> points = {10, 2, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> intellect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> points = {1000, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> strength = {392, 305, 641, 345, 530, 175, 612, 746, 113, 789, 777, 829, 1, 232, 832, 901, 495, 12, 374, 671, 166, 679, 51, 27, 55, 2, 80, 173, 44, 245, 858, 189, 423, 5, 159, 495, 519, 130, 258, 460, 270, 969, 146, 403, 392, 874, 916, 534, 614, 1000};
    vector<int> intellect = {98, 512, 256, 557, 529, 678, 660, 1, 731, 819, 716, 485, 371, 241, 72, 835, 749, 734, 500, 346, 857, 252, 727, 305, 881, 941, 965, 327, 544, 538, 892, 447, 337, 330, 936, 2, 427, 409, 388, 258, 943, 11, 260, 561, 441, 57, 850, 766, 543, 1000};
    vector<int> points = {11, 2, 15, 25, 25, 1, 19, 21, 8, 22, 18, 20, 14, 25, 16, 12, 13, 16, 12, 26, 9, 18, 7, 20, 21, 17, 1, 13, 20, 20, 8, 1, 15, 1, 1, 15, 2, 4, 3, 6, 5, 2, 7, 21, 24, 1, 25, 14, 14, 12};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> strength = {1, 2, 1};
    vector<int> intellect = {2, 2, 4};
    vector<int> points = {1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> strength = {1, 4, 7, 7};
    vector<int> intellect = {1, 7, 4, 4};
    vector<int> points = {3, 2, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
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
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1};
    vector<int> intellect = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> strength = {1, 10, 1, 2, 16, 12, 13, 19, 12, 8, 32, 234, 63, 324, 234, 643, 237, 2, 43, 4, 23, 4, 235, 1000, 432, 324, 23, 6, 432, 129, 567, 23, 234, 643, 745, 475, 747, 856, 32, 634, 23, 6, 432, 129, 567, 23, 234, 643};
    vector<int> intellect = {1, 5, 1, 8, 3, 5, 3, 16, 19, 20, 12, 8, 32, 234, 63, 324, 234, 643, 237, 2, 43, 4, 23, 4, 235, 1000, 432, 324, 23, 6, 432, 129, 567, 23, 235, 747, 856, 32, 634, 23, 6, 432, 129, 567, 23, 324, 1, 29};
    vector<int> points = {237, 2, 43, 4, 23, 4, 235, 1000, 432, 324, 23, 6, 432, 129, 567, 23, 234, 643, 745, 475, 747, 856, 32, 634, 23, 6, 432, 129, 567, 23, 234, 643, 56, 32, 634, 23, 6, 432, 129, 567, 23, 234, 643, 532, 346, 432, 23, 4};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> strength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> intellect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 1, 1, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> points = {3, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> strength = {583, 423, 516, 433, 226, 580, 760, 530, 641, 209, 380, 783, 681, 461, 568, 794, 59, 603, 50, 415, 305, 874, 15, 768, 971, 990, 789, 439, 498, 214, 643, 320, 960, 727, 412, 745, 268, 440, 933, 683, 213, 839, 629, 134, 20, 7, 607, 630, 370, 575};
    vector<int> intellect = {451, 44, 27, 1, 13, 384, 683, 93, 35, 612, 609, 16, 16, 190, 587, 58, 368, 631, 718, 693, 84, 454, 442, 353, 154, 676, 699, 728, 478, 555, 121, 451, 716, 893, 273, 255, 866, 232, 805, 908, 232, 239, 50, 78, 641, 191, 844, 17, 4, 171};
    vector<int> points = {440, 340, 314, 365, 393, 592, 120, 38, 459, 870, 934, 264, 160, 873, 238, 646, 967, 665, 870, 10, 137, 819, 430, 890, 735, 687, 346, 166, 156, 191, 422, 856, 490, 816, 461, 457, 451, 412, 902, 6, 297, 49, 693, 650, 983, 55, 3, 400, 199, 625};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> strength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> intellect = {100, 100, 100, 800, 300, 500, 300, 160, 190, 200, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    vector<int> intellect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> strength = {3, 910, 890, 780, 800, 900, 600, 780, 799, 453, 455, 1, 44, 6, 78, 99, 7, 8, 60, 100, 200, 300, 300, 300, 300, 200, 300, 300, 200, 300, 400, 500, 300, 230, 500, 600, 781, 1000, 999, 123, 456, 564, 6, 45, 80, 120, 320, 2, 998, 1};
    vector<int> intellect = {100, 120, 200, 300, 400, 500, 600, 700, 800, 900, 100, 100, 100, 200, 200, 234, 12, 12, 13, 15, 16, 16, 1, 24, 60, 60, 60, 1000, 100, 1000, 600, 700, 800, 900, 780, 780, 780, 709, 900, 670, 678, 678, 678, 678, 500, 567, 700, 200, 10, 20};
    vector<int> points = {57, 20, 50, 20, 30, 40, 50, 20, 30, 20, 10, 11, 1, 23, 23, 25, 25, 26, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 4, 5, 6, 7, 89, 5, 4, 3, 2, 1, 1, 2, 3, 5, 6, 8, 9, 20, 20, 20};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    vector<int> intellect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> intellect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 6};
    vector<int> points = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    vector<int> intellect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    vector<int> points = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> strength = {1, 1000, 1000};
    vector<int> intellect = {1, 2, 22};
    vector<int> points = {20, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> strength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> intellect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> points = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> strength = {1, 10, 100};
    vector<int> intellect = {1, 100, 10};
    vector<int> points = {10, 1, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> strength = {1, 1, 1000, 3, 3, 1000, 5, 5, 1000, 7, 7, 1000, 9, 9, 1000, 11, 11, 1000, 13, 13, 1000, 15, 15, 1000, 17, 17, 1000, 19, 19, 1000, 21, 21, 1000, 23, 23, 1000, 25, 25, 1000, 27, 27, 1000, 29, 29, 1000, 31, 31, 1000, 33, 33};
    vector<int> intellect = {1, 1000, 1, 3, 1000, 3, 5, 1000, 5, 7, 1000, 7, 9, 1000, 9, 11, 1000, 11, 13, 1000, 13, 15, 1000, 15, 17, 1000, 17, 19, 1000, 19, 21, 1000, 21, 23, 1000, 23, 25, 1000, 25, 27, 1000, 27, 29, 1000, 29, 31, 1000, 31, 33, 1000};
    vector<int> points = {2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> strength = {1, 3, 100};
    vector<int> intellect = {1, 100, 4};
    vector<int> points = {3, 1, 100};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> strength = {1, 410, 849, 327, 288, 221, 180, 891, 250, 697, 530, 485, 971, 235, 814, 684, 126, 786, 847, 816, 1, 163, 393, 285, 251, 992, 564, 470, 253, 143, 125, 427, 700, 284, 200, 77, 893, 644, 809, 100, 19, 91, 382, 178, 308, 500, 307, 770, 968, 629};
    vector<int> intellect = {100, 313, 3, 529, 458, 808, 969, 438, 548, 126, 436, 558, 811, 101, 687, 38, 630, 407, 661, 807, 441, 196, 373, 688, 335, 925, 158, 5, 916, 23, 850, 723, 32, 796, 215, 427, 697, 859, 438, 853, 1, 986, 317, 119, 135, 36, 513, 581, 302, 50};
    vector<int> points = {352, 632, 757, 161, 150, 999, 962, 806, 226, 451, 763, 183, 657, 238, 91, 832, 157, 925, 949, 871, 530, 701, 724, 1000, 755, 178, 22, 320, 273, 190, 309, 434, 787, 5, 176, 81, 710, 773, 173, 698, 822, 770, 309, 338, 965, 37, 913, 250, 827, 718};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> strength = {1};
    vector<int> intellect = {2};
    vector<int> points = {1};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> strength = {3, 5, 9, 17, 33, 65, 129, 257, 513, 25, 49, 97, 193, 385, 769, 537, 73, 145, 289, 577, 153, 305, 609, 217, 433, 865, 729, 457, 913, 1, 3, 5, 9, 17, 33, 65, 129, 257, 513, 25, 49, 97, 193, 385, 769, 537, 73, 145, 289, 577};
    vector<int> intellect = {25, 513, 257, 129, 65, 33, 17, 9, 5, 3, 2, 289, 145, 73, 537, 769, 385, 193, 97, 49, 25, 513, 257, 129, 65, 33, 17, 9, 5, 3, 2, 289, 145, 73, 537, 769, 385, 193, 97, 49, 25, 513, 257, 129, 65, 33, 17, 9, 5, 3};
    vector<int> points = {25, 513, 257, 129, 65, 33, 17, 9, 5, 3, 2, 289, 145, 73, 537, 769, 385, 193, 97, 49, 25, 513, 257, 129, 65, 33, 17, 9, 5, 3, 2, 289, 145, 73, 537, 769, 385, 193, 97, 49, 25, 513, 257, 129, 65, 33, 17, 9, 5, 3};
    StrengthOrIntellect* pObj = new StrengthOrIntellect();
    clock_t start = clock();
    int result = pObj->numberOfMissions(strength, intellect, points);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20812309&rd=13515&pm=10174
********************************************************************************
#include <vector> 
#include <string.h> 
 
using namespace std; 
 
class StrengthOrIntellect { 
  public: 
     
    int dp[1001][1001]; 
    int str[50], dex[50], xp[50], n; 
     
    int dfs (int x, int y) { 
      if (dp[x][y] != -1) 
        return dp[x][y]; 
      int cur = 2-x-y, tom = 0; 
      for (int i = 0; i < n; i ++) 
        if (str[i] <= x || dex[i] <= y) { 
          cur += xp[i]; 
          tom ++; 
          } 
//      printf("%d %d : %d %d\n",x,y,cur,tom); 
      if (cur == 0) 
        return (dp[x][y] = tom); // No more missions possible... 
       
      dp[x][y] = tom; 
      for (int i = 0; i <= cur; i ++) 
        dp[x][y] >?= dfs( (x + i) <? 1000, (y + cur - i) <? 1000 ); 
      return dp[x][y]; 
      } 
     
    int numberOfMissions(vector <int> strength, vector <int> intellect, vector <int> points) { 
      n = strength.size(); 
      for (int i = 0; i < n; i ++) { 
        str[i] = strength[i]; 
        dex[i] = intellect[i]; 
        xp[i] = points[i]; 
        } 
      memset(dp, -1, sizeof(dp)); 
      return dfs(1, 1); 
      } 
  };

********************************************************************************
*******************************************************************************/