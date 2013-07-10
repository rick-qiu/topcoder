/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12508
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

class TheExperimentDiv2 {
public:
    vector<int> determineHumidity(vector<int> intensity, int L, vector<int> leftEnd);
};

vector<int> TheExperimentDiv2::determineHumidity(vector<int> intensity, int L, vector<int> leftEnd) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> intensity = {3, 4, 1, 1, 5, 6};
    int L = 3;
    vector<int> leftEnd = {3, 1, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 5, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> intensity = {5, 5};
    int L = 2;
    vector<int> leftEnd = {0, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> intensity = {92, 11, 1000, 14, 3};
    int L = 2;
    vector<int> leftEnd = {0, 3};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {103, 17};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> intensity = {2, 6, 15, 10, 8, 11, 99, 2, 4, 4, 4, 13};
    int L = 4;
    vector<int> leftEnd = {1, 7, 4, 5, 8, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 14, 110, 0, 13, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> intensity = {1};
    int L = 1;
    vector<int> leftEnd = {0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> intensity = {854, 932, 791, 533, 38, 824, 935, 905, 171, 319, 502, 957, 485};
    int L = 13;
    vector<int> leftEnd = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> intensity = {754, 775, 846, 680, 387, 956, 413, 397, 546, 592, 235, 289, 422, 591, 623, 309};
    int L = 13;
    vector<int> leftEnd = {0, 3, 0, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7292, 1523, 0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> intensity = {42, 437, 166, 669, 598, 365, 994};
    int L = 5;
    vector<int> leftEnd = {1, 1, 0, 0, 1, 2, 2, 1, 2, 0, 2, 2, 2, 0, 1, 1, 1, 2, 2, 1, 2, 0, 2, 0, 1, 1, 1, 2, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2235, 0, 42, 0, 0, 994, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> intensity = {331, 204, 122, 570, 174, 441, 850, 805, 508, 883, 670, 242, 226, 539, 683, 112, 862, 844, 730, 521, 113, 830, 880, 79, 417, 364, 326, 779, 776, 235, 730, 691, 747, 121, 515, 222, 89, 786, 576, 453, 90};
    int L = 29;
    vector<int> leftEnd = {2, 7, 12, 5, 9, 7, 2, 10, 6};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15311, 2296, 1994, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> intensity = {327, 10, 120};
    int L = 1;
    vector<int> leftEnd = {2, 0, 0, 0, 0, 1, 2, 2, 0, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {120, 327, 0, 0, 0, 10, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> intensity = {217, 565, 172, 834, 624, 16};
    int L = 4;
    vector<int> leftEnd = {1, 0, 1, 1, 2, 2, 2, 0, 1};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2195, 217, 0, 0, 16, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> intensity = {45, 892, 804, 884, 45, 255, 92, 913, 184, 393, 865, 411, 774, 873, 504, 539};
    int L = 10;
    vector<int> leftEnd = {0, 4, 6, 2, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4507, 2923, 1043, 0, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> intensity = {921, 970, 187, 170, 825, 823, 23, 462, 497, 744, 109, 97, 149, 666, 879, 639, 632, 597, 73, 229, 37, 648, 918, 694, 428, 46, 79, 99, 198, 318, 148, 104, 659, 731, 353, 151, 380, 871, 186, 670, 240, 896};
    int L = 2;
    vector<int> leftEnd = {39, 13, 26, 1, 17, 26, 11, 1, 38, 2, 17, 40, 11, 37, 19, 2, 10, 31, 10, 0, 40, 37, 10, 28, 22, 23, 33, 30, 3, 7, 12, 13, 10, 5, 22, 26, 8, 19, 10, 3, 38, 36, 40, 36, 23, 27, 17, 11, 36, 5};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {910, 1545, 178, 1157, 670, 0, 246, 0, 186, 170, 0, 896, 0, 871, 266, 0, 109, 763, 0, 921, 0, 0, 0, 516, 1612, 428, 1084, 148, 825, 959, 0, 0, 0, 846, 0, 0, 744, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> intensity = {9, 600, 651, 454, 910, 703, 726, 372};
    int L = 5;
    vector<int> leftEnd = {0, 2, 0, 1, 0, 2, 1, 2, 3, 1, 0, 2, 0, 0, 2, 0, 0, 1, 2, 2, 1, 2, 3, 0, 1, 1, 1, 0, 2, 0, 2, 2, 2, 2, 1};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2624, 1429, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> intensity = {83, 432, 988, 285, 694, 809, 821, 922, 29, 971};
    int L = 4;
    vector<int> leftEnd = {2, 6, 1, 5, 0, 0, 4, 6, 1, 0, 4, 1, 5, 1, 5, 3, 2, 5, 6, 6, 4, 5, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2776, 2743, 432, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> intensity = {910, 140, 984, 28, 807, 32, 570, 829, 332, 80, 933, 829, 190, 724, 471, 919, 550, 74, 472, 84, 611, 356, 612, 731};
    int L = 23;
    vector<int> leftEnd = {1, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11358, 910};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> intensity = {334, 861, 869, 416, 947, 218, 431, 75, 437, 374, 567, 97, 972, 498, 657, 690, 384, 989, 617, 256, 524};
    int L = 15;
    vector<int> leftEnd = {4, 6, 2, 0, 2, 5, 3, 6, 6, 2, 3, 5, 5, 2, 5, 2, 4, 5, 3, 1, 4, 3, 0, 2, 2, 4, 1};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7953, 780, 1285, 1195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> intensity = {68, 982, 748, 795, 783, 169, 674, 200, 125, 782, 639, 236, 238, 976, 667, 158, 389, 46, 720, 580, 785, 424, 105, 93};
    int L = 15;
    vector<int> leftEnd = {3, 7, 9};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6877, 2509, 198};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> intensity = {913, 385, 69, 789, 407, 329, 998, 855, 691, 973, 180, 824, 578, 245, 402, 23, 416, 234, 623, 314, 266, 692, 769, 487, 907, 656, 904, 262, 666, 579, 809, 851, 870, 784, 852, 659, 880, 86, 794, 419, 249, 164, 839, 25, 544, 632};
    int L = 16;
    vector<int> leftEnd = {11, 23, 24, 19, 23, 2, 20, 10, 22, 25, 14, 24, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8340, 8092, 419, 0, 0, 5291, 0, 0, 0, 249, 0, 0, 1298};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> intensity = {189, 915, 40, 344, 778, 345, 114, 602, 188, 466, 781, 955, 349, 959, 409, 685, 210};
    int L = 6;
    vector<int> leftEnd = {10, 6, 8, 0, 2, 6, 10, 4, 1, 4, 7};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4138, 1370, 0, 2611, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> intensity = {70, 898, 115, 528, 333, 553, 849, 624, 6, 142, 609, 323, 311, 104, 825, 186, 972, 323, 383, 685, 650, 626, 692, 703, 589, 27, 877, 760};
    int L = 17;
    vector<int> leftEnd = {2, 8, 1, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7186, 3945, 898, 0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> intensity = {981, 644, 577, 815, 917, 566, 754, 826, 973, 151, 273, 33, 297, 124, 547, 549, 852, 775, 581, 263, 148, 630, 614, 589, 163, 920, 360, 73, 993, 302};
    int L = 15;
    vector<int> leftEnd = {2, 8, 0, 6, 15, 1, 15, 15, 11, 11, 14, 15, 14, 9, 15, 6, 5, 14, 8, 3, 6, 13, 0, 12, 10, 1, 4, 10, 2, 12, 3, 12, 0, 12, 9, 8, 14, 1, 10, 11, 9, 0, 11, 9, 5, 4, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8254, 3011, 1625, 0, 3400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> intensity = {93, 899, 961, 600, 234, 334, 567, 23, 797, 114, 774, 364, 974, 113, 374, 81, 267, 123, 236, 726, 666, 991, 768, 697, 691, 64, 785, 537};
    int L = 27;
    vector<int> leftEnd = {0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13316, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> intensity = {359, 63, 477, 306, 422, 334, 912, 861};
    int L = 1;
    vector<int> leftEnd = {2, 4, 7, 6, 0, 3, 1, 5, 1, 4, 0, 7, 6, 6, 0, 5, 3, 2, 0, 1, 2, 3, 7, 1, 6, 0, 6, 2, 0, 3, 5, 4, 6, 5, 2, 1, 7, 7, 3, 4, 2, 3, 6, 7, 2, 4};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {477, 422, 861, 912, 359, 306, 63, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> intensity = {495, 879, 588, 618, 996, 951, 47, 295, 90, 283, 80, 555, 114};
    int L = 12;
    vector<int> leftEnd = {0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5877, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> intensity = {202, 988, 517, 893, 416};
    int L = 5;
    vector<int> leftEnd = {0, 0, 0, 0, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3016, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> intensity = {177, 773, 286, 232};
    int L = 4;
    vector<int> leftEnd = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> intensity = {515, 398, 509, 944, 610, 896, 304, 59, 592, 743};
    int L = 8;
    vector<int> leftEnd = {2, 1, 2, 1, 0, 2, 0, 0, 1, 0, 0, 2, 2, 1, 2, 2, 0, 0, 0, 0, 2, 1, 1, 2, 2, 2, 0, 0, 0, 2, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4657, 398, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> intensity = {326, 519, 339, 925, 687, 334, 223, 213, 979, 704, 665, 366, 472, 771};
    int L = 2;
    vector<int> leftEnd = {1, 9, 1, 7, 2, 12};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858, 1369, 0, 1192, 925, 1243};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> intensity = {640, 536, 241, 496, 618, 112, 406, 104, 835, 175, 97};
    int L = 7;
    vector<int> leftEnd = {0, 1, 2, 1, 1, 0, 3, 4, 1, 2, 4, 1, 2, 3, 1, 1, 4, 4, 0, 4, 1, 3, 3, 2, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3049, 104, 835, 0, 0, 0, 175, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> intensity = {298};
    int L = 1;
    vector<int> leftEnd = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> intensity = {461, 262, 884, 184, 512, 388, 765, 755, 58, 855, 518, 878, 944, 105, 416};
    int L = 13;
    vector<int> leftEnd = {2, 1, 2, 0, 2, 0, 2, 0, 2, 0, 0, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7262, 262, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> intensity = {859, 315, 579, 149};
    int L = 1;
    vector<int> leftEnd = {1, 0, 3, 3, 2, 0, 1};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {315, 859, 149, 0, 579, 0, 0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> intensity = {261, 20, 123, 558, 125, 805, 591, 129, 757, 696, 460, 702, 467};
    int L = 11;
    vector<int> leftEnd = {2, 2, 1, 0, 2, 2, 1, 0, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 0, 2, 0, 2, 2, 2, 1, 2, 0, 0, 1, 1, 0, 0, 1, 2, 0, 1};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5413, 0, 20, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> intensity = {826, 875, 691, 113, 10, 657, 173, 216, 460, 937, 621, 800, 34, 887, 653, 58, 729, 639, 390, 722};
    int L = 12;
    vector<int> leftEnd = {8, 4, 3, 7, 0, 8, 6, 6, 4, 4};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6930, 1056, 113, 0, 2392, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> intensity = {694, 312, 474, 509, 228, 836, 540, 883, 331, 277, 312, 579, 664, 648, 37, 35, 231, 848, 375, 358, 426, 999, 895, 367, 158, 942, 471, 374, 17, 955, 378, 770, 768, 994, 20, 750, 551, 177, 663, 339, 297, 822, 476, 446, 782, 69, 461, 823, 678, 995};
    int L = 50;
    vector<int> leftEnd = {0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26034};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> intensity = {216, 522, 197, 691, 99, 914, 250, 970, 145, 79, 685, 6, 553, 278, 642, 590, 671, 538, 831, 241, 872, 73, 259, 685, 351, 955, 431, 398, 504, 611, 104, 259, 816, 105, 423, 278, 658, 929, 690, 227, 996, 197, 52, 752, 750, 733, 121, 204, 516, 526};
    int L = 1;
    vector<int> leftEnd = {49, 18, 20, 27, 38, 38, 31, 34, 2, 45, 12, 21, 13, 23, 36, 33, 17, 14, 20, 21, 9, 31, 27, 16, 48, 13, 4, 31, 44, 15, 34, 37, 44, 26, 5, 33, 13, 35, 16, 18, 26, 16, 42, 44, 10, 4, 42, 24, 4, 22};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {526, 831, 872, 398, 690, 0, 259, 423, 197, 733, 553, 73, 278, 685, 658, 105, 538, 642, 0, 0, 79, 0, 0, 671, 516, 0, 99, 0, 750, 590, 0, 929, 0, 431, 914, 0, 0, 278, 0, 0, 0, 0, 52, 0, 685, 0, 0, 351, 0, 259};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> intensity = {344, 349, 986, 497, 665, 709, 782, 201, 746, 442, 561, 400, 612, 551, 666, 407, 358, 142, 908, 565, 487, 1000, 61, 816, 390, 141, 908, 464, 598, 801, 882, 203, 606, 949, 743, 440, 877, 865, 231, 265, 70, 784, 299, 145, 713, 911, 365, 593, 261, 302};
    int L = 2;
    vector<int> leftEnd = {28, 47, 14, 27, 23, 0, 8, 38, 28, 10, 31, 15, 2, 44, 35, 21, 30, 32, 6, 19, 12, 16, 8, 6, 32, 10, 26, 38, 38, 0, 4, 12, 42, 20, 26, 31, 6, 35, 13, 42, 46, 36, 24, 25, 45, 4, 1, 42, 8, 6};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1399, 854, 1073, 464, 1206, 693, 1188, 496, 0, 961, 809, 358, 1483, 1624, 1317, 1061, 882, 949, 983, 1052, 1163, 142, 0, 0, 0, 0, 908, 0, 0, 0, 1374, 0, 444, 0, 0, 0, 0, 0, 0, 0, 365, 865, 141, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> intensity = {844, 524, 388, 219, 502, 217, 349, 956, 352, 938, 680, 760, 293, 957, 861, 328, 530, 251, 297, 69, 717, 183, 500, 955, 933, 109, 728, 352, 390, 472, 231, 65, 995, 118, 621, 294, 763, 616, 501, 101, 611, 349, 171, 311, 217, 27, 172, 428, 524, 44};
    int L = 6;
    vector<int> leftEnd = {14, 40, 36, 43, 41, 9, 34, 24, 3, 31, 14, 3, 4, 11, 19, 12, 14};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2336, 1686, 1981, 1124, 0, 3628, 915, 2984, 2595, 1178, 0, 0, 0, 0, 2355, 0, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> intensity = {817, 373, 74, 124, 510, 566, 807, 924, 456, 544, 208, 68, 491, 770, 503, 127, 394, 59, 71, 792, 719, 541, 568, 900, 108, 278, 278, 687, 871, 752, 783, 846, 6, 432, 575, 171, 646, 342, 553, 990, 125, 873, 693, 98, 466, 99, 319, 649, 111, 484};
    int L = 9;
    vector<int> leftEnd = {10, 6, 8, 17, 26, 6, 9, 10, 10, 37, 1, 18, 28, 36, 41};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2691, 2731, 0, 3906, 5230, 0, 0, 0, 0, 4239, 1647, 0, 817, 0, 1563};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> intensity = {255, 571, 202, 156, 243, 849, 301, 205, 932, 385, 898, 580, 219, 401, 742, 1, 413, 28, 662, 8, 451, 275, 870, 387, 242, 924, 861, 216, 57, 741, 655, 596, 85, 328, 32, 833, 101, 697, 437, 954, 715, 340, 428, 962, 777, 177, 932, 156, 390, 269};
    int L = 9;
    vector<int> leftEnd = {7, 15, 24, 31, 9, 8, 18, 41, 35, 9, 17, 41};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4363, 3094, 4377, 3382, 0, 0, 0, 4431, 715, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> intensity = {518, 817, 108, 433, 585, 708, 713, 994, 723, 191, 770, 524, 542, 589, 14, 648, 70, 481, 591, 796, 273, 202, 36, 145, 206, 388, 537, 551, 525, 722, 753, 102, 436, 206, 894, 195, 722, 935, 674, 255, 188, 347, 475, 302, 714, 358, 323, 571, 116, 631};
    int L = 8;
    vector<int> leftEnd = {13, 8, 18, 14, 31, 31, 12, 30, 27, 16, 17, 4};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3462, 2750, 977, 0, 4164, 0, 0, 753, 1798, 0, 0, 3000};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> intensity = {63, 76, 556, 534, 733, 288, 384, 278, 654, 895, 662, 895, 230, 819, 630, 228, 756, 988, 207, 934, 837, 194, 824, 26, 547, 848, 855, 335, 818, 570, 202, 867, 452, 386, 610, 53, 582, 943, 517, 470, 621, 794, 569, 529, 503, 280, 472, 920, 500, 966};
    int L = 6;
    vector<int> leftEnd = {17, 1, 40, 37, 27, 31, 8, 36, 10, 44, 22, 18, 24, 28, 7, 24, 7, 39};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3984, 2571, 3296, 1930, 3244, 1631, 4155, 0, 858, 2858, 2276, 0, 0, 0, 278, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> intensity = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int L = 50;
    vector<int> leftEnd = {0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50000};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> intensity = {92, 11, 1000, 14, 3};
    int L = 2;
    vector<int> leftEnd = {0, 3};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {103, 17};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> intensity = {2, 6, 15, 10, 8, 11, 99, 2, 4, 4, 4, 13};
    int L = 4;
    vector<int> leftEnd = {1, 7, 4, 5, 8, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 14, 110, 0, 13, 2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> intensity = {21, 25, 24, 35, 37, 26, 28, 48, 9, 7, 21, 19, 35, 12, 26, 28, 14, 18, 46, 2, 25, 32, 31, 48, 15, 22, 29, 7, 8, 13, 16, 15, 13, 44, 26, 11, 12, 48, 35, 42, 26, 6, 35, 37, 32, 3, 28, 45, 19, 50};
    int L = 5;
    vector<int> leftEnd = {0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {142, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> intensity = {10, 10, 1, 2, 1, 4};
    int L = 1;
    vector<int> leftEnd = {0, 2, 3};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 2};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> intensity = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int L = 2;
    vector<int> leftEnd = {2, 5, 2};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> intensity = {1, 1};
    int L = 1;
    vector<int> leftEnd = {0, 1, 0};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> intensity = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int L = 1;
    vector<int> leftEnd = {8};
    TheExperimentDiv2* pObj = new TheExperimentDiv2();
    clock_t start = clock();
    vector<int> result = pObj->determineHumidity(intensity, L, leftEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23114645&rd=15496&pm=12508
********************************************************************************
#line 71 "TheExperimentDiv2.cpp" 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <queue> 
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
#include <cstring> 
 
using namespace std; 
 
/* User defined Data Types */ 
typedef vector<int>              vi; 
typedef vector<vector<int> >     vvi; 
typedef pair<int,int>            ii; 
typedef long long                ll; 
typedef vector<pair<int,int> >   vii; 
typedef vector<string>           vs; 
 
/* User defined Macros */ 
#define FOR(i,a,b)               for(int i = a; i < b; i++) 
#define FORD(i,a,b)              for(int i = (a)-1, min_ = (b); i >= min_; --i) 
#define REP(i,n)                 for(int i = 0; i < n; i++) 
#define REPD(i,n)                for(int i = (n)-1; i >= 0; --i) 
#define pb                       push_back 
#define all(x)                   x.begin(), x.end() 
#define sz(a)                    int((a).size()) 
#define SORT(c)                  sort(c.begin(), c.end()) 
#define RSORT(c)                 sort(c.rbegin(), c.rend()) 
#define REVERSE(c)             reverse(c.begin(), c.end()) 
 
#define tr(c,i)                  for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x)             ((c).find(x) != (c).end()) 
#define cpresent(c,x)            (find(c.begin(), c.end(), x) != (c).end()) 
#define DREP(a)                  sort(a.begin(), a.end()); a.erase(unique(a.begin(),a.end()), a.end()) 
#define INDEX(arr,ind)           (lower_bound(arr.begin(), arr.end(), ind) - arr.begin()) 
#define FILL(x,v)                memset(x, v, sizeof(x)); 
 
#define INF                      (int)1e9 
#define LINF                     (long long)1e18 
#define EPS                      1e-9 
#define PI                       3.1415926535897932384626433832795 
 
#define bitcount                 __builtin_popcount 
#define bitcountl                __builtin_popcountl 
#define bitcountll               __builtin_popcountll 
 
#define mp                       make_pair 
#define FF                       first 
#define SS                       second 
#define tri(a,b,c)               make_pair(a, make_pair(b, c)) 
#define XX                       first 
#define YY                       second.first 
#define ZZ                       second.second 
 
/* Useful functions */ 
int GCD ( int a, int b ) { return b != 0 ? GCD(b, a % b) : a; } 
int LCM ( int a, int b ) { return a * (b / GCD(a, b)); } 
template <class _T> inline string to_string(const _T& a) { ostringstream os(""); os << a; return os.str(); } 
 
class TheExperimentDiv2 
 { 
public: 
    vector <int> determineHumidity(vector <int> intensity, int L, vector <int> leftEnd) 
  { 
      int I = sz(intensity); 
      int M = sz(leftEnd); 
      vi ans(M, 0); 
        vi used(I, 0); 
 
      REP(i, M) 
        { 
            REP(j, I) 
            { 
                if (used[j]) 
                    continue; 
                double pos = j == 0 ? 0.5 : j + 0.5; 
                if (((double)(leftEnd[i])) <= pos && ((double)(leftEnd[i]+ L)) >= pos) 
                    ans[i] += intensity[j], used[j] = 1; 
            } 
        } 
        return ans; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by TesterDream 1.2.4 by fushar (December 19 2012)
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/