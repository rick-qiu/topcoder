/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12329
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

class SpellCards {
public:
    int maxDamage(vector<int> level, vector<int> damage);
};

int SpellCards::maxDamage(vector<int> level, vector<int> damage) {
    int ret;
    return ret;
}


int test0() {
    vector<int> level = {1, 1, 1};
    vector<int> damage = {10, 20, 30};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> level = {3, 3, 3};
    vector<int> damage = {10, 20, 30};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> level = {4, 4, 4};
    vector<int> damage = {10, 20, 30};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
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
    vector<int> level = {50, 1, 50, 1, 50};
    vector<int> damage = {10, 20, 30, 40, 50};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> level = {2, 1, 1};
    vector<int> damage = {40, 40, 10};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> level = {1, 2, 1, 1, 3, 2, 1};
    vector<int> damage = {10, 40, 10, 10, 90, 40, 10};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> level = {1, 2, 2, 3, 1, 4, 2};
    vector<int> damage = {113, 253, 523, 941, 250, 534, 454};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1918;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> level = {5, 8, 10, 7};
    vector<int> damage = {126, 131, 137, 153};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
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
    vector<int> level = {28, 43, 20, 42, 23, 42, 28, 33, 36, 45, 33, 35, 35, 24, 38, 37, 47, 30, 40, 45, 24, 20, 39, 30, 33, 41, 32, 46, 21, 38, 47, 39, 30, 35, 33, 38, 40, 23, 43, 39, 32, 40, 27, 36, 43, 18, 38, 33};
    vector<int> damage = {495, 509, 501, 513, 498, 507, 495, 496, 503, 509, 507, 497, 512, 503, 510, 512, 506, 500, 511, 511, 494, 496, 497, 493, 499, 512, 503, 493, 504, 505, 499, 496, 511, 513, 507, 512, 502, 503, 513, 493, 502, 497, 509, 512, 509, 508, 513, 504};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1019;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> level = {16, 20, 10, 35, 41, 28, 30, 43, 44, 41, 43};
    vector<int> damage = {12, 6, 11, 7, 12, 7, 11, 4, 9, 7, 6};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> level = {42, 34, 25, 32, 36, 36, 24, 37, 19, 16, 24, 40, 35, 33, 19, 33, 31, 22, 39, 40, 28, 24, 29, 14, 17, 42, 19, 34, 19, 26, 19, 20, 17, 25, 24, 20, 19};
    vector<int> damage = {281, 174, 296, 251, 284, 160, 279, 147, 207, 272, 173, 210, 283, 269, 149, 253, 240, 171, 283, 272, 260, 156, 225, 296, 284, 190, 186, 197, 211, 248, 240, 221, 262, 142, 135, 199, 260};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 580;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> level = {1, 3};
    vector<int> damage = {285, 291};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> level = {2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<int> damage = {117, 205, 176, 248, 198, 176, 132, 130, 108, 270, 167, 276, 114, 176, 254, 201, 144, 205, 195, 192, 255, 199, 170, 110, 278, 101, 142, 116, 131, 132, 102, 169, 129, 173, 148, 222, 135, 199};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5341;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> level = {19, 39, 25, 40, 17, 40, 39, 27};
    vector<int> damage = {240, 240, 248, 253, 240, 250, 238, 235};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
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
    vector<int> level = {18, 3, 13, 2, 18, 16, 15, 1, 28, 9};
    vector<int> damage = {289, 301, 266, 270, 275, 284, 269, 267, 265, 270};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 838;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> level = {1, 2, 4};
    vector<int> damage = {194, 202, 180};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> level = {2, 5, 5, 2, 1, 2, 2, 3, 4, 4, 5, 5, 1, 4, 2, 4, 1, 3, 3, 5, 5};
    vector<int> damage = {109, 445, 115, 528, 500, 87, 166, 769, 600, 610, 54, 374, 707, 65, 640, 374, 337, 561, 343, 602, 748};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5252;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> level = {2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1};
    vector<int> damage = {289, 196, 195, 400, 163, 445, 554, 320, 557, 307, 673, 505, 665, 584, 411, 612, 624, 311, 159, 167, 578, 537, 329, 584, 671, 543, 429, 511, 183, 400, 560, 376, 219, 571, 342, 417, 607, 597, 509, 574, 528, 179, 551, 157, 554, 373, 637, 534, 598, 401};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 17732;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {459, 686, 511, 682, 591, 699, 381, 437, 289, 501, 237, 210, 240, 332, 391, 358, 326, 301, 215, 199, 353, 501, 647, 221, 643, 197, 659, 430, 680, 261, 203, 251, 182, 446, 658, 413, 469, 488, 261, 531, 193, 211, 432, 224, 565, 382};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 18546;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> level = {13, 25, 8, 18, 7, 26, 11, 21, 3, 19, 21, 16, 15, 15, 20, 4, 27, 16, 12, 3, 11, 5, 16, 29, 20, 4, 26, 9, 11, 6, 15, 3, 22, 22, 29, 7, 22, 11};
    vector<int> damage = {434, 563, 466, 958, 69, 659, 828, 354, 428, 495, 238, 202, 345, 661, 812, 279, 261, 151, 499, 132, 629, 342, 435, 114, 143, 259, 695, 587, 95, 331, 282, 500, 779, 342, 652, 396, 195, 24};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3102;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> level = {2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2};
    vector<int> damage = {596, 486, 724, 823, 766, 498, 435, 211, 779, 702, 344, 674, 558, 312, 189, 572, 434, 482, 817, 403, 756, 401, 162, 352, 376, 431, 415, 539, 249, 284, 379, 441, 554, 434, 311, 444, 598, 309, 822, 363, 491, 826, 586, 144, 364, 832};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 19386;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> level = {8, 11, 4, 11, 3, 5, 2, 18, 16, 13, 13, 19, 5, 3, 5, 10, 21, 12, 19, 14, 13, 16, 20, 13, 16, 16, 13, 5, 12, 4, 20, 5, 16, 6, 6, 14, 14, 11, 4, 1, 2, 16, 1, 11, 18, 2};
    vector<int> damage = {53, 51, 51, 54, 54, 51, 54, 53, 54, 51, 51, 51, 52, 53, 51, 53, 53, 53, 52, 52, 53, 52, 51, 54, 53, 54, 53, 54, 52, 53, 51, 51, 51, 51, 54, 54, 51, 53, 54, 52, 54, 52, 54, 51, 52, 51};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 738;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> level = {4, 1, 3, 3, 4, 3, 1, 3, 3, 3, 5, 3, 5, 3, 1, 5, 3, 5, 4, 4, 3, 1, 1, 4, 4, 2, 1, 5, 4, 2};
    vector<int> damage = {310, 360, 412, 342, 377, 321, 375, 297, 453, 385, 355, 404, 389, 366, 447, 425, 433, 308, 331, 299, 361, 420, 394, 371, 326, 376, 355, 305, 290, 419};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5658;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> level = {2, 1, 2, 1, 2, 1};
    vector<int> damage = {501, 389, 390, 355, 412, 513};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1815;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> level = {5, 2, 2, 6, 7, 3, 2, 10, 3, 5, 5, 5, 1, 10, 10, 6};
    vector<int> damage = {68, 128, 55, 105, 82, 69, 109, 81, 67, 142, 136, 80, 54, 75, 85, 111};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 570;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> level = {4, 3, 10, 1, 4, 5, 3, 6, 2, 7};
    vector<int> damage = {876, 790, 898, 792, 811, 904, 902, 887, 861, 887};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3431;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> level = {4, 29, 22, 42, 23, 30, 14, 20, 41, 14, 22, 36};
    vector<int> damage = {602, 608, 646, 570, 712, 626, 719, 577, 741, 646, 590, 679};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 602;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> level = {1, 5, 9, 5, 9, 7, 8, 9, 8, 7, 1, 8};
    vector<int> damage = {72, 86, 96, 87, 71, 114, 94, 106, 50, 93, 116, 50};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> level = {1, 5, 5, 3, 1, 4, 4, 4, 4, 1, 2, 3, 5};
    vector<int> damage = {38, 37, 59, 39, 57, 52, 62, 37, 48, 64, 50, 58, 63};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> level = {2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1};
    vector<int> damage = {156, 156, 164, 148, 161, 162, 149, 156, 155, 160, 158, 158, 151, 161, 153, 165, 165, 156, 154, 157, 148, 153, 153, 163, 162, 157, 147, 154, 152, 152, 157, 148, 155, 159};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 4080;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> level = {1, 4};
    vector<int> damage = {930, 929};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> level = {1, 1, 2, 2, 5, 1, 5, 4, 2, 5, 1, 3, 3, 2, 2, 1, 1, 5, 4, 2, 2, 5, 2, 2, 1, 1, 2, 3, 5, 5, 1, 2, 1, 2, 3, 2, 3, 5};
    vector<int> damage = {345, 538, 670, 386, 339, 677, 672, 590, 803, 841, 688, 332, 854, 662, 697, 471, 482, 911, 537, 371, 445, 558, 369, 448, 607, 766, 488, 590, 716, 933, 806, 713, 456, 564, 401, 540, 935, 418};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 14041;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> level = {4, 2, 4, 3, 4, 4, 2, 1, 3, 4, 1, 4};
    vector<int> damage = {73, 69, 63, 91, 71, 52, 91, 67, 58, 78, 79, 85};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 455;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> level = {3, 4, 4, 2, 4, 3, 4, 5, 3, 3, 3, 5, 2, 3, 1, 4, 2, 4, 3, 5, 4, 3, 1, 1};
    vector<int> damage = {599, 475, 697, 235, 681, 298, 684, 402, 445, 458, 409, 387, 316, 117, 392, 264, 694, 518, 60, 364, 440, 608, 426, 355};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5229;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> level = {3, 3, 4, 3, 4, 1, 4, 1, 1, 1, 2, 3, 4, 4, 4, 1, 3, 2, 1, 2, 1, 2, 2, 4, 2, 2, 4, 4, 1};
    vector<int> damage = {930, 951, 927, 931, 936, 950, 939, 956, 956, 940, 941, 933, 930, 927, 938, 926, 942, 949, 954, 948, 929, 947, 951, 948, 949, 956, 935, 926, 932};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 16083;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> level = {1, 1, 1, 2, 2, 2, 1, 2, 1, 3, 3, 3, 3, 1, 3, 2, 2, 1, 3, 3, 2, 2, 1, 1, 2, 1, 1, 3, 2, 3, 1, 3, 3, 2, 3, 1, 3, 1, 3, 1, 1};
    vector<int> damage = {813, 821, 803, 805, 788, 793, 789, 809, 815, 823, 813, 792, 793, 821, 818, 814, 790, 816, 812, 813, 812, 811, 804, 795, 795, 806, 805, 812, 795, 801, 804, 814, 811, 804, 805, 787, 813, 808, 801, 804, 814};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 22544;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> level = {2, 4, 2, 4, 3, 5, 4, 5, 3, 3, 1, 2, 3, 1, 2, 4, 1, 1, 2, 4, 3, 4, 2, 5, 4, 1, 2, 2, 1, 2, 4, 1, 5, 5, 2, 1, 4, 2, 1, 5, 3, 3, 5, 3, 4, 4, 2, 2};
    vector<int> damage = {90, 86, 93, 91, 90, 90, 87, 90, 85, 84, 87, 92, 92, 92, 84, 93, 84, 91, 91, 88, 92, 87, 85, 85, 88, 85, 91, 90, 90, 92, 84, 91, 91, 84, 89, 93, 85, 84, 92, 85, 90, 90, 89, 91, 93, 89, 86, 92};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2335;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> level = {1, 1, 1};
    vector<int> damage = {408, 385, 442};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1235;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> level = {1, 2, 2, 1, 2, 2, 1, 3, 1, 1, 1, 2, 3, 3, 2, 3, 1, 2, 1, 2, 2, 3, 2, 2, 3, 3, 3, 2, 3, 2, 1, 2, 3, 1, 1, 1, 1, 2, 2, 3, 1, 3, 1, 2, 3, 2, 3, 2};
    vector<int> damage = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 775;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> level = {3, 4, 3, 4, 2, 1, 2, 2, 1, 3, 2, 3, 2, 1, 4, 2, 1, 3, 4, 4, 3, 1, 1, 4, 3, 3, 4, 2, 4, 1, 4};
    vector<int> damage = {484, 533, 589, 707, 525, 670, 591, 542, 686, 677, 692, 529, 530, 631, 640, 657, 520, 679, 611, 506, 571, 620, 630, 508, 567, 519, 583, 702, 559, 545, 601};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 10604;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> level = {3, 2, 1, 3, 1, 3, 3, 3, 1, 2, 1, 1, 2, 1, 1, 1, 3, 2, 2, 1, 3, 1, 1, 2, 3, 2, 2, 3, 3, 2, 3, 2, 2, 2, 2, 1, 2, 3, 3, 3, 1, 3};
    vector<int> damage = {192, 179, 187, 195, 176, 176, 189, 187, 183, 187, 192, 190, 189, 185, 191, 191, 192, 181, 186, 192, 192, 194, 194, 192, 184, 189, 192, 182, 190, 187, 181, 187, 194, 176, 177, 177, 193, 186, 188, 190, 195, 186};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5075;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> level = {25, 30, 23, 9, 34, 4, 23};
    vector<int> damage = {215, 150, 245, 135, 239, 188, 197};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 188;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> level = {1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1};
    vector<int> damage = {372, 303, 313, 326, 237, 274, 256, 387, 237, 289, 289, 377, 306, 359, 261, 360, 326, 265, 238, 283, 329, 354, 302, 318, 394, 327, 398, 233, 349, 367, 368, 293, 230, 234, 291};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 8713;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> level = {14, 21, 19, 7, 11, 6, 25, 30, 18, 19, 7, 34, 19, 4, 11, 28, 30, 33, 38, 13, 33, 28, 37, 37, 8, 11, 20};
    vector<int> damage = {162, 141, 192, 181, 136, 189, 156, 120, 125, 120, 133, 134, 193, 190, 128, 143, 135, 101, 151, 186, 151, 170, 116, 178, 195, 170, 101};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 755;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> level = {3, 1, 1, 3, 3, 3, 1, 3, 3, 2, 3, 2, 3, 1, 3, 3, 3, 2, 2, 1, 2, 1, 2, 2, 2, 2, 3, 3, 2, 3, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1};
    vector<int> damage = {27, 90, 138, 32, 132, 121, 107, 144, 93, 41, 85, 88, 147, 97, 61, 101, 66, 63, 79, 31, 11, 124, 37, 114, 31, 22, 139, 56, 92, 104, 99, 63, 29, 142, 109, 20, 81, 106, 97, 119};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2459;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> level = {17, 34, 11, 12, 37, 39, 10, 12, 8, 38, 27, 21, 9, 24, 5};
    vector<int> damage = {231, 270, 151, 253, 204, 176, 239, 179, 77, 167, 83, 162, 103, 221, 68};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> level = {1, 4, 2, 5, 1, 1, 4, 2, 2, 1, 4, 2, 3, 4, 5, 5, 2, 5, 2, 5, 3, 5, 5, 5, 4, 1, 5, 3, 4, 1, 5, 1, 5, 5, 3};
    vector<int> damage = {142, 156, 185, 158, 77, 142, 126, 144, 252, 104, 85, 160, 149, 90, 74, 175, 341, 213, 260, 198, 311, 93, 127, 180, 220, 201, 109, 310, 210, 249, 120, 309, 130, 162, 139};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3695;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> level = {4, 4};
    vector<int> damage = {869, 627};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
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
    vector<int> level = {24, 26, 17, 2, 30, 5, 6, 34};
    vector<int> damage = {96, 410, 255, 426, 323, 431, 235, 147};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 857;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {581, 665, 553, 660, 601, 577, 564, 460, 624, 513, 595, 458, 495, 535, 473, 659, 543, 436, 596, 437, 615, 611, 544, 569, 440, 644, 577, 617, 477, 650, 660, 464, 475, 572, 591, 631, 471, 543, 504, 546, 546, 559, 586, 547, 650, 447, 524, 574};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 26659;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> level = {7, 7, 1, 2, 4, 10, 6, 7, 8, 10, 8, 10, 7, 1, 4, 1, 6, 10, 9, 6, 7, 8, 3, 9, 6, 10};
    vector<int> damage = {870, 513, 684, 437, 457, 871, 427, 868, 589, 625, 647, 751, 512, 912, 805, 634, 886, 799, 831, 911, 566, 894, 605, 556, 648, 591};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5894;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> level = {2, 2, 2, 2, 2, 1, 1};
    vector<int> damage = {349, 339, 334, 340, 340, 353, 322};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1382;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> level = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {657, 547, 698, 689, 497, 653, 612, 744, 590, 557, 585, 752, 707, 518, 785, 776, 602, 624, 689, 569, 624, 703, 779, 639, 644, 783, 631, 736, 760, 707, 598, 493, 788, 650, 725, 471, 521, 655, 683, 507, 588, 726, 474};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 19013;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> level = {49, 42, 47, 8, 7, 41, 41, 35, 2, 14, 18, 34, 31, 10, 39, 18, 5, 8, 13, 15, 13, 40, 11, 21, 43, 19, 24, 3, 13, 28, 31, 20, 35, 10, 34, 39, 35, 30, 7, 49, 35, 2, 7};
    vector<int> damage = {725, 652, 476, 565, 738, 564, 706, 558, 539, 529, 498, 555, 625, 671, 725, 488, 442, 694, 488, 549, 585, 678, 477, 626, 642, 448, 643, 606, 661, 680, 729, 709, 474, 477, 559, 722, 679, 507, 659, 596, 679, 618, 575};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 4871;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> level = {22, 23, 11, 5, 29, 38, 17, 27, 42, 35, 1, 24, 10, 12, 40, 11, 31, 10, 10, 22, 7};
    vector<int> damage = {748, 718, 684, 934, 820, 658, 803, 956, 625, 665, 817, 688, 816, 592, 915, 898, 753, 647, 589, 634, 642};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2649;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> level = {2, 1, 1};
    vector<int> damage = {204, 203, 195};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 407;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {771, 662, 809, 724, 724, 767, 799, 687, 815, 707, 690, 820, 733, 698, 746, 668, 835, 779, 715, 667, 810, 733, 720, 745, 714, 751, 668, 698, 811, 783, 796, 725, 729, 818, 819, 823};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 26959;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> level = {3, 29, 13, 2, 33, 13, 29, 7, 11, 11, 33, 20, 4, 16};
    vector<int> damage = {243, 668, 316, 309, 480, 606, 564, 186, 408, 621, 411, 496, 301, 542};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> level = {28, 26, 26, 7, 16, 20, 9, 14, 5, 9, 4, 19, 21};
    vector<int> damage = {777, 795, 798, 804, 794, 773, 789, 803, 798, 784, 780, 795, 802};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1602;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> level = {2, 2, 4, 2, 2, 3, 4, 2, 2, 1, 2, 1, 4, 1, 3, 4, 4, 1, 4, 4, 2, 2, 1, 4, 4, 3, 4, 2, 4, 1, 1, 2, 1, 1, 4, 3, 3, 4, 1, 4, 3, 4, 3, 4, 3, 1, 4, 2, 1};
    vector<int> damage = {162, 218, 161, 42, 262, 353, 258, 354, 175, 233, 352, 135, 314, 298, 82, 96, 326, 376, 308, 264, 228, 125, 365, 231, 39, 353, 103, 39, 25, 186, 352, 171, 23, 79, 240, 60, 321, 79, 43, 74, 108, 76, 309, 307, 158, 228, 263, 102, 204};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 6583;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> level = {2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1};
    vector<int> damage = {743, 377, 190, 308, 719, 719, 404, 711, 495, 627, 198, 229, 492, 546, 640, 564, 498, 716, 169, 468, 354, 157, 262, 449, 638, 281, 719, 288, 589, 184, 328, 327, 702, 453};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 13900;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> level = {2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 1};
    vector<int> damage = {784, 754, 569, 740, 556, 817, 751, 693, 786, 712, 688, 806, 479, 612, 773, 478, 661, 763, 749, 590, 602, 814, 540, 669, 835, 743, 457, 639, 764, 651, 464, 645, 677, 505, 664, 782, 540, 505, 705, 792, 763, 603, 677, 553, 716, 821, 663, 583, 776};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 25732;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> level = {2};
    vector<int> damage = {806};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
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
    vector<int> level = {1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1};
    vector<int> damage = {310, 227, 287, 271, 182, 136, 200, 218, 110, 146, 107, 205, 126, 114, 214, 136, 118, 214, 101, 86, 148, 271, 105, 256, 133, 147, 222, 193, 94, 266, 98, 115, 184, 195, 297, 142, 193};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5503;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> level = {2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2};
    vector<int> damage = {749, 753, 795, 846, 731, 755, 793, 858, 814, 859, 810, 771, 866, 793, 864, 871};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 10693;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> level = {6, 6, 3, 6, 2, 6, 2, 3, 6, 2, 6, 3, 5, 3, 6, 6, 5, 4, 5, 4, 2, 4, 6, 2, 2, 3, 6, 5, 6, 2, 3, 1, 2, 6, 3, 4, 6, 6, 6, 6};
    vector<int> damage = {535, 509, 560, 565, 519, 556, 502, 549, 511, 511, 487, 487, 522, 515, 552, 529, 533, 480, 531, 562, 580, 556, 540, 516, 552, 471, 516, 468, 467, 509, 469, 565, 528, 497, 499, 513, 538, 568, 560, 530};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 8510;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> level = {29, 31, 1, 17, 28, 12, 19, 4, 27, 6, 33, 3, 15, 20};
    vector<int> damage = {64, 78, 60, 78, 60, 63, 75, 82, 70, 77, 61, 60, 63, 71};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> level = {17, 17, 30, 23, 5, 29, 10, 8, 27, 9, 4, 6, 12, 32, 21, 14, 23, 1, 22, 12, 28, 16};
    vector<int> damage = {648, 701, 705, 741, 694, 729, 693, 706, 693, 663, 724, 715, 673, 724, 663, 665, 719, 671, 736, 677, 700, 719};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2816;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> level = {2, 1, 2};
    vector<int> damage = {66, 53, 75};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> level = {1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2};
    vector<int> damage = {300, 460, 393, 377, 521, 322, 271, 487, 259, 327, 408, 384, 370, 249, 405, 285, 443, 447, 336, 274, 465, 527, 488, 509, 239, 543, 389, 328, 285, 510, 387, 471, 450, 403, 364, 502, 391, 250, 355, 258, 509, 539, 390};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 13547;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> level = {4, 2, 1, 1, 3, 4};
    vector<int> damage = {733, 744, 649, 876, 780, 795};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> level = {3, 3, 1, 3, 1, 4, 2, 3, 1, 4, 3, 4, 1, 1, 1, 2, 3, 1, 3, 1, 2, 4, 4, 1, 1, 1, 2, 4};
    vector<int> damage = {200, 170, 166, 168, 216, 202, 206, 167, 178, 208, 205, 194, 189, 195, 170, 188, 191, 204, 197, 203, 216, 201, 190, 198, 173, 194, 183, 186};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3481;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> level = {4, 32, 8, 6, 26, 9, 5, 2, 14, 8, 27, 22, 20, 39};
    vector<int> damage = {330, 367, 342, 331, 379, 335, 353, 343, 350, 374, 373, 362, 359, 334};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1047;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> level = {3, 5, 4, 5, 5, 1, 1, 4, 1, 1, 2, 5, 2, 2, 5, 1, 1, 2, 5, 1, 5, 1, 3, 4, 4, 4, 1, 3};
    vector<int> damage = {253, 169, 194, 200, 214, 221, 247, 194, 191, 169, 212, 237, 204, 171, 226, 173, 220, 210, 200, 226, 179, 246, 197, 185, 169, 171, 246, 229};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3455;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> level = {1, 1, 1, 3, 3, 2, 2, 3, 3, 3, 1, 1, 3, 1, 2, 2, 3, 2, 2, 2, 2, 3, 1, 1, 1, 2, 1, 3, 2, 1, 2, 3, 2, 3, 3, 3, 1, 3, 1, 3, 2, 1, 2, 1};
    vector<int> damage = {242, 184, 292, 231, 552, 364, 195, 255, 503, 624, 190, 500, 504, 357, 412, 542, 608, 528, 614, 458, 171, 152, 632, 391, 48, 357, 588, 311, 267, 525, 235, 377, 105, 65, 54, 254, 377, 99, 502, 338, 392, 183, 346, 616};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 11880;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> level = {4, 5, 4, 3, 3, 4, 1, 3, 3, 5, 1, 4, 3, 2, 1, 5, 4, 5, 3, 2, 3, 2, 3, 2, 1, 4, 5, 2, 2, 2, 3, 1, 1, 5, 1, 4, 3, 3, 1, 1, 3, 3, 3, 3};
    vector<int> damage = {973, 979, 980, 979, 979, 977, 978, 978, 978, 980, 975, 975, 978, 977, 976, 976, 977, 979, 976, 975, 974, 974, 978, 979, 980, 976, 976, 979, 977, 979, 975, 979, 979, 980, 980, 978, 975, 976, 973, 978, 978, 978, 974, 974};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 22486;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> level = {2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1};
    vector<int> damage = {557, 545, 535, 581, 569, 582, 571, 544, 577, 552, 570, 556, 524, 582, 577, 557, 582, 576, 542, 548, 575, 557, 535, 545, 523, 536, 546, 576, 522, 554, 539, 580, 534, 521, 577, 551, 534, 524, 519, 573, 580, 546, 553, 580, 576};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 19028;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> level = {2};
    vector<int> damage = {183};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> level = {1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2};
    vector<int> damage = {634, 662, 519, 463, 525, 415, 430, 207, 392, 716, 685, 292, 730, 695, 521, 800, 603, 640, 239, 757, 520, 591, 209, 352, 191, 436, 336, 251, 577, 578, 579, 786, 388, 184, 167, 820, 646, 787, 732, 699};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 16194;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> level = {10};
    vector<int> damage = {281};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
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
    vector<int> level = {1, 2, 1, 3, 2, 2, 3, 1, 3, 1, 2, 3, 1, 1, 1, 2, 3, 2, 1, 3, 1, 3, 1, 1, 1, 2, 1, 2, 1, 1, 3, 3, 3, 1, 3, 1};
    vector<int> damage = {353, 386, 504, 483, 477, 512, 453, 453, 487, 457, 396, 487, 371, 390, 378, 463, 414, 373, 403, 393, 345, 503, 426, 444, 490, 473, 453, 361, 488, 522, 384, 539, 372, 511, 466, 360};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 11328;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> level = {3, 1, 1, 2, 2, 2, 3, 1, 2, 3, 3, 1, 1, 3, 3, 2, 3, 2, 2, 2, 2, 1, 3, 1, 2, 1, 3, 1, 1, 2, 1, 1, 1, 1, 2, 2, 3, 2};
    vector<int> damage = {802, 814, 948, 703, 938, 694, 704, 915, 775, 906, 595, 876, 631, 632, 727, 869, 824, 609, 832, 656, 725, 664, 793, 615, 902, 755, 668, 920, 691, 851, 820, 595, 703, 867, 883, 788, 803, 762};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 20536;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> level = {1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 3, 3, 2, 3, 1, 2, 3, 3, 3, 3, 2, 2, 2, 1, 1, 3, 2, 1, 1, 3, 2, 1, 3, 2, 3, 3, 1, 1, 1, 3, 3, 2, 1, 3, 3, 3, 1, 1};
    vector<int> damage = {803, 273, 467, 813, 894, 649, 963, 757, 892, 317, 894, 948, 296, 789, 237, 328, 837, 537, 826, 164, 841, 891, 433, 810, 912, 488, 378, 703, 726, 326, 469, 722, 323, 828, 774, 170, 814, 657, 984, 960, 242, 489, 547, 877, 738, 318, 478, 629};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 23218;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {29, 42, 28, 27, 39, 40, 25, 33, 44, 25, 28, 29, 35, 31, 21, 42, 42, 45, 18, 23, 37, 26, 36, 36, 41};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 822;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> level = {2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2};
    vector<int> damage = {605, 636, 576, 589, 609, 579, 648, 648, 576, 576, 609, 558, 640, 588};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 6108;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> level = {23, 9, 26, 15, 28, 41, 13, 37, 10, 40, 35, 32, 28, 35, 29, 18, 40, 40, 6, 4, 41, 29, 33, 24, 28, 18, 26, 14, 9, 20, 17, 18, 35, 17, 31, 41, 3, 18, 32, 30, 4, 31, 5, 34};
    vector<int> damage = {354, 296, 363, 321, 310, 294, 250, 268, 340, 343, 310, 382, 346, 322, 309, 246, 298, 264, 268, 343, 313, 250, 253, 388, 275, 303, 383, 245, 328, 326, 249, 373, 373, 324, 316, 361, 387, 340, 380, 237, 326, 236, 310, 315};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2330;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> level = {3, 34, 41, 15, 3, 4, 5, 43, 31, 11, 44, 36, 25, 24};
    vector<int> damage = {24, 21, 15, 17, 18, 13, 17, 23, 13, 14, 16, 22, 21, 19};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> level = {2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1};
    vector<int> damage = {288, 284, 214, 128, 193, 150, 157, 218, 290, 64, 126, 131, 77, 127, 198, 167, 222, 205, 173, 144, 111, 112, 199, 160, 231, 70, 65, 201};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3598;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> level = {1, 3, 1, 4, 5, 1, 5, 4, 5, 2, 4, 5, 4, 1, 4, 4, 2};
    vector<int> damage = {349, 445, 170, 642, 286, 265, 303, 692, 496, 293, 575, 253, 209, 236, 315, 523, 695};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3494;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> level = {11, 15, 10, 5, 42, 28, 48, 12, 19, 47, 36, 49, 43, 30, 28, 16, 27, 21, 25, 13, 16, 14, 23, 3, 10, 49, 18, 38, 10, 28, 38, 33, 3, 20, 34, 25, 7, 28, 4, 39, 25, 43, 44, 2, 40, 20};
    vector<int> damage = {286, 282, 275, 285, 288, 277, 282, 283, 282, 277, 276, 280, 284, 288, 282, 272, 283, 288, 285, 273, 278, 286, 273, 278, 281, 276, 288, 283, 276, 282, 283, 287, 272, 273, 285, 273, 282, 281, 287, 277, 283, 273, 276, 277, 277, 277};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2248;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> level = {8, 7, 9, 4};
    vector<int> damage = {286, 657, 575, 299};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> level = {12, 13, 8, 2, 3, 9, 2, 5, 13, 1, 10, 8};
    vector<int> damage = {329, 104, 225, 190, 249, 176, 315, 139, 333, 226, 181, 100};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {310, 377, 285, 388, 344, 458, 525, 379, 405, 408, 460, 462, 340, 474, 442, 370, 352, 466, 355, 527, 523, 406, 516, 364, 436, 447, 505, 339, 374, 338, 294, 428, 478, 410, 317, 433, 295, 491, 527};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 16048;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> level = {2, 3, 3, 4, 1, 1, 3, 1, 2, 2, 2, 1, 4, 2, 4, 4, 2, 1, 4, 1, 3, 2, 2, 4, 2};
    vector<int> damage = {577, 592, 595, 594, 585, 600, 580, 582, 605, 581, 578, 577, 593, 585, 584, 580, 593, 579, 578, 605, 598, 602, 602, 586, 589};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 8861;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> level = {2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 1};
    vector<int> damage = {124, 127, 127, 124, 129, 128, 124, 129, 127, 129, 126, 127, 129, 128, 124, 128, 124, 128, 127, 130, 128, 124, 131, 128, 131, 127, 128, 124, 127, 130, 128, 130, 128, 128, 129, 131, 125, 130, 129, 129, 131};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3851;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> level = {16, 4, 14, 16, 6, 16, 18, 11, 17, 3, 14, 1, 13, 8, 11, 15, 1, 14, 13, 10, 4, 9, 12, 1, 5, 8, 3};
    vector<int> damage = {567, 431, 739, 541, 553, 820, 528, 485, 470, 823, 551, 680, 798, 799, 331, 655, 925, 408, 570, 363, 352, 368, 472, 775, 382, 747, 870};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 5856;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> level = {2};
    vector<int> damage = {362};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> level = {2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1};
    vector<int> damage = {153, 143, 150, 196, 189, 153, 137, 160, 187, 201, 137, 173, 168, 141, 156, 173, 142, 161, 142, 146, 137, 192, 190, 201, 172, 183, 181, 137, 148, 201, 153};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3955;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> level = {10, 2, 3, 8, 12, 8, 7, 1};
    vector<int> damage = {271, 294, 246, 381, 563, 479, 435, 303};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 843;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {69, 64, 60, 63, 67, 69, 68, 63, 65, 70, 63, 61, 66, 60, 70, 68, 67, 60, 64, 67, 67, 70, 70, 66, 60, 71, 66, 68, 62, 68, 69, 63};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2104;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> level = {1, 3, 2, 4, 3, 2, 5, 3, 5, 5, 2, 1, 4, 1, 5, 4, 1, 1, 4, 1, 1, 1, 5, 4, 5, 5, 1, 1, 4, 1, 4};
    vector<int> damage = {410, 391, 409, 413, 432, 388, 411, 413, 427, 429, 423, 413, 409, 414, 431, 409, 430, 416, 412, 405, 407, 424, 421, 396, 401, 415, 395, 434, 415, 388, 421};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 7437;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> level = {4, 1, 2, 2, 4, 2, 4, 2, 2, 3, 4, 4, 4, 4, 2, 4, 1, 2, 1, 2, 4, 2, 1, 4, 4, 1, 1, 2, 2, 4, 3, 4, 2, 4, 3, 4, 4};
    vector<int> damage = {599, 630, 531, 640, 684, 509, 578, 549, 526, 640, 399, 447, 554, 719, 604, 737, 453, 416, 530, 396, 678, 521, 713, 718, 530, 504, 451, 566, 544, 524, 684, 424, 489, 637, 620, 598, 415};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 11120;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> level = {1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 1};
    vector<int> damage = {824, 829, 808, 772, 814, 783, 801, 829, 852, 849, 769, 823, 851, 816, 775, 808, 844, 801, 827, 838, 816, 834, 853, 816, 813};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 16464;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> level = {1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 1};
    vector<int> damage = {45, 38, 28, 23, 23, 45, 24, 40, 26, 50, 21, 27, 21, 28, 36, 52, 42, 20, 38, 21, 25, 36, 23, 24, 23, 21, 49, 39, 29, 51, 40, 21, 38, 29, 33, 47};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 968;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> level = {3, 9, 16, 13, 20, 1, 2, 19, 10, 19, 7, 5, 7, 6, 21, 17, 6, 5, 19};
    vector<int> damage = {585, 549, 573, 554, 546, 551, 555, 585, 569, 566, 553, 569, 549, 556, 574, 546, 586, 571, 586};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2848;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> level = {23, 27, 2, 3};
    vector<int> damage = {366, 363, 358, 280};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> level = {20, 11, 16, 16, 3, 8, 17, 8, 28, 21, 16, 3, 10, 22, 15, 13, 19, 24, 15, 6, 15, 3, 1, 22};
    vector<int> damage = {425, 299, 327, 379, 400, 277, 336, 445, 436, 313, 365, 320, 306, 388, 454, 375, 327, 340, 313, 396, 350, 477, 370, 445};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 2408;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> level = {27, 29, 20, 8, 25, 35, 30, 31};
    vector<int> damage = {188, 158, 106, 202, 99, 211, 135, 102};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> level = {1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2};
    vector<int> damage = {3, 5, 8, 4, 1, 6, 7, 7, 10, 6, 7, 4, 3, 2, 6, 9, 3, 4, 3, 10, 7, 5, 3, 5, 3, 10, 6, 8, 2, 8};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {745, 724, 751, 736, 737, 744, 734, 744, 740, 724, 735, 742, 735, 752, 749, 717, 724, 752, 721, 726, 727, 743, 737, 740, 756, 740, 740, 718, 734, 724, 746, 730, 746, 743, 753, 736, 730, 755, 733, 732, 729, 754, 734, 743, 747, 728, 750, 725, 755, 730};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 36890;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> level = {11, 19, 3, 17, 19, 13, 21, 22, 10, 5, 10, 11, 4, 13, 18, 10, 5, 11, 1, 6, 10, 17, 17, 7, 11, 17, 19, 5, 13, 8, 16, 19, 6, 21, 15, 16, 7, 8};
    vector<int> damage = {74, 86, 36, 87, 42, 27, 73, 44, 26, 35, 44, 39, 44, 60, 29, 30, 79, 82, 40, 85, 89, 53, 73, 33, 86, 27, 59, 69, 82, 33, 33, 68, 32, 69, 73, 71, 73, 65};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 479;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> level = {2, 8, 9, 3, 8, 9, 8, 6, 6, 9, 2, 3, 6, 4, 4, 7, 7, 3, 9, 1, 8, 4, 3, 6, 3, 2, 7, 1, 3, 9, 4, 2, 9, 3, 1, 7, 7, 3, 9, 4, 1, 7, 2, 6, 8, 1, 6, 9, 8, 5};
    vector<int> damage = {74, 68, 10, 7, 41, 17, 59, 30, 75, 88, 56, 92, 52, 42, 86, 16, 59, 21, 19, 21, 81, 72, 9, 75, 44, 14, 47, 28, 72, 96, 46, 45, 55, 77, 3, 24, 14, 85, 71, 79, 17, 3, 17, 35, 25, 89, 68, 98, 56, 69};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1098;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> level = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2};
    vector<int> damage = {5576, 2061, 6811, 5929, 9555, 6441, 9984, 2438, 6762, 2957, 859, 7724, 4953, 8817, 5100, 5734, 9532, 6849, 3388, 77, 7054, 9890, 7741, 7496, 1978, 1437, 9136, 7842, 5893, 8648, 6894, 2879, 937, 6290, 2801, 8772, 1613, 2732, 5437, 9608, 1744, 1571, 2682, 1775, 5768, 4982, 2852, 1560, 6098, 7397};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 238801;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> level = {2, 2, 2, 4, 2, 2, 2, 4, 2, 4, 2, 4, 4, 2, 2, 2, 4, 2, 2, 3, 4, 4, 4, 3, 3, 2, 4, 2, 3, 4, 3, 4, 4, 2, 3, 3, 4, 3, 4, 4, 3, 2, 2, 2, 2, 4, 4, 2, 4, 4};
    vector<int> damage = {2007, 2146, 2104, 4196, 2108, 2174, 2088, 4061, 2060, 4126, 2025, 4193, 4129, 2115, 2192, 2146, 4190, 2081, 2124, 3109, 4008, 4120, 4100, 3051, 3095, 2097, 4184, 2136, 3157, 4055, 3184, 4171, 4142, 2139, 3114, 3128, 4153, 3069, 4056, 4186, 3054, 2024, 2168, 2093, 2088, 4174, 4134, 2163, 4133, 4187};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 53012;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> level = {1, 9, 10, 8, 6, 4, 2, 2, 10, 5, 8, 8, 4, 3, 6, 5, 5, 6, 2, 1, 4, 9, 5, 8, 3, 1, 4, 3, 3, 4, 6, 6, 8, 8, 3, 3, 6, 4, 9, 6, 1, 6, 6, 1, 9, 2, 5, 7, 3, 3};
    vector<int> damage = {3320, 878, 8417, 9647, 7208, 1617, 3609, 9738, 5144, 9748, 2388, 789, 106, 5259, 7409, 6518, 3452, 1719, 4359, 1119, 2739, 8073, 1458, 8552, 6727, 2581, 2298, 8663, 4136, 5221, 1268, 3774, 5118, 1670, 7906, 7153, 3790, 244, 8902, 6242, 7224, 2381, 3669, 3515, 7917, 724, 1958, 1223, 4606, 2372};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 105828;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> level = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> damage = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> level = {4, 3, 4, 3, 4, 3, 3, 4, 4, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 3, 4, 4, 4, 4, 3, 3, 3, 3, 4, 3, 4, 3, 3, 4, 4, 3, 4, 3, 3, 4};
    vector<int> damage = {9003, 9001, 9002, 9002, 9002, 9002, 9003, 9002, 9001, 9003, 9002, 9003, 9002, 9001, 9001, 9003, 9002, 9002, 9003, 9002, 9003, 9000, 9002, 9000, 9001, 9002, 9001, 9003, 9000, 9002, 9003, 9002, 9003, 9001, 9000, 9000, 9002, 9002, 9002, 9001, 9000, 9000, 9002, 9003, 9003, 9000, 9001, 9003, 9003, 9001};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 144041;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> level = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> damage = {3578, 7048, 9298, 6830, 2588, 172, 4221, 3059, 938, 7790, 9113, 8918, 173, 8738, 7732, 7581, 3720, 8461, 9067, 6605, 8054, 5972, 3714, 86, 3218, 5473, 2862, 3581, 2883, 7383, 1535, 4455, 401, 6845, 5054, 1120, 4216, 6822, 6702, 1772, 6088, 5666, 8018, 2149, 9030, 4157, 1227, 8675, 6180, 3029};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 188089;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> level = {2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 1, 2, 2, 2, 3, 2, 1, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 3, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    vector<int> damage = {4, 5, 4, 5, 4, 8, 4, 5, 7, 4, 5, 4, 8, 4, 5, 4, 5, 4, 4, 4, 4, 4, 7, 4, 8, 4, 4, 7, 4, 5, 4, 8, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, 8};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> level = {1, 2, 2, 3, 1, 4, 2, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> damage = {113, 253, 523, 941, 250, 534, 454, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 3098;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> level = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> level = {1, 2, 2, 3, 1, 4, 2};
    vector<int> damage = {113, 253, 523, 941, 250, 534, 454};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 1918;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> level = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 779;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> level = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> damage = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 160000;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> level = {2, 2, 2, 2};
    vector<int> damage = {100, 100, 1, 1};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> level = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> damage = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> level = {2, 1, 1, 2, 1, 1, 3};
    vector<int> damage = {40, 10, 10, 40, 10, 10, 90};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> level = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 8, 3, 8, 8, 3, 2, 5, 7, 3, 2, 7, 3, 2, 9, 2, 9, 7, 3, 2, 9, 5, 8, 7, 9, 3, 2, 5, 8, 9, 5, 8, 3, 2};
    vector<int> damage = {3, 2, 5, 3, 2, 9, 8, 5, 7, 9, 8, 1, 4, 7, 3, 2, 8, 5, 7, 9, 8, 5, 7, 8, 1, 4, 7, 9, 8, 7, 5, 2, 9, 8, 3, 2, 7, 5, 9, 8, 1, 7, 4, 9, 8, 2, 1, 7, 9, 8};
    SpellCards* pObj = new SpellCards();
    clock_t start = clock();
    int result = pObj->maxDamage(level, damage);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=15185&pm=12329
********************************************************************************
//  SRM 563 (B) 
 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <utility> 
#include <numeric> 
#include <algorithm> 
#include <bitset> 
#include <complex> 
 
using namespace std; 
 
typedef unsigned uint; 
typedef long long Int; 
typedef vector<int> vint; 
typedef pair<int,int> pint; 
#define mp make_pair 
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; } 
template<class T> void chmin(T &t, T f) { if (t > f) t = f; } 
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } 
 
int N; 
int dp[110]; 
 
struct SpellCards { 
   
  int maxDamage(vector <int> level, vector <int> damage) { 
    int i, j; 
     
    N = level.size(); 
    for (i = 0; i < N; ++i) { 
      for (j = N; j >= level[i]; --j) { 
        chmax(dp[j], dp[j - level[i]] + damage[i]); 
      } 
    } 
    return dp[N]; 
     
  } 
   
};

********************************************************************************
*******************************************************************************/