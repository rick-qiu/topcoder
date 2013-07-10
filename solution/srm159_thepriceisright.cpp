/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1784
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

class ThePriceIsRight {
public:
    vector<int> howManyReveals(vector<int> prices);
};

vector<int> ThePriceIsRight::howManyReveals(vector<int> prices) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> prices = {30, 10, 20, 40, 50};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> prices = {39, 88, 67, 5, 69, 87, 82, 64, 58, 61};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> prices = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> prices = {29, 31, 73, 70, 14, 5, 6, 34, 53, 30, 15, 86};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> prices = {100, 99, 1, 2, 3};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> prices = {10, 20, 11, 12};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> prices = {26597, 343877, 773019, 639695, 822169, 92976, 63947, 335012, 887670, 499927, 175191, 874410, 181985, 64698, 710890, 659379, 21496, 526456, 850172, 528781, 773480, 457447, 229212, 142181, 627959, 916500, 723043, 198821, 352554, 845298, 684531, 972740, 560924, 118077, 589495, 262686, 432525, 414230, 709852, 4919, 9980, 373313, 390732, 477630, 170002};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> prices = {742884, 237645, 114856, 145035, 78268, 673216, 763513, 501158, 214612, 331153, 735177, 509732, 853789, 982180, 712549, 92956, 599238, 725329, 848206, 145788, 819234, 300361, 534670, 459639, 485687, 176577, 297237, 795906, 322242, 917107, 788349, 585442, 80794, 779611, 863289, 332610, 532141, 507554, 499179, 436352, 804368};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 44};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> prices = {882758, 805748, 31612, 928187, 337135, 343821, 886260, 817902, 883689, 100896, 459199, 507098, 142520, 657587, 125599, 197312, 963317, 87565, 487819, 770332, 648263, 671497, 222362, 617367, 879535, 386129, 674427, 795742, 496226, 76255, 341426, 311972, 78951, 132359, 965988, 635747, 895169, 442989, 819252, 386246};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 15};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> prices = {368500, 896923, 500411, 518039, 491544, 173371};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> prices = {313040, 939766, 763170, 642238};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> prices = {1000};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> prices = {147419, 824824, 120330, 252292, 25183, 308033, 134100, 538473, 641234, 193697, 224440, 958597, 681668, 704960, 981688, 732025, 154657, 77940, 744589, 609339, 30269, 872421, 261918, 273784};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> prices = {475587, 846077, 875963, 963451, 406027, 228672, 329019, 704119, 260563, 539968, 742499, 502356, 663057, 577293, 905348, 150395, 372225, 801872, 41914, 182923, 784549, 309244, 159632, 116225, 428786, 355325, 182960, 99791, 690102, 888327, 725440, 126420, 924790, 936200, 790166, 486884, 330556, 629873, 908731};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 70};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> prices = {422782, 104533, 229634, 963577, 733702, 514313, 849427, 63184, 399347, 920186, 243292, 825364, 628173, 866531, 996517, 42400, 655649, 48740, 164272, 7925, 680687, 592406, 494359, 819135, 452653, 114040, 436043, 603499, 631777, 913949, 327828, 622619, 781165, 363780, 407994, 58471, 865184};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 37};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> prices = {323973, 170993, 426862, 964550, 630077, 431080, 196056, 495019, 357839, 179292, 740452, 492743, 119216, 338149, 913120, 953961, 360100, 714655, 273141, 437727, 320091, 469751, 359973, 930355, 974177, 402669, 687541, 783699, 732990, 800712, 590652, 103270, 960478, 738760, 604191, 986611, 431362, 877859, 884643, 568013};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 25};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> prices = {8523, 293845, 912585, 941744, 811919, 156483, 420815, 362970, 570914, 375674, 554229, 208696, 852972, 545107, 373366, 686089, 508199, 931545, 591239, 617434, 678372, 718100, 588597, 296196, 896567, 696543, 111716, 296777, 772038, 676018, 179129, 87846, 201321, 235869, 60594};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 27};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> prices = {2, 1, 4, 3, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19, 22, 21, 24, 23, 26, 25, 28, 27, 30, 29, 32, 31, 34, 33, 36, 35, 38, 37, 40, 39, 42, 41, 44, 43, 46, 45, 48, 47, 50, 49};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 33554432};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> prices = {3, 2, 1, 6, 5, 4, 9, 8, 7, 12, 11, 10, 15, 14, 13, 18, 17, 16, 21, 20, 19, 24, 23, 22, 27, 26, 25, 30, 29, 28, 33, 32, 31, 36, 35, 34, 39, 38, 37, 42, 41, 40, 45, 44, 43, 48, 47, 46, 50, 49};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 86093442};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> prices = {48198, 39829, 955696, 449976, 240927, 172213, 127055, 190066, 401694, 807115, 3407, 18972, 521202, 533809, 282627, 342492, 879131, 90286, 71705, 860569, 446467, 16113, 688087, 577196};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 24};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> prices = {73381, 431697, 665536, 719380, 577997, 403706, 942295, 83106, 171241, 656160, 46250, 833768};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> prices = {570789, 412862, 140477, 818162, 385868, 790263};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> prices = {424450, 216729, 351437, 412008, 771993, 748560, 423270, 704460, 869725, 19344, 475196, 736735, 828206, 356349, 288486, 731233, 930269, 581290, 161806, 874460, 88471, 57331, 599482, 484561, 739798, 15323, 175989, 807520, 178265, 867197, 173490, 73, 432493, 891196, 148834, 112198, 58052, 756610, 802231, 43238, 633287, 844972, 391896};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> prices = {424450, 216729, 351437, 412008, 771993, 748560, 423270, 704460, 869725, 19344, 475196, 736735, 828206, 356349, 288486, 731233, 930269, 581290, 161806, 874460, 88471, 57331, 599482, 484561, 739798, 15323, 175989, 807520, 178265, 867197, 173490, 73, 432493, 891196, 148834, 112198, 58052, 756610, 802231, 43238, 633287, 844972, 391896};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 2};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> prices = {322558, 220146, 467283, 63263, 602258, 401527, 878088, 983471, 132670, 802560, 857021, 843591, 802676, 811039, 471429, 5664, 174512, 8185, 892164, 87269, 912227, 950224, 737652, 853481, 290191, 269214};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 2};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> prices = {425474, 546931, 589124, 917723, 11230, 674787, 898675, 863054, 587480, 217318, 574206};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> prices = {91849, 784082, 203856, 543009, 720342, 286358, 728568, 247087, 867674, 347582, 185985, 280624, 96577, 948700, 520024, 687373, 277112, 131354, 501925, 334962, 698136, 500744, 797863, 523340, 520470, 345215, 613674, 625194, 414926, 421073, 149039, 918631, 608254, 838792, 301458, 113268, 846191, 30781, 674606, 67921, 975189, 481001, 966187, 851420, 943006};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 6};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> prices = {237140, 607629, 23266, 367460, 397060, 651593, 980184, 242769, 479974, 845784, 707077, 750388, 930100, 583755, 595871, 901916, 168983, 643066, 524738, 835492, 173405, 760178, 887105, 556600, 657736, 27075, 527662, 840400, 724883, 112697, 799637, 308923, 526771, 871837, 212484, 959160, 558272, 119975};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> prices = {837021, 697792, 224591, 408394, 127336, 3201, 691819, 70007, 661526, 573558, 111885, 523192, 732231, 495106, 667566, 706337};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> prices = {4249, 907014, 761312, 662773, 520744, 635575, 672823, 266155};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 1000000, 35, 36, 37, 38, 39, 40, 35434, 35321, 7575, 4545, 25677, 70999, 3422, 11111, 22222};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 5};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> prices = {39, 88, 67, 5, 69, 87, 82, 64, 58, 61};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> prices = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 76, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> prices = {1, 45, 2, 44, 3, 43, 4, 42, 5, 41, 6, 40, 7, 39, 8, 38, 9, 37, 10, 36, 11, 35, 12, 34, 13, 33, 14, 32, 100, 200, 300, 400, 500, 600, 700, 900, 10000, 2000, 601, 602};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> prices = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 50};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> prices = {29, 31, 73, 70, 14, 5, 6, 34, 53, 30, 15, 86};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> prices = {1, 2};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> prices = {2, 1, 4, 3, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19, 22, 21, 24, 23, 26, 25, 28, 27, 30, 29, 32, 31, 34, 33, 36, 35, 38, 37, 40, 39, 42, 41, 44, 43, 46, 45, 48, 47, 50, 49};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 33554432};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> prices = {100, 98, 96, 97, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 80, 81, 79, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> prices = {3, 2, 1, 6, 5, 4, 9, 8, 7, 12, 11, 10, 15, 14, 13, 18, 17, 16, 21, 20, 19, 24, 23, 22, 27, 26, 25, 30, 29, 28, 33, 32, 31, 36, 35, 34, 39, 38, 37, 42, 41, 40, 45, 44, 43, 48, 47, 46, 50, 49};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 86093442};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> prices = {2, 1, 4, 3, 5};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> prices = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 25};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> prices = {1, 2, 3, 50, 4, 5, 6, 7, 89, 8, 9, 10, 11, 12, 13, 15, 500, 501, 535, 75, 76, 802, 803, 804, 805, 806, 807, 808, 809, 8010, 212, 213, 214, 208, 205, 206, 235, 10024, 1025, 1026, 1027, 1035, 1034, 1033, 1032, 1031, 1030, 900};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 6};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> prices = {1, 10, 9, 8, 7, 6, 20, 19, 18, 17, 16, 30, 29, 28, 27, 26, 40, 39, 38, 37, 36, 50, 49, 48, 47, 46, 60, 100, 99, 98, 97, 96, 120, 119, 118, 117, 300};
    ThePriceIsRight* pObj = new ThePriceIsRight();
    clock_t start = clock();
    vector<int> result = pObj->howManyReveals(prices);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 62500};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4600&pm=1784
********************************************************************************
/*
 * I make it this hard to understand on purpose, yo.
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue>
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define vout(x) cout << #x << ": {"; for (int blob = 0; blob < x.size(); blob++) {cout << x[blob]; if (blob!=x.size() -1) cout << ", ";} cout << "}" << endl
#define len length()
#define si size()
#define loop(A,B) for (A = 0; A < B; A++)
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vvb vector<vector<bool> >
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) {
    if (i) os << ", ";
    os << temp[i];
  }
  os << "}";
  return os;
}
int gcd(int a, int b) {if (a==0 || b==0) return max(a,b); if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
 
//----------------------------
 
class ThePriceIsRight {
  public:
  vector <int> howManyReveals(vector <int> a) {
    vi Q(a.si,0), N(a.si, 0);
    for (int i = 0; i < a.si; i++) {
      int sofar = 0, bestlen = 0;
      for (int j = 0; j < i; j++) {
        if (a[j] < a[i]) {
          if (Q[j] == bestlen - 1) {
            N[i] += N[j];
          }
          else if (Q[j] >= bestlen) {
            N[i] = N[j];
            bestlen = Q[j] + 1;
          }
        }
      }
      if (bestlen == 0) {
        Q[i] = 1; 
        N[i] = 1;
      }
      else {
        Q[i] = bestlen;
      }
    }
    int c = 0;
    vi ret;
    for (int i = 0; i < Q.si; i++) c >?= Q[i];
    ret.push_back(c);
    int r = 0;
    for (int i = 0; i < Q.si; i++) {
      if (Q[i] == c) r += N[i];
    }
    ret.push_back(r);
    return ret;
  }
};

********************************************************************************
*******************************************************************************/