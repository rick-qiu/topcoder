/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2928
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

class TransportCounting {
public:
    int countBuses(int speed, vector<int> positions, vector<int> velocities, int time);
};

int TransportCounting::countBuses(int speed, vector<int> positions, vector<int> velocities, int time) {
    int ret;
    return ret;
}


int test0() {
    int speed = 100;
    vector<int> positions = {0};
    vector<int> velocities = {0};
    int time = 0;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int speed = 5;
    vector<int> positions = {10, 10};
    vector<int> velocities = {0, 1};
    int time = 2;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int speed = 5;
    vector<int> positions = {10, 10};
    vector<int> velocities = {0, 1};
    int time = 3;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int speed = 998;
    vector<int> positions = {1000, 1, 1000};
    vector<int> velocities = {997, 998, 0};
    int time = 999;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int speed = 564;
    vector<int> positions = {};
    vector<int> velocities = {};
    int time = 607;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int speed = 777;
    vector<int> positions = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    vector<int> velocities = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    int time = 333;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int speed = 372;
    vector<int> positions = {729, 221, 185, 686, 518, 560, 20, 686, 390, 874, 936, 451, 423, 952, 500, 13, 165, 896, 195};
    vector<int> velocities = {818, 683, 607, 434, 297, 1, 399, 506, 857, 145, 703, 845, 900, 187, 412, 404, 110, 679, 807};
    int time = 717;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int speed = 716;
    vector<int> positions = {454, 537, 44, 665, 438, 475, 897, 698, 828, 79, 233, 101};
    vector<int> velocities = {919, 887, 572, 65, 704, 223, 306, 912, 979, 141, 337, 117};
    int time = 753;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int speed = 203;
    vector<int> positions = {22, 219, 966, 33, 860, 487, 737, 312, 348, 424, 693, 481, 274, 394, 150, 979, 962};
    vector<int> velocities = {691, 39, 124, 4, 72, 850, 798, 765, 126, 99, 328, 623, 255, 611, 120, 338, 406};
    int time = 585;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int speed = 631;
    vector<int> positions = {790, 657, 142, 760, 577, 263, 612, 660, 847, 270, 433, 486, 392, 191, 595, 657, 160, 252, 825, 665, 617, 213, 844, 902, 798};
    vector<int> velocities = {750, 790, 764, 306, 454, 315, 808, 86, 461, 709, 770, 481, 310, 29, 516, 113, 541, 328, 846, 709, 535, 371, 564, 452, 649};
    int time = 516;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int speed = 508;
    vector<int> positions = {440, 979, 712, 82, 205, 565, 622, 81, 171, 435, 913, 161, 682, 947, 918, 238, 947, 534, 88, 94, 149, 839, 396, 572, 574, 721, 537, 816, 855, 195, 839, 655, 96, 253, 649, 622, 192};
    vector<int> velocities = {190, 370, 148, 984, 885, 877, 711, 437, 645, 822, 767, 10, 878, 147, 862, 774, 375, 148, 746, 833, 62, 427, 568, 537, 85, 996, 598, 887, 818, 896, 724, 90, 701, 242, 988, 899, 297};
    int time = 971;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int speed = 219;
    vector<int> positions = {736, 942, 913, 719, 806, 787, 385, 874, 482, 262, 397, 40, 924, 252, 228, 29, 946, 963, 287, 432, 26, 773, 821, 879, 13, 313, 854, 345, 980, 714, 442, 966, 986, 376, 232, 644, 80, 990, 144, 0, 133, 414, 10, 544, 266, 287, 359, 276, 929, 776};
    vector<int> velocities = {236, 606, 278, 150, 293, 272, 526, 872, 32, 892, 262, 514, 421, 982, 578, 350, 829, 853, 385, 963, 112, 869, 356, 617, 373, 963, 812, 606, 707, 495, 606, 377, 965, 3, 968, 891, 809, 819, 661, 923, 193, 814, 38, 140, 736, 599, 117, 456, 746, 845};
    int time = 83;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int speed = 513;
    vector<int> positions = {437, 543, 800, 293, 848, 427, 844, 678, 711, 403, 602, 281, 73, 301, 320, 367, 273, 823, 914, 477, 147, 736, 807, 941, 133, 620, 123, 184, 115, 545};
    vector<int> velocities = {966, 475, 172, 205, 826, 704, 714, 456, 352, 822, 62, 923, 363, 426, 793, 501, 486, 120, 672, 939, 390, 717, 246, 601, 923, 439, 668, 965, 340, 800};
    int time = 887;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int speed = 365;
    vector<int> positions = {863, 756, 557, 179, 995, 680, 238, 665, 8, 592, 50, 114, 355, 288, 173, 157, 592, 12, 954, 555, 567, 255, 842, 20, 174, 766, 776, 634, 7, 52, 734, 538, 982, 343, 985, 226, 714, 89, 321, 147, 892, 596, 0, 644, 157, 976, 744, 318, 161};
    vector<int> velocities = {90, 598, 343, 600, 777, 252, 978, 665, 420, 639, 537, 518, 64, 38, 635, 256, 833, 180, 842, 14, 928, 585, 819, 562, 813, 315, 631, 709, 165, 195, 253, 950, 898, 284, 642, 933, 683, 703, 676, 865, 423, 613, 911, 241, 8, 205, 205, 146, 958};
    int time = 525;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int speed = 368;
    vector<int> positions = {579, 8, 55, 781, 199, 180, 914, 828, 357, 801, 777, 943, 439, 307, 810, 15, 566, 782, 498, 535, 396, 405, 114, 192, 70, 984, 840, 718, 793, 687, 862, 384, 664};
    vector<int> velocities = {377, 613, 967, 578, 790, 312, 706, 717, 940, 973, 940, 390, 951, 26, 424, 280, 760, 241, 199, 157, 536, 637, 288, 261, 996, 421, 152, 824, 326, 975, 577, 781, 70};
    int time = 356;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int speed = 531;
    vector<int> positions = {556, 28, 401, 340, 725, 755, 190, 865, 808, 582, 274, 156, 88, 699, 782, 568, 852, 465, 206, 582, 791, 585, 212, 601, 418, 366, 731, 156, 966, 257, 244, 33, 263, 244, 452, 528, 726, 701, 73, 963, 570, 654, 224, 877, 821, 85};
    vector<int> velocities = {768, 129, 799, 661, 827, 201, 314, 693, 726, 526, 646, 250, 775, 500, 770, 610, 230, 921, 476, 35, 543, 689, 729, 84, 94, 254, 953, 57, 109, 972, 226, 625, 685, 258, 771, 877, 42, 605, 910, 589, 323, 307, 923, 326, 847, 540};
    int time = 614;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int speed = 29;
    vector<int> positions = {262, 90, 646, 548, 432, 679, 684, 24, 420, 186, 953, 381, 931, 410, 502, 509, 476, 501, 188, 999, 144, 312};
    vector<int> velocities = {308, 867, 85, 386, 93, 950, 786, 163, 875, 737, 893, 540, 945, 151, 450, 582, 867, 652, 819, 439, 893, 119};
    int time = 455;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int speed = 549;
    vector<int> positions = {753, 952, 761, 791, 211, 524, 587, 64, 250, 543, 754, 113, 797, 620, 441, 525, 523, 27, 957, 823, 47, 449, 458, 591, 618, 944, 219, 715, 987, 904, 862, 230, 470, 750, 559, 731, 836, 895, 356, 826, 650, 806, 972, 20};
    vector<int> velocities = {472, 300, 54, 321, 937, 57, 985, 888, 961, 78, 160, 554, 303, 487, 109, 229, 209, 115, 810, 216, 369, 40, 854, 152, 497, 146, 432, 23, 444, 381, 805, 9, 333, 236, 244, 126, 374, 738, 134, 784, 334, 202, 4, 340};
    int time = 941;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int speed = 806;
    vector<int> positions = {956, 86, 156, 759, 404};
    vector<int> velocities = {229, 693, 924, 116, 150};
    int time = 705;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
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
    int speed = 637;
    vector<int> positions = {190, 83, 798, 108, 206, 738, 278, 66, 466, 376};
    vector<int> velocities = {493, 449, 314, 245, 315, 809, 57, 212, 543, 551};
    int time = 728;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int speed = 3;
    vector<int> positions = {242, 180, 285, 720, 964, 418, 574, 15, 185, 251, 132, 532, 614, 308, 213, 225, 544, 851, 206, 237, 3, 439, 980, 485, 647, 284, 906, 628, 863, 30, 943, 498, 14, 679, 483, 24, 444, 335};
    vector<int> velocities = {949, 522, 87, 713, 405, 154, 725, 177, 152, 146, 393, 559, 241, 983, 363, 863, 215, 930, 104, 12, 912, 436, 215, 234, 569, 506, 607, 178, 693, 546, 14, 465, 80, 6, 854, 208, 454, 191};
    int time = 505;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int speed = 444;
    vector<int> positions = {58, 696, 298, 64, 132, 704, 862, 456, 214, 892};
    vector<int> velocities = {507, 735, 741, 526, 550, 479, 671, 479, 789, 392};
    int time = 985;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
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
    int speed = 212;
    vector<int> positions = {342, 427, 861, 757, 77, 921, 387, 538, 171, 226, 617, 615, 743, 26, 335, 460, 24, 83, 362, 873, 649, 94, 711, 636, 69, 280, 735, 907, 646, 258, 403, 35, 209, 961, 706, 430, 520, 44, 98, 684, 36, 226, 711, 359, 746, 103, 847};
    vector<int> velocities = {342, 938, 737, 234, 258, 117, 292, 403, 52, 115, 934, 714, 688, 57, 511, 561, 858, 26, 900, 18, 715, 221, 806, 147, 936, 770, 596, 13, 162, 713, 117, 52, 413, 461, 810, 90, 10, 214, 58, 838, 180, 565, 494, 669, 650, 295, 937};
    int time = 671;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int speed = 797;
    vector<int> positions = {208, 974, 790, 784, 68, 175, 520, 388, 364, 900, 822, 341, 113, 513, 953, 873, 102, 410, 648, 800, 595, 667, 61, 559, 805, 210, 815, 849, 983, 592, 327, 159, 546, 731, 551, 396, 831, 918};
    vector<int> velocities = {346, 766, 855, 172, 462, 532, 788, 74, 27, 790, 201, 140, 247, 663, 339, 679, 285, 488, 897, 845, 258, 987, 671, 398, 189, 36, 355, 609, 308, 649, 806, 603, 640, 720, 80, 275, 429, 948};
    int time = 975;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int speed = 590;
    vector<int> positions = {74, 757, 92, 722, 505, 69, 397, 933};
    vector<int> velocities = {549, 584, 697, 653, 326, 365, 820, 568};
    int time = 759;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int speed = 827;
    vector<int> positions = {145, 274, 858, 709, 649, 684, 783, 939, 392, 350};
    vector<int> velocities = {384, 515, 445, 935, 737, 734, 575, 156, 509, 426};
    int time = 974;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int speed = 234;
    vector<int> positions = {597, 280, 699, 897, 348, 826, 531, 360, 40, 265, 574, 72, 699};
    vector<int> velocities = {894, 974, 407, 164, 915, 52, 761, 22, 923, 631, 704, 435, 386};
    int time = 78;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int speed = 571;
    vector<int> positions = {129, 892, 611, 455, 419, 394, 260, 334, 219, 918, 417, 281, 191, 849, 804, 227, 330, 173, 924, 951, 574, 977, 804, 447, 602, 624, 791, 954, 222, 476, 876, 99, 563, 913, 797, 513, 680, 56, 962, 949};
    vector<int> velocities = {174, 550, 147, 572, 801, 914, 950, 675, 880, 816, 977, 191, 0, 400, 149, 475, 777, 317, 771, 134, 973, 604, 221, 920, 446, 21, 686, 773, 631, 919, 143, 406, 137, 264, 929, 757, 864, 951, 916, 848};
    int time = 469;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int speed = 405;
    vector<int> positions = {873, 139, 469, 463, 196, 827, 653, 196, 573, 929, 835, 864, 784, 253, 660, 135, 236, 856, 582, 256, 65, 117, 729, 96, 811, 940, 382, 656, 782, 991, 7};
    vector<int> velocities = {623, 67, 246, 474, 791, 941, 615, 183, 408, 616, 127, 387, 472, 14, 685, 179, 301, 126, 335, 350, 371, 592, 262, 548, 484, 977, 786, 761, 427, 382, 953};
    int time = 931;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int speed = 575;
    vector<int> positions = {716, 977, 625, 583, 64, 628, 525, 454, 242, 227, 6, 609, 427, 798, 547, 55, 813, 421, 113, 14, 477, 587, 157, 201, 478, 900, 160, 42};
    vector<int> velocities = {766, 259, 772, 635, 857, 566, 485, 782, 810, 950, 500, 504, 667, 184, 240, 435, 672, 518, 498, 331, 257, 858, 356, 37, 948, 137, 201, 140};
    int time = 174;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int speed = 711;
    vector<int> positions = {457, 713, 470, 509, 945, 604, 100, 966, 747, 65, 430, 227, 124, 514, 896, 271, 135, 999, 41, 889, 621, 946, 432, 14, 104, 204, 15, 12, 173, 796, 952, 810, 161, 909, 979, 668, 595, 403, 996, 523, 871, 860, 787, 692, 456, 391, 752, 519, 987, 923};
    vector<int> velocities = {860, 22, 879, 628, 689, 445, 158, 298, 448, 233, 633, 886, 622, 137, 961, 297, 729, 889, 234, 303, 36, 578, 607, 290, 937, 30, 103, 655, 947, 194, 955, 527, 65, 157, 39, 181, 5, 972, 226, 259, 210, 435, 202, 20, 664, 848, 947, 426, 494, 166};
    int time = 502;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int speed = 577;
    vector<int> positions = {656, 484, 750, 52, 443, 851, 505, 137, 451, 191, 864, 201, 246, 435, 740, 343, 454, 419, 309, 869, 125, 537, 704, 886, 317, 649, 621, 592, 954, 211, 353, 776, 412, 36, 249, 39, 842, 148, 163};
    vector<int> velocities = {120, 479, 718, 250, 605, 200, 40, 856, 413, 967, 615, 123, 39, 671, 172, 281, 862, 851, 306, 179, 382, 844, 432, 142, 402, 193, 786, 17, 863, 938, 849, 46, 310, 418, 620, 952, 544, 469, 284};
    int time = 68;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int speed = 430;
    vector<int> positions = {451, 895, 709, 40, 72};
    vector<int> velocities = {134, 824, 776, 638, 582};
    int time = 161;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
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
    int speed = 801;
    vector<int> positions = {248, 547, 657, 920, 555, 539, 169, 525, 115, 363, 489, 44, 208, 855, 855, 623, 703, 6, 808, 482, 505, 56, 722, 234, 190, 173, 687, 732, 948, 708, 185, 576, 536, 742, 937, 537, 991};
    vector<int> velocities = {188, 201, 758, 552, 879, 699, 38, 650, 591, 969, 32, 111, 955, 384, 310, 275, 470, 914, 4, 292, 500, 888, 141, 257, 308, 563, 768, 974, 498, 822, 325, 898, 350, 678, 68, 573, 338};
    int time = 950;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int speed = 923;
    vector<int> positions = {379, 346, 461, 461, 645, 647, 451, 170, 323, 851, 391, 946, 560, 291, 783, 520, 738, 169, 470, 451, 571, 486, 414, 449, 918, 889, 379, 134, 75, 499, 523, 124, 695, 531, 764, 683, 915, 655, 838, 622, 360, 186};
    vector<int> velocities = {932, 109, 35, 341, 57, 367, 763, 227, 3, 451, 21, 526, 96, 451, 483, 561, 93, 942, 38, 881, 291, 912, 873, 46, 640, 864, 420, 181, 652, 221, 114, 824, 761, 668, 64, 265, 253, 132, 764, 923, 783, 650};
    int time = 970;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int speed = 867;
    vector<int> positions = {470, 368, 488, 146, 383, 661, 841, 593, 498, 994, 0, 122};
    vector<int> velocities = {576, 916, 236, 756, 212, 615, 679, 623, 68, 866, 388, 874};
    int time = 106;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int speed = 119;
    vector<int> positions = {199, 561, 984, 30, 521, 596, 43, 734, 221, 455, 989, 392, 89, 398, 270, 40, 438, 274, 195, 479};
    vector<int> velocities = {385, 116, 185, 920, 244, 104, 838, 969, 613, 745, 530, 991, 580, 238, 545, 428, 448, 338, 702, 439};
    int time = 113;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
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
    int speed = 38;
    vector<int> positions = {288, 167, 531, 753, 630};
    vector<int> velocities = {939, 416, 536, 216, 74};
    int time = 129;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
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
    int speed = 206;
    vector<int> positions = {362, 740, 466, 105, 344, 439, 602, 582, 870, 65, 462, 538, 3, 596, 394, 354, 983, 10, 929, 536, 374, 876, 159, 969, 739, 895, 628, 448, 931, 862, 830, 937, 461, 985, 286, 191, 356, 546, 373, 165, 890, 679, 51, 76, 478, 171, 884};
    vector<int> velocities = {734, 140, 491, 422, 704, 522, 268, 642, 720, 571, 890, 662, 118, 863, 118, 541, 669, 741, 675, 458, 747, 73, 402, 849, 41, 464, 20, 460, 276, 842, 741, 958, 40, 100, 304, 910, 325, 689, 526, 875, 504, 434, 918, 640, 859, 807, 641};
    int time = 930;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int speed = 46;
    vector<int> positions = {983, 378, 627, 203, 338, 575, 15, 717, 369, 78, 163, 267, 99, 523, 105, 869, 611, 84, 378, 890, 466, 646, 875, 132, 366, 407, 183, 441, 941, 647, 926, 438, 446, 912, 571, 529, 838, 201, 742};
    vector<int> velocities = {529, 360, 548, 599, 452, 582, 155, 158, 146, 836, 432, 724, 850, 679, 772, 51, 643, 939, 488, 243, 448, 211, 211, 860, 558, 593, 766, 282, 30, 196, 865, 874, 337, 900, 85, 467, 370, 736, 671};
    int time = 405;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int speed = 50;
    vector<int> positions = {336, 364, 166, 318, 249, 347, 389, 400, 18, 412};
    vector<int> velocities = {465, 267, 544, 999, 948, 451, 440, 961, 417, 116};
    int time = 961;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int speed = 884;
    vector<int> positions = {729, 754, 914, 586, 824, 969, 280, 173, 279, 158, 17, 621, 533, 983, 518, 438, 196, 723, 146, 714, 645, 269, 671, 101, 961, 980};
    vector<int> velocities = {776, 618, 144, 80, 553, 675, 197, 310, 857, 670, 867, 507, 957, 175, 222, 392, 996, 36, 887, 920, 749, 101, 986, 249, 73, 84};
    int time = 47;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int speed = 336;
    vector<int> positions = {94, 88, 951, 553, 283, 658, 667, 981, 683, 158, 441, 570, 104, 715, 347, 600, 55, 995, 675, 788, 673, 43, 789, 16, 606, 272, 993, 327, 649, 260, 198, 314, 716};
    vector<int> velocities = {867, 855, 953, 535, 682, 26, 191, 59, 635, 814, 489, 172, 163, 300, 747, 859, 585, 299, 283, 326, 93, 402, 254, 629, 794, 537, 554, 751, 719, 300, 80, 602, 969};
    int time = 123;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int speed = 75;
    vector<int> positions = {973, 614, 695, 88, 392, 624, 400, 455, 775, 709, 304, 151, 512, 496, 108, 710, 486, 675, 774, 773, 870, 259, 729, 400, 930, 602, 722, 109, 629, 820, 736, 714, 662, 913, 50, 347, 209, 435, 47, 968, 532, 311, 562, 235, 1000};
    vector<int> velocities = {17, 558, 913, 288, 248, 486, 88, 379, 259, 394, 797, 498, 428, 463, 975, 689, 660, 272, 263, 216, 416, 402, 962, 557, 751, 286, 638, 511, 202, 395, 429, 334, 266, 506, 85, 485, 118, 276, 349, 981, 650, 648, 429, 506, 628};
    int time = 180;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int speed = 539;
    vector<int> positions = {135, 799, 160, 485, 108, 887, 150, 719, 936};
    vector<int> velocities = {606, 191, 768, 113, 562, 893, 841, 639, 7};
    int time = 711;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int speed = 978;
    vector<int> positions = {74, 373, 566, 222, 485, 778, 697, 685, 101, 556, 102, 445, 940, 138, 59, 814, 781, 3, 851, 428, 983, 465, 470, 990, 368, 928, 940, 171, 975, 963, 672, 950, 33, 370, 650, 137};
    vector<int> velocities = {958, 529, 580, 192, 708, 498, 460, 427, 472, 411, 693, 335, 578, 40, 924, 308, 286, 50, 85, 287, 1000, 723, 211, 951, 182, 644, 59, 139, 596, 243, 746, 250, 297, 85, 681, 725};
    int time = 157;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int speed = 625;
    vector<int> positions = {146, 679, 275, 381, 632, 81, 649, 13, 748, 722, 276, 554, 61, 919, 680, 850, 250, 850, 206, 396, 448, 653, 329, 661, 602, 755, 817, 771, 48, 43};
    vector<int> velocities = {119, 717, 704, 257, 489, 518, 412, 195, 420, 537, 381, 307, 308, 500, 611, 542, 430, 489, 524, 427, 592, 838, 469, 570, 581, 655, 886, 329, 143, 488};
    int time = 399;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int speed = 921;
    vector<int> positions = {256, 122, 69, 560, 521, 442, 861, 699, 615, 425, 868, 528, 906, 732, 177, 608, 119, 29, 237, 711, 270, 508, 594, 974, 570, 166, 455, 565, 594, 259, 134, 989, 489, 87, 751};
    vector<int> velocities = {888, 680, 70, 90, 872, 669, 207, 306, 333, 606, 786, 274, 191, 887, 381, 957, 713, 87, 427, 335, 840, 266, 542, 420, 348, 940, 886, 195, 98, 513, 446, 857, 992, 505, 348};
    int time = 338;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int speed = 907;
    vector<int> positions = {610, 557, 144, 100, 244, 23, 942, 943, 274, 482, 353, 282, 689, 371, 692, 435, 834, 705, 188, 749, 403, 639, 995, 956, 909, 109};
    vector<int> velocities = {853, 273, 286, 700, 777, 272, 210, 922, 899, 338, 959, 538, 181, 989, 235, 211, 514, 301, 808, 856, 661, 592, 161, 401, 468, 543};
    int time = 789;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int speed = 313;
    vector<int> positions = {3, 570, 237, 627, 634, 384, 782, 205, 413, 751, 815, 999, 782, 50, 465, 351, 689, 541, 542};
    vector<int> velocities = {558, 13, 706, 783, 20, 968, 817, 501, 178, 123, 43, 947, 453, 338, 353, 609, 639, 181, 939};
    int time = 706;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int speed = 916;
    vector<int> positions = {772, 996, 25, 959, 994, 553, 860, 366, 31, 297, 987, 420, 488, 507, 577, 306, 792, 324, 548, 359, 821, 961, 44, 506, 107, 97, 865, 995, 163, 49, 513, 48, 734, 443, 574, 128, 539, 786, 725, 357, 657, 72, 514, 685, 32, 112, 483};
    vector<int> velocities = {982, 493, 229, 235, 312, 166, 439, 907, 667, 91, 971, 93, 894, 3, 439, 667, 717, 457, 872, 22, 155, 918, 764, 924, 585, 533, 481, 928, 546, 470, 429, 797, 752, 947, 633, 204, 716, 795, 555, 437, 468, 912, 610, 680, 234, 835, 527};
    int time = 423;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int speed = 39;
    vector<int> positions = {201, 881, 592, 626, 327, 501, 151, 393, 850, 88, 472, 153, 320, 808, 714, 766, 690, 764, 894, 298, 180, 429, 800, 362, 210, 975, 235, 971, 60, 122, 897, 879, 331, 979, 499, 257, 414, 37, 142, 332, 228, 289, 97, 432, 636, 933, 286, 695, 907};
    vector<int> velocities = {435, 398, 653, 603, 202, 404, 44, 532, 796, 830, 588, 594, 121, 843, 490, 706, 731, 797, 714, 144, 601, 521, 63, 29, 322, 485, 607, 529, 178, 893, 822, 454, 355, 63, 314, 140, 875, 398, 976, 16, 811, 253, 545, 961, 955, 212, 328, 528, 442};
    int time = 998;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int speed = 978;
    vector<int> positions = {410, 329, 696, 828, 276};
    vector<int> velocities = {335, 669, 621, 778, 573};
    int time = 820;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int speed = 98;
    vector<int> positions = {776, 709, 902};
    vector<int> velocities = {468, 757, 554};
    int time = 373;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int speed = 433;
    vector<int> positions = {766, 25, 539, 176, 45, 310, 426, 149, 742, 545};
    vector<int> velocities = {283, 628, 862, 90, 581, 263, 522, 90, 302, 657};
    int time = 123;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int speed = 710;
    vector<int> positions = {596, 587, 745, 518, 25, 276, 660, 632, 885, 974, 540, 249, 807, 690, 440};
    vector<int> velocities = {96, 142, 115, 924, 279, 399, 838, 454, 933, 771, 371, 729, 423, 574, 621};
    int time = 56;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int speed = 5;
    vector<int> positions = {0, 0, 0};
    vector<int> velocities = {4, 5, 6};
    int time = 10;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int speed = 5;
    vector<int> positions = {0, 0, 0};
    vector<int> velocities = {4, 5, 6};
    int time = 10;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int speed = 5;
    vector<int> positions = {0};
    vector<int> velocities = {10};
    int time = 10;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int speed = 1;
    vector<int> positions = {0};
    vector<int> velocities = {2};
    int time = 2;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int speed = 1;
    vector<int> positions = {0};
    vector<int> velocities = {2};
    int time = 1;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int speed = 1;
    vector<int> positions = {0};
    vector<int> velocities = {2};
    int time = 5;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int speed = 15;
    vector<int> positions = {45};
    vector<int> velocities = {20};
    int time = 6;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
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
    int speed = 5;
    vector<int> positions = {0, 0, 0};
    vector<int> velocities = {2, 5, 20};
    int time = 5;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int speed = 1;
    vector<int> positions = {1};
    vector<int> velocities = {1};
    int time = 1;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int speed = 1;
    vector<int> positions = {0};
    vector<int> velocities = {4};
    int time = 1;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int speed = 5;
    vector<int> positions = {0, 0, 0};
    vector<int> velocities = {20, 20, 20};
    int time = 1;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int speed = 1;
    vector<int> positions = {5};
    vector<int> velocities = {5};
    int time = 11;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int speed = 5;
    vector<int> positions = {10, 10};
    vector<int> velocities = {0, 1};
    int time = 2;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int speed = 2;
    vector<int> positions = {1};
    vector<int> velocities = {1};
    int time = 1;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int speed = 1;
    vector<int> positions = {2};
    vector<int> velocities = {1};
    int time = 10;
    TransportCounting* pObj = new TransportCounting();
    clock_t start = clock();
    int result = pObj->countBuses(speed, positions, velocities, time);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8383272&rd=5853&pm=2928
********************************************************************************
#include <list> 
#include <algorithm> 
#include <functional> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <set> 
#include <iostream> 
#include <deque> 
#include <cctype> 
 
//#include <map> 
//#include <stack> 
//#include <numeric> 
//#include <queue> 
using namespace std; 
 
#define FO(i,n) for(int i=0;i<(n);++i) 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i) 
#define FORD(i,a,b) for(int i=(a);i>=(b);--i) 
#define FOREACH(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it) 
#define ALL(cont) (cont).begin(),(cont).end() 
#define PB push_back 
#define NX(cont) next_permutation(ALL(cont)) 
#define DB (double) 
 
typedef long long LL; 
 
const int INF = 1000000000; 
const double EPS = 0.0000001; 
#define SIDX string::size_type 
#define NPOS string::npos 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef deque<int> DI; 
typedef deque<string> DS; 
typedef list<int> LI; 
typedef list<string> LS; 
 
typedef vector< VI > VII; 
typedef deque< DI > DII; 
 
VS tokenize(string s, string tokens); 
inline void lower(string &s); 
inline void upper(string &s); 
 
template<class T> inline string l2s(T x); 
template<class T> inline T nwd(T a, T b); 
template<class T> inline T nww(T a, T b); 
template<class T, class Con> inline bool is(const T &x, const Con &container); 
template<class Con> void print(const Con& container); 
template<class Con> void print2(const Con& container); 
template<class Con, class T> inline T suma(const Con &container, T &w); 
#define SUM(con) suma((con), (*(con).begin())) 
template<class Con, class T> inline int count(const T &x, const Con &container); 
template<class Con> inline double avg(const Con &container); 
#define MIN(con) (*min_element(ALL(con))) 
#define MAX(con) (*max_element(ALL(con))) 
 
 
/*****************************************************************************/ 
 
class TransportCounting 
{ 
    public: 
    int countBuses(int speed, vector <int> pos, vector <int> v, int time) 
    { 
        int res = 0; 
      int n = v.size(); 
 
      int s = time*speed; 
 
      FO(i,n) 
      { 
        if(pos[i] == 0) 
        { 
          ++res; 
          continue; 
        } 
 
        if(s >= pos[i] + v[i]*time) 
          ++res; 
      } 
      return res; 
    } 
 
 
}; 
 
/*****************************************************************************/ 
 
 
 
VS tokenize(string s, string tokens) { 
  s = s + tokens; 
  VS res; 
  string tmp; 
  for (unsigned int i = 0; i < s.length(); i++) { 
    if(tokens.find(s[i]) != NPOS) { 
      if (tmp != "") 
        res.push_back(tmp); 
      tmp = ""; 
    } 
    else tmp += s[i]; 
  } 
  return res; 
} 
 
inline void lower(string &s) { 
  FOREACH(it,s) 
    *it = tolower(*it); 
} 
 
inline void upper(string &s) { 
  FOREACH(it,s) 
    *it = toupper(*it); 
} 
 
template<class T> inline string l2s(T x) { 
  ostringstream o; 
  o << x; 
  return o.str(); 
} 
 
template<class T> inline T nwd(T a, T b) { 
  return b==0 ? a : nwd(b, a%b); 
} 
 
template<class T> inline T nww(T a, T b) { 
  return a*b/nwd(a,b); 
} 
 
template<class T, class Con> inline bool is(const T &x, const Con &container) { 
  return find(ALL(container),x) != container.end(); 
} 
 
template<class Con> void print(const Con& container) { 
  FOREACH(it,container) 
    cout << *it << " "; 
  cout << "\n"; 
} 
 
template<class Con> void print2(const Con& container) { 
  FOREACH(it,container) { 
    FOREACH(jt,*it) 
      cout << *jt << " "; 
    cout << "\n"; 
  } 
} 
 
template<class Con, class T> inline T suma(const Con &container,T &w) { 
 
  try { 
    T wynik = 0; 
    FOREACH(it,container) 
      wynik+=(*it); 
    return wynik; 
  }catch(...) 
  { 
    T wynik; 
    FOREACH(it,container) 
      wynik+=(*it); 
    return wynik; 
  } 
} 
template<class Con, class T> inline int count(const T &x, const Con &container) { 
  int res = 0; 
  FOREACH(it,container) 
    if(*it == x) 
      ++res; 
  return res; 
} 
 
template<class Con> inline double avg(const Con &container) { 
  double suma = 0; 
  FOREACH(it,container) 
    suma+=(*it); 
 
  return suma/(double)container.size(); 
} 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/