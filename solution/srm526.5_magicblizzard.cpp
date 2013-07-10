/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11690
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

class MagicBlizzard {
public:
    double expectation(vector<int> range, vector<int> amount);
};

double MagicBlizzard::expectation(vector<int> range, vector<int> amount) {
    double ret;
    return ret;
}


int test0() {
    vector<int> range = {1, 0};
    vector<int> amount = {1, 1};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2222222222222223;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> range = {1, 0};
    vector<int> amount = {2, 1};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 3.666666666666667;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> range = {5, 2, 6, 5};
    vector<int> amount = {1, 2, 2, 3};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 8.46525111252384;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> range = {7, 11, 2, 13, 3, 19, 5, 17};
    vector<int> amount = {16, 8, 4, 15, 12, 9, 10, 6};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 98.55659436211914;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> range = {89, 46, 30, 55, 97, 87, 31, 99, 37, 69, 84, 0, 15, 96, 28, 42, 37, 91, 5, 71, 16, 74, 97, 13, 4, 40, 57, 69, 1, 5, 86, 38, 21, 27, 98, 63, 22};
    vector<int> amount = {20, 67, 63, 46, 31, 78, 58, 33, 47, 70, 18, 86, 16, 14, 48, 100, 60, 91, 52, 34, 83, 20, 70, 51, 61, 45, 30, 97, 43, 92, 69, 71, 31, 96, 58, 5, 5};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 11612.580357888419;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> range = {53, 2, 90, 17, 84, 5, 20, 73, 27, 64, 82, 56};
    vector<int> amount = {69, 12, 86, 31, 86, 32, 36, 87, 11, 21, 53, 38};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 602.4470436954125;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> range = {29, 25, 45, 46, 35, 29, 16, 94, 85, 55, 98, 24, 48, 69, 54, 95, 85, 51, 48, 27, 23, 0, 52, 95, 86, 64, 19, 95, 41, 72, 66, 74, 67, 16, 91, 36, 84};
    vector<int> amount = {28, 77, 9, 93, 31, 92, 80, 15, 33, 20, 93, 41, 54, 84, 73, 78, 22, 37, 35, 26, 56, 61, 35, 92, 13, 19, 7, 42, 56, 78, 5, 62, 96, 93, 8, 36, 31};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 5776.178151797337;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> range = {83, 44, 53, 38, 98, 25, 74, 80, 36, 49, 82, 34, 2, 31, 62};
    vector<int> amount = {96, 24, 91, 87, 69, 42, 42, 4, 11, 35, 43, 32, 26, 9, 45};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 709.6811808592843;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> range = {51, 56, 77, 100, 23, 50, 38, 86, 78, 9, 90, 33, 99, 86, 82, 72, 12, 6, 10, 37, 91, 47, 50, 91, 94, 35, 46, 83, 5, 92, 95, 60, 17, 100, 27, 27, 92, 80};
    vector<int> amount = {92, 78, 67, 76, 96, 83, 68, 85, 72, 14, 92, 85, 51, 19, 50, 96, 90, 82, 93, 15, 50, 21, 16, 33, 98, 94, 58, 89, 9, 95, 67, 52, 10, 63, 78, 38, 16, 98};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2922.6311519132673;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> range = {11, 91, 94, 99, 53, 16, 24, 13, 79, 87, 100, 82, 95, 97, 30, 19, 70, 84, 3, 65, 99, 36, 36, 56, 45, 86, 39, 86, 28, 93, 7, 67, 80, 53, 16, 39, 99, 65, 94, 88};
    vector<int> amount = {68, 94, 30, 39, 33, 47, 15, 18, 28, 74, 75, 79, 47, 65, 19, 62, 34, 60, 10, 35, 47, 4, 86, 58, 58, 1, 7, 63, 41, 35, 93, 99, 10, 40, 13, 74, 64, 40, 63, 34};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2162.479942874084;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> range = {86, 37, 55, 93, 14, 30, 78, 54, 37, 59, 75, 81, 94, 9, 46, 78, 31, 38, 34};
    vector<int> amount = {42, 11, 59, 38, 52, 75, 11, 82, 27, 22, 87, 24, 27, 76, 6, 48, 79, 59, 33};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 947.2434484427968;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> range = {36, 50, 34, 11, 25, 35};
    vector<int> amount = {46, 40, 84, 43, 8, 65};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 303.1941326538094;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> range = {73, 11, 47, 65, 11, 57, 37, 1, 58, 52, 63, 6, 37, 100, 73, 58, 15, 97, 41, 87, 2, 80, 60, 43};
    vector<int> amount = {95, 66, 50, 72, 49, 35, 85, 18, 6, 11, 76, 91, 39, 45, 68, 84, 47, 20, 71, 44, 57, 90, 14, 48};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1882.3782978965476;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> range = {7, 4, 49, 44, 67, 41, 24, 33, 0, 96, 50, 90, 100, 49, 35, 39, 94, 77, 60, 79, 28, 53, 50, 40, 43, 67};
    vector<int> amount = {78, 9, 48, 27, 14, 98, 61, 90, 19, 48, 67, 8, 55, 59, 91, 1, 41, 51, 65, 54, 16, 83, 7, 82, 42, 40};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1781.095000952899;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> range = {43, 95, 8, 36, 15, 5, 46, 77, 73, 26, 81, 80, 87, 19, 42, 15, 30, 49, 95, 49, 10, 27, 44, 43, 75, 66, 9, 56, 98, 2, 46, 23, 87, 8, 61, 86, 94, 12, 23};
    vector<int> amount = {993, 725, 692, 520, 656, 655, 784, 686, 428, 59, 896, 524, 800, 613, 880, 384, 3, 616, 834, 50, 828, 271, 988, 881, 455, 882, 339, 981, 420, 454, 736, 454, 30, 456, 906, 539, 569, 915, 444};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 134396.5709724625;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> range = {68, 24, 56, 74, 64, 48, 95, 42, 12, 28, 78, 87, 83, 89, 13, 87, 39, 96, 79, 13, 40};
    vector<int> amount = {631, 610, 997, 275, 496, 471, 824, 493, 561, 841, 732, 319, 580, 859, 603, 487, 210, 605, 512, 920, 387};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 28128.430152405588;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> range = {88, 22, 3, 74, 38, 24, 50, 14, 52, 85, 49, 41, 65, 38, 11, 20, 28, 98, 28, 100, 89, 77, 26, 76, 8, 98, 32, 90, 93, 9, 44, 91, 8, 52};
    vector<int> amount = {634, 455, 668, 581, 874, 437, 966, 659, 340, 424, 122, 568, 426, 968, 952, 553, 316, 483, 630, 293, 698, 484, 403, 901, 873, 836, 460, 136, 532, 656, 890, 677, 549, 420};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 105057.61993403498;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> range = {49, 15, 73, 100, 18, 91, 48, 45, 59, 89, 97, 29};
    vector<int> amount = {82, 634, 329, 306, 452, 981, 522, 445, 410, 580, 307, 284};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 7731.318039733446;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> range = {16, 16, 23, 4, 47, 61, 2, 71, 87, 12, 7, 20, 21, 80, 56, 40, 78, 76, 90, 54, 66, 81, 34, 79, 59, 56, 94, 81, 35};
    vector<int> amount = {220, 981, 539, 924, 318, 471, 437, 504, 577, 643, 528, 411, 590, 879, 735, 623, 185, 84, 618, 222, 703, 800, 402, 317, 613, 151, 971, 617, 50};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 80240.40342388401;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> range = {95, 1, 11, 70, 51, 93, 3, 15, 60, 93, 53, 81, 22, 8, 14, 35, 98, 51, 13, 98, 32, 66, 17, 15, 63, 44, 58, 38, 65, 14, 86, 63, 92};
    vector<int> amount = {799, 94, 602, 633, 49, 891, 915, 147, 44, 264, 975, 729, 568, 620, 901, 785, 322, 31, 188, 904, 391, 760, 637, 696, 130, 178, 759, 69, 60, 544, 997, 866, 875};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 90963.85949788928;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> range = {43, 52, 53, 64, 19, 29, 48, 14, 4, 2, 39, 57, 97, 61, 20, 45, 88, 90, 54, 63, 64, 41, 19, 11};
    vector<int> amount = {895, 883, 284, 653, 515, 42, 757, 873, 75, 539, 13, 828, 696, 89, 259, 289, 55, 478, 547, 184, 483, 659, 647, 14};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 37661.8834471185;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> range = {80, 28, 65, 18, 100, 16, 12, 99, 62, 92, 88, 2, 3, 76, 81, 64, 96, 44, 89, 31, 77, 43, 7, 36, 68, 9, 92, 69};
    vector<int> amount = {347, 438, 127, 202, 557, 23, 581, 220, 132, 761, 313, 274, 438, 356, 98, 740, 53, 101, 356, 464, 528, 303, 666, 206, 695, 84, 74, 612};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 37482.32386064459;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> range = {9, 6, 87, 37, 26, 82, 83, 83, 60, 43, 82, 100, 3, 30, 33, 11, 75, 47, 64, 23, 23, 81, 23, 79, 47, 91, 30, 56, 40, 70, 16, 41, 86, 61, 5, 25, 18, 61, 19, 26, 88, 49, 42, 55, 30, 33, 72, 85, 43, 51};
    vector<int> amount = {957, 671, 104, 498, 450, 952, 24, 558, 379, 547, 840, 893, 60, 673, 804, 95, 25, 412, 495, 432, 709, 123, 280, 836, 885, 951, 199, 842, 780, 927, 697, 224, 352, 346, 320, 168, 404, 260, 294, 721, 399, 914, 819, 833, 909, 801, 805, 106, 837, 243};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 113602.04005642213;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> range = {77, 19, 17, 71, 73, 13, 19, 9, 54, 24, 86, 70, 38, 57, 98, 86, 26, 7, 84, 5, 31, 96, 50, 59, 90, 99, 23, 53, 65, 37, 60, 67, 93, 41, 67, 35};
    vector<int> amount = {882, 643, 587, 461, 660, 902, 511, 916, 371, 345, 971, 526, 723, 76, 985, 552, 361, 321, 762, 334, 838, 480, 245, 586, 904, 796, 298, 805, 281, 366, 135, 436, 588, 625, 364, 92};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 64512.13300445606;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> range = {784, 921};
    vector<int> amount = {341, 665};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1006.3106178555539;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> range = {441, 529, 587, 846, 442, 611, 932, 64, 167, 8, 982, 42, 932, 752, 875, 79, 423, 26, 160, 956, 373, 352, 489, 695, 164, 220, 513, 211, 183, 893, 331, 958, 286, 993, 673, 899, 71};
    vector<int> amount = {772, 729, 511, 502, 390, 822, 35, 33, 484, 798, 315, 244, 224, 582, 879, 321, 641, 400, 402, 36, 840, 535, 154, 920, 862, 549, 725, 595, 52, 90, 327, 581, 171, 70, 817, 301, 566};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 20368.95071552742;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> range = {163, 777, 53, 722, 653, 946, 165, 928, 524, 24, 669, 249, 244, 619, 583, 206, 859, 819, 188, 458, 594, 454};
    vector<int> amount = {318, 846, 844, 811, 61, 961, 7, 681, 926, 451, 869, 464, 465, 394, 792, 194, 150, 999, 700, 359, 503, 721};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 12859.861595423969;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> range = {149, 57, 785, 106, 211, 766, 289, 28, 431, 870, 903, 851, 500, 496, 574, 853, 964, 732, 213, 637, 589, 376, 949, 772, 644, 323, 333, 950, 373, 738, 585, 465, 260, 52, 396, 237, 654, 971, 461, 649, 951, 529};
    vector<int> amount = {566, 483, 676, 675, 172, 262, 889, 534, 599, 706, 831, 211, 609, 603, 565, 629, 992, 315, 295, 122, 717, 477, 549, 548, 236, 278, 79, 116, 638, 685, 711, 810, 236, 644, 879, 311, 908, 231, 318, 526, 825, 397};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 22559.747675623104;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> range = {826, 969, 663};
    vector<int> amount = {734, 384, 755};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1874.2690860792761;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> range = {1000, 873, 874, 157, 682, 703, 394, 621, 866, 703, 215, 502, 968, 641, 644, 681, 706, 249, 480, 408, 356, 113, 539, 419, 332, 787, 505, 469, 961, 670, 70, 361, 335, 926, 663, 74, 387, 217, 96, 350, 839, 725, 357, 156, 507, 741, 488, 875, 869};
    vector<int> amount = {679, 353, 979, 542, 991, 316, 237, 114, 424, 834, 249, 13, 331, 86, 81, 616, 228, 408, 764, 803, 730, 426, 678, 32, 709, 241, 636, 299, 763, 542, 639, 850, 316, 661, 807, 810, 199, 757, 545, 490, 396, 609, 252, 484, 59, 199, 904, 177, 77};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 23988.076666055196;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> range = {730, 639, 755};
    vector<int> amount = {38, 178, 274};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 490.11086410341585;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> range = {942, 438, 863, 755, 106, 989, 642, 516};
    vector<int> amount = {88, 86, 763, 856, 342, 335, 617, 989};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4086.0257036783037;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> range = {3, 704, 306, 205, 840, 986, 320, 791, 67, 166, 142, 10, 867, 507, 652, 633, 626, 307, 87, 260, 402, 610, 454, 266, 764, 198, 673, 697, 878, 421, 528, 203, 103, 184, 277, 826, 61, 521, 718, 539, 134};
    vector<int> amount = {276, 141, 570, 456, 990, 128, 936, 306, 365, 532, 588, 237, 148, 684, 899, 895, 414, 449, 616, 483, 681, 518, 68, 621, 404, 106, 123, 125, 374, 603, 604, 59, 17, 185, 433, 178, 944, 456, 681, 511, 140};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 20613.086610812636;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> range = {39, 930, 930, 722, 837, 889, 756, 817, 122, 714, 917, 900, 813, 369, 649, 340, 172, 432, 798, 517, 731};
    vector<int> amount = {701, 392, 736, 549, 32, 979, 314, 511, 142, 975, 56, 22, 962, 226, 81, 257, 366, 382, 18, 1000, 394};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 9219.968105692831;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> range = {7015, 6842, 4290, 5154, 5224, 3146, 9594, 1097, 7029, 860, 8813, 3205, 5727, 1651, 4843};
    vector<int> amount = {971, 216, 270, 571, 787, 472, 971, 322, 56, 431, 77, 751, 716, 711, 432};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 7754.73797325447;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> range = {3467, 6804, 1581, 4613, 3558, 8165, 7609, 338, 2123, 3112, 1487, 788, 9568, 1364, 216, 324, 979, 4010, 3168, 1442, 26, 6783, 7839, 6061, 7926, 6373, 2040, 1995, 8970, 7763, 3849, 3796, 3381, 1656, 7268, 506, 676, 4226, 3220, 1647, 8381, 7196};
    vector<int> amount = {256, 803, 338, 952, 390, 278, 896, 288, 73, 875, 265, 536, 617, 249, 808, 911, 442, 88, 933, 268, 389, 127, 658, 707, 289, 295, 437, 590, 337, 640, 184, 192, 919, 299, 429, 454, 289, 119, 582, 159, 300, 560};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 19302.719184330752;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> range = {4604, 3013, 1555, 2076, 7780, 2582, 7688, 5540, 970, 2675, 3377, 2916, 7808, 6426, 1806, 1581, 8599, 2624, 5555, 6746, 2494, 6934, 868, 9115, 942, 7516, 7633, 8880, 2989, 4097, 1408, 1124, 3815, 1124, 5034, 9393, 2579, 6003, 8919, 163, 7571, 8354, 9219, 4985, 5380, 9163, 270, 7048, 8254, 8773};
    vector<int> amount = {944, 332, 308, 153, 398, 792, 440, 528, 206, 137, 481, 179, 788, 317, 101, 527, 30, 848, 866, 166, 354, 989, 636, 911, 685, 727, 95, 144, 950, 591, 186, 74, 483, 695, 837, 116, 442, 735, 828, 74, 746, 429, 812, 415, 267, 570, 790, 161, 715, 563};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 24571.540217453028;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> range = {923, 1002, 6851, 9140, 840, 5401, 3668, 3412, 4696, 4262, 5076, 1197, 6058, 7612, 4561, 92, 527, 3241, 1574, 5170, 691, 7837, 339, 2189, 4836, 2637, 2932, 8627};
    vector<int> amount = {992, 404, 636, 822, 136, 172, 180, 935, 259, 835, 683, 59, 858, 611, 271, 740, 121, 445, 404, 574, 94, 558, 536, 642, 238, 63, 428, 88};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 12806.654357696745;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> range = {9914, 5876, 9002, 9289, 4932, 9434, 9020, 744, 9770, 2515, 1574, 745, 6511, 4306, 3003, 8815, 2070, 5047, 5363, 6179, 1852, 6180, 4563, 4834, 9827, 1015, 7347, 2630};
    vector<int> amount = {431, 743, 56, 89, 549, 924, 705, 874, 749, 764, 759, 464, 238, 59, 429, 40, 565, 115, 557, 928, 248, 878, 336, 482, 612, 605, 614, 549};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 14365.394673122497;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> range = {2476, 2038, 7579, 8182, 1612, 838, 5687, 4977, 3247, 5164, 403, 8654, 7991, 5477, 9626, 7212, 4593, 860, 113, 1948, 4881, 5735, 4006, 2413, 9105, 6019, 5037, 8025};
    vector<int> amount = {645, 821, 182, 243, 266, 581, 866, 234, 803, 517, 959, 562, 146, 223, 790, 523, 167, 407, 269, 33, 25, 292, 262, 995, 662, 365, 797, 540};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 13181.781818747048;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> range = {6197, 3713, 1766, 5479, 9778, 1078, 4341, 604, 6763, 3280, 1787, 7874};
    vector<int> amount = {641, 872, 933, 498, 360, 546, 291, 595, 269, 579, 2, 375};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 5961.9905953312855;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> range = {9076, 5787, 1463, 4044, 7432, 2094, 5779, 4816, 9384, 338, 6557, 7872, 7052, 4012, 3319, 7798, 1234, 655, 6833};
    vector<int> amount = {104, 27, 111, 608, 695, 971, 262, 861, 342, 983, 883, 790, 86, 710, 93, 348, 644, 286, 482};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 9289.67152643784;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> range = {2701, 7766, 3078, 9293, 8509, 5599, 241, 2877, 5998, 143, 5476, 8716};
    vector<int> amount = {744, 26, 863, 60, 757, 904, 571, 750, 394, 528, 653, 532};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 6789.862969039239;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> range = {4146, 190, 7566, 2277, 7110, 7065, 9980, 5318, 2356, 2152, 2609, 353, 7855, 3993, 7335, 9852, 5503, 721, 5531, 4495, 4554, 1939, 7162, 4479, 9495, 9185, 1550, 8521, 723, 6499, 214, 9216, 9390, 5977, 1115, 7630, 2602, 3445, 4860, 8305, 2729, 5328, 6928, 5862};
    vector<int> amount = {177, 688, 637, 255, 587, 700, 26, 20, 74, 776, 748, 677, 982, 144, 822, 542, 250, 72, 584, 657, 753, 938, 259, 871, 911, 661, 471, 943, 474, 443, 643, 749, 314, 185, 77, 205, 279, 308, 211, 992, 891, 18, 825, 94};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 21953.409837586765;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> range = {4177};
    vector<int> amount = {6741};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 6741.650865595054;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> range = {308, 5649, 4615, 161, 8884, 4936, 9234, 9297, 7355, 1130, 6388, 8955, 53, 2282, 9639, 7197, 5282, 7922, 291, 1945, 8847, 4, 91, 6373, 8565, 1567, 672, 7618, 2869, 4803, 4, 46, 3404, 7585, 2444, 1331, 3001, 2764, 52, 6632, 246, 84, 9674};
    vector<int> amount = {5069, 9025, 2906, 3663, 4853, 7635, 1944, 5515, 6606, 1038, 1828, 7074, 5257, 9488, 6723, 7269, 1936, 7756, 1005, 2844, 9066, 9933, 864, 6220, 7086, 587, 5784, 9171, 1291, 1116, 3166, 3670, 8103, 5645, 9167, 3917, 1590, 8337, 6430, 636, 4462, 7720, 9004};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2426350.136519094;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> range = {4519, 3297, 4500, 4860, 8936, 3254, 1664, 6778, 1344, 6368, 4882, 2536, 1348, 808, 1262, 2963, 8489, 9082, 1180, 8599, 17, 8385, 9377, 6423, 294, 6291};
    vector<int> amount = {2862, 481, 9233, 7623, 6311, 3378, 140, 6873, 6950, 3827, 5065, 6546, 4521, 5104, 8611, 1281, 434, 1680, 3174, 1954, 1487, 1719, 1124, 4304, 1871, 6684};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 105315.70180705865;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> range = {361, 9631, 45, 8758, 4200, 9644, 6320, 2525, 4111, 1833, 2190, 2988, 867, 263, 2687, 1876, 3905, 2314};
    vector<int> amount = {2239, 1314, 4261, 2471, 8678, 3958, 6939, 348, 236, 4654, 7955, 8198, 1051, 4383, 9326, 2095, 4769, 7338};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 82836.21188338264;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> range = {1049, 8647, 1073, 5199, 4210, 4692, 9281, 4213, 3109, 7479, 7753, 7329, 8342, 2671};
    vector<int> amount = {1416, 7619, 8409, 9476, 5758, 8860, 9520, 9999, 2209, 9467, 6221, 6811, 9120, 435};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 95390.99645223154;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> range = {2346, 6821, 4705, 4867, 7160, 6721, 6299, 913, 7708, 5665, 2382, 5543, 2392, 4490, 7909, 7499, 9260, 6842, 227, 2588, 2001, 7445, 8220, 8448, 8708, 3955, 9294, 2762, 1059, 1153, 3490, 6105, 8434, 7810, 5043, 1993, 778, 6433, 7469, 1670, 3663, 7530, 3579, 82, 9126};
    vector<int> amount = {6241, 1388, 9702, 2157, 7033, 1988, 3525, 6169, 1317, 7400, 8201, 747, 8801, 1691, 6040, 4578, 815, 8470, 7483, 3220, 8575, 5287, 1313, 9344, 6771, 6172, 7814, 579, 4527, 5329, 645, 302, 6742, 6438, 8172, 7111, 147, 3813, 9407, 5567, 9253, 6178, 2080, 7781, 4383};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 234479.26432692754;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> range = {8428, 7351, 8013, 1681, 6249, 8016, 7177, 3249, 333, 2963, 2164, 7276, 2918, 2074, 7813, 646, 831, 8814, 380, 847, 9445, 5475, 8626, 4881, 8131, 3003, 5481, 1747, 2234, 7082, 9843, 6289, 4768, 1358, 8852, 7920, 8368, 1446, 4897, 5003, 6272, 2675};
    vector<int> amount = {7715, 7533, 4945, 3546, 8990, 3576, 6719, 185, 1144, 2576, 604, 8670, 8116, 931, 6227, 508, 2131, 3178, 1367, 8759, 300, 9342, 6828, 9493, 3488, 5549, 7577, 7727, 4510, 7645, 8796, 8732, 2564, 1088, 4094, 7040, 9448, 1945, 3001, 208, 6422, 4222};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 207833.963242905;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> range = {3703, 8520, 7646, 5436, 6545, 1965, 9699};
    vector<int> amount = {5480, 5744, 2363, 3887, 7766, 2153, 2724};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 30122.10274087293;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> range = {5384, 6666};
    vector<int> amount = {3059, 9294};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 12353.886369584467;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> range = {586, 9279, 6735, 3877, 1909, 1022, 4609, 4069, 8363, 431, 3025, 222, 429, 5725, 5581, 4441, 1577, 9053, 2433, 1125, 6571, 1386, 2060, 3205, 3431, 9721, 5888, 7686, 917, 792, 9093, 2009, 4162, 7249, 6210, 6654, 3108, 8120, 5918, 6782, 3350, 2513, 870, 6632, 1527, 7116, 5241, 552, 5270};
    vector<int> amount = {870, 5433, 5405, 9849, 6997, 1490, 5706, 6633, 2761, 5131, 9858, 3193, 9470, 7214, 1155, 117, 9281, 7589, 2563, 5654, 52, 6775, 9386, 3081, 9891, 2577, 6066, 2512, 4344, 6457, 1835, 983, 12, 9087, 8722, 9770, 4783, 820, 1970, 1508, 8011, 7119, 6107, 4571, 2340, 4846, 8242, 2795, 4994};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 248007.3836731786;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> range = {8, 6, 3, 10, 9, 0, 6, 2, 10, 8, 7, 0, 0, 0, 4, 4, 8, 0, 1, 1, 4, 2, 2, 10, 4, 5, 5, 10, 0, 0, 3, 5, 0, 1, 10, 0, 1, 1, 9, 1, 5, 2, 8};
    vector<int> amount = {3083, 2499, 2225, 8548, 2880, 1404, 7224, 1974, 474, 70, 1720, 2337, 6937, 2414, 6966, 4311, 3174, 3478, 1210, 8785, 2169, 8219, 595, 2561, 986, 6020, 5914, 3705, 5206, 7190, 6539, 6362, 6644, 8832, 994, 6784, 1305, 1219, 9522, 972, 6905, 7633, 5980};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3428220536582484E9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> range = {0, 0, 0, 5, 7, 4, 10, 5, 0, 4, 3, 4, 10, 9, 4, 3, 7, 3, 0, 4, 10, 8};
    vector<int> amount = {8098, 282, 7140, 5362, 8086, 6199, 5740, 5794, 5474, 2460, 3323, 1497, 2401, 6032, 1230, 1151, 9229, 9167, 5842, 1698, 2379, 4928};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 7.86950303613898E8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> range = {0};
    vector<int> amount = {6713};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5064369E7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> range = {10, 8, 0, 6, 3, 7, 4, 1, 7, 2, 6, 7, 8, 1, 3, 9, 5};
    vector<int> amount = {2017, 7687, 9906, 9595, 2385, 9822, 5115, 504, 4671, 4051, 6492, 2993, 1704, 593, 5178, 6160, 4185};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4042934552031243E8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> range = {1, 8, 4, 7, 0, 10, 7, 2, 9, 9, 3, 8, 2, 10, 7, 6, 3, 2, 9, 3, 7, 4, 9, 3, 5, 5, 10, 8, 5, 7, 4, 7, 8, 4, 5, 4, 6, 6, 9, 4, 9, 7};
    vector<int> amount = {9885, 258, 9778, 5945, 2494, 4685, 8008, 1902, 8201, 6259, 8309, 8786, 1363, 612, 6819, 1423, 9054, 8253, 2144, 5718, 6506, 409, 662, 2558, 110, 1592, 6330, 2302, 1895, 2784, 4138, 1485, 5200, 8305, 7440, 4696, 9747, 2589, 4508, 9876, 8767, 536};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6816899138882643E8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> range = {1, 1, 7, 7, 2, 0, 3, 1, 0, 8, 2, 3, 9, 0, 0, 1, 9, 4, 6, 6, 3, 1, 1, 6, 7, 1, 5, 9};
    vector<int> amount = {2696, 2619, 8713, 7978, 7895, 9270, 3066, 9787, 4365, 6197, 3778, 9929, 1262, 1057, 7218, 7076, 1160, 5664, 1869, 981, 500, 2583, 3981, 3004, 3117, 5426, 7751, 1193};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 9.325367903767642E8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> range = {6, 2, 6, 10, 1, 2, 0, 2, 6, 7, 9, 1, 8, 3, 2, 3, 7, 2, 2, 5, 7, 10, 4, 0, 9, 7, 0, 0, 3, 3, 10, 2, 6, 5, 10, 2, 8, 0, 9, 1, 3, 3};
    vector<int> amount = {2067, 106, 5504, 65, 7079, 1626, 7501, 2233, 1851, 9145, 4589, 4707, 5019, 6101, 9445, 879, 1470, 1995, 9159, 3078, 8102, 7282, 4054, 1055, 505, 3367, 2392, 6648, 5045, 6213, 2588, 1634, 2943, 104, 5390, 1053, 7021, 9602, 9336, 8375, 9829, 9021};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2847994053176103E9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> range = {6, 1, 2, 10, 3, 3, 9, 6, 9, 7, 2, 7, 7, 1, 5, 6, 2, 2, 10, 5};
    vector<int> amount = {5909, 1179, 550, 2956, 9160, 1288, 7562, 2961, 1772, 5402, 1426, 7685, 3243, 4574, 1793, 578, 5351, 9456, 7737, 6478};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 6.102290907161842E7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> range = {8, 7, 10, 10, 4, 4, 0, 10, 1, 9, 7, 5, 2, 6, 7, 0, 0, 6, 5, 2, 8, 10, 0, 9, 10, 1, 5, 2};
    vector<int> amount = {7559, 5222, 6400, 1277, 9973, 8629, 2352, 1643, 2483, 9923, 2607, 661, 2724, 9545, 3714, 1002, 1028, 2289, 6459, 1193, 8335, 7900, 9866, 1933, 2833, 994, 9366, 9763};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2540694524777764E8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> range = {3, 1, 8, 4};
    vector<int> amount = {9111, 3847, 5727, 1100};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 5825755.569038072;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> range = {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1};
    vector<int> amount = {2851, 428, 6660, 1442, 7032, 5112, 2574, 8684, 2145, 7541, 9260, 9504, 9903, 786, 1863, 545, 8196, 694, 5299, 5604, 2999, 6859, 3364, 6860, 234, 2383, 8401, 9350, 8202, 1113, 8825, 4806, 1175, 5609, 323, 9825};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.253191073611111E10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> range = {0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0};
    vector<int> amount = {6684, 1423, 4693, 2820, 8120, 4632, 502, 5138, 1643, 6886, 1245, 6721, 6890, 1745, 328, 427, 8620, 7935, 2772, 3977, 2323, 2795, 8751, 1738, 1502, 6215, 5475, 5515, 2573, 2179, 447, 7588, 2199, 3182, 4056, 8319, 1737, 4187, 8352, 4334, 9792, 5864, 1669, 4493, 3705, 5276, 3630};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2235090822333334E10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> range = {1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0};
    vector<int> amount = {8310, 1233, 2107, 2221, 3371, 1042, 855, 1820, 1295, 6308, 5880, 1093, 4901, 587, 66, 5589, 4072, 1659, 348, 8651, 8090, 2891, 2127, 6892, 2458, 1963, 6794, 2617, 5515, 1735, 4073, 3214};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9202968561111112E9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> range = {0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0};
    vector<int> amount = {8597, 8445, 4689, 7822, 1514, 1485, 3404, 217, 4711, 882, 8142, 2463};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 8.349787396666667E8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> range = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1};
    vector<int> amount = {4572, 6143, 6350, 63, 4593, 7125, 9214, 9351, 7599, 6252, 9427, 2149, 220, 1989, 605, 3578, 7266, 3888, 9770, 396, 2900, 3617};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.140306697E9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> range = {0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1};
    vector<int> amount = {975, 8523, 3043, 5699, 5273, 1730, 8089, 7635, 3156, 403, 2612, 3492, 25, 7420, 3084, 7968, 2265, 95, 1342, 9712, 2476, 6018, 9281, 2012, 2389, 2027, 2843, 3636, 8474, 3402};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0292194792222223E9;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> range = {0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1};
    vector<int> amount = {3087, 900, 8204, 7600, 2331, 132, 2561, 2574, 5560, 2073, 9501, 3192, 1005, 7295, 4154, 1873, 532};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7173503453333335E9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> range = {0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0};
    vector<int> amount = {5349, 3613, 944, 5624, 7130, 4581, 7954, 4290, 6941, 9463, 4328, 8954, 8718, 6485, 3994, 4559, 1091, 6222, 7582, 4075, 2476, 1213, 2976, 952, 1435, 3104, 982, 2372, 6324, 6443, 2900, 5544, 8417, 462, 1646};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4445269919222221E10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> range = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0};
    vector<int> amount = {6288, 9345, 5088, 5642, 8362, 6239, 9314, 5927, 2187, 28, 2752, 489, 3664, 906, 3033, 7748, 3197, 6435, 1391, 770, 1690, 8478, 7212, 7312, 473, 3283, 6793, 826, 1963, 5070, 4525, 5672, 1940, 4601, 7907, 4712, 5340};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 8.727854528444445E9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> range = {0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1};
    vector<int> amount = {7471, 3726, 2701, 800, 3092, 8466, 6104, 592, 2299, 6546, 5300, 8924, 1226};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 9.975578356666666E8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {9343, 4870, 5965, 2079, 3383, 7858, 2154, 3405, 3248, 4032, 6140, 660, 6580, 3932, 9504, 8029, 7654, 5087, 6684, 6442, 8418, 6596};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4899375969E10;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {7376, 9192, 5801, 6538, 3722, 4781, 6688, 7380, 1294, 578, 8606, 5759, 2030, 9951};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 6.351452416E9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {3911, 8928, 7578, 1902, 5274, 1004, 4803, 796, 6598, 4680, 3074, 6282, 6816, 7907, 7445, 699, 2332, 4639, 1070, 412, 6982, 702};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 8.804819556E9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {2306, 1453, 2137, 891, 9025, 4431, 1288, 1009, 3255, 6728, 1705, 2712, 1703, 7919, 5180, 5645, 3988, 8831, 5499, 8610, 1294, 2882, 8490, 1819, 1199, 8481, 5117, 6796, 4581, 4699, 1740, 7378};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9262941681E10;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> range = {0, 0};
    vector<int> amount = {8834, 5166};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.96E8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {5314, 3539, 7814, 2490, 7588, 4262, 1596, 729, 8403, 38, 1770, 4619, 8477, 1524, 3672, 3043, 1613, 2804, 5598, 1581, 3289, 8847, 3106, 7303, 3164, 4021, 9439, 8432, 3382, 3815, 5991, 4671, 7410, 7108, 1897, 2759, 9609, 7939, 4982, 5177, 7046, 7329, 8225, 3547, 9113};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0209605625E10;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {4779, 6832, 7090, 1302, 3981, 8339, 531, 1488, 4110, 5873, 2690, 8077, 8147, 1628, 869, 1619};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.536696025E9;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {9209, 1989, 9193, 9351, 5995, 1033, 1649, 9844, 5976, 5428, 9463, 2151, 2960, 3944, 9194, 2066, 3823, 2334, 9290};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1002331664E10;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> range = {0, 0};
    vector<int> amount = {1717, 1104};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 7958041.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {5668, 2548, 202, 107, 9403, 5870, 3470, 774, 5013, 388, 6111, 1225, 1327, 5904, 2400, 1384, 9645, 789, 9558, 3252, 1053, 5206, 3212, 1388, 4384, 261, 8086, 1095, 8935, 9470, 1333, 8048, 3723, 9556, 6763, 7569};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2.40622144E10;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.849E11;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 8.1E9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.84E10;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.41E10;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.681E11;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 6.76E10;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.369E11;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.96E10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.681E11;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2.209E11;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> range = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5E11;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> range = {69, 31, 43, 53, 10, 19, 42, 62, 19, 34, 89, 9, 14, 88, 69, 80, 65, 83, 3, 77, 17, 64, 33, 63, 84, 63, 28, 50, 58, 22, 0, 7, 13, 11, 57, 27, 27, 99, 85, 79, 93, 15, 51, 8, 42, 49, 66, 71, 34, 16};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5172572627147523E8;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> range = {9, 88, 20, 11, 73, 66, 52, 3, 19, 82, 20, 63, 56, 22, 61, 36, 13, 15, 46, 88, 8, 86, 93, 68, 13, 95, 37, 80, 93, 83, 95, 58, 41, 91, 31, 8, 49, 80, 98, 90, 26, 18, 86, 67, 12, 68, 9, 37, 8, 93};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.704631659887769E7;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> range = {65, 79, 51, 52, 35, 70, 27, 72, 11, 72, 42, 58, 3, 97, 99, 12, 0, 58, 68, 47, 14, 43, 57, 92, 34, 83, 10, 14, 40, 87, 45, 67, 85, 59, 80, 64, 19, 80, 58, 45, 15, 35, 68, 25, 4, 56, 96, 42, 50, 63};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4088891886903134E8;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> range = {26, 97, 75, 50, 97, 9, 17, 87, 86, 49, 28, 33, 8, 10, 78, 37, 93, 21, 68, 55, 9, 49, 99, 73, 87, 93, 60, 40, 20, 68, 0, 8, 20, 69, 15, 12, 77, 69, 19, 10, 3, 35, 27, 32, 93, 94, 20, 13, 50, 41};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5795788726162633E8;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> range = {56, 34, 36, 51, 85, 79, 43, 20, 56, 20, 5, 48, 79, 39, 36, 23, 16, 69, 70, 40, 63, 73, 53, 89, 14, 76, 9, 60, 54, 10, 1, 91, 9, 23, 35, 85, 98, 5, 9, 48, 60, 13, 97, 1, 51, 92, 29, 98, 51, 64};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 9.542546903118032E7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> range = {62, 55, 78, 24, 88, 80, 52, 0, 71, 74, 98, 44, 64, 51, 8, 6, 47, 50, 66, 58, 19, 31, 64, 74, 55, 15, 48, 94, 40, 52, 76, 86, 19, 80, 93, 98, 24, 19, 59, 17, 43, 41, 34, 20, 78, 84, 21, 9, 95, 10};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3224760570835944E8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> range = {52, 71, 4, 43, 43, 68, 80, 6, 37, 62, 79, 88, 35, 95, 17, 45, 38, 23, 38, 1, 69, 74, 34, 30, 15, 34, 84, 4, 67, 93, 8, 97, 26, 31, 17, 3, 27, 31, 19, 26, 60, 4, 77, 94, 23, 94, 74, 12, 49, 16};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 8.955809370159775E7;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> range = {34, 8, 40, 64, 95, 71, 0, 5, 45, 74, 56, 0, 97, 71, 90, 87, 12, 15, 30, 6, 96, 91, 59, 83, 67, 6, 25, 55, 92, 11, 68, 21, 42, 99, 78, 82, 58, 34, 83, 10, 89, 2, 42, 74, 82, 96, 17, 42, 36, 30};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7314290544726866E8;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> range = {89, 14, 83, 17, 43, 91, 40, 76, 46, 31, 46, 37, 1, 69, 60, 50, 48, 37, 32, 14, 26, 84, 36, 17, 42, 35, 95, 65, 19, 25, 30, 50, 91, 46, 93, 21, 63, 73, 12, 4, 4, 10, 25, 81, 94, 85, 7, 21, 97, 73};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 5.914906803013157E7;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> range = {4, 11, 31, 52, 39, 57, 88, 42, 17, 4, 7, 20, 29, 26, 14, 35, 53, 45, 5, 1, 99, 7, 43, 23, 96, 5, 61, 80, 68, 52, 95, 77, 38, 84, 0, 98, 41, 83, 99, 31, 99, 70, 35, 2, 97, 54, 84, 20, 99, 70};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3718790825524017E8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> range = {9967, 9441, 9008, 9911, 9940, 9583, 9672, 9084, 9767, 9237, 9031, 9789, 9347, 9624, 9616, 9149, 9184, 9115, 9015, 9487, 9965, 9065, 9542, 9466, 9602, 9089, 9580, 9270, 9557, 9645, 9482, 9356, 9250, 9934, 9454, 9531, 9020, 9509, 9006, 9144, 9473, 9378, 9055, 9588, 9165, 9558, 9145, 9938, 9771, 9957};
    vector<int> amount = {9142, 9306, 9040, 9277, 9807, 9178, 9155, 9955, 9155, 9834, 9042, 9387, 9350, 9342, 9817, 9476, 9783, 9471, 9818, 9882, 9440, 9782, 9815, 9296, 9124, 9186, 9437, 9120, 9530, 9830, 9486, 9818, 9657, 9642, 9346, 9703, 9810, 9158, 9908, 9270, 9155, 9841, 9721, 9794, 9447, 9071, 9396, 9048, 9287, 9038};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 473979.83440440515;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> range = {6415, 9069, 2219, 6755, 9008, 2528, 6420, 7065, 8319, 8487, 6870, 9927, 2434, 5451, 9869, 404, 8346, 5199, 7901, 9035, 6026, 418, 7369, 6542, 9932, 1006, 9531, 4934, 7844, 6819, 7418, 1376, 3149, 2837, 4817, 7652, 9468, 9941, 8192, 8552, 5872, 795, 8786, 7100, 6833, 5694, 102, 3202, 3541, 7654};
    vector<int> amount = {5458, 4955, 2239, 9526, 1370, 8671, 819, 8422, 5156, 4475, 7111, 4419, 9325, 9232, 969, 1106, 1089, 7511, 7584, 5338, 2625, 4328, 1282, 2320, 6627, 462, 7469, 24, 2079, 2310, 5363, 3861, 7230, 3433, 5691, 8511, 284, 4209, 5604, 8881, 3458, 9368, 7752, 6244, 2755, 533, 1656, 8807, 4030, 2392};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 234933.72299496393;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> range = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> amount = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2524782598982143E8;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> range = {5, 10, 15};
    vector<int> amount = {10000, 10000, 10000};
    MagicBlizzard* pObj = new MagicBlizzard();
    clock_t start = clock();
    double result = pObj->expectation(range, amount);
    clock_t end = clock();
    delete pObj;
    double expected = 2056894.0268063205;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22641901&rd=14762&pm=11690
********************************************************************************
#line 4 "MagicBlizzard.cpp"
#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
class MagicBlizzard {
  public:
  double expectation(vector <int> r, vector <int> a) {
    double res=0;
    int n=r.size();
    for (int i=0;i<n;++i)
      res+=(double)a[i];
    for (int i=0;i<n;++i)
      res+=(double)a[i]*(double)(a[i]-1)/(double)(r[i]*2+1)/(double)(r[i]*2+1);
    for (int i=0;i<n;++i)
      for (int j=0;j<n;++j)
        if (i!=j)
          res+=(double)a[i]*(double)a[j]/(double)(max(r[i],r[j])*2+1)/(double)(2*max(r[i],r[j])+1);
    return res;
  }
  
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/