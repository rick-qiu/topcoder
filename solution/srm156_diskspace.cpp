/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1777
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

class DiskSpace {
public:
    int minDrives(vector<int> used, vector<int> total);
};

int DiskSpace::minDrives(vector<int> used, vector<int> total) {
    int ret;
    return ret;
}


int test0() {
    vector<int> used = {448, 499, 29, 477, 534, 548, 62, 326, 695, 460, 384, 706, 269, 216, 602, 822, 60, 321, 85, 369, 641, 934, 242};
    vector<int> total = {702, 911, 132, 673, 823, 550, 973, 893, 984, 517, 639, 810, 619, 536, 860, 849, 939, 479, 610, 962, 808, 939, 919};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> used = {669, 270, 425, 384, 278, 188, 504, 362, 469, 354, 511, 343, 101, 146, 863, 29, 637, 104, 282, 47, 196, 356, 852, 341, 117, 677, 287, 622, 218, 755, 141, 317, 175, 2, 53, 237, 497, 472, 152, 285, 18, 501, 364, 201, 61, 359, 347, 512, 451, 350};
    vector<int> total = {745, 847, 790, 598, 499, 811, 766, 835, 907, 390, 699, 684, 607, 264, 965, 679, 759, 462, 642, 168, 497, 620, 959, 886, 290, 707, 531, 960, 423, 981, 549, 880, 739, 505, 830, 421, 808, 562, 550, 956, 370, 953, 474, 215, 133, 693, 847, 945, 719, 924};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> used = {16, 553, 88, 827, 287, 266, 133, 94, 513, 362, 70, 213, 91, 124, 224};
    vector<int> total = {389, 997, 689, 870, 551, 307, 899, 762, 870, 395, 455, 611, 147, 482, 444};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {12, 454, 325, 313, 227, 682, 629, 107, 548, 453, 14, 49, 510, 109, 227, 175, 22, 109, 199, 517, 116, 197, 106, 856, 24, 88, 101, 307, 572, 6, 184, 465, 282, 36, 108, 229, 478, 389, 781, 396, 403, 212, 3, 694};
    vector<int> total = {236, 627, 333, 826, 884, 997, 678, 124, 746, 876, 190, 818, 951, 693, 753, 262, 684, 248, 954, 904, 163, 921, 254, 994, 67, 214, 763, 370, 594, 802, 327, 752, 893, 389, 492, 279, 930, 573, 784, 438, 747, 593, 966, 850};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> used = {594, 276, 461, 307, 7, 35, 65, 487, 538, 730, 200, 21, 84, 400, 212, 103, 50, 504, 249, 404, 487, 105, 782, 434, 221, 367, 612, 149, 168};
    vector<int> total = {978, 496, 858, 778, 291, 119, 575, 758, 576, 925, 704, 758, 300, 904, 402, 501, 524, 793, 952, 612, 661, 855, 804, 555, 672, 658, 780, 206, 893};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> used = {396, 224, 734, 57, 559, 375, 653, 449, 120, 23, 154, 551, 55, 714, 161, 359, 198, 198, 84, 373, 221, 189, 243, 855, 346, 518, 635, 277, 152, 204, 498, 810, 389, 14, 193, 797, 143, 96};
    vector<int> total = {550, 285, 818, 873, 608, 614, 958, 984, 157, 365, 602, 994, 849, 724, 358, 368, 489, 922, 538, 693, 568, 743, 748, 943, 679, 640, 637, 806, 548, 495, 766, 940, 866, 945, 565, 824, 526, 285};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> used = {329, 234, 824, 321, 368, 151, 693, 261, 30, 500, 56, 106, 133, 562, 357, 193, 57, 505, 127, 44, 46, 780, 70, 85, 577, 296, 490, 69, 391, 456, 336, 706, 707, 819, 503, 52, 506, 81, 37, 776, 655, 88, 399, 935, 103, 505, 319, 476, 115};
    vector<int> total = {625, 659, 925, 895, 965, 379, 725, 413, 155, 1000, 149, 574, 673, 979, 743, 507, 753, 598, 692, 733, 912, 809, 810, 398, 604, 718, 572, 370, 746, 784, 757, 797, 949, 877, 686, 453, 712, 635, 547, 879, 932, 963, 577, 984, 118, 658, 405, 927, 345};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> used = {42, 471, 420, 424, 97, 641, 465, 345, 310, 318, 308, 205, 549, 497, 219, 270, 83, 733, 342, 522, 457, 60, 407, 14, 355, 163, 484, 408, 62, 413, 392, 180, 313, 244, 51, 89, 43, 104, 788};
    vector<int> total = {782, 638, 580, 634, 672, 675, 967, 914, 367, 517, 790, 987, 650, 697, 549, 800, 885, 909, 840, 868, 475, 199, 487, 255, 879, 164, 947, 571, 464, 482, 988, 890, 518, 423, 766, 173, 985, 733, 933};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> used = {211, 150, 398, 478, 252, 538, 450, 147, 200, 518, 48, 9, 176, 74, 237, 891, 735, 725, 655, 310, 86, 39, 206, 498, 170, 137, 128, 46, 137, 158, 200, 641, 3, 164, 412, 109, 358, 197, 661, 150, 419, 166, 437, 383};
    vector<int> total = {379, 799, 445, 595, 936, 844, 993, 944, 987, 730, 465, 309, 478, 186, 326, 991, 946, 849, 855, 665, 113, 349, 343, 657, 400, 331, 817, 332, 453, 373, 730, 862, 657, 445, 675, 752, 716, 548, 753, 517, 555, 557, 582, 866};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> used = {131, 142, 260, 587, 93, 753, 82, 4, 35, 376, 110, 129, 581, 31, 76, 389, 436, 214, 175, 130, 145, 487, 228, 192, 44, 318, 374};
    vector<int> total = {837, 936, 973, 971, 370, 867, 903, 543, 406, 575, 910, 287, 761, 731, 820, 551, 552, 726, 515, 262, 609, 787, 861, 603, 450, 749, 943};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> used = {66, 234, 105, 268, 490, 107, 61, 601, 703, 294, 118, 359, 345, 82, 343, 192, 33, 497, 231, 262, 84, 242, 85, 87, 780, 100, 270, 52, 486, 394, 90, 216, 3, 655, 158, 225, 102, 570, 17, 477, 5};
    vector<int> total = {562, 535, 356, 270, 531, 377, 582, 732, 938, 985, 132, 835, 735, 171, 831, 745, 532, 882, 427, 363, 238, 453, 277, 401, 973, 720, 764, 920, 716, 487, 653, 965, 64, 666, 437, 977, 148, 592, 890, 557, 910};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> used = {419, 815, 21, 386, 699, 369, 254, 227, 40, 214, 403, 630, 489, 455, 243, 222, 134, 129, 241, 231, 302, 448, 470, 200, 534, 627, 331, 210, 36, 609, 254, 446, 905, 558, 275, 907, 82, 82, 317, 12, 831, 448, 447, 790, 335, 185, 151, 158, 296, 548};
    vector<int> total = {454, 995, 134, 732, 942, 861, 519, 659, 939, 306, 762, 751, 710, 983, 337, 904, 415, 922, 408, 984, 538, 747, 891, 415, 880, 942, 936, 554, 185, 771, 890, 820, 942, 749, 592, 974, 841, 637, 883, 674, 910, 840, 603, 824, 780, 267, 299, 898, 473, 889};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> used = {363, 836, 281, 351, 841, 560, 249, 438, 908, 141, 37, 203, 729, 424, 190, 151, 42, 412, 215, 204, 373, 154, 816, 214, 150, 385, 290, 465, 277, 37, 629, 10, 88, 349};
    vector<int> total = {847, 957, 994, 770, 886, 675, 306, 878, 918, 849, 431, 261, 833, 832, 486, 652, 550, 583, 404, 742, 384, 200, 950, 431, 877, 435, 756, 776, 628, 93, 708, 369, 410, 493};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> used = {224, 125, 813, 267, 46, 335, 149, 15, 6, 251, 150, 118, 406, 334, 599, 52, 619, 91, 170, 318, 141, 447, 654, 457, 124, 455, 106, 347, 642, 46, 11, 446, 96, 13, 546, 534, 117, 950, 315, 577, 265, 120, 355};
    vector<int> total = {950, 332, 864, 571, 429, 611, 207, 228, 659, 263, 417, 903, 815, 989, 601, 796, 907, 890, 197, 560, 621, 771, 800, 613, 919, 503, 738, 925, 707, 283, 545, 806, 745, 897, 635, 548, 550, 999, 894, 625, 964, 371, 749};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> used = {711, 280, 863, 493, 222, 400, 946, 296, 13, 213, 35, 182, 232, 360, 136, 515, 373, 94, 682, 427, 472, 203, 54};
    vector<int> total = {856, 621, 880, 499, 871, 645, 946, 886, 999, 416, 654, 306, 514, 403, 304, 614, 984, 300, 886, 536, 578, 774, 435};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> used = {300, 525, 110};
    vector<int> total = {350, 600, 115};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> used = {1, 200, 200, 199, 200, 200};
    vector<int> total = {1000, 200, 200, 200, 200, 200};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {750, 800, 850, 900, 950};
    vector<int> total = {800, 850, 900, 950, 1000};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> used = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    vector<int> total = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> used = {331, 242, 384, 366, 428, 114, 145, 89, 381, 170, 329, 190, 482, 246, 2, 38, 220, 290, 402, 385};
    vector<int> total = {992, 509, 997, 946, 976, 873, 771, 565, 693, 714, 755, 878, 897, 789, 969, 727, 765, 521, 961, 906};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> used = {1};
    vector<int> total = {1};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> used = {150, 1, 1};
    vector<int> total = {150, 150, 500};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> used = {1, 1, 1, 1, 1};
    vector<int> total = {1, 1, 1, 1, 10};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> used = {100, 100, 100, 100};
    vector<int> total = {100, 100, 100, 1000};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> used = {1, 1, 1};
    vector<int> total = {1, 2, 3};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> used = {100, 100, 1};
    vector<int> total = {100, 100, 300};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> used = {250, 550, 750, 150, 50, 650, 550};
    vector<int> total = {300, 600, 800, 200, 100, 700, 600};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> used = {10, 50, 100};
    vector<int> total = {100, 200, 110};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> used = {1, 1, 1, 1};
    vector<int> total = {1, 1, 5, 1};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> used = {5, 5, 5, 5, 5};
    vector<int> total = {9, 9, 9, 9, 100};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {1, 200, 200, 199, 200, 200};
    vector<int> total = {1000, 200, 200, 200, 200, 200};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {1, 1, 1, 1};
    vector<int> total = {1, 1, 6, 1};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {74, 100, 1, 3};
    vector<int> total = {100, 200, 1, 5};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {5, 5, 5, 5, 100};
    vector<int> total = {15, 15, 15, 15, 100};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> used = {30, 30, 30, 60};
    vector<int> total = {50, 50, 50, 200};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> used = {4};
    vector<int> total = {10};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> used = {30, 10, 10};
    vector<int> total = {30, 60, 10};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> used = {40, 40, 1};
    vector<int> total = {50, 50, 120};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {2, 2, 50};
    vector<int> total = {4, 4, 100};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> used = {50, 50};
    vector<int> total = {50, 50};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> used = {1, 200, 200, 199, 200, 200};
    vector<int> total = {200, 200, 200, 200, 200, 1000};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
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
    vector<int> used = {750, 800, 850, 900, 950};
    vector<int> total = {800, 850, 900, 950, 1000};
    DiskSpace* pObj = new DiskSpace();
    clock_t start = clock();
    int result = pObj->minDrives(used, total);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7373863&rd=4585&pm=1777
********************************************************************************
#include <string>
#include <stack>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>
#include <ctype.h>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <time.h>
#include <stdlib.h>
using namespace std;
 
class DiskSpace
{
public:
  int minDrives(vector <int> used, vector <int> total)
  {
    int totalU=accumulate(used.begin(), used.end(), 0);
    sort(total.rbegin(), total.rend());
    
    for(int i=0; i<total.size(); i++)
    {
      if(totalU<=total[i])
        return i+1;
      totalU-=total[i];
    }
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/