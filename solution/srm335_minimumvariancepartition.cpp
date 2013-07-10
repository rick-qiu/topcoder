/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7363
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

class MinimumVariancePartition {
public:
    double minDev(vector<int> mixedSamples, int k);
};

double MinimumVariancePartition::minDev(vector<int> mixedSamples, int k) {
    double ret;
    return ret;
}


int test0() {
    vector<int> mixedSamples = {3, 4, 7, 10};
    int k = 1;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> mixedSamples = {1000, 500, 1, 500};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> mixedSamples = {54, 653, 876, 2, 75};
    int k = 5;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> mixedSamples = {42, 234, 10, 1, 123, 545, 436, 453, 74, 85, 34, 999};
    int k = 5;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1700.7397959183672;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> mixedSamples = {1000};
    int k = 1;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> mixedSamples = {923, 456, 12, 12, 542, 234, 11, 12, 10, 9};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1850.3333333333333;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> mixedSamples = {197, 611, 410, 779, 203, 15, 727, 446, 992, 722, 439, 296, 201, 820, 416, 272, 89, 146, 687, 203, 598, 65, 865, 945, 446, 783, 581, 270, 960, 22, 970, 698, 456, 706, 14, 901, 371, 688, 914, 925, 551, 15, 326, 620, 842, 82, 594, 99, 827, 660};
    int k = 21;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 757.3225;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> mixedSamples = {687, 398, 690, 264, 733, 641, 543, 104, 151, 47, 316, 765, 272, 915, 28, 343, 816, 331, 843, 575, 575, 726, 500, 301, 660, 195, 707, 397, 130, 244, 99, 229, 16, 695, 913, 29, 820, 154, 930, 200, 683, 593, 999, 635, 25, 884, 550, 927, 622, 417};
    int k = 34;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 77.82638888888889;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> mixedSamples = {495, 925, 269, 182, 304, 146, 71, 284, 827, 313, 353, 87, 677, 88, 323, 709, 763, 826, 626, 455, 680, 476, 91, 195, 80, 786, 109, 814, 178, 94, 364, 140, 936, 505, 330, 353, 446, 226, 154, 519, 669, 54, 455, 467, 449, 851, 959, 154, 66};
    int k = 32;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 110.74305555555556;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> mixedSamples = {982, 900, 595, 429, 495, 749, 539, 237, 213, 679, 734, 696, 8, 801, 738, 329, 335, 121, 933, 39, 412, 51, 419, 32, 121, 847, 801, 214, 949, 326, 931, 409, 625, 579, 810, 52, 271, 316, 379, 14, 683, 783, 478, 52, 776, 277, 984, 254, 6};
    int k = 11;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3828.460833333333;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> mixedSamples = {359, 408, 124, 89, 26, 878, 677, 341, 166, 434, 886, 539, 227, 420, 655, 330, 835, 378, 763, 401, 883, 332, 215, 424, 365, 841, 113, 825, 777, 969, 970, 668, 602, 708, 874, 930, 423, 549, 236};
    int k = 13;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1588.0486111111109;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> mixedSamples = {485, 607, 409, 588, 650, 107, 905, 825, 18, 300, 866, 101, 292, 457, 80, 140, 66, 730, 752, 699, 978, 668, 2, 153, 734, 176};
    int k = 25;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> mixedSamples = {934, 633, 269, 511, 435, 554, 784, 338, 932, 183, 551, 881, 520, 682, 855, 384, 715, 623, 808, 18, 661, 610, 478, 897, 670, 564, 775, 280, 638, 533, 746, 767, 69, 265, 491, 176, 731, 530, 253, 774, 768, 924, 496, 449, 2, 437, 534, 236, 734, 102};
    int k = 10;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3986.2832171436066;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> mixedSamples = {706, 835, 160, 432, 148, 472, 26, 917, 736, 342, 442, 479, 95, 800, 956};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8172.465;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> mixedSamples = {270, 627, 142, 685, 202, 842, 269};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3667.6875;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> mixedSamples = {631, 915, 710, 508, 974, 382, 280, 477, 318, 935, 763, 538, 207, 939, 691, 937, 289, 129, 223, 787, 834, 526, 318, 972, 84, 618, 426, 567, 902, 189, 838, 905, 215, 879, 714, 384, 307, 145, 452, 659, 443, 621, 738, 225, 187, 921, 638, 368, 436};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 33422.68670652453;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> mixedSamples = {19, 977, 294, 519, 933, 280, 901, 160, 156, 206, 415, 63, 804, 524, 886, 569, 2, 326, 928, 297};
    int k = 5;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6894.134444444446;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> mixedSamples = {972, 423, 794, 752, 237, 775, 621, 545, 830, 188, 131, 397, 438, 798, 447, 44, 534, 756, 869, 713, 5, 222, 951, 912, 301, 250, 914};
    int k = 7;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6044.915595238095;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> mixedSamples = {930, 385, 666, 474, 279, 864, 458, 739, 972, 904, 361, 925, 747, 770, 194, 66, 723, 747, 919, 691, 854, 935, 313, 998, 636, 202, 499, 729, 431, 745, 985, 496, 300, 657, 840, 128, 797, 5, 49, 439, 548, 719, 8, 79, 152, 535, 859, 765, 77, 412};
    int k = 31;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 217.4097222222222;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> mixedSamples = {106, 232, 103, 422, 707, 754, 916, 584, 155};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7860.055555555556;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> mixedSamples = {848, 574, 978, 843, 854, 763, 812, 383, 854, 915, 852};
    int k = 7;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 17.76;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> mixedSamples = {343, 902, 133, 45, 230, 815, 758, 403, 478, 528, 27, 603, 577, 923, 522, 26, 809, 697, 166, 121, 299, 974, 971, 239, 528, 353, 525, 377, 77, 203, 576, 343, 23, 865, 758, 657, 916, 375, 714, 707, 21, 984, 917, 812, 24, 66, 340, 21, 626};
    int k = 46;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> mixedSamples = {994, 591, 238, 647, 104, 943, 551, 329, 520, 956, 53, 981, 873, 945, 81, 577, 527, 433, 753, 651, 413, 647, 799, 317, 242, 109, 954, 189, 712, 496, 367, 701, 694, 350, 114, 20, 712, 278, 911, 416, 294, 536, 177, 479, 561, 405, 11, 303};
    int k = 43;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.25;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> mixedSamples = {94, 155, 686, 55, 239, 377, 232, 54, 872, 322, 138, 971, 796, 31, 184, 578, 690, 707, 207, 504, 611, 42, 419, 82, 705, 964, 75, 957, 74, 715, 959, 183, 76, 532, 270, 806, 650, 418, 925, 230, 885, 225, 879};
    int k = 35;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4.416666666666667;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> mixedSamples = {308, 255, 61, 962, 255, 880, 75, 795, 695, 648, 876, 141, 914, 133, 750, 923, 40, 383, 748, 877, 286, 49, 953, 103, 102, 179, 17, 364, 167, 75, 792, 899, 863, 65, 373, 986, 179, 827, 808, 4, 993, 396, 641, 289, 204, 181, 563, 814, 600, 756};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 14402.110299997077;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> mixedSamples = {209, 701, 688, 620, 277};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2417.5555555555557;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> mixedSamples = {377, 654, 840, 39, 855, 48, 511, 868, 526, 340, 869, 890, 836, 551, 235, 604, 251, 751, 194, 922};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 19668.076517857142;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> mixedSamples = {278, 938, 883, 232, 285, 496, 811, 956, 575, 47, 278, 838, 420, 518, 78, 138, 655, 962, 294, 356, 985, 553, 114, 425, 976, 747, 232, 998, 555, 341, 688, 822, 235, 206, 336, 507, 2, 658, 388, 444, 32, 380, 103, 572, 959, 441, 749, 543, 911};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 42618.657385380626;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> mixedSamples = {15, 666, 692, 494, 133, 429, 616, 832, 260, 81, 714, 844, 198, 126, 495, 321, 17};
    int k = 10;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 953.0277777777776;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> mixedSamples = {900, 73, 661, 936, 575, 742, 656, 329, 873, 70, 53, 455, 441, 544, 442, 447};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 36479.034845496375;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> mixedSamples = {533, 962, 838, 184, 813, 266, 218, 738, 902, 41, 556, 895, 62, 5, 911, 698, 391, 519, 69, 74, 974, 980, 460, 135, 152, 77, 205, 601, 889, 954, 758, 628, 204, 909, 33, 935, 670, 891, 9, 55, 932, 461, 586, 823, 136, 871, 971, 154, 825, 98};
    int k = 15;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1731.6945293209876;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> mixedSamples = {487, 376, 663, 270, 118, 355, 390, 254, 982, 271, 940, 806, 17, 105, 799, 155, 677, 797, 949, 244, 551, 193, 766, 673, 381, 228, 710, 921, 790, 295, 864, 78, 89, 919, 640, 910, 999, 988, 381, 384, 208, 991, 876, 518, 988, 853, 738, 874, 996};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 17842.493865161618;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> mixedSamples = {809, 243, 409, 873, 355, 20, 998, 941, 660, 400, 709, 929, 745, 937, 357, 726, 411, 191, 707, 810, 712, 393, 305, 394, 117, 232, 8};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 30563.802590266874;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> mixedSamples = {238, 187, 739, 852, 945, 956, 512, 18, 685, 969, 808, 176, 82, 66, 755, 199, 959, 40, 386, 781, 691, 274, 246, 495, 809, 238, 912, 177, 58, 378, 100, 119, 762, 567, 63, 832, 245, 626, 350, 433, 761, 884, 489, 955, 68, 652, 9, 922, 541};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 38515.04655708549;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> mixedSamples = {124, 949, 357, 526, 160, 719, 808, 249, 577, 954, 873, 136, 964, 545, 175, 964, 896, 889, 837, 603, 409, 909, 156, 659, 214, 642, 25, 150, 58, 820, 744, 660, 220, 75, 638, 482, 178, 8, 997, 876, 525};
    int k = 6;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9127.784061103732;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> mixedSamples = {570, 50, 239, 895, 584, 528, 897, 185, 152, 219, 45, 47, 970, 7, 103, 648, 298, 42, 925, 210, 599, 847, 178, 682, 79, 927, 13, 576};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 34084.820092044705;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> mixedSamples = {353, 142, 996, 262, 233, 233, 722, 385, 100, 431, 265, 541, 467, 18, 554, 508, 964, 750, 778, 973, 838, 832, 649, 940, 984, 587, 535, 419, 114, 523, 761, 40, 319, 574, 412, 809, 263, 689, 149, 480, 384, 231, 982, 385, 681, 851, 393, 187, 303};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 38951.36536278114;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> mixedSamples = {721, 665, 675, 898, 71, 608, 673, 857, 314, 184, 12, 181, 700, 428, 551, 734, 959, 623, 123, 424, 822, 655, 566, 142, 968, 24, 79, 852, 728, 159, 328, 80, 374, 470, 401, 451, 739, 323, 765, 262, 24, 732, 511, 924, 548, 31, 505};
    int k = 20;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 920.7152777777776;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> mixedSamples = {457, 457, 722, 948, 582, 909, 784, 959, 52, 866, 260, 76, 5, 753, 252, 652, 765, 733, 80, 775, 592, 460, 930, 167, 483, 356, 247, 983, 638, 506, 389, 234, 827, 573, 653, 253, 806, 500, 161, 756, 218, 459, 937, 491, 294, 274, 619, 140};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 39760.86546237519;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> mixedSamples = {450, 390, 251, 441, 566, 886, 455, 812, 782, 587, 504, 917, 326, 852, 937, 477, 193, 388, 461, 525, 277, 775, 245, 536, 262, 618, 129, 582, 20, 741, 571, 790, 803, 477, 572, 165, 891, 992, 945, 201, 19, 927, 7, 354, 314, 433, 739, 718, 380, 152};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 16601.466046688478;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> mixedSamples = {72, 855, 474, 101, 114, 937, 749, 237, 780, 245, 756, 139, 921, 39, 43, 874, 713, 534, 843, 820, 739, 639, 626, 98, 465, 906, 562, 790, 280, 81, 38, 47, 605, 4, 228, 341, 514, 63, 927, 555, 145, 903, 449, 25, 445};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 13318.56845954911;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> mixedSamples = {848, 847, 256, 247, 538, 181, 200, 189, 263, 345, 985, 922, 582, 654, 910, 695, 80, 108, 628, 768, 346, 447, 573, 676, 35, 923, 62, 874, 642, 592, 132, 126, 445, 218, 602, 802, 203, 112, 964, 361, 734, 713, 858, 509, 493};
    int k = 18;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1192.8572222222224;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> mixedSamples = {969, 348, 313, 65, 406, 765, 368, 952, 459, 283, 78, 182, 728, 306, 907, 103, 470, 821, 683, 131, 654, 833, 57, 193, 436, 818, 607, 603, 961, 420, 156, 333, 284, 716, 717, 777, 236, 181, 709, 730, 416, 8, 745, 129, 815, 895, 175, 383, 983};
    int k = 10;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4407.054930555556;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> mixedSamples = {618, 229, 800, 476, 267, 930, 760, 151, 775, 31, 97, 302, 444, 191, 90, 791, 949, 96, 929, 901, 879, 996, 988, 196, 879, 692, 219, 290, 696, 786, 466, 356, 760, 99, 351, 258, 86, 523, 905, 891, 876, 997, 247, 815, 611, 547, 440, 886, 236};
    int k = 6;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 8930.583898735913;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> mixedSamples = {262, 214, 785, 781, 721, 257, 263, 214, 767, 80, 256, 73, 937, 998, 771, 293, 781, 786, 744, 510, 591, 616, 814, 863, 335, 689, 389, 103, 167, 152, 883, 603, 167, 639, 843, 312, 194, 930, 476, 715, 842, 643, 370, 369, 624, 750};
    int k = 6;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 9445.28022955247;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> mixedSamples = {318, 453, 670, 272, 889, 596, 980, 791, 567, 76, 890, 501, 300, 740, 310, 383, 714, 930, 854, 450, 989, 542, 457, 494, 994, 630, 815, 907, 477, 680, 697, 700, 419, 535, 134, 607, 510, 211, 206, 958, 140, 662, 510, 428, 353, 971};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 23057.45416666667;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> mixedSamples = {700, 293, 939, 494, 448, 503, 551, 237, 698, 821, 45, 419, 233, 234, 305, 852, 377, 708, 2, 337, 954, 248, 91, 555, 792, 748, 917, 834, 489, 905, 873, 926, 445, 226, 517, 163, 539, 108, 351, 945, 730, 304, 813, 480, 689, 672, 352, 108, 80};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 23435.036148439824;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> mixedSamples = {624, 932, 195, 302, 347, 630, 824, 889, 797, 134, 64, 204, 863, 944, 55, 13, 86, 886, 942, 279, 471, 666, 84, 7, 742, 187, 646, 221, 192, 754, 301, 765, 754, 148, 282, 946, 59, 78, 943, 353, 403, 932, 305, 759, 416, 423, 816};
    int k = 6;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 7587.8602194837995;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> mixedSamples = {501, 432, 824, 133, 643, 751, 903, 978, 912, 650, 62, 92, 603, 63, 543, 601, 694, 980, 875, 974, 437, 216, 906, 246, 396, 793, 944, 811, 308, 693, 172, 71, 241, 685, 75, 273, 919, 30, 789, 433, 42, 73, 214, 95, 52, 839, 123, 306};
    int k = 10;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 4231.441944444445;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> mixedSamples = {354, 789, 97, 849, 871, 189, 775, 265, 355, 371, 989, 570, 413, 73, 892, 151, 696, 595, 440, 125, 955, 188, 566, 860, 106, 828, 227, 602, 893, 844, 270, 203, 736, 152, 84, 328, 724, 490, 100, 241, 393, 453, 475, 227, 12, 635, 956, 120};
    int k = 32;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 146.75;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> mixedSamples = {496, 778, 484, 346, 628, 330, 297, 747, 21, 911, 214, 270, 85, 120, 789, 691, 863, 392, 132, 35, 907, 798, 972, 809, 4, 701, 424, 606, 351, 958, 445, 761, 770, 696, 419, 222, 861, 776, 924, 240, 740, 375, 358, 135, 346};
    int k = 13;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2081.410367850844;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> mixedSamples = {729, 732, 285, 281, 256, 731, 253, 278, 281, 273, 732, 730, 277, 251, 282, 270, 283, 276, 733, 248, 275, 251, 252, 257, 271, 245, 285, 257, 245, 256, 723, 277, 719, 276, 254, 251, 275, 282, 277, 725, 729, 279, 249, 254, 250, 719, 277, 270, 280};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 56.40544292355372;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> mixedSamples = {807, 745, 742, 617, 608, 754, 758, 744, 614, 749, 747, 616, 818, 810, 619, 758, 757, 745, 742, 755, 811};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 67.13222222222223;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> mixedSamples = {338, 505, 816, 318, 331, 575, 339, 320, 318, 816, 328, 338, 789, 798, 818, 820, 808, 328, 818, 318, 804, 691, 100, 791, 794, 324, 801, 308, 339, 313, 332, 802, 40, 322, 326, 802, 325, 315, 812, 318, 714, 917, 320, 804, 808, 819};
    int k = 10;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 120.5299750754296;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> mixedSamples = {370, 371, 585, 587, 586, 586, 585, 585, 585, 587, 369, 585, 587, 587, 586, 585, 369};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4330621301775146;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> mixedSamples = {480, 479, 501, 477, 477, 131, 477, 505, 489, 119, 106, 485, 473, 478, 491, 487, 478, 129, 101, 487, 490, 120, 482, 108, 473, 470, 115, 127, 115, 108, 470, 497, 469, 115, 472, 486, 485, 498, 100, 486, 475, 481, 471, 489, 97, 112, 505, 112, 485, 480};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 190.92083423442904;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> mixedSamples = {176, 196, 172, 194, 173, 177, 197, 177, 171, 199, 171, 186, 198, 172, 180, 662, 191, 179, 177, 180, 199, 184, 196, 201, 188, 174, 179, 176, 172, 172, 655, 196, 678, 197, 175, 173, 656, 191, 193, 189, 656, 183, 194, 662, 666, 656, 195, 184, 186};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 149.33669504759072;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> mixedSamples = {79, 56, 68, 74, 83, 65, 60, 56, 510, 57, 59, 81, 61, 79, 77, 83, 61, 509, 56, 76, 76, 69, 75, 82, 83, 61, 59, 81, 421, 67, 77, 66, 63, 68, 70, 71, 80, 59, 76, 67, 57, 79, 72, 80, 69, 84, 73, 64, 73, 57};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 80.18571751923946;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> mixedSamples = {215, 364, 212, 215, 214, 206, 211, 204, 208, 204, 204, 366, 204, 360, 206};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 25.13194444444444;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> mixedSamples = {729, 892, 889, 729, 886, 887, 892, 890, 887, 888, 886, 892, 888, 731, 731, 890, 891, 889, 888, 888, 890, 889, 887, 888, 891, 731, 891, 890, 729, 887, 889, 733, 731, 891, 733, 734, 891, 888, 886, 888, 729, 890, 728, 732, 732, 886, 728, 730};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.6943359375;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> mixedSamples = {859, 864, 866, 869, 849, 862, 486, 849, 849, 865, 856, 872, 866, 873, 871, 857, 872, 857, 860, 866, 865, 852, 859, 856, 482, 861, 851, 854, 491, 871, 863, 873, 490, 867, 859, 869, 852, 866, 865, 862, 852, 499, 862, 851, 853, 850, 852, 858, 860, 868};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 85.54666666666667;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> mixedSamples = {691, 443, 695, 443, 888, 739, 695, 886, 693, 887, 445, 442, 442, 885, 695, 885, 443, 441, 443, 889, 694, 885, 888, 692, 444, 888, 887, 442, 886, 694, 887, 887, 889, 886, 885, 443, 444, 441, 692, 691, 443, 887, 695, 441, 887, 695, 885, 692};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 5.369172125788363;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> mixedSamples = {834, 828, 841, 52, 818, 821, 843};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 88.47222222222223;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> mixedSamples = {938, 939, 935, 295, 939, 939, 936, 293, 936, 938, 939, 938, 936, 936, 939, 935, 936, 937, 936, 939, 938, 937, 937, 938, 294, 937, 939, 294, 937, 938, 939, 938, 935, 935, 938, 937, 935, 936, 935, 935, 935, 936, 937, 939, 937, 937, 937};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4355254806412643;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> mixedSamples = {446, 747, 748, 460, 447, 745, 458, 457, 455, 446, 451, 444, 744, 456, 739, 455, 459, 464, 464, 452, 450, 450, 753, 452, 751};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 52.712018140589564;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> mixedSamples = {756, 313, 650, 655, 314, 651, 316, 654, 649, 321, 312, 319, 650, 753, 317, 310, 314, 321, 316, 758, 651, 654, 647, 661, 653, 319, 307, 662, 309, 313, 312, 652, 647, 306, 314, 758, 312, 744, 312, 654, 655, 307, 660, 307, 661, 648, 744, 315, 656};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 75.26147868094938;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> mixedSamples = {125, 8, 8, 9, 125, 7, 7, 461, 939, 7, 8, 941, 533, 7, 7, 9, 7, 7, 8, 461, 652, 894, 189, 9, 9, 773, 329, 9, 461, 350, 709, 9, 462, 984, 9, 124, 226, 626, 9, 7, 657, 168, 463, 462, 869, 814, 666, 7, 831};
    int k = 23;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9907955292570676;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> mixedSamples = {434, 566, 433, 566, 434, 433, 432, 566, 566, 434, 217, 434, 566, 432, 215, 994, 434, 994, 217, 992, 433, 434, 433, 434, 992, 433, 217, 433, 432, 432, 994, 432, 432, 432};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.41;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> mixedSamples = {462, 825, 829, 175, 829, 829, 825, 174, 827, 711, 173, 176, 710, 825, 825, 828, 827, 712, 711, 714, 828, 174, 827, 461, 714, 825, 464, 829, 461, 461, 827, 829, 828, 712, 828, 829, 828, 173, 66, 463, 462, 829, 826, 825, 829};
    int k = 5;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.753968253968253;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> mixedSamples = {520, 520, 698, 697, 697, 698};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> mixedSamples = {755, 904, 330, 331, 331, 906, 331, 904, 330, 329, 905, 905, 329, 329, 906, 329, 330, 331, 331, 331, 330, 330, 331, 331, 329, 331, 331, 904, 904, 754, 905, 329, 906, 331, 329, 906, 330, 904, 329, 904, 906, 905, 329, 904, 331, 329, 331, 329};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7799305555555556;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> mixedSamples = {608, 608, 608, 608, 608, 608, 608, 608, 214, 214, 629, 214, 214, 608, 178, 608, 807, 360, 800, 608, 608, 800, 943, 608, 214, 608, 608, 214, 608, 943, 214, 608, 360, 214, 608, 214, 608, 214, 608, 608, 608, 608, 214, 608, 214, 608};
    int k = 8;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> mixedSamples = {540, 431, 264, 852, 540, 431, 431, 540, 540, 852, 277, 277, 431, 540, 431, 852, 431, 540, 540, 431, 540, 540, 431, 431, 431, 540};
    int k = 5;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> mixedSamples = {915, 147, 147, 147, 146, 147, 997, 364, 183, 112, 238, 732, 491, 147, 886, 739, 147, 883, 506, 577, 329, 147, 463, 147, 886, 277, 147, 159, 147, 324, 723, 886, 147, 253, 394, 811, 712, 500, 147, 174, 723, 704, 670, 630, 147, 886};
    int k = 30;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> mixedSamples = {224, 224, 179, 224, 224, 179, 224, 179, 179, 179, 179, 224, 179, 179, 179, 179, 179, 224, 179, 224, 179, 179, 179, 179, 224, 179, 224, 224, 179, 179, 179, 179, 179, 224, 224, 179, 302, 302, 224, 224, 179};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> mixedSamples = {35, 103, 322, 322, 322, 35, 905, 322, 905, 322, 322, 905, 322, 322, 322, 322, 322, 905, 322, 35, 35, 322, 103, 322, 103, 322, 35, 35, 322, 322, 103, 905, 322, 905, 322, 322, 322, 322, 322, 905, 905, 905, 322, 322, 322, 322, 322, 905, 322, 322};
    int k = 4;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> mixedSamples = {283, 853, 811, 652, 377, 744, 539, 618, 256, 778, 811, 348, 634, 908, 172, 782, 287, 729, 195, 809, 141, 720, 651, 746, 729, 729, 109, 723, 656, 199, 163, 311, 6, 296, 650, 733, 468, 379, 707, 707, 628, 405, 759, 758, 638, 350, 390, 778, 675, 361};
    int k = 26;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 134.0486111111111;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> mixedSamples = {532, 698, 694, 515, 707, 539, 723, 734, 519, 696, 710, 709, 700, 736, 738, 718, 511, 502, 537, 506, 702, 721, 717, 505, 691, 739, 738, 530, 515, 738, 700, 703, 715, 500, 697, 717, 526, 528, 515, 501, 712, 535, 514, 543, 739, 511, 710, 725, 694};
    int k = 2;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 420.7683234244946;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> mixedSamples = {856, 931, 752, 900, 896, 908, 773, 123, 913, 892, 903, 773, 748, 878, 906, 903, 893, 907, 155, 915, 901, 894, 98, 907, 894, 916, 907, 730, 890, 869, 917, 131, 925, 869, 785, 770, 868, 146, 856, 888, 930, 735, 756, 150, 931, 873, 874, 152, 887, 888};
    int k = 3;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1076.4549133378841;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> mixedSamples = {378, 402, 393, 436, 221, 446, 423, 404, 458, 410, 424, 413, 932, 396, 760, 447, 460, 364, 260, 232, 93, 793, 365, 392, 517, 480, 180, 202, 500, 399, 417, 783, 364, 482, 444, 362, 390, 464, 376, 185, 389, 744, 407, 404, 838, 491, 503, 442, 242};
    int k = 10;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 995.7223285147392;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> mixedSamples = {80, 876, 317, 320, 404, 925, 858, 873, 388, 167, 344, 324, 331, 936, 83, 916, 501, 368, 341, 151, 269, 906, 865, 113, 164, 368, 886, 874, 940, 860, 868, 924, 862, 325, 889, 874, 910, 853, 926, 906, 388, 907, 485, 141, 913, 331, 861, 99, 166, 133};
    int k = 7;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1266.8951427655916;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> mixedSamples = {923, 456, 12, 542, 234, 11, 12, 10, 9, 107, 786, 261, 162, 999, 124, 643, 87, 322, 456, 236, 77, 232, 1, 2, 3, 4, 5, 6, 456, 236, 77, 232, 1, 2, 3, 4, 5, 6, 456, 236, 77, 232, 1, 2, 3, 4, 5, 6};
    int k = 9;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1679.3004451798222;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> mixedSamples = {42, 234, 10, 1, 123, 545, 436, 453, 74, 85, 34, 999};
    int k = 5;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1700.7397959183672;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> mixedSamples = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    int k = 35;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 3.75;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> mixedSamples = {1, 122, 97, 373, 200, 23, 718, 584, 580, 209, 857, 489, 228, 296, 204, 90, 824, 939, 211, 465, 448, 516, 55, 626, 203, 523, 2, 31, 720, 235, 83, 131, 637, 212, 457, 708, 984, 552, 313, 845, 424, 597, 740, 286, 158, 619, 138, 314, 343, 995};
    int k = 8;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6416.776360544218;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> mixedSamples = {1, 2, 3, 4, 5, 6, 2, 43, 56, 43, 32, 56, 78, 54, 76, 89, 65, 34, 56, 76, 56, 34, 65, 87, 98, 87, 56, 45, 76, 98, 56, 45, 34, 65, 87, 54, 67, 98, 43, 67, 8, 43, 76, 5, 89, 45, 87, 54, 87, 4};
    int k = 10;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0948072562358275;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> mixedSamples = {432, 452, 643, 235, 674, 234, 643, 354, 323, 67, 86, 865, 345, 342, 123, 654, 777, 444, 999, 1, 433, 752, 345, 741, 643, 323, 754, 634, 776, 999, 357, 1, 1000, 115, 474, 863, 532, 578, 454, 124, 755, 898, 754, 452, 452, 245, 531, 5, 12, 53};
    int k = 15;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 614.7905031179138;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> mixedSamples = {540, 779, 864, 520, 783, 922, 788, 560, 990, 922, 813, 751, 994, 965, 788, 962, 665, 979, 866, 613, 874, 819, 752, 802, 744, 992, 569, 942, 951, 658, 926, 890, 879, 969, 533, 557, 504, 552, 949, 567, 964, 988, 902, 789, 930, 749, 820, 928, 901, 808};
    int k = 25;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 62.35111111111111;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> mixedSamples = {132, 51, 123, 4, 3, 1, 23, 3, 4, 1, 123, 5, 1, 1, 41, 3, 1, 13, 4, 123, 1, 34, 5, 123, 3, 5, 1, 123, 4, 1, 2, 4, 51, 1, 3, 4, 1, 32, 4, 123, 432, 1, 1, 3, 4, 132, 4, 3, 2, 5};
    int k = 15;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> mixedSamples = {123, 32, 45, 98, 78, 65, 4, 23, 1, 5, 2, 9, 654, 456, 789};
    int k = 6;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 418.5815972222222;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> mixedSamples = {42, 468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 913, 668, 300, 36, 895, 704, 812, 323, 334, 674, 665, 142, 712, 254, 869};
    int k = 7;
    MinimumVariancePartition* pObj = new MinimumVariancePartition();
    clock_t start = clock();
    double result = pObj->minDev(mixedSamples, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6232.306172839506;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22668451&rd=10659&pm=7363
********************************************************************************
#include <vector> 
#include <algorithm> 
#include <string> 
#include <sstream> 
#include <cmath> 
#include <iostream> 
#include <stdio.h> 
using namespace std; 
 
 
class MinimumVariancePartition { 
public: 
  double minDev(vector <int> mixedSamples, int k) { 
    vector<int> MS = mixedSamples; 
    int N = MS.size(); 
    sort(MS.begin(), MS.end()); 
    double S[100][100]; 
    int i,j,l,p; 
    double sum; 
    for (i=1;i<=N;i++) 
      for (j=1;j<=k;j++)  
        if (j==1) { 
          sum=0; 
          for (l=1;l<=i;l++) 
            sum+=MS[l-1]; 
          sum = sum/i; 
          S[i][j] = 0; 
          for (l=1;l<=i;l++) 
            S[i][j]+=(MS[l-1]-sum)*(MS[l-1]-sum)/i; 
        } else { 
          S[i][j]=100000000; 
          for (p=2;p<=i;p++) { 
            sum=0; 
            for (l=p;l<=i;l++) 
              sum+=MS[l-1]; 
            sum = sum/(i-p+1); 
            double ans; 
            ans=S[p-1][j-1]; 
            for (l=p;l<=i;l++) 
              ans+=(MS[l-1]-sum)*(MS[l-1]-sum)/(i-p+1); 
            S[i][j]=min(S[i][j],ans); 
          } 
        } 
      return S[N][k]; 
  } 
};

********************************************************************************
*******************************************************************************/