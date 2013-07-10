/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11737
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

class SafeRemoval {
public:
    int removeThem(vector<int> seq, int k);
};

int SafeRemoval::removeThem(vector<int> seq, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<int> seq = {1, 4, 1, 4, 2, 3, 2, 3, 2};
    int k = 5;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> seq = {3, 8, 4};
    int k = 1;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> seq = {1, 1, 1, 1, 1, 1};
    int k = 3;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> seq = {1, 6, 1, 10, 1, 2, 7, 11};
    int k = 6;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> seq = {1, 1, 1, 1, 1, 1, 1, 1, 7};
    int k = 3;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> seq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int k = 25;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> seq = {819, 422, 463, 687, 770, 891, 278, 51, 476, 46, 556, 152, 243, 97, 847, 177, 403, 215, 307, 649, 490, 766, 697, 972, 837, 817, 872, 277, 695, 259, 289, 817, 179, 502, 681, 493, 858, 803, 566, 510, 875, 822, 280, 703, 396, 423, 615, 116, 756, 136};
    int k = 5;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 25605;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> seq = {345, 819, 211, 834, 799, 895, 435, 480, 830, 435, 730, 945, 495, 983, 122, 125, 144, 97, 862, 476, 28, 622, 34, 718, 665, 811, 24, 405, 28, 720, 188, 439, 382, 929, 550, 781, 559, 614, 534, 647, 272, 515, 555};
    int k = 16;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18807;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> seq = {823, 458, 806, 115, 383, 412, 971, 433, 31, 718, 837, 824, 684, 240, 775, 624, 861, 850, 776, 787, 979, 23, 115, 924, 747, 155, 993, 850, 713, 932, 606, 784};
    int k = 17;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12997;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> seq = {143, 218, 914, 121, 832, 607, 150, 473, 187, 837, 355, 235, 89, 364, 579, 722, 445, 158, 485, 71, 780, 638, 970, 825};
    int k = 12;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8662;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> seq = {550, 962, 808, 30, 609, 989, 647, 647, 182, 986, 659, 442, 802, 540, 225, 390, 225, 394, 647, 656, 595, 105, 187, 613, 16, 515, 773, 615, 18, 317, 42, 32, 838, 251, 447, 884, 671, 326, 913, 364, 380, 322, 962, 684, 612, 818, 769, 578, 14, 230};
    int k = 32;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14459;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> seq = {672, 125, 553, 308, 444, 799, 374, 50, 37, 687, 876, 232, 650, 409, 926, 84, 460, 836, 301, 446, 873, 545, 101, 334, 379, 49, 531};
    int k = 13;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9298;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> seq = {187, 948, 784, 973, 615, 961, 585, 354, 392, 314, 620, 765, 463, 44, 33, 19, 645, 943, 367, 527, 51, 61, 46, 454, 981, 718, 911, 49, 648, 494, 38, 27, 647, 204, 164, 775, 918, 287, 914, 496, 821, 434, 680, 104, 951, 968, 631, 853, 72, 902};
    int k = 15;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 24425;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> seq = {689, 525, 63, 644, 889, 693, 609, 145, 354, 401, 878, 748, 404, 428, 310, 708, 719, 90, 468, 129, 953, 690};
    int k = 11;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8101;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> seq = {138, 575, 731, 253, 107, 108, 220, 337, 884, 804, 579, 615, 675, 263, 312, 929, 188, 81, 624, 115, 61, 412, 64, 971, 46, 730, 694, 32, 632, 678, 642, 903, 161, 258, 832, 762, 889, 134, 543, 914, 560, 282, 17, 789, 245, 901, 869, 913, 535};
    int k = 32;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14193;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> seq = {294, 802, 472, 274, 366, 574, 643, 562, 209, 524, 375, 907, 818, 202, 741, 490, 696, 965, 228, 568, 831, 255, 533, 64, 676, 39, 304, 930, 108, 199, 224, 953, 153, 454, 626, 244, 77, 768, 443, 458};
    int k = 20;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14079;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> seq = {270, 527, 977, 869, 466, 81, 852, 959, 471, 701, 402, 692, 443, 245, 214, 835, 646, 879, 975, 851, 815, 729, 571, 580, 29, 158, 383, 984, 18, 637, 959, 384, 2, 394, 73, 379, 524, 914, 812, 706, 451};
    int k = 21;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 16363;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> seq = {784, 615, 114, 48, 504, 577, 731, 158, 869, 836, 386, 329, 787, 416, 657, 584, 966, 316, 111, 381, 327, 82, 580, 290, 964, 592, 522, 523, 665, 811, 933, 925, 802, 935, 698, 632, 727, 375, 969, 471, 834, 809, 37, 13, 906, 185, 292, 991};
    int k = 4;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 26879;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> seq = {867, 192, 749, 791, 99, 516, 615, 453, 575, 51, 721, 201, 671, 506, 673, 184, 590, 451, 432, 194, 181, 51, 205, 595, 490, 561, 896, 847, 891, 818, 202, 938, 787, 47, 292, 913, 370, 917, 701, 385, 269, 700, 112};
    int k = 34;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7878;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> seq = {56, 529, 329, 24, 532, 216, 358, 720, 340, 767, 528, 650, 704, 824, 950, 71, 60, 729, 338, 662, 672, 987, 231, 986, 228, 941, 66, 559, 563, 563, 368, 641, 727, 846, 708, 514, 694, 859, 569, 42, 111, 539, 699, 179};
    int k = 41;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2923;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> seq = {571, 971, 843, 355, 595, 65, 632, 486, 990, 169, 393, 578, 694, 943, 881, 156, 451, 934, 491, 12, 895};
    int k = 10;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8949;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> seq = {934, 303, 3, 501, 376, 243, 225};
    int k = 1;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2582;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> seq = {694, 581, 497, 502, 687, 383, 734, 774, 413, 262, 715, 824, 740, 834, 112, 984, 505, 166, 709, 117, 379, 462, 520, 447, 476, 473, 863, 51, 275, 828, 341, 335, 667, 854, 55, 801, 940, 797, 448, 440, 21, 17, 291, 347};
    int k = 24;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15051;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> seq = {514, 96, 653, 441, 867, 366, 302, 675, 451, 551, 314, 810, 31, 594, 258, 629, 875, 985, 47, 84, 437, 642, 793, 460, 773, 504, 755, 491, 615, 952, 360, 433, 405, 508, 928, 500, 472, 615, 399, 999, 914, 638, 99, 192, 610, 541};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5653;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> seq = {222, 411, 173, 336, 846, 979, 967, 886, 275, 93, 412, 830, 853, 910, 675, 847, 716, 27, 356, 731, 761, 900, 480, 429, 737, 6, 452, 265, 851, 498, 612, 163, 641, 463, 1000, 195, 895, 966, 665, 366, 600, 743, 380};
    int k = 12;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 22122;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> seq = {891, 31, 654, 174, 861, 288, 368, 663, 158, 469, 513, 753, 5, 276, 406, 218, 243, 802, 85, 623, 686, 694, 695, 628, 826, 930, 37, 344, 602, 674};
    int k = 13;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11901;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> seq = {972, 248, 102, 505, 936, 326, 851, 273, 296, 193, 103, 676, 919, 296, 913, 983, 457, 730, 294, 753, 615, 26, 138};
    int k = 6;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10795;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> seq = {881, 260, 329, 636, 906, 879, 249, 795, 216, 680, 604, 461, 542, 907, 328, 170, 91, 585, 90, 821, 891, 535, 436, 254, 119, 243, 469, 288, 840, 564, 197, 400, 323, 454, 469, 627, 477, 542, 941, 58, 484};
    int k = 39;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1847;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> seq = {367, 508, 903, 687, 169, 988, 94, 681, 238, 563, 699, 588, 138, 834, 568, 852, 133};
    int k = 15;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1891;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> seq = {412, 767, 67, 334, 884, 453, 975, 930, 673, 968, 827, 673, 652, 520, 98, 692, 276, 852, 249, 348, 829, 907, 548, 415, 880, 810, 654, 142, 345, 355, 827, 250, 855, 747, 488, 170, 772, 248, 206, 132};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3757;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> seq = {657, 611, 313, 790, 533, 503, 284, 217, 120, 237, 820, 898, 861, 174, 255, 369, 519, 150, 582, 313, 350, 141, 789, 171, 518, 245, 346, 623, 436, 347, 919, 26, 119, 313, 555, 893, 590, 950, 801, 171};
    int k = 16;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15227;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> seq = {790, 679, 448, 630, 210, 666, 608, 611, 12, 88, 682, 465, 424, 17, 64, 715, 408, 711, 27, 906, 1, 720};
    int k = 6;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9673;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> seq = {482, 263, 53, 121, 277, 928, 603, 901, 876, 657, 843, 918, 80, 566, 848, 168, 640, 303, 562, 19, 823, 407, 230, 420, 366, 172, 230, 199, 772};
    int k = 4;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13454;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> seq = {367, 240, 150, 358, 109, 770, 568, 225, 628, 906, 915, 925, 132, 521, 613, 698, 626, 717, 292, 887, 681, 11, 369, 566};
    int k = 21;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2746;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> seq = {653, 449, 851, 761, 883, 796, 839, 986, 662, 175, 965, 406, 944, 272, 244, 436, 937, 507, 443, 140, 949, 661, 169, 224, 373, 19, 421, 539, 552, 772, 952, 105, 322, 18, 53, 123, 773, 912, 712, 202, 727, 826, 470, 62};
    int k = 7;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 22765;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> seq = {5, 270, 362, 240, 733, 64, 706, 472, 954, 642, 439, 715, 388, 29, 485, 444, 768, 824, 938, 559, 778, 921, 925, 321, 168, 661, 992, 419, 511, 913, 213, 893, 52, 152, 222, 964, 679, 539, 402, 919, 369, 408, 479, 978, 460, 550};
    int k = 29;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14582;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> seq = {17, 354, 694, 197, 309, 550, 275, 482, 210, 168, 244, 712, 399, 221, 881, 917, 347, 423, 988, 871, 325, 82, 167, 387, 546, 543, 450, 960, 87, 56, 371, 899, 340, 31, 878, 705, 901, 742, 14, 252, 166, 85, 452, 785, 744};
    int k = 14;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18482;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> seq = {580, 751, 126, 897, 589, 977, 231, 912, 504, 397, 631, 458, 893, 892, 688, 417, 855, 344, 281, 288, 631, 211, 485, 616, 467, 170, 92, 346, 700, 2, 786, 299, 357, 974, 337, 33};
    int k = 14;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15049;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> seq = {850, 994, 219, 268, 936, 26, 889, 93, 848, 632, 342, 793, 596, 157, 589, 526, 365, 630, 903, 686, 990, 73, 594, 10, 821, 68};
    int k = 24;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1930;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> seq = {611, 380, 881, 488, 234, 518, 669, 198, 783, 220, 649, 570, 326};
    int k = 8;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3593;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> seq = {543, 886, 530, 321, 918, 887, 195, 432, 794, 46, 688, 403, 873, 603, 934, 883, 210, 620, 516, 683, 227, 890, 968, 215, 102, 650, 19, 605, 486, 614, 395, 459, 764, 396, 548, 76, 476, 552, 778, 573, 61, 841, 106, 419};
    int k = 16;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 19562;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> seq = {296, 260, 591, 931, 848, 51, 890, 142, 24, 671, 492, 816, 572, 496, 525, 205, 915, 548, 668, 135, 709, 223, 838, 965, 373, 226, 397, 30, 313, 383, 884, 200, 930, 416, 912, 839, 606, 715, 115};
    int k = 37;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1895;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> seq = {499, 342, 853, 361, 387, 250, 498, 627, 334, 160, 697, 965, 361, 296, 724, 894, 206, 422, 361, 161, 232, 253, 858, 183, 996, 120, 473, 64, 509, 290, 433, 945, 975, 895, 925, 224, 171, 637, 52, 343, 118, 753, 220, 664, 781, 892, 694};
    int k = 10;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 21643;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> seq = {542, 769, 974, 559, 226, 213, 477, 278, 916, 285, 31};
    int k = 9;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1890;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> seq = {259, 212, 518, 554, 481, 943, 215, 687, 6, 238, 477, 700, 301, 817, 128, 874, 560, 112, 891, 993, 373, 678, 427, 40, 656, 522, 961, 152, 223, 827, 953, 621, 967, 724, 359};
    int k = 1;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 18443;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> seq = {827, 430, 922, 19, 435, 603, 946, 673, 67, 692, 555, 954, 758, 678, 567, 740, 193, 845, 999, 417, 62, 516, 575, 116, 878, 229, 453, 824, 657, 272, 297, 961, 679, 999, 4, 987, 416, 328, 874, 357, 161, 194};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1998;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> seq = {317, 829, 45, 576, 35, 164, 144, 622, 981, 959, 900, 745, 192, 297, 557, 265, 360, 75, 506, 685, 659};
    int k = 20;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> seq = {676, 745, 816, 684, 654, 850, 880, 739, 221, 347, 999, 805, 891, 682, 489, 691, 282, 263, 280, 634, 921};
    int k = 18;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2811;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> seq = {191, 722, 991, 459, 627, 64, 721, 152, 707, 583, 829, 214, 382, 225, 282, 549, 52, 952, 72, 724};
    int k = 12;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6273;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> seq = {325, 142, 255, 735, 369, 173, 860, 663, 348, 315, 144, 300, 105, 139, 794, 304, 639, 904, 987, 144, 867, 437, 184, 959, 759, 486, 88, 385, 283, 439, 248, 577, 223, 340, 818, 220, 991, 893, 315};
    int k = 35;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3841;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> seq = {309, 314, 724, 399, 163, 388, 294, 85, 272, 576, 54, 803, 584, 826, 87, 771, 617, 321, 126, 122, 811, 734, 580, 487, 360, 841, 358, 408, 896, 273, 562, 110, 948, 459, 411, 152, 403, 961, 588, 330, 119, 829, 926, 355, 853, 524, 987, 742};
    int k = 41;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6397;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> seq = {741, 862, 558, 750, 888, 787, 570, 925, 114, 288, 894, 80, 156, 849, 37, 512, 230, 110, 657, 756, 468, 271, 316, 10, 773, 157, 429, 311, 450, 789, 393, 12, 119, 151, 939, 929, 710};
    int k = 23;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11539;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> seq = {762, 962, 606, 270, 815, 577, 337, 343, 597, 28, 727, 588, 911, 469, 880, 935, 184, 637, 292, 765, 21, 614, 200, 665, 292, 834, 909, 870, 922, 294, 78, 502, 926, 97, 575, 108, 640, 873, 377, 687, 848, 104};
    int k = 23;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15545;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> seq = {248, 175, 551, 299, 551, 93, 469, 890, 266, 593, 148, 871, 651, 316, 783, 989, 844, 947, 433, 13, 6, 870, 54, 341, 515, 61, 205, 380, 395, 737, 606, 744, 829, 420, 578, 859, 222, 793, 819, 927, 718, 618, 21, 757, 860, 128, 158, 241, 201, 474};
    int k = 23;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 19843;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> seq = {501, 863, 441, 115, 418, 594, 99, 779, 186, 844, 619, 351, 968, 910, 544, 708, 176, 947, 371, 813, 410, 838, 994, 37, 233, 39, 797, 552};
    int k = 21;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6339;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> seq = {153, 600, 703, 391, 965, 626, 510, 465, 908, 168, 333, 858, 925, 674, 480, 3, 161, 502, 715, 292, 170, 617, 302, 428, 260, 960, 283, 992, 183};
    int k = 19;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8326;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> seq = {934, 969, 920, 914, 924, 924, 953, 932, 951, 946, 991, 981, 919, 991, 959, 968, 972, 963, 986, 939, 999, 924, 933, 948, 933, 976, 986, 986, 959, 939, 902, 905, 928, 954, 915, 941, 1000, 954, 996, 908, 967, 930, 975, 947, 940, 926, 978, 902, 914, 990};
    int k = 49;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> seq = {903, 968, 924, 945, 990, 902, 995, 971, 924, 910, 912, 990, 907, 999, 939, 911, 937, 970, 904, 900, 930, 969, 963, 946, 976, 958, 979, 965, 997, 990, 1000, 987, 902, 932, 993, 907, 931, 906, 971, 909, 915, 900, 969, 978, 988, 969, 925, 910, 935, 996};
    int k = 46;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3991;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> seq = {961, 958, 920, 934, 984, 912, 962, 998, 938, 986, 991, 958, 970, 966, 986, 977, 917, 913, 905, 918, 952, 958, 986, 902, 955, 981, 947, 972, 918, 997, 900, 965, 974, 931, 990, 942, 979, 993, 931, 913, 921, 911, 942, 929, 967, 954, 990, 925, 980};
    int k = 46;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2986;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> seq = {964, 951, 969, 982, 941, 914, 995, 946, 941, 990, 960, 988, 962, 952, 953, 931, 924, 970, 969, 955, 913, 936, 914, 979, 970, 928, 972, 921, 942, 922, 988, 991, 934, 947, 902, 918, 962, 995, 901, 956, 984, 929, 938, 992, 998, 933, 947, 974};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2985;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> seq = {942, 949, 938, 919, 923, 1000, 907, 905, 914, 944, 902, 997, 952, 901, 989, 955, 953, 988, 931, 911, 941, 906, 992, 1000, 960, 937, 900, 965, 924, 930, 978, 947, 920, 921, 939, 961, 967, 989, 981, 950, 904, 964, 951, 931, 939, 941, 950, 910, 976};
    int k = 46;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2997;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> seq = {906, 943, 902, 971, 961, 936, 939, 949, 993, 938, 948, 924, 988, 904, 946, 975, 993, 919, 971, 974, 911, 945, 994, 990, 923, 990, 925, 979, 911, 993, 907, 908, 974, 965, 944, 926, 959, 914, 971, 975, 913, 906, 999, 926, 959, 952, 940, 938, 900, 997};
    int k = 47;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2990;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> seq = {961, 962, 917, 969, 960, 953, 962, 934, 966, 931, 923, 998, 961, 941, 979, 927, 957, 956, 903, 986, 941, 906, 924, 989, 999, 932, 901, 968, 980, 909, 973, 934, 905, 1000, 921, 937, 934, 906, 929, 903, 934, 940, 950, 1000, 963, 987, 969, 949, 960, 953};
    int k = 47;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2999;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> seq = {999, 969, 935, 920, 964, 945, 992, 942, 969, 990, 919, 909, 951, 903, 933, 952, 964, 929, 940, 947, 988, 931, 953, 996, 959, 961, 987, 978, 988, 913, 929, 919, 934, 952, 954, 933, 962, 972, 932, 947, 984, 993, 902, 937, 902, 922, 952, 995, 900};
    int k = 46;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2990;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> seq = {941, 906, 963, 923, 959, 985, 902, 960, 921, 979, 999, 924, 994, 974, 967, 981, 909, 903, 955, 946, 979, 966, 996, 993, 917, 993, 998, 929, 968, 947, 949, 965, 992, 946, 950, 948, 975, 985, 926, 974, 994, 964, 962, 941, 913, 980, 945, 970, 967, 936};
    int k = 47;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2993;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> seq = {919, 903, 920, 912, 977, 916, 976, 926, 917, 943, 934, 913, 972, 918, 957, 925, 931, 928, 956, 946, 900, 936, 947, 960, 910, 934, 997, 948, 983, 961, 1000, 937, 904, 934, 937, 904, 962, 936, 993, 993, 995, 929, 912, 986, 920, 998, 982, 950, 984};
    int k = 48;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> seq = {990, 966, 908, 979, 997, 999, 970, 996, 904, 926, 917, 927, 1000, 950, 989, 911, 983, 980, 998, 918, 989, 908, 948, 941, 908, 988, 921, 927, 995, 903, 926, 946, 943, 969, 937, 995, 901, 975, 966, 962, 918, 989, 950, 966, 911, 937, 970, 921};
    int k = 47;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> seq = {951, 997, 989, 933, 994, 934, 943, 939, 991, 909, 924, 972, 936, 984, 968, 951, 945, 984, 912, 921, 995, 905, 932, 920, 973, 978, 952, 923, 900, 941, 990, 996, 962, 996, 999, 983, 972, 942, 987, 992, 958, 977, 902, 911, 949, 988, 962, 967, 997};
    int k = 48;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> seq = {959, 917, 901, 956, 939, 905, 967, 939, 913, 960, 901, 969, 992, 955, 977, 960, 955, 908, 909, 995, 923, 967, 998, 996, 976, 943, 923, 925, 947, 981, 973, 967, 919, 978, 964, 950, 955, 933, 949, 985, 903, 970, 941, 917, 917, 982, 950, 958, 923};
    int k = 48;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> seq = {923, 991, 975, 904, 958, 922, 982, 945, 907, 922, 996, 965, 922, 982, 972, 912, 963, 989, 999, 921, 901, 941, 985, 988, 972, 972, 983, 933, 971, 937, 912, 920, 983, 955, 943, 947, 912, 988, 965, 972, 925, 997, 938, 990, 987, 990, 955, 955, 964};
    int k = 46;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2987;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> seq = {968, 957, 930, 920, 957, 931, 986, 935, 956, 970, 992, 964, 994, 968, 976, 930, 930, 937, 929, 931, 986, 947, 913, 956, 993, 921, 951, 993, 975, 958, 926, 923, 974, 918, 938, 990, 981, 988, 913, 935, 921, 999, 943, 1000, 993, 999, 929, 929, 916};
    int k = 48;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> seq = {914, 954, 927, 945, 1000, 947, 963, 1000, 932, 953, 910, 924, 979, 973, 906, 901, 941, 999, 984, 946, 991, 974, 906, 938, 933, 911, 1000, 977, 954, 914, 917, 910, 908, 939, 939, 922, 959, 994, 905, 939, 927, 911, 911, 938, 918, 957, 992, 917, 910};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3999;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> seq = {993, 962, 995, 995, 950, 930, 904, 943, 972, 922, 915, 984, 925, 959, 987, 982, 961, 980, 997, 920, 922, 930, 976, 952, 934, 945, 974, 940, 906, 973, 948, 988, 914, 925, 977, 900, 925, 995, 971, 987, 953, 947, 976, 947, 978, 953, 940, 963};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2987;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> seq = {988, 901, 984, 938, 964, 998, 910, 909, 939, 906, 907, 934, 903, 959, 931, 997, 977, 990, 930, 985, 955, 965, 940, 964, 997, 959, 987, 960, 972, 994, 942, 977, 950, 956, 927, 961, 903, 947, 969, 916, 943, 978, 990, 941, 954, 937, 952, 944};
    int k = 46;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1995;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> seq = {961, 922, 954, 969, 990, 994, 913, 926, 991, 963, 976, 907, 916, 948, 934, 950, 924, 999, 981, 965, 924, 938, 999, 995, 903, 909, 931, 917, 911, 902, 994, 976, 946, 998, 945, 926, 935, 975, 992, 957, 971, 960, 997, 959, 997, 934, 963, 996};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2995;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> seq = {916, 995, 979, 922, 908, 926, 961, 998, 991, 914, 915, 953, 995, 910, 938, 946, 960, 929, 924, 974, 982, 941, 946, 936, 965, 967, 909, 971, 958, 997, 908, 997, 979, 904, 954, 989, 976, 953, 941, 947, 973, 937, 952, 921, 990, 952, 985, 956, 918, 991};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4982;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> seq = {983, 912, 981, 961, 968, 912, 965};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4858;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> seq = {978, 940, 969, 934, 977, 981};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3905;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> seq = {942, 962, 943, 931, 963, 984, 958};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4810;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> seq = {960, 928, 968, 989};
    int k = 3;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 989;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> seq = {959, 909, 974, 986, 906, 969, 940};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4797;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> seq = {2, 4, 3, 4, 2, 1, 3};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> seq = {4, 2, 3, 2, 3, 1, 4};
    int k = 3;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> seq = {4, 3, 3, 2, 4, 2};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> seq = {3, 3, 4, 4};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> seq = {3, 4, 1, 2, 1};
    int k = 3;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> seq = {905, 905, 965, 973, 961, 945, 957, 981, 905, 905, 961, 917, 941, 925, 929, 981, 981, 945, 997, 937, 937, 933, 985, 945, 989, 913, 953, 937, 973, 977, 909, 977, 981, 921, 985, 945, 977, 985, 981, 997, 945, 985, 977, 981, 965};
    int k = 37;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> seq = {905, 985, 989, 945, 937, 901, 901, 913, 901, 993, 969, 929, 941, 949, 953, 997, 985, 921, 917, 933, 949, 941, 969, 997, 921, 917, 941, 933, 917, 945, 977, 953, 941, 929, 997, 945, 933, 961, 973, 937, 913, 989, 941, 937, 965, 997};
    int k = 41;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> seq = {993, 977, 949, 993, 905, 917, 901, 933, 957, 901, 985, 909, 961, 933, 933, 929, 977, 985, 921, 901, 941, 961, 905, 917, 909, 941, 941, 929, 941, 989, 941, 965, 921, 953, 953, 997, 949, 925, 957, 917, 905, 909, 965, 917, 961, 997, 901};
    int k = 43;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> seq = {937, 957, 989, 977, 973, 933, 977, 957, 917, 957, 961, 901, 913, 957, 929, 969, 901, 981, 949, 913, 909, 993, 985, 933, 993, 917, 925, 921, 941, 917, 933, 917, 909, 965, 913, 909, 921, 937, 925, 981, 937, 965, 921, 985, 981, 969, 977, 921, 901};
    int k = 43;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> seq = {997, 925, 961, 921, 945, 997, 905, 925, 989, 933, 913, 985, 957, 997, 969, 953, 977, 965, 909, 901, 909, 981, 989, 989, 945, 917, 985, 993, 945, 913, 973, 917, 925, 941, 997, 949, 917, 933, 981, 957, 901, 997, 945};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> seq = {933, 933, 981, 945, 969, 945, 985, 961, 905, 949, 989, 901, 941, 977, 981, 917, 909, 925, 905, 905, 997, 909, 985, 933, 957, 973, 945, 933, 965, 937, 917, 993, 969, 961, 985, 973, 929, 917, 997, 993, 965, 993, 969, 937, 953, 997, 969, 933, 969, 965};
    int k = 37;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> seq = {917, 997, 933, 913, 981, 905, 989, 965, 961, 973, 949, 933, 901, 933, 989, 969, 909, 949, 941, 997, 945, 981, 921, 937, 929, 913, 993, 997, 905, 973, 937, 969, 933, 929, 901, 905, 905, 933, 961, 997, 913, 997, 965, 941, 953, 977, 981, 925, 961};
    int k = 37;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> seq = {905, 957, 905, 953, 997, 969, 945, 901, 929, 977, 997, 981, 949, 989, 965, 929, 917, 901, 909, 929, 993, 905, 993, 961, 989, 973, 985, 969, 949, 937, 905, 929, 921, 925, 989, 917, 969, 913, 985, 917, 909, 949, 941, 925, 905, 913, 949};
    int k = 39;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> seq = {937, 929, 949, 993, 913, 909, 993, 905, 901, 921, 969, 901, 909, 965, 901, 901, 909, 909, 953, 969, 945, 961, 985, 949, 961, 953, 981, 993, 905, 989, 965, 993, 925, 965, 949, 917, 961, 965, 969, 977, 981, 985, 925, 977, 941, 981, 957};
    int k = 38;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> seq = {951, 907, 995, 991, 923, 918, 995, 951, 937, 922, 998, 991, 975, 986, 931, 909, 998, 927, 927, 931, 959, 997, 906, 905, 903, 997, 951, 977, 971, 927, 967, 957, 955, 951, 966, 935, 925, 961, 921, 942, 957, 975, 971, 949, 933};
    int k = 44;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> seq = {973, 906, 978, 951, 983, 915, 981, 935, 993, 911, 929, 955, 903, 963, 965, 933, 905, 911, 971, 969, 919, 985, 997, 939, 974, 909, 927, 930, 991, 927, 919, 918, 917, 997, 998, 965, 921, 971, 906, 961, 982, 971, 903, 907, 969, 971, 994, 922, 985};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12838;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> seq = {969, 963, 953, 911, 957, 911, 931, 977, 955, 905, 963, 915, 929, 949, 987, 913, 941, 958, 951, 981, 929, 985, 909, 997, 910, 953, 933, 922, 989, 945, 935, 917, 985, 905, 930, 985, 974, 981, 975, 963, 989, 915, 913, 975, 913, 937};
    int k = 39;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6917;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> seq = {997, 967, 910, 995, 942, 973, 954, 945, 914, 919, 957, 961, 909, 922, 969, 977, 947, 935, 925, 903, 957, 997, 999, 978, 994, 935, 951, 929, 969, 969, 907, 942, 951, 913, 913, 989, 975, 935, 938, 903, 951, 995, 938, 909, 999, 993};
    int k = 43;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2995;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> seq = {913, 914, 999, 921, 966, 986, 974, 981, 995, 955, 914, 993, 959, 929, 923, 918, 967, 999, 995, 954, 999, 933, 935, 933, 901, 923, 927, 914, 907, 925, 993, 903, 929, 923, 929, 983, 911, 923, 945, 945, 983, 993, 998, 959, 929, 923, 979, 953};
    int k = 44;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3995;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> seq = {946, 991, 927, 945, 914, 954, 987, 949, 902, 946, 933, 969, 937, 943, 974, 909, 943, 910, 959, 913, 986, 938, 961, 939, 919, 939, 995, 934, 941, 954, 945, 961, 923, 927, 925, 930, 999, 922, 953, 986, 902, 942, 994, 927, 978, 982, 905, 927, 934};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3979;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> seq = {963, 990, 941, 901, 905, 999, 941, 943, 931, 905, 927, 931, 989, 985, 971, 969, 993, 903, 957, 905, 935, 967, 910, 957, 955, 933, 951, 990, 998, 903, 914, 969, 945, 927, 965, 925, 927, 981, 918, 995, 927, 981, 966, 987, 973, 990, 955};
    int k = 42;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4975;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> seq = {978, 937, 963, 929, 901, 945, 937, 915, 991, 975, 961, 977, 949, 909, 955, 931, 967, 918, 911, 959, 995, 990, 926, 991, 973, 963, 927, 954, 983, 969, 918, 947, 919, 953, 969, 929, 954, 950, 939, 951, 965, 906, 981, 959, 902, 994};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5942;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> seq = {903, 919, 946, 957, 975, 962, 929, 999, 999, 985, 911, 907, 977, 902, 971, 917, 957, 975, 943, 941, 997, 953, 982, 907, 967, 997, 945, 966, 991, 986, 931, 986, 903, 911, 987, 925, 913, 985, 951, 959, 957, 955, 914, 967, 929};
    int k = 41;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3986;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> seq = {959, 926, 917, 990, 955, 937, 905, 963, 961, 931, 957, 949, 986, 969, 979, 985, 995, 947, 945, 951, 905, 910, 987, 935, 958, 991, 974, 919, 963, 955, 903, 974, 974, 974, 947, 923, 947, 905, 931, 906, 915, 975};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1986;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> seq = {965, 998, 955, 985, 935, 985, 965, 999, 983, 903, 991, 985, 937, 921, 981, 907, 973, 982, 969, 903, 997, 939, 911, 995, 966, 943, 943, 951, 937, 947, 979, 914, 975, 993, 975, 995, 966, 953, 905, 991, 917, 927, 949};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6966;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> seq = {979, 929, 917, 971, 903, 933, 935, 909, 957, 997, 937, 927, 985, 949, 957, 913, 981, 911, 941, 943, 925, 925, 923, 973, 905, 907, 950, 963, 987, 943, 955, 954, 923, 989, 951, 939, 959, 973, 927, 953, 959, 933, 915, 957, 965, 971};
    int k = 42;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3958;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> seq = {995, 939, 989, 989, 985, 959, 975, 995, 973, 973, 953, 953, 905, 945, 915, 999, 947, 943, 915, 915, 970, 911, 911, 975, 903, 974, 903, 931, 989, 957, 970, 906, 963, 941, 977, 954, 907, 919, 951, 929, 953, 941, 979, 931, 933, 939};
    int k = 42;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3978;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> seq = {983, 910, 919, 974, 971, 961, 943, 949, 927, 998, 949, 975, 915, 905, 945, 925, 997, 987, 905, 915, 905, 974, 945, 913, 906, 963, 979, 919, 911, 998, 915, 993, 925, 979, 971, 967, 921, 973, 915, 959, 934, 985, 933, 941, 949, 929, 902, 929, 907};
    int k = 38;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10847;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> seq = {959, 915, 919, 963, 965, 945, 901, 937, 969, 979, 917, 975, 915, 967, 955, 983, 998, 953, 913, 945, 971, 965, 902, 983, 919, 911, 970, 927, 969, 919, 979, 937, 985, 959, 925, 997, 935, 922, 949, 973, 991, 923, 915, 961, 999, 993, 993};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10874;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> seq = {911, 985, 967, 929, 931, 995, 901, 959, 938, 946, 995, 942, 987, 901, 923, 938, 915, 959, 951, 917, 999, 943, 937, 905, 985, 927, 965, 917, 998, 993, 989, 969, 987, 975, 902, 945, 937, 927, 961, 931, 982, 911, 919, 914, 925};
    int k = 38;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6954;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> seq = {985, 957, 949, 975, 917, 979, 937, 943, 983, 925, 901, 935, 981, 941, 933, 917, 975, 979, 909, 933, 991, 930, 979, 975, 923, 909, 917, 977, 965, 987, 993, 942, 926, 907, 994, 942, 911, 998, 999, 963, 930, 998, 987, 933};
    int k = 39;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4982;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> seq = {974, 969, 971, 931, 995, 921, 955, 927, 955, 971, 927, 959, 999, 903, 975, 953, 941, 947, 957, 969, 931, 917, 937, 979, 959, 965, 963, 925, 985, 943, 985, 991, 973, 981, 946, 903, 987, 941, 917, 947};
    int k = 38;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1994;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> seq = {977, 929, 935, 923, 961, 910, 921, 985, 917, 919, 989, 921, 969, 919, 981, 914, 977, 943, 943, 929, 919, 949, 949, 989, 994, 943, 925, 937, 934, 986, 937, 991, 951, 913, 971, 903, 902, 926, 951, 947, 981, 970, 963, 926, 923, 902, 985, 987, 995, 911};
    int k = 41;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8901;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> seq = {935, 967, 962, 945, 945, 991, 993, 945, 931, 925, 925, 945, 903, 995, 937, 939, 939, 933, 939, 937, 919, 995, 971, 989, 935, 991, 939, 937, 935, 913, 978, 965, 955, 981, 914, 949, 961, 963, 987, 947, 989, 963, 923, 987};
    int k = 43;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 995;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> seq = {905, 934, 906, 969, 925, 925, 902, 938, 915, 963, 921, 993, 973, 902, 906, 949, 979, 989, 922, 989, 903, 937, 903, 917, 917, 926, 902, 921, 983, 997, 982, 978, 957, 986, 965, 965, 901, 931, 945, 993, 971, 938, 946, 913, 969, 991, 966, 941};
    int k = 44;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3974;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> seq = {921, 901, 958, 983, 913, 945, 981, 953, 977, 998, 914, 998, 966, 994, 990, 979, 902, 953, 997, 910, 957, 934, 902, 994, 917, 977, 933, 998, 921, 926, 957, 990, 991, 930, 998, 993, 957, 922, 937, 917, 989};
    int k = 39;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1995;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> seq = {910, 966, 923, 989, 935, 994, 995, 966, 926, 982, 915, 909, 911, 929, 965, 927, 994, 905, 929, 978, 933, 990, 961, 958, 945, 941, 905, 953, 966, 975, 915, 997, 993, 913, 969, 965, 914, 978, 993, 998, 981, 927, 910, 985, 901, 973, 939, 937, 917, 929};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4978;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> seq = {981, 918, 961, 906, 982, 906, 963, 981, 993, 999, 906, 929, 906, 994, 967, 942, 906, 938, 914, 977, 921, 942, 909, 937, 986, 946, 946, 991, 965, 911, 949, 917, 985, 982, 955, 978, 998, 935, 935, 918, 913, 986, 914, 961, 989};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 8921;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> seq = {981, 906, 910, 911, 946, 943, 933, 977, 970, 911, 942, 950, 962, 901, 905, 921, 935, 949, 989, 957, 918, 937, 910, 925, 966, 929, 990, 974, 970, 942, 987, 961, 938, 955, 910, 901, 905, 949, 917, 902};
    int k = 35;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4921;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> seq = {958, 929, 982, 955, 961, 998, 905, 966, 969, 994, 909, 914, 977, 978, 970, 962, 961, 942, 905, 958, 953, 981, 902, 925, 961, 949, 918, 905, 910, 982, 977, 938, 919, 931, 918, 901, 906, 929, 910, 978, 991, 921, 974, 987, 966, 949, 967, 909, 997};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 12791;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> seq = {933, 910, 905, 907, 922, 941, 942, 986, 937, 985, 994, 986, 905, 989, 922, 937, 941, 939, 902, 953, 929, 957, 930, 985, 950, 989, 957, 939, 990, 993, 981, 957, 961, 942, 946, 922, 951, 974, 922, 910, 917, 905, 945, 901, 943, 985};
    int k = 41;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 4955;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> seq = {901, 958, 966, 973, 949, 962, 974, 971, 909, 974, 937, 917, 993, 930, 949, 971, 929, 990, 963, 973, 942, 938, 969, 910, 953, 905, 925, 957, 929, 901, 953, 910, 961, 945, 914, 949, 962, 925, 998, 997, 929};
    int k = 37;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3978;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> seq = {925, 930, 982, 925, 989, 983, 903, 918, 986, 958, 906, 954, 970, 970, 909, 907, 919, 973, 933, 974, 997, 917, 922, 941, 909, 937, 945, 998, 946, 977, 901, 966, 941, 957, 995, 914, 922, 990, 926, 927, 962, 958, 985, 969, 906, 998, 966};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 6953;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> seq = {914, 917, 921, 930, 925, 954, 945, 903, 993, 982, 946, 954, 949, 934, 918, 998, 993, 998, 942, 966, 903, 967, 906, 994, 954, 942, 1, 931, 957, 953, 958, 981, 934, 921, 973, 926, 979, 962, 933, 953, 3, 949, 973, 918, 922, 978, 910, 917, 946};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3983;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> seq = {987, 959, 951, 927, 983, 987, 959, 927, 907, 935, 939, 971, 907, 999, 959, 963, 947, 903, 971, 979, 947, 959, 995, 919, 943, 987, 931, 987, 907, 911, 943, 959, 979, 903, 963, 979, 963, 959, 931, 951, 971, 979, 959, 943, 937};
    int k = 41;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> seq = {915, 951, 919, 919, 975, 915, 943, 911, 951, 911, 963, 935, 915, 975, 951, 943, 955, 971, 911, 947, 939, 987, 915, 931, 971, 971, 923, 967, 915, 923, 975, 939, 995, 939, 923, 951, 983, 947, 935, 987, 945, 907, 995, 959, 931, 991, 967, 903};
    int k = 43;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> seq = {943, 935, 903, 951, 947, 951, 975, 915, 923, 947, 999, 991, 903, 935, 907, 983, 902, 959, 975, 971, 903, 963, 975, 983, 923, 931, 946, 971, 927, 915, 983, 955, 999, 903, 983, 979, 939, 943, 983, 927, 967, 903, 911, 999};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> seq = {919, 967, 979, 967, 955, 907, 947, 995, 939, 923, 927, 967, 943, 923, 939, 927, 927, 923, 959, 951, 907, 987, 991, 919, 955, 961, 907, 999, 943, 955, 963, 991, 951, 907, 927, 947, 971, 907, 963, 939, 971, 935, 975, 987, 935, 983, 939};
    int k = 36;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> seq = {911, 943, 955, 987, 911, 995, 903, 939, 971, 975, 955, 979, 903, 979, 955, 987, 979, 955, 923, 963, 951, 931, 987, 923, 999, 927, 947, 947, 911, 931, 919, 987, 923, 975, 907, 955, 915, 931, 999, 962, 975, 903, 919, 903, 983, 987, 931, 959, 943};
    int k = 42;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> seq = {915, 995, 951, 939, 975, 991, 931, 911, 991, 907, 935, 995, 947, 999, 943, 979, 903, 951, 945, 991, 919, 971, 903, 935, 979, 959, 927, 995, 907, 983, 946, 983, 975, 951, 927, 907, 991, 931, 983, 903, 995, 951, 991, 995, 907, 959, 927, 943};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> seq = {907, 979, 987, 991, 935, 991, 943, 959, 959, 947, 939, 955, 919, 915, 971, 915, 981, 903, 959, 951, 975, 987, 935, 903, 931, 947, 979, 915, 995, 919, 935, 971, 923, 974, 963, 995, 959, 902, 955, 967, 963, 967, 951, 931, 933};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> seq = {911, 987, 915, 983, 987, 971, 955, 923, 983, 983, 903, 947, 935, 947, 995, 947, 971, 955, 983, 943, 955, 982, 955, 999, 995, 923, 995, 907, 979, 931, 943, 951, 975, 923, 991, 935, 931, 991, 935, 971, 971, 986, 919, 989, 903, 919, 955};
    int k = 42;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> seq = {931, 967, 943, 959, 931, 947, 923, 951, 915, 926, 967, 915, 995, 907, 995, 979, 907, 943, 943, 979, 943, 991, 995, 931, 907, 939, 903, 991, 919, 959, 979, 987, 979, 915, 983, 979, 971, 947, 943, 963, 999, 979, 931, 911};
    int k = 35;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> seq = {951, 951, 907, 987, 955, 975, 967, 995, 931, 943, 991, 943, 967, 979, 939, 963, 979, 931, 987, 975, 983, 959, 911, 951, 907, 983, 955, 915, 915, 995, 959, 903, 903, 947, 987, 931, 975, 979, 983, 903, 963, 939, 999, 971, 979};
    int k = 37;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> seq = {1, 2, 2, 2};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> seq = {1, 6, 1, 10, 1, 2, 7, 11};
    int k = 6;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> seq = {3, 1, 2};
    int k = 1;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> seq = {3, 6, 10, 15, 103};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> seq = {1, 8, 8, 18, 10};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> seq = {2, 8, 9, 11};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> seq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int k = 35;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 645;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> seq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 48;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> seq = {2, 5, 5, 5, 5, 5};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> seq = {1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> seq = {916, 967, 741, 692, 3, 563, 432, 103, 111, 752, 359, 390, 381, 63, 279, 267, 885, 654, 843, 481, 882, 694, 235, 149, 763, 940, 98, 330, 662, 75, 512, 376, 485, 176, 478, 845, 889, 646, 960, 519, 495, 59, 479, 128, 400, 91, 472, 194, 909, 595};
    int k = 10;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 23455;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> seq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 40, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 49;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> seq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> seq = {1, 2, 3, 5, 5, 9, 13, 17};
    int k = 4;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> seq = {1, 6, 1, 10, 1, 2, 7, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 3};
    int k = 30;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 747;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> seq = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> seq = {2, 3, 3, 3, 3, 3};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> seq = {1, 2, 2, 2, 2, 2};
    int k = 4;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> seq = {1, 101, 105, 6, 10};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 207;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> seq = {1, 2, 2, 2, 69, 96, 96, 96, 96, 96, 96, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 1, 1, 11, 2, 31, 312, 156, 163, 163, 152, 132, 991, 999, 994, 959, 151, 151, 151, 515};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1993;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> seq = {1, 2, 2, 10};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> seq = {1, 1, 1, 2, 1, 1, 40, 50, 60, 70, 604, 102, 403, 4, 5, 6, 7, 8, 5, 3, 4, 5, 6, 7, 76, 5, 32, 5, 254, 234, 23, 41, 2, 31, 23, 123, 423, 545, 345, 3, 4, 678, 9, 7, 8, 4, 5, 7, 8, 6};
    int k = 40;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 3711;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> seq = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 4};
    int k = 24;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> seq = {2, 3, 3, 5};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> seq = {1, 161, 2, 5, 165, 6, 9, 169, 10, 13, 173, 14, 17, 177, 18, 21, 181, 22, 25, 185, 26, 29, 189, 30, 33, 193, 34, 37, 197, 38, 41, 201, 42, 45, 205, 46, 49, 209, 50, 3};
    int k = 39;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> seq = {1, 1, 1, 1, 1};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> seq = {1, 2, 6, 40, 46};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> seq = {1, 6, 10, 14};
    int k = 2;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> seq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int k = 45;
    SafeRemoval* pObj = new SafeRemoval();
    clock_t start = clock();
    int result = pObj->removeThem(seq, k);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22658074&rd=15175&pm=11737
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cctype> 
#include <iostream> 
#include <string> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <vector> 
#include <algorithm> 
#include <utility> 
#include <functional> 
using namespace std; 
bool f[55][55][55][55]; 
vector<int> a[4]; 
int res,todo; 
void dfs(int a0,int a1,int a2,int a3,int removed){ 
  if((a1+a2*2+a3*3)%4==0)return; 
  if(f[a0][a1][a2][a3])return; 
  f[a0][a1][a2][a3]=true; 
  if(removed==todo){ 
    int now=0; 
    for(int i=0; i<a0; i++) 
      now+=a[0][i]; 
    for(int i=0; i<a1; i++) 
      now+=a[1][i]; 
    for(int i=0; i<a2; i++) 
      now+=a[2][i]; 
    for(int i=0; i<a3; i++) 
      now+=a[3][i]; 
    if(res==-1 || res<now)res=now; 
    return; 
  } 
  if(a0>0)dfs(a0-1,a1,a2,a3,removed+1); 
  if(a1>0)dfs(a0,a1-1,a2,a3,removed+1); 
  if(a2>0)dfs(a0,a1,a2-1,a3,removed+1); 
  if(a3>0)dfs(a0,a1,a2,a3-1,removed+1); 
} 
class SafeRemoval{ 
  public: 
  int removeThem(vector <int> seq, int k){ 
    todo=k; 
    for(int i=0; i<4; i++) 
      a[i].clear(); 
    for(int i=0; i<seq.size(); i++) 
      a[seq[i]%4].push_back(seq[i]); 
    for(int i=0; i<4; i++) 
      sort(a[i].begin(),a[i].end(),greater<int>()); 
    memset(f,0,sizeof(f)); 
    res=-1; 
    dfs((int)a[0].size(),(int)a[1].size(),(int)a[2].size(),(int)a[3].size(),0); 
    return res; 
  } 
   
  
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/