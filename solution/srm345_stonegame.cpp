/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7238
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

class StoneGame {
public:
    int getScore(vector<int> treasure, vector<int> stones);
};

int StoneGame::getScore(vector<int> treasure, vector<int> stones) {
    int ret;
    return ret;
}


int test0() {
    vector<int> treasure = {3, 2};
    vector<int> stones = {1, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> treasure = {5, 4, 3, 2, 1};
    vector<int> stones = {1, 1, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> treasure = {5, 5};
    vector<int> stones = {2, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {1};
    vector<int> stones = {10};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> treasure = {5, 4, 15, 457, 345, 13, 235, 346};
    vector<int> stones = {2, 3, 1, 4, 5, 1, 3, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1407;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> treasure = {2, 2, 1, 2, 3, 2, 2, 1, 1, 2};
    vector<int> stones = {28, 60, 27, 1, 1, 37, 69, 1, 1, 31};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> treasure = {3, 2, 2, 2, 3, 1, 1, 1, 3, 1};
    vector<int> stones = {57, 43, 1, 1, 1, 85, 99, 16, 1, 27};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> treasure = {2, 3, 3, 1, 3, 3, 2, 2, 1, 1};
    vector<int> stones = {28, 6, 30, 58, 1, 1, 1, 1, 68, 65};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> treasure = {1, 3, 2, 1, 1, 3, 3, 1, 1, 3};
    vector<int> stones = {100, 1, 1, 69, 13, 87, 1, 96, 35, 68};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> treasure = {1, 3, 3, 1, 1, 2, 3, 2, 3, 3};
    vector<int> stones = {66, 45, 41, 1, 1, 98, 82, 10, 68, 98};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> treasure = {1, 1, 3, 2, 3, 3, 3, 2, 1, 3};
    vector<int> stones = {4, 71, 1, 16, 50, 1, 19, 47, 1, 56};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> treasure = {3, 2, 3, 3, 2, 3, 2, 2, 3, 2};
    vector<int> stones = {1, 88, 44, 1, 66, 1, 33, 38, 76, 75};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> treasure = {2, 3, 2, 3, 2, 1, 2, 3, 3, 1};
    vector<int> stones = {1, 1, 1, 5, 64, 39, 41, 19, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> treasure = {1, 1, 3, 1, 3, 1, 1, 3, 3, 3};
    vector<int> stones = {26, 91, 40, 87, 1, 43, 98, 1, 1, 49};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> treasure = {3, 3, 1, 3, 1, 2, 3, 2, 2, 3};
    vector<int> stones = {6, 62, 1, 6, 1, 45, 1, 1, 9, 83};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> treasure = {384, 887, 778, 916, 794, 336, 387, 493, 650, 422, 363, 28, 691, 60, 764, 927, 541, 427, 173, 737};
    vector<int> stones = {369, 430, 531, 124, 136, 803, 59, 168, 457, 43, 374, 920, 1, 199, 1, 371, 527, 981, 1, 863};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 937;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> treasure = {171, 997, 282, 306, 926, 85, 328, 337, 506, 847, 730, 314, 858, 125, 896, 583, 546, 815, 368, 435};
    vector<int> stones = {1, 751, 809, 1, 789, 1, 652, 400, 1, 1, 1, 1, 13, 587, 540, 571, 379, 602, 903, 493};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1744;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> treasure = {653, 757, 302, 281, 287, 442, 866, 690, 445, 620, 441, 730, 32, 118, 98, 772, 482, 676, 710, 928};
    vector<int> stones = {857, 354, 966, 684, 625, 1, 733, 504, 271, 1, 1, 341, 797, 619, 847, 922, 380, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2046;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> treasure = {842, 351, 194, 501, 35, 765, 125, 915, 988, 857, 744, 492, 228, 366, 860, 937, 433, 552, 438, 229};
    vector<int> stones = {408, 122, 396, 238, 794, 429, 12, 1, 777, 1, 764, 539, 841, 1, 129, 1, 918, 997, 1, 471};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2160;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> treasure = {184, 491, 500, 773, 726, 645, 591, 506, 140, 955, 787, 670, 83, 543, 465, 198, 508, 356, 805, 349};
    vector<int> stones = {623, 1, 344, 569, 1, 312, 606, 662, 879, 321, 1, 1, 523, 709, 1, 259, 1, 63, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2504;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> treasure = {37, 453, 900, 380, 551, 469, 72, 974, 132, 882, 931, 934, 895, 661, 164, 200, 982, 900, 997, 960};
    vector<int> stones = {814, 1, 96, 467, 1, 1, 685, 1, 937, 446, 1, 419, 413, 1, 1, 10, 1, 343, 207, 714};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 10206;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> treasure = {373, 322, 256, 820, 600, 722, 905, 940, 812, 941, 668, 706, 229, 128, 151, 985, 659, 921, 225, 423};
    vector<int> stones = {397, 631, 1, 1, 1, 1, 626, 223, 641, 899, 299, 525, 210, 820, 1, 1, 995, 1, 770, 777};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2556;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> treasure = {851, 256, 861, 143, 580, 885, 994, 206, 622, 568, 505, 614, 962, 755, 327, 260, 945, 203, 203, 507};
    vector<int> stones = {1, 843, 1, 1, 873, 1, 499, 1, 1, 249, 334, 649, 755, 747, 1, 501, 789, 250, 304, 364};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2206;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> treasure = {498, 254, 893, 687, 126, 153, 997, 976, 189, 158, 730, 437, 461, 415, 922, 461, 305, 29, 28, 51};
    vector<int> stones = {1, 1, 795, 700, 40, 429, 501, 648, 160, 536, 340, 1, 128, 1, 50, 1, 430, 336, 901, 972};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 7894;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> treasure = {950, 290, 368, 989, 293, 796, 744, 145, 830, 391, 683, 341, 542, 570, 827, 233, 262, 43, 361, 118};
    vector<int> stones = {762, 310, 426, 1, 678, 691, 525, 615, 1, 359, 1, 101, 727, 917, 1, 530, 291, 971, 81, 594};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1816;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> treasure = {289384, 930887, 692778, 636916, 747794, 238336, 885387, 760493, 516650, 641422, 202363, 490028, 368691, 520060, 897764, 513927, 180541, 383427, 89173, 455737, 5212, 595369, 702568, 956430, 465783, 21531, 722863, 665124, 174068, 703136, 513930, 979803, 634023, 723059, 133070, 898168, 961394, 18457, 175012, 478043, 176230, 377374, 484422, 544920, 413785, 898538, 575199, 594325, 798316, 664371};
    vector<int> stones = {803527, 268981, 241874, 999171, 497282, 420926, 336328, 1, 750847, 661314, 616125, 819583, 898815, 515435, 344044, 171088, 1, 947179, 393585, 502652, 612400, 95061, 993369, 210013, 698587, 297540, 480571, 960379, 66602, 612903, 570493, 260757, 560281, 209442, 429690, 346620, 1, 958032, 738098, 834482, 120710, 704568, 1, 872354, 276966, 964684, 28625, 1, 805733, 409504};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 25251366;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> treasure = {530020, 258271, 363369, 959709, 486716, 226341, 518150, 747797, 700724, 142619, 2246, 122847, 493452, 892922, 243556, 192380, 597489, 537765, 888229, 469842, 792351, 165194, 441501, 757035, 87765, 470125, 324915, 936988, 275857, 373744, 346492, 322228, 148366, 709860, 281937, 151433, 452552, 316438, 899229, 153276, 975408, 901475, 276122, 468859, 794396, 36030, 661238, 908236, 573794, 65819};
    vector<int> stones = {366144, 335929, 318777, 964444, 114614, 118607, 1, 1, 235129, 1, 67918, 466997, 987744, 512184, 295500, 206726, 755591, 268140, 469787, 338083, 388465, 939508, 228805, 278612, 127829, 887344, 35569, 755423, 613811, 321802, 473731, 811306, 1, 1, 248627, 503466, 473417, 213259, 167638, 305625, 1, 433453, 419380, 947469, 900974, 903882, 808934, 158661, 657200, 548900};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1833634;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> treasure = {252997, 152960, 713774, 272814, 739669, 187191, 681096, 952927, 116467, 365085, 911341, 422091, 327685, 443377, 855543, 755937, 379108, 517446, 219757, 669180, 418419, 706888, 89413, 103349, 32173, 451660, 262010, 402337, 625211, 166343, 467588, 878207, 319302, 697714, 667373, 575322, 401256, 864820, 44600, 517722, 229905, 955940, 939812, 73941, 915668, 311706, 346229, 811128, 829151, 565985};
    vector<int> stones = {763921, 1, 867270, 54082, 740085, 811973, 1, 647626, 741223, 306641, 783899, 352299, 280525, 688210, 288820, 1, 371156, 218005, 614770, 981777, 247256, 348143, 445885, 223206, 679568, 1, 801962, 31327, 518945, 613203, 936785, 222843, 789529, 608873, 849959, 448037, 1, 686249, 33334, 321649, 999755, 251747, 1, 514501, 473789, 66250, 273304, 505364, 910254, 247687};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2022164;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> treasure = {519126, 761153, 613997, 245976, 209189, 649158, 703730, 895437, 32461, 253415, 543922, 870461, 26305, 60029, 388028, 278051, 266749, 707557, 308903, 504795, 697698, 858700, 571044, 301040, 132003, 90429, 806404, 144501, 682, 617648, 908539, 36160, 895152, 522536, 282135, 104340, 171693, 502216, 516128, 720505, 755630, 60050, 590965, 298286, 636430, 495344, 576336, 903178, 202901, 885239};
    vector<int> stones = {416950, 495368, 392293, 40744, 1, 658391, 655341, 570, 174233, 956043, 1, 228024, 82, 903191, 618997, 214678, 730691, 764525, 349615, 1, 390359, 1, 565101, 602727, 204917, 1, 893530, 532291, 756971, 819081, 218594, 418628, 1, 439215, 193513, 14413, 909611, 966190, 806356, 356621, 198988, 1, 524567, 27285, 1, 300607, 125850, 107206, 35218, 34946};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 21450493;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> treasure = {990784, 436874, 228459, 710874, 967638, 804290, 620484, 826608, 770479, 772758, 149315, 334472, 645730, 591101, 533460, 723619, 89439, 58026, 211389, 633075, 631234, 518158, 933682, 3494, 160359, 550271, 110700, 633418, 101840, 275570, 668364, 92623, 228795, 413174, 319848, 196432, 217463, 456683, 539391, 504293, 745792, 205058, 355116, 391522, 796158, 888575, 631492, 401948, 462952, 359232};
    vector<int> stones = {610538, 485055, 554099, 241082, 653517, 372232, 261797, 582339, 519219, 513971, 784813, 894978, 31537, 1, 1, 279208, 984858, 1, 469912, 663951, 777561, 675106, 740050, 588712, 519935, 77376, 593615, 343769, 544919, 376883, 876983, 124031, 311575, 186594, 550254, 803075, 734714, 138378, 415776, 1, 935711, 110295, 400347, 871138, 305154, 122574, 1, 449292, 894019, 836837};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1222978;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> treasure = {596964, 575056, 387091, 963859, 378131, 714905, 698572, 372662, 369634, 689686, 304790, 613074, 722605, 756852, 419806, 349251, 767869, 336504, 109486, 639007, 82196, 414640, 62950, 721121, 80968, 880227, 686764, 387678, 290597, 963982, 740866, 887561, 539037, 127956, 367771, 433519, 359212, 66343, 322533, 245197, 272380, 627322, 858271, 994985, 384173, 794428, 344235, 152041, 647284, 970073};
    vector<int> stones = {245831, 370348, 982031, 653715, 57523, 626925, 189436, 1, 622955, 411899, 875641, 89160, 679263, 561042, 1, 208325, 1, 454155, 335822, 909366, 591172, 1, 725219, 621704, 209934, 53960, 1, 515798, 1, 121309, 742699, 76377, 252716, 825172, 771560, 554011, 1, 1, 816540, 1, 58110, 955082, 671339, 59427, 785148, 776788, 696533, 591282, 884851, 576591};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1917277;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> treasure = {202255, 215351, 311132, 973814, 967858, 381495, 199182, 146082, 554604, 15721, 152434, 887983, 590182, 97488, 359416, 79297, 768826, 765405, 138723, 796893, 550552, 230298, 90033, 399135, 443182, 898507, 990416, 767058, 299709, 380596, 860000, 501963, 112298, 687484, 475777, 80155, 68978, 191310, 742588, 139933, 723383, 895022, 544267, 313564, 508861, 903683, 909212, 277686, 669087, 564286};
    vector<int> stones = {735991, 197315, 754117, 641893, 395529, 897526, 651137, 1, 247644, 80929, 826622, 917956, 1, 426816, 543438, 460009, 811784, 418658, 363828, 621270, 726652, 60911, 1, 228399, 1, 992394, 433891, 1, 754553, 126088, 360100, 448567, 1, 72642, 89369, 918185, 696777, 975267, 588955, 1, 19594, 322198, 289673, 806446, 1, 560998, 648413, 598383, 914694, 942440};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 22559834;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> treasure = {987335, 88422, 548160, 994986, 522958, 1355, 691762, 578763, 492973, 631542, 167717, 561853, 711851, 703663, 375483, 550400, 76218, 665155, 801174, 399016, 486507, 839852, 476365, 724791, 488264, 942492, 323173, 570038, 373538, 18860, 28829, 360872, 107281, 576988, 355857, 146591, 578342, 563971, 725353, 587666, 195512, 893070, 149518, 907362, 113084, 41352, 974113, 189301, 706507, 291639};
    vector<int> stones = {709365, 581033, 136105, 273680, 413413, 734970, 916171, 162845, 1, 726815, 994315, 713887, 346040, 701536, 1, 924394, 637290, 259632, 584265, 774549, 101878, 666834, 994950, 665156, 678469, 400961, 98824, 213172, 185678, 493246, 572762, 150324, 84101, 461076, 322043, 1, 423920, 225845, 451239, 474977, 520020, 526344, 1, 365982, 953667, 788968, 1, 1, 380903, 88132};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1499114;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> treasure = {465003, 683175, 549208, 649719, 5217, 301184, 692378, 945488, 757473, 434574, 238958, 725063, 276126, 713934, 366798, 312497, 293419, 893142, 848154, 971727, 775475, 596981, 925394, 843486, 385949, 372306, 450031, 264030, 269560, 206899, 352161, 734563, 406425, 417720, 384281, 411642, 718903, 593011, 873481, 992727, 27584, 628790, 234141, 303709, 342724, 600939, 132558, 152494, 10432, 980711};
    vector<int> stones = {785906, 49614, 963639, 79422, 207830, 96181, 209096, 843025, 1, 952387, 258233, 155711, 800031, 609664, 167280, 429650, 922352, 857465, 487331, 147516, 519916, 843882, 675635, 854388, 623288, 339644, 786743, 890245, 510140, 552064, 636354, 1, 558706, 342734, 992735, 774316, 691088, 100670, 916488, 556838, 598090, 585206, 1, 1, 402558, 623404, 1, 300822, 303606, 646580};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1193740;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> treasure = {325362, 161529, 273379, 834448, 332701, 564046, 574883, 23788, 804900, 675552, 242590, 721387, 650354, 799427, 966949, 764795, 163037, 68507, 277108, 346093, 665418, 679665, 115922, 288821, 98481, 954167, 105995, 186355, 774124, 408438, 832934, 99485, 86318, 106313, 933932, 419018, 186710, 25166, 959157, 991609, 217070, 201746, 712996, 867423, 1172, 196296, 148570, 680560, 264802, 425677};
    vector<int> stones = {446572, 658926, 720173, 874090, 903567, 255813, 885197, 453334, 65187, 263371, 695569, 286142, 982640, 744264, 263591, 206203, 791632, 1, 511805, 352347, 898139, 190496, 36422, 387227, 134159, 120357, 1, 585473, 673340, 475884, 747662, 587543, 1, 379175, 1, 407331, 829295, 260758, 48861, 533293, 1, 390280, 963954, 959296, 96108, 714938, 944977, 444585, 720084, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1237320;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> treasure = {11978, 22438, 27564, 12219, 8026, 10376, 8844, 23241, 19047, 20734, 8595, 5297, 5874, 7890, 14073, 3105, 27907, 15807, 29720, 3924, 6904, 22391, 23912, 19510, 9500, 29931, 22189, 23497, 13179, 1222, 8047, 7367, 4597, 11066, 29611, 8585, 30354, 16128, 9416, 13607, 533, 6042, 16076, 15329, 11988, 4316, 3536, 29373, 8646, 26538};
    vector<int> stones = {1, 1, 1, 1, 1, 1, 29470, 4936, 10542, 1, 17647, 7845, 18916, 3313, 27553, 13687, 1, 27512, 17201, 15258, 25172, 21048, 23170, 27953, 22572, 32023, 12277, 30957, 26108, 16606, 7226, 3980, 2327, 14050, 24422, 3231, 7002, 19429, 1093, 7313, 28951, 13879, 3569, 997, 4946, 5920, 9123, 27583, 27184, 19331};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 72940;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> treasure = {344670, 395122, 701417, 824426, 889874, 662168, 357861, 758063, 141266, 579279, 301876, 934548, 404649, 263866, 634159, 282485, 486755, 631222, 438853, 178102, 736633, 677583, 751510, 790366, 391271, 878330, 288072, 360078, 535500, 351194, 282066, 379309, 397881, 794116, 220348, 243532, 932954, 748125, 537761, 553807, 140396, 38801, 267780, 70481, 404391, 728522, 23837, 305591, 414504, 50727};
    vector<int> stones = {344670, 395122, 701417, 824426, 889874, 662168, 357861, 758063, 141266, 579279, 301876, 934548, 404649, 263866, 634159, 282485, 486755, 631222, 438853, 178102, 736633, 677583, 751510, 790366, 391271, 878330, 288072, 360078, 535500, 351194, 282066, 379309, 397881, 794116, 220348, 243532, 932954, 748125, 537761, 553807, 140396, 38801, 267780, 70481, 404391, 728522, 23837, 305591, 414504, 50727};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 23506127;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> treasure = {2000, 1500, 1000, 700, 600, 500, 400, 300, 200, 100};
    vector<int> stones = {5, 3, 2, 41, 1, 1, 4, 8, 7, 12};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> treasure = {104300, 107600, 4334, 10000, 100, 104320, 103200, 1000, 103320, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> stones = {1, 1, 1, 1, 1, 1, 1, 1, 1, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 97531, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 319534;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> treasure = {5, 5, 6, 6, 9, 6, 8, 4, 3, 5, 10, 1, 4, 3, 5, 7, 7, 7, 6, 10, 9, 6, 9, 5, 7, 6, 2, 9, 9, 10, 9, 3, 2, 1, 1, 7, 5, 4, 3, 5, 5, 10, 10, 5, 7, 8, 5, 8, 9, 1};
    vector<int> stones = {8, 1, 4, 1, 9, 8, 8, 1, 5, 2, 1, 2, 10, 8, 3, 5, 4, 1, 9, 4, 2, 3, 8, 7, 8, 6, 3, 3, 2, 9, 1, 5, 8, 6, 5, 8, 1, 9, 7, 1, 1, 1, 8, 7, 1, 8, 9, 1, 5, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> treasure = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> stones = {1, 2, 1, 2, 1, 2, 3, 4, 5, 1, 1, 2, 1, 2, 1, 2, 3, 4, 5, 1, 1, 2, 1, 2, 1, 2, 3, 4, 5, 1, 1, 2, 1, 2, 1, 2, 3, 4, 5, 1, 1, 2, 1, 2, 1, 2, 3, 4, 5, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> treasure = {999199, 999299, 999299, 999399, 999499, 999599, 999699, 999799, 999679, 999954, 999993, 999992, 999999, 939999, 949999, 949999, 994999, 999599, 999969, 999299, 999219, 999919, 999999, 999399, 999499, 999939, 999299, 999999, 999299, 999299, 993999, 999999, 991999, 991999, 991999, 999919, 999919, 999919, 999199, 991999, 999199, 999199, 999119, 999119, 999199, 999199, 999999, 999129, 999199, 999129};
    vector<int> stones = {999191, 999299, 999243, 999399, 999493, 999594, 999695, 999797, 1, 999954, 999993, 999692, 2, 939895, 1, 949992, 994991, 999592, 999963, 999294, 999215, 999916, 999991, 2, 999492, 999933, 1, 999991, 999291, 999291, 993991, 3, 991992, 991992, 991992, 999911, 999911, 999911, 999191, 991992, 999192, 999192, 999113, 999113, 999193, 999194, 999994, 999124, 999195, 999126};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1949678;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> treasure = {36245, 301980, 337680, 587703, 127304, 182157, 37791, 458402, 701628, 8521, 196267, 648709, 966050, 511284, 694396, 466193, 714032, 685831, 399480, 449263, 397137, 337577, 826634, 363687, 545130, 369994, 516416, 778215, 81596, 550177, 800143, 578678, 331934, 736318, 874780, 29940, 770609, 801474, 359281, 245074, 804538, 738000, 754240, 171142, 139488, 677020, 476743, 450948, 526348, 807307};
    vector<int> stones = {1, 31380, 861049, 202581, 272922, 671655, 318692, 161796, 372239, 425674, 82013, 474795, 70570, 840855, 59725, 293297, 917285, 367907, 774665, 327926, 697675, 844171, 717983, 306642, 162626, 329497, 466021, 246654, 825677, 279030, 481767, 149185, 874336, 287295, 772754, 976460, 492528, 887937, 827277, 20297, 141057, 143505, 500808, 21676, 592935, 9649, 774479, 650658, 770489, 708107};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 36245;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> treasure = {1, 65, 43, 623, 45, 6, 4, 342, 54};
    vector<int> stones = {1, 1, 1, 4999, 4999, 4999, 5000, 5000, 5};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1140;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> treasure = {15312, 1, 4132, 531, 43};
    vector<int> stones = {542, 1, 652, 1, 763};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 20018;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> treasure = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999, 999999, 999999, 999999, 999999};
    vector<int> stones = {10, 9, 8, 7, 6, 1, 2, 3, 4, 5, 10, 9, 9, 1, 100, 1, 2, 3, 4, 5, 10, 9, 9, 1, 100, 1000000, 1000000, 100000, 1000000, 100000, 1000000, 1000000, 1000000, 100000, 1000000, 1000000, 1000000, 100000, 1000000, 1000000, 1000000, 100000, 1000000, 1000000, 1000000, 999999, 999999, 9999, 99999, 99999};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 25000018;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> treasure = {3, 3, 3};
    vector<int> stones = {3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> treasure = {5, 3};
    vector<int> stones = {3, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> treasure = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> stones = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> treasure = {100, 1000, 100, 1, 20, 2345, 645, 1325, 123, 75472, 124, 12351, 125, 6346, 246};
    vector<int> stones = {2, 4, 2, 2, 301, 45, 100000, 100003, 1, 100005, 1, 100000, 1, 100000, 100000};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 100199;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> treasure = {3, 4, 5};
    vector<int> stones = {3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> treasure = {1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999};
    vector<int> stones = {1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 49999975;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> treasure = {1234, 234, 52, 351, 23, 345, 1, 1, 1, 1};
    vector<int> stones = {1, 10000, 100000, 9954, 997, 12345, 54321, 9876, 98765, 56432};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2243;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> treasure = {99, 86, 33, 21};
    vector<int> stones = {3, 3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {100000, 100000, 999, 9959, 595656, 945645, 4546, 445, 46, 4564, 454645};
    vector<int> stones = {1243, 454, 21, 78845, 21, 21, 84, 21, 2454, 121, 4854};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2216505;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> treasure = {400, 200, 300, 1000000, 1000000, 1000000};
    vector<int> stones = {1, 1, 1, 3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> treasure = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> stones = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> treasure = {2, 1, 5};
    vector<int> stones = {3, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> treasure = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    vector<int> stones = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> treasure = {1, 1, 1};
    vector<int> stones = {3, 3, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {1, 31380, 861049, 202581, 272922, 671655, 318692, 161796, 372239, 425674, 82013, 474795, 70570, 840855, 59725, 293297, 917285, 367907, 774665, 327926, 697675, 844171, 717983, 306642, 162626, 329497, 466021, 246654, 825677, 279030, 481767, 149185, 874336, 287295, 772754, 976460, 492528, 887937, 827277, 20297, 141057, 143505, 500808, 21676, 592935, 9649, 774479, 650658, 770489, 708107};
    vector<int> stones = {557508, 206031, 681086, 592852, 955457, 644056, 998372, 243781, 676166, 295696, 85891, 772322, 495279, 881684, 509967, 573323, 953194, 684834, 338712, 7608, 705351, 988938, 774046, 749573, 197708, 143648, 913599, 1, 589281, 864710, 689372, 287834, 93644, 628921, 280026, 1, 161235, 273189, 543686, 960793, 174365, 1, 268122, 177458, 576796, 498156, 285190, 155945, 609766, 739690};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1119965;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> treasure = {100, 100};
    vector<int> stones = {3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> treasure = {1, 1};
    vector<int> stones = {3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> stones = {999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000, 999999, 1000000};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> treasure = {5, 5, 5};
    vector<int> stones = {101, 101, 101};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> treasure = {5, 4, 3, 2};
    vector<int> stones = {3, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> treasure = {4, 4, 5, 6, 7};
    vector<int> stones = {3, 3, 1, 2, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> treasure = {10, 10};
    vector<int> stones = {3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {5, 5, 5, 5, 6, 6};
    vector<int> stones = {5, 5, 5, 5, 6, 6};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> treasure = {2, 3, 2, 3, 4, 5, 6, 5, 4, 5, 6};
    vector<int> stones = {3, 4, 5, 4, 4, 3, 5, 6, 7, 6, 5};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> treasure = {1, 1, 1, 1};
    vector<int> stones = {1, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> treasure = {999992, 999991, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999991, 999999, 999999, 999999, 999999, 999999, 999949, 999999, 99991, 999993, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 7456};
    vector<int> stones = {999994, 999992, 999991, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999991, 999999, 999999, 999999, 999999, 999999, 999949, 999999, 99991, 999993, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 456456};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 48107320;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> treasure = {10, 7, 5, 100};
    vector<int> stones = {3, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> treasure = {3, 3, 3, 3};
    vector<int> stones = {3, 3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {3, 3};
    vector<int> stones = {3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> treasure = {1234, 234, 52, 351, 23, 345, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> stones = {1, 10000, 100000, 9954, 997, 12345, 54321, 9876, 98765, 56432, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 33333, 44445, 44445, 44445, 44445, 44445, 44445, 44445, 44445};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2283;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> treasure = {5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1};
    vector<int> stones = {5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> treasure = {5, 1};
    vector<int> stones = {3, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> treasure = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> stones = {1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000, 1000000, 999999, 1000000, 999999, 1000000};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> treasure = {622233, 999999, 216292, 778910, 15092, 471331, 417298, 792749, 569067, 215672, 315578, 297788, 241178, 584697, 939402, 168707, 188096, 242268, 724290, 893715, 147466, 574720, 57541, 668014, 452433, 847888, 162278, 287051, 119208, 336874, 412481, 299127, 55927, 915022, 910848, 584082, 818650, 375525, 283730, 66405, 958735, 947963, 409267, 870928, 757958, 390523, 304209, 358518, 983858, 555590};
    vector<int> stones = {987987, 4, 603004, 427560, 1, 879983, 132401, 745934, 3, 936375, 414048, 909754, 635708, 1, 88341, 2, 49968, 221912, 1, 841408, 481247, 9822, 459104, 380864, 125266, 1, 52433, 427832, 562336, 464493, 1, 355496, 305912, 301384, 564212, 559085, 1, 714768, 653976, 2, 761089, 119051, 846900, 1, 646281, 748594, 999574, 251837, 1, 679064};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2968517;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> treasure = {1, 2};
    vector<int> stones = {1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> treasure = {5, 5, 5, 5, 5};
    vector<int> stones = {3, 3, 3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> treasure = {9, 5, 4, 2, 10, 1, 5, 9, 8, 1, 8, 8, 10};
    vector<int> stones = {8, 6, 5, 2, 1, 9, 1, 5, 5, 1, 1, 6, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> treasure = {28422, 6453, 12353, 22022, 24807, 21732, 24450, 24217, 19569, 10691, 9388, 9477, 5037, 28617, 15785, 24093, 3193, 2158, 7395, 11827, 5930, 10942, 21767, 30161, 2166, 13740, 29193, 22186, 27282, 31912, 25448, 1231, 22935, 17012, 23475, 14374, 32554, 22067, 18764, 21017, 29020, 1731, 19564, 2955, 30927, 24652, 20071, 16144, 539, 26649};
    vector<int> stones = {7729, 9053, 15983, 19111, 13857, 2557, 14204, 12284, 3830, 30278, 23182, 10810, 9240, 8332, 16124, 29300, 3360, 14740, 11203, 26560, 20633, 587, 8302, 1166, 21512, 3000, 25913, 15928, 3371, 13104, 26229, 730, 22655, 11977, 24366, 18787, 6404, 15889, 5900, 26604, 1348, 21247, 14199, 9289, 17810, 18217, 31742, 13022, 18320, 28984};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {10, 100, 5, 2, 1};
    vector<int> stones = {3, 3, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> treasure = {3, 1};
    vector<int> stones = {3, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> treasure = {10, 10, 10};
    vector<int> stones = {2, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> treasure = {4, 6};
    vector<int> stones = {1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> treasure = {1, 2, 3};
    vector<int> stones = {1, 2, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {2, 2, 2, 3};
    vector<int> stones = {1, 1, 1, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> treasure = {423, 423, 5345, 543, 123, 432, 23, 423, 423, 534, 423, 645, 312, 65, 87, 56, 5, 34, 756, 345, 645, 75, 45, 345, 5347, 567, 534, 423, 645, 765, 5345, 23, 6546, 45, 423, 4324, 5345, 23454, 534, 534, 534, 423, 4324, 234, 564, 56756, 7567, 56, 432, 423};
    vector<int> stones = {4324, 645, 7987, 876, 876, 76, 76, 43, 534, 435, 65, 67, 657, 567, 234, 234, 234, 6, 76, 456, 456, 76, 645, 423, 4, 646, 64, 5435, 5345, 1233, 6, 456, 45, 6, 78, 3123, 34, 34, 3, 4, 56, 76, 78, 45, 342, 76, 34, 76, 6645, 7};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 138697;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> treasure = {5, 5, 5};
    vector<int> stones = {3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> treasure = {1, 1, 1, 1, 1};
    vector<int> stones = {2, 2, 3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> treasure = {4, 5, 3, 10, 5, 1, 3, 6, 2, 7, 4, 8, 9, 2};
    vector<int> stones = {3, 2, 1, 1, 2, 3, 2, 1, 1, 3, 2, 3, 2, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> treasure = {5, 3, 2, 2, 4};
    vector<int> stones = {1, 1, 2, 2, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> treasure = {5, 5, 5, 5, 5, 5};
    vector<int> stones = {3, 3, 3, 2, 2, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> treasure = {3, 3, 3};
    vector<int> stones = {5, 5, 4};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {3, 5};
    vector<int> stones = {1, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> treasure = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> stones = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> stones = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {900001, 800001};
    vector<int> stones = {900001, 800001};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {15, 15, 10, 100};
    vector<int> stones = {2, 1, 1, 4};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> treasure = {456, 789, 789, 45, 64, 567, 89, 789, 78, 9, 789, 78, 9, 78, 9, 78, 123, 48, 678, 6, 789, 789, 78, 9, 78, 978, 6, 7, 869, 78, 69, 32, 789, 789, 789, 78, 9, 789, 78, 9, 789, 78, 7, 456, 100000, 100001, 789, 456, 78, 789};
    vector<int> stones = {56, 54, 48, 798, 7, 89, 789, 78, 45, 3, 45, 56, 45, 6, 78, 9, 7, 345, 3, 4, 789, 4563, 789, 456, 4523, 4, 56, 78, 69, 78, 9, 789, 78, 9, 78, 97, 8, 978, 9, 75, 786, 3462, 1435, 687, 8907, 68475, 675, 8765, 87, 6875};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {104300, 107600, 4334, 10000, 100, 104320, 103200, 1000, 103320, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> stones = {1, 1, 1, 1, 1, 1, 2, 1, 1, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 97531, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 41326100;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> treasure = {9, 5, 6, 5, 8};
    vector<int> stones = {1, 1, 5, 5, 5};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> treasure = {2, 3, 4, 5};
    vector<int> stones = {1, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> treasure = {1, 2, 3};
    vector<int> stones = {3, 1, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> treasure = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> stones = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> treasure = {7, 7, 7, 7};
    vector<int> stones = {3, 3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {15, 14, 13, 12, 11, 154, 35, 365, 34, 565, 6745, 345, 65, 34, 65, 35, 345, 675, 345, 435, 6, 45, 865, 56, 68, 265, 4875, 546, 87, 345, 67, 345, 46, 67, 456, 3456, 47, 456, 67, 45, 67, 45, 67, 45, 76, 45, 76, 367, 45};
    vector<int> stones = {1, 1, 1, 1, 1, 82, 62, 98, 100, 1500, 7216, 544, 542, 954, 85732, 76, 74, 72, 111, 33, 55, 77, 99, 121, 513, 747, 767, 757, 747, 7377, 73487, 4983, 765, 987, 543, 765, 765, 321, 54321, 87, 65, 45, 43, 23, 21, 67, 69, 65, 63};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> treasure = {5, 6};
    vector<int> stones = {1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> treasure = {1, 1};
    vector<int> stones = {1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {10, 10, 10};
    vector<int> stones = {3, 3, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {10, 7, 5, 100, 100};
    vector<int> stones = {3, 1, 1, 1, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> treasure = {1, 2, 3, 4, 5, 6};
    vector<int> stones = {1, 1, 1, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> treasure = {5, 4, 3, 2};
    vector<int> stones = {1, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> treasure = {1000000, 1000000, 1000000, 1000000, 1000000, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997};
    vector<int> stones = {999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999997, 999996};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 49999865;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> treasure = {2, 2};
    vector<int> stones = {3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {1, 2, 4};
    vector<int> stones = {1, 1, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> treasure = {1, 1, 1, 1};
    vector<int> stones = {3, 3, 3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {10, 1};
    vector<int> stones = {3, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> treasure = {16, 19, 98, 50};
    vector<int> stones = {10, 3, 5, 4};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {1, 1, 1, 1, 1, 1, 10};
    vector<int> stones = {1, 1, 1, 1, 1, 1, 2};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> treasure = {2, 3};
    vector<int> stones = {3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {3, 1};
    vector<int> stones = {3, 3};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    vector<int> treasure = {1, 2, 4};
    vector<int> stones = {3, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> treasure = {10, 10, 10, 5, 4, 3, 2};
    vector<int> stones = {5, 5, 5, 1, 1, 1, 1};
    StoneGame* pObj = new StoneGame();
    clock_t start = clock();
    int result = pObj->getScore(treasure, stones);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=10669&pm=7238
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <sstream> 
#include <iostream> 
#include <queue> 
#include <set> 
#include <map> 
 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include <ctype.h> 
 
using namespace std; 
 
#define PB push_back 
typedef long long LL; 
typedef vector <int> VI; 
typedef pair <int, int> PII; 
#define SZ(a) (int)((a).size()) 
#define ALL(a) (a).begin(), (a).end() 
#define REP(i, a) for (i = 0; i < (a); i++) 
#define REPS(i, a) REP(i, SZ(a)) 
 
class StoneGame 
{ 
public: 
  int getScore(vector <int> d, vector <int> a) 
  { 
    int i, sum = 0, ans = 0, mov = 0; 
    VI b; 
    REPS(i, d) 
      if (a[i] == 1) 
        b.PB(d[i]); 
      else 
        sum += d[i], mov += a[i] - 2; 
    sort(ALL(b)); 
    for (i = SZ(b) - 1; i >= 0; i -= 2) 
      ans += b[i]; 
    if ((mov + (SZ(b) & 1)) % 2 == 1) 
      ans += sum; 
    return ans;   
  } 
};

********************************************************************************
*******************************************************************************/