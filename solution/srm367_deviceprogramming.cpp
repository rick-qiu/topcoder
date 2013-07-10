/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7810
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

class DeviceProgramming {
public:
    long minBytes(vector<int> offset, vector<int> size, int maxPacketSize, int overhead);
};

long DeviceProgramming::minBytes(vector<int> offset, vector<int> size, int maxPacketSize, int overhead) {
    long ret;
    return ret;
}


int test0() {
    vector<int> offset = {0, 42, 60};
    vector<int> size = {40, 15, 2};
    int maxPacketSize = 26;
    int overhead = 6;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 78;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> offset = {0, 42, 60};
    vector<int> size = {40, 15, 13};
    int maxPacketSize = 26;
    int overhead = 6;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 92;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> offset = {0, 2, 13};
    vector<int> size = {1, 7, 2};
    int maxPacketSize = 10;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> offset = {10264, 111, 357, 100066, 714};
    vector<int> size = {117, 134, 235, 2395, 23};
    int maxPacketSize = 100;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 3254;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> offset = {1, 100000000, 450000000};
    vector<int> size = {99999999, 315000000, 500000000};
    int maxPacketSize = 1000;
    int overhead = 30;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 943298999;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> offset = {4, 30, 44, 67, 69, 100, 115, 126, 142, 163, 193, 221, 237, 245, 262, 284, 311, 330, 343, 346, 362, 388, 415, 430, 459, 466, 475, 497, 509, 532, 560, 587, 611, 625, 640, 661, 684, 689, 700, 714, 734, 741, 769, 796, 805, 821, 850, 874, 886, 918};
    vector<int> size = {19, 7, 22, 1, 23, 11, 7, 9, 19, 23, 22, 15, 2, 17, 18, 17, 18, 11, 1, 16, 16, 22, 11, 23, 2, 7, 19, 7, 20, 21, 19, 16, 7, 7, 21, 14, 2, 1, 9, 12, 6, 28, 23, 3, 16, 21, 22, 4, 28, 24};
    int maxPacketSize = 25;
    int overhead = 15;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2015;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> offset = {0, 25, 40, 55, 87, 99, 103, 117, 143, 146, 177, 219, 222, 235, 243, 272, 281, 308, 321, 338, 355, 383, 424, 439, 476, 506, 549, 568, 585, 610, 628, 663, 697, 711, 731, 748, 784, 797, 818, 843, 869, 882, 917, 936, 965, 992, 1020, 1054, 1073, 1108};
    vector<int> size = {23, 8, 13, 32, 9, 2, 7, 25, 2, 21, 33, 3, 13, 1, 19, 3, 22, 6, 9, 14, 21, 31, 6, 32, 19, 32, 16, 12, 20, 10, 31, 31, 9, 18, 6, 25, 3, 18, 23, 16, 11, 29, 13, 24, 27, 26, 24, 16, 30, 30};
    int maxPacketSize = 19;
    int overhead = 8;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1634;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> offset = {6, 27, 46, 51, 68, 82, 103, 110, 124, 147, 150, 163, 168, 177, 193, 199, 206, 218, 237, 257, 267, 284, 288, 298, 313, 339, 363, 379, 398, 410, 416, 436, 462, 473, 488, 508, 522, 543, 550, 566, 587, 595, 599, 609, 628, 646, 651, 673, 692, 699};
    vector<int> size = {15, 19, 1, 11, 12, 19, 3, 12, 18, 1, 12, 2, 9, 15, 1, 5, 7, 15, 17, 5, 14, 3, 5, 15, 21, 18, 15, 12, 9, 4, 20, 21, 4, 13, 14, 14, 19, 2, 11, 18, 3, 4, 8, 17, 18, 2, 16, 17, 1, 7};
    int maxPacketSize = 9;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 736;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> offset = {4, 24, 27, 31, 61, 84, 111, 128, 148, 180, 190, 205, 211, 219, 248, 266, 285, 302, 321, 330, 339, 367, 379, 389, 400, 407, 424, 453, 455, 471, 482, 511, 538, 566, 584, 609, 636, 667, 690, 701, 709, 721, 734, 744, 756, 789, 794, 821, 842, 866};
    vector<int> size = {18, 3, 1, 26, 20, 21, 12, 18, 23, 5, 15, 5, 4, 27, 17, 16, 13, 12, 7, 4, 25, 10, 9, 3, 6, 14, 25, 1, 13, 6, 23, 24, 21, 10, 21, 20, 26, 20, 7, 1, 7, 4, 6, 12, 24, 4, 22, 17, 21, 19};
    int maxPacketSize = 11;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 881;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> offset = {8, 24, 44, 50, 63, 74, 86, 103, 123, 127, 143, 148, 166, 189, 195, 210, 228, 232, 243, 256, 258, 266, 272, 283, 296, 313, 323, 343, 350, 365, 379, 384, 391, 400, 417, 428, 435, 459, 477, 484, 499, 506, 529, 534, 553, 558, 559, 566, 586, 597};
    vector<int> size = {14, 17, 2, 12, 10, 7, 17, 16, 2, 10, 1, 15, 17, 4, 11, 18, 2, 10, 8, 2, 3, 1, 5, 11, 11, 9, 18, 5, 13, 12, 1, 3, 4, 13, 6, 5, 18, 15, 3, 10, 7, 17, 1, 15, 3, 1, 5, 16, 8, 3};
    int maxPacketSize = 16;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1325;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> offset = {5, 17, 36, 61, 79, 122, 166, 191, 235, 246, 278, 326, 337, 367, 404, 441, 481, 507, 523, 540, 575, 593, 610, 643, 659, 684, 711, 719, 753, 777, 812, 856, 864, 898, 919, 942, 961, 991, 1021, 1035, 1050, 1061, 1080, 1115, 1142, 1172, 1197, 1207, 1235, 1257};
    vector<int> size = {6, 17, 20, 17, 36, 34, 24, 32, 2, 24, 36, 4, 30, 27, 30, 30, 20, 12, 11, 28, 6, 8, 30, 15, 19, 16, 1, 22, 17, 24, 36, 6, 27, 11, 11, 16, 19, 21, 4, 15, 1, 9, 27, 23, 22, 19, 8, 26, 10, 8};
    int maxPacketSize = 17;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1382;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> offset = {8, 37, 67, 97, 127, 135, 183, 227, 268, 323, 359, 412, 442, 472, 490, 494, 524, 566, 599, 639, 654, 692, 739, 787, 835, 878, 927, 935, 960, 983, 1038, 1066, 1098, 1131, 1163, 1188, 1211, 1244, 1269, 1325, 1365, 1397, 1425, 1466, 1500, 1519, 1563, 1578, 1599, 1634};
    vector<int> size = {17, 16, 15, 22, 6, 35, 36, 38, 41, 32, 41, 28, 17, 9, 4, 26, 29, 30, 28, 4, 36, 33, 35, 35, 40, 37, 2, 20, 13, 40, 18, 17, 25, 32, 21, 23, 18, 14, 41, 29, 27, 28, 27, 21, 11, 41, 10, 19, 31, 43};
    int maxPacketSize = 28;
    int overhead = 13;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2582;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> offset = {4, 8, 20, 25, 35, 44, 49, 56, 64, 75, 79, 85, 92, 94, 99, 104, 112, 118, 125, 129, 131, 138, 143, 151, 156, 165, 171, 179, 182, 189, 194, 195, 197, 203, 212, 221, 226, 236, 242, 245, 247, 255, 263, 267, 274, 285, 290, 293, 303, 307};
    vector<int> size = {3, 9, 4, 8, 8, 3, 7, 7, 9, 3, 4, 5, 2, 2, 3, 8, 6, 4, 2, 1, 6, 5, 8, 2, 8, 4, 6, 1, 6, 2, 1, 2, 5, 7, 8, 3, 9, 6, 2, 2, 7, 6, 2, 7, 9, 4, 1, 7, 2, 3};
    int maxPacketSize = 5;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 420;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> offset = {6, 13, 17, 20, 26, 32, 35, 38, 39, 46, 50, 54, 58, 59, 62, 66, 70, 76, 81, 87, 90, 94, 98, 106, 112, 118, 123, 124, 128, 136, 140, 146, 149, 151, 155, 162, 166, 168, 174, 181, 182, 184, 186, 190, 195, 198, 203, 208, 214, 220};
    vector<int> size = {6, 4, 2, 4, 6, 2, 2, 1, 5, 4, 4, 2, 1, 3, 2, 3, 4, 5, 5, 2, 2, 3, 6, 6, 6, 3, 1, 2, 6, 3, 4, 2, 2, 3, 6, 2, 1, 6, 5, 1, 2, 1, 4, 5, 1, 4, 4, 5, 6, 5};
    int maxPacketSize = 8;
    int overhead = 6;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 726;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> offset = {2, 5, 14, 30, 38, 50, 55, 66, 73, 82, 92, 101, 114, 126, 132, 135, 150, 163, 178, 194, 202, 216, 230, 241, 248, 261, 270, 283, 297, 301, 309, 317, 329, 341, 350, 357, 362, 371, 375, 383, 396, 407, 414, 423, 427, 434, 447, 456, 460, 467};
    vector<int> size = {3, 7, 12, 8, 11, 3, 10, 5, 6, 10, 5, 10, 9, 6, 2, 12, 12, 12, 12, 5, 12, 12, 10, 6, 10, 8, 10, 10, 2, 8, 7, 9, 12, 9, 4, 2, 6, 1, 6, 9, 8, 5, 7, 2, 7, 11, 9, 4, 6, 8};
    int maxPacketSize = 14;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1463;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> offset = {3, 27, 35, 69, 98, 119, 131, 159, 204, 237, 271, 298, 335, 351, 368, 389, 433, 455, 498, 513, 532, 549, 573, 614, 654, 672, 691, 716, 750, 763, 774, 798, 823, 864, 903, 924, 954, 992, 1008, 1045, 1079, 1094, 1100, 1110, 1148, 1188, 1216, 1255, 1290, 1319};
    vector<int> size = {23, 1, 31, 21, 15, 9, 24, 34, 30, 25, 15, 33, 14, 15, 19, 34, 20, 32, 11, 8, 6, 24, 31, 30, 6, 11, 20, 23, 1, 3, 12, 24, 33, 31, 15, 26, 28, 6, 25, 33, 14, 2, 2, 34, 35, 25, 29, 34, 18, 31};
    int maxPacketSize = 21;
    int overhead = 9;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1961;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> offset = {8, 12, 27, 31, 38, 43, 51, 64, 67, 74, 76, 81, 94, 99, 110, 125, 136, 149, 161, 162, 177, 189, 194, 199, 201, 209, 214, 223, 232, 244, 246, 255, 265, 276, 285, 288, 299, 304, 319, 324, 330, 339, 349, 360, 364, 369, 378, 390, 404, 411};
    vector<int> size = {1, 11, 2, 6, 4, 6, 9, 1, 3, 2, 2, 12, 3, 8, 12, 11, 9, 9, 1, 11, 10, 3, 5, 1, 5, 4, 5, 7, 12, 1, 9, 7, 11, 8, 3, 10, 3, 11, 5, 2, 5, 7, 11, 1, 5, 6, 11, 12, 3, 6};
    int maxPacketSize = 7;
    int overhead = 3;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 583;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> offset = {0, 39, 58, 81, 95, 132, 165, 208, 246, 275, 297, 310, 347, 368, 379, 388, 410, 442, 474, 492, 537, 551, 598, 636, 672, 695, 742, 786, 813, 850, 876, 928, 951, 959, 982, 1020, 1039, 1083, 1094, 1142, 1187, 1209, 1223, 1228, 1246, 1278, 1304, 1353, 1390, 1426};
    vector<int> size = {30, 8, 15, 4, 37, 22, 33, 32, 15, 12, 9, 36, 11, 6, 4, 19, 21, 17, 17, 37, 14, 34, 25, 36, 14, 37, 38, 12, 25, 23, 42, 9, 7, 11, 25, 11, 39, 1, 42, 31, 11, 7, 5, 15, 26, 25, 40, 36, 35, 10};
    int maxPacketSize = 18;
    int overhead = 3;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1346;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> offset = {0, 7, 10, 25, 36, 54, 75, 91, 94, 106, 120, 127, 134, 154, 177, 190, 206, 228, 251, 262, 278, 298, 314, 324, 332, 348, 372, 379, 394, 411, 425, 447, 454, 466, 473, 484, 509, 529, 549, 565, 588, 611, 631, 646, 661, 676, 684, 701, 723, 741};
    vector<int> size = {5, 3, 13, 6, 18, 17, 15, 2, 6, 12, 1, 5, 16, 19, 10, 14, 15, 17, 6, 14, 14, 13, 10, 5, 10, 18, 5, 10, 17, 12, 18, 4, 6, 5, 7, 21, 19, 19, 11, 19, 17, 17, 10, 14, 11, 6, 11, 15, 11, 3};
    int maxPacketSize = 10;
    int overhead = 3;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 869;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> offset = {4, 29, 50, 62, 81, 96, 126, 145, 155, 174, 177, 200, 214, 249, 274, 292, 301, 325, 349, 363, 379, 393, 401, 421, 445, 474, 502, 518, 529, 551, 565, 570, 587, 620, 637, 649, 672, 696, 731, 753, 778, 800, 833, 850, 865, 887, 919, 934, 939, 954};
    vector<int> size = {19, 15, 6, 15, 8, 23, 18, 6, 12, 1, 19, 12, 26, 18, 16, 7, 20, 20, 8, 11, 13, 7, 14, 22, 26, 20, 8, 2, 22, 7, 1, 14, 27, 10, 5, 19, 20, 26, 14, 17, 17, 24, 8, 7, 18, 25, 14, 4, 11, 13};
    int maxPacketSize = 11;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 916;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> offset = {8, 12, 58, 76, 111, 112, 159, 179, 216, 249, 277, 307, 328, 338, 353, 364, 397, 432, 455, 492, 506, 520, 544, 562, 585, 619, 662, 707, 731, 735, 739, 772, 796, 807, 828, 843, 872, 919, 961, 996, 1019, 1058, 1076, 1096, 1139, 1152, 1175, 1200, 1224, 1255};
    vector<int> size = {1, 36, 11, 30, 1, 36, 17, 35, 29, 16, 28, 10, 6, 8, 9, 22, 33, 22, 31, 6, 2, 21, 14, 23, 30, 33, 35, 12, 1, 4, 33, 24, 8, 20, 4, 28, 36, 31, 24, 18, 34, 18, 15, 31, 13, 18, 24, 18, 27, 10};
    int maxPacketSize = 26;
    int overhead = 14;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2364;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> offset = {6, 10, 26, 50, 52, 78, 95, 102, 131, 146, 170, 195, 198, 226, 242, 266, 271, 282, 300, 321, 331, 351, 372, 396, 417, 438, 461, 479, 498, 519, 547, 559, 571, 585, 609, 630, 651, 657, 684, 706, 719, 734, 756, 778, 789, 804, 816, 819, 846, 862};
    vector<int> size = {2, 16, 16, 2, 24, 17, 7, 23, 7, 19, 19, 2, 22, 9, 21, 2, 10, 14, 18, 2, 17, 21, 20, 16, 16, 22, 18, 14, 14, 23, 11, 12, 14, 17, 15, 13, 1, 23, 22, 13, 10, 19, 14, 9, 9, 9, 2, 23, 16, 18};
    int maxPacketSize = 9;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 810;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> offset = {2, 11, 42, 54, 90, 137, 188, 208, 243, 267, 316, 328, 357, 380, 421, 434, 446, 472, 494, 506, 533, 578, 627, 669, 707, 727, 745, 796, 840, 851, 879, 913, 918, 960, 1008, 1044, 1070, 1098, 1138, 1185, 1238, 1262, 1287, 1314, 1319, 1359, 1388, 1417, 1449, 1469};
    vector<int> size = {5, 28, 4, 35, 36, 42, 18, 29, 20, 34, 10, 17, 18, 31, 7, 12, 22, 19, 11, 20, 31, 42, 34, 32, 17, 11, 44, 33, 3, 19, 24, 3, 39, 43, 33, 26, 25, 31, 37, 41, 18, 19, 18, 4, 39, 29, 17, 18, 9, 19};
    int maxPacketSize = 29;
    int overhead = 14;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2544;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> offset = {9, 42, 77, 106, 121, 148, 175, 196, 224, 231, 257, 298, 320, 351, 384, 411, 429, 435, 465, 490, 497, 526, 557, 583, 600, 615, 642, 683, 724, 743, 770, 777, 818, 846, 853, 888, 915, 930, 946, 953, 968, 994, 1007, 1038, 1063, 1098, 1118, 1151, 1168, 1180};
    vector<int> size = {32, 33, 26, 10, 21, 26, 14, 27, 4, 20, 30, 12, 21, 28, 20, 10, 6, 25, 13, 7, 28, 26, 20, 10, 15, 21, 33, 36, 14, 18, 3, 34, 23, 2, 26, 17, 9, 16, 1, 13, 17, 3, 25, 14, 25, 14, 32, 10, 9, 11};
    int maxPacketSize = 20;
    int overhead = 8;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1664;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> offset = {8, 22, 53, 77, 98, 125, 138, 174, 213, 231, 235, 278, 312, 349, 381, 419, 443, 483, 502, 520, 530, 541, 582, 593, 622, 639, 671, 676, 692, 725, 772, 783, 815, 841, 873, 888, 926, 944, 986, 992, 1019, 1028, 1047, 1077, 1109, 1140, 1178, 1218, 1256, 1287};
    vector<int> size = {5, 26, 20, 14, 27, 1, 23, 27, 9, 2, 30, 23, 26, 19, 35, 19, 37, 7, 5, 6, 3, 39, 8, 28, 5, 19, 5, 14, 24, 34, 9, 32, 21, 26, 13, 28, 16, 39, 6, 19, 4, 11, 22, 30, 21, 30, 27, 34, 27, 24};
    int maxPacketSize = 20;
    int overhead = 7;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1633;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> offset = {9, 29, 44, 54, 79, 87, 97, 100, 102, 117, 141, 159, 170, 174, 201, 219, 227, 236, 256, 266, 292, 301, 309, 336, 360, 385, 404, 407, 427, 457, 474, 493, 503, 527, 530, 540, 552, 581, 589, 611, 619, 631, 646, 659, 687, 706, 722, 733, 755, 782};
    vector<int> size = {12, 12, 5, 18, 8, 2, 2, 2, 14, 24, 17, 7, 1, 23, 10, 2, 1, 12, 4, 19, 1, 8, 23, 19, 18, 14, 3, 19, 23, 15, 15, 3, 24, 1, 3, 4, 24, 3, 14, 7, 6, 11, 10, 20, 15, 8, 10, 20, 19, 8};
    int maxPacketSize = 18;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1445;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> offset = {0, 19, 42, 58, 80, 90, 106, 121, 132, 156, 169, 189, 210, 229, 240, 253, 267, 286, 290, 304, 319, 321, 339, 347, 374, 380, 388, 407, 411, 420, 433, 456, 473, 482, 489, 498, 505, 510, 520, 522, 540, 562, 577, 590, 607, 618, 638, 655, 680, 702};
    vector<int> size = {19, 21, 16, 21, 5, 15, 12, 11, 21, 13, 18, 15, 17, 9, 8, 8, 13, 1, 11, 14, 2, 13, 3, 20, 2, 4, 16, 2, 8, 11, 16, 14, 6, 2, 4, 5, 1, 6, 1, 15, 15, 10, 13, 14, 7, 18, 11, 18, 15, 6};
    int maxPacketSize = 11;
    int overhead = 4;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 935;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> offset = {3, 36, 61, 87, 102, 129, 155, 169, 189, 218, 237, 264, 277, 307, 341, 357, 381, 408, 426, 457, 485, 509, 540, 549, 577, 580, 616, 649, 673, 709, 737, 773, 812, 834, 848, 878, 903, 924, 954, 963, 973, 978, 995, 1035, 1066, 1084, 1115, 1129, 1139, 1150};
    vector<int> size = {27, 25, 20, 5, 25, 22, 11, 11, 26, 8, 19, 11, 19, 26, 10, 21, 24, 17, 25, 24, 15, 31, 4, 20, 3, 26, 28, 24, 29, 24, 26, 31, 16, 13, 29, 18, 18, 20, 4, 7, 2, 15, 31, 25, 7, 25, 7, 3, 8, 17};
    int maxPacketSize = 24;
    int overhead = 13;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2189;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> offset = {8, 18, 41, 48, 56, 69, 76, 90, 96, 120, 134, 155, 166, 180, 205, 226, 234, 250, 265, 273, 289, 307, 312, 336, 350, 361, 371, 383, 395, 406, 426, 439, 449, 471, 483, 498, 508, 519, 531, 549, 557, 575, 595, 608, 627, 638, 653, 670, 687, 704};
    vector<int> size = {7, 17, 5, 7, 8, 3, 12, 3, 17, 8, 18, 11, 8, 19, 17, 7, 11, 11, 7, 14, 15, 3, 21, 9, 11, 8, 6, 5, 7, 18, 12, 10, 21, 5, 13, 3, 7, 5, 18, 3, 11, 15, 6, 13, 9, 15, 10, 14, 12, 8};
    int maxPacketSize = 8;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 614;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> offset = {5, 37, 51, 73, 93, 106, 117, 123, 135, 162, 184, 207, 233, 262, 266, 282, 317, 330, 353, 369, 393, 425, 442, 477, 499, 523, 548, 581, 610, 629, 634, 659, 665, 679, 717, 739, 751, 787, 805, 816, 831, 855, 881, 886, 910, 932, 950, 971, 1004, 1022};
    vector<int> size = {26, 10, 12, 14, 8, 4, 2, 6, 19, 15, 16, 21, 21, 1, 10, 25, 8, 20, 15, 23, 29, 15, 28, 16, 17, 21, 30, 24, 15, 1, 17, 3, 5, 30, 17, 10, 28, 12, 8, 5, 17, 21, 1, 17, 15, 16, 16, 25, 12, 16};
    int maxPacketSize = 15;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1253;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> offset = {6, 27, 45, 54, 77, 82, 95, 115, 138, 151, 174, 185, 208, 228, 244, 257, 274, 304, 336, 341, 366, 385, 398, 415, 429, 457, 476, 483, 506, 527, 547, 571, 580, 593, 601, 609, 621, 633, 646, 672, 682, 684, 711, 722, 742, 763, 778, 800, 823, 840};
    vector<int> size = {19, 18, 2, 22, 4, 6, 18, 23, 11, 20, 3, 19, 13, 15, 13, 15, 23, 24, 4, 22, 14, 9, 17, 13, 21, 18, 1, 22, 19, 15, 21, 6, 10, 8, 1, 7, 9, 8, 22, 6, 2, 23, 7, 13, 20, 8, 15, 18, 11, 4};
    int maxPacketSize = 10;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 865;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> offset = {8, 44, 63, 83, 91, 110, 141, 148, 183, 214, 234, 251, 288, 309, 345, 370, 395, 410, 445, 478, 509, 525, 560, 589, 593, 612, 633, 658, 671, 679, 712, 733, 761, 794, 815, 846, 854, 886, 900, 909, 939, 983, 1011, 1024, 1044, 1080, 1101, 1129, 1135, 1164};
    vector<int> size = {27, 12, 13, 7, 12, 21, 3, 33, 21, 11, 6, 32, 10, 27, 17, 23, 4, 28, 33, 22, 8, 25, 24, 3, 17, 10, 25, 9, 8, 32, 16, 28, 29, 16, 24, 4, 25, 7, 8, 25, 33, 21, 7, 10, 30, 12, 26, 6, 27, 24};
    int maxPacketSize = 23;
    int overhead = 12;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2069;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> offset = {6, 21, 41, 53, 61, 65, 70, 88, 101, 115, 124, 142, 160, 169, 188, 193, 207, 218, 231, 236, 243, 253, 272, 290, 299, 315, 325, 339, 340, 355, 365, 377, 388, 402, 415, 431, 451, 459, 477, 488, 498, 505, 511, 525, 536, 550, 563, 583, 607, 615};
    vector<int> size = {15, 16, 7, 6, 3, 3, 17, 7, 8, 7, 15, 14, 5, 14, 5, 12, 5, 9, 3, 6, 9, 14, 12, 7, 16, 4, 11, 1, 13, 9, 11, 11, 9, 10, 13, 17, 8, 18, 5, 5, 3, 6, 14, 11, 9, 8, 18, 18, 4, 3};
    int maxPacketSize = 7;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 571;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> offset = {9, 12, 16, 27, 32, 38, 47, 57, 63, 74, 84, 93, 95, 107, 116, 125, 129, 141, 147, 149, 154, 162, 171, 179, 181, 190, 192, 196, 205, 213, 221, 225, 231, 234, 239, 247, 253, 257, 265, 270, 281, 285, 293, 295, 299, 304, 307, 311, 315, 321};
    vector<int> size = {2, 4, 9, 3, 5, 6, 7, 6, 8, 8, 8, 1, 9, 7, 6, 1, 9, 3, 1, 3, 5, 8, 6, 1, 7, 2, 3, 8, 5, 7, 3, 4, 3, 2, 7, 6, 2, 5, 5, 8, 1, 8, 1, 1, 2, 3, 4, 3, 3, 6};
    int maxPacketSize = 14;
    int overhead = 11;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1248;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> offset = {6, 30, 58, 95, 103, 144, 184, 213, 235, 258, 271, 298, 308, 333, 349, 360, 387, 424, 428, 440, 447, 459, 488, 497, 517, 545, 580, 602, 614, 644, 678, 705, 733, 745, 765, 790, 804, 821, 834, 851, 860, 873, 889, 904, 915, 921, 960, 988, 1003, 1038};
    vector<int> size = {16, 22, 29, 5, 32, 29, 20, 17, 19, 9, 25, 1, 17, 14, 7, 24, 26, 2, 11, 3, 4, 19, 1, 15, 21, 25, 11, 12, 30, 27, 27, 27, 4, 9, 16, 3, 7, 6, 9, 8, 9, 12, 12, 6, 6, 28, 23, 11, 32, 10};
    int maxPacketSize = 16;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1199;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxPacketSize = 2;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxPacketSize = 1000;
    int overhead = 999;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxPacketSize = 987;
    int overhead = 986;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1974000000000;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> offset = {95540, 10115571, 18906182, 45114390, 79340288, 81005933, 94054280, 94813272, 117264811, 125699718, 143315234, 158175515, 192615200, 193309646, 222528021, 242121189, 269189276, 270842559, 295282811, 328761767, 337897610, 364259075, 378480683, 378844517, 410467316, 431883929, 459985547, 467151896, 495948461, 508363436, 533808695, 536280102, 552595643, 558586066, 558875266, 590136827, 613468377, 643431426, 664440227, 695622029, 723678074, 733712464, 759194061, 789434417, 801435555, 821148613, 837227088, 839166158, 859930891, 861857178};
    vector<int> size = {10019641, 8790510, 26207665, 34225565, 1665641, 13048310, 758464, 22451448, 8434319, 17615398, 14859693, 34439642, 693913, 29217826, 19592725, 27067471, 1652700, 24439751, 33478589, 9135544, 26361008, 14221494, 363476, 31622774, 21416522, 28101405, 7166316, 28796378, 12414425, 25444808, 2471226, 16314957, 5990115, 288873, 31261069, 23331259, 29962720, 21008163, 31181708, 28055876, 10033943, 25481563, 30240180, 12001061, 19712440, 16078018, 1938576, 20764131, 1925947, 7743902};
    int maxPacketSize = 986;
    int overhead = 311;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1270104734;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> offset = {42158, 10659431, 25649346, 43599364, 48289652, 78889545, 109744518, 133563772, 135684597, 163764165, 196384221, 225675241, 260034392, 288475993, 299877235, 317322092, 343416681, 364694674, 376820364, 402594101, 429623997, 452513460, 471224621, 495916888, 504034599, 538732772, 563699675, 590983327, 595845709, 606234844, 611508666, 617482525, 646031674, 668448532, 699695605, 712269265, 715986739, 746161519, 764516211, 798297276, 799319802, 799414388, 805021287, 838175629, 838401166, 860655924, 875469298, 877492562, 907208102, 922163746};
    vector<int> size = {10617017, 14989815, 17949784, 4690193, 30599748, 30854918, 23819083, 2120507, 28079468, 32619863, 29290954, 34359133, 28441493, 11401235, 17444722, 26094361, 21277958, 12125493, 25773489, 27029704, 22889113, 18711140, 24692118, 8117496, 34697892, 24966675, 27283419, 4862248, 10388774, 5273564, 5973551, 28548802, 22416693, 31246872, 12573640, 3717465, 30174631, 18354626, 33781033, 1022499, 94462, 5606797, 33154095, 225209, 22254745, 14813251, 2023010, 29715212, 14955544, 17699936};
    int maxPacketSize = 692;
    int overhead = 326;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1776920741;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> offset = {26732, 220324359, 377512681, 525435144, 626126790, 737467887, 842355600};
    vector<int> size = {220297431, 157188022, 147921835, 100691400, 111340683, 104887451, 169305010};
    int maxPacketSize = 1000;
    int overhead = 291;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1426844280;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> offset = {74031, 268973210, 516563891, 697041827, 993960063};
    vector<int> size = {268899137, 247590605, 180477908, 296918189, 132221917};
    int maxPacketSize = 862;
    int overhead = 774;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 11030738878;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> offset = {70754, 272897783, 288772930, 573074617, 795457668, 948768834};
    vector<int> size = {272826771, 15874893, 284301267, 222382981, 153310895, 59789852};
    int maxPacketSize = 697;
    int overhead = 267;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1634687099;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> offset = {36587, 152868040, 478898049, 542180524, 835483881, 935423429};
    vector<int> size = {152831393, 326029875, 63282399, 293303201, 99939396, 302783026};
    int maxPacketSize = 359;
    int overhead = 181;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2497207281;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> offset = {10282, 89054590, 144093474, 457342874, 494499483, 798263860, 899159735};
    vector<int> size = {89044267, 55038821, 313249270, 37156572, 303764135, 100895612, 307572129};
    int maxPacketSize = 434;
    int overhead = 131;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1728438565;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> offset = {26732, 5632873, 14499947, 32952681, 48421894, 55688534, 75353790, 89794643, 100043863, 115563892, 123506616, 131554876, 137739558, 139691915, 147558442, 165055600, 181942650, 183443453, 187851841, 201882966, 221068798, 227714747, 246923230, 248162074, 248883348, 249067008, 258036917, 276025756, 294475492, 301248285, 320238305, 335408908, 343645207, 358341004, 368483091, 373303015, 386449765, 396847588, 399205835, 415633712, 425661980, 427781482, 446040070, 453365854, 473425118, 485843087, 488692168, 497281928, 510046530, 528915779};
    vector<int> size = {5606103, 8867062, 18452715, 15469192, 7266635, 19665243, 14440818, 10249192, 15520015, 7942699, 8048260, 6184652, 1952324, 7866524, 17497121, 16887025, 1500767, 4408388, 14031088, 19185823, 6645922, 19208447, 1238817, 721267, 183647, 8969889, 17988804, 18449714, 6772783, 18989982, 15170602, 8236299, 14695790, 10142071, 4819899, 13146731, 10397817, 2358247, 16427864, 10028230, 2119466, 18258573, 7325747, 20059235, 12417940, 2849052, 8589739, 12764584, 18869243, 19107842};
    int maxPacketSize = 940;
    int overhead = 902;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 13555702754;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> offset = {22330, 13867924, 27766815, 32176855, 33135201, 37424313, 52250938, 62487986, 82622448, 97509146, 110960443, 124713927, 127507242, 134467715, 147298785, 153883145, 169052164, 183495050, 193492602, 208556150, 212024323, 213849790, 228735832, 249336091, 255839431, 271054173, 287270458, 291220319, 299068077, 313533249, 325453669, 328154428, 338563700, 340993765, 349333290, 371030005, 391977895, 406201978, 415623217, 429170762, 431447211, 434761922, 446676335, 447296687, 458271023, 469859847, 479226255, 484305968, 499933946, 505274958};
    vector<int> size = {13845544, 13898838, 4410005, 958343, 4289066, 14826568, 10236996, 20134415, 14886651, 13451291, 13753467, 2793268, 6960437, 12831038, 6584344, 15168995, 14442833, 9997504, 15063501, 3468125, 1825451, 14886030, 20600214, 6503319, 15214740, 16216234, 3949854, 7847699, 14465117, 11920365, 2700716, 10409213, 2430049, 8339519, 21696658, 20947849, 14224083, 9421204, 13547544, 2276427, 3314697, 11914410, 620326, 10974295, 11588809, 9366400, 5079665, 15627930, 5341011, 5789721};
    int maxPacketSize = 964;
    int overhead = 903;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 8076135596;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> offset = {95540, 3263381, 6806995, 13162823, 14536575, 30338036, 32657997, 46416491, 49016117, 63833158, 72325133, 73950310, 79414688, 99256786, 106116650, 117721773, 118554737, 139355610, 142573178, 161446847, 170347837, 174350842, 176708196, 183454431, 187472294, 207283896, 209150774, 213576404, 233014790, 247700851, 267898769, 275382392, 275722080, 291971493, 303890016, 319410378, 328136743, 330494576, 350132422, 365573420, 379024383, 392934872, 397428813, 398693740, 406583704, 417172701, 417275453, 425362239, 447027636, 465830154};
    vector<int> size = {3167801, 3543598, 6355825, 1373725, 15801449, 2319926, 13758464, 2599608, 14817039, 8491942, 1625133, 5464346, 19842073, 6859810, 11605077, 832911, 20800860, 3217543, 18873661, 8900984, 4002992, 2357302, 6746196, 4017846, 19811594, 1866845, 4425580, 19438362, 14686041, 20197896, 7483578, 339661, 16249379, 11918505, 15520333, 8726331, 2357792, 19637795, 15440972, 13450948, 13910487, 4493915, 1264884, 7889957, 10588984, 102722, 8086736, 21665379, 18802491, 11385886};
    int maxPacketSize = 958;
    int overhead = 904;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 8464462797;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> offset = {42158, 5177773, 22439288, 26018746, 37091667, 45333426, 60447639, 74908789, 75658969, 94614990, 115136154, 118192629, 126317271, 133536577, 148579839, 150049317, 159032647, 171187199, 189695480, 203370269, 218301223, 229326146, 245062058, 255383864, 256884120, 257359887, 271598223, 286782892, 308521770, 329169887, 347208903, 360935606, 367126398, 376308534, 387938183, 393660058, 394402259, 394465809, 404598248, 424008959, 426167271, 441533433, 458769914, 469800600, 489408544, 504811496, 523501336, 524154056, 543375458, 556726089};
    vector<int> size = {5135545, 17261431, 3579416, 11072913, 8241732, 15114182, 14461067, 750139, 18956012, 20521111, 3056394, 8124573, 7219285, 15043219, 1469426, 8983257, 12154502, 18508213, 13674737, 14930952, 11024921, 15735844, 10321750, 1500216, 475684, 14238291, 15184667, 21738792, 20648038, 18039004, 13726639, 6190786, 9182133, 11629592, 5721800, 742169, 63527, 10132418, 19410665, 2158307, 15366078, 17236429, 11030639, 19607929, 15402905, 18689795, 652642, 19221388, 13350616, 6971552};
    int maxPacketSize = 987;
    int overhead = 901;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 6468921798;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> offset = {65512, 1211754, 7502345, 18744701, 32977913, 52252161, 65327353, 78621983, 92644715, 112611137, 118577988, 119138766, 137796399, 155882903, 170327911, 182567944, 204297513, 205671381, 208570772, 217598541, 239380394, 252958163, 256652866, 268974004, 290300879, 296609109, 302367251, 311472844, 319693422, 324312167, 343735361, 361589220, 363665985, 370660594, 383484470, 392390759, 395045878, 399872090, 410349948, 423834599, 443836673, 452098919, 473173898, 484776094, 486684814, 497768682, 499783913, 508380848, 526992935, 543102165};
    vector<int> size = {1146218, 6290576, 11242350, 14233198, 19274227, 13075183, 13294626, 14022723, 19966421, 5966833, 560759, 18657620, 18086479, 14444995, 12240010, 21729566, 1373860, 2899383, 9027767, 21781840, 13577758, 3694697, 12321138, 21326865, 6308229, 5758128, 9105576, 8220561, 4618720, 19423177, 17853848, 2076755, 6994604, 12823871, 8906284, 2655098, 4826203, 10477855, 13484636, 20002067, 8262224, 21074971, 11602181, 1908707, 11083864, 2015228, 8596934, 18612082, 16109226, 10144780};
    int maxPacketSize = 925;
    int overhead = 900;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 20467707809;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> offset = {60668, 2779868, 12870165, 15136683, 35249135, 50395588, 56268746, 75435653, 78702417, 89424040, 90770613, 95486967, 109385628, 114950152, 117915175, 132226344, 153305293, 172502836, 183662067, 201007422, 221198078, 228818938, 239590875, 242350758, 263027056, 266579706, 284826980, 299519281, 311339215, 333300289, 341192620, 347309878, 358276578, 358696063, 379661936, 382151512, 383708742, 386633214, 393652823, 413141720, 426432681, 431023668, 445278396, 462278648, 472698772, 473698614, 474087014, 482915927, 492610238, 512707345};
    vector<int> size = {2719191, 10090274, 2266500, 20112447, 15146438, 5873147, 19166899, 3266749, 10721622, 1346572, 4716335, 13898645, 5564503, 2964997, 14311168, 21078935, 19197523, 11159210, 17345355, 20190650, 7620835, 10771919, 2759868, 20676286, 3552629, 18247253, 14692278, 11819908, 21961052, 7892324, 6117247, 10966698, 419480, 20965865, 2489575, 1557228, 2924454, 7019602, 19488889, 13290936, 4590987, 14254728, 17000228, 10420112, 999836, 388397, 8828907, 9694310, 20097105, 3924695};
    int maxPacketSize = 933;
    int overhead = 907;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 18536958395;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> offset = {22547, 13398475, 24702554, 40770153, 50504088, 65163378, 77030932, 94751257, 111408874, 120559465, 128778468, 143325492, 156317923, 170808576, 191167342, 205775133, 221796039, 224596601, 235405386, 242281036, 262768230, 263581178, 274597253, 281095636, 294673944, 295069658, 312194839, 321156405, 340340300, 347403174, 361618873, 377938323, 378347987, 396631637, 401405499, 419553913, 439000127, 455962902, 458825053, 459298856, 461947969, 483242604, 500276928, 516214870, 527619128, 529922075, 531111231, 544784284, 565094535, 580085006};
    vector<int> size = {13375923, 11304075, 16067595, 9733932, 14659289, 11867554, 17720317, 16657612, 9150586, 8218995, 14547016, 12992423, 14490649, 20358761, 14607786, 16020906, 2800560, 10808779, 6875650, 20487194, 812945, 11016070, 6498380, 13578303, 395713, 17125179, 8961564, 19183895, 7062866, 14215692, 16319449, 409656, 18283648, 4773858, 18148413, 19446212, 16962767, 2862146, 473802, 2649107, 21294627, 17034320, 15937935, 11404252, 2302944, 1189155, 13673052, 20310246, 14990467, 5687179};
    int maxPacketSize = 911;
    int overhead = 903;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 66702231048;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> offset = {97239, 14833383, 21542081, 28157008, 48751035, 53348778, 74021545, 87005829, 108657945, 112946381, 130147629, 132982393, 150606337, 169064949, 171339160, 185793178, 205283414, 225936925, 238202847, 258205900, 262614659, 272588304, 283827032, 285908132, 293736305, 300256762, 301934627, 305575371, 326855714, 336829616, 342193967, 346391873, 350535087, 361243549, 363475374, 375306921, 397157088, 407304153, 413207388, 431160971, 437191436, 454494832, 458248990, 477363719, 477813481, 484925865, 495574140, 508766418, 516212791, 522309511};
    vector<int> size = {14736110, 6708673, 6614880, 20594000, 4597721, 20672735, 12984269, 21652106, 4288412, 17201234, 2834715, 17623914, 18458600, 2274201, 14454017, 19490203, 20653467, 12265879, 20003052, 4408756, 9973605, 11238709, 2081099, 7828146, 6520439, 1677816, 3640734, 21280313, 9973874, 5364319, 4197888, 4143181, 10708430, 2231808, 11831537, 21850124, 10147017, 5903203, 17953576, 6030447, 17303378, 3754143, 19114712, 449729, 7112374, 10648245, 13192257, 7446367, 6096714, 21750378};
    int maxPacketSize = 956;
    int overhead = 905;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 10196623801;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> offset = {50061, 2084289, 20052083, 39601452, 43243284, 59856921, 77886760, 79207724, 80310623, 101287708, 113144451, 130571999, 136865698, 157472394, 165205903, 182468041, 186451722, 198649812, 210166566, 211113183, 225045845, 238326246, 250275369, 263063471, 282410423, 286651007, 289319129, 297822744, 303909626, 324593428, 329755037, 347345925, 363243271, 374557212, 387351747, 395778041, 407348714, 418145314, 431786384, 437513546, 448239201, 466209024, 484641791, 502337855, 519998192, 527347835, 536439837, 543873368, 559969737, 564923101};
    vector<int> size = {2034225, 17967769, 19549353, 3641788, 16613607, 18029839, 1320920, 1102898, 20977080, 11856742, 17427513, 6293696, 20606680, 7733457, 17262085, 3983633, 12198072, 11516711, 946565, 13932644, 13280387, 11949074, 12788081, 19346905, 4240534, 2668087, 8503564, 6086840, 20683775, 5161575, 17590847, 15897346, 11313914, 12794503, 8426294, 11570619, 10796584, 13641021, 5727161, 10725623, 17969809, 18432731, 17696012, 17660324, 7349596, 9091983, 7433481, 16096343, 4953356, 13361356};
    int maxPacketSize = 963;
    int overhead = 908;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 10124349395;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> offset = {43847, 20864958, 25322688, 27479478, 45111684, 50170478, 63591519, 80852527, 97541791, 110014956, 116018447, 121579384, 140253140, 146301522, 154785699, 157520230, 160566014, 180282979, 199143875, 218745173, 230359564, 237088582, 246994958, 252660013, 255858529, 262410532, 281170188, 301940288, 314250441, 318281150, 334330526, 349741876, 369761656, 379131020, 391349880, 395847199, 413592402, 423478584, 440020787, 445273656, 465601495, 480184261, 496193042, 505426864, 521083875, 541182802, 546078580, 560592559, 580000241, 598536639};
    vector<int> size = {20821083, 4457662, 2156723, 17632191, 5058743, 13421025, 17260997, 16689239, 12473150, 6003445, 5560908, 18673679, 6048349, 8484167, 2734472, 3045717, 19716959, 18860844, 19601239, 11614354, 6728964, 9906364, 5665000, 3198478, 6551939, 18759633, 20770017, 12310147, 4030621, 16049345, 15411342, 20019776, 9369315, 12218840, 4497229, 17745153, 9886154, 16542170, 5252791, 20327758, 14582701, 16008760, 9233809, 15656978, 20098914, 4895696, 14513907, 19407613, 18536322, 1285547};
    int maxPacketSize = 991;
    int overhead = 900;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 6531643205;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> offset = {26732, 5632873, 14499947, 32952681, 48421894, 55688534, 75353790, 89794643, 100043863, 115563892, 123506616, 131554876, 137739558, 139691915, 147558442, 165055600, 181942650, 183443453, 187851841, 201882966, 221068798, 227714747, 246923230, 248162074, 248883348, 249067008, 258036917, 276025756, 294475492, 301248285, 320238305, 335408908, 343645207, 358341004, 368483091, 373303015, 386449765, 396847588, 399205835, 415633712, 425661980, 427781482, 446040070, 453365854, 473425118, 485843087, 488692168, 497281928, 510046530, 528915779};
    vector<int> size = {5606103, 8867062, 18452715, 15469192, 7266635, 19665243, 14440818, 10249192, 15520015, 7942699, 8048260, 6184652, 1952324, 7866524, 17497121, 16887025, 1500767, 4408388, 14031088, 19185823, 6645922, 19208447, 1238817, 721267, 183647, 8969889, 17988804, 18449714, 6772783, 18989982, 15170602, 8236299, 14695790, 10142071, 4819899, 13146731, 10397817, 2358247, 16427864, 10028230, 2119466, 18258573, 7325747, 20059235, 12417940, 2849052, 8589739, 12764584, 18869243, 19107842};
    int maxPacketSize = 940;
    int overhead = 902;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 13555702754;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> offset = {22330, 13867924, 27766815, 32176855, 33135201, 37424313, 52250938, 62487986, 82622448, 97509146, 110960443, 124713927, 127507242, 134467715, 147298785, 153883145, 169052164, 183495050, 193492602, 208556150, 212024323, 213849790, 228735832, 249336091, 255839431, 271054173, 287270458, 291220319, 299068077, 313533249, 325453669, 328154428, 338563700, 340993765, 349333290, 371030005, 391977895, 406201978, 415623217, 429170762, 431447211, 434761922, 446676335, 447296687, 458271023, 469859847, 479226255, 484305968, 499933946, 505274958};
    vector<int> size = {13845544, 13898838, 4410005, 958343, 4289066, 14826568, 10236996, 20134415, 14886651, 13451291, 13753467, 2793268, 6960437, 12831038, 6584344, 15168995, 14442833, 9997504, 15063501, 3468125, 1825451, 14886030, 20600214, 6503319, 15214740, 16216234, 3949854, 7847699, 14465117, 11920365, 2700716, 10409213, 2430049, 8339519, 21696658, 20947849, 14224083, 9421204, 13547544, 2276427, 3314697, 11914410, 620326, 10974295, 11588809, 9366400, 5079665, 15627930, 5341011, 5789721};
    int maxPacketSize = 964;
    int overhead = 903;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 8076135596;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> offset = {95540, 3263381, 6806995, 13162823, 14536575, 30338036, 32657997, 46416491, 49016117, 63833158, 72325133, 73950310, 79414688, 99256786, 106116650, 117721773, 118554737, 139355610, 142573178, 161446847, 170347837, 174350842, 176708196, 183454431, 187472294, 207283896, 209150774, 213576404, 233014790, 247700851, 267898769, 275382392, 275722080, 291971493, 303890016, 319410378, 328136743, 330494576, 350132422, 365573420, 379024383, 392934872, 397428813, 398693740, 406583704, 417172701, 417275453, 425362239, 447027636, 465830154};
    vector<int> size = {3167801, 3543598, 6355825, 1373725, 15801449, 2319926, 13758464, 2599608, 14817039, 8491942, 1625133, 5464346, 19842073, 6859810, 11605077, 832911, 20800860, 3217543, 18873661, 8900984, 4002992, 2357302, 6746196, 4017846, 19811594, 1866845, 4425580, 19438362, 14686041, 20197896, 7483578, 339661, 16249379, 11918505, 15520333, 8726331, 2357792, 19637795, 15440972, 13450948, 13910487, 4493915, 1264884, 7889957, 10588984, 102722, 8086736, 21665379, 18802491, 11385886};
    int maxPacketSize = 958;
    int overhead = 904;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 8464462797;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> offset = {42158, 5177773, 22439288, 26018746, 37091667, 45333426, 60447639, 74908789, 75658969, 94614990, 115136154, 118192629, 126317271, 133536577, 148579839, 150049317, 159032647, 171187199, 189695480, 203370269, 218301223, 229326146, 245062058, 255383864, 256884120, 257359887, 271598223, 286782892, 308521770, 329169887, 347208903, 360935606, 367126398, 376308534, 387938183, 393660058, 394402259, 394465809, 404598248, 424008959, 426167271, 441533433, 458769914, 469800600, 489408544, 504811496, 523501336, 524154056, 543375458, 556726089};
    vector<int> size = {5135545, 17261431, 3579416, 11072913, 8241732, 15114182, 14461067, 750139, 18956012, 20521111, 3056394, 8124573, 7219285, 15043219, 1469426, 8983257, 12154502, 18508213, 13674737, 14930952, 11024921, 15735844, 10321750, 1500216, 475684, 14238291, 15184667, 21738792, 20648038, 18039004, 13726639, 6190786, 9182133, 11629592, 5721800, 742169, 63527, 10132418, 19410665, 2158307, 15366078, 17236429, 11030639, 19607929, 15402905, 18689795, 652642, 19221388, 13350616, 6971552};
    int maxPacketSize = 987;
    int overhead = 901;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 6468921798;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> offset = {65512, 1211754, 7502345, 18744701, 32977913, 52252161, 65327353, 78621983, 92644715, 112611137, 118577988, 119138766, 137796399, 155882903, 170327911, 182567944, 204297513, 205671381, 208570772, 217598541, 239380394, 252958163, 256652866, 268974004, 290300879, 296609109, 302367251, 311472844, 319693422, 324312167, 343735361, 361589220, 363665985, 370660594, 383484470, 392390759, 395045878, 399872090, 410349948, 423834599, 443836673, 452098919, 473173898, 484776094, 486684814, 497768682, 499783913, 508380848, 526992935, 543102165};
    vector<int> size = {1146218, 6290576, 11242350, 14233198, 19274227, 13075183, 13294626, 14022723, 19966421, 5966833, 560759, 18657620, 18086479, 14444995, 12240010, 21729566, 1373860, 2899383, 9027767, 21781840, 13577758, 3694697, 12321138, 21326865, 6308229, 5758128, 9105576, 8220561, 4618720, 19423177, 17853848, 2076755, 6994604, 12823871, 8906284, 2655098, 4826203, 10477855, 13484636, 20002067, 8262224, 21074971, 11602181, 1908707, 11083864, 2015228, 8596934, 18612082, 16109226, 10144780};
    int maxPacketSize = 925;
    int overhead = 900;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 20467707809;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> offset = {60668, 2779868, 12870165, 15136683, 35249135, 50395588, 56268746, 75435653, 78702417, 89424040, 90770613, 95486967, 109385628, 114950152, 117915175, 132226344, 153305293, 172502836, 183662067, 201007422, 221198078, 228818938, 239590875, 242350758, 263027056, 266579706, 284826980, 299519281, 311339215, 333300289, 341192620, 347309878, 358276578, 358696063, 379661936, 382151512, 383708742, 386633214, 393652823, 413141720, 426432681, 431023668, 445278396, 462278648, 472698772, 473698614, 474087014, 482915927, 492610238, 512707345};
    vector<int> size = {2719191, 10090274, 2266500, 20112447, 15146438, 5873147, 19166899, 3266749, 10721622, 1346572, 4716335, 13898645, 5564503, 2964997, 14311168, 21078935, 19197523, 11159210, 17345355, 20190650, 7620835, 10771919, 2759868, 20676286, 3552629, 18247253, 14692278, 11819908, 21961052, 7892324, 6117247, 10966698, 419480, 20965865, 2489575, 1557228, 2924454, 7019602, 19488889, 13290936, 4590987, 14254728, 17000228, 10420112, 999836, 388397, 8828907, 9694310, 20097105, 3924695};
    int maxPacketSize = 933;
    int overhead = 907;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 18536958395;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> offset = {22547, 13398475, 24702554, 40770153, 50504088, 65163378, 77030932, 94751257, 111408874, 120559465, 128778468, 143325492, 156317923, 170808576, 191167342, 205775133, 221796039, 224596601, 235405386, 242281036, 262768230, 263581178, 274597253, 281095636, 294673944, 295069658, 312194839, 321156405, 340340300, 347403174, 361618873, 377938323, 378347987, 396631637, 401405499, 419553913, 439000127, 455962902, 458825053, 459298856, 461947969, 483242604, 500276928, 516214870, 527619128, 529922075, 531111231, 544784284, 565094535, 580085006};
    vector<int> size = {13375923, 11304075, 16067595, 9733932, 14659289, 11867554, 17720317, 16657612, 9150586, 8218995, 14547016, 12992423, 14490649, 20358761, 14607786, 16020906, 2800560, 10808779, 6875650, 20487194, 812945, 11016070, 6498380, 13578303, 395713, 17125179, 8961564, 19183895, 7062866, 14215692, 16319449, 409656, 18283648, 4773858, 18148413, 19446212, 16962767, 2862146, 473802, 2649107, 21294627, 17034320, 15937935, 11404252, 2302944, 1189155, 13673052, 20310246, 14990467, 5687179};
    int maxPacketSize = 911;
    int overhead = 903;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 66702231048;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> offset = {97239, 14833383, 21542081, 28157008, 48751035, 53348778, 74021545, 87005829, 108657945, 112946381, 130147629, 132982393, 150606337, 169064949, 171339160, 185793178, 205283414, 225936925, 238202847, 258205900, 262614659, 272588304, 283827032, 285908132, 293736305, 300256762, 301934627, 305575371, 326855714, 336829616, 342193967, 346391873, 350535087, 361243549, 363475374, 375306921, 397157088, 407304153, 413207388, 431160971, 437191436, 454494832, 458248990, 477363719, 477813481, 484925865, 495574140, 508766418, 516212791, 522309511};
    vector<int> size = {14736110, 6708673, 6614880, 20594000, 4597721, 20672735, 12984269, 21652106, 4288412, 17201234, 2834715, 17623914, 18458600, 2274201, 14454017, 19490203, 20653467, 12265879, 20003052, 4408756, 9973605, 11238709, 2081099, 7828146, 6520439, 1677816, 3640734, 21280313, 9973874, 5364319, 4197888, 4143181, 10708430, 2231808, 11831537, 21850124, 10147017, 5903203, 17953576, 6030447, 17303378, 3754143, 19114712, 449729, 7112374, 10648245, 13192257, 7446367, 6096714, 21750378};
    int maxPacketSize = 956;
    int overhead = 905;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 10196623801;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> offset = {50061, 2084289, 20052083, 39601452, 43243284, 59856921, 77886760, 79207724, 80310623, 101287708, 113144451, 130571999, 136865698, 157472394, 165205903, 182468041, 186451722, 198649812, 210166566, 211113183, 225045845, 238326246, 250275369, 263063471, 282410423, 286651007, 289319129, 297822744, 303909626, 324593428, 329755037, 347345925, 363243271, 374557212, 387351747, 395778041, 407348714, 418145314, 431786384, 437513546, 448239201, 466209024, 484641791, 502337855, 519998192, 527347835, 536439837, 543873368, 559969737, 564923101};
    vector<int> size = {2034225, 17967769, 19549353, 3641788, 16613607, 18029839, 1320920, 1102898, 20977080, 11856742, 17427513, 6293696, 20606680, 7733457, 17262085, 3983633, 12198072, 11516711, 946565, 13932644, 13280387, 11949074, 12788081, 19346905, 4240534, 2668087, 8503564, 6086840, 20683775, 5161575, 17590847, 15897346, 11313914, 12794503, 8426294, 11570619, 10796584, 13641021, 5727161, 10725623, 17969809, 18432731, 17696012, 17660324, 7349596, 9091983, 7433481, 16096343, 4953356, 13361356};
    int maxPacketSize = 963;
    int overhead = 908;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 10124349395;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> offset = {43847, 20864958, 25322688, 27479478, 45111684, 50170478, 63591519, 80852527, 97541791, 110014956, 116018447, 121579384, 140253140, 146301522, 154785699, 157520230, 160566014, 180282979, 199143875, 218745173, 230359564, 237088582, 246994958, 252660013, 255858529, 262410532, 281170188, 301940288, 314250441, 318281150, 334330526, 349741876, 369761656, 379131020, 391349880, 395847199, 413592402, 423478584, 440020787, 445273656, 465601495, 480184261, 496193042, 505426864, 521083875, 541182802, 546078580, 560592559, 580000241, 598536639};
    vector<int> size = {20821083, 4457662, 2156723, 17632191, 5058743, 13421025, 17260997, 16689239, 12473150, 6003445, 5560908, 18673679, 6048349, 8484167, 2734472, 3045717, 19716959, 18860844, 19601239, 11614354, 6728964, 9906364, 5665000, 3198478, 6551939, 18759633, 20770017, 12310147, 4030621, 16049345, 15411342, 20019776, 9369315, 12218840, 4497229, 17745153, 9886154, 16542170, 5252791, 20327758, 14582701, 16008760, 9233809, 15656978, 20098914, 4895696, 14513907, 19407613, 18536322, 1285547};
    int maxPacketSize = 991;
    int overhead = 900;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 6531643205;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> offset = {26732, 5632853, 6870198, 24320576, 31587223, 37402089, 58458858, 73978878, 84754707, 92151770, 94104112, 110750499, 124639055, 126139858, 136642356, 157212524, 163858467, 183496164, 193523247, 193706923, 213449279, 233487201, 240259987, 240810460, 259331084, 274026893, 290186107, 310910550, 321308389, 343239926, 343769645, 345889131, 351152729, 357196070, 369614027, 376412018, 391750251, 410619495, 419206099, 430362510, 444261372, 447910527, 452921935, 467748527, 467977256, 485733886, 499185178, 510698041, 526448952, 539279993};
    vector<int> size = {5606103, 1237311, 17450357, 7266635, 5814851, 21056741, 15520015, 10775821, 7397033, 1952324, 16646374, 13888531, 1500767, 10502467, 20570159, 6645922, 19637689, 10027076, 183647, 19742336, 20037900, 6772783, 550443, 18520624, 14695790, 16159207, 20724424, 10397817, 21931507, 529681, 2119466, 5263583, 6043312, 12417940, 6797960, 15338215, 18869243, 8586579, 11156373, 13898838, 3649128, 5011379, 14826568, 228721, 17756621, 13451291, 11512852, 15750910, 12831038, 10351085};
    int maxPacketSize = 940;
    int overhead = 902;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 13595464937;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> offset = {13078, 17395201, 30197950, 33666085, 42289018, 50102218, 56605556, 75190789, 90162767, 98010487, 116793379, 119294340, 129703558, 142010017, 142209518, 163157380, 177023341, 192809152, 195085582, 203746520, 224376842, 235351144, 252196034, 272528263, 288156212, 290024197, 298389724, 301557533, 308973496, 327762150, 343563600, 357532223, 375331255, 390148303, 399576067, 419453464, 439295550, 445458533, 460351921, 481152786, 492837194, 505879204, 509882220, 526981205, 539039386, 558850990, 564043205, 566031525, 580717583, 600154272};
    vector<int> size = {17382108, 12802735, 3468125, 8622927, 7813192, 6503319, 18585233, 14971966, 7847699, 18782880, 2500939, 10409213, 12306459, 199480, 20947849, 13865945, 15785789, 2276427, 8660935, 20630302, 10974295, 16844870, 20332227, 15627930, 1867972, 8365526, 3167801, 7415962, 18788642, 15801449, 13968614, 17799019, 14817039, 9427755, 19877385, 19842073, 6162982, 14893385, 20800860, 11684402, 13041989, 4002992, 17098975, 12058179, 19811594, 5192206, 1988301, 14686041, 19436688, 6485903};
    int maxPacketSize = 929;
    int overhead = 905;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 23481517098;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> offset = {44207, 11002271, 26522615, 44615874, 56427909, 71868882, 88280148, 103218209, 104483103, 116937322, 137216325, 145303077, 150348088, 162396613, 163377025, 166112302, 166199708, 177272636, 192123900, 196993022, 197743175, 216211205, 230824736, 238949317, 250445570, 270088895, 279072157, 287551683, 298453603, 313384570, 318309221, 334531416, 336031639, 354130735, 354478976, 376217775, 386315643, 391020728, 397211528, 398845980, 420075926, 420818100, 424614989, 428814248, 430972558, 436628351, 450628609, 470236558, 475144715, 492781373};
    vector<int> size = {10958057, 15520333, 18093252, 11812017, 15440972, 16411254, 14938057, 1264884, 12454214, 20278984, 8086736, 5045011, 12048507, 980409, 2735261, 87396, 11072913, 14851263, 4869109, 750139, 18468012, 14613517, 8124573, 11496237, 19643314, 8983257, 8479514, 10901904, 14930952, 4924632, 16222194, 1500216, 18099090, 348222, 21738792, 10097851, 4705078, 6190786, 1634435, 21229933, 742169, 3796888, 4199239, 2158307, 5655775, 14000244, 19607929, 4908147, 17636654, 19221388};
    int maxPacketSize = 925;
    int overhead = 904;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 22550546053;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> offset = {45754, 7017332, 7583761, 28972746, 40215103, 41527107, 60528048, 73822674, 87335053, 92567681, 93128442, 108169595, 127989067, 140229093, 148034659, 148781518, 157809306, 177311483, 185078530, 197399672, 204156358, 214199020, 223304605, 226483824, 245548775, 263402632, 269537493, 278810128, 287716415, 297530588, 310116988, 323601641, 324325620, 330796354, 342398546, 360258077, 364151233, 372748172, 380173427, 398591879, 399387496, 406647020, 425892956, 446005407, 450385525, 459464511, 462731270, 469866521, 488263557, 502162210};
    vector<int> size = {6971552, 566423, 21388973, 11242350, 1312003, 19000937, 13294626, 13512362, 5232621, 560759, 15041132, 19819449, 12240010, 7805566, 746840, 9027767, 19502152, 7767034, 12321138, 6756673, 10042643, 9105576, 3179208, 19064947, 17853848, 6134855, 9272615, 8906284, 9814148, 12586385, 13484636, 723976, 6470724, 11602181, 17859508, 3893155, 8596934, 7425248, 18418427, 795612, 7259510, 19245918, 20112447, 4380111, 9078978, 3266749, 7135245, 18397017, 13898645, 10441529};
    int maxPacketSize = 934;
    int overhead = 908;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 18412652547;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> offset = {91083, 7840915, 10728293, 21887506, 38620877, 54552880, 65324799, 68048014, 86154290, 104401544, 124759830, 145836723, 153729048, 159387372, 169979767, 190945632, 197129669, 217409753, 224429356, 224912632, 239013500, 253268230, 265720304, 287361410, 287749809, 293470042, 304953128, 308877823, 313808388, 328040751, 344108348, 344179114, 358615765, 376336083, 396386937, 409640746, 424187765, 432955793, 446487284, 461095071, 479970916, 497943839, 504819492, 511770715, 517745047, 524243428, 532498354, 552519964, 561481528, 570527040};
    vector<int> size = {7749830, 2887377, 11159210, 16733370, 15932002, 10771919, 2723214, 18106274, 18247253, 20358283, 21076893, 7892324, 5658323, 10592394, 20965865, 6184034, 20280083, 7019602, 483273, 14100868, 14254728, 12452071, 21641105, 388397, 5720232, 11483085, 3924695, 4930563, 14232360, 16067595, 70766, 14436650, 17720317, 20050853, 13253806, 14547016, 8768028, 13531488, 14607786, 18875842, 17972922, 6875650, 6951223, 5974332, 6498380, 8254926, 20021610, 8961564, 9045511, 16574091};
    int maxPacketSize = 909;
    int overhead = 906;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 177864035420;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> offset = {39563, 15057968, 33341662, 49783309, 62046640, 79009423, 80453624, 87268790, 108563469, 125420105, 126206001, 128508948, 132052994, 153148203, 168138675, 170924331, 175933109, 182641796, 203093795, 205198034, 225870806, 243487175, 265098988, 282300247, 296219598, 313130709, 315404923, 320923423, 333129980, 345395864, 355047065, 372273615, 383512366, 384913289, 393134419, 394812278, 415523253, 434794370, 440158742, 454251105, 474368074, 476599918, 481967500, 492391269, 498294522, 516738892, 521943640, 525697823, 527365389, 532350262};
    vector<int> size = {15018352, 18283648, 16441603, 12263291, 16962767, 1444152, 6815166, 21294627, 16856606, 785867, 2302944, 3544035, 21095194, 14990467, 2785606, 5008744, 6708673, 20451952, 2104205, 20672735, 17616336, 21611805, 17201234, 13919350, 16911107, 2274201, 5518450, 12206553, 12265879, 9651182, 17226506, 11238709, 1400906, 8221100, 1677816, 20710967, 19271065, 5364319, 14092311, 20116941, 2231808, 5367571, 10423749, 5903203, 18444348, 5204694, 3754143, 1667558, 4984843, 10648245};
    int maxPacketSize = 961;
    int overhead = 906;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 9486965110;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> offset = {37612, 7484002, 8528926, 25222134, 27256388, 48464084, 54882828, 71496449, 84454849, 102681035, 123658118, 135606820, 157320382, 177927075, 190541824, 207052834, 219250928, 238041740, 255908953, 269189361, 272736643, 278385620, 282626180, 293180481, 296072088, 316755888, 336267659, 357359838, 368673758, 381481596, 387379866, 398176463, 407116533, 409768014, 427737851, 444020191, 449196071, 456545692, 462899912, 472587023, 477540398, 488558732, 497745041, 502202711, 522443559, 541643680, 555064725, 569206309, 575917474, 581920941};
    vector<int> size = {7446367, 1044907, 16693179, 2034225, 21207690, 6418742, 16613607, 12958377, 18226161, 20977080, 11948682, 21713561, 20606680, 12614725, 16510982, 12198072, 18790788, 17867187, 13280387, 3547258, 5648954, 4240534, 10554276, 2891603, 20683775, 19511747, 21092175, 11313914, 12807833, 5898256, 10796584, 8940066, 2651467, 17969809, 16282325, 5175873, 7349596, 6354204, 9687099, 4953356, 11018320, 9186309, 4457662, 20240824, 19200108, 13421025, 14141572, 6711162, 6003445, 9529862};
    int maxPacketSize = 933;
    int overhead = 904;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 19027181608;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> offset = {55517, 8657637, 19569460, 22615192, 42429650, 54555555, 66169923, 87063281, 95834275, 99032769, 109965914, 121147643, 133457811, 150163876, 161106588, 181126371, 191416368, 203672078, 221417237, 228713047, 244154882, 264482660, 271936989, 277643300, 293300304, 293796165, 313098315, 332505944, 336245631, 342996969, 364244555, 373056289, 378194293, 393126008, 394733355, 409512550, 416932242, 424987880, 429284016, 447729599, 460938745, 467112825, 483868404, 491351104, 512355132, 517995319, 526436014, 535085665, 551516651, 570555314};
    vector<int> size = {8602110, 10911820, 3045717, 19814439, 12125878, 11614354, 20893335, 8770979, 3198478, 10933141, 11181718, 12310147, 16706065, 10942704, 20019776, 10289986, 12255692, 17745153, 7295809, 15441821, 20327758, 7454310, 5706310, 15656978, 495842, 19302138, 19407613, 3739677, 6751318, 21247580, 8811730, 5137980, 14931703, 1607336, 14779186, 7419692, 8055634, 4296122, 18445578, 13209129, 6174067, 16755569, 7482696, 21004016, 5640168, 8440680, 8649624, 16430975, 19038654, 5847294};
    int maxPacketSize = 935;
    int overhead = 908;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 19958678922;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> offset = {73856, 12470978, 14503139, 24969259, 44041705, 65563552, 86768725, 89606588, 110655029, 114552818, 116594933, 137304310, 159118841, 179469828, 184580570, 189000890, 189428553, 192032080, 213953931, 220299404, 238324121, 240563116, 262493929, 277570801, 296074707, 317484471, 335157060, 346960326, 355642408, 366534150, 383759204, 399420607, 413359118, 418238715, 422116595, 442783064, 447326164, 469009069, 486169872, 491981831, 496735866, 509077324, 515746709, 520159986, 540716106, 544378801, 547769256, 551687302, 564753825, 577454632};
    vector<int> size = {12397105, 2032156, 10466111, 19072425, 21521832, 21205154, 2837857, 21048431, 3897763, 2042106, 20709353, 21814514, 20350966, 5110730, 4420301, 427640, 2603510, 21921846, 6345471, 18024708, 2238969, 21930789, 15076855, 18503901, 21409747, 17672569, 11803241, 8682055, 10891738, 17225050, 15661385, 13938503, 4879585, 3877867, 20666446, 4543074, 21682880, 17160785, 5811947, 4754014, 12341449, 6669363, 4413271, 20556094, 3662675, 3390452, 3918021, 13066505, 12700787, 19217657};
    int maxPacketSize = 931;
    int overhead = 904;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 20571589592;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> offset = {83051, 3272430, 15898648, 35620933, 36310047, 55794643, 69744827, 76703941, 80573499, 82073811, 95140637, 116342918, 121323944, 130618668, 150099427, 151011980, 165723357, 172421708, 190601247, 196311623, 210547387, 229633340, 248223958, 267182672, 282910574, 296826909, 308397344, 325340021, 343311369, 344342740, 355228088, 366890777, 383710743, 392756298, 397272471, 408406941, 429836482, 445839550, 454844810, 472583742, 491284926, 499774757, 513550124, 522719797, 524212421, 538156767, 557380283, 563616162, 582318494, 588634754};
    vector<int> size = {3189325, 12626212, 19722262, 689105, 19484524, 13950174, 6959085, 3869546, 1500252, 13066746, 21202205, 4980980, 9294650, 19480741, 912480, 14711356, 6698275, 18179469, 5710326, 14235727, 19085875, 18590558, 18958681, 15727865, 13916297, 11570373, 16942665, 17971336, 1031297, 10885295, 11662657, 16819913, 9045496, 4516170, 11134462, 21429513, 16003019, 9005186, 17738878, 18701141, 8489751, 13775300, 9169661, 1492601, 13944313, 19223486, 6235833, 18702275, 6316238, 2737628};
    int maxPacketSize = 983;
    int overhead = 901;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 7088252415;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> offset = {2, 46, 75, 104, 156, 185, 209, 238, 250, 307, 340, 387, 413, 463, 524, 559, 585, 612, 645, 694, 727, 769, 784, 819, 847, 869, 877, 914, 933, 970, 1018, 1054, 1082, 1120, 1155, 1173, 1201, 1220, 1226, 1243, 1265, 1284, 1322, 1343, 1396, 1429, 1452, 1495, 1555, 1606};
    vector<int> size = {13, 14, 21, 26, 25, 7, 10, 6, 29, 7, 16, 16, 24, 30, 25, 25, 17, 2, 26, 15, 8, 9, 19, 7, 5, 7, 28, 12, 11, 18, 16, 11, 26, 21, 9, 3, 3, 5, 6, 10, 2, 23, 19, 29, 10, 18, 15, 30, 23, 14};
    int maxPacketSize = 939;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1210;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> offset = {0, 16, 52, 110, 171, 210, 218, 247, 281, 332, 361, 405, 447, 455, 501, 532, 559, 588, 596, 627, 636, 668, 717, 775, 791, 810, 865, 913, 954, 959, 973, 979, 1019, 1068, 1110, 1145, 1163, 1185, 1213, 1229, 1240, 1281, 1294, 1334, 1374, 1399, 1451, 1476, 1532, 1533};
    vector<int> size = {4, 30, 27, 27, 16, 4, 24, 23, 23, 25, 15, 30, 5, 22, 22, 1, 15, 6, 7, 7, 9, 22, 30, 11, 18, 30, 16, 23, 3, 13, 4, 7, 15, 29, 24, 7, 3, 22, 4, 1, 9, 10, 30, 17, 11, 22, 3, 30, 1, 3};
    int maxPacketSize = 750;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 979;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> offset = {5, 51, 85, 122, 147, 198, 221, 266, 291, 316, 373, 416, 440, 495, 527, 556, 565, 585, 620, 653, 690, 753, 770, 814, 845, 862, 895, 921, 966, 1010, 1048, 1063, 1098, 1118, 1155, 1192, 1246, 1267, 1306, 1319, 1331, 1378, 1419, 1462, 1495, 1524, 1563, 1585, 1633, 1685};
    vector<int> size = {21, 18, 19, 3, 19, 18, 30, 12, 23, 24, 29, 22, 25, 8, 3, 1, 12, 15, 5, 26, 30, 10, 20, 24, 4, 15, 26, 26, 29, 26, 10, 13, 1, 9, 13, 25, 20, 13, 2, 2, 15, 25, 20, 11, 6, 14, 22, 25, 25, 16};
    int maxPacketSize = 858;
    int overhead = 7;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1146;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> offset = {6, 61, 79, 129, 171, 186, 207, 223, 267, 298, 313, 327, 365, 395, 423, 438, 452, 470, 517, 568, 611, 649, 676, 678, 706, 726, 761, 794, 828, 890, 919, 957, 1002, 1048, 1081, 1115, 1145, 1183, 1216, 1273, 1317, 1352, 1380, 1425, 1469, 1493, 1539, 1581, 1598, 1605};
    vector<int> size = {27, 9, 18, 17, 10, 2, 1, 27, 4, 1, 4, 13, 27, 19, 8, 5, 4, 27, 17, 12, 29, 2, 2, 4, 20, 13, 17, 16, 30, 2, 25, 14, 29, 14, 30, 27, 9, 26, 27, 21, 12, 13, 15, 19, 15, 23, 30, 8, 6, 24};
    int maxPacketSize = 539;
    int overhead = 9;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1173;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> offset = {7, 36, 77, 110, 126, 169, 201, 219, 231, 261, 291, 318, 362, 414, 461, 492, 521, 569, 596, 604, 635, 687, 703, 745, 771, 815, 822, 870, 920, 949, 962, 979, 993, 1023, 1062, 1085, 1112, 1156, 1197, 1235, 1272, 1313, 1319, 1353, 1369, 1429, 1446, 1455, 1498, 1540};
    vector<int> size = {26, 10, 16, 16, 11, 21, 6, 1, 15, 5, 15, 22, 21, 25, 28, 20, 28, 23, 3, 24, 22, 15, 16, 9, 29, 4, 18, 29, 26, 13, 14, 9, 24, 21, 14, 2, 29, 11, 30, 7, 30, 1, 17, 5, 30, 10, 8, 20, 14, 22};
    int maxPacketSize = 835;
    int overhead = 3;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 975;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> offset = {3, 36, 94, 156, 181, 230, 236, 255, 283, 335, 368, 417, 442, 465, 492, 523, 572, 603, 630, 681, 714, 729, 753, 806, 849, 873, 909, 930, 956, 994, 1017, 1034, 1068, 1090, 1111, 1153, 1178, 1201, 1215, 1261, 1292, 1326, 1360, 1416, 1457, 1478, 1492, 1519, 1565, 1591};
    vector<int> size = {13, 28, 28, 13, 28, 5, 7, 21, 30, 10, 23, 5, 3, 1, 22, 29, 15, 6, 25, 16, 13, 15, 20, 16, 11, 21, 14, 24, 12, 22, 17, 8, 14, 21, 13, 22, 12, 6, 21, 26, 5, 20, 26, 26, 2, 5, 9, 24, 13, 29};
    int maxPacketSize = 827;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 909;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> offset = {8, 52, 62, 90, 127, 154, 190, 215, 274, 308, 317, 344, 384, 422, 474, 496, 532, 557, 582, 642, 671, 704, 720, 755, 775, 809, 827, 883, 932, 949, 973, 988, 1014, 1035, 1074, 1104, 1119, 1127, 1176, 1218, 1247, 1293, 1329, 1368, 1399, 1435, 1474, 1532, 1553, 1612};
    vector<int> size = {17, 5, 17, 10, 25, 24, 21, 28, 14, 1, 16, 23, 5, 27, 16, 20, 4, 9, 28, 20, 5, 14, 2, 13, 21, 9, 28, 19, 10, 10, 5, 22, 8, 22, 11, 10, 5, 24, 24, 1, 17, 22, 19, 2, 4, 25, 24, 6, 25, 19};
    int maxPacketSize = 703;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 996;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> offset = {10, 18, 37, 43, 90, 135, 184, 225, 256, 274, 304, 353, 388, 412, 438, 483, 526, 533, 576, 589, 650, 696, 715, 753, 784, 801, 828, 860, 892, 935, 974, 1024, 1046, 1086, 1122, 1150, 1170, 1214, 1237, 1262, 1275, 1338, 1367, 1414, 1442, 1482, 1507, 1543, 1566, 1606};
    vector<int> size = {2, 11, 2, 26, 11, 19, 15, 12, 10, 18, 19, 6, 20, 23, 29, 11, 3, 29, 6, 30, 23, 17, 25, 18, 1, 14, 8, 13, 12, 15, 30, 7, 12, 20, 11, 20, 17, 5, 6, 13, 30, 5, 28, 19, 10, 7, 15, 17, 22, 20};
    int maxPacketSize = 518;
    int overhead = 6;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1037;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> offset = {0, 36, 71, 99, 131, 150, 186, 218, 241, 260, 270, 280, 335, 365, 395, 411, 441, 487, 503, 545, 568, 615, 627, 658, 720, 744, 757, 774, 816, 866, 917, 969, 987, 1026, 1077, 1101, 1129, 1158, 1184, 1204, 1227, 1267, 1285, 1298, 1351, 1368, 1378, 1427, 1462, 1501};
    vector<int> size = {19, 17, 5, 30, 17, 15, 16, 8, 14, 2, 3, 24, 14, 27, 5, 17, 14, 15, 11, 12, 19, 12, 3, 29, 16, 13, 8, 28, 23, 17, 25, 4, 12, 19, 10, 9, 6, 19, 5, 19, 19, 17, 10, 26, 12, 5, 27, 23, 10, 28};
    int maxPacketSize = 859;
    int overhead = 3;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 896;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> offset = {1, 32, 78, 111, 137, 164, 196, 241, 258, 290, 323, 331, 365, 398, 442, 483, 512, 568, 590, 646, 697, 738, 785, 795, 852, 881, 922, 955, 993, 1006, 1039, 1088, 1144, 1187, 1214, 1230, 1269, 1292, 1316, 1341, 1381, 1416, 1427, 1452, 1472, 1493, 1547, 1580, 1607, 1627};
    vector<int> size = {1, 22, 9, 17, 9, 23, 13, 1, 14, 27, 6, 3, 7, 27, 10, 13, 29, 16, 29, 24, 16, 18, 2, 28, 3, 29, 1, 19, 1, 3, 20, 30, 21, 14, 5, 9, 12, 6, 25, 28, 5, 2, 3, 10, 6, 26, 7, 1, 12, 23};
    int maxPacketSize = 582;
    int overhead = 4;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 879;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> offset = {700000000, 700000009, 700000013, 700000022, 700000034, 700000043, 700000052, 700000071, 700000078, 700000095, 700000108, 700000115, 700000121, 700000131, 700000142, 700000147, 700000153, 700000160, 700000168, 700000182, 700000195, 700000212, 700000227, 700000242, 700000250, 700000262, 700000270, 700000282, 700000286, 700000293, 700000301, 700000307, 700000315, 700000328, 700000333, 700000351, 700000354, 700000358, 700000369, 700000376, 700000393, 700000402, 700000405, 700000421, 700000439, 700000452, 700000465, 700000473, 700000488, 700000494};
    vector<int> size = {3, 4, 1, 6, 5, 7, 10, 6, 9, 7, 6, 6, 4, 10, 5, 5, 7, 2, 6, 5, 8, 9, 9, 7, 5, 7, 8, 2, 1, 8, 6, 1, 6, 1, 9, 3, 3, 5, 6, 10, 2, 3, 9, 9, 10, 8, 5, 10, 3, 4};
    int maxPacketSize = 500;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 333;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> offset = {700000000, 700000009, 700000013, 700000022, 700000034, 700000043, 700000052, 700000071, 700000078, 700000095, 700000108, 700000115, 700000121, 700000131, 700000142, 700000147, 700000153, 700000160, 700000168, 700000182, 700000195, 700000212, 700000227, 700000242, 700000250, 700000262, 700000270, 700000282, 700000286, 700000293, 700000301, 700000307, 700000315, 700000328, 700000333, 700000351, 700000354, 700000358, 700000369, 700000376, 700000393, 700000402, 700000405, 700000421, 700000439, 700000452, 700000465, 700000473, 700000488, 700000494};
    vector<int> size = {3, 4, 1, 6, 5, 7, 10, 6, 9, 7, 6, 6, 4, 10, 5, 5, 7, 2, 6, 5, 8, 9, 9, 7, 5, 7, 8, 2, 1, 8, 6, 1, 6, 1, 9, 3, 3, 5, 6, 10, 2, 3, 9, 9, 10, 8, 5, 10, 3, 4};
    int maxPacketSize = 150;
    int overhead = 15;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 537;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> offset = {700000000, 700000001, 700000003, 700000004, 700000006, 700000007, 700000008, 700000011, 700000014, 700000015, 700000016, 700000019, 700000021, 700000023, 700000026, 700000027, 700000029, 700000030, 700000032, 700000034, 700000035, 700000038, 700000039, 700000040, 700000042, 700000044, 700000046, 700000048, 700000050, 700000051, 700000053, 700000055, 700000057, 700000060, 700000061, 700000063, 700000064, 700000066, 700000067, 700000070, 700000073, 700000076, 700000077, 700000079, 700000081, 700000084, 700000087, 700000089, 700000092, 700000094};
    vector<int> size = {1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2};
    int maxPacketSize = 98;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 115;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> offset = {700000000, 700000001, 700000003, 700000004, 700000006, 700000007, 700000008, 700000011, 700000014, 700000015, 700000016, 700000019, 700000021, 700000023, 700000026, 700000027, 700000029, 700000030, 700000032, 700000034, 700000035, 700000038, 700000039, 700000040, 700000042, 700000044, 700000046, 700000048, 700000050, 700000051, 700000053, 700000055, 700000057, 700000060, 700000061, 700000063, 700000064, 700000066, 700000067, 700000070, 700000073, 700000076, 700000077, 700000079, 700000081, 700000084, 700000087, 700000089, 700000092, 700000094};
    vector<int> size = {1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2};
    int maxPacketSize = 98;
    int overhead = 3;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 101;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxPacketSize = 1000;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2002002003;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> offset = {235136298, 43456768, 482926758, 691951182, 576850496, 397169955, 104857766, 17123384, 416640231, 11806477, 152178895, 741881166, 652840542, 323560046, 205146318, 819603759, 0, 678226788, 819499956, 293750559, 177898238, 253372284, 150535424, 507825744, 270231067, 746928049, 359917667, 158245050, 440324505, 324181264, 452331848, 532160795, 637928230, 74328331, 759345989, 786883532, 644572959, 709073947, 245867979, 558461513, 606411131, 186700170, 382965506, 313016207, 652165766, 353221104, 342994639, 137668952, 773799969, 3334487};
    vector<int> size = {10731681, 30871563, 24898986, 17122765, 29560635, 19470276, 32811186, 26333384, 23684274, 5316907, 6066155, 5046883, 25386246, 621218, 29989980, 26959682, 3334487, 13724394, 103803, 19265648, 8801932, 16858783, 1643471, 24335051, 23519492, 12417940, 23047839, 19653188, 12007343, 18813375, 30594910, 26300718, 6644729, 30529435, 14453980, 32616424, 7592807, 32807219, 7504305, 18388983, 31517099, 18446148, 14204449, 10543839, 674776, 6696563, 10226465, 12866472, 13083563, 8471990};
    int maxPacketSize = 1000;
    int overhead = 291;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1194024716;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> offset = {674786910, 62595654, 837333801, 731492672, 516154379, 399665913, 129836851, 685917468, 397021224, 513881191, 629850318, 488016329, 29941079, 711099663, 610658231, 420899474, 666516796, 606949653, 679750848, 429919823, 819329636, 0, 283036020, 282411625, 692559908, 109328310, 773840718, 363863464, 801214906, 316633710, 634462756, 458927394, 96673445, 345833818, 643175363, 542720499, 461466414, 238214681, 214590606, 386927136, 172902966, 780582295, 260899541, 156761147, 577924697, 654795231, 761571018, 189115663, 202630992, 568110998};
    vector<int> size = {4963938, 34077791, 29510665, 30078346, 26566120, 21233561, 26924296, 6642440, 2644689, 2273188, 4612438, 25864862, 32654575, 20393009, 19192087, 9020349, 8270114, 3708578, 6166620, 29007571, 18004165, 29941079, 33597690, 624395, 18539755, 20508541, 6741577, 23063672, 18114730, 29200108, 8712607, 2539020, 12654865, 18029646, 11619868, 25390499, 26549915, 22684860, 23624075, 10094088, 16212697, 20632611, 21512084, 16141819, 29024956, 11721565, 12269700, 13515329, 11959614, 9813699};
    int maxPacketSize = 474;
    int overhead = 279;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2107099069;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> offset = {555423136, 470626328, 303800826, 732416490, 298703410, 18509440, 608720446, 758419202, 754119269, 568396474, 0, 504931123, 137255111, 238071885, 111654687, 660693874, 524610643, 705036438, 387919454, 51161847, 476200326, 105761961, 241536688, 700031036, 363848110, 76732054, 518192473, 466300575, 36009657, 22805301, 226769464, 458492088, 160212341, 754905118, 688697386, 144627958, 351268463, 175020384, 648554126, 207107173, 150770479, 569252393, 578859162, 187322994, 418642666, 270486677, 618138902, 452419148, 335104911, 731686508};
    vector<int> size = {12973338, 5573998, 31304085, 21702779, 5097416, 4295861, 9418456, 27520807, 785849, 855919, 18509440, 13261350, 7372847, 3464803, 25600424, 28003512, 30812493, 26650070, 30723212, 25570207, 28730797, 5892726, 28949989, 5005402, 24071344, 29029907, 6418170, 4325753, 15152190, 13204356, 11302421, 7808487, 14808043, 3514084, 11333650, 6142521, 12579647, 12302610, 12139748, 19662291, 9441862, 9606769, 29861284, 19784179, 33776482, 28216733, 30415224, 6072940, 16163552, 729982};
    int maxPacketSize = 992;
    int overhead = 985;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 111378927834;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> offset = {1794, 1626, 2062, 2236, 2107, 2006, 1663, 1603, 2015, 1584, 1719, 2272, 2205, 1884, 1771, 2389, 1550, 2224, 2378, 1847, 1749, 1816, 1700, 2070, 1825, 2293, 1956, 1732, 2024, 1910, 2041, 2089, 2145, 1648, 2315, 2350, 2162, 2250, 1803, 2096, 2133, 1767, 1981, 1866, 2183, 1946, 1937, 1679, 2331, 1560};
    vector<int> size = {5, 15, 6, 13, 19, 8, 10, 16, 2, 11, 7, 19, 10, 18, 20, 14, 3, 2, 3, 16, 16, 7, 19, 11, 12, 20, 15, 16, 11, 19, 18, 6, 13, 7, 8, 20, 15, 19, 5, 11, 3, 4, 17, 15, 16, 7, 9, 16, 15, 14};
    int maxPacketSize = 20;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1383;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> offset = {12407, 7366, 14172, 13300, 10870, 10109, 7707, 12802, 9890, 10790, 11746, 10720, 7179, 13223, 11533, 10189, 12322, 11306, 12627, 10290, 14084, 7024, 9002, 8867, 13007, 7622, 13575, 9588, 13946, 9197, 11916, 10406, 7437, 9327, 12087, 10926, 10632, 8462, 8346, 9741, 7973, 13763, 8642, 7846, 11277, 12256, 13481, 8096, 8187, 11071};
    vector<int> size = {142, 11, 33, 146, 12, 53, 136, 156, 137, 36, 122, 50, 171, 29, 179, 73, 82, 138, 108, 47, 25, 123, 114, 67, 171, 25, 141, 148, 94, 60, 131, 144, 157, 174, 84, 115, 59, 136, 47, 148, 105, 139, 172, 95, 28, 13, 48, 77, 114, 167};
    int maxPacketSize = 99;
    int overhead = 9;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 5676;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> offset = {8883, 8370, 7523, 10164, 7442, 5268, 9332, 10452, 10189, 8977, 5192, 8540, 6050, 7139, 5924, 9644, 8759, 9999, 7902, 5526, 8486, 5833, 7293, 9912, 7866, 5711, 8685, 8263, 5416, 5350, 6944, 8192, 6472, 10321, 9733, 6206, 7813, 6606, 9534, 6831, 6363, 9149, 9257, 6788, 8016, 7337, 9477, 8076, 7654, 10123};
    vector<int> size = {74, 56, 65, 19, 74, 49, 78, 101, 83, 109, 16, 100, 113, 95, 86, 26, 103, 92, 62, 127, 13, 90, 43, 46, 8, 81, 48, 49, 94, 18, 129, 31, 131, 78, 128, 101, 5, 134, 60, 103, 68, 75, 30, 13, 36, 103, 48, 116, 112, 38};
    int maxPacketSize = 71;
    int overhead = 4;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 3863;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> offset = {1846, 1641, 2222, 2146, 2170, 2212, 1862, 1906, 2059, 1660, 1929, 2165, 2040, 2189, 1772, 2260, 2233, 1630, 2005, 1697, 1799, 1730, 1854, 1614, 2201, 2107, 1977, 1725, 1706, 1760, 1776, 2246, 2018, 1964, 1886, 2076, 1835, 1807, 1947, 2034, 2254, 1740, 1818, 1919, 1986, 2090, 1675, 1752, 2125, 1938};
    vector<int> size = {7, 16, 8, 12, 16, 3, 16, 9, 15, 14, 1, 3, 12, 11, 4, 10, 12, 10, 9, 3, 3, 3, 7, 9, 5, 11, 1, 2, 15, 7, 15, 6, 8, 8, 14, 12, 4, 10, 16, 3, 2, 5, 14, 2, 16, 10, 14, 1, 15, 5};
    int maxPacketSize = 10;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 586;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> offset = {7141, 6362, 2640, 4118, 6049, 7022, 4273, 5782, 3859, 6724, 3182, 2084, 4549, 5980, 2560, 5221, 6581, 3627, 5574, 6781, 5289, 6278, 3430, 4010, 3475, 6470, 2427, 2284, 6905, 2949, 4923, 5658, 5855, 2773, 4436, 4909, 5094, 6152, 2031, 4723, 5350, 3269, 4836, 4203, 3759, 3090, 2478, 5477, 5021, 1878};
    vector<int> size = {138, 90, 127, 44, 102, 52, 126, 64, 83, 16, 15, 136, 142, 67, 69, 39, 82, 106, 77, 76, 52, 29, 26, 69, 126, 52, 14, 123, 65, 94, 46, 73, 124, 102, 98, 3, 54, 98, 8, 84, 57, 113, 56, 15, 94, 66, 76, 48, 45, 117};
    int maxPacketSize = 82;
    int overhead = 8;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 4261;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> offset = {10473, 10212, 9995, 12614, 9305, 12522, 9382, 10560, 12166, 8804, 11119, 12472, 9552, 9691, 11451, 8343, 10891, 9234, 10380, 8757, 8408, 11279, 10983, 10702, 11626, 9727, 8515, 12089, 8670, 8109, 11882, 9031, 11769, 12008, 9127, 10129, 9792, 11514, 9833, 8175, 9949, 8651, 11701, 8028, 11359, 10796, 12345, 8195, 10615, 8924};
    vector<int> size = {33, 112, 115, 7, 32, 37, 119, 11, 119, 96, 114, 21, 118, 25, 54, 46, 87, 58, 51, 30, 104, 29, 98, 79, 45, 51, 119, 30, 43, 27, 100, 78, 66, 55, 67, 45, 10, 80, 72, 2, 28, 17, 20, 41, 52, 77, 71, 105, 46, 54};
    int maxPacketSize = 68;
    int overhead = 8;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 3564;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> offset = {5942, 8071, 7068, 7825, 5283, 7086, 6794, 7192, 7915, 7793, 6584, 7254, 5538, 7703, 6913, 7578, 7479, 6126, 7665, 7981, 5817, 7340, 6339, 5896, 6678, 6491, 6846, 7752, 5746, 7136, 7476, 8012, 6183, 5874, 6059, 5274, 6401, 5493, 5981, 6266, 5704, 7378, 6708, 5368, 7269, 6992, 7620, 6448, 5620, 5425};
    vector<int> size = {9, 47, 16, 68, 57, 23, 41, 31, 36, 4, 67, 10, 60, 49, 55, 37, 72, 33, 31, 23, 26, 31, 32, 14, 18, 60, 46, 11, 64, 23, 3, 33, 53, 8, 56, 2, 15, 17, 48, 41, 15, 70, 57, 49, 66, 44, 41, 29, 71, 65};
    int maxPacketSize = 43;
    int overhead = 7;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2393;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> offset = {10264, 111, 357, 100066, 714, 1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000, 1700000, 1800000};
    vector<int> size = {117, 134, 235, 2395, 23, 99990, 99991, 99992, 99993, 99994, 99995, 99996, 99997, 99998};
    int maxPacketSize = 100;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1003242;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> offset = {95, 618, 1042, 1422, 1898, 2298, 2657, 3021, 3561, 4072, 4700, 5116, 5539, 6137, 6500, 6930, 7335, 7905, 8436, 9056, 9518, 9964, 10405, 10946, 11611, 12118, 12718, 13261, 13779, 14265, 14692, 15261, 15722, 16132, 16657, 16983, 17484, 17892, 18510, 18984, 19351, 19913, 20488, 21025, 21567, 22005, 22421, 22836, 23286, 23903};
    vector<int> size = {465, 351, 311, 435, 354, 344, 312, 486, 511, 557, 347, 352, 522, 356, 405, 379, 549, 530, 528, 412, 378, 396, 519, 582, 430, 537, 518, 475, 440, 333, 496, 389, 404, 506, 323, 490, 309, 530, 396, 321, 466, 565, 484, 527, 406, 341, 328, 415, 572, 437};
    int maxPacketSize = 1000;
    int overhead = 36;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 23471;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> offset = {5, 14, 21, 105, 114, 1008, 1015, 1017, 10008, 10015, 10017, 100008, 100015, 100017, 1000008, 1000015, 1000017};
    vector<int> size = {6, 6, 1, 6, 6, 6, 1, 6, 6, 1, 5, 5, 1, 6, 5, 1, 5};
    int maxPacketSize = 10;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 176;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> offset = {0, 20000000, 40000000, 60000000, 80000000, 100000000, 120000000, 140000000, 160000000, 180000000, 200000000, 220000000, 240000000, 260000000, 280000000, 300000000, 320000000, 340000000, 360000000, 380000000, 400000000, 420000000, 440000000, 460000000, 480000000, 500000000, 520000000, 540000000, 560000000, 580000000, 600000000, 620000000, 640000000, 660000000, 680000000, 700000000, 720000000, 740000000, 760000000, 780000000, 800000000, 820000000, 840000000, 860000000, 880000000, 900000000, 920000000, 940000000, 960000000, 980000000};
    vector<int> size = {19999999, 19999959, 19999998, 19999818, 19999659, 19999885, 20000000, 19999998, 19999952, 19999952, 19999839, 19999608, 20000000, 20000000, 20000000, 19999588, 19999801, 19999978, 19999693, 19999816, 19999932, 19999944, 19999997, 19999948, 19999948, 19999881, 20000000, 19999962, 19999972, 19999987, 19999973, 19999419, 19999774, 19999527, 19999909, 19999495, 19999991, 19999999, 19999995, 19999981, 19999997, 19999935, 19999993, 19999809, 19999882, 19999926, 19999445, 19999996, 19999796, 19999976};
    int maxPacketSize = 971;
    int overhead = 6;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1006211656;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> offset = {0, 6, 9, 11};
    vector<int> size = {5, 1, 1, 2};
    int maxPacketSize = 20;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> offset = {0, 5, 10, 19};
    vector<int> size = {4, 4, 4, 2};
    int maxPacketSize = 20;
    int overhead = 4;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> offset = {10, 20, 30, 2000};
    vector<int> size = {5, 5, 5, 5};
    int maxPacketSize = 1000;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> offset = {0, 1, 2, 3, 4, 5, 6};
    vector<int> size = {1, 1, 1, 1, 1, 1, 1};
    int maxPacketSize = 1000;
    int overhead = 997;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2998;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> offset = {197, 84, 236, 119, 258};
    vector<int> size = {6, 16, 3, 14, 35};
    int maxPacketSize = 507;
    int overhead = 391;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 927;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> offset = {0, 10, 20, 30, 40, 50};
    vector<int> size = {10, 10, 10, 10, 10, 10};
    int maxPacketSize = 49;
    int overhead = 34;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 196;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> offset = {10000000, 200000000, 300000000, 400000000, 500000000};
    vector<int> size = {10, 100000000, 100000000, 100000000, 100000000};
    int maxPacketSize = 1000;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 400801616;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> offset = {0, 130, 140};
    vector<int> size = {110, 1, 1};
    int maxPacketSize = 150;
    int overhead = 100;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 441;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> offset = {8, 0};
    vector<int> size = {1, 6};
    int maxPacketSize = 7;
    int overhead = 2;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> offset = {0, 1000000000};
    vector<int> size = {1000000000, 1000000000};
    int maxPacketSize = 1000;
    int overhead = 999;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> offset = {569, 11205720, 35848446, 40178135, 71295332, 93822852, 112006370, 130452919, 150686493, 159228082, 176227387, 209335168, 210838203, 233213013, 265960819, 299101076, 309926508, 327006149, 355983466, 359557633, 387715718, 394114989, 428725610, 435099840, 466348304, 491101197, 514138750, 527720477, 544508574, 563484273, 575699704, 586956948, 623850496, 637393096, 663077802, 676591386, 719223230, 736404479, 759073106, 762427542, 796044009, 808605392, 837811558, 840151142, 843038804, 877969740, 1, 7, 31, 38};
    vector<int> size = {406, 5552364, 977063, 1732804, 146746, 193072, 538194, 3421821, 1109583, 875377, 14971249, 56050, 11986158, 10402022, 2628172, 240623, 4332383, 3724979, 1288483, 18120088, 1230505, 6208924, 1450936, 16256368, 7075991, 1474844, 5338831, 8064100, 8839143, 11747851, 11207791, 30956865, 12114486, 17116278, 4058727, 10468088, 130502, 1880906, 284261, 1135812, 2394709, 8214334, 769651, 57773, 12560730, 11353291, 5, 14, 5, 5};
    int maxPacketSize = 20;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 549378984;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> offset = {0, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000, 20000000, 30000000, 40000000, 50000000, 60000000, 70000000, 80000000, 90000000, 100000000, 200000000, 300000000, 400000000, 500000000, 600000000, 700000000, 800000000, 900000000};
    vector<int> size = {10, 99990, 99990, 99990, 99990, 99990, 99990, 99990, 99990, 99990, 999990, 999990, 999990, 999990, 999990, 999990, 999990, 999990, 999990, 9999990, 9999990, 9999990, 9999990, 9999990, 9999990, 9999990, 9999990, 9999990, 99999990, 99999990, 99999990, 99999990, 99999990, 99999990, 99999990, 99999990, 99999990};
    int maxPacketSize = 1000;
    int overhead = 967;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 30299994815;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> offset = {0, 10041, 30542, 59311, 77313, 109033, 135602, 165928, 184916, 187602, 202171, 209798, 226804, 229249, 244252, 265086, 287528, 311325, 325332, 347711, 376245, 388142, 414475, 446981, 454086, 464050, 473265, 503371, 538565, 553747, 565717, 568911, 574436, 578566, 611312, 622618, 647412, 673707, 683006, 700662, 734356, 739933, 754840, 777350, 791256, 801263, 829715, 864280, 878240, 901796};
    vector<int> size = {10000, 20467, 28500, 17724, 31358, 26464, 30145, 18827, 2491, 13942, 7436, 16604, 2153, 14382, 20716, 21895, 23726, 13538, 21912, 28299, 11894, 25811, 32333, 6664, 9711, 8868, 29644, 34757, 14859, 11741, 2778, 5035, 3842, 32106, 10942, 24648, 25805, 8729, 17350, 33101, 5548, 14623, 21954, 13840, 9376, 28308, 34439, 13323, 23538, 4082};
    int maxPacketSize = 1000;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 891140;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> offset = {1, 3, 8, 11};
    vector<int> size = {2, 2, 2, 2};
    int maxPacketSize = 50;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> offset = {0, 100000003, 100000004, 100000005, 100000006, 1000000000};
    vector<int> size = {100000000, 1, 1, 1, 1, 1000000000};
    int maxPacketSize = 100;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 1111111118;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> offset = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    vector<int> size = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int maxPacketSize = 140;
    int overhead = 38;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 140;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> offset = {0, 5, 10, 19, 21};
    vector<int> size = {4, 4, 4, 2, 30};
    int maxPacketSize = 20;
    int overhead = 4;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> offset = {1, 2, 3, 9, 10, 11};
    vector<int> size = {1, 1, 1, 1, 1, 1};
    int maxPacketSize = 20;
    int overhead = 10;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> offset = {4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 31002, 44008, 55555, 62413, 123414365, 890142742, 900000, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 12341, 6245523, 75474, 2345};
    vector<int> size = {1, 500, 500, 500, 500, 500, 500, 500, 500, 999, 500, 500, 500, 50000, 50000, 50, 50, 50, 50, 50, 50, 50, 50, 60, 70, 70, 80, 80, 80};
    int maxPacketSize = 823;
    int overhead = 557;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 336567;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> offset = {0, 2, 4, 6, 8, 100, 1000, 10000};
    vector<int> size = {1, 1, 1, 1, 1, 900, 1, 1};
    int maxPacketSize = 78;
    int overhead = 5;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 986;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> offset = {10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 40000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 49000, 50000, 51000, 52000, 53000, 54000, 55000, 56000, 57000, 58000, 59000};
    vector<int> size = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int maxPacketSize = 999;
    int overhead = 1;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 50051;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> offset = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    vector<int> size = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int maxPacketSize = 7;
    int overhead = 3;
    DeviceProgramming* pObj = new DeviceProgramming();
    clock_t start = clock();
    long result = pObj->minBytes(offset, size, maxPacketSize, overhead);
    clock_t end = clock();
    delete pObj;
    long expected = 150;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10783&pm=7810
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class DeviceProgramming
{
public:
    long long minBytes(vector <int> offset, vector <int> size, int maxPacketSize, int overhead);
};
 
long long DeviceProgramming::minBytes(vector <int> offset, vector <int> size, int maxp, int over)
{
    ll dp[60];
    int N = offset.size();
    vector<pii> rngs(N);
    for (int i = 0; i < N; i++)
        rngs[i] = pii(offset[i], offset[i] + size[i]);
    sort(RA(rngs));
    maxp -= over;
 
    dp[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        dp[i] = LONG_LONG_MAX;
        for (int s = 0; s < i; s++)
        {
            ll d = rngs[i - 1].second - rngs[s].first;
            ll pkts = (d + maxp - 1) / maxp;
            ll bytes = d + over * pkts;
            dp[i] <?= dp[s] + bytes;
        }
    }
    return dp[N];
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/