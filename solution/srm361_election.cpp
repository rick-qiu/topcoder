/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8014
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

class Election {
public:
    int votesNeeded(vector<int> votes, vector<int> wishList);
};

int Election::votesNeeded(vector<int> votes, vector<int> wishList) {
    int ret;
    return ret;
}


int test0() {
    vector<int> votes = {10, 8, 6, 4};
    vector<int> wishList = {-1, 0, -1, 2};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> votes = {10, 20, 30, 0};
    vector<int> wishList = {-1, -1, -1, 0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> votes = {10, 100, 40, 15, 15};
    vector<int> wishList = {4, 0, 1, 3, 2};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> votes = {5052863, 4419975, 3556783, 9490441, 6166389, 836297, 4623556, 4905465, 117307, 8071245, 932463, 9194925};
    vector<int> wishList = {-1, -1, -1, -1, 2, 0, -1, -1, 8, 9, 4, 11};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 53562445;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> votes = {0};
    vector<int> wishList = {0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
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
    vector<int> votes = {0};
    vector<int> wishList = {-1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> votes = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> votes = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> votes = {10000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> wishList = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 490001225;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> votes = {10000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> wishList = {-1, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 490001225;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> votes = {554851, 7496813, 130161, 8998565, 3023450, 6215723, 8655348};
    vector<int> wishList = {5, 6, 0, 4, 3, 1, 2};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 24911547;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> votes = {7651154, 3601326, 1271320, 2703001, 764832, 6664721, 9372528, 9957670, 9371077, 1578439, 55567, 7664590, 2034623, 8315557, 5011808, 6145181, 737763, 8605825, 8754764, 2819487, 9145747, 2574926, 2802356, 2382761, 7292172, 6956210, 1810623, 4871946, 2998083, 3842659};
    vector<int> wishList = {19, 11, -1, 28, 18, 26, 10, 16, 9, -1, 1, 27, 2, 22, 14, 17, -1, 29, 21, 13, 12, 8, 7, 20, -1, 3, 15, 23, 5, 4};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 134142206;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> votes = {6310184, 2551549, 9800424, 6158768, 4016789, 9193573, 5141128, 9729831, 9024989, 9217444, 886725, 2630106, 3383503};
    vector<int> wishList = {11, 4, 7, 8, 9, -1, 6, 1, 2, 12, 3, 10, 0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 46445614;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> votes = {2579434, 6752349, 7596880, 5182707, 5612384, 9083463, 6503200, 5444, 5941634, 9583517, 6267040, 2065111, 3854748, 2993622, 1037029, 2485402, 7131285, 4955022, 887351, 2742920, 8467660, 8801350, 2982171, 3302935, 3435486, 8910226, 6921164, 7471137, 7124206, 1484776, 8833813};
    vector<int> wishList = {-1, -1, -1, 19, -1, -1, 2, 28, 27, 5, 29, 25, 24, 22, -1, 7, 26, 11, 8, 21, 6, 15, 10, 23, 13, 9, 3, 0, -1, 12, 18};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 88539323;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> votes = {2930900, 6196462, 9655659, 324181, 2356188, 2223331, 1587171, 2319044, 171373, 1548056, 5753026, 9089282, 2354962, 2036277, 9884398, 209328, 6033797, 3825310, 5970839, 4120448, 227108, 5729588, 5356683, 4483953, 8156135, 8312096, 7261399, 3005940, 8163674, 2477032, 2951872, 3685991, 9488180, 7750619, 1729337, 6327177, 2072677, 98020, 8221854, 9809874};
    vector<int> wishList = {33, 8, 0, -1, 36, 10, 35, 22, 11, 17, 3, -1, 30, 18, 14, 25, 37, 19, 23, 2, -1, 20, 32, 26, 34, -1, 38, 12, 13, 31, 39, -1, 21, -1, 15, 16, 5, 28, -1, 7};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 168811294;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> votes = {474828, 4112347, 4127192, 30025, 2803451, 4326208, 9263359, 7201254, 5055149, 2713961, 167864, 8709176, 9637266, 738268, 469813, 7741549, 1355793, 5977406, 5932861, 9645717, 2560, 6555928, 2856395, 5068026, 8971387, 6918328, 6924278, 4447008, 2617876, 4199457, 5322646, 2010846, 6759789, 3540223, 8827856, 4216878, 7311389};
    vector<int> wishList = {12, -1, 11, -1, 28, 27, -1, -1, -1, 5, -1, 18, 17, -1, 26, -1, -1, 22, -1, 32, 21, 7, -1, 24, -1, -1, 8, -1, -1, -1, -1, -1, -1, 16, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 143566529;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> votes = {8904908, 9227683, 9529221, 6170094, 8205722, 6152243, 2804056, 4172224, 7356457, 7370337, 7793424, 5113238, 1305556, 685978, 602765, 3786734, 6686707, 5044520, 7135325, 4150744, 9919263, 1000141, 433741, 7829648, 6953173, 9749117, 7267046, 654400, 3055818, 6658110, 3368842, 192408, 7212646, 443469, 3445036, 7689887, 5492749, 571433, 1076288, 7401264, 8034957, 4755929, 1414119, 4696119, 6323214, 2578053};
    vector<int> wishList = {-1, 34, -1, 37, -1, 23, 22, 16, -1, 17, -1, 26, -1, -1, 33, 8, 39, 31, 24, 20, -1, 21, 41, 9, 35, 7, -1, 2, 4, -1, -1, 44, 28, -1, 30, -1, 15, -1, 43, 45, -1, 13, 12, 1, 25, 18};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 178309821;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> votes = {6428560, 491698, 7409803};
    vector<int> wishList = {-1, -1, 0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
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
    vector<int> votes = {9304235, 9149373, 7849739};
    vector<int> wishList = {-1, 0, 2};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 154863;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> votes = {9417059, 7241795, 3550415, 1364185};
    vector<int> wishList = {-1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
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
    vector<int> votes = {4328220, 3267752, 6913799, 8655383, 8578761, 6446393, 2441733, 1988886, 3253903, 8397342, 4728911, 17469, 1280957, 1156396, 3852508, 9688716, 9961466, 2712477, 9618682, 3232094, 146541, 2428482, 9677560, 3516096, 6323976};
    vector<int> wishList = {1, 2, 14, 21, 16, 4, 9, -1, 23, 3, 18, 10, 8, 22, 15, -1, 5, 20, 0, 17, 6, 7, 13, 11, 12};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 98603824;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> votes = {8536633, 8398838, 6773125, 3043702, 2871289, 7584991, 270397, 3322119, 9184096, 797264, 9637156, 6063009, 4955437, 851633, 6269716, 97160, 5258272, 155125, 8437476, 5676232, 8246625, 615657, 6874636, 4956156, 5022029, 9690782, 8238777, 355937, 4153592, 6151697, 3219093, 8424795, 8859980, 1158531, 7162714, 1811908, 2807419, 6941017, 8860377};
    vector<int> wishList = {12, 26, 10, -1, -1, -1, -1, -1, -1, -1, 38, -1, -1, -1, 34, 28, -1, -1, -1, 20, 35, 33, -1, -1, -1, -1, 23, -1, 11, -1, -1, -1, 29, 31, 27, 32, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 174167728;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> votes = {9734408, 7730492, 7446306, 3876857, 4113493};
    vector<int> wishList = {4, -1, -1, 2, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 15770488;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> votes = {2088598, 1089984, 397130, 7235753, 8634204, 6341735, 4476060, 2533893, 1706256, 3971363, 5784410, 4008604, 9242588, 3789913, 9062235, 7566697, 4022574, 9288750, 600229, 9799390, 2745327, 6717195, 3571778, 534944, 8022542, 8031674, 9242195, 1879837, 8355035, 1710517, 2956749, 8210921, 6064651, 4665586};
    vector<int> wishList = {4, -1, 17, 20, 18, -1, 5, -1, -1, 30, -1, -1, 33, 28, -1, -1, -1, -1, 29, -1, -1, -1, 1, 23, -1, -1, -1, 16, -1, -1, 6, -1, 8, 25};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 140548055;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> votes = {407059, 3472735, 499938, 7508894, 4006082, 2661556, 6641015, 9286940, 7641706, 3693063, 6109640, 9613144, 7568958, 1685981, 3557803, 5148217, 2351007, 7528564, 2454541, 6473365, 5078737, 8637086, 7890759, 1724731, 1453858, 286192, 6486460, 8983640, 4770663, 7535841, 8982198, 2412437, 1557092, 6131845, 5627979, 5721224, 5621040, 4966319, 3339706};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1, 27, 24, -1, 0, -1, 2, -1, -1, 11, -1, -1, -1, 17, 5, -1, -1, -1, -1, -1, -1, -1, -1, 13, -1, -1, 37, 28, -1, -1, 4, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 84071469;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> votes = {2889205, 6035406, 1409814, 3819423};
    vector<int> wishList = {2, 0, -1, 3};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 3339828;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> votes = {9761052};
    vector<int> wishList = {0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> votes = {4671191, 7307371, 618691, 9995808, 4764487, 1786039, 7307201, 3173356, 7737442, 7017730, 4996924, 3186650, 2719164, 7004127};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1, -1, 13, -1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 4396177;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> votes = {8083961, 9030525, 5336769, 4988044, 2514323, 4021296, 2045957, 6214365, 5853852, 7528198, 9503929, 3882313, 9244034, 9774379, 3855285, 5463544, 3953125, 200591, 1167649, 6211542, 6204523, 4928791, 2477693, 2475001, 1493576, 9512906, 1238422, 6631751, 8175948, 7874354, 4995255, 2717244, 4118998, 3116700};
    vector<int> wishList = {-1, -1, 1, -1, 16, -1, -1, -1, -1, -1, 13, 21, 29, -1, 3, -1, 17, -1, -1, 15, 25, 11, 9, -1, -1, -1, 0, -1, -1, 2, -1, 23, 5, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 112402768;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> votes = {6073384, 3242941, 4519816, 5713556, 1204553, 6497273};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> votes = {3530023, 4674995, 3461429, 3603296, 4455173, 1880706, 7186254, 4360295, 4687496, 3607840, 4238591, 114413, 7521403, 568742, 9091475, 3458210, 5653027, 5028887, 3430293, 5267969, 8492061, 6838206, 4056511, 6268347, 692762, 3778203, 9686535, 5982596, 4694470, 5541787, 3800135, 8373335, 2822435, 1219498, 9572407, 5996052, 34643, 5148004, 2794611, 4994008, 2141336, 6172787, 4567623, 8847792, 7339297};
    vector<int> wishList = {-1, -1, 32, 30, -1, -1, 41, 36, -1, 14, -1, 20, 12, -1, 40, -1, -1, 6, 7, -1, 28, 21, 13, 42, 31, 18, 25, 9, 33, -1, 22, -1, 39, 0, 17, 37, -1, -1, 5, -1, 16, 26, 10, -1, 34};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 186604243;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> votes = {4790452, 8468804, 4245010, 6420024, 18663, 6509554, 5287738, 2750787, 6320871, 7447251, 5307468, 1181061, 2556037, 1119682, 6144873, 4330396, 3608667, 1246740, 8464303, 8790123, 2470446, 9642096, 7207926, 5120486, 4232157, 9174714, 758891, 1157613, 6943437, 3317411, 6660888, 2716789, 9335576, 7514606, 1109251, 9445695, 8381832, 420363, 955788, 8037479, 7428975, 2715334, 7295313, 5150708, 4300875, 4858482, 9645282, 9176458, 1322925};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 78497594;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> votes = {9831292, 2691775, 5855913, 9804832, 3491238, 2662311, 2195630, 9131931, 7379012, 6030514, 764112, 4411225, 7387577, 2867011, 5663364, 1070984, 7628344, 488057, 7584758, 7980821, 5664705, 7617865, 5913184, 7531859, 3445691, 5643672, 3927551, 7009782, 1731704, 2311922, 191834, 6805598, 1741262, 2994587, 6412510, 6778854, 7039383, 5447540, 1976762};
    vector<int> wishList = {-1, 13, 21, 25, 29, 7, 9, -1, 20, 17, 5, 4, 34, 14, 10, 8, 6, 2, 30, 24, 22, 11, 33, 32, 37, 3, 27, 23, 26, 35, 18, 19, 36, 28, 0, 16, 31, 12, 38};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 139948230;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> votes = {7958633, 1612398, 4591605, 3260211, 4086751, 1540126, 5098128, 1749109, 4280219, 1812729, 2352725, 6053230, 5769893, 6172505, 5903828, 1205959, 2071433, 8610078, 5589299, 4719945, 9101120, 6040537, 6657093, 7402280, 5194743, 337443, 5371150, 6598334, 6620861, 6761570, 315942, 5716448, 4161360, 9064347};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 4383340;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> votes = {5789008, 5628182, 1231982, 6293092, 5455901};
    vector<int> wishList = {4, 0, -1, 2, 3};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 6059128;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> votes = {995631, 6341074, 7898382, 524390, 1384572, 5409173, 1378522, 8196851, 2045656, 1921140, 7613774, 5125800, 7930944, 6844823, 2603349, 3483507, 651441, 3931694, 8885579, 4056546, 3706914, 8104744, 6800690, 5308585, 2324437, 5000915, 7827260};
    vector<int> wishList = {17, 1, 25, 3, 19, 9, 8, 20, 26, 5, -1, -1, 12, 22, 15, 6, 21, 2, 24, 13, 23, 18, 4, -1, -1, 0, 10};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 105787272;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> votes = {1938563, 7556397, 3719556, 3678534, 8246383, 4447024, 8431480, 7433558, 6949297, 1976685, 9160992, 184670, 553853, 4470221, 9183249, 4130004, 9344578, 334984, 2969622, 245315, 7403535, 7249811, 5217812, 1338030, 7559013, 7841589, 6256689, 7787321, 3709815, 280895, 423539, 1988050, 1292739, 1309043};
    vector<int> wishList = {-1, 21, -1, -1, -1, 1, -1, -1, 15, -1, -1, -1, -1, -1, 3, -1, -1, -1, -1, -1, 25, -1, -1, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1, 18};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 55249185;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> votes = {2900847, 7116760, 6447862, 8831888, 2573340, 2182769, 7856867, 8070925, 8733915, 8646677, 6277243, 7274327};
    vector<int> wishList = {6, 8, 10, 9, 4, 3, 1, 0, 2, 5, 7, 11};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 25954136;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> votes = {2181849, 1620079, 7895743, 1813788, 8016969, 1504585, 3466084, 829633, 8957748, 2817133, 3593579, 4532791, 9694974, 2824039, 3568816, 5689326, 7617668, 7167423, 4986247, 6348090, 1082480, 2634163, 5151617, 802974, 3255867, 4477468, 1387862, 7106896, 1839469, 188532, 5470623, 8507866, 2724380, 4349963, 4278940, 7192738, 1309332, 6656823, 5873404, 6246629, 5313580, 2538311, 8151543, 6664316, 1038760};
    vector<int> wishList = {5, 4, 33, 1, 37, 38, 16, 23, 41, 32, 12, 36, 25, 22, 11, 34, 18, 40, 7, 20, 9, 10, 15, 44, 43, 24, 30, 31, 28, 42, 39, 3, 0, 6, 26, 8, 29, 13, 19, 2, 14, 35, 17, 21, 27};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 203337161;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> votes = {9767144, 698951, 2829411, 8192342, 9280507, 5915454, 3654924, 5623184, 6891224, 7233097, 9612492, 1979879, 9034401, 1723650, 234615, 6412341, 8623444, 3164422, 3104915, 2764095};
    vector<int> wishList = {-1, -1, 1, -1, 18, -1, 15, -1, 16, -1, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 70974413;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> votes = {1967304, 6785461, 5542223, 457607, 5488379, 7471412, 2324030, 930313, 6105428, 9910959, 7405002, 3663164, 8947341, 4260778, 5997245, 7330314, 5619898, 3150683, 2393275, 5196749, 3477983, 3858128, 1566671, 2733024, 9644403, 272735, 4831809, 1540060, 5627760, 8116862, 8491261, 30016, 6283787, 4112136, 1990577, 9170822, 3405185, 7517726, 4445353, 3607401, 3373182, 6643620, 6923286};
    vector<int> wishList = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
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
    vector<int> votes = {8061288, 261838, 2578130, 6875150, 273101, 5251013, 544205, 6712242, 6521568, 8500871, 1680015, 1664600, 8151277, 3863268, 6303095, 9020213, 1544359, 9877817, 4394666, 8472097, 7609932, 6636184, 6376271, 5691411, 566446, 7425389, 3577641, 1694693, 5689116, 1944010, 1413924, 3328043, 5112894, 3484267, 791130, 6487538, 127747, 6968151, 4926742, 2244887, 4072600, 8153397, 8888839, 9233396, 5200223, 7042374};
    vector<int> wishList = {45, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 21, -1, -1, -1, 42, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 176375519;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> votes = {1312281, 1298725, 2335970, 3747553, 5863546, 5077247, 8088272, 3793692, 2012654, 92372, 9600236, 6889982, 5260237, 152429, 5669869, 1214794, 6970159, 9130252, 5862990, 4886072, 6821245, 1216367, 7064331, 2919160, 5180979, 1411849, 9915596, 4230609, 4403966, 5312402, 1093924, 9842249};
    vector<int> wishList = {-1, -1, -1, -1, -1, 30, -1, 15, -1, 22, -1, -1, 17, 24, -1, -1, -1, -1, 18, -1, 14, -1, -1, 19, 5, -1, -1, -1, -1, -1, 3, 28};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 148196017;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> votes = {9384314, 5402321, 4937118, 3455938, 2490170};
    vector<int> wishList = {-1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> votes = {487611, 9501778, 7426277, 9637891};
    vector<int> wishList = {0, -1, -1, 3};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 11498007;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> votes = {8248443, 2983393, 5741632, 5077807, 2451629, 9215601, 8377236, 3607931, 2332751, 9922132, 6489050, 4163284, 2486135, 9757853, 9959550, 5932315, 2706343, 411632, 4082630, 1764350};
    vector<int> wishList = {-1, 19, -1, 6, 0, 17, 11, 1, 14, -1, 5, -1, -1, 8, -1, -1, -1, 3, 7, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 71949855;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> votes = {6487655, 4228700, 7869041, 9290902, 3068970, 442812, 6585137, 8047912, 3343004, 6133643, 3656284, 1019741, 1712682, 7432305, 3241275, 9551229, 3466886, 1583051, 9692598, 3655040, 8577867, 5034762, 8478240, 7051110, 8281377, 4392931, 7963515, 6821147, 6090521, 7509442, 2447375, 4931225, 6584920};
    vector<int> wishList = {-1, -1, -1, -1, 31, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 15, -1, 8, -1, 6, 14, -1, -1, -1, -1, -1, -1, 9, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 20315095;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> votes = {5172053, 5611686, 7791000, 307130, 6861844, 4879874, 2011686, 2412199, 3841985, 2977932, 1959701, 3189739};
    vector<int> wishList = {1, 10, 8, 2, 9, 5, -1, 3, 0, 7, 6, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 37587408;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> votes = {5771921, 7199685, 3216836, 9218661, 2261346, 8236677, 5442720, 4140431, 3009440, 4819618, 5389969, 6685896, 8700703, 4273586, 1679831, 9316504, 9569143, 5819510, 206848};
    vector<int> wishList = {1, -1, -1, 10, -1, -1, 0, -1, -1, 18, 8, -1, -1, 13, 16, 7, -1, 3, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 36543575;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> votes = {3064901, 8484801, 8178909, 1575990, 3635732, 2744941, 6990544, 5556645, 3750109, 7319497, 3026456, 1459760, 7072926, 1353221, 960061, 5768483, 3167172, 1588219, 4051471, 9560889, 2834756, 6103638, 1986256, 5914154, 4598381, 982281, 4332488, 9363878, 8330542, 5047847, 8445163, 9738269, 5778138, 6765262, 75679, 5141298, 5126823, 2074688, 4589822, 8728844, 5458520, 7542597, 7946250, 5672953, 4240962, 1080833, 1116047, 3163699, 2503190};
    vector<int> wishList = {26, -1, -1, 18, -1, -1, 4, 14, -1, -1, 27, 13, 12, 19, -1, 21, -1, 17, 39, -1, 16, -1, -1, -1, 11, -1, -1, 36, 34, -1, 35, 29, 43, 1, 31, -1, 47, 32, -1, -1, -1, 23, 44, -1, 37, 10, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 203612014;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> votes = {4071331, 3127441, 213197, 5128461, 4935448, 9145021, 1270700, 5474352, 4353681, 7958000, 8690087, 4489535, 3672203, 4210716, 6041629, 7614338, 7650517, 3173585, 6772807, 2941421, 9444893, 7087311, 9991500, 7210367, 617824, 609807, 8298097, 6147949, 947311, 8802603, 6151396, 4510035, 2421028, 2088512, 5374284, 5535062, 2590296, 3864053, 5150577, 3029419, 7768272, 5769573, 5255854, 1935816, 4187499, 3940251, 1377513, 4420722, 4515420, 8208935};
    vector<int> wishList = {-1, -1, -1, 27, -1, -1, 12, -1, 13, -1, 34, 31, 4, -1, 2, 47, 5, 48, 38, 9, -1, -1, -1, -1, -1, 32, 6, 25, 8, 26, 11, -1, -1, 14, 1, 28, 40, -1, 21, 39, 42, -1, -1, -1, -1, 44, 10, 17, 3, 29};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 171033340;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> votes = {7683577, 9744133, 3822650, 3105685, 2314298, 1729138, 2059781, 450125};
    vector<int> wishList = {-1, -1, -1, 1, -1, 6, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 4577893;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> votes = {4019885, 2528121, 6063083, 7848071, 929856, 9618907, 878634, 8623121, 5395490, 2984857, 4377769, 477488, 7910979, 4972551, 8440673, 9919592, 7008495, 7371743, 9067896, 6517388, 2383345, 5645354, 5837887, 550552, 8863466, 406293, 6661837, 8936149, 1911867, 5176492, 8346388, 6660286, 7174122, 9532732, 3134752, 4295955, 9700098, 4909000, 1906760, 6184082, 9770341, 6826474, 5508365};
    vector<int> wishList = {5, -1, 22, 7, 10, -1, 0, -1, -1, 39, -1, 25, -1, -1, 28, 11, 34, 1, 6, -1, 20, 17, 14, 37, 16, -1, 32, -1, -1, 21, 23, -1, 15, 18, 29, 19, -1, 36, -1, 42, 35, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 151534828;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> votes = {5088291, 8123067, 8769246, 8257134, 5284056, 6137868, 8944451, 7256976, 6295150, 7453676, 2008031, 7384633, 7478445, 728997, 2864948, 1131883, 754443, 8100702, 6582005, 493489, 4797874, 3345585, 7528913, 295727, 5600212, 5430770, 5598702, 3787265, 5112473, 750888, 1788945, 9713634, 8756505, 1551511, 4454151, 8790865, 5790388, 4493376, 1011233, 1617317, 4200795};
    vector<int> wishList = {25, 40, -1, -1, 31, -1, 16, -1, 1, 5, 0, 17, 19, 23, -1, 29, 20, -1, -1, 10, 24, 21, 33, -1, 18, 35, -1, 9, 38, 32, 22, 4, -1, 27, 11, 6, -1, 37, 8, 30, 39};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 147300772;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> votes = {7992867, 2477152, 9371627, 5377663, 1529870, 1628152};
    vector<int> wishList = {3, 1, 0, 4, 5, 2};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 11880432;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> votes = {3016830, 3134192, 9619151, 4140416};
    vector<int> wishList = {2, 1, 0, 3};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 2129811;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> votes = {1455961, 5383506, 4238391, 7689451, 7486469, 9062705, 878739, 2543294, 9190459};
    vector<int> wishList = {-1, -1, -1, -1, 7, 5, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 22426691;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> votes = {5153561, 3864752};
    vector<int> wishList = {-1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> votes = {7688600, 8000274, 2608122, 394304, 6225768, 4964568, 5161181, 7823277, 4060839, 9495756, 6046267, 2699185, 5914393, 5324667, 3729091, 3210602, 3796955, 3469922, 9796381, 8584556, 4435055, 5169715, 9400733, 4277759, 2847707, 4616712, 316101};
    vector<int> wishList = {2, 0, 7, -1, -1, 3, 11, 23, 13, 4, 16, 19, 12, 1, 9, 14, 6, 18, 24, 25, 5, 15, -1, 10, -1, -1, 17};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 113830061;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> votes = {5032867, 6342324, 8939078, 641080};
    vector<int> wishList = {-1, -1, -1, 3};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> votes = {10000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> wishList = {47, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 470000047;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> votes = {5052863, 4419975, 3556783, 9490441, 6166389, 836297, 4623556, 4905465, 117307, 8071245, 932463, 9194925};
    vector<int> wishList = {-1, -1, -1, -1, 2, 0, -1, -1, 8, 9, 4, 11};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 53562445;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> votes = {2, 1, 0};
    vector<int> wishList = {2, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> votes = {5052863, 4419975, 3556783, 9490441, 6166389, 836297, 4623556, 4905465, 117307, 8071245, 932463, 9194925, 112, 321, 1, 1};
    vector<int> wishList = {-1, -1, -1, -1, 2, 0, -1, -1, 8, 9, 4, 11, 3, 7, 1, 10};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 72249849;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> votes = {10, 100, 15, 15, 16};
    vector<int> wishList = {4, 0, 3, 2, 1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> votes = {123456, 575468, 123457, 58754, 56658, 708678, 3454567, 7689, 56879, 432577};
    vector<int> wishList = {4, -1, 5, 8, -1, -1, -1, 1, -1, -1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 1321107;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> votes = {10, 100, 40, 15, 15};
    vector<int> wishList = {4, 0, 1, 3, 2};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> votes = {100, 100, 100, 100};
    vector<int> wishList = {-1, -1, -1, 1};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> votes = {100, 19, 101, 13};
    vector<int> wishList = {-1, 2, -1, 0};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> votes = {5052863, 4419975, 3556783, 9490441, 6166389, 836297, 4623556, 4905465, 117307, 8071245, 932463, 9194925, 111111};
    vector<int> wishList = {-1, -1, -1, -1, 2, 0, -1, -1, 8, 9, 4, 11, 3};
    Election* pObj = new Election();
    clock_t start = clock();
    int result = pObj->votesNeeded(votes, wishList);
    clock_t end = clock();
    delete pObj;
    int expected = 57008114;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16200742&rd=10773&pm=8014
********************************************************************************
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
 
class Election {
public:
  int votesNeeded(vector <int>, vector <int>);
};
 
 
struct Candidate{
  int votes;
  int index;
  int exp;
  Candidate(){
    votes = -1;
  }
  Candidate(int a,int b,int c){
    votes = a;
    index = b;
    exp = c;  
  }
  bool operator<(const Candidate& c)const{
    if(votes != c.votes){
      return votes > c.votes;
    }
    return index < c.index;
  }
};
 
int Election::votesNeeded(vector <int> votes, vector <int> wishList) {
  int n = votes.size();
  vector<Candidate> vc(n);
  vector<Candidate> un;
  for(int i=0;i < n;i++){
    Candidate t(votes[i], i, wishList[i]);
    if(wishList[i] != -1){
      vc[wishList[i]] = t;  
    }else{
      un.push_back(t);
    }
  }
  sort(un.begin(), un.end());
  for(int i=0,j=0;i < n;i++){
    if(vc[i].votes == -1){
      vc[i] = un[j++];
    }
  }
  int r = 0;
  for(int i=n-2;i >= 0;i--){
    if(!(vc[i] < vc[i+1])){
      int dlta = vc[i+1].votes - vc[i].votes;
      vc[i].votes += dlta;
      r += dlta;
      while(!(vc[i] < vc[i+1])){
        vc[i].votes++;
        r++;  
      }
    }
  }
  return r;
}

********************************************************************************
*******************************************************************************/