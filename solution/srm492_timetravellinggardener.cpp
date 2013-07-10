/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11060
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

class TimeTravellingGardener {
public:
    int determineUsage(vector<int> distance, vector<int> height);
};

int TimeTravellingGardener::determineUsage(vector<int> distance, vector<int> height) {
    int ret;
    return ret;
}


int test0() {
    vector<int> distance = {2, 2};
    vector<int> height = {1, 3, 10};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
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
    vector<int> distance = {3, 3};
    vector<int> height = {3, 1, 3};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> distance = {1, 3};
    vector<int> height = {4, 4, 4};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> distance = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> height = {1, 1, 2, 3, 5, 8, 13, 21, 34};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> distance = {4, 2};
    vector<int> height = {9, 8, 5};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> distance = {2, 2};
    vector<int> height = {2, 1, 2};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> distance = {3, 3};
    vector<int> height = {1, 3, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> distance = {17, 849};
    vector<int> height = {138, 138, 138};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> distance = {540, 206, 105, 216, 136, 251, 19, 3, 134, 22, 2, 137, 263, 168, 38, 49, 56, 17, 24, 186, 45, 314, 41, 239, 77, 483, 208, 26, 19, 89, 40, 71, 5, 86, 59, 131, 116, 110, 13, 377, 5, 197, 360, 174, 118, 263, 591, 39, 446};
    vector<int> height = {327, 130, 768, 758, 847, 218, 354, 359, 446, 125, 854, 272, 82, 683, 657, 723, 559, 138, 138, 291, 28, 635, 402, 52, 138, 780, 829, 295, 750, 897, 677, 394, 113, 632, 702, 845, 614, 368, 888, 784, 410, 461, 841, 690, 347, 963, 195, 557, 785, 432};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> distance = {924, 893, 531, 407, 29, 199, 85, 360, 982, 805, 65, 441};
    vector<int> height = {487, 487, 487, 487, 487, 487, 487, 487, 487, 487, 487, 487, 487};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> distance = {386, 152, 35, 43, 163, 145, 98, 24, 55, 114, 164, 118, 70, 250, 34, 497, 76, 331, 24, 5, 104, 95, 85, 298, 62, 515, 40, 427, 343, 167, 51, 34, 38, 172, 65, 32, 78, 127, 8, 50, 146, 415, 64, 30, 60, 91, 134, 440, 163};
    vector<int> height = {487, 380, 615, 573, 295, 6, 487, 735, 260, 851, 833, 517, 759, 565, 487, 32, 487, 156, 487, 449, 487, 466, 487, 487, 12, 487, 692, 823, 487, 184, 921, 481, 788, 920, 487, 487, 889, 86, 19, 634, 638, 487, 117, 750, 579, 313, 910, 317, 262, 709};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> distance = {249, 736, 489, 307, 93, 43, 56, 477, 356, 479, 748, 842, 719, 40, 414, 61, 771, 333, 982, 69, 472, 864};
    vector<int> height = {683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683, 683};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> distance = {258, 127, 94, 28, 736, 106, 35, 104, 244, 307, 84, 9, 43, 56, 48, 87, 342, 271, 85, 206, 273, 50, 492, 40, 166, 707, 135, 153, 233, 333, 40, 3, 290, 121, 61, 76, 445, 70, 180, 333, 616, 366, 69, 472, 202, 336, 326, 172, 324};
    vector<int> height = {355, 683, 7, 258, 683, 683, 449, 576, 689, 683, 683, 848, 683, 683, 683, 306, 19, 683, 722, 683, 781, 683, 972, 524, 811, 683, 457, 683, 419, 611, 683, 683, 888, 267, 683, 683, 637, 642, 875, 683, 683, 175, 683, 683, 683, 696, 30, 683, 505, 215};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> distance = {264, 690, 810, 269, 730, 72, 687, 380, 576, 257, 17, 8, 523, 727, 208, 143, 602, 865, 173, 119, 40, 794, 377, 925, 20, 766, 582, 265, 58, 343, 860, 321};
    vector<int> height = {385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385, 385};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> distance = {419, 264, 690, 49, 761, 190, 79, 730, 72, 514, 52, 121, 380, 333, 243, 257, 17, 8, 329, 194, 240, 487, 208, 2, 141, 602, 111, 392, 362, 173, 100, 19, 40, 794, 377, 925, 20, 766, 224, 358, 265, 58, 192, 151, 551, 84, 225, 304, 17};
    vector<int> height = {505, 385, 385, 385, 846, 385, 243, 385, 385, 385, 942, 571, 385, 385, 237, 385, 385, 385, 385, 660, 385, 854, 385, 385, 451, 385, 385, 235, 254, 385, 385, 28, 385, 385, 385, 385, 385, 385, 385, 87, 385, 385, 385, 766, 385, 93, 42, 385, 940, 385};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> distance = {744, 301, 577, 502, 240, 163, 755, 781, 614, 884, 792, 807, 454, 179, 573, 44, 683, 271, 249, 597, 664, 314, 184, 793, 400, 711, 36, 930, 218, 123, 128, 961, 424, 56, 815, 15, 219, 921, 795, 184, 805, 938};
    vector<int> height = {990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> distance = {751, 744, 301, 577, 502, 240, 163, 508, 247, 781, 614, 884, 792, 807, 454, 179, 213, 360, 44, 683, 271, 249, 597, 664, 314, 184, 793, 400, 711, 36, 298, 342, 290, 218, 123, 128, 961, 424, 56, 815, 15, 219, 201, 720, 795, 184, 674, 131, 938};
    vector<int> height = {468, 990, 990, 990, 990, 990, 990, 990, 537, 990, 990, 990, 990, 990, 990, 990, 990, 5, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 99, 919, 990, 990, 990, 990, 990, 990, 990, 990, 990, 990, 345, 990, 990, 990, 697, 990, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> distance = {79, 227, 629, 135, 41, 644, 705, 313, 790, 888, 117, 728, 229, 727, 195, 495, 83, 697, 383, 336, 148, 934, 255, 133, 278, 277, 829, 9, 876, 95, 863, 955, 321, 843, 441, 713, 486, 145, 25, 628, 384, 494, 355, 964, 572, 901, 458, 654, 950};
    vector<int> height = {840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> distance = {79, 227, 629, 135, 41, 644, 705, 313, 790, 888, 117, 728, 229, 727, 195, 495, 83, 697, 383, 336, 148, 934, 255, 133, 278, 277, 829, 9, 876, 95, 863, 955, 321, 843, 441, 713, 486, 145, 25, 628, 384, 494, 355, 964, 572, 901, 458, 654, 950};
    vector<int> height = {840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840, 840};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> distance = {860};
    vector<int> height = {288, 951};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> distance = {22, 797};
    vector<int> height = {151, 614, 526};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
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
    vector<int> distance = {219, 963, 482};
    vector<int> height = {52, 911, 467, 607};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> distance = {850, 570, 762, 895};
    vector<int> height = {760, 75, 758, 916, 857};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> distance = {97, 241, 140, 15, 33};
    vector<int> height = {588, 993, 892, 876, 295, 265};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> distance = {672, 445, 878, 550, 15, 192};
    vector<int> height = {31, 66, 103, 850, 24, 304, 419};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
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
    vector<int> distance = {785, 199, 531, 860, 308, 446, 68};
    vector<int> height = {404, 687, 207, 770, 71, 146, 114, 962};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> distance = {21, 760, 226, 45, 204, 455, 594, 570};
    vector<int> height = {646, 976, 987, 100, 825, 10, 404, 596, 147};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> distance = {954, 126, 6, 261, 571, 425, 16, 609, 631};
    vector<int> height = {137, 679, 128, 602, 992, 149, 361, 569, 545, 916};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> distance = {23, 490, 485, 669, 817, 823, 768, 642, 832, 523};
    vector<int> height = {589, 978, 828, 66, 335, 440, 636, 759, 807, 597, 741};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> distance = {943, 627, 869, 544, 971, 369, 256, 539, 913, 171, 914};
    vector<int> height = {754, 655, 934, 570, 477, 53, 563, 661, 928, 151, 990, 755};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> distance = {216, 325, 547, 204, 435, 353, 152, 176, 648, 778, 396, 543};
    vector<int> height = {748, 764, 799, 639, 28, 969, 904, 781, 976, 837, 702, 804, 889};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> distance = {265, 816, 816, 767, 806, 923, 335, 130, 469, 538, 564, 173, 41};
    vector<int> height = {91, 820, 818, 486, 715, 918, 601, 513, 908, 628, 833, 811, 408, 160};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> distance = {999, 110, 316, 887, 726, 131, 55, 492, 288, 977, 826, 769, 797, 715};
    vector<int> height = {685, 969, 755, 775, 141, 925, 613, 855, 194, 213, 719, 453, 841, 903, 615};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> distance = {600, 63, 613, 61, 730, 851, 786, 212, 905, 630, 500, 233, 807, 268, 381};
    vector<int> height = {874, 952, 350, 980, 79, 842, 256, 691, 696, 449, 255, 766, 253, 447, 668, 867};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> distance = {47, 82, 831, 459, 811, 682, 245, 23, 938, 226, 874, 171, 384, 493, 903, 257};
    vector<int> height = {797, 604, 237, 875, 445, 492, 917, 492, 293, 171, 257, 545, 618, 277, 764, 16, 358};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> distance = {594, 474, 169, 275, 70, 543, 213, 647, 768, 735, 31, 260, 637, 287, 56, 241, 523};
    vector<int> height = {282, 37, 367, 198, 529, 659, 721, 137, 555, 690, 413, 670, 57, 771, 616, 530, 291, 890};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> distance = {952, 185, 454, 598, 952, 540, 628, 563, 529, 915, 971, 769, 789, 252, 157, 507, 802, 685};
    vector<int> height = {517, 874, 822, 72, 915, 234, 93, 971, 356, 708, 500, 646, 950, 803, 830, 755, 401, 133, 295};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> distance = {28, 696, 175, 294, 666, 943, 435, 269, 451, 941, 70, 136, 458, 295, 309, 881, 209, 542, 973};
    vector<int> height = {179, 898, 33, 31, 895, 982, 833, 725, 88, 233, 209, 734, 613, 904, 908, 258, 921, 202, 692, 542};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> distance = {653, 633, 963, 788, 442, 258, 96, 322, 466, 989, 646, 997, 238, 678, 27, 133, 11, 211, 209, 99};
    vector<int> height = {796, 417, 184, 760, 673, 92, 17, 945, 293, 61, 486, 945, 693, 449, 84, 486, 58, 531, 807, 523, 872};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> distance = {452, 871, 109, 482, 249, 593, 492, 460, 801, 942, 607, 570, 126, 366, 242, 217, 382, 186, 861, 794, 24};
    vector<int> height = {158, 838, 472, 241, 323, 529, 124, 129, 403, 995, 933, 274, 455, 414, 874, 48, 905, 333, 848, 199, 939, 769};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> distance = {676, 656, 10, 244, 390, 548, 104, 183, 571, 261, 21, 42, 854, 343, 922, 329, 824, 676, 323, 756, 301, 777};
    vector<int> height = {169, 175, 176, 425, 859, 24, 623, 798, 792, 650, 805, 154, 893, 194, 701, 997, 377, 271, 609, 397, 664, 814, 91};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> distance = {937, 142, 914, 612, 816, 669, 913, 945, 837, 87, 120, 614, 297, 495, 588, 446, 639, 238, 251, 792, 130, 444, 844};
    vector<int> height = {478, 820, 114, 87, 568, 129, 252, 659, 65, 394, 572, 676, 561, 241, 940, 505, 429, 378, 625, 394, 675, 119, 982, 120};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> distance = {757, 571, 370, 900, 700, 166, 743, 530, 985, 208, 616, 905, 336, 219, 563, 752, 964, 486, 780, 525, 78, 719, 29, 859};
    vector<int> height = {449, 653, 252, 123, 124, 585, 594, 232, 155, 316, 132, 207, 481, 874, 736, 817, 82, 703, 721, 769, 921, 635, 521, 885, 121};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> distance = {300, 761, 198, 370, 789, 56, 818, 794, 660, 292, 269, 244, 886, 500, 399, 553, 631, 957, 33, 857, 44, 201, 290, 746, 274};
    vector<int> height = {58, 18, 908, 930, 254, 380, 229, 14, 930, 951, 155, 337, 768, 948, 996, 412, 568, 240, 297, 67, 990, 201, 50, 298, 585, 906};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> distance = {341, 785, 195, 86, 58, 252, 455, 318, 182, 709, 697, 762, 722, 978, 712, 228, 315, 832, 527, 310, 243, 94, 901, 891, 161, 242};
    vector<int> height = {91, 210, 539, 27, 467, 231, 811, 661, 668, 221, 264, 123, 538, 797, 183, 586, 911, 256, 564, 974, 484, 878, 805, 10, 539, 399, 104};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> distance = {792, 641, 616, 33, 83, 825, 924, 109, 643, 154, 272, 303, 174, 492, 918, 296, 29, 715, 478, 966, 625, 733, 529, 598, 216, 758, 755};
    vector<int> height = {578, 649, 505, 681, 440, 146, 296, 824, 228, 472, 747, 689, 114, 253, 960, 768, 426, 451, 685, 73, 831, 399, 902, 796, 375, 986, 677, 973};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> distance = {554, 786, 79, 131, 434, 583, 811, 225, 728, 458, 49, 308, 929, 147, 996, 394, 751, 955, 513, 528, 757, 197, 600, 587, 948, 501, 734, 322};
    vector<int> height = {839, 410, 646, 392, 548, 724, 522, 333, 659, 332, 558, 738, 141, 958, 45, 421, 104, 392, 814, 855, 698, 326, 734, 454, 874, 334, 40, 821, 186};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> distance = {126, 143, 24, 887, 140, 415, 434, 216, 288, 767, 874, 971, 676, 611, 111, 633, 8, 531, 88, 399, 344, 942, 97, 21, 676, 550, 895, 361, 942};
    vector<int> height = {67, 898, 419, 561, 274, 305, 701, 688, 739, 916, 328, 857, 141, 298, 532, 103, 409, 516, 110, 939, 603, 509, 635, 897, 957, 7, 924, 858, 253, 284};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> distance = {151, 320, 533, 569, 880, 806, 874, 932, 846, 964, 199, 173, 172, 339, 470, 55, 442, 878, 570, 551, 169, 524, 411, 155, 420, 719, 161, 343, 577, 414};
    vector<int> height = {978, 79, 733, 511, 648, 964, 668, 873, 896, 513, 188, 94, 37, 711, 433, 507, 117, 226, 736, 686, 128, 256, 561, 891, 410, 981, 609, 571, 675, 537, 336};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> distance = {5, 616, 68, 515, 615, 31, 534, 487, 278, 47, 26, 372, 435, 88, 156, 941, 204, 381, 29, 241, 860, 284, 801, 750, 694, 133, 359, 616, 808, 247, 951};
    vector<int> height = {812, 862, 370, 678, 476, 752, 211, 314, 30, 609, 691, 401, 44, 778, 908, 336, 981, 640, 364, 221, 499, 1000, 22, 601, 45, 154, 311, 660, 961, 557, 962, 124};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> distance = {419, 331, 801, 246, 82, 364, 912, 111, 324, 602, 863, 719, 380, 770, 55, 360, 761, 770, 581, 260, 769, 954, 860, 813, 107, 170, 824, 420, 78, 785, 895, 848};
    vector<int> height = {467, 48, 94, 549, 763, 5, 11, 86, 606, 226, 805, 337, 995, 859, 697, 756, 980, 629, 367, 749, 934, 578, 913, 392, 99, 89, 163, 176, 225, 58, 24, 692, 457};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> distance = {469, 592, 219, 825, 602, 304, 782, 827, 460, 119, 174, 670, 167, 281, 650, 147, 999, 750, 80, 576, 14, 471, 26, 102, 634, 201, 327, 43, 576, 370, 499, 44, 961};
    vector<int> height = {69, 868, 914, 724, 650, 93, 184, 120, 618, 853, 286, 250, 854, 432, 248, 603, 511, 175, 617, 333, 200, 70, 318, 752, 748, 360, 328, 117, 210, 723, 429, 278, 943, 695};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> distance = {2, 944, 139, 537, 63, 756, 389, 348, 5, 595, 131, 604, 197, 993, 130, 165, 325, 329, 587, 643, 432, 334, 354, 759, 803, 916, 834, 231, 545, 776, 277, 546, 719, 415};
    vector<int> height = {434, 781, 170, 175, 480, 526, 769, 962, 481, 317, 954, 610, 834, 278, 290, 420, 272, 722, 753, 978, 832, 907, 245, 665, 490, 789, 792, 766, 687, 510, 181, 120, 642, 702, 294};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> distance = {473, 580, 62, 434, 60, 731, 387, 22, 564, 17, 663, 983, 640, 384, 87, 969, 568, 346, 213, 584, 835, 2, 376, 600, 688, 885, 132, 807, 879, 834, 453, 351, 765, 866, 137};
    vector<int> height = {824, 596, 875, 197, 159, 891, 860, 493, 883, 595, 932, 851, 514, 277, 64, 98, 463, 65, 473, 62, 752, 709, 546, 910, 939, 731, 714, 642, 495, 580, 778, 670, 527, 652, 867, 38};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> distance = {895, 78, 530, 777, 24, 813, 627, 538, 441, 690, 635, 903, 754, 459, 965, 857, 519, 862, 119, 458, 592, 832, 99, 86, 763, 876, 107, 290, 879, 325, 327, 773, 402, 208, 549, 426};
    vector<int> height = {21, 176, 315, 813, 217, 301, 716, 323, 759, 32, 179, 277, 893, 649, 734, 484, 833, 184, 921, 947, 411, 379, 236, 290, 704, 914, 414, 105, 474, 315, 882, 846, 842, 196, 658, 58, 496};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> distance = {373, 380, 606, 404, 911, 883, 648, 911, 968, 483, 743, 152, 403, 42, 914, 134, 277, 203, 837, 543, 969, 941, 368, 283, 175, 213, 124, 370, 870, 181, 218, 595, 913, 823, 998, 823, 57};
    vector<int> height = {998, 733, 25, 480, 828, 528, 235, 869, 441, 368, 497, 996, 204, 391, 964, 144, 758, 246, 670, 970, 721, 40, 192, 901, 609, 786, 813, 431, 135, 987, 488, 132, 72, 864, 612, 899, 391, 846};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> distance = {119, 183, 213, 967, 530, 416, 358, 493, 911, 115, 90, 581, 437, 810, 972, 980, 63, 580, 765, 227, 362, 251, 214, 849, 383, 285, 712, 346, 535, 454, 543, 5, 637, 107, 971, 166, 522, 328};
    vector<int> height = {11, 784, 795, 452, 716, 583, 614, 39, 562, 676, 618, 678, 902, 980, 928, 467, 180, 662, 103, 244, 359, 637, 697, 901, 993, 685, 7, 964, 203, 880, 643, 565, 16, 789, 16, 83, 371, 629, 122};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> distance = {284, 656, 91, 313, 910, 70, 241, 376, 602, 254, 831, 845, 965, 467, 893, 865, 812, 930, 224, 775, 484, 455, 417, 48, 470, 206, 415, 553, 928, 44, 26, 564, 51, 116, 876, 960, 538, 116, 688};
    vector<int> height = {139, 722, 518, 335, 686, 336, 579, 902, 147, 508, 477, 921, 991, 932, 690, 38, 753, 247, 453, 657, 174, 848, 682, 89, 250, 798, 965, 210, 335, 432, 249, 825, 153, 766, 159, 190, 101, 737, 92, 600};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> distance = {597, 920, 520, 587, 851, 561, 977, 604, 807, 781, 260, 333, 980, 294, 421, 229, 91, 737, 790, 425, 169, 38, 601, 673, 803, 759, 863, 256, 847, 306, 855, 795, 225, 726, 382, 76, 287, 710, 31, 445};
    vector<int> height = {842, 642, 129, 821, 935, 902, 49, 25, 638, 191, 801, 806, 228, 753, 831, 383, 511, 693, 638, 710, 350, 844, 504, 574, 569, 237, 1, 207, 298, 383, 652, 139, 25, 132, 959, 311, 33, 360, 688, 23, 550};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> distance = {488, 180, 129, 593, 10, 511, 103, 54, 148, 164, 403, 991, 20, 329, 912, 608, 329, 118, 906, 64, 121, 44, 88, 605, 355, 750, 989, 66, 437, 11, 615, 277, 543, 95, 869, 552, 606, 323, 606, 105, 487};
    vector<int> height = {360, 448, 858, 688, 359, 465, 17, 828, 722, 432, 301, 118, 519, 905, 472, 620, 893, 537, 57, 256, 503, 333, 798, 597, 201, 701, 554, 523, 306, 11, 361, 666, 458, 218, 705, 168, 35, 73, 347, 756, 504, 647};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> distance = {225, 374, 551, 696, 994, 796, 584, 50, 51, 86, 382, 848, 35, 934, 548, 940, 456, 206, 950, 169, 223, 407, 738, 927, 926, 772, 1000, 273, 880, 503, 919, 104, 877, 822, 152, 222, 617, 735, 271, 19, 173, 4};
    vector<int> height = {866, 559, 937, 765, 498, 744, 322, 800, 912, 544, 206, 650, 823, 484, 773, 822, 756, 4, 676, 26, 460, 904, 199, 963, 125, 815, 697, 747, 185, 221, 750, 402, 131, 686, 167, 981, 782, 488, 780, 45, 384, 985, 46};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> distance = {206, 820, 819, 379, 575, 174, 406, 953, 985, 310, 151, 947, 786, 318, 996, 533, 502, 216, 282, 904, 699, 320, 422, 679, 453, 261, 458, 497, 644, 794, 543, 201, 614, 713, 931, 188, 886, 689, 140, 223, 350, 643, 169};
    vector<int> height = {135, 960, 164, 19, 461, 732, 653, 716, 430, 324, 137, 108, 776, 750, 565, 272, 745, 358, 166, 298, 971, 878, 228, 511, 116, 916, 2, 338, 617, 644, 506, 752, 955, 22, 122, 768, 753, 774, 483, 182, 97, 972, 641, 872};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> distance = {721, 205, 496, 465, 914, 661, 762, 237, 539, 342, 747, 6, 609, 100, 343, 226, 744, 200, 329, 698, 221, 450, 465, 325, 224, 300, 506, 672, 271, 498, 544, 343, 702, 39, 807, 616, 51, 921, 204, 589, 614, 950, 946, 222};
    vector<int> height = {49, 288, 799, 144, 840, 127, 194, 412, 577, 658, 737, 152, 309, 594, 823, 931, 92, 718, 273, 793, 108, 432, 760, 159, 352, 963, 99, 965, 264, 45, 538, 665, 684, 337, 808, 523, 463, 1, 935, 391, 11, 671, 894, 319, 264};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> distance = {69, 250, 707, 786, 522, 852, 246, 305, 963, 404, 656, 278, 854, 972, 541, 898, 510, 205, 934, 198, 365, 456, 660, 365, 390, 403, 375, 412, 296, 46, 28, 364, 647, 734, 502, 520, 937, 747, 825, 900, 502, 832, 177, 355, 804};
    vector<int> height = {69, 605, 665, 626, 538, 214, 990, 993, 225, 354, 735, 627, 81, 498, 275, 478, 525, 990, 124, 611, 491, 995, 899, 589, 819, 798, 90, 3, 974, 445, 158, 395, 49, 174, 20, 586, 387, 9, 930, 611, 714, 16, 590, 146, 514, 864};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> distance = {623, 390, 853, 98, 352, 696, 445, 251, 284, 615, 48, 374, 617, 374, 170, 774, 120, 570, 947, 139, 507, 333, 147, 436, 296, 212, 452, 885, 358, 317, 100, 332, 706, 952, 782, 58, 999, 578, 660, 635, 192, 707, 8, 809, 432, 529};
    vector<int> height = {934, 551, 98, 233, 41, 956, 917, 539, 391, 212, 751, 194, 96, 460, 510, 195, 143, 568, 499, 276, 625, 849, 853, 636, 483, 45, 342, 842, 205, 126, 370, 138, 28, 819, 722, 69, 774, 639, 607, 517, 850, 709, 710, 298, 168, 572, 844};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> distance = {663, 139, 694, 938, 115, 543, 791, 750, 25, 187, 443, 219, 391, 920, 588, 880, 300, 759, 602, 368, 884, 240, 326, 400, 441, 35, 462, 738, 554, 385, 934, 216, 523, 627, 154, 989, 521, 296, 90, 898, 482, 532, 116, 872, 804, 55, 103};
    vector<int> height = {103, 165, 704, 822, 49, 295, 147, 448, 736, 533, 261, 473, 87, 645, 758, 654, 519, 737, 159, 507, 257, 454, 596, 506, 935, 480, 973, 158, 635, 28, 261, 737, 544, 964, 558, 592, 259, 704, 392, 994, 589, 4, 818, 27, 649, 928, 680, 167};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> distance = {664, 839, 26, 272, 644, 621, 130, 579, 452, 102, 736, 86, 481, 348, 822, 25, 312, 731, 968, 922, 787, 711, 267, 375, 715, 436, 401, 363, 363, 432, 529, 378, 622, 906, 2, 266, 527, 131, 196, 330, 232, 283, 416, 65, 631, 589, 441, 294};
    vector<int> height = {672, 408, 567, 458, 119, 833, 184, 833, 620, 584, 195, 335, 367, 75, 712, 341, 333, 713, 606, 211, 195, 153, 540, 779, 435, 307, 843, 417, 248, 283, 710, 919, 42, 276, 376, 160, 460, 559, 344, 432, 494, 890, 766, 212, 317, 477, 552, 649, 542};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> distance = {509, 859, 88, 661, 398, 866, 448, 57, 60, 864, 304, 342, 926, 222, 736, 553, 949, 895, 13, 859, 591, 444, 704, 480, 561, 915, 796, 389, 467, 796, 282, 975, 654, 370, 988, 404, 235, 435, 460, 295, 298, 763, 988, 223, 336, 723, 776, 284, 970};
    vector<int> height = {140, 142, 560, 935, 845, 391, 495, 111, 187, 883, 929, 982, 165, 904, 988, 886, 243, 391, 120, 677, 850, 766, 974, 964, 106, 549, 299, 180, 676, 934, 149, 815, 427, 60, 749, 623, 451, 595, 733, 989, 829, 662, 322, 993, 917, 309, 878, 159, 51, 350};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> distance = {133, 728, 188, 428, 855, 955, 991, 642, 952, 712, 479, 650, 971, 920, 167, 742, 928, 255, 572, 152, 798, 840, 525, 944, 657, 826, 754, 827, 29, 28, 591, 161, 756, 778, 941, 962, 732, 283, 603, 36, 995, 433, 37, 317, 705, 203, 410, 632, 809};
    vector<int> height = {947, 946, 920, 909, 812, 800, 799, 754, 752, 658, 649, 641, 641, 584, 571, 527, 514, 504, 482, 429, 386, 249, 173, 109, 106, 83, 28, 1, 82, 164, 168, 184, 194, 340, 438, 539, 575, 588, 598, 645, 650, 667, 679, 696, 697, 702, 720, 778, 909, 924};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> distance = {664, 328, 338, 961, 816, 219, 927, 656, 654, 950, 831, 545, 305, 788, 394, 185, 403, 144, 893, 559, 196, 959, 578, 282, 622, 974, 156, 11, 39, 779, 856, 54, 106, 546, 367, 921, 764, 293, 928, 769, 242, 758, 313, 898, 545, 59, 82, 300, 202};
    vector<int> height = {986, 975, 957, 926, 920, 880, 842, 826, 800, 789, 736, 624, 573, 526, 511, 489, 455, 389, 328, 172, 15, 1, 29, 41, 136, 142, 216, 216, 218, 250, 283, 295, 297, 384, 412, 422, 490, 514, 596, 626, 647, 669, 703, 727, 814, 829, 839, 898, 937, 965};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> distance = {467, 491, 454, 921, 221, 21, 625, 848, 295, 59, 774, 122, 522, 909, 346, 269, 831, 952, 273, 864, 391, 249, 696, 145, 996, 731, 673, 115, 687, 542, 17, 505, 384, 822, 778, 956, 843, 402, 804, 489, 812, 929, 610, 333, 190, 955, 953, 372, 258};
    vector<int> height = {962, 938, 938, 937, 906, 883, 870, 862, 857, 838, 812, 717, 697, 673, 655, 633, 629, 606, 604, 584, 564, 501, 496, 468, 452, 449, 402, 303, 285, 285, 279, 259, 253, 251, 192, 189, 186, 184, 167, 153, 111, 106, 86, 23, 7, 4, 1, 435, 768, 822};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> distance = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> height = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> distance = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> height = {990, 999, 994, 1000, 993, 991, 992, 990, 996, 993, 993, 990, 995, 996, 993, 999, 996, 1000, 994, 993, 998, 996, 998, 1000, 998, 1000, 992, 990, 998, 995, 995, 996, 992, 997, 996, 995, 999, 996, 996, 992, 999, 997, 991, 993, 992, 994, 990, 999, 991, 994};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> distance = {991, 999, 990, 997, 997, 996, 996, 997, 997, 994, 992, 991, 998, 992, 997, 993, 997, 993, 999, 990, 995, 996, 997, 996, 997, 1000, 999, 997, 996, 998, 991, 997, 997, 1000, 993, 991, 995, 998, 998, 991, 991, 998, 991, 997, 1000, 996, 990, 995, 999};
    vector<int> height = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> distance = {997, 995, 993, 992, 992, 998, 1000, 1000, 994, 994, 995, 991, 993, 991, 996, 992, 992, 995, 996, 1000, 993, 995, 999, 990, 994, 996, 999, 1000, 994, 993, 998, 999, 998, 1000, 1000, 998, 995, 999, 995, 999, 990, 1000, 998, 994, 999, 992, 994, 1000, 997};
    vector<int> height = {1000, 997, 998, 995, 996, 997, 999, 1000, 995, 999, 991, 998, 996, 1000, 993, 995, 999, 1000, 1000, 995, 994, 996, 996, 994, 992, 1000, 990, 992, 993, 1000, 997, 991, 997, 995, 996, 990, 991, 992, 1000, 996, 990, 999, 991, 995, 998, 994, 998, 995, 993, 998};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> distance = {100};
    vector<int> height = {364, 87};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> distance = {214, 357, 131, 455, 166, 582, 177, 50, 461, 255, 17, 25, 91, 55, 53, 308, 146, 81, 80, 114, 41, 165, 49, 61, 65, 31, 228, 3, 47, 50, 39, 177, 114, 94, 50, 73, 137, 30, 34, 203, 216, 144, 282, 34, 342, 81, 322, 584, 543};
    vector<int> height = {932, 595, 808, 387, 231, 95, 581, 303, 537, 192, 440, 625, 716, 254, 481, 597, 462, 384, 177, 356, 292, 451, 111, 44, 33, 242, 914, 364, 799, 38, 87, 553, 355, 768, 514, 196, 990, 781, 365, 749, 602, 31, 681, 695, 710, 970, 301, 237, 329, 235};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> distance = {405};
    vector<int> height = {470, 941};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> distance = {271, 804, 275, 444, 184, 9, 77, 131, 71, 29, 26, 15, 339, 16, 212, 108, 65, 46, 186, 93, 100, 50, 324, 79, 10, 154, 428, 9, 14, 269, 14, 192, 245, 8, 121, 2, 88, 116, 89, 90, 18, 170, 190, 86, 181, 220, 211, 117, 3};
    vector<int> height = {777, 443, 559, 40, 797, 7, 524, 840, 797, 799, 945, 710, 171, 340, 742, 470, 896, 70, 966, 941, 794, 119, 604, 871, 569, 546, 185, 39, 776, 906, 152, 460, 371, 324, 295, 961, 407, 551, 853, 723, 39, 79, 438, 967, 752, 617, 953, 296, 687, 528};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> distance = {411, 822};
    vector<int> height = {495, 459, 387};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> distance = {144, 658, 6, 182, 675, 112, 70, 122, 677, 65, 19, 17, 48, 12, 141, 37, 253, 115, 43, 33, 96, 4, 98, 14, 269, 156, 152, 53, 289, 98, 34, 82, 20, 98, 285, 2, 123, 10, 213, 26, 21, 263, 35, 265, 44, 216, 289, 131, 844};
    vector<int> height = {415, 57, 29, 310, 421, 507, 332, 913, 613, 447, 324, 656, 2, 715, 380, 784, 495, 574, 649, 459, 874, 379, 95, 632, 766, 973, 660, 387, 610, 900, 819, 296, 766, 976, 152, 816, 513, 197, 985, 817, 528, 98, 81, 226, 87, 988, 220, 906, 400, 854};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> distance = {832, 546};
    vector<int> height = {837, 645, 519};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> distance = {413, 186, 331, 99, 183, 39, 17, 215, 17, 16, 137, 192, 14, 93, 133, 383, 314, 12, 104, 201, 59, 188, 43, 11, 211, 6, 144, 32, 13, 674, 109, 4, 171, 77, 35, 144, 113, 6, 420, 23, 179, 329, 101, 72, 570, 605, 99, 62, 623};
    vector<int> height = {516, 769, 167, 722, 571, 35, 912, 778, 238, 808, 339, 95, 907, 468, 391, 301, 623, 898, 7, 775, 422, 132, 936, 847, 207, 413, 569, 837, 518, 709, 394, 206, 645, 733, 595, 627, 621, 256, 519, 600, 545, 916, 506, 107, 296, 112, 406, 188, 302, 653};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> distance = {653, 653, 653};
    vector<int> height = {160, 395, 630, 865};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> distance = {688, 515, 327, 413, 90, 54, 82, 21, 475, 63, 174, 132, 201, 58, 100, 43, 157, 55, 81, 217, 292, 190, 171, 380, 92, 181, 384, 133, 67, 238, 25, 202, 118, 136, 208, 240, 150, 110, 67, 130, 73, 187, 133, 123, 78, 368, 514, 49, 173};
    vector<int> height = {588, 982, 467, 251, 33, 451, 30, 109, 983, 152, 346, 921, 746, 176, 160, 279, 824, 201, 826, 742, 395, 121, 26, 630, 277, 20, 865, 984, 872, 402, 785, 395, 338, 122, 253, 868, 540, 103, 721, 41, 27, 359, 142, 315, 532, 905, 251, 572, 327, 958};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> distance = {151, 151, 151};
    vector<int> height = {832, 652, 472, 292};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> distance = {584, 244, 65, 44, 28, 270, 52, 9, 163, 4, 21, 246, 61, 30, 12, 58, 113, 83, 68, 151, 10, 141, 24, 47, 11, 238, 72, 343, 39, 121, 136, 58, 20, 45, 28, 21, 33, 174, 110, 357, 14, 225, 61, 79, 96, 596, 403, 156, 783};
    vector<int> height = {126, 241, 678, 612, 245, 41, 995, 866, 576, 818, 851, 721, 577, 637, 542, 887, 568, 832, 423, 652, 472, 93, 292, 309, 988, 88, 972, 202, 981, 936, 737, 780, 118, 316, 27, 844, 504, 812, 781, 623, 517, 82, 386, 870, 769, 488, 615, 834, 195, 621};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> distance = {694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694};
    vector<int> height = {548, 551, 554, 557, 560, 563, 566, 569, 572, 575, 578, 581, 584, 587, 590, 593, 596, 599, 602, 605, 608, 611, 614, 617, 620, 623, 626, 629, 632, 635, 638, 641, 644, 647, 650, 653, 656, 659, 662, 665, 668, 671, 674, 677, 680, 683, 686, 689, 692};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> distance = {694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 200, 494, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694, 694};
    vector<int> height = {548, 551, 554, 557, 560, 563, 566, 569, 572, 575, 578, 581, 584, 587, 590, 593, 596, 599, 930, 602, 605, 608, 611, 614, 617, 620, 623, 626, 629, 632, 635, 638, 641, 644, 647, 650, 653, 656, 659, 662, 665, 668, 671, 674, 677, 680, 683, 686, 689, 692};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> distance = {278, 139, 139, 139, 139, 139, 278, 139, 139, 139, 278, 139, 139, 139, 278, 139, 139, 278, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 278, 139, 417, 139, 139, 139, 139, 139, 139, 139, 139, 139, 278, 139, 278, 139, 278, 139};
    vector<int> height = {996, 964, 948, 932, 916, 900, 884, 852, 836, 820, 804, 772, 756, 740, 724, 692, 676, 660, 628, 612, 596, 580, 564, 548, 532, 516, 500, 484, 468, 452, 436, 404, 388, 340, 324, 308, 292, 276, 260, 244, 228, 212, 196, 164, 148, 116, 100, 68, 52};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> distance = {363, 278, 139, 139, 139, 139, 139, 278, 139, 139, 139, 278, 139, 139, 139, 278, 139, 139, 278, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 139, 278, 139, 417, 139, 139, 139, 139, 139, 139, 139, 139, 139, 278, 139, 278, 139, 278, 139};
    vector<int> height = {105, 996, 964, 948, 932, 916, 900, 884, 852, 836, 820, 804, 772, 756, 740, 724, 692, 676, 660, 628, 612, 596, 580, 564, 548, 532, 516, 500, 484, 468, 452, 436, 404, 388, 340, 324, 308, 292, 276, 260, 244, 228, 212, 196, 164, 148, 116, 100, 68, 52};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> distance = {16, 13, 14, 13, 15, 13, 12, 16, 19, 16, 11, 20, 10, 9, 13, 15, 17, 16, 17, 17, 14, 18, 18, 13, 13, 14, 11, 13, 15, 10, 16, 15, 14, 18, 13, 12, 12, 18, 15, 11, 17, 15, 13, 13, 11, 13, 11, 16};
    vector<int> height = {20, 36, 49, 63, 76, 91, 104, 116, 132, 151, 167, 178, 198, 208, 217, 230, 245, 262, 278, 295, 312, 326, 344, 362, 375, 388, 402, 413, 426, 441, 451, 467, 482, 496, 514, 527, 539, 551, 569, 584, 595, 612, 627, 640, 653, 664, 677, 688, 704};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> distance = {4, 3, 1, 1, 1, 3, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 3, 2, 4, 2, 1, 3, 2, 1, 1, 1, 1, 3, 2, 1, 2, 4, 1, 3, 1, 2, 1, 1, 1, 2, 3, 2, 1, 4, 1, 1, 2, 2};
    vector<int> height = {145, 149, 152, 153, 154, 155, 158, 160, 162, 163, 164, 166, 167, 169, 170, 171, 172, 175, 177, 181, 183, 184, 187, 189, 190, 191, 192, 193, 196, 198, 199, 201, 205, 206, 209, 210, 212, 213, 214, 215, 217, 220, 222, 223, 227, 228, 229, 231, 233};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> distance = {12, 10, 11, 5, 11, 12, 8, 11, 9, 7, 8, 9, 12, 6, 7, 7, 8, 13, 6, 13, 11, 10, 8, 8, 6, 12, 9, 11, 7, 6, 12, 10, 5, 7, 12, 10, 11, 9, 11, 9, 7, 4, 8, 15, 6, 9, 12, 6};
    vector<int> height = {129, 141, 151, 162, 167, 178, 190, 198, 209, 218, 225, 233, 242, 254, 260, 267, 274, 282, 295, 301, 314, 325, 335, 343, 351, 357, 369, 378, 389, 396, 402, 414, 424, 429, 436, 448, 458, 469, 478, 489, 498, 505, 509, 517, 532, 538, 547, 559, 565};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> distance = {12, 13, 15, 11, 14, 13, 13, 10, 10, 15, 13, 15, 9, 14, 12, 8, 18, 12, 11, 15, 16, 10, 15, 19, 18, 15, 18, 9, 18, 10, 19, 9, 21, 11, 8, 16, 9, 7, 12, 15, 14, 9, 14, 16, 13, 9, 14, 8};
    vector<int> height = {84, 96, 109, 124, 135, 149, 162, 175, 185, 195, 210, 223, 238, 247, 261, 273, 281, 299, 311, 322, 337, 353, 363, 378, 397, 415, 430, 448, 457, 475, 485, 504, 513, 534, 545, 553, 569, 578, 585, 597, 612, 626, 635, 649, 665, 678, 687, 701, 709};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> distance = {4, 8, 6, 6, 6, 4, 6, 10, 4, 4, 4, 6, 4, 8, 2, 4, 6, 8, 6, 4, 2, 6, 4, 8, 4, 10, 6, 2, 4, 14, 8, 2, 6, 6, 6, 4, 10, 4, 4, 10, 6, 4, 8, 8, 6, 2, 4, 4};
    vector<int> height = {639, 643, 651, 657, 663, 669, 673, 679, 689, 693, 697, 701, 707, 711, 719, 721, 725, 731, 739, 745, 749, 751, 757, 761, 769, 773, 783, 789, 791, 795, 809, 817, 819, 825, 831, 837, 841, 851, 855, 859, 869, 875, 879, 887, 895, 901, 903, 907, 911};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> distance = {4, 2, 2, 2, 2, 2, 8, 2, 4, 4, 6, 2, 2, 2, 2, 4, 4, 4, 2, 6, 4, 2, 4, 4, 2, 6, 6, 6, 2, 2, 2, 2, 2, 2, 2, 6, 2, 2, 2, 2, 2, 4, 2, 2, 2, 6, 4, 2};
    vector<int> height = {476, 480, 482, 484, 486, 488, 490, 498, 500, 504, 508, 514, 516, 518, 520, 522, 526, 530, 534, 536, 542, 546, 548, 552, 556, 558, 564, 570, 576, 578, 580, 582, 584, 586, 588, 590, 596, 598, 600, 602, 604, 606, 610, 612, 614, 616, 622, 626, 628};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> distance = {30, 15, 5, 40, 10, 30, 50, 5, 30, 25, 20, 20, 30, 15, 10, 20, 25, 25, 15, 20, 20, 15, 30, 15, 15, 20, 25, 35, 15, 15, 20, 5, 45, 15, 15, 20, 20, 15, 15, 30, 20, 5, 25, 10, 15, 20, 15, 15};
    vector<int> height = {21, 51, 66, 71, 111, 121, 151, 201, 206, 236, 261, 281, 301, 331, 346, 356, 376, 401, 426, 441, 461, 481, 496, 526, 541, 556, 576, 601, 636, 651, 666, 686, 691, 736, 751, 766, 786, 806, 821, 836, 866, 886, 891, 916, 926, 941, 961, 976, 991};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> distance = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 20, 10, 10, 20, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 20, 10, 10, 10, 10, 10, 10, 20, 10, 10, 10, 10, 10, 10, 10};
    vector<int> height = {387, 397, 407, 417, 427, 437, 447, 457, 467, 477, 487, 497, 507, 517, 537, 547, 557, 577, 587, 597, 607, 617, 627, 637, 647, 657, 667, 677, 687, 697, 707, 717, 727, 737, 757, 767, 777, 787, 797, 807, 817, 837, 847, 857, 867, 877, 887, 897, 907};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> distance = {14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
    vector<int> height = {75, 89, 103, 117, 131, 145, 159, 173, 187, 201, 215, 229, 243, 257, 271, 285, 299, 313, 327, 341, 355, 369, 383, 397, 411, 425, 439, 453, 467, 481, 495, 509, 523, 537, 551, 565, 579, 593, 607, 621, 635, 649, 663, 677, 691, 705, 719, 733, 747};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> distance = {15, 15, 15, 15, 15, 15, 15, 15, 30, 15, 15, 15, 15, 15, 15, 15, 15, 30, 15, 15, 15, 15, 15, 15, 15, 15, 30, 15, 15, 30, 15, 15, 15, 30, 15, 15, 30, 15, 15, 15, 15, 15, 45, 15, 15, 15, 15, 15};
    vector<int> height = {157, 172, 187, 202, 217, 232, 247, 262, 277, 307, 322, 337, 352, 367, 382, 397, 412, 427, 457, 472, 487, 502, 517, 532, 547, 562, 577, 607, 622, 637, 667, 682, 697, 712, 742, 757, 772, 802, 817, 832, 847, 862, 877, 922, 937, 952, 967, 982, 997};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> distance = {5, 8, 9, 8, 10, 7, 8, 7, 5, 10, 10, 10, 8, 10, 6, 5, 7, 7, 4, 6, 7, 10, 7, 9, 4, 11, 5, 10, 10, 4, 7, 7, 11, 8, 5, 8, 11, 5, 7, 8, 4, 5, 3, 11, 10, 5, 8, 7};
    vector<int> height = {205, 210, 218, 227, 235, 245, 252, 260, 267, 272, 282, 292, 302, 310, 320, 326, 331, 338, 345, 349, 355, 362, 372, 379, 388, 392, 403, 408, 418, 428, 432, 439, 446, 457, 465, 470, 478, 489, 494, 501, 509, 513, 518, 521, 532, 542, 547, 555, 562};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> distance = {16, 9, 15, 17, 7, 7, 12, 10, 11, 10, 10, 12, 5, 9, 11, 15, 14, 16, 16, 9, 9, 13, 8, 10, 15, 6, 11, 14, 10, 6, 10, 12, 18, 17, 10, 4, 8, 12, 9, 10, 12, 13, 10, 5, 13, 6, 8, 14};
    vector<int> height = {311, 327, 336, 351, 368, 375, 382, 394, 404, 415, 425, 435, 447, 452, 461, 472, 487, 501, 517, 533, 542, 551, 564, 572, 582, 597, 603, 614, 628, 638, 644, 654, 666, 684, 701, 711, 715, 723, 735, 744, 754, 766, 779, 789, 794, 807, 813, 821, 835};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> distance = {6, 7, 5, 5, 4, 6, 6, 7, 10, 5, 5, 9, 6, 6, 9, 6, 6, 10, 9, 4, 6, 4, 8, 4, 3, 7, 8, 4, 9, 8, 8, 3, 12, 6, 2, 4, 11, 5, 8, 7, 4, 3, 3, 7, 5, 2, 3, 9};
    vector<int> height = {658, 664, 671, 676, 681, 685, 691, 697, 704, 714, 719, 724, 733, 739, 745, 754, 760, 766, 776, 785, 789, 795, 799, 807, 811, 814, 821, 829, 833, 842, 850, 858, 861, 873, 879, 881, 885, 896, 901, 909, 916, 920, 923, 926, 933, 938, 940, 943, 952};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> distance = {32, 38, 30, 44, 46, 36, 30, 40, 48, 50, 38, 38, 32, 44, 36, 48, 44, 34, 22, 30, 28, 34, 46, 32, 30, 42, 40, 30, 30, 42, 36, 50, 34, 38, 42, 32, 32, 34, 44, 40, 42, 28, 40, 48, 46, 34, 50, 44};
    vector<int> height = {40, 56, 75, 90, 112, 135, 153, 168, 188, 212, 237, 256, 275, 291, 313, 331, 355, 377, 394, 405, 420, 434, 451, 474, 490, 505, 526, 546, 561, 576, 597, 615, 640, 657, 676, 697, 713, 729, 746, 768, 788, 809, 823, 843, 867, 890, 907, 932, 954};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> distance = {35, 35, 40, 40, 45, 55, 40, 35, 65, 35, 70, 65, 55, 35, 25, 60, 25, 50, 50, 60, 30, 40, 50, 60, 45, 25, 35, 40, 45, 55, 45, 55, 35, 65, 75, 45, 50, 20, 40, 30, 35, 35, 55, 60, 50, 50, 30, 45};
    vector<int> height = {256, 263, 270, 278, 286, 295, 306, 314, 321, 334, 341, 355, 368, 379, 386, 391, 403, 408, 418, 428, 440, 446, 454, 464, 476, 485, 490, 497, 505, 514, 525, 534, 545, 552, 565, 580, 589, 599, 603, 611, 617, 624, 631, 642, 654, 664, 674, 680, 689};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> distance = {140, 140, 180, 200, 150, 150, 100, 170, 230, 140, 110, 100, 200, 170, 130, 70, 230, 130, 120, 110, 210, 160, 130, 220, 170, 190, 120, 170, 180, 160, 120, 170, 160, 160, 130, 160, 210, 130, 100, 170, 220, 260, 120, 150, 200, 170, 200, 170};
    vector<int> height = {108, 122, 136, 154, 174, 189, 204, 214, 231, 254, 268, 279, 289, 309, 326, 339, 346, 369, 382, 394, 405, 426, 442, 455, 477, 494, 513, 525, 542, 560, 576, 588, 605, 621, 637, 650, 666, 687, 700, 710, 727, 749, 775, 787, 802, 822, 839, 859, 876};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> distance = {400, 700, 1000, 900, 1000, 700, 1000, 800, 900, 500, 800, 1000, 800, 800, 800, 1000, 700, 600, 700, 400, 800, 1000, 1000, 700, 1000, 1000, 700, 1000, 500, 700, 900, 1000, 800, 800, 900, 1000, 900, 1000, 1000, 700, 1000, 500, 700, 900, 800, 1000, 1000, 1000};
    vector<int> height = {229, 233, 240, 250, 259, 269, 276, 286, 294, 303, 308, 316, 326, 334, 342, 350, 360, 367, 373, 380, 384, 392, 402, 412, 419, 429, 439, 446, 456, 461, 468, 477, 487, 495, 503, 512, 522, 531, 541, 551, 558, 568, 573, 580, 589, 597, 607, 617, 627};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> distance = {765, 765, 765, 510, 510, 255, 255, 510, 765, 510, 765, 510, 510, 765, 765, 765, 510, 510, 255, 765, 255, 765, 765, 765, 765, 765, 765, 510, 765, 765, 255, 255, 765, 765, 510, 765, 510, 255, 510, 765, 510, 765, 765, 765, 510, 510, 255, 765};
    vector<int> height = {613, 616, 619, 622, 624, 626, 627, 628, 630, 633, 635, 638, 640, 642, 645, 648, 651, 653, 655, 656, 659, 660, 663, 666, 669, 672, 675, 678, 680, 683, 686, 687, 688, 691, 694, 696, 699, 701, 702, 704, 707, 709, 712, 715, 718, 720, 722, 723, 726};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> distance = {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512};
    vector<int> height = {456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> distance = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> height = {921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> distance = {2, 2};
    vector<int> height = {10, 18, 21};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> distance = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> height = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> distance = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> height = {1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> distance = {2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1};
    vector<int> height = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> distance = {1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2};
    vector<int> height = {2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> distance = {806, 806, 806, 806};
    vector<int> height = {101, 297, 493, 689, 885};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> distance = {126, 126, 126, 126, 126};
    vector<int> height = {376, 440, 504, 568, 632, 696};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> distance = {10, 23, 18, 23, 5, 17, 1, 2, 3, 6, 14, 4, 16, 36, 21, 7, 46, 14, 2, 61, 2, 1, 3, 15, 10, 4, 3, 7, 4, 13, 1, 7, 17, 1, 27, 44, 8, 8, 9, 5, 24, 15, 9, 13, 5, 24, 7, 3, 12};
    vector<int> height = {376, 928, 944, 956, 919, 906, 904, 977, 915, 999, 970, 973, 440, 901, 954, 917, 953, 504, 993, 944, 939, 923, 987, 928, 955, 998, 913, 999, 949, 568, 938, 957, 958, 902, 998, 934, 945, 935, 632, 937, 949, 987, 945, 970, 957, 946, 942, 918, 935, 696};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> distance = {245, 245, 245, 245, 245, 245};
    vector<int> height = {230, 346, 462, 578, 694, 810, 926};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> distance = {184, 368, 736, 368, 368, 184, 368};
    vector<int> height = {73, 138, 268, 528, 658, 788, 853, 983};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> distance = {530, 530, 530, 530, 530, 530, 530, 530};
    vector<int> height = {727, 659, 591, 523, 455, 387, 319, 251, 183};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> distance = {74, 21, 8, 25, 60, 79, 181, 82, 26, 83, 275, 141, 5, 86, 38, 92, 210, 38, 66, 46, 58, 66, 228, 132, 119, 96, 274, 28, 13, 139, 53, 39, 64, 77, 156, 2, 165, 10, 61, 15, 40, 56, 27, 156, 91, 18, 241, 162, 18};
    vector<int> height = {727, 938, 985, 940, 992, 949, 996, 906, 659, 986, 904, 906, 949, 591, 994, 910, 924, 967, 922, 523, 934, 934, 1000, 908, 455, 966, 917, 995, 913, 387, 974, 957, 930, 908, 984, 973, 319, 964, 916, 909, 939, 908, 930, 937, 251, 947, 935, 936, 995, 183};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> distance = {186, 186, 186, 186, 372, 186, 186, 186, 186};
    vector<int> height = {348, 324, 300, 276, 252, 204, 180, 156, 132, 108};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> distance = {265, 265, 265, 265, 265, 265, 265, 265, 265, 265};
    vector<int> height = {751, 681, 611, 541, 471, 401, 331, 261, 191, 121, 51};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> distance = {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512};
    vector<int> height = {144, 178, 212, 246, 280, 314, 348, 382, 416, 450, 484, 518};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> distance = {28, 136, 112, 123, 8, 105, 26, 76, 410, 176, 336, 1, 127, 254, 34, 96, 124, 145, 208, 35, 359, 72, 81, 52, 166, 162, 132, 324, 59, 5, 19, 64, 19, 22, 68, 78, 114, 252, 33, 14, 85, 119, 10, 20, 13, 165, 53, 119, 393};
    vector<int> height = {144, 906, 906, 994, 952, 976, 178, 953, 999, 212, 943, 246, 942, 941, 907, 960, 280, 948, 923, 980, 314, 965, 943, 348, 978, 909, 927, 382, 949, 924, 966, 901, 979, 969, 416, 975, 967, 914, 450, 928, 909, 984, 911, 926, 1000, 1000, 970, 484, 934, 518};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> distance = {245, 245, 245, 490, 245, 245, 245, 245, 245, 245, 245, 245};
    vector<int> height = {29, 62, 95, 128, 194, 227, 260, 293, 326, 359, 392, 425, 458};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> distance = {722, 361, 722, 361, 361, 722, 722, 722, 361, 722, 722, 722, 361};
    vector<int> height = {445, 479, 496, 530, 547, 564, 598, 632, 666, 683, 717, 751, 785, 802};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> distance = {754, 754, 754, 377, 754, 754, 754, 754, 754, 754, 377, 754, 754, 754};
    vector<int> height = {22, 84, 146, 208, 239, 301, 363, 425, 487, 549, 611, 642, 704, 766, 828};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> distance = {35, 6, 713, 88, 24, 481, 53, 45, 35, 28, 7, 25, 540, 182, 313, 64, 312, 442, 216, 538, 76, 213, 181, 268, 16, 242, 22, 427, 63, 434, 88, 232, 180, 77, 99, 86, 312, 94, 176, 37, 70, 19, 161, 574, 287, 467, 140, 514, 100};
    vector<int> height = {22, 989, 925, 84, 990, 928, 900, 930, 944, 955, 146, 904, 914, 959, 208, 966, 239, 901, 301, 980, 363, 949, 934, 943, 962, 425, 994, 902, 997, 487, 974, 921, 549, 958, 957, 962, 998, 611, 919, 900, 978, 642, 971, 968, 704, 910, 766, 994, 994, 828};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> distance = {868, 868, 868, 868, 868, 651, 868, 868, 868, 868, 868, 868, 868, 868, 868};
    vector<int> height = {735, 691, 647, 603, 559, 515, 482, 438, 394, 350, 306, 262, 218, 174, 130, 86};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> distance = {963, 963, 963, 963, 963, 963, 963, 963, 963, 963, 963, 963, 963, 963, 963, 963};
    vector<int> height = {37, 91, 145, 199, 253, 307, 361, 415, 469, 523, 577, 631, 685, 739, 793, 847, 901};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> distance = {182, 78, 104, 156, 156, 104, 234, 260, 234, 156, 156, 78, 104, 104, 156, 234, 182};
    vector<int> height = {876, 827, 806, 778, 736, 694, 666, 603, 533, 470, 428, 386, 365, 337, 309, 267, 204, 155};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> distance = {65, 117, 56, 22, 104, 35, 78, 38, 5, 9, 66, 46, 35, 52, 38, 14, 43, 138, 53, 20, 39, 167, 34, 43, 191, 31, 125, 100, 56, 74, 4, 52, 40, 12, 21, 1, 82, 70, 86, 2, 14, 37, 91, 56, 7, 27, 74, 41, 67};
    vector<int> height = {876, 913, 827, 983, 806, 778, 970, 988, 956, 736, 976, 971, 903, 694, 976, 916, 666, 955, 900, 603, 949, 949, 932, 533, 994, 470, 975, 428, 993, 386, 963, 365, 949, 914, 337, 966, 936, 309, 938, 267, 903, 911, 980, 945, 925, 945, 204, 909, 946, 155};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> distance = {963, 963, 963, 963, 963, 963, 963, 321, 963, 642, 963, 963, 963, 963, 642, 642, 963, 642};
    vector<int> height = {833, 791, 749, 707, 665, 623, 581, 539, 525, 483, 455, 413, 371, 329, 287, 259, 231, 189, 161};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> distance = {97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 194, 97, 97, 97, 97, 97, 194, 97, 97};
    vector<int> height = {66, 106, 146, 186, 226, 266, 306, 346, 386, 426, 466, 546, 586, 626, 666, 706, 746, 826, 866, 906};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> distance = {576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576, 576};
    vector<int> height = {104, 126, 148, 170, 192, 214, 236, 258, 280, 302, 324, 346, 368, 390, 412, 434, 456, 478, 500, 522, 544};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> distance = {427, 44, 105, 547, 29, 576, 244, 284, 48, 576, 105, 149, 322, 276, 216, 84, 222, 156, 162, 36, 576, 356, 153, 67, 106, 470, 294, 166, 116, 576, 183, 87, 306, 71, 505, 576, 20, 148, 195, 126, 87, 357, 72, 77, 29, 41, 190, 386, 576};
    vector<int> height = {104, 921, 937, 126, 931, 148, 170, 937, 975, 192, 214, 991, 975, 236, 952, 920, 258, 907, 980, 914, 280, 302, 905, 934, 324, 934, 346, 933, 951, 368, 390, 940, 973, 412, 958, 434, 456, 978, 940, 926, 917, 478, 940, 912, 993, 948, 500, 942, 522, 544};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> distance = {555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555, 555};
    vector<int> height = {85, 113, 141, 169, 197, 225, 253, 281, 309, 337, 365, 393, 421, 449, 477, 505, 533, 561, 589, 617, 645, 673};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> distance = {515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515, 515};
    vector<int> height = {651, 657, 663, 669, 675, 681, 687, 693, 699, 705, 711, 717, 723, 729, 735, 741, 747, 753, 759, 765, 771, 777, 783};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> distance = {38, 76, 76, 38, 76, 38, 76, 38, 38, 38, 38, 38, 76, 38, 38, 76, 38, 76, 76, 76, 76, 38, 38};
    vector<int> height = {337, 352, 382, 412, 427, 457, 472, 502, 517, 532, 547, 562, 577, 607, 622, 637, 667, 682, 712, 742, 772, 802, 817, 832};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> distance = {38, 22, 5, 48, 1, 73, 1, 2, 6, 32, 15, 5, 56, 10, 28, 76, 6, 32, 5, 26, 7, 38, 1, 37, 38, 5, 9, 62, 15, 23, 38, 47, 24, 5, 38, 60, 7, 9, 7, 8, 61, 76, 32, 21, 8, 15, 14, 24, 38};
    vector<int> height = {337, 352, 925, 952, 911, 382, 927, 928, 412, 951, 427, 985, 926, 457, 934, 472, 502, 981, 517, 918, 907, 532, 547, 965, 562, 577, 916, 920, 607, 907, 622, 637, 927, 996, 667, 682, 905, 971, 712, 924, 945, 742, 772, 938, 960, 997, 802, 951, 817, 832};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> distance = {104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104, 104};
    vector<int> height = {245, 259, 273, 287, 301, 315, 329, 343, 357, 371, 385, 399, 413, 427, 441, 455, 469, 483, 497, 511, 525, 539, 553, 567, 581};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> distance = {10, 10, 10, 10, 20, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 20, 10, 10, 10};
    vector<int> height = {118, 149, 180, 211, 242, 304, 335, 366, 397, 428, 459, 490, 521, 552, 583, 614, 645, 676, 707, 738, 769, 800, 862, 893, 924, 955};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> distance = {155, 310, 310, 310, 155, 155, 155, 155, 155, 155, 155, 310, 155, 155, 155, 155, 155, 155, 155, 310, 155, 155, 155, 155, 155, 155};
    vector<int> height = {964, 933, 871, 809, 747, 716, 685, 654, 623, 592, 561, 530, 468, 437, 406, 375, 344, 313, 282, 251, 189, 158, 127, 96, 65, 34, 3};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> distance = {33, 122, 310, 310, 109, 9, 192, 124, 31, 155, 155, 155, 155, 155, 6, 5, 144, 69, 49, 192, 114, 41, 21, 88, 46, 155, 30, 125, 155, 114, 41, 155, 127, 35, 105, 43, 11, 64, 80, 8, 83, 64, 13, 142, 155, 69, 24, 62, 155};
    vector<int> height = {964, 927, 933, 871, 809, 957, 948, 747, 977, 716, 685, 654, 623, 592, 561, 965, 928, 530, 909, 929, 468, 970, 437, 920, 914, 406, 375, 955, 344, 313, 945, 282, 251, 944, 940, 940, 189, 985, 974, 158, 996, 924, 127, 934, 96, 65, 915, 951, 34, 3};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> distance = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 38, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 38};
    vector<int> height = {532, 548, 564, 580, 596, 612, 628, 644, 660, 676, 692, 708, 740, 756, 772, 788, 804, 820, 836, 852, 868, 884, 900, 916, 932, 948, 964, 996};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> distance = {187, 374, 187, 187, 187, 187, 374, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187};
    vector<int> height = {589, 570, 532, 513, 494, 475, 456, 418, 399, 380, 361, 342, 323, 304, 285, 266, 247, 228, 209, 190, 171, 152, 133, 114, 95, 76, 57, 38, 19};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> distance = {47, 47, 94, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> height = {503, 517, 531, 559, 573, 587, 601, 615, 629, 643, 657, 671, 685, 699, 713, 727, 741, 755, 769, 783, 797, 811, 825, 839, 853, 867, 881, 895, 909, 923};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> distance = {33, 14, 47, 32, 23, 31, 8, 47, 47, 7, 40, 47, 41, 6, 47, 39, 8, 47, 5, 27, 15, 47, 47, 47, 47, 38, 9, 20, 15, 12, 10, 15, 15, 7, 17, 30, 47, 47, 47, 28, 19, 5, 42, 30, 17, 4, 43, 47, 47};
    vector<int> height = {503, 924, 517, 531, 928, 974, 906, 559, 573, 587, 926, 601, 615, 930, 629, 643, 991, 657, 671, 999, 902, 685, 699, 713, 727, 741, 982, 755, 994, 966, 769, 950, 990, 908, 783, 940, 797, 811, 825, 839, 905, 853, 955, 867, 972, 881, 905, 895, 909, 923};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> distance = {107, 107, 107, 214, 107, 107, 107, 107, 214, 107, 107, 214, 107, 214, 107, 214, 107, 107, 107, 214, 107, 214, 107, 107, 107, 107, 214, 428, 107, 214};
    vector<int> height = {1, 23, 45, 67, 111, 133, 155, 177, 199, 243, 265, 287, 331, 353, 397, 419, 463, 485, 507, 529, 573, 595, 639, 661, 683, 705, 727, 771, 859, 881, 925};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> distance = {772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772, 772};
    vector<int> height = {396, 398, 400, 402, 404, 406, 408, 410, 412, 414, 416, 418, 420, 422, 424, 426, 428, 430, 432, 434, 436, 438, 440, 442, 444, 446, 448, 450, 452, 454, 456, 458};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> distance = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> height = {997, 967, 937, 907, 877, 847, 817, 787, 757, 727, 697, 667, 637, 607, 577, 547, 517, 487, 457, 427, 397, 367, 337, 307, 277, 247, 217, 187, 157, 127, 97, 67, 37};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> distance = {24, 19, 5, 24, 6, 6, 12, 24, 9, 3, 12, 5, 19, 3, 21, 24, 2, 19, 3, 24, 24, 24, 24, 24, 1, 21, 2, 1, 23, 24, 2, 8, 14, 17, 7, 24, 24, 24, 24, 24, 24, 24, 11, 13, 24, 24, 22, 2, 24};
    vector<int> height = {997, 967, 942, 937, 907, 968, 928, 877, 847, 995, 985, 817, 903, 787, 963, 757, 727, 983, 927, 697, 667, 637, 607, 577, 547, 923, 927, 517, 940, 487, 457, 946, 901, 427, 933, 397, 367, 337, 307, 277, 247, 217, 187, 942, 157, 127, 97, 921, 67, 37};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> distance = {173, 173, 173, 173, 173, 173, 519, 173, 173, 173, 173, 346, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 173, 519, 173, 173, 173, 173, 173};
    vector<int> height = {116, 135, 154, 173, 192, 211, 230, 287, 306, 325, 344, 363, 401, 420, 439, 458, 477, 496, 515, 534, 553, 572, 591, 610, 629, 648, 667, 686, 743, 762, 781, 800, 819, 838};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> distance = {239, 239, 239, 239, 239, 239, 478, 239, 239, 478, 239, 239, 239, 239, 239, 239, 239, 478, 239, 239, 239, 239, 239, 239, 239, 478, 239, 478, 239, 239, 239, 239, 239, 239};
    vector<int> height = {57, 81, 105, 129, 153, 177, 201, 249, 273, 297, 345, 369, 393, 417, 441, 465, 489, 513, 561, 585, 609, 633, 657, 681, 705, 729, 777, 801, 849, 873, 897, 921, 945, 969, 993};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> distance = {72, 120, 24, 48, 72, 72, 72, 48, 24, 48, 24, 48, 96, 72, 72, 96, 48, 48, 24, 48, 72, 24, 48, 48, 72, 24, 48, 48, 24, 72, 48, 48, 96, 48, 120};
    vector<int> height = {925, 904, 869, 862, 848, 827, 806, 785, 771, 764, 750, 743, 729, 701, 680, 659, 631, 617, 603, 596, 582, 561, 554, 540, 526, 505, 498, 484, 470, 463, 442, 428, 414, 386, 372, 337};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> distance = {72, 75, 45, 24, 48, 72, 72, 72, 48, 24, 48, 24, 48, 89, 7, 44, 15, 13, 72, 47, 49, 24, 24, 17, 31, 19, 5, 42, 6, 72, 24, 48, 48, 46, 26, 24, 48, 48, 19, 5, 72, 48, 39, 9, 46, 26, 24, 48, 120};
    vector<int> height = {925, 904, 924, 869, 862, 848, 827, 806, 785, 771, 764, 750, 743, 729, 952, 701, 940, 991, 680, 659, 963, 631, 900, 617, 921, 603, 919, 596, 907, 582, 561, 554, 540, 526, 941, 505, 498, 484, 470, 921, 463, 442, 428, 978, 414, 933, 979, 386, 372, 337};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> distance = {468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 936, 468, 468, 468, 468, 468, 468, 468, 468, 936, 468, 468, 468, 468};
    vector<int> height = {35, 59, 83, 107, 131, 155, 179, 203, 227, 251, 275, 299, 323, 347, 371, 395, 419, 443, 467, 491, 515, 539, 563, 611, 635, 659, 683, 707, 731, 755, 779, 803, 851, 875, 899, 923, 947};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> distance = {960, 960, 960, 540, 660, 960, 900, 600, 540, 420, 540, 600, 960, 780, 600, 960, 780, 720, 540, 600, 480, 720, 420, 540, 540, 960, 660, 960, 540, 780, 660, 600, 840, 900, 840, 960, 780};
    vector<int> height = {900, 868, 836, 804, 786, 764, 732, 702, 682, 664, 650, 632, 612, 580, 554, 534, 502, 476, 452, 434, 414, 398, 374, 360, 342, 324, 292, 270, 238, 220, 194, 172, 152, 124, 94, 66, 34, 8};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> distance = {201, 402, 402, 201, 402, 201, 402, 201, 402, 201, 402, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 603, 201, 201, 201, 201, 402, 402, 201, 402, 402, 201, 201, 402, 201, 201, 201, 201};
    vector<int> height = {990, 971, 933, 895, 876, 838, 819, 781, 762, 724, 705, 667, 648, 629, 610, 591, 572, 553, 534, 515, 496, 477, 420, 401, 382, 363, 344, 306, 268, 249, 211, 173, 154, 135, 97, 78, 59, 40, 21};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> distance = {131, 56, 14, 402, 402, 15, 186, 230, 172, 201, 154, 190, 58, 92, 109, 402, 201, 402, 201, 201, 201, 201, 201, 201, 201, 201, 201, 201, 603, 201, 201, 201, 201, 392, 10, 402, 25, 176, 402, 93, 111, 198, 201, 201, 402, 201, 201, 201, 201};
    vector<int> height = {990, 936, 997, 971, 933, 895, 985, 876, 904, 838, 819, 976, 970, 781, 996, 762, 724, 705, 667, 648, 629, 610, 591, 572, 553, 534, 515, 496, 477, 420, 401, 382, 363, 344, 978, 306, 268, 990, 249, 211, 973, 948, 173, 154, 135, 97, 78, 59, 40, 21};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> distance = {894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894, 894};
    vector<int> height = {153, 156, 159, 162, 165, 168, 171, 174, 177, 180, 183, 186, 189, 192, 195, 198, 201, 204, 207, 210, 213, 216, 219, 222, 225, 228, 231, 234, 237, 240, 243, 246, 249, 252, 255, 258, 261, 264, 267, 270};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> distance = {264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 264, 528, 264, 264, 264};
    vector<int> height = {53, 76, 99, 122, 145, 168, 191, 214, 237, 260, 283, 306, 329, 352, 375, 398, 421, 444, 467, 490, 513, 536, 559, 582, 605, 628, 651, 674, 697, 720, 743, 766, 789, 812, 835, 858, 881, 927, 950, 973, 996};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> distance = {197, 197, 197, 394, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 394, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197};
    vector<int> height = {948, 938, 928, 918, 898, 888, 878, 868, 858, 848, 838, 828, 818, 808, 798, 788, 778, 768, 758, 748, 738, 728, 718, 708, 698, 688, 678, 658, 648, 638, 628, 618, 608, 598, 588, 578, 568, 558, 548, 538, 528, 518};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> distance = {197, 197, 187, 10, 394, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 197, 116, 81, 394, 197, 197, 197, 40, 60, 97, 197, 100, 97, 39, 158, 197, 197, 118, 79, 197, 127, 70, 197, 197};
    vector<int> height = {948, 938, 928, 941, 918, 898, 888, 878, 868, 858, 848, 838, 828, 818, 808, 798, 788, 778, 768, 758, 748, 738, 728, 718, 708, 698, 688, 949, 678, 658, 648, 638, 628, 928, 979, 618, 608, 981, 598, 978, 588, 578, 568, 911, 558, 548, 920, 538, 528, 518};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> distance = {449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449, 449};
    vector<int> height = {979, 956, 933, 910, 887, 864, 841, 818, 795, 772, 749, 726, 703, 680, 657, 634, 611, 588, 565, 542, 519, 496, 473, 450, 427, 404, 381, 358, 335, 312, 289, 266, 243, 220, 197, 174, 151, 128, 105, 82, 59, 36, 13};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> distance = {239, 717, 239, 717, 239, 239, 717, 478, 239, 478, 239, 239, 239, 239, 239, 239, 478, 239, 239, 239, 478, 239, 239, 239, 239, 717, 239, 478, 239, 239, 239, 239, 239, 239, 956, 239, 239, 239, 717, 239, 239, 239, 239};
    vector<int> height = {18, 32, 74, 88, 130, 144, 158, 200, 228, 242, 270, 284, 298, 312, 326, 340, 354, 382, 396, 410, 424, 452, 466, 480, 494, 508, 550, 564, 592, 606, 620, 634, 648, 662, 676, 732, 746, 760, 774, 816, 830, 844, 858, 872};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> distance = {168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 336, 336, 168, 168, 168, 504, 168, 168, 336, 336, 168, 168, 336, 168, 336, 168, 336, 168, 168, 168, 336, 336, 504, 168, 168, 168, 168, 168, 168, 168, 168, 168};
    vector<int> height = {871, 860, 849, 838, 827, 816, 805, 794, 783, 772, 761, 750, 739, 717, 695, 684, 673, 662, 629, 618, 607, 585, 563, 552, 541, 519, 508, 486, 475, 453, 442, 431, 420, 398, 376, 343, 332, 321, 310, 299, 288, 277, 266, 255, 244};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> distance = {168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 336, 336, 168, 168, 168, 504, 168, 168, 336, 91, 26, 219, 2, 166, 168, 336, 50, 118, 336, 168, 336, 168, 168, 168, 336, 336, 504, 168, 168, 168, 168, 24, 144, 168, 168, 168, 168};
    vector<int> height = {871, 860, 849, 838, 827, 816, 805, 794, 783, 772, 761, 750, 739, 717, 695, 684, 673, 662, 629, 618, 607, 585, 977, 977, 563, 985, 552, 541, 519, 993, 508, 486, 475, 453, 442, 431, 420, 398, 376, 343, 332, 321, 310, 299, 984, 288, 277, 266, 255, 244};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> distance = {1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> height = {33, 51, 69, 87, 105, 123, 141, 177, 195, 213, 231, 249, 267, 285, 303, 321, 339, 357, 375, 393, 411, 447, 465, 483, 501, 519, 537, 573, 591, 609, 627, 645, 663, 681, 699, 717, 753, 771, 789, 807, 825, 843, 861, 879, 897, 915};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> distance = {200, 300, 200, 300, 400, 300, 300, 200, 300, 300, 400, 200, 200, 300, 300, 200, 100, 200, 200, 100, 300, 200, 400, 200, 300, 200, 100, 200, 100, 200, 100, 300, 500, 200, 300, 100, 400, 300, 200, 500, 100, 200, 200, 100, 100, 100};
    vector<int> height = {833, 821, 803, 791, 773, 749, 731, 713, 701, 683, 665, 641, 629, 617, 599, 581, 569, 563, 551, 539, 533, 515, 503, 479, 467, 449, 437, 431, 419, 413, 401, 395, 377, 347, 335, 317, 311, 287, 269, 257, 227, 221, 209, 197, 191, 185, 179};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> distance = {448, 672, 800, 640, 928, 672, 448, 608, 544, 672, 608, 672, 448, 608, 448, 672, 640, 480, 736, 704, 544, 704, 576, 768, 576, 448, 768, 416, 672, 704, 512, 704, 704, 512, 672, 512, 416, 480, 704, 672, 608, 608, 736, 352, 256, 704, 736};
    vector<int> height = {934, 920, 899, 874, 854, 825, 804, 790, 771, 754, 733, 714, 693, 679, 660, 646, 625, 605, 590, 567, 545, 528, 506, 488, 464, 446, 432, 408, 395, 374, 352, 336, 314, 292, 276, 255, 239, 226, 211, 189, 168, 149, 130, 107, 96, 88, 66, 43};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> distance = {448, 672, 800, 640, 704, 224, 672, 448, 608, 544, 491, 181, 608, 672, 448, 608, 448, 672, 640, 480, 736, 704, 544, 704, 576, 768, 576, 448, 768, 416, 672, 704, 512, 704, 704, 512, 672, 512, 416, 480, 704, 672, 608, 608, 736, 352, 256, 704, 736};
    vector<int> height = {934, 920, 899, 874, 854, 971, 825, 804, 790, 771, 754, 924, 733, 714, 693, 679, 660, 646, 625, 605, 590, 567, 545, 528, 506, 488, 464, 446, 432, 408, 395, 374, 352, 336, 314, 292, 276, 255, 239, 226, 211, 189, 168, 149, 130, 107, 96, 88, 66, 43};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> distance = {476, 465, 260, 484};
    vector<int> height = {39, 13, 8, 72, 80};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> distance = {10, 83, 62, 65};
    vector<int> height = {275, 256, 54, 90, 263};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> distance = {64, 9, 4, 5, 45, 28, 51, 40};
    vector<int> height = {61, 118, 67, 22, 7, 43, 92, 18, 21};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> distance = {48, 38, 50, 36};
    vector<int> height = {102, 87, 51, 710, 246};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> distance = {389, 260, 338, 53, 306, 383, 281, 16, 67};
    vector<int> height = {23, 31, 20, 22, 16, 14, 4, 19, 7, 11};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> distance = {344, 301, 250};
    vector<int> height = {348, 56, 105, 337};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> distance = {3, 130, 392, 442, 159, 299, 315};
    vector<int> height = {102, 109, 125, 7, 32, 137, 19, 119};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> distance = {175, 440, 126, 120};
    vector<int> height = {14, 129, 4, 56, 99};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> distance = {284, 17, 192, 30, 118, 223, 182};
    vector<int> height = {38, 31, 253, 263, 19, 186, 186, 223};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> distance = {9, 33, 35, 10, 18};
    vector<int> height = {260, 331, 92, 366, 259, 230};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> distance = {210, 42, 84};
    vector<int> height = {92, 123, 23, 149};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> distance = {46, 75, 167, 475, 285, 198, 409, 102};
    vector<int> height = {110, 214, 298, 43, 309, 244, 204, 322, 11};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> distance = {207, 68};
    vector<int> height = {674, 468, 176};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> distance = {163};
    vector<int> height = {56, 29};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> distance = {451, 296, 332, 454, 349, 19, 69, 78, 41};
    vector<int> height = {112, 20, 22, 131, 119, 137, 4, 80, 123, 12};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> distance = {355, 127, 437, 431, 242, 486};
    vector<int> height = {840, 613, 721, 678, 392, 428, 109};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> distance = {725, 40};
    vector<int> height = {28, 12, 18};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> distance = {173, 36, 668, 79, 26, 544};
    vector<int> height = {488, 743, 203, 446, 444, 91, 453};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> distance = {34, 50, 76, 39};
    vector<int> height = {610, 408, 482, 697, 60};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> distance = {772, 218, 191, 570, 686, 559, 8, 71, 282};
    vector<int> height = {339, 49, 21, 305, 349, 435, 136, 386, 260, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> distance = {172, 248, 246, 37};
    vector<int> height = {38, 142, 38, 17, 74};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> distance = {5, 40};
    vector<int> height = {99, 88, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> distance = {3, 3};
    vector<int> height = {1, 1, 2};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> distance = {2, 4, 2, 2, 4, 2, 4, 2, 2, 4};
    vector<int> height = {2, 2, 10, 10, 10, 16, 16, 22, 22, 28, 28};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> distance = {693, 306, 792};
    vector<int> height = {1, 385, 555, 995};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> distance = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 982, 9, 9};
    vector<int> height = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 998, 999, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> distance = {1000, 1000, 1000, 1000, 482, 9, 9};
    vector<int> height = {1000, 1000, 1000, 1000, 1000, 996, 998, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> distance = {1000, 1000, 979, 9, 9};
    vector<int> height = {1000, 1000, 1000, 993, 996, 999};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> distance = {1000, 1000, 232, 9, 9};
    vector<int> height = {1000, 1000, 1000, 992, 996, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> distance = {1000, 782, 9, 9};
    vector<int> height = {1000, 1000, 990, 995, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> distance = {1000, 476, 9, 9};
    vector<int> height = {1000, 1000, 984, 990, 996};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> distance = {1000, 260, 9, 9};
    vector<int> height = {1000, 1000, 980, 987, 994};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> distance = {1000, 107, 9, 9};
    vector<int> height = {1000, 1000, 984, 992, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> distance = {981, 9, 9};
    vector<int> height = {1000, 981, 990, 999};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> distance = {441, 441, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 980, 1000, 990, 1000, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> distance = {396, 396, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 968, 1000, 979, 1000, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> distance = {364, 365, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 972, 1000, 984, 1000, 996};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> distance = {333, 333, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 962, 1000, 975, 1000, 988};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> distance = {310, 311, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 966, 1000, 980, 1000, 994};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> distance = {288, 288, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 960, 1000, 975, 1000, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> distance = {270, 270, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 960, 1000, 976, 1000, 992};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> distance = {252, 252, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 952, 1000, 969, 1000, 986};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> distance = {238, 239, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 954, 1000, 972, 1000, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> distance = {225, 225, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 950, 1000, 969, 1000, 988};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> distance = {216, 216, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 960, 1000, 980, 1000, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> distance = {202, 203, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 945, 1000, 966, 1000, 987};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> distance = {193, 194, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 946, 1000, 968, 1000, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> distance = {184, 185, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 943, 1000, 966, 1000, 989};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> distance = {175, 176, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 936, 1000, 960, 1000, 984};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> distance = {171, 171, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 950, 1000, 975, 1000, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> distance = {162, 162, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 936, 1000, 962, 1000, 988};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> distance = {157, 158, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 945, 1000, 972, 1000, 999};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> distance = {148, 149, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 924, 1000, 952, 1000, 980};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> distance = {144, 144, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 928, 1000, 957, 1000, 986};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> distance = {139, 140, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 930, 1000, 960, 1000, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> distance = {135, 135, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 930, 1000, 961, 1000, 992};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> distance = {130, 131, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 928, 1000, 960, 1000, 992};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> distance = {126, 126, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 924, 1000, 957, 1000, 990};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> distance = {121, 122, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 918, 1000, 952, 1000, 986};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> distance = {117, 117, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 910, 1000, 945, 1000, 980};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> distance = {112, 113, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 900, 1000, 936, 1000, 972};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> distance = {112, 113, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 925, 1000, 962, 1000, 999};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> distance = {108, 108, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 912, 1000, 950, 1000, 988};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> distance = {103, 104, 4, 5, 4, 5};
    vector<int> height = {1000, 1000, 897, 1000, 936, 1000, 975};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> distance = {173, 36, 668, 79, 26, 544};
    vector<int> height = {488, 743, 203, 446, 444, 91, 453};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> distance = {2, 4, 2, 2, 4, 2, 4, 2, 2, 4};
    vector<int> height = {2, 2, 10, 10, 10, 16, 16, 22, 22, 28, 28};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> distance = {561, 917, 554, 409, 735, 53, 867, 537, 934, 422, 595, 408, 869, 470, 54, 27, 740, 59, 436, 661, 762, 133, 573, 184, 189, 769, 904, 130, 493, 319, 821, 506, 714, 398, 738, 459, 256, 438, 899, 712, 344, 94, 102, 488, 985, 159, 526, 677, 414};
    vector<int> height = {97, 53, 631, 921, 333, 440, 14, 992, 554, 950, 112, 40, 468, 657, 904, 88, 506, 336, 536, 503, 454, 756, 168, 336, 659, 849, 551, 668, 698, 791, 289, 329, 797, 458, 841, 882, 496, 311, 913, 958, 749, 633, 753, 142, 135, 922, 988, 241, 753, 5};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> distance = {1, 2, 5, 7, 8, 3, 20, 30, 4};
    vector<int> height = {6, 8, 2, 4, 1, 35, 6, 7, 65, 100};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> distance = {2, 4, 2, 2, 4, 2, 4, 2, 2, 4, 19};
    vector<int> height = {2, 2, 10, 10, 10, 16, 16, 22, 22, 28, 28, 13};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> distance = {3, 3};
    vector<int> height = {3, 1, 3};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> distance = {1000, 999, 100, 1};
    vector<int> height = {10, 1, 500, 71, 999};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> distance = {2, 2};
    vector<int> height = {4, 1, 4};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> distance = {999, 1000};
    vector<int> height = {1, 401, 801};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> distance = {692, 838, 727, 485, 206, 744, 469, 458, 950, 745, 109, 600, 386, 736, 609, 573, 362, 152, 226, 426, 803, 518, 990, 752, 346, 169, 658, 492, 64};
    vector<int> height = {700, 505, 148, 950, 142, 906, 693, 304, 427, 71, 967, 684, 154, 878, 822, 583, 192, 178, 818, 476, 156, 504, 733, 406, 280, 569, 683, 756, 722, 476};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> distance = {1, 1000, 2, 999, 3, 876, 6, 765, 10, 567, 4, 654};
    vector<int> height = {1, 1000, 2, 999, 3, 876, 6, 765, 10, 567, 4, 654, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> distance = {1000, 50, 40, 50, 30, 20, 25, 10, 10, 50};
    vector<int> height = {1000, 56, 65, 26, 30, 40, 60, 80, 500, 60, 900};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> distance = {2, 1, 1, 1, 1, 1};
    vector<int> height = {2, 3, 4, 5, 6, 7, 8};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> distance = {152, 936, 363, 613, 53, 466, 77, 974, 219, 124, 484, 30, 121, 664, 853, 397, 78, 472, 479, 412, 201, 937, 328, 76, 740, 789, 609, 648, 168, 337, 589, 988, 796, 358, 981, 721, 628, 29, 599, 292, 384, 321, 466, 571, 864, 558, 688, 188, 395};
    vector<int> height = {437, 999, 376, 45, 986, 444, 836, 861, 996, 369, 669, 163, 952, 625, 74, 261, 837, 436, 450, 201, 705, 292, 111, 924, 958, 587, 175, 108, 659, 368, 97, 72, 387, 722, 501, 826, 364, 638, 278, 903, 857, 716, 823, 172, 106, 1000, 727, 604, 493, 17};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> distance = {2, 2, 2};
    vector<int> height = {8, 6, 4, 3};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> distance = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> height = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> distance = {272, 983, 298, 740, 568, 196, 762, 840, 398, 501, 891, 28, 995, 573, 51, 532, 195, 844, 627, 658, 198, 843, 124};
    vector<int> height = {110, 744, 315, 942, 287, 337, 141, 734, 835, 708, 601, 748, 253, 145, 2, 62, 807, 853, 211, 116, 554, 15, 114, 455};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> distance = {1, 1, 1};
    vector<int> height = {1, 2, 3, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> distance = {1, 1, 1, 1};
    vector<int> height = {1000, 1000, 1, 1000, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> distance = {12, 123, 234, 345, 345, 23, 423, 42, 34, 234, 23, 42, 34, 23, 4, 232, 34, 3, 2, 3, 23, 2, 3, 2, 3, 2, 3, 23, 2, 3, 23, 23, 45, 23, 2, 3, 23, 12, 23, 23, 12, 23, 23, 23, 23, 2, 3, 23, 2};
    vector<int> height = {12, 123, 12, 123, 132, 132, 123, 123, 123, 132, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 456, 45, 345, 345, 345, 234, 12, 12, 12};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> distance = {1};
    vector<int> height = {2, 2};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> distance = {2, 4, 2, 2, 4, 2, 4, 2, 3, 4};
    vector<int> height = {2, 2, 10, 10, 10, 16, 17, 23, 26, 28, 28};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> distance = {1, 500};
    vector<int> height = {999, 1, 1000};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> distance = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> height = {10, 1, 5, 6, 3, 7, 9, 2, 5, 10};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> distance = {1, 1, 1, 1};
    vector<int> height = {2, 3, 4, 5, 6};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> distance = {499, 500};
    vector<int> height = {1000, 2, 999};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> distance = {1, 1, 1};
    vector<int> height = {1, 2, 3, 4};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> distance = {687, 544, 74, 437, 202, 697, 291, 437, 233, 578, 533, 629, 161, 505, 964, 696, 925, 190, 336, 179, 996, 458, 999, 98, 626, 95, 438, 932, 49, 895, 291, 228, 770, 411, 202, 629, 605};
    vector<int> height = {452, 467, 598, 635, 855, 829, 625, 721, 566, 376, 185, 738, 556, 906, 243, 189, 605, 699, 585, 352, 495, 81, 741, 613, 621, 692, 805, 150, 577, 868, 912, 615, 728, 44, 668, 977, 316, 570};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> distance = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> height = {2, 2, 2, 2, 2, 2, 1, 2, 2, 2};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> distance = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999};
    vector<int> height = {1, 100, 100, 2, 100, 100, 3, 100, 100, 4, 100, 100, 5};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> distance = {1, 1, 1, 1, 1};
    vector<int> height = {1, 1, 1, 1, 2, 2};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> distance = {1, 1, 1, 1, 1};
    vector<int> height = {2, 2, 2, 3, 3, 3};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> distance = {1, 1};
    vector<int> height = {1, 3, 1};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<int> distance = {1, 1, 2, 4};
    vector<int> height = {1000, 1000, 1, 2, 4};
    TimeTravellingGardener* pObj = new TimeTravellingGardener();
    clock_t start = clock();
    int result = pObj->determineUsage(distance, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22899043&rd=14245&pm=11060
********************************************************************************
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <fstream>
#include <iterator>
#include <sstream>
#include <complex>
using namespace std;
 
typedef complex<double> CPX;
 
class TimeTravellingGardener {
  public:
  
  inline int sgn(double x){
    return fabs(x)<1e-8?0:(x<0?-1:1);
  }
  
  int check(CPX base, CPX dir, vector<CPX> p){
    int ret=0;
    dir/=dir.real();
    for(int i=0;i<p.size();i++){
      CPX new_tree = base + (p[i].real()-base.real())*dir;
      if (sgn(new_tree.imag())<0) {
        return 1000000000;
      }
      if (sgn(new_tree.imag()-p[i].imag())>0) {
        return 1000000000;
      }
      else if(sgn(new_tree.imag()-p[i].imag())==0);
      else {
        ret++;
      }
    }
    return ret;
  }
  
    int determineUsage(vector <int> dist, vector <int> height) {
    vector<CPX> p;
    
    double cur=0;
    p.push_back(CPX(0,height[0]));
    for(int i=0;i<dist.size();i++){
      cur+=dist[i];
      p.push_back(CPX(cur,height[i+1]));
    }
    
    int ret=1000000000;
    for(int i=0;i<p.size();i++)
      for(int j=i+1;j<p.size();j++){
        CPX dir = (p[j] - p[i]);
        CPX base = p[i];
        ret = min(ret , check(base,dir,p));
      }
    
    for(int i=1;i<p.size();i++){
      CPX base = CPX(0,0);
      CPX dir = p[i]-base;
      ret = min(ret , check(base,dir,p));
    }
    
    for(int i=0;i+1<p.size();i++){
      CPX base = p[i];
      CPX dir = CPX(p[p.size()-1].real(),0) - base;
      ret = min(ret, check(base,dir,p));
    }
    
    return ret;
  }
};

********************************************************************************
*******************************************************************************/