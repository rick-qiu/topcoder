/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9887
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

class PickingUp {
public:
    vector<int> fairPickingUp(vector<long> score1, vector<long> score2);
};

vector<int> PickingUp::fairPickingUp(vector<long> score1, vector<long> score2) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<long> score1 = {1, 2, 1, 2};
    vector<long> score2 = {2, 1, 2, 1};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<long> score1 = {5, 9};
    vector<long> score2 = {8, 6};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<long> score1 = {2, 3, 4, 7};
    vector<long> score2 = {2, 4, 5, 8};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<long> score1 = {1, 5, 6, 8};
    vector<long> score2 = {7, 5, 3, 1};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<long> score1 = {300, 300, 300, 300};
    vector<long> score2 = {600, 10, 10, 10};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<long> score1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    vector<long> score2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<long> score1 = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<long> score2 = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<long> score1 = {14, 15, 83, 34, 62, 14};
    vector<long> score2 = {25, 13, 74, 42, 57, 11};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<long> score1 = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<long> score2 = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<long> score1 = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 1000, 1000};
    vector<long> score2 = {998, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 995, 1000, 1000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<long> score1 = {817, 914, 823, 885, 807, 865, 814, 908, 951, 979, 838, 973, 910, 941, 837, 874, 860, 974, 828, 864, 989, 832, 833, 971, 818, 870, 938, 877, 933, 865, 871, 998, 978, 942, 931, 833};
    vector<long> score2 = {971, 827, 979, 881, 816, 863, 802, 876, 885, 830, 987, 874, 909, 820, 844, 927, 938, 830, 804, 919, 895, 875, 916, 873, 864, 895, 954, 871, 887, 943, 876, 905, 818, 855, 986, 833};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<long> score1 = {821, 912, 836, 972, 959, 850, 807, 900, 966, 836, 876, 886, 813, 944, 857, 909, 973, 835, 941, 864, 968, 849, 963, 972, 925, 993, 926, 879, 942, 805, 971, 963, 965, 807, 982, 972};
    vector<long> score2 = {824, 996, 957, 837, 987, 862, 994, 960, 896, 982, 872, 912, 831, 883, 883, 804, 876, 857, 930, 817, 910, 901, 828, 875, 956, 810, 895, 861, 846, 814, 931, 918, 858, 936, 803, 893};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<long> score1 = {84, 78, 94, 87, 50, 63, 91, 64, 41, 73, 12, 68, 863, 24, 36, 3, 59, 68, 57, 43, 74, 20, 38, 25, 71, 27, 26, 28, 6, 30, 58, 96, 46, 68, 65, 51};
    vector<long> score2 = {809, 179, 585, 652, 400, 61, 369, 13, 587, 540, 571, 379, 602, 903, 493, 757, 281, 442, 690, 620, 730, 118, 772, 676, 928, 857, 872, 830, 20, 369, 716, 150, 724, 246, 452, 556};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<long> score1 = {89, 29, 51, 1, 65, 15, 57, 92, 66, 37, 52, 29, 8, 22, 96, 38, 94, 29, 12, 30, 5, 64, 18, 97, 184, 91, 73, 506, 40, 87, 83, 65, 8, 5, 12, 29};
    vector<long> score2 = {344, 569, 423, 811, 802, 731, 306, 737, 627, 466, 417, 259, 638, 625, 37, 900, 551, 72, 132, 931, 895, 164, 96, 467, 341, 685, 543, 108, 757, 419, 413, 173, 10, 211, 588, 302};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<long> score1 = {73, 56, 100, 5, 668, 6, 985, 225, 23, 97, 31, 93, 626, 86, 43, 99, 525, 91, 82, 37, 56, 5, 70, 256, 61, 62, 27, 45, 3, 85, 43, 29, 73, 59, 37, 54};
    vector<long> score2 = {304, 134, 891, 568, 369, 501, 789, 250, 304, 364, 254, 687, 153, 976, 158, 437, 415, 461, 29, 51, 557, 795, 700, 40, 429, 501, 216, 505, 50, 286, 344, 178, 239, 950, 368, 293};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<long> score1 = {44, 683, 41, 70, 33, 118, 24, 82, 91, 97, 78, 91, 25, 15, 6, 13, 1, 27, 17, 79, 648, 71, 81, 94, 28, 90, 56, 21, 88, 39, 71, 57, 850, 38, 60, 19};
    vector<long> score2 = {784, 459, 638, 484, 479, 315, 730, 460, 439, 389, 234, 682, 359, 700, 840, 364, 795, 848, 463, 391, 792, 116, 158, 492, 952, 22, 3, 140, 405, 581, 22, 863, 380, 686, 905, 484};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<long> score1 = {60, 45, 12, 51, 61, 6, 50, 12, 35, 76, 15, 69, 19, 83, 83, 31, 75, 94, 54, 75, 14, 78, 76, 733, 95, 47, 11, 18, 64, 91, 31, 72, 34, 90, 5, 869};
    vector<long> score2 = {504, 7, 640, 121, 227, 678, 982, 561, 956, 985, 428, 41, 73, 831, 348, 31, 715, 523, 925, 436, 205, 444, 487, 279, 263, 684, 849, 325, 123, 336, 458, 748, 777, 219, 704, 934};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<long> score1 = {60, 7, 21, 9, 99, 77, 16, 72, 60, 11, 25, 379, 10, 82, 39, 27, 48, 88, 33, 82, 51, 91, 51, 14, 88, 97, 5, 93, 98, 35, 7, 58, 96, 63, 84, 55};
    vector<long> score2 = {310, 933, 22, 564, 683, 686, 286, 529, 526, 137, 619, 338, 583, 311, 889, 816, 438, 9, 784, 658, 828, 270, 652, 911, 640, 889, 394, 891, 200, 932, 778, 658, 953, 642, 369, 185};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<long> score1 = {77, 67, 55, 9, 79, 56, 75, 1, 98, 13, 83, 94, 40, 22, 86, 55, 63, 42, 663, 83, 18, 74, 7, 988, 342, 71, 66, 70, 62, 52, 1, 39, 65, 33, 5, 80};
    vector<long> score2 = {413, 970, 171, 845, 650, 466, 327, 290, 632, 265, 549, 878, 834, 950, 156, 469, 961, 824, 172, 678, 246, 762, 324, 101, 76, 43, 660, 290, 470, 552, 384, 134, 305, 982, 667, 968};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<long> score1 = {93, 3, 32, 75, 19, 84, 88, 42, 27, 81, 86, 30, 60, 61, 25, 81, 481, 27, 709, 24, 58, 221, 614, 92, 71, 68, 744, 96, 25, 55, 70, 374, 31, 64, 80, 50};
    vector<long> score2 = {352, 465, 331, 516, 916, 882, 743, 245, 140, 64, 354, 270, 405, 800, 820, 436, 854, 451, 803, 563, 611, 961, 912, 830, 817, 822, 606, 580, 529, 448, 46, 788, 552, 387, 427, 795};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<long> score1 = {95, 24, 34, 18, 32, 10, 57, 70, 96, 72, 70, 2, 53, 41, 44, 92, 28, 79, 51, 25, 14, 795, 69, 42, 40, 64, 91, 3, 32, 58, 72, 84, 26, 41, 73, 35};
    vector<long> score2 = {884, 662, 543, 340, 345, 331, 295, 758, 861, 293, 877, 991, 636, 599, 742, 571, 541, 802, 801, 610, 441, 764, 305, 607, 524, 350, 531, 705, 987, 626, 592, 408, 132, 920, 54, 428};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<long> score1 = {39, 681, 99, 19, 64, 506, 80, 67, 26, 79, 67, 49, 73, 87, 60, 1, 98, 4, 52, 99, 55, 7, 4, 85, 98, 34, 61, 15, 98, 9, 50, 80, 17, 86, 66, 31};
    vector<long> score2 = {396, 429, 848, 27, 63, 630, 101, 398, 776, 545, 321, 519, 795, 135, 909, 63, 687, 433, 808, 835, 597, 985, 325, 466, 717, 344, 188, 603, 361, 880, 942, 925, 136, 163, 871, 164};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<long> score1 = {993, 935, 986, 992, 949, 921, 962, 927, 990, 959, 963, 926, 940, 926, 972, 936, 911, 968, 967, 929, 982, 930, 962, 923, 967, 935, 929, 902, 922, 958, 969, 967, 993, 956, 911, 942};
    vector<long> score2 = {785, 538, 199, 325, 316, 371, 414, 527, 92, 981, 957, 874, 863, 171, 997, 282, 306, 926, 85, 328, 337, 506, 847, 730, 314, 858, 125, 896, 583, 546, 815, 368, 435, 365, 44, 751};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<long> score1 = {988, 984, 903, 951, 954, 999, 932, 960, 976, 968, 939, 912, 926, 986, 994, 939, 995, 970, 934, 978, 967, 901, 997, 902, 917, 992, 952, 956, 901, 980, 986, 941, 965, 989, 944, 919};
    vector<long> score2 = {98, 772, 482, 676, 710, 928, 568, 857, 498, 354, 587, 966, 307, 684, 220, 625, 529, 872, 733, 830, 504, 20, 271, 369, 709, 716, 341, 150, 797, 724, 619, 246, 847, 452, 922, 556};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<long> score1 = {941, 950, 993, 900, 934, 964, 924, 914, 987, 956, 943, 991, 927, 965, 959, 936, 932, 951, 937, 928, 975, 907, 974, 921, 958, 995, 929, 937, 935, 993, 918, 928, 943, 911, 928, 929};
    vector<long> score2 = {614, 539, 607, 841, 905, 819, 129, 689, 370, 918, 918, 997, 325, 744, 471, 184, 491, 500, 773, 726, 645, 591, 506, 140, 955, 787, 670, 83, 543, 465, 198, 508, 356, 805, 349, 612};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<long> score1 = {946, 968, 940, 922, 911, 910, 905, 901, 961, 930, 978, 905, 920, 936, 944, 926, 922, 965, 908, 916, 982, 958, 924, 937, 962, 924, 900, 936, 952, 999, 979, 950, 968, 971, 973, 931};
    vector<long> score2 = {661, 164, 200, 982, 900, 997, 960, 774, 814, 669, 191, 96, 927, 467, 85, 341, 91, 685, 377, 543, 937, 108, 446, 757, 180, 419, 888, 413, 349, 173, 660, 10, 337, 211, 343, 588};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<long> score1 = {921, 955, 919, 999, 921, 904, 939, 911, 940, 967, 905, 928, 927, 950, 984, 958, 920, 924, 922, 969, 996, 981, 930, 984, 992, 972, 972, 950, 925, 985, 922, 999, 940, 942, 998, 913};
    vector<long> score2 = {210, 582, 820, 337, 733, 156, 995, 5, 380, 770, 274, 777, 851, 256, 861, 143, 580, 885, 994, 206, 622, 568, 505, 614, 962, 755, 327, 260, 945, 203, 203, 507, 785, 22, 843, 869};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<long> score1 = {958, 998, 936, 908, 953, 948, 903, 933, 933, 948, 990, 954, 967, 946, 968, 929, 900, 946, 988, 997, 949, 990, 903, 933, 963, 997, 953, 992, 986, 925, 952, 996, 975, 988, 957, 929};
    vector<long> score2 = {461, 305, 29, 28, 51, 749, 557, 903, 795, 698, 700, 44, 40, 3, 429, 404, 501, 682, 648, 539, 160, 152, 536, 135, 340, 693, 216, 128, 505, 630, 50, 965, 286, 430, 344, 336};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<long> score1 = {949, 989, 967, 988, 992, 995, 943, 944, 929, 990, 982, 940, 941, 969, 926, 932, 961, 942, 960, 917, 923, 961, 981, 909, 990, 925, 996, 967, 977, 934, 990, 926, 924, 957, 914, 968};
    vector<long> score2 = {101, 347, 727, 995, 917, 553, 579, 530, 947, 291, 648, 971, 52, 81, 632, 594, 858, 628, 313, 887, 215, 356, 513, 91, 413, 480, 611, 970, 190, 275, 356, 642, 621, 434, 988, 889};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<long> score1 = {956, 917, 906, 960, 949, 937, 905, 959, 917, 918, 945, 983, 973, 958, 973, 937, 989, 983, 907, 978, 957, 914, 971, 929, 900, 959, 918, 938, 925, 988, 974, 933, 957, 981, 993, 958};
    vector<long> score2 = {570, 364, 623, 795, 174, 848, 432, 463, 683, 391, 293, 792, 58, 116, 522, 158, 575, 492, 948, 952, 232, 22, 538, 741, 55, 31, 99, 326, 82, 517, 517, 3, 232, 140, 797, 405};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<long> score1 = {970, 962, 912, 979, 977, 985, 936, 904, 976, 983, 907, 959, 957, 944, 999, 911, 927, 950, 936, 960, 918, 905, 963, 949, 944, 911, 905, 934, 991, 975, 955, 914, 989, 968, 993, 918};
    vector<long> score2 = {718, 31, 94, 575, 127, 594, 487, 254, 544, 75, 815, 714, 180, 378, 763, 776, 89, 920, 711, 733, 295, 18, 347, 236, 138, 692, 154, 944, 574, 329, 926, 292, 711, 19, 218, 837};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<long> score1 = {930, 904, 971, 961, 933, 985, 989, 973, 904, 951, 905, 950, 968, 903, 985, 906, 995, 939, 949, 920, 967, 926, 963, 977, 996, 981, 965, 960, 936, 955, 970, 918, 911, 942, 932, 996};
    vector<long> score2 = {173, 428, 235, 41, 284, 73, 399, 831, 64, 348, 951, 31, 574, 715, 60, 523, 48, 925, 83, 436, 233, 205, 955, 444, 899, 487, 641, 279, 160, 263, 263, 684, 42, 849, 724, 325};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<long> score1 = {14, 16, 7, 13, 10, 2, 3, 8, 11, 20, 4, 7, 1, 7, 13, 17, 12, 9, 8, 10, 3, 11, 3, 4, 8, 16, 10, 3, 3, 19, 10, 8, 14, 17, 12, 3};
    vector<long> score2 = {25, 58, 79, 5, 76, 51, 14, 7, 12, 21, 37, 34, 63, 51, 37, 2, 66, 46, 45, 8, 17, 26, 47, 50, 34, 18, 45, 56, 63, 66, 15, 8, 75, 45, 44, 71};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<long> score1 = {9, 5, 4, 12, 15, 20, 13, 1, 17, 9, 20, 13, 7, 7, 15, 20, 16, 11, 15, 19, 8, 2, 18, 3, 18, 13, 13, 17, 2, 1, 7, 2, 6, 10, 5, 20};
    vector<long> score2 = {18, 12, 2, 36, 70, 48, 8, 17, 58, 34, 27, 6, 27, 44, 60, 65, 9, 72, 53, 30, 64, 20, 31, 9, 29, 76, 21, 70, 37, 4, 59, 6, 47, 12, 42, 36};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<long> score1 = {2, 11, 14, 1, 15, 5, 5, 15, 8, 17, 4, 12, 8, 6, 20, 17, 13, 12, 18, 9, 16, 8, 15, 2, 19, 16, 10, 18, 16, 14, 19, 9, 4, 12, 9, 10};
    vector<long> score2 = {54, 59, 47, 41, 25, 19, 9, 49, 10, 78, 78, 37, 45, 64, 31, 24, 11, 60, 13, 6, 45, 71, 66, 60, 75, 27, 70, 3, 63, 65, 38, 68, 76, 5, 29, 52};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<long> score1 = {7, 9, 1, 3, 12, 11, 6, 2, 2, 11, 19, 6, 1, 17, 5, 7, 3, 6, 9, 17, 3, 19, 5, 18, 3, 5, 1, 17, 13, 20, 20, 11, 9, 12, 14, 12};
    vector<long> score2 = {21, 4, 80, 62, 20, 37, 80, 14, 14, 69, 71, 56, 47, 67, 45, 61, 11, 5, 17, 23, 17, 68, 6, 77, 60, 19, 8, 53, 69, 13, 60, 10, 17, 11, 23, 68};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<long> score1 = {2, 16, 20, 20, 2, 5, 20, 12, 1, 8, 6, 9, 8, 11, 5, 19, 1, 5, 3, 10, 17, 2, 11, 5, 13, 13, 13, 11, 6, 6, 3, 20, 1, 3, 19, 14};
    vector<long> score2 = {50, 22, 20, 57, 53, 36, 75, 5, 60, 50, 74, 17, 51, 56, 21, 63, 60, 45, 74, 6, 22, 48, 25, 54, 42, 35, 47, 20, 65, 43, 3, 67, 65, 22, 43, 69};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<long> score1 = {1, 1000};
    vector<long> score2 = {999, 3};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<long> score1 = {13, 30, 30, 79, 81, 27, 29, 95, 43, 51, 27, 41, 92, 91, 35, 18, 45, 50, 72, 79};
    vector<long> score2 = {455, 115, 962, 728, 482, 925, 451, 536, 308, 51, 317, 272, 332, 446, 103, 212, 473, 331, 906, 315};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<long> score1 = {84, 8, 25, 27};
    vector<long> score2 = {194, 795, 871, 943};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<long> score1 = {1, 98, 33, 62, 77, 66, 38, 27, 1, 98, 29, 17, 69, 60, 62, 71, 71, 86, 2, 28, 53, 35, 12, 60, 11, 38, 5, 5, 60, 48, 23, 61, 97, 7, 74, 73};
    vector<long> score2 = {424, 612, 551, 424, 409, 880, 92, 829, 539, 205, 1000, 762, 143, 853, 889, 395, 239, 852, 306, 549, 341, 410, 6, 701, 809, 980, 313, 605, 586, 138, 229, 9, 101, 780, 784, 509};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<long> score1 = {27, 90, 1, 31, 89, 62, 25, 93, 51, 19, 83, 2, 76, 83, 95, 86, 88, 95, 94, 19, 59, 51};
    vector<long> score2 = {304, 948, 731, 664, 49, 510, 799, 909, 872, 377, 598, 773, 160, 638, 434, 84, 882, 336, 403, 364, 90, 378};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<long> score1 = {84, 15, 86, 30, 61, 5, 40, 11, 60, 87, 93, 24, 35, 3};
    vector<long> score2 = {674, 44, 274, 51, 993, 398, 210, 631, 832, 293, 512, 519, 47, 876};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<long> score1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<long> score2 = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<long> score1 = {3, 51, 1, 66, 5, 12, 5, 32, 61, 77, 37, 21, 53, 20, 66, 39, 84, 21, 64, 95, 58, 88, 29, 65, 34, 91, 76, 80, 67, 4, 9, 21, 54, 62, 86, 10};
    vector<long> score2 = {25, 41, 42, 35, 19, 30, 8, 23, 49, 25, 12, 34, 45, 25, 28, 4, 15, 8, 19, 48, 49, 44, 29, 15, 49, 38, 38, 3, 1, 23, 12, 25, 15, 5, 11, 33};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<long> score1 = {68, 56, 32, 42, 69, 67, 88, 93};
    vector<long> score2 = {45, 44, 7, 2, 12, 6, 50, 7};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<long> score1 = {17, 5, 24, 4, 9, 74, 28, 71, 48, 43, 77, 58, 27, 61, 78, 34, 44, 71, 2, 11, 59, 47, 7, 54, 55, 8, 65, 61, 10, 23};
    vector<long> score2 = {45, 28, 29, 20, 33, 38, 43, 10, 10, 40, 4, 36, 49, 31, 48, 26, 16, 42, 47, 20, 4, 7, 16, 10, 10, 20, 19, 26, 32, 30};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<long> score1 = {39, 17, 89, 51, 26, 30, 56, 12, 29, 36, 61, 4, 54, 2, 2, 73, 57, 58, 38, 18, 19, 9, 39, 44, 93, 68, 43, 70, 27, 73, 69, 17, 89, 9, 19, 15};
    vector<long> score2 = {10, 38, 22, 15, 42, 26, 37, 48, 33, 26, 18, 4, 37, 6, 47, 29, 25, 42, 50, 1, 16, 18, 20, 4, 27, 38, 20, 17, 12, 47, 35, 24, 35, 8, 38, 28};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<long> score1 = {25, 77, 68, 52, 94, 71};
    vector<long> score2 = {38, 1, 19, 16, 26, 10};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<long> score1 = {49, 37, 48, 43, 40, 49, 2, 2, 17, 13, 33, 9, 40, 6, 32, 29, 29, 31, 2, 50, 2, 8, 6, 19, 19, 13, 43, 2, 33, 1, 29, 33, 39, 27, 27, 30};
    vector<long> score2 = {980, 995, 992, 963, 953, 983, 968, 984, 961, 998, 966, 965, 997, 967, 974, 952, 988, 993, 967, 980, 994, 999, 982, 975, 983, 970, 951, 961, 999, 979, 991, 979, 974, 985, 994, 977};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<long> score1 = {2, 3, 7, 8, 26, 24, 15, 30, 30, 19, 20, 42, 25, 17, 48, 19, 3, 34, 49, 47, 41, 8, 2, 12, 46, 11, 49, 12, 5, 35, 12, 6, 37, 18, 15, 13};
    vector<long> score2 = {997, 962, 964, 973, 981, 962, 992, 983, 997, 992, 982, 987, 952, 983, 998, 999, 995, 996, 960, 999, 981, 971, 956, 969, 990, 970, 983, 982, 951, 977, 955, 951, 991, 972, 974, 972};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<long> score1 = {12, 43, 21, 14, 26, 21, 15, 23, 20, 25, 22, 3, 48, 30, 22, 38, 2, 6, 22, 4, 35, 29, 5, 26, 1, 29, 1, 37, 48, 11, 20, 11, 3, 42, 26, 30};
    vector<long> score2 = {963, 974, 985, 960, 953, 956, 999, 954, 963, 970, 959, 999, 998, 963, 975, 951, 994, 977, 987, 993, 987, 959, 953, 991, 950, 980, 970, 964, 969, 971, 997, 984, 995, 982, 996, 950};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<long> score1 = {20, 17, 5, 18, 32, 32, 21, 28, 11, 9, 23, 50, 20, 26, 41, 20, 8, 11, 35, 29, 34, 32, 13, 31, 17, 11, 31, 8, 8, 39, 14, 27, 7, 20, 47, 41};
    vector<long> score2 = {976, 990, 961, 995, 967, 951, 967, 975, 963, 953, 955, 996, 986, 968, 976, 952, 980, 958, 961, 988, 997, 975, 966, 955, 994, 964, 995, 997, 981, 963, 959, 959, 955, 971, 957, 972};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<long> score1 = {30, 6, 35, 16, 26, 14, 21, 8, 22, 32, 46, 21, 9, 15, 27, 4, 29, 24, 1, 12, 37, 12, 24, 44, 33, 31, 19, 8, 7, 18, 48, 38, 25, 32, 5, 2};
    vector<long> score2 = {958, 956, 990, 966, 970, 966, 969, 951, 990, 971, 962, 978, 985, 985, 972, 969, 967, 990, 978, 975, 959, 975, 964, 986, 957, 969, 989, 953, 995, 998, 973, 953, 957, 964, 970, 977};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<long> score1 = {16, 46, 4, 1, 33, 28, 20, 1, 20, 1, 28, 31, 26, 43, 19, 35, 14, 9, 39, 9, 9, 12, 13, 16, 28, 35, 46, 11, 26, 26, 35, 43, 21, 40, 43, 4};
    vector<long> score2 = {964, 984, 970, 991, 976, 988, 976, 989, 998, 964, 998, 957, 977, 962, 972, 955, 996, 969, 965, 973, 995, 951, 966, 967, 991, 960, 972, 959, 976, 977, 999, 992, 964, 969, 984, 990};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<long> score1 = {10, 59, 32, 18, 17, 79};
    vector<long> score2 = {15, 52, 28, 19, 15, 83};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<long> score1 = {125790289781636, 196138829641225, 678622992827931, 436904977166442, 954329641418684, 25187115449424, 887187044841072, 871095970238728, 12351972619491, 190584355597320, 411934293858605, 180044262495706, 788454220518809, 161105263999685, 293650699988487, 953773394935792, 770123514666263, 577017492965098, 10547010530274, 647892214964876, 465310401673079, 414300467868849, 514151664285396, 623930267526502, 421239920814514, 123822060349525, 189471951820219, 361583231977925, 855380576522689, 977610606149030, 27528268931384, 84822118797652, 597647078178192, 279102143608194, 708466786926994, 89423445690128};
    vector<long> score2 = {600073394020075, 558978635114225, 305471204182908, 157079400243062, 513774230797254, 108939044703245, 617473488470523, 681170207472853, 993212772658781, 138236194020740, 106517519739410, 334744530220516, 917602629613846, 345063539142420, 57192737434486, 832549457657266, 454561750907879, 287843042276385, 90787700444922, 35799785120913, 242176608144739, 824158966376001, 615262959021680, 365207014124826, 196813692503443, 661918478303330, 242853225996663, 523847662676808, 126861387385262, 335580977184054, 819748039168129, 357672108790661, 592360232645515, 583398450199499, 606789151135550, 320412569365318};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<long> score1 = {796641917660922, 741319560928255, 682603562106526, 53081313395768, 126321635714999, 699099319369175, 228014652739298, 45983422354876, 124560036381563, 55282017460660, 66045539412954, 767673423174757, 58469834867424, 374257410181610, 519326108694669, 546928450315967, 871944367804600, 244222608070899, 911126438813655, 466667037037448, 45006565682118, 922975641273021, 937768043485310, 144249111062328, 383225168199531, 39340712965622, 612485812323366, 140380332187306, 707142009514637, 368916190742820, 725658574432197, 58787702113954, 236797504819361, 184853724664275, 149368084167873, 218075723194374};
    vector<long> score2 = {849991823141050, 983747720787760, 142712133127996, 366440651525938, 843879517922133, 7912713972716, 761851353148292, 160022682468993, 179281641045291, 211813038421292, 993840366786952, 535246010230637, 122665903236452, 894912520272033, 404325201629340, 982759637254316, 770390165482859, 558428596429455, 127207894924869, 471745304971087, 847002317479657, 943803595608853, 627950917620178, 594198738323583, 181821856322363, 744875479175661, 625667369796474, 922650799748332, 549278076817562, 536717112953603, 963254268519476, 724271008249997, 2335813282700, 679452585129543, 207569705151197, 616982973570923};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<long> score1 = {630854614077137, 696128545775156, 213667552290326, 98740795395488, 129041913359967, 87501336754708, 672793469010151, 503040261222071, 344066309039757, 175674529307320, 75585976899946, 557317864077921, 698998142236769, 723816203422919, 904318044340798, 993842722535173, 934287598689970, 826681895147955, 496648404925421, 59795264625689, 801741670147297, 380397306474534, 673800590399789, 696606242534218, 439546941872280, 841539182031483, 288578161915208, 109404266503928, 668330200349572, 926847856572648, 206722646920689, 624173608141010, 127011552450855, 805317101623659, 892628898865112, 765700980694369};
    vector<long> score2 = {528761672662449, 168904413202562, 62238854865510, 736780015018136, 254142280094671, 49620273059073, 526232095675376, 563001451194562, 541301009489849, 283562245748023, 926890444424088, 405385459570254, 874943062210702, 710265659283923, 75815632475966, 978293235120928, 654767779663549, 323490420717006, 45411156576623, 251494136299553, 187646485301114, 874978583713878, 492843653954332, 908440582034144, 960533047708355, 782167024887423, 132443386703905, 974029341523738, 914607750684295, 807661262506774, 676613493302306, 627703393331380, 482207998467545, 48386612527618, 560520102299881, 343524296748167};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<long> score1 = {117347863218502, 462045873610190, 689186767886838, 160686885649719, 595193135942854, 53495160243988, 163111100027524, 284078824077718, 711819207608091, 100845086388432, 910398289244900, 236165826392605, 712445146284551, 436576295272966, 100784892780100, 21133393734484, 514954324999530, 861026978204141, 886368428021713, 853860760997913, 480919479423707, 241901791644030, 451232128042331, 238100282679403, 650423259855297, 584188036560821, 100197553820353, 469778836812643, 621256006906354, 601961506238393, 202806429139446, 489229360717761, 138976872350255, 438254847025345, 888320055292114, 539610421885591};
    vector<long> score2 = {232174234297864, 45973966683406, 340195534284074, 879161697990618, 139371175979701, 67791195755921, 800054155053922, 568564134937663, 476628869686877, 692408766679435, 826323246181637, 397196052965299, 48244171351802, 506996123936565, 160268065562959, 338508466392442, 860823464384482, 592200662201018, 668556387471362, 191637645324279, 451063947259428, 80200145767470, 313350726165116, 221485116789979, 368345626913893, 985766747194668, 95530715899314, 676320696660126, 251116257699668, 113043966411384, 262627071451552, 803827623123450, 836034718396027, 840821387020942, 383741498032458, 861573374351157};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<long> score1 = {808238578458126, 118627252637941, 139594653340112, 944272605507940, 770357957930038, 218960005865887, 345704857895280, 42365413596820, 111301228155409, 524556143890280, 123313665328383, 13731687959347, 240763904854552, 496641047140856, 403362812358214, 492013405727952, 332692941610640, 365893400472287, 467104732826517, 980227580237461, 272907211199187, 619700069618611, 610820993662066, 731783889722121, 333827568256340, 612401226457140, 101075653142484, 932839322341838, 513388694429480, 482695518433102, 304046790974708, 161055602636739, 101701435043300, 109026885085157, 869818861605605, 838971711142725};
    vector<long> score2 = {804792756458671, 277689846931964, 637089969009472, 170437529487268, 265812475299191, 944408623366888, 441675375393599, 225078391471416, 823079020224125, 904518281643478, 198834686581925, 796569248816887, 625226592421947, 902044142011396, 27552304257367, 154121379348696, 716039338948162, 797013515869480, 957635667967450, 356749697739799, 266641653817509, 623039124224669, 211109971848118, 212437951550540, 72243130633307, 710370655787429, 215233822506939, 604316938840459, 445238891022713, 851855721472790, 796432786522328, 337839108512471, 470491032134852, 898304285944478, 102302374771405, 684277695885296};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<long> score1 = {440526932592638, 998718294087444, 557987520496032, 312256533698054, 922733426105103, 685692965133577, 448337096913517, 348187020908582, 260888219860066, 477011115152774, 57254495802503, 922585427732167, 528333618190684, 534689114300661, 196052367819333, 893780161152930, 928323659408850, 240374004486311, 904882683068982, 184365414343968, 174085066386409, 993897389138775, 299926293342084, 47357025560814, 202151033040720, 229941754259405, 843223157152526, 507924823371556, 343210069042613, 672218154055614, 861946008082350, 208544589790269, 491200770448918, 276580699912435, 34252984977297, 256403415208338};
    vector<long> score2 = {51363706, 346250300, 804347113, 67179985, 639592385, 66910822, 92740799, 5310888, 99951542, 938487092, 759570293, 628794765, 95639619, 794078217, 304682674, 723499181, 863120830, 94871244, 877554796, 152499128, 102953594, 45279692, 742289397, 622961146, 815728611, 189082330, 175389933, 121762863, 174059627, 289646336, 389487553, 77939686, 488412989, 46351018, 145119671, 128005374};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<long> score1 = {261840090376822, 316262065729734, 863915745402907, 40852977019886, 997476851723526, 35419107634658, 111122283106567, 133786754581068, 386260002423183, 58566144114871, 21865405448500, 394086218081493, 94836360397992, 21179036024177, 265362441140850, 545903225043555, 517672002378517, 773289412897939, 781424837814141, 917825992295252, 54019942953245, 929910193681493, 576164212580048, 262561406962424, 519584178321128, 593647111541449, 769628374504086, 139294131380816, 902078478160473, 404994994167440, 817675183950897, 727347155851700, 329415362500637, 749639786627191, 831130958667465, 922444447401502};
    vector<long> score2 = {754137062, 731368706, 641082995, 832713226, 796465107, 589345557, 92192003, 863984691, 620183037, 495785650, 828042492, 56469017, 870289736, 10181787, 187849833, 457708166, 340858612, 207771179, 304391959, 112676288, 391722077, 376119306, 268527988, 430567844, 738619943, 837277627, 217195035, 643967426, 648461444, 848633831, 91368928, 255114858, 432518890, 732451923, 940344437, 228983997};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<long> score1 = {313832032536440, 485040794496869, 322090773527532, 965886251128179, 225671891332072, 836345977084284, 103251013228304, 760572343341680, 347611210804912, 909524980483906, 598891991104560, 451332401576688, 254743568336612, 691546124773633, 304888449552335, 273982327618720, 88775151759022, 631942862927218, 802907678114180, 55397414028578, 446252822891742, 629214521065856, 636399185906138, 407536077984010, 711050638317061, 984268149826294, 937973387951953, 402982026709068, 288565060610880, 482702109593453, 163216357756684, 728526992251991, 32059264360468, 695561139834966, 474648821750958, 379896364437253};
    vector<long> score2 = {497159053, 650009111, 885503109, 38311804, 835915249, 602426997, 116295814, 85142652, 93260410, 879796434, 234968946, 575198383, 267748387, 786371928, 601907452, 76553305, 846982808, 605906506, 186146758, 357146024, 963663190, 475875284, 201914368, 178211601, 592752104, 909609929, 318046567, 387743105, 583877240, 724426464, 752180358, 933552645, 226951927, 490199819, 971864449, 62867176};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<long> score1 = {626816940676615, 9828038403579, 473049382978774, 601962940737789, 867054068025766, 291094868849863, 932272055954204, 512239490111815, 829489280426607, 323416124581593, 552889838886336, 841050478946481, 829152117021408, 499126642781079, 737579236879927, 648255404880748, 556542706174436, 284327850545943, 153210909402641, 283732111020265, 428408661091178, 386480503877032, 45383910898719, 505199101391224, 841679367344968, 489169086394568, 231304443330220, 341049622060456, 867980830356527, 357887872605560, 236454823006142, 2660097309348, 696930425803339, 855291323366493, 205980591655376, 903110165150740};
    vector<long> score2 = {252746554, 119289590, 521544125, 969791937, 30188309, 368049324, 71183161, 74029988, 735394292, 2188683, 12940908, 794141948, 445518903, 430798309, 268718756, 858386883, 261154836, 386076643, 583508795, 180907642, 61599138, 713511455, 278216990, 443296068, 139314794, 226072282, 766662561, 327037127, 817727658, 53565671, 344704219, 922990564, 25371613, 866248344, 745298854, 55559923};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<long> score1 = {814021668998367, 106263822208313, 187050847563524, 866614116705953, 361833737585370, 92837392033022, 662014411117984, 940664185261152, 629440851157655, 557220116460586, 229937247736134, 14065747473947, 301805640718285, 980863326673419, 482981268279717, 749694446297002, 278085069372309, 21668460981487, 935833589888282, 687441047814019, 473652405296630, 847041303652018, 414614012787705, 913170793560406, 461712969986743, 537345646208001, 722877911067762, 198300371541034, 302399769179164, 214453763785381, 458881785480499, 82383827253318, 852809331104051, 751158624304994, 992333718438599, 635365100982338};
    vector<long> score2 = {976251581, 964482406, 404634356, 645182547, 829786464, 746063879, 291259306, 398764528, 716050622, 53796651, 44972530, 786289851, 817380765, 291170830, 157830885, 221683165, 60349994, 708561691, 985468546, 950325228, 494042190, 48067281, 630094898, 201411351, 231687685, 770846056, 678232698, 5196370, 341801007, 202868063, 106178708, 170568940, 19866822, 363329417, 815751488, 702169638};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<long> score1 = {935806195241835, 979467901239094, 909244375416057, 924692916525547, 962868360727538, 965979342287118, 920747189938929, 964480749083726, 953485438829751, 964197492455098, 955753021491977, 906889002998424, 978198907601077, 927640714293911, 957691973787603, 913887058993498, 945790877793355, 932592044055034, 909412258773637, 980581278588632, 901175768946560, 975750360938275, 901841849356583, 922001531271678, 986334564802550, 926777248458439, 910880060050018, 973215447389078, 951095375200856, 999342034108787, 988459518813229, 918637370534249, 906584758367581, 989284502332349, 941218227686217, 920981636642394};
    vector<long> score2 = {932778254313084, 980669660550971, 969667960119022, 922650244372353, 937925068065779, 930792668765157, 915797596804007, 954235095766893, 904863130353577, 992032173509674, 983159780527021, 943924898289743, 994602811149560, 938444408552173, 935777034059426, 994567887984907, 972510895291588, 935879244558529, 926962592874881, 930882937881239, 940660981761674, 946396789056457, 965681575316984, 939702403086897, 986913572248086, 996571059870072, 975107120640495, 976168744186062, 906407063814612, 938235823142185, 990390050449154, 943444091279252, 957094112179323, 937781358700408, 970556824768663, 981648218511216};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<long> score1 = {930337755744396, 967674237612371, 977732597423728, 999268741764646, 971815069812191, 951070374963274, 969039317343590, 949336827275446, 974555124403923, 933983036581297, 953077066577428, 960550973110171, 973103463698331, 926932588843660, 966995480908580, 971228947513684, 969328519955254, 942407272747061, 978983678341675, 911707139567150, 953867521179129, 930424791122906, 939072633679761, 914704924713627, 983684973848688, 994924785453114, 926116089155474, 979637924215571, 970158795406569, 975583693837153, 931501025446812, 967189218000830, 902066531509597, 947891515297401, 967624357775950, 964551810521491};
    vector<long> score2 = {955079169394976, 960749422510503, 991089925075454, 940482266191125, 940494013551759, 944239644382962, 907233662723877, 998533360593743, 946798934174117, 930896439478300, 937281400814438, 979130210055699, 924035148227021, 953101994691659, 902971380217652, 929503237474402, 928980111890252, 984906057720069, 982058859725388, 911195493438904, 977147228071786, 921866828500733, 995663558936752, 910828053958814, 927221096041725, 937114157764502, 972515150916244, 920201281696550, 959617093173302, 904561657662588, 907307786634064, 953342728036287, 940669260154600, 972709493039079, 979989962183904, 977984845673488};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<long> score1 = {972042124299850, 990573933567706, 952954568301402, 926520881380175, 959479333479986, 944677866231994, 996230259481231, 944896636055847, 970885129349457, 934787383594544, 983522893888129, 930832519540543, 959082602419893, 979622126439071, 920149999057606, 928911459892191, 973809203835837, 976249364143115, 953591086019121, 923291141513070, 999107137184320, 961416903895337, 981903713222664, 967536454352789, 972121391218675, 947333611071995, 923157802094517, 912538144182239, 930762995708513, 937662674150911, 982471947766573, 943103675672632, 918762380019352, 915748628772353, 938474137855391, 901775885537581};
    vector<long> score2 = {939711335579543, 949271524221615, 902207886933159, 990756743890681, 951835521554441, 979028415774992, 965311190607919, 957231433196073, 932784683094893, 946985886115255, 977818093906440, 987888340012933, 925792454119988, 985286792480618, 975379444103414, 934552867015090, 999309025000175, 953057533517869, 933334074843813, 924902042601521, 914607337403930, 976513625079918, 928201870850096, 975991419360985, 961341018139328, 976241889839160, 945768719780481, 968445585971561, 900469051153731, 968531765875848, 973497761503083, 907290979972807, 903258581676700, 907028698436593, 936865495931930, 938114957951472};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<long> score1 = {935860051930980, 931390066380414, 981076493823734, 941399181758770, 963062791217640, 997930624008831, 914473006482727, 996744537414942, 936458293465275, 907142257926308, 968359493730785, 915467841471617, 907485456422495, 924562584444350, 954425985979029, 912175638206637, 910009977943565, 987051813207437, 983651042844803, 966207836246714, 962443919080489, 955545050093269, 963216522752289, 908211835716027, 917564595831706, 958687723702275, 962491036574154, 990245017486328, 913001810114807, 930678150383778, 910188996842853, 906767539036549, 902771198210171, 960339004102774, 954974052242898, 949488075117417};
    vector<long> score2 = {923388153121385, 910686749402956, 973674565235250, 935335344607591, 983308236310374, 909866103145799, 900880338516463, 932127470913881, 947623575079157, 914011649757811, 938363114920779, 994361104257486, 930950393554700, 960260554185924, 997598948709749, 919693269637338, 931134459546732, 956647630221161, 998334161708334, 928752890881642, 918709895654970, 927441523419589, 987786967175920, 933471087835409, 955077320663834, 993220966693440, 984613926387581, 950926601231915, 958633031827539, 934191470772584, 937288489753885, 909922082368422, 916969464482921, 905935679115303, 991256392451039, 913297024209965};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<long> score1 = {922362269057090, 929554227310148, 933010394479377, 945557631004439, 943212052738777, 914232003244177, 942711373681510, 976093004101344, 909049612410284, 990280386046337, 980521067800203, 931112756497490, 999476886037047, 929145010990732, 904439710642442, 900697271626801, 999532435346604, 936949068448894, 942333814082506, 953334250001897, 921283002183918, 946075550980346, 965428710238520, 998043781374478, 965156734988323, 937167129845678, 904878340868279, 959520040104355, 921679026988666, 995087210426118, 947460938812137, 952919422363345, 975093980989868, 928591909017426, 988726042781925, 935676366926361};
    vector<long> score2 = {965843264781751, 906708273347624, 920271325504751, 922102002701779, 993074074659269, 947457568314305, 943901871406978, 918660347465580, 911996512030099, 908050193575808, 958588892460969, 955505382550033, 967189811784097, 983812226072267, 982374155619488, 998628604564570, 901239510905336, 912194247937862, 926439932634296, 939641601935866, 909917235703451, 950171127853818, 910429631185183, 935750710538777, 915282738243800, 930937299090223, 921121225086443, 940256061704662, 970540825724068, 976929596469266, 943556880775558, 933836254261147, 997246078946030, 915361933123686, 996678605355003, 959552576422948};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<long> score1 = {999999999999996, 999999999999995, 999999999999997, 999999999999994, 999999999999991, 999999999999990, 999999999999998, 999999999999997, 999999999999998, 999999999999995, 999999999999993, 999999999999995, 999999999999999, 999999999999990, 999999999999994, 999999999999994, 999999999999992, 999999999999993, 999999999999994, 999999999999992, 999999999999996, 999999999999994, 999999999999996, 999999999999990, 999999999999999, 999999999999997, 999999999999999, 999999999999997, 999999999999994, 999999999999993, 999999999999991, 999999999999992, 999999999999991, 999999999999998, 999999999999998, 999999999999992};
    vector<long> score2 = {999999999999990, 999999999999997, 999999999999991, 999999999999998, 999999999999994, 999999999999994, 999999999999995, 999999999999995, 999999999999996, 999999999999991, 999999999999999, 999999999999990, 999999999999995, 999999999999993, 999999999999994, 999999999999993, 999999999999997, 999999999999992, 999999999999996, 999999999999998, 999999999999999, 999999999999995, 999999999999995, 999999999999996, 999999999999990, 999999999999998, 999999999999990, 999999999999991, 999999999999996, 999999999999999, 999999999999993, 999999999999998, 999999999999998, 999999999999996, 999999999999998, 999999999999994};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<long> score1 = {999999999999990, 999999999999993, 999999999999999, 999999999999998, 999999999999997, 999999999999990, 999999999999990, 999999999999994, 999999999999995, 999999999999994, 999999999999997, 999999999999994, 999999999999998, 999999999999993, 999999999999992, 999999999999998, 999999999999990, 999999999999990, 999999999999994, 999999999999993, 999999999999998, 999999999999996, 999999999999994, 999999999999997, 999999999999995, 999999999999990, 999999999999997, 999999999999995, 999999999999996, 999999999999996, 999999999999999, 999999999999999, 999999999999991, 999999999999990, 999999999999999, 999999999999998};
    vector<long> score2 = {999999999999992, 999999999999990, 999999999999992, 999999999999997, 999999999999996, 999999999999992, 999999999999991, 999999999999995, 999999999999997, 999999999999996, 999999999999993, 999999999999998, 999999999999998, 999999999999999, 999999999999991, 999999999999998, 999999999999995, 999999999999997, 999999999999997, 999999999999993, 999999999999999, 999999999999995, 999999999999990, 999999999999996, 999999999999993, 999999999999990, 999999999999997, 999999999999994, 999999999999992, 999999999999996, 999999999999993, 999999999999995, 999999999999996, 999999999999997, 999999999999994, 999999999999993};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<long> score1 = {999999999999901, 999999999999913, 999999999999901, 999999999999953, 999999999999990, 999999999999908, 999999999999962, 999999999999933, 999999999999997, 999999999999922, 999999999999953, 999999999999996, 999999999999921, 999999999999946, 999999999999984, 999999999999908, 999999999999945, 999999999999972, 999999999999948, 999999999999967, 999999999999995, 999999999999932, 999999999999989, 999999999999924, 999999999999990, 999999999999930, 999999999999994, 999999999999968, 999999999999936, 999999999999985, 999999999999924, 999999999999989, 999999999999999, 999999999999977, 999999999999943, 999999999999941};
    vector<long> score2 = {999999999999937, 999999999999957, 999999999999974, 999999999999934, 999999999999931, 999999999999927, 999999999999931, 999999999999904, 999999999999925, 999999999999967, 999999999999964, 999999999999922, 999999999999991, 999999999999912, 999999999999989, 999999999999986, 999999999999944, 999999999999978, 999999999999910, 999999999999987, 999999999999908, 999999999999956, 999999999999907, 999999999999997, 999999999999942, 999999999999983, 999999999999986, 999999999999941, 999999999999961, 999999999999981, 999999999999982, 999999999999998, 999999999999990, 999999999999908, 999999999999985, 999999999999921};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<long> score1 = {999999999999935, 999999999999968, 999999999999925, 999999999999960, 999999999999935, 999999999999989, 999999999999982, 999999999999979, 999999999999954, 999999999999923, 999999999999965, 999999999999950, 999999999999901, 999999999999928, 999999999999989, 999999999999961, 999999999999984, 999999999999996, 999999999999958, 999999999999926, 999999999999980, 999999999999997, 999999999999919, 999999999999993, 999999999999930, 999999999999953, 999999999999943, 999999999999921, 999999999999961, 999999999999980, 999999999999942, 999999999999996, 999999999999948, 999999999999920, 999999999999908, 999999999999936};
    vector<long> score2 = {999999999999961, 999999999999942, 999999999999967, 999999999999915, 999999999999917, 999999999999932, 999999999999918, 999999999999918, 999999999999960, 999999999999907, 999999999999932, 999999999999997, 999999999999904, 999999999999990, 999999999999975, 999999999999936, 999999999999939, 999999999999995, 999999999999981, 999999999999970, 999999999999900, 999999999999976, 999999999999991, 999999999999962, 999999999999957, 999999999999985, 999999999999910, 999999999999957, 999999999999905, 999999999999919, 999999999999945, 999999999999919, 999999999999913, 999999999999912, 999999999999986, 999999999999931};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<long> score1 = {999999999999815, 999999999999896, 999999999999422, 999999999999650, 999999999999203, 999999999999849, 999999999999672, 999999999999858, 999999999999488, 999999999999145, 999999999999259, 999999999999186, 999999999999816, 999999999999719, 999999999999413, 999999999999325, 999999999999282, 999999999999422, 999999999999008, 999999999999075, 999999999999038, 999999999999434, 999999999999199, 999999999999274, 999999999999730, 999999999999639, 999999999999639, 999999999999062, 999999999999003, 999999999999445, 999999999999668, 999999999999818, 999999999999342, 999999999999090, 999999999999468, 999999999999545};
    vector<long> score2 = {999999999999291, 999999999999141, 999999999999403, 999999999999780, 999999999999638, 999999999999014, 999999999999318, 999999999999454, 999999999999733, 999999999999732, 999999999999780, 999999999999368, 999999999999506, 999999999999140, 999999999999443, 999999999999544, 999999999999574, 999999999999643, 999999999999171, 999999999999305, 999999999999634, 999999999999810, 999999999999719, 999999999999637, 999999999999256, 999999999999387, 999999999909808, 999999999900950, 999999999904829, 999999999900628, 999999999907495, 999999999900120, 999999999907769, 999999999905250, 999999999907252, 999999999908759};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<long> score1 = {999999999999616, 999999999999571, 999999999999566, 999999999999350, 999999999999655, 999999999999698, 999999999999718, 999999999999161, 999999999999838, 999999999999513, 999999999999058, 999999999999413, 999999999999508, 999999999999581, 999999999999070, 999999999999142, 999999999999391, 999999999999141, 999999999999132, 999999999999999, 999999999999528, 999999999999940, 999999999999301, 999999999999709, 999999999999568, 999999999999796, 999999999999829, 999999999999690, 999999999999398, 999999999999434, 999999999999449, 999999999999015, 999999999999005, 999999999999015, 999999999999717, 999999999999012};
    vector<long> score2 = {999999999999713, 999999999999787, 999999999999525, 999999999999904, 999999999999300, 999999999999583, 999999999999317, 999999999999161, 999999999999164, 999999999999739, 999999999999303, 999999999999908, 999999999999880, 999999999999435, 999999999999259, 999999999999760, 999999999999727, 999999999999561, 999999999999469, 999999999999296, 999999999999709, 999999999999650, 999999999999986, 999999999999108, 999999999999084, 999999999999787, 999999999905475, 999999999908441, 999999999903803, 999999999908192, 999999999903805, 999999999907868, 999999999909331, 999999999907331, 999999999906772, 999999999901983};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<long> score1 = {999999999999941, 999999999999975, 999999999999992, 999999999999905, 999999999999924, 999999999999948, 999999999999971, 999999999999992, 999999999999938, 999999999999965, 999999999999999, 999999999999901, 999999999999926, 999999999999950, 999999999999941, 999999999999953, 999999999999985, 999999999999943, 999999999999906, 999999999999914, 999999999999950, 999999999999985, 999999999999995, 999999999999935, 999999999999985, 999999999999977, 999999999999973, 999999999999931, 999999999999959, 999999999999969, 999999999999923, 999999999999952, 999999999999996, 999999999999967, 999999999999910, 999999999999920};
    vector<long> score2 = {999999999999915, 999999999999981, 999999999999965, 999999999999905, 999999999999946, 999999999999916, 999999999999958, 999999999999924, 999999999999918, 999999999999900, 999999999999977, 999999999999903, 999999999999943, 999999999999936, 999999999999917, 999999999999945, 999999999999921, 999999999999913, 999999999999980, 999999999999906, 999999999999990, 999999999999953, 999999999999989, 999999999999949, 999999999999974, 999999999999912, 999999999999954, 999999999999971, 999999999999931, 999999999999964, 999999999907843, 999999999906547, 999999999900845, 999999999909808, 999999999903404, 999999999903844};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<long> score1 = {999999999999860, 999999999999537, 999999999999878, 999999999999483, 999999999999703, 999999999999849, 999999999999523, 999999999999635, 999999999999475, 999999999999858, 999999999999827, 999999999999441, 999999999999803, 999999999999527, 999999999999428, 999999999999773, 999999999999555, 999999999999856, 999999999999659, 999999999999449, 999999999999811, 999999999999880, 999999999999566, 999999999999600, 999999999999629, 999999999999625, 999999999999600, 999999999999682, 999999999999444, 999999999999550, 999999999999436, 999999999999405, 999999999999540, 999999999999766, 999999999999488, 999999999999843};
    vector<long> score2 = {999999999999716, 999999999999612, 999999999999430, 999999999999643, 999999999999422, 999999999999709, 999999999999684, 999999999999825, 999999999999836, 999999999999564, 999999999999550, 999999999999491, 999999999999520, 999999999999809, 999999999999541, 999999999999432, 999999999999642, 999999999999559, 999999999999484, 999999999999871, 999999999999784, 999999999999536, 999999999999653, 999999999999829, 999999999999539, 999999999999541, 999999999999834, 999999999999531, 999999999999407, 999999999999774, 999999999903574, 999999999905175, 999999999903938, 999999999906957, 999999999904418, 999999999903961};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<long> score1 = {999999999999666, 999999999999602, 999999999999786, 999999999999603, 999999999999619, 999999999999789, 999999999999694, 999999999999739, 999999999999698, 999999999999687, 999999999999623, 999999999999792, 999999999999846, 999999999999559, 999999999999615, 999999999999731, 999999999999548, 999999999999868, 999999999999512, 999999999999687, 999999999999861, 999999999999798, 999999999999818, 999999999999721, 999999999999672, 999999999999744, 999999999999896, 999999999999611, 999999999999701, 999999999999815, 999999999999424, 999999999999468, 999999999999869, 999999999999662, 999999999999523, 999999999999588};
    vector<long> score2 = {999999999999551, 999999999999669, 999999999999780, 999999999999702, 999999999999457, 999999999999855, 999999999999594, 999999999999755, 999999999999515, 999999999999810, 999999999999586, 999999999999663, 999999999999630, 999999999999698, 999999999999802, 999999999999444, 999999999999596, 999999999999572, 999999999999765, 999999999999721, 999999999999416, 999999999999761, 999999999999432, 999999999999570, 999999999999528, 999999999999456, 999999999999490, 999999999999498, 999999999999718, 999999999999613, 999999999903138, 999999999906970, 999999999904482, 999999999903018, 999999999902772, 999999999909391};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<long> score1 = {249146109085412, 501389347509639, 43791330267599, 807619451745075, 648977432886035, 840650689027889, 70852813738428, 297027621627606, 862747351947935, 993161843555150, 209135201621135, 321870343072125, 920923939988527, 237954508493281, 457026579198438, 931566815706173, 283850954949308, 732164448843994, 733259323539783, 589069105898589, 942170785946071, 926478152013022, 200851363739857, 640628600063599, 687792680150142, 135101251413279, 771277232973323, 485404699208552, 478202217723359, 218185949935229, 921797012666103, 157754337722000, 615411633889918, 565994957865023, 429701539671415, 763612418888223};
    vector<long> score2 = {133838711206442, 901246630334689, 462651197058226, 914640495666795, 724720379049741, 80074464012349, 23065341565478, 737253637501267, 805189075955438, 952848061243339, 621542058110602, 965339056236953, 520185531333, 618328501946573, 202748782898292, 834797903336586, 621086344252395, 187627274083737, 826973321618620, 750532123551694, 668361369346958, 564043165207778, 912437603301297, 225398122717626, 256735095178246, 477317767878277, 805201435442656, 631583697805721, 973989395766263, 268647198693089, 119796954546027, 388543193250007, 215516514868627, 267210068053340, 347606233261119, 165255888486517};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<long> score1 = {162342114921990, 181115218639660, 316620841986316, 82316264464555, 308390127572658, 230818444577037, 265747691411726, 713185133328127, 213721145101728, 578134721099453, 317244841446761, 252069101084455, 500101638751644, 448413142761220, 680008369113668, 764089027842351, 552010572461557, 998363924384982, 447873753080679, 365889806756263, 653337701596708, 849652059435437, 524786226562837, 763564314738507, 664565519341698, 837960932981810, 788459031090030, 582617122804912, 358026672547382, 82485220554387, 661050001846574, 913090230729412, 824483199911453, 630747841272357, 992132048996636, 544972686161822};
    vector<long> score2 = {593344456910977, 597259996118131, 473814938360823, 372990907654732, 702521199210951, 152894671007332, 817333432251863, 812244457691711, 799245911894729, 246098998976647, 257656631675540, 222411193082139, 586993089853158, 870848637095478, 849795239932173, 773652889443139, 843150921370911, 77622232833316, 731734901450613, 488048169950607, 177916833640942, 957939035995249, 409157487286535, 203312223208402, 181265024449411, 701401017955273, 641303156923813, 37412192744649, 776971097908261, 840127385626766, 113779127586258, 1042865663880, 249128619630845, 199735425325113, 174026313836714, 460561660040027};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<long> score1 = {6, 1, 5, 3, 13, 15, 9, 7};
    vector<long> score2 = {13, 3, 15, 5, 9, 5, 3, 3};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<long> score1 = {5, 2, 6, 1, 4, 8, 6, 2, 5, 10, 10, 3, 10, 4, 9, 7, 9, 4, 8, 9};
    vector<long> score2 = {5, 3, 1, 4, 1, 6, 4, 7, 8, 3, 10, 4, 7, 5, 2, 9, 5, 2, 8, 2};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<long> score1 = {3, 34, 18, 27, 19, 2, 17, 8, 18, 30, 7, 23};
    vector<long> score2 = {35, 20, 17, 26, 19, 18, 29, 33, 11, 19, 27, 30};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<long> score1 = {2, 17, 4, 14, 7, 3, 5, 14, 16, 9, 8, 10, 13, 8, 12, 6, 15, 16};
    vector<long> score2 = {7, 3, 16, 3, 8, 4, 4, 4, 10, 16, 17, 11, 6, 8, 11, 17, 1, 12};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<long> score1 = {88, 189, 197, 40, 49, 140, 85, 122, 199, 96, 155, 73};
    vector<long> score2 = {34, 208, 109, 6, 76, 145, 7, 92, 74, 110, 164, 191};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<long> score1 = {7675, 4647, 8208, 330, 155, 3660, 6100, 407, 3792, 9877, 6576, 9736, 7886, 9369, 1191, 3822, 3082, 4902, 4833, 1384};
    vector<long> score2 = {7365, 2356, 7114, 6189, 1328, 6892, 4477, 5144, 9326, 9633, 1172, 780, 9379, 3312, 7016, 9342, 5512, 3938, 2347, 3487};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<long> score1 = {1565, 7120, 5013, 9968, 9903, 94, 10984, 1215, 7011, 6545, 9036, 634, 333, 7456, 6707, 2622};
    vector<long> score2 = {8328, 6361, 3008, 3476, 6785, 12202, 2186, 6773, 23, 11297, 8495, 3520, 11917, 9680, 8858, 1567};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<long> score1 = {51, 31, 60, 56, 58, 34};
    vector<long> score2 = {30, 13, 7, 14, 38, 36};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<long> score1 = {43, 55, 2, 91, 30, 80, 62, 8, 70, 6};
    vector<long> score2 = {94, 88, 86, 96, 37, 38, 13, 88, 26, 82};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2, 2, 2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<long> score1 = {686, 717, 605, 189, 356, 395, 78, 581, 243, 434, 281, 612};
    vector<long> score2 = {480, 329, 202, 19, 674, 91, 60, 606, 8, 196, 514, 18};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<long> score1 = {17, 9, 2, 1, 6, 9};
    vector<long> score2 = {18, 28, 6, 9, 17, 14};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<long> score1 = {50, 50, 50, 1};
    vector<long> score2 = {30, 30, 30, 150};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<long> score1 = {300, 300, 300, 300};
    vector<long> score2 = {600, 10, 10, 10};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<long> score1 = {42, 468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 913};
    vector<long> score2 = {668, 300, 36, 895, 704, 812, 323, 334, 674, 665, 142, 712, 254, 869, 548, 645, 663, 758, 38, 860, 724, 742, 530, 779, 317, 36, 191, 843, 289, 107, 41, 943, 265, 649, 447, 806};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<long> score1 = {1087330661, 564964301, 2203653712, 2336399753, 1163679772, 2275377828, 2775882451, 2038638453, 1973648186, 223167629, 734905909, 1826673767, 2400608113, 2195292794, 2085837594, 1283721338, 1801695367, 635776322, 2942447580, 2033361700, 1335211555, 382030142, 2320669607, 491192838, 1858482023, 74366628, 1929917512, 1862732544, 2654789217, 1044461761, 551679587, 911535608, 174609279, 2649172416, 2514969092, 1073441105};
    vector<long> score2 = {1419661365, 477498917, 429807319, 936125980, 1256279786, 2102570512, 2466101790, 941256761, 1614905292, 1763665687, 2495341039, 138866995, 2862661990, 2566550500, 2043978573, 2320910885, 1380795583, 2006344866, 1270672642, 1059350327, 557327781, 616593819, 2377444706, 1171262741, 2759326270, 2376163314, 1462654099, 42455371, 1745848547, 918716885, 2140062207, 1396431791, 773196354, 769392721, 637955340, 2156237101};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<long> score1 = {597332460288201, 705551270390466, 944044830538583, 286198434055294, 111516313370683, 282302324689901, 289914184524547, 32341677529606, 631200324073556, 401513731966833, 561969296932663, 593681188302302, 849575364741419, 59484274613781, 776397792375172, 909960194882058, 780299553930602, 355744098248774, 190860669499179, 881096978246592, 310722896920958, 353203531258791, 702469262934700, 968348303902420, 463988606500644, 678342291811916, 482512677983888, 793794380488393, 221485164441696, 119662127280194, 901198106653609, 606733224897347, 361903854361557, 443807525376444, 311759512887219, 741132588643055};
    vector<long> score2 = {614841773029715, 721234850902918, 106977775657865, 688621309397734, 470277968123283, 355924860825872, 990641582527156, 233635088357417, 677096862413886, 736220845984033, 159475413703789, 639632488777808, 383866225809741, 499395165444211, 218712805697127, 937345952713196, 924813253032510, 809070205182614, 41010469583891, 225687509005319, 85864006311771, 207419959953058, 175953472817835, 486907494714652, 467767347733979, 935970927041664, 19194919341287, 296786451775148, 309247411788891, 560520979229964, 24745761568500, 545737840584141, 650044454717632, 747253858373995, 674480459847775, 42564443040810};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<long> score1 = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000001, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<long> score2 = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000001, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<long> score1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    vector<long> score2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<long> score1 = {121415, 125326216, 37243, 2151631, 3644326, 2343214, 36436, 34632, 3463276, 123413, 437347, 321515, 432724725, 13451364, 4574275, 314532145, 65346, 1351435, 121415, 125326216, 37243, 2151631, 3644326, 2343214, 36436, 34632, 3463276, 123413, 437347, 321515, 432724725, 13451364, 4574275, 314532145, 65346, 1351435};
    vector<long> score2 = {321235, 315316, 4747, 1234132, 658658, 315345, 565486, 135345, 568658, 1354315, 6537536, 31454315, 6537537, 124132, 4256, 13215, 34532, 3245235, 321235, 315316, 4747, 1234132, 658658, 315345, 565486, 135345, 568658, 1354315, 6537536, 31454315, 6537537, 124132, 4256, 13215, 34532, 3245235};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<long> score1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<long> score2 = {1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<long> score1 = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000, 100000000000, 1000000000000, 10000000000000, 1804289383, 1681692777, 1957747793, 719885386, 596516649, 1025202362, 783368690, 2044897763, 1365180540, 304089172, 35005211, 294702567, 336465782, 278722862, 2145174067, 1101513929, 1315634022, 1369133069};
    vector<long> score2 = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000, 100000000000, 1000000000000, 10000000000000, 846930886, 1714636915, 424238335, 1649760492, 1189641421, 1350490027, 1102520059, 1967513926, 1540383426, 1303455736, 521595368, 1726956429, 861021530, 233665123, 468703135, 1801979802, 635723058, 1125898167};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<long> score1 = {762006085657883, 347901009507974, 546332487962915, 581746271317166, 205560263741322, 71196373858660, 706072250335333, 281878935503743, 345555829361364, 698955526764125, 937513638723439, 915729333456735, 325588945521018, 221817842002911, 16319583876183, 932774068686012, 363766300121134, 335656319352840, 270661158692532, 205588814952972, 473192120479847, 991727884935704, 484215659650064, 655533151021215, 183384930240201, 199550355220127, 146188996478169, 343226192694010, 838020959167681, 845787560888533, 969633125052693, 910718330955057, 145972856105029, 258348953375871, 889771474833803, 113285630110300};
    vector<long> score2 = {162348206159086, 188127441097628, 819295590858182, 562762165404389, 250192138694776, 99412620648012, 952950948114525, 702865192715058, 87536506151374, 995971024078659, 315921520443044, 758765573466498, 639290447373802, 150825876446021, 932662432553523, 451519988172363, 998447446727254, 904745835445703, 523799916067940, 520092218840301, 198188778109174, 878034589528995, 279665582902744, 171163963086705, 84483126409434, 848775226795154, 322795798825942, 260144312551867, 165467427100934, 736632033767235, 10119482933213, 818152503563074, 986617028266404, 3544550479870, 894670268992067, 679786046938642};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<long> score1 = {33333434, 124312341324, 14312341234, 12342342, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434};
    vector<long> score2 = {33333434, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434, 124312341324, 14312341234, 12342342, 123412343, 132412342143, 33333434};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<long> score1 = {11, 123, 234, 324, 234234, 343, 423, 124, 543, 5435, 345, 34534, 5345, 345, 345, 35, 3345, 2342, 432, 24, 324, 234, 234, 33, 333, 33, 33, 43242, 3432, 42323, 423423, 234234, 234234, 234234, 324234, 234234};
    vector<long> score2 = {43232, 342, 423, 34, 4, 42, 32, 23, 23, 23, 23, 23, 23, 23, 2, 42, 4, 4, 4, 4, 44, 4, 33, 33, 33, 33, 33, 33, 44, 44, 44, 44, 44, 44, 44, 44};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<long> score1 = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000001, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<long> score2 = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000001, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1, 1000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<long> score1 = {123, 123, 234, 5, 66789, 1000, 234, 552, 100000, 123, 123, 234, 5, 66789, 1000, 234, 552, 100000, 123, 123, 234, 5, 66789, 1000, 234, 552, 100000, 123, 123, 234, 5, 66789, 1000, 234, 552, 100000};
    vector<long> score2 = {100000000000000, 100000000000000, 100000000000000, 100000000000, 100000000000000, 100000000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100000000000000, 10000000000, 100000000000000, 100000000000000, 100000000000000, 100000000000000, 1, 1, 1, 88, 1, 1, 188, 1, 1, 100000000000000, 100000000000000, 100000000000000, 10000000000000, 100000000000, 100000000000000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<long> score1 = {50, 50, 50, 1, 10000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000, 10000000000000};
    vector<long> score2 = {30, 30, 30, 150, 8888888888, 99, 567, 234, 243, 345435, 234324324, 23432432, 234, 4, 432, 4, 4, 4, 4, 3565, 432, 6436456, 53453543, 345, 234234, 2423, 45457, 567, 214, 445, 234, 32324, 33333333333333, 1111111111, 2222222222, 2333333333};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<long> score1 = {701653098275728, 209942515598632, 310632436473337, 402529684477589, 631077037753485, 397625912301493, 404742921172275, 212535298213902, 336281057348569, 166090289408097, 299416319155011, 154410728723154, 339215985510497, 636827999417960, 944771034852150, 926560649338069, 606000113385853, 572332511371059, 304900643422340, 352118568976360, 488248596314637, 23898919929220, 801443125922937, 954771558089725, 458831849941692, 752463305001531, 634143275253426, 288625109982388, 776860802059418, 999322855247808, 554676357311935, 275122081695836, 598084691501001, 461315450863506, 867796761440563, 153477538030078};
    vector<long> score2 = {977093331862170, 187901304691699, 241060352870015, 612553574123402, 467648192377012, 490609178311091, 682474314212223, 277869484500788, 194736963750507, 485643780133331, 21976627958079, 132668146664176, 457724684294133, 799114893240928, 827456377255559, 934471590289324, 816198382231572, 778011625696891, 744365516177624, 730086397308402, 288883352010195, 88162453802778, 536086075476489, 822957749368199, 225134814713860, 614246262899601, 92169253871246, 751792410791019, 633639475607963, 984195705514221, 480447930851573, 101835512792443, 300947983152523, 275935589014748, 121077365063337, 999121716494292};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<long> score1 = {28959393, 92901013, 36085873, 48533630, 76550279, 89134331, 7385195, 56889022, 95168426, 88844001, 53699824, 9912668, 86611921, 77811291, 12905316, 45033381, 98004709, 51427207, 32780646, 55994993, 8052926, 78205365, 22530699, 68547991, 73798976, 90856878, 69573116, 80335148, 2214255, 7523372, 81141485, 31173648, 424385, 17227358, 32223631, 29491017};
    vector<long> score2 = {79142414, 65566339, 61126155, 57886067, 22702060, 17450741, 19879755, 72282698, 48787572, 58368053, 30534375, 60672241, 7464966, 74759233, 36980168, 58347371, 80434858, 66681055, 64381964, 49507901, 71014630, 66920524, 1702728, 29219489, 44283355, 83586260, 78374504, 27271032, 82236636, 24827736, 7107662, 61379050, 90394075, 20750169, 71781470, 65612487};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<long> score1 = {474570678688549, 657472502657256, 666410471124839, 142600352925368, 10860443090068, 374754492063365, 274048139478332, 810348052235084, 690592653038685, 601457038727734, 558190047753349, 661321085872002, 145302794710104, 440054791924770, 162267322388889, 905972981529323, 58824327410867, 818820127842081, 74609633635878, 686945504093542, 336999592791768, 404614283128650, 842403367812562, 18604300312003, 60784696188969, 915033643409947, 508925916427702, 90977989058584, 987133990405570, 946713018743271, 112527636147027, 423206612254094, 135069500949165, 312540694192269, 621451948271433, 163524128318982};
    vector<long> score2 = {510018506743480, 596998087107580, 302298187535571, 930031642846646, 729737798620394, 761014433355668, 458102457029239, 835545187213282, 733856044524030, 592554309668182, 106008144493276, 450143037113764, 970366554272757, 558085146529961, 378455487835810, 628323845143226, 142133040514844, 328671777846738, 779338634056595, 471270621375200, 387149302718034, 973478750284657, 521574047502794, 451510888481208, 81875842239382, 596036694287856, 493861011457403, 282117965590272, 932069472459189, 622768692964869, 539645678299781, 861478681226879, 396200444079308, 977371120062368, 686097989737368, 382536210655398};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<long> score1 = {124124125125, 124125125, 125324523, 1234531465, 13461346, 134513451345, 134631461346, 134513461346, 13471373415, 1346731451346, 13451346134, 134513451345, 134513453416, 1345613461346, 13451346136, 13451346136, 1346513456356, 1345634156134, 13451346134, 314613461346, 31461346346, 134531456, 134531463146, 314513461346, 513461346, 134631466, 13461346134, 513453146, 134651346314, 513463146, 13461346, 13456134613, 13461346, 13461346, 134613451346, 1346314613456};
    vector<long> score2 = {123412352315, 123412351235, 12342135235, 1235123453, 2134345234, 2452341, 42315125, 4231512345, 231412345, 42341235, 421345215, 123421341234, 123523415, 4121351234, 42135135314, 41234523534, 412335345, 1234531453145, 1234531451345, 1523453415134, 513451345, 13453145341, 13451345, 513455341, 51345345, 13453145, 513451345, 513453145, 513451345, 513451345, 513453145, 12345, 512345, 1234, 512345, 512345};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<long> score1 = {14, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058};
    vector<long> score2 = {14, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058, 1058};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<long> score1 = {6334846741, 572491696500, 696293581478, 814557054464, 996168273281, 19422995491, 239154364827, 15339024604, 74212382292, 989597188716, 477117265447, 991218691538, 703562995667, 381187039894, 76733331322, 771151414664, 554768688253, 275726627644, 8723285937, 77875299741, 219030352316, 1062881842, 926489429040, 380574462648, 437067295890, 110150065350, 962935484393, 995440842623, 496618408756, 630839317376, 462624396944, 153855371323, 292920826118, 111548336541, 270496584639, 230639779930};
    vector<long> score2 = {502123861673, 907269248745, 677758296270, 651250975573, 916132903986, 476723558636, 403155743655, 115073502052, 396617246941, 19111073430, 545713378007, 38377532287, 220989094945, 858842219758, 750649466422, 916864133030, 87622591900, 635974101655, 15485377624, 404175956483, 29143503602, 10209374836, 734840214596, 448496683199, 5347348281, 793864181999, 812737886900, 48933728467, 780724834648, 661743102421, 430995142813, 745189357616, 65195249600, 30327981556, 584410086224, 270249892609};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<long> score1 = {148624342, 87080703, 2035645252, 194819554, 780417760, 685877655, 1593385029, 763095095, 1859657133, 1118993934, 777820037, 1848820199, 1877602108, 324011052, 522191006, 1861309162, 1159716842, 970764136, 19430228, 1520660479, 1779018963, 275760724, 1151249516, 37738116, 172232446, 412970436, 1132096922, 1065499648, 1685306354, 104014479, 613026977, 1833930696, 191095182, 501188582, 2028750250, 971512943};
    vector<long> score2 = {1387245258, 593606531, 1368795448, 407690727, 657248331, 1965452088, 1259488462, 296164678, 1402992902, 1960520053, 729668033, 1314838904, 1882058696, 571172684, 1634005417, 1096966764, 1264706220, 1153889280, 1422935076, 87922641, 316281374, 1342268947, 1920898401, 221926893, 1528970472, 1157533219, 467461556, 156613600, 966188685, 1209769498, 907106579, 205950296, 1803376030, 128418380, 613641023, 313140713};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<long> score1 = {5, 5, 1, 4, 4, 3};
    vector<long> score2 = {5, 5, 1, 4, 4, 3};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<long> score1 = {628368023322849, 277609449366172, 770305240011136, 61990242513683, 321739141353706, 208453781456398, 902142892405207, 268363222678433, 755185704195506, 759123266808069, 79197092365064, 961237953714018, 430770769835859, 263820692257170, 478267072586847, 389499834728519, 382508163311019, 498571350435961, 3396884467975, 622383436092220, 720534967135185, 532079266821863, 56677479203877, 115673423856726, 860328724650256, 400764788442594, 136721975954982, 764491319661899, 810761736610553, 300923040736000, 997325600230042, 540976231908605, 349046052822157, 202810775116175, 402153129255866, 893382097388078};
    vector<long> score2 = {492956198532537, 69267552640623, 552537395495633, 905399468126149, 951546673463845, 461144991189867, 866881745800524, 127915335705318, 742060146087042, 387996531437498, 661847974955201, 791436099792921, 651258528402628, 855938075844696, 955120665037552, 885496751240213, 948514266094437, 973614729512785, 676454243513505, 155506316974363, 854515304060112, 944123545656934, 775304133524434, 243444987392202, 943955454918545, 992312173776196, 52174423680695, 31594529576249, 846743614362010, 315526654819599, 434409691994327, 336579892582132, 428014558601069, 713173596167313, 918367938353369, 636597582032381};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<long> score1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<long> score2 = {1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000};
    PickingUp* pObj = new PickingUp();
    clock_t start = clock();
    vector<int> result = pObj->fairPickingUp(score1, score2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=13521&pm=9887
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <queue> 
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cassert> 
#include <numeric> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <ctime> 
using namespace std; 
 
typedef long long int64; 
typedef vector<int64> vi64; 
typedef vi64::iterator it64; 
typedef vector<int> vi; 
 
#define For(i,a,b) for (int i(a),_b(b); i <= _b; ++i) 
#define Ford(i,a,b) for (int i(a),_b(b); i >= _b; --i) 
#define Rep(i,n) for (int i(0),_n(n); i < _n; ++i) 
#define Repd(i,n) for (int i((n)-1); i >= 0; --i) 
#define MP(x, y) make_pair((x), (y)) 
#define All(v) (v).begin(), (v).end() 
 
template<typename T> inline int Size(const T& c) { return (int)c.size(); } 
template<typename T> inline T Abs(T x) { return x >= 0 ? x : -x; } 
 
vector<pair<int64,int> > v1[40], v2[40]; 
 
void rec(it64 i1, it64 i2, it64 j1, it64 j2, int64 dif, int mask, vector<pair<int64,int> >* v, int index) { 
  if (i1 == i2)  
    v[index].push_back(MP(dif, mask)); 
  else { 
    ++i1; ++j1; 
    it64 ni1 = i1, nj1 = j1; 
    --i1; --j1; 
    rec(ni1, i2, nj1, j2, dif+*i1, mask*2, v, index+1); 
    rec(ni1, i2, nj1, j2, dif-*j1, mask*2+1, v, index-1); 
  } 
} 
 
void process(vector<pair<int64,int> >& v) { 
  int i = 0, k = 0; 
  while (i < Size(v)) { 
    int res = v[i].second; 
    int j = i+1; 
    while (j < Size(v) && v[j].first == v[i].first) { 
      res = min(res, v[j].second); 
      ++j; 
    } 
    v[k] = v[i]; 
    v[k++].second = res; 
    i = j; 
  } 
  v.resize(k); 
} 
 
struct PickingUp { 
  vi fairPickingUp(vi64 s1, vi64 s2) { 
    int n = Size(s1); 
    rec(s1.begin(), s1.begin()+n/2, s2.begin(), s2.begin()+n/2, 0, 0, v1, n/2); 
    rec(s1.begin()+n/2, s1.end(), s2.begin()+n/2, s2.end(), 0, 0, v2, n/2); 
    For(i, 0, n) { 
      sort(All(v1[i])); 
      process(v1[i]); 
      sort(All(v2[i])); 
      process(v2[i]); 
    } 
    int64 best = INT_MAX; best *= best; 
    int64 res = -1; 
    For(index, 0, n) { 
      int j = Size(v2[n-index])-1; 
      Rep(i, Size(v1[index])) { 
        while (j-1 >= 0 && Abs(v1[index][i].first+v2[n-index][j-1].first) < Abs(v1[index][i].first+v2[n-index][j].first))  
          --j; 
        int k = j; 
        int64 cur = Abs(v1[index][i].first+v2[n-index][j].first); 
        while (k >= 0 && Abs(v1[index][i].first+v2[n-index][k].first) == cur) { 
          int64 mask = v1[index][i].second; 
          mask = (mask<<(n/2))|v2[n-index][k].second; 
          if (cur < best || cur == best && mask < res) { 
            best = cur; 
            res = mask; 
          } 
          --k; 
        } 
      } 
    } 
    vi v(n); 
    Rep(i, n)  
      v[i] = (res&(int64(1)<<(n-1-i))) ? 2 : 1; 
    return v; 
  } 
};

********************************************************************************
*******************************************************************************/