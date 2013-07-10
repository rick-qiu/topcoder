/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12524
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

class PrimalUnlicensedCreatures {
public:
    int maxWins(int initialLevel, vector<int> grezPower);
};

int PrimalUnlicensedCreatures::maxWins(int initialLevel, vector<int> grezPower) {
    int ret;
    return ret;
}


int test0() {
    int initialLevel = 31;
    vector<int> grezPower = {10, 20, 30};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int initialLevel = 20;
    vector<int> grezPower = {24, 5, 6, 38};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int initialLevel = 20;
    vector<int> grezPower = {3, 3, 3, 3, 3, 1, 25};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int initialLevel = 4;
    vector<int> grezPower = {3, 13, 6, 4, 9};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int initialLevel = 7;
    vector<int> grezPower = {7, 8, 9, 10};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 713;
    vector<int> grezPower = {794, 857, 149, 857, 663, 49};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int initialLevel = 423;
    vector<int> grezPower = {351, 891, 95, 526, 387, 756, 717, 415, 904, 541, 543, 77, 456, 912, 822, 70, 167, 542, 337, 38, 876, 463, 765, 550, 614, 580, 753, 80};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int initialLevel = 32;
    vector<int> grezPower = {127, 818, 146, 275, 340, 651, 647, 105, 211, 863, 6, 613, 182, 833, 127, 145, 184, 402, 786, 740, 82, 674, 309, 872, 108, 197};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 112;
    vector<int> grezPower = {621, 268, 33, 874, 107, 876, 388, 595, 386, 342, 471, 488, 75, 437, 53, 461, 21, 323, 941, 863, 77, 903, 550, 272, 991, 219, 118};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int initialLevel = 653;
    vector<int> grezPower = {856, 647, 67, 375, 507, 57, 175, 577, 922, 550, 389, 995, 874, 738, 820, 961, 492, 88, 818, 269, 601, 170, 543, 508, 174, 875, 37, 290, 670, 82, 110, 593, 351, 514, 619, 205, 544, 637, 989, 261, 677, 100, 579};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int initialLevel = 837;
    vector<int> grezPower = {303, 853, 78, 768, 546, 385, 780, 100, 455, 585, 143, 792, 372, 557, 360, 849, 255, 304, 3, 835, 546, 646, 59, 811, 69, 8, 499, 966, 473, 423, 397, 147, 232, 929, 927, 209, 760, 192, 74, 569, 316, 926};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int initialLevel = 498;
    vector<int> grezPower = {511, 664, 108, 16, 595, 295, 170, 252, 996, 482, 217, 291, 288, 153, 414, 626, 334, 350, 639, 827, 350, 131, 837, 904, 407, 913, 732, 919, 87, 908, 79, 533, 692, 486, 935, 635, 866, 711, 454, 179, 728, 320, 851, 78, 648, 271, 435};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int initialLevel = 719;
    vector<int> grezPower = {138, 2, 40, 851, 164, 542, 585};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int initialLevel = 749;
    vector<int> grezPower = {82, 329, 918, 625, 432, 433, 992};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int initialLevel = 683;
    vector<int> grezPower = {295, 309, 111, 475, 273, 314, 509, 460, 356, 159, 922, 933, 735, 521};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int initialLevel = 289;
    vector<int> grezPower = {576, 49, 225, 196, 256, 625, 676, 100, 324, 100, 169, 961, 4, 784, 121, 289, 49, 25, 9, 225, 100, 25, 400, 4, 16, 361, 16, 81, 196, 25, 1, 16, 64, 361, 81, 49, 324, 729, 441, 81, 676, 16, 361, 900, 100, 81, 729, 196, 81};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int initialLevel = 256;
    vector<int> grezPower = {289, 1, 625, 841, 64, 25, 841, 484, 49, 289, 169, 576, 400, 484, 900, 841, 225, 169, 900, 484, 961};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int initialLevel = 529;
    vector<int> grezPower = {16, 81, 841, 144, 676, 4, 400, 400, 841, 289, 289, 441, 4, 1, 361, 144, 529, 625, 256, 121, 225, 64, 49, 576, 256, 324, 729, 169, 64};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int initialLevel = 4;
    vector<int> grezPower = {576, 625, 49, 256, 441, 324, 625, 961, 225, 729, 9, 25, 9, 169, 441, 4, 25, 289, 196, 576, 36, 361, 169, 64, 441, 900, 100, 169, 81, 144, 9, 256, 784, 729, 16, 625, 784, 81, 121, 49, 729, 121, 841, 484, 144, 4};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 16;
    vector<int> grezPower = {900, 64, 121, 841, 121, 676, 676};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 121;
    vector<int> grezPower = {36, 729, 625, 64, 900, 625, 1, 100};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int initialLevel = 625;
    vector<int> grezPower = {81, 144, 361, 361, 4, 961, 1, 169, 484, 16, 64, 25, 36, 841, 9, 169, 49, 225, 676, 64, 784, 729, 225, 196, 324, 441, 324, 784, 576, 64, 25, 225, 961, 64, 9, 100, 324, 225, 25, 676, 9, 169, 169};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int initialLevel = 1;
    vector<int> grezPower = {81, 121, 576, 144, 121, 64, 256, 576, 169, 400, 625, 900, 576, 25, 144};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int initialLevel = 289;
    vector<int> grezPower = {4, 400, 256, 576, 900, 729, 324, 4, 841, 289, 121, 529, 529, 256, 36, 100};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int initialLevel = 49;
    vector<int> grezPower = {361, 324, 64, 64, 225, 361, 4, 4, 25, 256, 400, 324, 400, 961, 289};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 64;
    vector<int> grezPower = {343, 512, 343, 27, 27, 27, 64, 512, 343, 343, 1};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int initialLevel = 1;
    vector<int> grezPower = {64, 512, 8, 729, 343, 216, 27, 216, 1, 729, 27, 729, 343, 216, 512};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 64;
    vector<int> grezPower = {216, 343, 343, 125, 64, 64, 64, 27, 729, 8, 216, 729, 512, 512, 512, 125, 1, 1, 729, 125, 64, 216, 27, 8, 343, 64, 729, 729, 64, 64, 343, 216, 27};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int initialLevel = 125;
    vector<int> grezPower = {27, 343, 27, 27, 125, 343, 8, 125, 27, 729, 729, 27};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int initialLevel = 216;
    vector<int> grezPower = {729, 27, 125, 8, 216, 1, 8, 8, 8, 27, 64, 512, 729, 1, 343, 1, 125, 343, 343, 343, 512, 27, 8, 8, 27, 729, 216, 512, 216, 729, 27, 64, 1, 27, 8, 1, 125, 64, 216, 216, 512, 27, 125, 512, 64, 125};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int initialLevel = 729;
    vector<int> grezPower = {27, 1, 8, 1, 8, 125, 512, 64, 8, 125, 125, 216, 27, 216, 1, 512, 64, 729, 343, 343, 27, 27, 729, 729, 8};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int initialLevel = 64;
    vector<int> grezPower = {125, 27, 64, 27, 64, 216, 343, 512, 64, 27, 64, 512, 64, 1, 27, 8};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int initialLevel = 1;
    vector<int> grezPower = {8, 729, 729, 8, 216, 64, 1, 729, 125, 64, 64, 8, 512, 216, 343, 64, 343, 729, 729, 512, 216, 64, 512, 729, 343, 1, 27, 729, 64, 343};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int initialLevel = 216;
    vector<int> grezPower = {1, 8, 216, 512, 216, 125, 1, 125, 8, 512, 64, 27, 64, 729, 64, 512, 125, 64, 125, 216, 8, 343, 27, 343};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int initialLevel = 343;
    vector<int> grezPower = {1, 512, 125, 64, 64, 1, 8, 216, 8, 1, 125, 216, 512, 1, 512};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 3;
    vector<int> grezPower = {2, 3, 4, 6, 9, 13, 19, 28, 42, 63, 94, 141, 211, 316, 474, 711};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 3;
    vector<int> grezPower = {2, 2, 4, 4, 8, 8, 16, 16, 32, 32, 64, 64, 128, 128, 256, 256, 512, 512};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int initialLevel = 3;
    vector<int> grezPower = {2, 2, 2, 5, 5, 5, 11, 11, 11, 26, 26, 26, 65, 65, 65, 161, 161, 161, 401, 401, 401};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int initialLevel = 7;
    vector<int> grezPower = {7, 8, 9, 10};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int initialLevel = 3;
    vector<int> grezPower = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int initialLevel = 500;
    vector<int> grezPower = {10, 20, 30};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int initialLevel = 3;
    vector<int> grezPower = {5, 4, 3, 2};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int initialLevel = 6;
    vector<int> grezPower = {6, 5};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int initialLevel = 4;
    vector<int> grezPower = {3, 13, 6, 4, 9};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int initialLevel = 20;
    vector<int> grezPower = {24, 5, 6, 38};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
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
    int initialLevel = 3;
    vector<int> grezPower = {3, 3};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int initialLevel = 10;
    vector<int> grezPower = {10, 10};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int initialLevel = 30;
    vector<int> grezPower = {1, 30};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int initialLevel = 2;
    vector<int> grezPower = {1, 2};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int initialLevel = 10;
    vector<int> grezPower = {999, 999, 999, 888, 899, 910, 920, 930, 940, 950, 960, 960, 777, 456, 678, 987, 654, 345, 456, 456, 2, 456};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int initialLevel = 3;
    vector<int> grezPower = {1, 1, 1, 1, 1, 1, 1, 1};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int initialLevel = 1000;
    vector<int> grezPower = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int initialLevel = 20;
    vector<int> grezPower = {37, 24, 6, 6};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int initialLevel = 1000;
    vector<int> grezPower = {999};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int initialLevel = 10;
    vector<int> grezPower = {1, 150, 400};
    PrimalUnlicensedCreatures* pObj = new PrimalUnlicensedCreatures();
    clock_t start = clock();
    int result = pObj->maxWins(initialLevel, grezPower);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23147594&rd=15499&pm=12524
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
 
using namespace std;
 
class PrimalUnlicensedCreatures {
public:
  int maxWins(int, vector <int>);
};
 
int PrimalUnlicensedCreatures::maxWins(int il, vector <int> gp) {
  
  sort(gp.begin(),gp.end());
  int c=0;
  
  for (int i=0;i<gp.size();i++)
  {
    if (il > gp[i])
    {
      c++;
      il+=gp[i]/2;
    }
    else
      break;
  }
  return c;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/