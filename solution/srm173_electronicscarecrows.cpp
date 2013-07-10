/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1960
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

class ElectronicScarecrows {
public:
    double largestArea(vector<int> x, vector<int> y, int n);
};

double ElectronicScarecrows::largestArea(vector<int> x, vector<int> y, int n) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {2, 1, 6, 5, 3, 7, 9};
    vector<int> y = {2, 5, 1, 5, 7, 6, 4};
    int n = 4;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 24.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {183, 229, 723, 510, 395, 936, 447, 328};
    vector<int> y = {1000, 823, 0, 412, 786, 446, 312, 286};
    int n = 15;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 347200.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {33, 36, 26, 8, 12, 8, 28, 19, 8, 37, 9, 22, 31, 30, 25};
    vector<int> y = {12, 8, 6, 16, 27, 7, 31, 33, 35, 22, 22, 36, 29, 22, 32};
    int n = 8;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 740.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {327, 196, 744, 91, 709, 38, 944, 300, 927, 715, 835, 874, 958, 667, 748, 511, 377, 956, 184, 956, 809, 925, 12, 45, 184, 180, 169, 374, 914, 398, 954, 875, 286, 422, 76, 315, 497, 209, 512, 938};
    vector<int> y = {913, 843, 73, 213, 903, 444, 444, 905, 352, 54, 194, 207, 373, 57, 105, 959, 932, 480, 843, 424, 140, 661, 578, 616, 851, 132, 135, 936, 676, 23, 578, 737, 74, 959, 724, 924, 955, 854, 958, 376};
    int n = 25;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 685819.5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 1, 1, 4, 4, 7, 7, 8};
    vector<int> y = {4, 1, 7, 0, 8, 1, 7, 4};
    int n = 4;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 1, 0};
    vector<int> y = {0, 1, 1};
    int n = 3;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 1000, 1000, 0};
    vector<int> y = {1000, 0, 1000, 0};
    int n = 40;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {701, 653, 313, 354, 567, 402, 515, 575, 583, 319, 99, 311, 102, 539, 734, 703, 252, 344, 403, 110, 439, 714, 365, 536, 344};
    vector<int> y = {244, 174, 716, 637, 114, 63, 305, 395, 398, 410, 233, 475, 238, 168, 325, 459, 546, 577, 256, 657, 371, 415, 402, 479, 419};
    int n = 8;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 293491.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    int n = 3;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int n = 3;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    int n = 40;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int n = 37;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {33, 30, 27, 35, 38, 2, 23, 21, 10, 10, 22, 33, 18, 31, 17, 16, 38, 32, 17, 20, 8, 25, 24, 22, 17, 20, 16, 19, 21, 27, 16, 26};
    vector<int> y = {17, 21, 15, 15, 15, 12, 22, 18, 20, 33, 27, 8, 8, 18, 21, 31, 12, 32, 8, 22, 9, 38, 25, 23, 15, 12, 26, 14, 33, 20, 11, 20};
    int n = 5;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 689.5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {694, 350, 177, 705, 95, 80, 32, 104, 115, 405, 775, 443, 539, 17, 58, 799, 607, 501, 304, 181, 49};
    vector<int> y = {129, 3, 67, 142, 141, 159, 557, 130, 118, 799, 538, 2, 774, 284, 191, 381, 58, 786, 788, 735, 591};
    int n = 10;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 465132.5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {797, 131, 231, 534, 652, 703, 68, 59, 249, 317, 546, 504, 637, 628, 644, 302, 466, 344, 18, 730, 799};
    vector<int> y = {353, 103, 762, 23, 710, 660, 175, 190, 29, 791, 27, 786, 78, 71, 716, 787, 794, 796, 278, 625, 377};
    int n = 11;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 444507.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {897, 119, 296, 956, 847, 190, 323, 786, 800, 254, 129, 259, 410, 114, 971, 181, 609, 895, 570, 815, 284, 813, 630, 973, 268, 419, 535, 12, 9, 233, 397, 686, 875, 499, 131, 969, 928, 246, 10, 472};
    vector<int> y = {797, 192, 940, 319, 849, 114, 965, 93, 894, 920, 806, 937, 984, 196, 387, 126, 971, 780, 12, 883, 938, 874, 975, 593, 59, 13, 20, 560, 449, 80, 23, 944, 812, 18, 182, 343, 261, 908, 587, 995};
    int n = 10;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 709999.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {69, 218, 46, 650, 567, 318, 973, 982, 669, 907, 922, 171, 934, 965, 675, 753, 111, 781, 281, 32, 710, 38, 910, 517, 979, 549, 487, 960, 463, 772, 35, 391, 42, 10, 144, 19, 251, 967, 476, 956};
    vector<int> y = {722, 892, 326, 31, 17, 45, 590, 478, 29, 764, 235, 129, 268, 678, 52, 78, 194, 109, 66, 652, 62, 311, 215, 981, 519, 987, 984, 323, 13, 95, 362, 29, 339, 586, 150, 483, 81, 623, 19, 297};
    int n = 12;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 713650.5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {47, 588, 156, 998, 27, 916, 529, 963, 93, 345, 715, 652, 18, 99, 965, 924, 29, 606, 20, 921, 945, 987, 432, 841, 856, 24, 19, 895, 310, 756, 662, 932, 323, 985, 334, 594, 48, 872, 954, 216};
    vector<int> y = {324, 27, 141, 477, 605, 259, 17, 635, 789, 955, 66, 30, 416, 767, 625, 733, 390, 28, 374, 243, 690, 527, 9, 159, 151, 432, 366, 228, 53, 87, 952, 268, 51, 577, 34, 979, 671, 177, 343, 905};
    int n = 14;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 727290.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {267, 8, 35, 665, 189, 130, 283, 222, 946, 776, 7, 599, 890, 359, 113, 14, 502, 24, 128, 132, 7, 790, 830, 104, 277, 284, 27, 327, 105, 790, 827, 544, 29, 975, 676, 909, 274, 987, 940, 994};
    vector<int> y = {65, 479, 354, 965, 115, 826, 60, 901, 316, 84, 473, 23, 216, 969, 800, 486, 17, 637, 829, 179, 552, 899, 862, 806, 941, 57, 655, 46, 200, 96, 148, 991, 335, 413, 52, 756, 928, 476, 278, 563};
    int n = 16;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 741848.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {98, 884, 303, 92, 203, 682, 846, 906, 57, 138, 581, 550, 30, 237, 10, 261, 697, 741, 314, 848, 985, 986, 708, 288, 675, 566, 972, 967, 907, 818, 177, 89, 938, 928, 9, 592, 982, 964, 155, 993};
    vector<int> y = {794, 189, 60, 222, 101, 53, 837, 769, 690, 837, 980, 6, 335, 912, 517, 922, 957, 68, 55, 852, 495, 533, 948, 64, 47, 8, 631, 631, 773, 137, 871, 769, 275, 732, 522, 23, 486, 650, 139, 443};
    int n = 18;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 739962.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {281, 243, 696, 941, 196, 101, 993, 296, 12, 274, 925, 869, 271, 518, 696, 7, 965, 782, 62, 491, 82, 311, 13, 254, 768, 103, 119, 74, 381, 450, 685, 239, 957, 46, 714, 78, 947, 194, 286, 160};
    vector<int> y = {936, 87, 40, 708, 896, 221, 432, 944, 410, 67, 251, 828, 931, 2, 46, 421, 623, 96, 712, 11, 760, 48, 432, 915, 920, 223, 193, 756, 980, 987, 43, 919, 312, 694, 930, 763, 305, 891, 65, 862};
    int n = 20;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 744030.5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {139, 811, 974, 984, 746, 125, 172, 587, 659, 628, 33, 442, 751, 359, 701, 22, 624, 609, 973, 908, 157, 855, 131, 834, 117, 99, 434, 396, 975, 888, 137, 511, 15, 925, 28, 996, 17, 954, 982, 229};
    vector<int> y = {175, 870, 420, 399, 72, 803, 147, 10, 956, 980, 656, 992, 70, 26, 45, 400, 979, 27, 413, 224, 837, 168, 180, 152, 204, 790, 12, 972, 397, 216, 842, 997, 429, 737, 409, 461, 603, 303, 602, 916};
    int n = 22;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 746349.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {993, 180, 807, 151, 451, 811, 540, 355, 981, 48, 582, 955, 99, 697, 879, 221, 545, 647, 864, 862, 6, 927, 115, 6, 61, 685, 18, 930, 51, 101, 5, 144, 201, 990, 906, 626, 31, 901, 146, 444};
    vector<int> y = {569, 131, 870, 155, 982, 123, 978, 27, 533, 694, 17, 700, 771, 44, 195, 105, 993, 977, 836, 162, 469, 278, 201, 438, 282, 954, 527, 280, 327, 202, 434, 831, 99, 421, 230, 982, 652, 785, 161, 988};
    int n = 24;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 746546.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {385, 545, 739, 978, 45, 739, 984, 916, 839, 406, 155, 826, 133, 270, 971, 819, 635, 220, 662, 486, 446, 797, 123, 913, 987, 107, 336, 764, 314, 790, 773, 333, 176, 824, 942, 44, 714, 812, 325, 657};
    vector<int> y = {985, 992, 936, 404, 341, 932, 512, 241, 860, 984, 836, 854, 810, 924, 353, 864, 970, 892, 45, 17, 5, 894, 185, 223, 391, 205, 965, 914, 956, 101, 105, 954, 127, 124, 272, 324, 937, 880, 965, 957};
    int n = 26;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 715548.5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {588, 18, 24, 8, 20, 983, 738, 392, 34, 318, 353, 66, 383, 380, 915, 396, 973, 716, 241, 649, 504, 531, 493, 242, 674, 235, 824, 53, 180, 89, 411, 506, 296, 174, 106, 991, 948, 930, 759, 211};
    vector<int> y = {974, 530, 364, 418, 437, 601, 67, 31, 337, 41, 22, 710, 976, 22, 765, 27, 406, 948, 77, 972, 992, 998, 7, 89, 50, 86, 130, 702, 870, 248, 982, 2, 47, 863, 783, 527, 717, 740, 909, 898};
    int n = 28;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 742108.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {71, 985, 976, 575, 661, 973, 62, 699, 998, 215, 968, 991, 67, 524, 979, 913, 359, 887, 88, 929, 53, 394, 751, 576, 999, 1, 119, 146, 775, 16, 189, 149, 497, 109, 987, 990, 171, 964, 901, 43};
    vector<int> y = {756, 619, 650, 994, 973, 659, 257, 958, 535, 911, 325, 410, 248, 999, 640, 218, 979, 816, 784, 755, 724, 988, 932, 5, 524, 456, 175, 853, 917, 372, 107, 856, 999, 812, 610, 400, 876, 685, 797, 296};
    int n = 38;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 756941.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {71, 985, 976, 575, 661, 973, 62, 699, 998, 215, 968, 991, 67, 524, 979, 913, 359, 887, 88, 929, 53, 394, 751, 576, 999, 1, 119, 146, 775, 16, 189, 149, 497, 109, 987, 990, 171, 964, 901, 43};
    vector<int> y = {756, 619, 650, 994, 973, 659, 257, 958, 535, 911, 325, 410, 248, 999, 640, 218, 979, 816, 784, 755, 724, 988, 932, 5, 524, 456, 175, 853, 917, 372, 107, 856, 999, 812, 610, 400, 876, 685, 797, 296};
    int n = 39;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 756942.5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {71, 985, 976, 575, 661, 973, 62, 699, 998, 215, 968, 991, 67, 524, 979, 913, 359, 887, 88, 929, 53, 394, 751, 576, 999, 1, 119, 146, 775, 16, 189, 149, 497, 109, 987, 990, 171, 964, 901, 43};
    vector<int> y = {756, 619, 650, 994, 973, 659, 257, 958, 535, 911, 325, 410, 248, 999, 640, 218, 979, 816, 784, 755, 724, 988, 932, 5, 524, 456, 175, 853, 917, 372, 107, 856, 999, 812, 610, 400, 876, 685, 797, 296};
    int n = 40;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 756944.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {73, 61, 58, 28, 54, 66, 39, 53, 51, 61, 83, 25, 62, 44, 47, 38, 50, 50, 33, 26, 53, 38, 67, 36, 67, 64, 96};
    vector<int> y = {53, 40, 12, 70, 71, 39, 78, 87, 51, 33, 70, 65, 50, 53, 47, 8, 72, 41, 32, 19, 45, 89, 54, 16, 57, 91, 40};
    int n = 3;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2349.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {4, 46, 59, 64, 36, 36, 52, 17, 33, 52, 47, 76, 58, 21, 51, 43, 48, 78, 52, 57, 82, 73, 26, 69, 36, 65, 89};
    vector<int> y = {69, 46, 62, 66, 4, 43, 7, 85, 39, 78, 35, 9, 48, 28, 11, 44, 39, 42, 52, 9, 53, 67, 60, 12, 20, 88, 80};
    int n = 4;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4326.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {57, 18, 62, 56, 31, 61, 25, 69, 19, 54, 47, 10, 72, 60, 56, 47, 31, 45, 52, 47, 42, 78, 60, 84, 60, 73, 10};
    vector<int> y = {9, 43, 21, 96, 33, 58, 39, 86, 13, 34, 49, 60, 38, 23, 41, 64, 62, 54, 21, 70, 49, 40, 49, 41, 40, 60, 62};
    int n = 5;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4121.5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {72, 19, 51, 38, 48, 43, 44, 61, 41, 74, 45, 25, 33, 15, 33, 54, 47, 51, 46, 39, 47, 44, 31, 42, 13, 40, 52};
    vector<int> y = {61, 52, 57, 35, 94, 40, 81, 20, 96, 52, 50, 36, 52, 36, 46, 42, 90, 73, 27, 60, 43, 57, 34, 65, 38, 48, 52};
    int n = 6;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 2654.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {62, 72, 51, 26, 62, 54, 61, 75, 23, 27, 98, 41, 63, 55, 40, 31, 72, 61, 65, 49, 82, 41, 24, 62, 49, 70, 11};
    vector<int> y = {66, 50, 59, 56, 73, 54, 31, 45, 32, 54, 58, 11, 53, 49, 36, 55, 54, 90, 50, 3, 61, 38, 76, 37, 51, 26, 31};
    int n = 7;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4378.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {22, 62, 70, 36, 52, 46, 96, 40, 23, 78, 42, 35, 64, 40, 35, 38, 9, 15, 51, 56, 16, 16, 43, 57, 57, 58, 58};
    vector<int> y = {42, 66, 53, 60, 55, 42, 44, 48, 32, 58, 37, 51, 89, 27, 47, 41, 29, 38, 91, 52, 37, 22, 93, 3, 63, 57, 22};
    int n = 8;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4505.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {47, 65, 40, 47, 2, 52, 29, 84, 30, 59, 81, 29, 52, 90, 43, 91, 84, 88, 88, 77, 70, 44, 45, 78, 45, 43, 47};
    vector<int> y = {23, 65, 31, 54, 35, 53, 52, 36, 67, 35, 25, 92, 52, 70, 50, 42, 69, 33, 22, 78, 35, 55, 50, 64, 11, 49, 77};
    int n = 9;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5018.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {93, 15, 58, 73, 9, 64, 47, 49, 9, 48, 56, 51, 78, 29, 22, 92, 77, 46, 48, 35, 39, 81, 25, 15, 41, 71, 71};
    vector<int> y = {67, 57, 47, 23, 42, 77, 50, 7, 55, 47, 56, 46, 50, 79, 35, 27, 65, 56, 50, 53, 47, 80, 33, 56, 89, 25, 38};
    int n = 10;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4852.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {54, 47, 55, 26, 20, 49, 36, 41, 78, 28, 15, 45, 29, 21, 44, 38, 67, 94, 31, 48, 65, 83, 61, 86, 16, 38, 45};
    vector<int> y = {34, 45, 92, 91, 53, 52, 68, 36, 64, 43, 14, 46, 19, 46, 20, 49, 87, 69, 50, 66, 53, 12, 81, 35, 78, 76, 34};
    int n = 11;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 5395.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {41, 42, 48, 54, 94, 35, 60, 39, 55, 20, 52, 53, 77, 54, 55, 70, 53, 40, 68, 33, 42, 27, 48, 9, 49, 87, 63};
    vector<int> y = {48, 68, 45, 59, 50, 29, 54, 57, 52, 17, 48, 29, 40, 49, 63, 56, 53, 43, 8, 45, 57, 28, 52, 73, 89, 49, 35};
    int n = 12;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 4518.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110};
    vector<int> y = {100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 100, 100, 100, 100, 100, 100, 100};
    int n = 3;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 3200.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110};
    vector<int> y = {100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 100, 100, 100, 100, 100, 100, 100};
    int n = 4;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6400.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110};
    vector<int> y = {100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 100, 100, 100, 100, 100, 100, 100};
    int n = 5;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6400.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110};
    vector<int> y = {100, 110, 120, 130, 140, 150, 160, 170, 180, 180, 180, 180, 180, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 100, 100, 100, 100, 100, 100, 100};
    int n = 11;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 6400.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {0, 41, 9, 41, 7, 39, 0, 1, 40, 1, 0, 30, 2, 11, 18, 1, 33, 2, 9, 5, 3};
    vector<int> y = {22, 19, 4, 18, 35, 30, 16, 27, 24, 14, 17, 38, 13, 39, 0, 28, 4, 12, 38, 6, 10};
    int n = 7;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1151.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {16, 9, 14, 10, 10, 16};
    vector<int> y = {16, 14, 9, 10, 16, 10};
    int n = 3;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 22.5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {0, 1, 1000, 1000, 1};
    vector<int> y = {1, 2, 2, 0, 0};
    int n = 3;
    ElectronicScarecrows* pObj = new ElectronicScarecrows();
    clock_t start = clock();
    double result = pObj->largestArea(x, y, n);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=286907&rd=4670&pm=1960
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstdlib>
 
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) {istringstream(s)>>d;}
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
 
//remove routine
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(const string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
  vector<int> get(const vector<string>& strs){
    vector<int> ret;
    ret.reserve(strs.size()+2);
    for(int i=0;i<strs.size();i++)
      ret.push_back(get(strs[i]));
    return ret;
  }
  vector<string> get(const vector<int>& is){
    vector<string> ret;
    ret.reserve(is.size()+2);
    for(int i=0;i<is.size();i++)
      ret.push_back(get(is[i]));
    return ret;
  }
};
 
class point {
public:
  double x, y;
  point() {
  }
  point(double x, double y) : x(x), y(y) {
  }
  point operator-(point p) {
    return point(x - p.x, y - p.y);
  }
  double operator*(point p) {
    return x * p.y - y * p.x;
  }
};
 
#define eps 1e-8
#define zero(x) (((x)>0?(x):-(x))<eps)
 
double xmult(point p1,point p2,point p0){
  return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
 
point p1,p2;
int graham_cp(const void* a,const void* b){
  double ret=xmult(*((point*)a),*((point*)b),p1);
  return zero(ret)?(xmult(*((point*)a),*((point*)b),p2)>0?1:-1):(ret>0?1:-1);
}
void _graham(int n,point* p,int& s,point* ch){
  int i,k=0;
  for (p1=p2=p[0],i=1;i<n;p2.x+=p[i].x,p2.y+=p[i].y,i++)
    if (p1.y-p[i].y>eps||(zero(p1.y-p[i].y)&&p1.x>p[i].x))
      p1=p[k=i];
  p2.x/=n,p2.y/=n;
  p[k]=p[0],p[0]=p1;
  qsort(p+1,n-1,sizeof(point),graham_cp);
  for (ch[0]=p[0],ch[1]=p[1],ch[2]=p[2],s=i=3;i<n;ch[s++]=p[i++])
    for (;s>2&&xmult(ch[s-2],p[i],ch[s-1])<-eps;s--);
}
 
int graham(int n,point* p,point* convex,int maxsize=1,int dir=1){
  point* temp=new point[n];
  int s,i;
  _graham(n,p,s,temp);
  for (convex[0]=temp[0],n=1,i=(dir?1:(s-1));dir?(i<s):i;i+=(dir?1:-1))
    if (maxsize||!zero(xmult(temp[i-1],temp[i],temp[(i+1)%s])))
      convex[n++]=temp[i];
  delete []temp;
  return n;
}
 
double area(point a, point b, point c) {
  return fabs((a - c) * (b - c)) / 2;
}
 
class ElectronicScarecrows{
public:
  int n;
  int m;
  point ch[100], p[100];
  double dp() {
    double mat[100][100];
    double ret = 0;
    for (int i = 1; i < n; ++i) {
      for (int j = 0; j <= m; ++j) {
      mat[i][j] = 0;
      if (j > 0) {
        for (int k = 1; k < i; ++k) {
          double t = mat[k][j - 1] + area(p[0], p[k], p[i]);
          if (t > mat[i][j]) mat[i][j] = t;
        }
      }
      if (mat[i][j] > ret) ret = mat[i][j];
      }
    }
    return ret;
  }
  double calc() {
    double ret = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) p[(i + j) % n] = ch[j];
      double t = dp();
      if (t > ret) ret = t;
    }
    return ret;
  }
  double largestArea(vector<int> x,vector<int> y,int mm){
    n = x.size();
    point p[100];
    for (int i = 0; i < n; ++i) p[i] = point(x[i], y[i]);
    n = graham(n, p, ch, 0);
    mm -= 2;
    if (mm > n) mm = n;
    m = mm;
    return calc();
  }
};

********************************************************************************
*******************************************************************************/