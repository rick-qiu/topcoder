/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7973
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

class ChangingSounds {
public:
    int maxFinal(vector<int> changeIntervals, int beginLevel, int maxLevel);
};

int ChangingSounds::maxFinal(vector<int> changeIntervals, int beginLevel, int maxLevel) {
    int ret;
    return ret;
}


int test0() {
    vector<int> changeIntervals = {5, 3, 7};
    int beginLevel = 5;
    int maxLevel = 10;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> changeIntervals = {15, 2, 9, 10};
    int beginLevel = 8;
    int maxLevel = 20;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88};
    int beginLevel = 40;
    int maxLevel = 243;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> changeIntervals = {214, 40, 203, 333, 118, 575, 217, 386, 319, 548, 137, 34, 415, 473, 140, 309, 333, 314, 358, 17, 330, 301, 188, 241, 542, 49, 226, 65, 423, 452, 288, 369, 281, 288, 485, 460, 506, 636, 520, 262, 489, 493, 405, 227, 507, 384, 544, 666, 118, 582};
    int beginLevel = 367;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> changeIntervals = {483, 430, 157, 657, 360, 424, 446, 481, 2, 531, 360, 154, 234, 22, 492, 633, 244, 338, 393, 125, 298, 386, 448, 211, 624, 602, 60, 43, 109, 341, 483, 582, 280, 503, 444, 277, 645, 247, 186, 233, 86, 530, 264, 208, 466, 65, 471, 644, 210, 330};
    int beginLevel = 551;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> changeIntervals = {638, 753, 538, 437, 714, 920, 468, 95, 506, 993, 105, 321, 720, 143, 936, 523, 36, 407, 704, 627, 548, 492, 919, 151, 967, 762, 178, 241, 573, 186, 81, 922, 866, 796, 847, 912, 757, 70, 413, 275, 896, 704, 941, 620, 476, 434, 170, 742, 401, 944};
    int beginLevel = 697;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> changeIntervals = {100, 199, 105, 211, 170, 79, 56, 110, 159, 108, 87, 121, 15, 163, 173, 87, 214, 12, 176, 187, 5, 228, 175, 97, 21, 116, 199, 261, 39, 234, 126, 244, 230, 154, 141, 217, 84, 7, 126, 69, 130, 34, 87, 72, 207, 54, 188, 220, 89};
    int beginLevel = 95;
    int maxLevel = 401;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 401;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> changeIntervals = {184, 60, 47, 87};
    int beginLevel = 322;
    int maxLevel = 373;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> changeIntervals = {12, 23, 33, 19, 45};
    int beginLevel = 77;
    int maxLevel = 78;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> changeIntervals = {67, 66, 63, 14, 43, 58, 33, 66, 14, 74, 69, 57, 5, 10, 71, 49, 62, 46, 3, 48, 26, 73, 33, 60, 67, 57, 8, 74, 51, 12, 31, 53, 27, 74};
    int beginLevel = 17;
    int maxLevel = 113;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> changeIntervals = {26, 54, 180, 189, 145, 166, 82, 62, 103, 66, 13, 142, 71, 175, 40, 105, 30, 135, 83, 122, 90, 83, 114, 177, 130, 6, 55, 165, 104, 154, 72, 165, 46, 170};
    int beginLevel = 83;
    int maxLevel = 286;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> changeIntervals = {79, 417, 337, 349, 40, 41, 45, 42};
    int beginLevel = 516;
    int maxLevel = 668;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 334;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> changeIntervals = {194, 19, 93, 198, 113, 187, 12, 56, 25, 119, 207, 141, 163, 220, 155, 134, 2, 119, 182, 176, 6, 73, 204, 226, 19, 25, 183, 84, 183, 103, 87, 142, 196, 22, 2, 155, 153, 97, 54, 98};
    int beginLevel = 88;
    int maxLevel = 350;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> changeIntervals = {13, 1, 11, 6, 1, 6, 8, 18, 2, 18, 16, 8, 18, 2, 17, 17, 1, 4, 13, 8, 18, 20, 6, 5, 8, 9, 17, 17, 1, 15, 7};
    int beginLevel = 21;
    int maxLevel = 31;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> changeIntervals = {86, 239, 8, 179, 281, 234, 218, 104, 29, 97, 224, 169, 164, 239, 270, 258, 38, 117, 257, 113, 268, 186, 250, 220, 126, 55, 277, 214, 276, 179, 7, 164, 87, 59};
    int beginLevel = 405;
    int maxLevel = 423;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> changeIntervals = {344, 127, 251, 298, 104, 335, 166, 267, 287, 293, 279, 155, 354, 243, 204, 198, 7, 280, 102, 123, 306, 286, 43, 251, 60, 354, 197};
    int beginLevel = 370;
    int maxLevel = 584;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 584;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> changeIntervals = {295, 20, 83, 64, 276, 290, 292, 193, 214, 82, 210, 217, 39, 35, 104, 42, 288, 213, 186, 316, 173, 54, 145, 114, 99, 325, 24, 172, 37, 196, 163, 314, 21, 180, 59, 128, 311, 185, 78};
    int beginLevel = 507;
    int maxLevel = 513;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 464;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> changeIntervals = {424, 244, 128, 118, 574, 454, 151, 560, 524, 280, 476, 371, 63, 571, 517, 184, 48, 477, 587, 474, 547, 376, 304, 31, 284, 275, 124, 59, 160, 98, 148, 415};
    int beginLevel = 491;
    int maxLevel = 891;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 891;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> changeIntervals = {58, 182, 294, 265, 471, 79, 405, 9, 417, 484, 335, 395, 73, 311, 127, 334, 286, 278, 163, 185, 435, 90, 375, 351, 481, 101, 456, 477, 151, 9, 312, 306, 110, 243};
    int beginLevel = 583;
    int maxLevel = 736;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 735;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> changeIntervals = {19, 51};
    int beginLevel = 12;
    int maxLevel = 98;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> changeIntervals = {61, 147, 48, 7, 135, 90, 31, 10, 55, 5, 42, 71, 118, 141, 38, 69, 4, 114, 95, 141, 40, 12, 81, 72, 115, 138, 35, 79, 71, 101, 60, 39, 19, 7, 121, 131, 115, 42};
    int beginLevel = 130;
    int maxLevel = 223;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 222;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> changeIntervals = {125, 87, 169, 181, 179, 47, 145, 134, 38, 166, 62, 173, 176, 135, 105, 180, 165, 4, 59, 155, 53, 115};
    int beginLevel = 232;
    int maxLevel = 283;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> changeIntervals = {174, 159, 128, 203, 20, 221, 67, 39, 235, 206, 136, 151, 120, 127, 137, 92, 185, 241, 76, 125, 61, 49, 154, 33, 14, 84, 258, 177, 42, 17, 14, 135, 36, 113, 50, 110, 237, 237, 206, 42, 206, 258, 201, 260, 183, 58, 160};
    int beginLevel = 151;
    int maxLevel = 393;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 392;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> changeIntervals = {67, 56, 58, 33, 15, 63, 57, 52, 18, 52, 15, 59, 16, 39, 13, 32, 45, 52, 44, 14, 26, 36, 55, 51, 34, 31, 35, 46, 25, 46, 28, 48, 23, 36, 29, 59, 58, 41, 16};
    int beginLevel = 93;
    int maxLevel = 101;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> changeIntervals = {67, 65};
    int beginLevel = 82;
    int maxLevel = 118;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> changeIntervals = {12, 83, 92, 50, 38, 44, 101, 14, 113, 84, 42, 92, 88, 34, 34, 73, 94, 35, 41, 80, 2, 18, 89, 2, 43, 65, 45, 36};
    int beginLevel = 23;
    int maxLevel = 172;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> changeIntervals = {248, 266, 365, 171, 117, 125, 133, 197, 252, 278, 251, 199, 335, 392, 23, 263, 17, 117};
    int beginLevel = 238;
    int maxLevel = 644;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 643;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> changeIntervals = {280, 226, 259, 233, 37, 207, 167, 156, 234, 250, 18, 180, 29, 22, 3, 293, 78, 275, 81, 97, 137, 167, 126, 18, 205, 268, 91, 267, 295, 99, 178, 3, 141, 18, 239, 14, 269, 148, 232, 269, 187, 48};
    int beginLevel = 303;
    int maxLevel = 450;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> changeIntervals = {16, 85, 30, 83, 60, 58, 50, 110, 122, 75, 14, 84, 28, 112, 74, 76, 59, 107, 96, 118, 13, 7, 88, 28};
    int beginLevel = 99;
    int maxLevel = 195;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> changeIntervals = {14, 356, 575, 574, 83, 481, 55, 545, 196, 161, 497, 472, 71, 299, 568, 518, 258, 247, 34, 521, 240, 39, 158, 144, 539, 410, 500, 262, 184, 260, 418, 378, 279, 315, 86, 17, 109, 389, 201, 430, 168, 309, 541, 477, 566, 295, 338, 416, 82};
    int beginLevel = 326;
    int maxLevel = 894;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 759;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> changeIntervals = {296, 234, 86};
    int beginLevel = 342;
    int maxLevel = 609;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 366;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> changeIntervals = {276, 396, 82, 41, 343, 311, 334, 209, 38, 102, 276, 341, 129, 422, 118, 124, 359, 152, 11, 343, 387, 207, 374, 54};
    int beginLevel = 567;
    int maxLevel = 647;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> changeIntervals = {44, 51, 48, 30, 68, 104};
    int beginLevel = 53;
    int maxLevel = 170;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> changeIntervals = {473, 476, 201, 77, 602, 374, 287, 64, 501, 477, 606, 542, 550, 547, 2, 247, 443, 35, 395, 483, 125, 47, 73, 440, 544, 510, 304, 378, 62, 212, 253};
    int beginLevel = 833;
    int maxLevel = 963;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 963;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> changeIntervals = {145, 137, 209, 273, 257, 178, 207, 44, 26, 59, 278, 48, 216, 12, 291, 263, 108, 296, 300, 241, 97, 140, 59, 11};
    int beginLevel = 420;
    int maxLevel = 455;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 453;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> changeIntervals = {302, 278, 275, 336, 341, 156, 127, 96, 301, 12, 10, 170, 373, 67, 334, 192, 313, 223, 108, 106, 328, 149, 339, 290, 214, 225, 286};
    int beginLevel = 481;
    int maxLevel = 572;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 570;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> changeIntervals = {222, 171, 171, 255, 55, 284, 72, 324, 65, 248, 271, 3, 287, 261};
    int beginLevel = 166;
    int maxLevel = 503;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 403;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> changeIntervals = {88, 68, 40, 68, 32, 73, 107, 112, 97, 14, 64, 19, 22, 108, 100, 5, 102, 103, 17, 93, 27, 16, 109, 1, 5, 102, 83, 34};
    int beginLevel = 168;
    int maxLevel = 168;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> changeIntervals = {263, 456, 94, 1, 417, 212, 433, 20, 393, 440, 386, 304, 316, 481, 125, 454, 420, 127, 351, 480, 170, 179, 323, 305, 261, 288, 51, 249, 371, 124};
    int beginLevel = 378;
    int maxLevel = 726;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 718;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> changeIntervals = {273, 78, 307, 14, 29, 326, 179, 235, 62, 260, 293, 162, 146, 114, 292, 153, 164, 184};
    int beginLevel = 445;
    int maxLevel = 494;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 488;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> changeIntervals = {154, 64, 158, 90, 84, 114, 95, 187, 153, 129, 128, 153, 107, 83, 33, 133, 180, 108, 13, 68, 146, 90, 112, 29, 87, 183, 138, 133, 158, 134, 131};
    int beginLevel = 190;
    int maxLevel = 288;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 263;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> changeIntervals = {46, 33, 7, 4, 22, 30, 40, 40, 36, 43, 35, 19, 27, 19, 27, 1, 29, 19, 32, 51, 49, 47, 29, 31, 40};
    int beginLevel = 43;
    int maxLevel = 78;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> changeIntervals = {489, 226, 201, 68, 378, 294, 10, 12, 163, 227, 225, 335, 198, 483, 267, 50, 30, 346, 369, 277, 431, 319, 295, 147, 247, 89, 62, 68, 476, 394, 67, 301, 381, 249, 479, 373, 278, 497, 157, 466, 99};
    int beginLevel = 414;
    int maxLevel = 815;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> changeIntervals = {85, 282, 215, 347, 83, 245, 104, 203, 111, 180, 216, 248, 465, 39, 14, 357, 346, 221, 111, 172, 282, 424, 224, 209, 111, 400, 174, 493, 473, 279, 69, 407};
    int beginLevel = 408;
    int maxLevel = 753;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 753;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> changeIntervals = {223, 333, 354, 364, 108, 90, 310, 168, 167, 179, 227, 496, 264, 331, 335, 208, 280, 150, 505, 29, 1, 89, 504, 22};
    int beginLevel = 452;
    int maxLevel = 883;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 883;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> changeIntervals = {25, 68, 80, 72, 144, 32, 80, 134, 47, 8, 25, 68, 20, 45, 32, 125, 34, 121, 42, 14, 98, 141, 100, 148, 90, 128, 5, 139, 11, 20, 84, 66, 112};
    int beginLevel = 99;
    int maxLevel = 223;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> changeIntervals = {844, 29, 317, 273, 880, 682, 633, 156, 41, 889, 629, 693, 613, 293, 863, 300};
    int beginLevel = 847;
    int maxLevel = 896;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> changeIntervals = {275, 748, 479, 178, 647, 533, 25, 596, 581, 359, 230, 611, 297, 365, 489, 745, 570, 192, 563, 701, 609, 342, 423, 209, 692, 388, 329};
    int beginLevel = 674;
    int maxLevel = 750;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> changeIntervals = {132, 114, 67, 71, 186, 52, 103, 148, 208, 138, 46, 38};
    int beginLevel = 52;
    int maxLevel = 210;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> changeIntervals = {100, 36, 10, 61, 74, 55, 101, 33, 87, 33, 19, 63, 6, 87, 76, 86, 104, 25, 36, 43, 61, 9, 47, 120, 56, 60, 85, 96, 94, 31, 30, 8, 103, 38, 13, 71, 65, 113, 71, 20, 112, 109, 91, 78, 10, 31, 37, 77, 34};
    int beginLevel = 48;
    int maxLevel = 120;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> changeIntervals = {732, 629, 668, 366, 416, 60, 349, 608, 309, 432, 407, 313, 683, 59};
    int beginLevel = 221;
    int maxLevel = 796;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> changeIntervals = {456, 103, 638, 634, 366, 337, 497, 410, 200, 590, 403, 447, 244, 427, 375, 389, 165, 536, 417, 121, 417, 460, 509, 425, 631, 456, 603, 355, 147, 40, 630, 425, 526, 92, 311, 522, 394, 544, 374, 549, 149, 487};
    int beginLevel = 595;
    int maxLevel = 660;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> changeIntervals = {75, 5, 35, 93, 8, 1, 47, 9, 28, 35, 29, 84, 75, 51};
    int beginLevel = 55;
    int maxLevel = 95;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> changeIntervals = {42, 47, 16, 63, 32, 5, 69, 27, 9, 19, 44, 19, 59};
    int beginLevel = 36;
    int maxLevel = 70;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> changeIntervals = {466, 283, 482, 416, 68, 229, 171, 542, 413, 36, 456, 36, 407, 303, 193, 54};
    int beginLevel = 33;
    int maxLevel = 616;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> changeIntervals = {866, 548, 833, 650, 576};
    int beginLevel = 445;
    int maxLevel = 954;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> changeIntervals = {5, 3, 7};
    int beginLevel = 5;
    int maxLevel = 10;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88};
    int beginLevel = 40;
    int maxLevel = 243;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> changeIntervals = {15, 2, 9, 10};
    int beginLevel = 8;
    int maxLevel = 20;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 100;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int beginLevel = 300;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> changeIntervals = {6, 4, 5, 6, 7, 9, 3, 2, 9, 6, 6, 4, 5, 6, 7, 9, 3, 2, 9, 6, 6, 4, 5, 6, 7, 9, 3, 2, 9, 6, 6, 4, 5, 6, 7, 9, 3, 2, 9, 6, 6, 4, 5, 6, 7, 9, 3, 2, 9, 6};
    int beginLevel = 50;
    int maxLevel = 100;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> changeIntervals = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    int beginLevel = 0;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 0;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 50;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 550;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> changeIntervals = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
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
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 0;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 775;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 89, 9, 5, 34, 2, 34, 2, 42, 23, 23, 234, 234, 234, 5, 3, 3, 2, 4, 3, 34};
    int beginLevel = 40;
    int maxLevel = 301;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 1;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 1, 2, 3, 4, 2, 1, 4, 2, 1, 5, 3, 2, 1, 3, 4, 2, 1, 4, 4, 1, 4, 2, 1, 3, 1, 4, 5, 6, 3, 1, 3, 5, 7, 2, 3, 2};
    int beginLevel = 500;
    int maxLevel = 999;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int beginLevel = 0;
    int maxLevel = 196;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> changeIntervals = {55, 66, 44, 55, 66, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55, 55};
    int beginLevel = 500;
    int maxLevel = 999;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 973;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 5, 3, 2, 1, 3, 4, 2, 3, 4, 5, 4, 3, 2, 3, 4, 5, 4, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 100;
    int maxLevel = 200;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> changeIntervals = {1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4};
    int beginLevel = 1;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 1;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 549;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> changeIntervals = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int beginLevel = 100;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 20;
    int maxLevel = 100;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 556;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 0;
    int maxLevel = 49;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 27, 2, 18, 79, 86, 83, 22, 2, 3, 4, 5, 7, 8, 4, 23, 3, 56, 5, 3, 5, 8, 5, 4, 6, 8, 9, 4, 3, 5, 8, 9, 5, 3, 34, 67, 8};
    int beginLevel = 40;
    int maxLevel = 243;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> changeIntervals = {74, 39, 154, 18, 137, 162, 14, 88, 74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88};
    int beginLevel = 40;
    int maxLevel = 555;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 554;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> changeIntervals = {2, 3, 4};
    int beginLevel = 100;
    int maxLevel = 100;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> changeIntervals = {334, 410, 51};
    int beginLevel = 195;
    int maxLevel = 629;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> changeIntervals = {1, 234, 64, 3, 65, 341, 7, 87, 56, 44, 21, 100, 76, 90, 99, 65, 43, 2, 3, 55, 53, 24, 87, 23, 567, 123, 86, 43, 56, 75, 54, 7, 54, 77, 33, 23, 21, 54, 87, 90, 92, 84, 52, 6, 8, 65, 59, 27, 13, 11};
    int beginLevel = 1;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 74, 39, 127, 95, 63, 140, 99, 96};
    int beginLevel = 1;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 3, 3, 3, 3};
    int beginLevel = 24;
    int maxLevel = 100;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> changeIntervals = {2, 2, 2, 2, 2, 4, 6, 8, 10, 15, 2, 2, 2, 2, 2, 4, 6, 8, 10, 15, 2, 2, 2, 2, 2, 4, 6, 8, 10, 15, 2, 2, 2, 2, 2, 4, 6, 8, 10, 15, 2, 2, 2, 2, 2, 4, 6, 8, 10, 15};
    int beginLevel = 477;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 742;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 100;
    int maxLevel = 500;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> changeIntervals = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 740;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 1;
    int maxLevel = 48;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 500;
    int maxLevel = 525;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 524;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> changeIntervals = {1, 1};
    int beginLevel = 0;
    int maxLevel = 1;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
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
    vector<int> changeIntervals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int beginLevel = 0;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> changeIntervals = {1, 2};
    int beginLevel = 5;
    int maxLevel = 10;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 1, 2, 3, 4, 5, 6, 7, 4, 5, 6, 3, 4, 5, 6, 7, 8, 1, 2, 3, 7, 8, 9, 4, 5, 6, 3, 4, 5, 1, 2, 3, 4, 3, 2, 1, 5};
    int beginLevel = 500;
    int maxLevel = 999;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 0;
    int maxLevel = 25;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> changeIntervals = {100};
    int beginLevel = 100;
    int maxLevel = 100;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
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
    vector<int> changeIntervals = {3, 32, 58, 67, 2, 1, 1, 2, 4, 1, 59, 431, 23, 44, 123, 553, 112, 11, 23, 112, 45, 76, 5, 23, 23, 55, 23, 4, 5, 9, 777, 8, 6, 4, 3, 2, 4, 88, 6, 4, 2, 2, 23, 44, 55, 432, 32, 4, 43, 2};
    int beginLevel = 10;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> changeIntervals = {5};
    int beginLevel = 4;
    int maxLevel = 8;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 1, 2, 4, 8, 16, 32, 64, 1, 2, 4, 8, 16, 32, 64, 1, 2, 4, 8, 16, 32, 64, 1, 2, 4, 8, 16, 32, 64, 1, 2, 4, 8, 16, 32, 64, 1};
    int beginLevel = 40;
    int maxLevel = 243;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 100;
    int maxLevel = 200;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 50;
    int maxLevel = 101;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> changeIntervals = {1000};
    int beginLevel = 0;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> changeIntervals = {12};
    int beginLevel = 10;
    int maxLevel = 20;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> changeIntervals = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int beginLevel = 5;
    int maxLevel = 10;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int beginLevel = 800;
    int maxLevel = 900;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 849;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> changeIntervals = {7};
    int beginLevel = 7;
    int maxLevel = 10;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
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
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> changeIntervals = {5, 5};
    int beginLevel = 5;
    int maxLevel = 8;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> changeIntervals = {2};
    int beginLevel = 10;
    int maxLevel = 10;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> changeIntervals = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 777};
    int beginLevel = 5;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 831;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> changeIntervals = {74, 39, 127, 95, 63, 140, 99, 96, 154, 18, 137, 162, 14, 88, 200, 30, 100, 334, 253, 66, 292, 234, 338, 222, 444, 555, 98, 1, 3, 4, 198, 372, 124, 194, 285, 209, 340, 400, 298, 123, 234, 345, 456, 367, 267, 168, 296, 197, 283, 163};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> changeIntervals = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> changeIntervals = {2, 1, 2, 1, 2, 1};
    int beginLevel = 2;
    int maxLevel = 50;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> changeIntervals = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    int beginLevel = 500;
    int maxLevel = 1000;
    ChangingSounds* pObj = new ChangingSounds();
    clock_t start = clock();
    int result = pObj->maxFinal(changeIntervals, beginLevel, maxLevel);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=309453&rd=10781&pm=7973
********************************************************************************
using namespace std;
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
 
#define PB push_back
#define SZ size()
#define REP(v, hi) for (int v=0; v<(hi); v++)
#define REPD(v, hi) for (int v=((hi)-1); v>=0; v--)
#define FOR(v, lo, hi) for (int v=(lo); v<(hi); v++)
#define FORD(v, lo, hi) for (int v=((hi)-1); v>=(lo); v--)
 
typedef vector <int> VI;
typedef vector <VI> VVI;
typedef vector <string> VS;
 
/* ############################ THE REAL CODE ############################ */
 
class ChangingSounds {
  public:
  int maxFinal(vector <int> ch, int begin, int M) {
    VI pos(M+1,0);
    pos[begin]=1;
 
    REP(i,ch.SZ) {
      VI next(M+1,0);
      REP(j,M+1) if (pos[j]) {
  if (j-ch[i]>=0) next[j-ch[i]]=1;
  if (j+ch[i]<=M) next[j+ch[i]]=1;
      }
      pos=next;       
    }
    int res=-1;
    REP(i,M+1) if (pos[i]) res=i;
    return res;
  }
 
  
 
};
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/