/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1965
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

class ElevatorLimit {
public:
    vector<int> getRange(vector<int> enter, vector<int> exit, int physicalLimit);
};

vector<int> ElevatorLimit::getRange(vector<int> enter, vector<int> exit, int physicalLimit) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> enter = {1, 2, 3, 4, 5};
    vector<int> exit = {5, 4, 3, 2, 1};
    int physicalLimit = 25;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 25};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> enter = {1, 0};
    vector<int> exit = {0, 1};
    int physicalLimit = 1;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> enter = {1, 0};
    vector<int> exit = {0, 1};
    int physicalLimit = 2;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> enter = {0, 1};
    vector<int> exit = {1, 0};
    int physicalLimit = 1;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> enter = {0, 2};
    vector<int> exit = {1, 0};
    int physicalLimit = 1;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> enter = {54, 127, 157, 39, 29, 156, 192, 60, 51, 156, 79, 175, 112, 109, 180, 3, 24, 63, 133, 100, 136, 40, 114, 98, 199, 82, 15, 105, 49, 40, 33, 193, 116, 32, 59, 177, 152, 35, 5, 30, 190, 158, 12};
    vector<int> exit = {54, 127, 157, 39, 29, 156, 192, 60, 51, 156, 79, 175, 112, 109, 180, 3, 24, 63, 133, 100, 136, 40, 114, 98, 199, 82, 15, 105, 49, 40, 33, 193, 116, 32, 59, 177, 152, 35, 5, 30, 190, 158, 12};
    int physicalLimit = 558;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {199, 558};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> enter = {175, 50, 167, 45, 62, 96, 197, 103, 140, 75, 8, 113, 68, 64, 56, 2, 31, 23, 15, 85, 17, 54, 149, 198, 97};
    vector<int> exit = {38, 154, 83, 138, 59, 160, 52, 20, 184, 198, 40, 138, 44, 155, 42, 144, 28, 127, 128, 90, 193, 100, 94, 18, 132};
    int physicalLimit = 367;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> enter = {6, 85, 106, 1, 199, 76, 162, 141};
    vector<int> exit = {38, 68, 62, 83, 170, 12, 61, 114};
    int physicalLimit = 668;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {223, 500};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> enter = {159, 41, 182, 81, 7, 35, 168, 63, 131, 193, 107, 179, 105, 159, 52, 110, 61, 70, 25, 199, 179, 47, 22, 97, 112, 196, 183, 32, 182, 109, 52, 176, 64, 86, 57, 143, 146, 18, 138, 101, 81, 197, 13, 38, 166, 125, 54, 59, 44};
    vector<int> exit = {146, 10, 87, 92, 58, 184, 116, 84, 123, 109, 2, 198, 164, 198, 187, 11, 34, 131, 120, 102, 140, 193, 15, 174, 44, 44, 173, 44, 48, 67, 194, 36, 96, 8, 59, 155, 77, 71, 3, 148, 26, 36, 36, 51, 141, 100, 24, 63, 48};
    int physicalLimit = 900;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {303, 318};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> enter = {107, 15, 98, 153, 4, 19, 9, 160, 197, 122, 175, 37, 2, 190, 86, 86, 101, 128, 14, 154, 155, 2, 188, 179, 180, 66, 80};
    vector<int> exit = {37, 176, 192, 99, 173, 113, 46, 20, 81, 108, 154, 161, 50, 156, 81, 56, 92, 161, 39, 189, 22, 131, 142, 144, 95, 162, 131};
    int physicalLimit = 1;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> enter = {179, 135, 104, 90, 97, 186, 187, 47, 152, 100, 119, 28, 193, 11, 103, 100, 179, 11, 80, 163, 50, 131, 103, 50, 142, 51, 112, 62, 69, 72, 88, 3, 162, 93, 190, 85, 79, 86, 146, 71, 65, 131, 179, 119, 66, 111};
    vector<int> exit = {134, 81, 178, 168, 86, 128, 1, 165, 62, 46, 188, 70, 104, 111, 3, 47, 144, 69, 163, 21, 101, 126, 169, 84, 146, 165, 198, 1, 65, 181, 135, 99, 100, 195, 171, 47, 16, 54, 79, 69, 6, 97, 154, 80, 151, 76};
    int physicalLimit = 954;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {453, 659};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> enter = {35, 125, 84, 47, 176, 71, 141, 46, 12, 174, 126, 14, 4, 58, 179, 161, 173, 148, 157, 175, 30, 53, 98, 99, 3, 100, 95, 174, 189, 23, 106, 101, 135, 70, 97, 156, 54, 156};
    vector<int> exit = {199, 189, 136, 29, 8, 190, 108, 111, 46, 161, 174, 188, 49, 195, 66, 177, 147, 196, 30, 76, 178, 99, 104, 160, 114, 86, 63, 92, 66, 110, 82, 192, 104, 62, 71, 52, 76, 181};
    int physicalLimit = 785;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> enter = {165, 161, 30, 178, 178, 5, 28, 20, 159, 143, 28};
    vector<int> exit = {53, 113, 16, 148, 148, 63, 178, 110, 129, 160, 75};
    int physicalLimit = 859;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {194, 625};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> enter = {25, 163, 53, 29, 179, 81, 67, 23};
    vector<int> exit = {37, 161, 31, 137, 160, 162, 166, 159};
    int physicalLimit = 163;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> enter = {164, 45, 153, 127, 141, 101, 35, 90, 146, 63, 122, 66, 10, 130, 160, 178, 83, 73, 197, 59, 58, 105, 35, 193, 167, 122, 153, 79, 71};
    vector<int> exit = {101, 108, 98, 6, 43, 31, 67, 11, 157, 102, 19, 13, 198, 6, 139, 36, 161, 24, 116, 15, 128, 67, 100, 24, 176, 90, 166, 17, 79};
    int physicalLimit = 971;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 135};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> enter = {117, 100, 137, 143, 81, 21, 162, 53, 111, 6, 173, 95, 128, 100, 66, 32, 105, 139, 51, 131, 22, 190, 18, 70, 5, 172, 173, 61, 124, 143, 34, 137, 42, 116, 60, 115, 42, 22, 77, 50, 8, 187, 109, 152, 191};
    vector<int> exit = {35, 151, 93, 80, 19, 97, 75, 6, 30, 41, 74, 125, 111, 98, 15, 187, 83, 156, 139, 84, 155, 16, 98, 142, 40, 83, 156, 178, 153, 29, 75, 181, 77, 188, 125, 181, 103, 77, 148, 77, 171, 190, 71, 38, 66};
    int physicalLimit = 1000;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> enter = {2};
    vector<int> exit = {3};
    int physicalLimit = 2;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> enter = {696, 327, 995, 748, 124, 896, 472, 877, 652, 850, 656, 812, 978, 375, 980, 187, 13, 296, 243};
    vector<int> exit = {205, 451, 195, 626, 950, 99, 649, 379, 54, 599, 866, 313, 183, 216, 153, 232, 337, 114, 610};
    int physicalLimit = 955;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> enter = {136, 559, 970, 167, 730, 628, 614, 481, 238, 442, 659, 108, 892, 685, 849, 312, 325, 331, 754, 910, 567, 49, 393, 385, 988, 9, 14, 909, 197, 255, 88, 142, 805, 131, 941};
    vector<int> exit = {464, 251, 730, 523, 60, 999, 435, 545, 66, 608, 635, 86, 605, 256, 631, 257, 475, 500, 819, 570, 268, 431, 969, 813, 390, 505, 428, 298, 277, 760, 769, 573, 582, 315, 836};
    int physicalLimit = 235;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> enter = {528, 931, 787, 745, 551, 781, 820, 426, 353, 11, 577, 391, 11, 446, 949, 666, 962, 206, 564, 198, 619, 997, 793};
    vector<int> exit = {699, 432, 428, 379, 214, 743, 123, 532, 72, 473, 307, 561, 685, 299, 436, 825, 654, 786, 915, 439, 319, 591, 908};
    int physicalLimit = 563;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> enter = {962, 692, 801, 531, 354, 198, 45, 420, 911, 148, 898, 563, 641, 198, 689};
    vector<int> exit = {508, 856, 860, 264, 557, 250, 195, 191, 218, 535, 170, 272, 997, 113, 421};
    int physicalLimit = 101;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> enter = {269, 437, 969, 989, 469, 151, 132, 166, 636, 1000, 658, 810, 180, 855, 472, 752, 38, 1, 383, 327, 333, 590, 805, 636, 585, 896, 768, 676, 206, 96, 771, 364, 593, 904, 405, 324, 902, 23, 203, 346, 794, 306, 421, 185, 528, 655, 413};
    vector<int> exit = {95, 318, 84, 384, 613, 229, 974, 539, 423, 271, 86, 597, 641, 900, 7, 786, 987, 455, 540, 429, 50, 609, 631, 758, 448, 956, 278, 735, 646, 955, 195, 877, 475, 416, 597, 730, 901, 649, 578, 968, 542, 223, 640, 595, 268, 48, 974};
    int physicalLimit = 885;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> enter = {722, 668, 984, 930, 131, 547, 572, 205, 282, 661, 82, 879, 923, 955, 770, 213, 449, 907, 863, 964, 610, 671, 867};
    vector<int> exit = {874, 309, 206, 968, 814, 18, 361, 856, 240, 698, 120, 302, 253, 651, 751, 118, 867, 534, 943, 585, 754, 424, 683};
    int physicalLimit = 604;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> enter = {405, 428, 328, 180, 331, 568, 267, 682, 661, 442, 434, 777, 198, 215, 584, 344, 196};
    vector<int> exit = {432, 558, 117, 564, 972, 980, 565, 329, 379, 114, 441, 109, 996, 437, 925, 932, 721};
    int physicalLimit = 926;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> enter = {865, 360, 886, 549, 325, 527};
    vector<int> exit = {176, 289, 937, 589, 755, 376};
    int physicalLimit = 966;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {177, 206};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> enter = {205, 894, 306, 26, 202, 803};
    vector<int> exit = {447, 448, 464, 190, 159, 518};
    int physicalLimit = 912;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {690, 702};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> enter = {611, 382, 772, 313, 641, 394};
    vector<int> exit = {316, 653, 387, 417, 653, 73};
    int physicalLimit = 994;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {363, 380};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> enter = {381, 330, 242, 94, 92, 748, 3, 435, 193, 469, 290, 471, 27};
    vector<int> exit = {355, 412, 346, 75, 182, 217, 68, 372, 218, 612, 428, 496, 570};
    int physicalLimit = 990;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {603, 690};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> enter = {136, 221, 351, 404, 266, 590, 6, 742, 205};
    vector<int> exit = {41, 267, 660, 189, 465, 295, 119, 752, 330};
    int physicalLimit = 962;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {814, 867};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> enter = {295, 752, 84, 439, 607, 581};
    vector<int> exit = {558, 664, 644, 2, 564, 451};
    int physicalLimit = 948;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {927, 948};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> enter = {622, 144, 607, 687, 341, 138};
    vector<int> exit = {142, 273, 657, 549, 314, 451};
    int physicalLimit = 914;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {306, 434};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> enter = {111, 516, 416, 45, 142, 564};
    vector<int> exit = {273, 565, 212, 264, 265, 244};
    int physicalLimit = 805;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {727, 805};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> enter = {534, 369, 645, 663, 542, 568};
    vector<int> exit = {750, 515, 164, 742, 794, 220};
    int physicalLimit = 993;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {754, 857};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> enter = {133, 401, 321, 141, 507, 324};
    vector<int> exit = {67, 64, 62, 353, 385, 545};
    int physicalLimit = 788;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67, 126};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> enter = {113, 512, 47, 818, 294, 113};
    vector<int> exit = {63, 654, 727, 143, 629, 10};
    int physicalLimit = 997;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {915, 947};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> enter = {597, 148, 149, 199, 643, 159, 484};
    vector<int> exit = {61, 198, 52, 897, 87, 290, 151};
    int physicalLimit = 972;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {314, 329};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> enter = {323, 174, 317, 716, 154, 290, 510, 833};
    vector<int> exit = {104, 64, 291, 677, 251, 383, 229, 657};
    int physicalLimit = 986;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {322, 325};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> enter = {351, 545, 107, 262, 716, 127, 353};
    vector<int> exit = {420, 338, 117, 484, 734, 30, 551};
    int physicalLimit = 985;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {828, 847};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> enter = {664, 381, 329, 232, 306, 646, 46, 491};
    vector<int> exit = {76, 656, 439, 183, 329, 186, 178, 511};
    int physicalLimit = 921;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {126, 232};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> enter = {343, 338, 471, 551, 884, 22, 353};
    vector<int> exit = {150, 187, 885, 522, 475, 257, 399};
    int physicalLimit = 962;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {592, 594};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> enter = {271, 142, 58, 242, 187, 372};
    vector<int> exit = {236, 131, 61, 120, 247, 51};
    int physicalLimit = 844;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {236, 418};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> enter = {359, 496, 161, 379, 398, 200};
    vector<int> exit = {733, 354, 227, 492, 161, 170};
    int physicalLimit = 928;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {790, 928};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> enter = {602, 410, 242, 615, 406, 11};
    vector<int> exit = {618, 543, 121, 713, 121, 587};
    int physicalLimit = 943;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {741, 784};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> enter = {494, 365, 201, 853, 302, 496, 285};
    vector<int> exit = {372, 240, 317, 517, 307, 543, 733};
    int physicalLimit = 901;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {386, 434};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> enter = {0};
    vector<int> exit = {1000};
    int physicalLimit = 1000;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1000};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> enter = {0, 2};
    vector<int> exit = {1, 0};
    int physicalLimit = 1;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> enter = {2, 2, 2};
    vector<int> exit = {0, 0, 0};
    int physicalLimit = 4;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> enter = {1, 1};
    vector<int> exit = {3, 3};
    int physicalLimit = 4;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> enter = {0};
    vector<int> exit = {1};
    int physicalLimit = 5;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> enter = {2};
    vector<int> exit = {3};
    int physicalLimit = 3;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> enter = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> exit = {5, 102, 5, 2, 103, 65, 24, 12, 5, 6, 11, 9};
    int physicalLimit = 30;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> enter = {50};
    vector<int> exit = {100};
    int physicalLimit = 110;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 110};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> enter = {3, 0, 0};
    vector<int> exit = {0, 3, 3};
    int physicalLimit = 5;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> enter = {1, 1, 1};
    vector<int> exit = {0, 0, 0};
    int physicalLimit = 1;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> enter = {179, 135, 104, 90, 97, 186, 187, 47, 152, 100, 119, 28, 193, 11, 103, 100, 179, 11, 80, 163, 50, 131, 103, 50, 142, 51, 112, 62, 69, 72, 88, 3, 162, 93, 190, 85, 79, 86, 146, 71, 65, 131, 179, 119, 66, 111};
    vector<int> exit = {134, 81, 178, 168, 86, 128, 1, 165, 62, 46, 188, 70, 104, 111, 3, 47, 144, 69, 163, 21, 101, 126, 169, 84, 146, 165, 198, 1, 65, 181, 135, 99, 100, 195, 171, 47, 16, 54, 79, 69, 6, 97, 154, 80, 151, 76};
    int physicalLimit = 954;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {453, 659};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> enter = {1};
    vector<int> exit = {1};
    int physicalLimit = 2;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> enter = {50, 0, 0};
    vector<int> exit = {0, 50, 50};
    int physicalLimit = 50;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> enter = {0};
    vector<int> exit = {100};
    int physicalLimit = 100;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> enter = {0};
    vector<int> exit = {3};
    int physicalLimit = 3;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> enter = {0};
    vector<int> exit = {20};
    int physicalLimit = 30;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 30};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> enter = {2};
    vector<int> exit = {3};
    int physicalLimit = 5;
    ElevatorLimit* pObj = new ElevatorLimit();
    clock_t start = clock();
    vector<int> result = pObj->getRange(enter, exit, physicalLimit);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5872&pm=1965
********************************************************************************
#line 2 "ElevatorLimit.cpp" 
 
// Warning: no successful challenges against me yet. 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
#include <sstream> 
 
using namespace std; 
typedef long long ll; typedef long double ld; 
typedef vector<int> vi; typedef vector<string> vs; 
 
#define LS < 
#define FOR(k,start,end) for(typeof(start) k=(start); k LS (end); ++k) 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
  
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); k++) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
#define FORALL(k,a,b,cond) (!EXISTS(k,a,b,!(cond))) 
  
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); k++) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
#define PRODTO(k,a,b,init,x) FOLD0(k,a,b,init,R##k *= (x)) 
#define MAXTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k >?= (x)) 
#define MINTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k <?= (x)) 
#define SUM(k,a,b,x) SUMTO(k,a,b,(typeof(x)) (0), x) 
#define PROD(k,a,b,x) PRODTO(k,a,b,(typeof(x)) (1), x) 
  
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(k++; k LS (b); k++) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
#define MIN(k,a,b,x) FOLD1(k,a,b,x, R##k <?= (x)) 
  
#define INF 2000000000 
int tcize(int n) {return n<INF ? n : -1;} 
 
class ElevatorLimit { 
  public: 
  vector <int> getRange(vector <int> enter, vector <int> exit, int physicalLimit) { 
    // !FDI 
    int cur = 0; 
    int min = 0; 
    int max = 0; 
    FOR(k,0,Size(enter)) { 
      cur -= exit[k]; min <?= cur; 
      cur += enter[k]; max >?= cur; 
      } 
    min = -min; max = physicalLimit - max; 
    vector<int> v; 
    if(max < min) return v; 
    v.push_back(min); 
    v.push_back(max); 
    return v; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/