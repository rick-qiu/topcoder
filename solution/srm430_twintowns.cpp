/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10138
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

class TwinTowns {
public:
    vector<int> optimalTwinTowns(vector<int> x, vector<int> y, int maxPartners, int minDistance);
};

vector<int> TwinTowns::optimalTwinTowns(vector<int> x, vector<int> y, int maxPartners, int minDistance) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 0, 10};
    vector<int> y = {0, 10, 4};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 0, 10};
    vector<int> y = {0, 10, 4};
    int maxPartners = 1;
    int minDistance = 11;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 10, 0, 10};
    vector<int> y = {0, 0, 20, 20};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 20};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 10, 0, 10};
    vector<int> y = {0, 0, 20, 20};
    int maxPartners = 2;
    int minDistance = 10;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 60};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 10;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 140};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 6;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 40};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {899, 2, 726, 102, 721, 243, 650, 40, 707, 487};
    vector<int> y = {397, 498, 773, 605, 225, 263, 151, 533, 205, 6};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5475};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {179, 982, 665, 729, 194, 113, 249, 751, 701, 527};
    vector<int> y = {687, 520, 168, 226, 303, 616, 752, 748, 800, 24};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5592};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {393, 870, 110, 541, 444, 689, 689, 70, 264, 104};
    vector<int> y = {111, 368, 608, 34, 59, 193, 810, 428, 233, 609};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5485};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {99, 468, 199, 573, 124, 634, 467, 152, 252, 870};
    vector<int> y = {605, 972, 698, 928, 619, 867, 975, 661, 749, 626};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 3526};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {416, 515, 417, 57, 259, 53, 596, 46, 935, 568};
    vector<int> y = {86, 12, 81, 437, 756, 554, 899, 544, 571, 939};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5975};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {593, 488, 132, 903, 885, 126, 832, 438, 992, 732};
    vector<int> y = {902, 988, 631, 594, 620, 375, 662, 944, 493, 239};
    int maxPartners = 3;
    int minDistance = 76;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5859};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {841, 70, 747, 238, 336, 374, 594, 661, 168, 975};
    vector<int> y = {342, 574, 247, 265, 829, 126, 898, 160, 329, 525};
    int maxPartners = 3;
    int minDistance = 154;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6611};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {361, 422, 60, 353, 788, 594, 374, 634, 130, 884};
    vector<int> y = {855, 70, 560, 847, 714, 898, 880, 868, 376, 377};
    int maxPartners = 3;
    int minDistance = 106;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 7055};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {873, 793, 805, 658, 948, 483, 757, 693, 913, 513};
    vector<int> y = {623, 293, 302, 837, 449, 983, 254, 195, 581, 16};
    int maxPartners = 3;
    int minDistance = 87;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5797};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {749, 446, 190, 617, 202, 991, 429, 861, 687, 693};
    vector<int> y = {753, 52, 695, 119, 702, 505, 72, 361, 815, 812};
    int maxPartners = 3;
    int minDistance = 187;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 8953};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {617, 430, 651, 458, 33, 350, 260, 902, 350, 463};
    vector<int> y = {887, 928, 846, 961, 466, 857, 237, 598, 142, 32};
    int maxPartners = 3;
    int minDistance = 10;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5690};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {851, 33, 108, 369, 127, 778, 434, 88, 873, 246};
    vector<int> y = {646, 532, 395, 134, 364, 276, 72, 592, 628, 249};
    int maxPartners = 3;
    int minDistance = 649;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 12205};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {0, 492, 660, 814, 256, 886, 901, 661, 199, 983};
    vector<int> y = {498, 993, 157, 315, 750, 379, 399, 831, 700, 519};
    int maxPartners = 3;
    int minDistance = 678;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 12607};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {351, 731, 327, 784, 836, 483, 929, 842, 570, 195};
    vector<int> y = {141, 772, 826, 708, 663, 20, 434, 664, 932, 693};
    int maxPartners = 3;
    int minDistance = 537;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 10888};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {514, 910, 679, 279, 510, 867, 271, 630, 205, 604};
    vector<int> y = {978, 417, 815, 218, 15, 633, 772, 872, 706, 893};
    int maxPartners = 3;
    int minDistance = 454;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 10000};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {912, 622, 569, 772, 656, 35, 502, 932, 581, 722};
    vector<int> y = {391, 402, 974, 705, 202, 839, 456, 338, 78, 357};
    int maxPartners = 3;
    int minDistance = 129;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6637};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {925, 142, 397, 98, 698, 143, 509, 347, 7, 828};
    vector<int> y = {913, 900, 378, 542, 196, 88, 546, 482, 51, 209};
    int maxPartners = 3;
    int minDistance = 194;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 9113};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {666, 233, 739, 56, 862, 75, 246, 170, 763, 11};
    vector<int> y = {401, 288, 815, 460, 414, 774, 975, 624, 402, 649};
    int maxPartners = 3;
    int minDistance = 115;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6673};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {100, 472, 640, 189, 689, 824, 199, 519, 858, 565};
    vector<int> y = {157, 137, 479, 467, 967, 780, 802, 704, 669, 962};
    int maxPartners = 3;
    int minDistance = 900;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8228};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {339, 98, 212, 292, 200, 14, 1000, 687, 340, 857};
    vector<int> y = {899, 199, 861, 224, 528, 357, 151, 478, 845, 997};
    int maxPartners = 3;
    int minDistance = 538;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 10876};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {840, 888, 139, 782, 376, 106, 161, 944, 267, 335};
    vector<int> y = {654, 729, 430, 188, 753, 6, 685, 155, 1, 502};
    int maxPartners = 2;
    int minDistance = 876;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9597};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {89, 269, 914, 961, 768, 365, 592, 250, 566, 87};
    vector<int> y = {240, 492, 286, 836, 14, 421, 94, 21, 438, 9};
    int maxPartners = 2;
    int minDistance = 737;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6149};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {784, 610, 16, 418, 68, 130, 935, 912, 273, 678};
    vector<int> y = {861, 417, 877, 351, 666, 999, 313, 911, 437, 287};
    int maxPartners = 2;
    int minDistance = 892;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9306};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {98, 587, 590, 477, 852, 151, 321, 419, 677, 957};
    vector<int> y = {569, 349, 843, 367, 712, 713, 568, 197, 770, 32};
    int maxPartners = 2;
    int minDistance = 170;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 4080};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {955, 213, 567, 994, 154, 32, 763, 3, 549, 147};
    vector<int> y = {967, 867, 176, 935, 486, 723, 71, 606, 370, 951};
    int maxPartners = 2;
    int minDistance = 451;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 7724};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {62, 284, 44, 206, 288, 263, 675, 854, 202, 745};
    vector<int> y = {53, 574, 959, 981, 925, 329, 179, 284, 838, 467};
    int maxPartners = 1;
    int minDistance = 900;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4316};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {229, 160, 799, 20, 687, 441, 10, 474, 220, 947};
    vector<int> y = {359, 641, 574, 689, 727, 740, 14, 969, 144, 835};
    int maxPartners = 1;
    int minDistance = 1498;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1758};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {275, 276, 794, 656, 945, 148, 81, 792, 499, 31};
    vector<int> y = {509, 128, 478, 228, 921, 303, 789, 655, 170, 225};
    int maxPartners = 1;
    int minDistance = 1138;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2388};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {771, 316, 894, 78, 61, 805, 451, 745, 278, 564};
    vector<int> y = {235, 935, 227, 840, 175, 261, 623, 930, 973, 199};
    int maxPartners = 1;
    int minDistance = 1477;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {558, 599, 935, 520, 13, 427, 828, 523, 821, 497};
    vector<int> y = {280, 349, 789, 967, 822, 940, 52, 745, 53, 997};
    int maxPartners = 1;
    int minDistance = 150;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2419};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {585, 144, 0, 330, 0, 0, 0, 279, 0, 1000};
    vector<int> y = {1000, 1000, 69, 0, 328, 529, 955, 1000, 861, 857};
    int maxPartners = 3;
    int minDistance = 458;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 11333};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {601, 0, 1000, 0, 306, 1000, 1000, 774, 762, 215};
    vector<int> y = {1000, 89, 30, 802, 1000, 357, 674, 1000, 0, 0};
    int maxPartners = 3;
    int minDistance = 895;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 16606};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {0, 760, 1000, 1000, 969, 0, 0, 650, 424, 356};
    vector<int> y = {132, 1000, 785, 504, 0, 933, 197, 0, 0, 0};
    int maxPartners = 3;
    int minDistance = 1101;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 17903};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {0, 1000, 1000, 821, 504, 0, 1000, 773, 467, 375};
    vector<int> y = {60, 212, 134, 1000, 1000, 172, 406, 0, 0, 1000};
    int maxPartners = 3;
    int minDistance = 967;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 17630};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {995, 0, 131, 1000, 0, 0, 749, 0, 0, 0};
    vector<int> y = {0, 349, 1000, 67, 727, 238, 0, 489, 273, 917};
    int maxPartners = 3;
    int minDistance = 1172;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 12087};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {630, 0, 1000, 0};
    vector<int> y = {1000, 30, 500, 693};
    int maxPartners = 3;
    int minDistance = 481;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6733};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {271, 0, 0, 1000, 1000, 1000, 0};
    vector<int> y = {0, 93, 571, 579, 694, 663, 408};
    int maxPartners = 3;
    int minDistance = 482;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 12127};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {418, 1000, 1000, 403, 1000, 1000, 0, 381, 335};
    vector<int> y = {0, 134, 348, 1000, 946, 789, 512, 1000, 1000};
    int maxPartners = 3;
    int minDistance = 161;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 9427};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {560, 590, 1000, 0, 577, 0, 0, 0, 0, 0};
    vector<int> y = {0, 1000, 522, 625, 0, 616, 896, 928, 203, 312};
    int maxPartners = 3;
    int minDistance = 397;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 12805};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {1000, 1000, 290, 23, 0, 842, 216, 0, 0};
    vector<int> y = {477, 351, 1000, 0, 972, 1000, 0, 194, 293};
    int maxPartners = 3;
    int minDistance = 125;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 6819};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {500};
    vector<int> y = {500};
    int maxPartners = 3;
    int minDistance = 27;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {5};
    vector<int> y = {0};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {10, 20};
    vector<int> y = {10, 25};
    int maxPartners = 2;
    int minDistance = 25;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 25};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {10, 20};
    vector<int> y = {10, 25};
    int maxPartners = 3;
    int minDistance = 26;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {5};
    vector<int> y = {7};
    int maxPartners = 3;
    int minDistance = 2;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {0, 500, 1000, 0, 0, 1000, 1000, 333, 667};
    vector<int> y = {0, 0, 0, 500, 1000, 500, 1000, 1000, 1000};
    int maxPartners = 3;
    int minDistance = 334;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 8334};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {0, 400, 800, 1000, 1000, 1000, 600, 200, 0, 0};
    vector<int> y = {0, 0, 0, 200, 600, 1000, 1000, 1000, 800, 400};
    int maxPartners = 3;
    int minDistance = 401;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 14000};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {0, 400, 800, 1000, 1000, 1000, 600, 200, 0, 0};
    vector<int> y = {0, 0, 0, 200, 600, 1000, 1000, 1000, 800, 400};
    int maxPartners = 3;
    int minDistance = 400;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 8400};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {0, 400, 800, 1000, 1000, 1000, 600, 200, 0, 0};
    vector<int> y = {0, 0, 0, 200, 600, 1000, 1000, 1000, 800, 400};
    int maxPartners = 3;
    int minDistance = 800;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 14000};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {0, 400, 800, 1000, 1000, 1000, 600, 200, 0, 0};
    vector<int> y = {0, 0, 0, 200, 600, 1000, 1000, 1000, 800, 400};
    int maxPartners = 3;
    int minDistance = 801;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 18800};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {0, 0, 1000, 1000};
    vector<int> y = {0, 1000, 0, 1000};
    int maxPartners = 3;
    int minDistance = 2000;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4000};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {0, 1000, 0, 400, 775, 1000, 382, 214, 1000, 0};
    vector<int> y = {170, 211, 84, 0, 0, 288, 0, 0, 303, 200};
    int maxPartners = 3;
    int minDistance = 238;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 9927};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {1000, 725, 805, 1000, 0, 571, 952, 0, 1000, 0};
    vector<int> y = {546, 0, 1000, 600, 395, 0, 1000, 655, 285, 708};
    int maxPartners = 2;
    int minDistance = 163;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6524};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {38, 1000, 1000, 944, 262, 0, 316, 1000, 94, 0};
    vector<int> y = {0, 327, 307, 0, 0, 52, 0, 336, 0, 442};
    int maxPartners = 1;
    int minDistance = 173;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3190};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {0, 1000, 0, 852, 1000, 1000, 1000, 313, 419, 0};
    vector<int> y = {11, 191, 408, 0, 205, 534, 653, 1000, 0, 236};
    int maxPartners = 3;
    int minDistance = 225;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 8506};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {1000, 0, 1000, 0, 987, 517, 97, 560, 725, 1000};
    vector<int> y = {768, 367, 63, 529, 1000, 1000, 1000, 0, 0, 469};
    int maxPartners = 2;
    int minDistance = 440;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 7160};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {476, 0, 1000, 0, 186, 751, 1000, 957, 763, 748};
    vector<int> y = {1000, 376, 57, 299, 1000, 0, 920, 1000, 0, 1000};
    int maxPartners = 1;
    int minDistance = 108;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2549};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {847, 702, 230, 837, 125, 655, 481, 927, 67, 259};
    vector<int> y = {653, 202, 270, 663, 625, 845, 19, 573, 433, 241};
    int maxPartners = 3;
    int minDistance = 781;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 13682};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {622, 676, 201, 364, 863, 518, 111, 816, 250, 843};
    vector<int> y = {122, 176, 701, 864, 637, 982, 611, 684, 250, 343};
    int maxPartners = 2;
    int minDistance = 425;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6148};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {68, 39, 612, 252, 37, 981, 277, 461, 641, 837};
    vector<int> y = {568, 461, 112, 248, 537, 519, 777, 961, 859, 337};
    int maxPartners = 1;
    int minDistance = 114;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1720};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {793, 394, 282, 966, 71, 238, 15, 877, 130, 293};
    vector<int> y = {707, 894, 218, 466, 429, 262, 515, 623, 630, 207};
    int maxPartners = 3;
    int minDistance = 121;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 7398};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {4, 602, 180, 362, 81, 682, 481, 748, 381, 678};
    vector<int> y = {504, 898, 320, 862, 419, 182, 19, 248, 881, 178};
    int maxPartners = 2;
    int minDistance = 500;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 7942};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {131, 29, 356, 782, 446, 588, 393, 292, 827, 143};
    vector<int> y = {631, 529, 144, 718, 54, 912, 107, 208, 327, 643};
    int maxPartners = 1;
    int minDistance = 357;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3124};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {349, 709, 236, 996, 332, 320, 946, 702, 528};
    vector<int> y = {849, 791, 736, 504, 832, 820, 446, 202, 28};
    int maxPartners = 1;
    int minDistance = 134;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1926};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {163, 592, 832, 918, 844};
    vector<int> y = {337, 908, 668, 582, 656};
    int maxPartners = 3;
    int minDistance = 403;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 4636};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {831, 371, 316, 564, 402};
    vector<int> y = {669, 129, 816, 936, 98};
    int maxPartners = 2;
    int minDistance = 554;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4404};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {978, 662, 932, 628, 931, 460, 543};
    vector<int> y = {522, 838, 568, 128, 569, 40, 43};
    int maxPartners = 1;
    int minDistance = 586;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2290};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {921, 520, 974, 408, 256, 958, 450, 184, 747};
    vector<int> y = {421, 980, 526, 92, 244, 542, 50, 316, 753};
    int maxPartners = 3;
    int minDistance = 214;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 8312};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {237, 655, 963, 356, 567, 486, 180};
    vector<int> y = {263, 155, 463, 144, 67, 14, 320};
    int maxPartners = 2;
    int minDistance = 383;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3684};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {966, 435, 321, 864, 668, 227, 492, 740, 901};
    vector<int> y = {534, 65, 821, 364, 168, 273, 992, 760, 401};
    int maxPartners = 1;
    int minDistance = 369;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2220};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 6;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 40};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 20};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {303, 300, 600, 901, 0, 300, 600, 900, 0, 0};
    vector<int> y = {473, 0, 0, 0, 300, 300, 300, 300, 477, 0};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5210};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {1, 99, 123, 231, 0, 323, 123, 432, 111, 12};
    vector<int> y = {1, 919, 153, 331, 5, 353, 133, 482, 191, 32};
    int maxPartners = 3;
    int minDistance = 200;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5853};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 50};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> y = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int maxPartners = 3;
    int minDistance = 6;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 130};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 295};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {0, 0, 10};
    vector<int> y = {0, 10, 4};
    int maxPartners = 1;
    int minDistance = 11;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {0, 1, 2, 4};
    vector<int> y = {0, 3, 4, 5};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> y = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 500};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1, 9, 8, 7, 6, 5, 4, 3, 2};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 20};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {500, 60, 292, 291, 581, 861, 294, 128, 518, 923};
    vector<int> y = {109, 682, 381, 496, 19, 968, 862, 384, 671, 824};
    int maxPartners = 3;
    int minDistance = 100;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6996};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 56};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {23, 344, 234, 663, 526, 42, 243, 823, 743, 265};
    vector<int> y = {287, 32, 656, 46, 12, 836, 253, 217, 724, 865};
    int maxPartners = 3;
    int minDistance = 58;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6166};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 40};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {0, 0, 0, 1, 1, 1, 2, 2, 2, 0};
    vector<int> y = {0, 1, 2, 0, 1, 2, 0, 1, 2, 3};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 19};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {0, 0, 0, 0};
    vector<int> y = {0, 3, 5, 7};
    int maxPartners = 1;
    int minDistance = 3;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {0, 0, 27, 6, 126, 123, 110, 20, 1000};
    vector<int> y = {0, 1, 27, 6, 126, 123, 110, 20, 1000};
    int maxPartners = 3;
    int minDistance = 2;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 3969};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 2};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int maxPartners = 3;
    int minDistance = 4;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 76};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 50};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 9, 8, 7, 6, 5, 4, 3, 2};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 20};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {1, 3, 4, 6};
    vector<int> y = {0, 0, 0, 0};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 25};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {0, 0, 0, 0};
    vector<int> y = {1, 7, 8, 14};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 12};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 25};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 25};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {0, 1, 10, 11};
    vector<int> y = {0, 12, 12, 0};
    int maxPartners = 1;
    int minDistance = 10;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 26};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {0, 11, 5, 6};
    vector<int> y = {0, 0, 100, 100};
    int maxPartners = 1;
    int minDistance = 5;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 210};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {0, 10, 11, 20};
    vector<int> y = {0, 0, 0, 0};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 19};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {1, 3, 6, 7};
    vector<int> y = {1, 1, 1, 1};
    int maxPartners = 1;
    int minDistance = 2;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {629, 600, 240, 208, 481, 719, 90, 304, 604, 835};
    vector<int> y = {989, 772, 271, 724, 607, 995, 217, 911, 334, 92};
    int maxPartners = 3;
    int minDistance = 600;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 12666};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {12, 0, 1, 234, 43, 98, 904, 745, 46, 367};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 2696};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {33, 11, 22, 41, 412, 42, 222, 112, 414, 422};
    vector<int> y = {42, 54, 67, 888, 523, 23, 55, 654, 67, 45};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 4509};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {629, 600, 240, 208, 481, 719, 90, 304, 604, 835};
    vector<int> y = {989, 772, 271, 724, 607, 995, 217, 911, 334, 92};
    int maxPartners = 3;
    int minDistance = 400;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 8984};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {0, 100, 200, 300, 400, 500, 600, 700, 800, 900};
    vector<int> y = {900, 800, 700, 600, 500, 400, 300, 200, 100, 0};
    int maxPartners = 3;
    int minDistance = 700;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 14600};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {0, 0, 0, 1, 1, 1, 2, 2, 2, 3};
    vector<int> y = {1, 2, 3, 1, 2, 3, 1, 2, 3, 2};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 18};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {901, 902, 903, 904, 905, 906, 907, 908, 909, 910};
    vector<int> y = {901, 902, 903, 904, 905, 906, 907, 908, 909, 910};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 50};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {23, 21, 90, 46, 52, 10, 66, 67, 87, 72};
    vector<int> y = {11, 22, 66, 77, 30, 42, 90, 44, 51, 50};
    int maxPartners = 3;
    int minDistance = 40;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 897};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {101, 102, 567, 324, 234, 123, 567, 1000, 890, 567};
    vector<int> y = {1, 2, 47, 58, 37, 27, 59, 39, 27, 37};
    int maxPartners = 3;
    int minDistance = 100;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 4893};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {629, 600, 240, 208, 481, 719, 90, 304, 604, 835};
    vector<int> y = {989, 772, 271, 724, 607, 995, 217, 911, 334, 92};
    int maxPartners = 3;
    int minDistance = 500;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 11678};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {1, 500, 501, 1000};
    vector<int> y = {1, 500, 501, 1000};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1996};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {0, 1, 2, 4, 5, 6, 7, 8, 9};
    vector<int> y = {0, 1, 2, 4, 5, 6, 7, 8, 9};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 44};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 25};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {18, 239, 275, 287, 261, 68, 980, 991, 567, 487};
    vector<int> y = {218, 289, 176, 589, 76, 501, 298, 999, 1000, 465};
    int maxPartners = 3;
    int minDistance = 100;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 7170};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {41, 467, 334, 500, 169, 724, 478, 358, 962, 464};
    vector<int> y = {705, 145, 281, 827, 961, 491, 995, 942, 827, 436};
    int maxPartners = 3;
    int minDistance = 100;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6107};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {629, 600, 240, 208, 481, 719, 90, 304, 604, 835};
    vector<int> y = {989, 772, 271, 724, 607, 995, 217, 911, 334, 92};
    int maxPartners = 3;
    int minDistance = 450;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 10276};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {0, 100, 200, 300, 301, 500, 600, 700, 800, 903};
    vector<int> y = {0, 100, 200, 300, 301, 500, 600, 700, 800, 901};
    int maxPartners = 3;
    int minDistance = 3;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5214};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 5};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 39};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {364, 281, 44, 558, 767, 599, 385, 108, 463, 641};
    vector<int> y = {184, 911, 325, 826, 704, 334, 871, 782, 385, 249};
    int maxPartners = 3;
    int minDistance = 265;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6799};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {0, 0, 3, 3};
    vector<int> y = {0, 5, 1, 5};
    int maxPartners = 1;
    int minDistance = 5;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 15};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {1, 20};
    vector<int> y = {1, 20};
    int maxPartners = 1;
    int minDistance = 1000;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {102, 32, 42, 31, 500, 23, 421, 321, 42, 31};
    vector<int> y = {300, 32, 432, 31, 24, 42, 31, 42, 321, 43};
    int maxPartners = 2;
    int minDistance = 20;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 3024};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    vector<int> y = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5000};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {0, 10, 0, 10};
    vector<int> y = {0, 0, 1, 20};
    int maxPartners = 2;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 60};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {1, 1, 1, 0, 2};
    vector<int> y = {1, 0, 2, 1, 1};
    int maxPartners = 2;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 200};
    vector<int> y = {345, 464, 532, 454, 234, 555, 456, 323, 444, 555};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 1611};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {561, 822, 918, 786, 879, 211, 265, 578, 881, 41};
    vector<int> y = {893, 309, 479, 319, 76, 1, 664, 557, 748, 858};
    int maxPartners = 3;
    int minDistance = 500;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 12640};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {0, 1000, 0, 1000, 0, 1000, 1, 1000, 50, 1000};
    vector<int> y = {100, 10, 0, 100, 567, 676, 656, 58, 234, 980};
    int maxPartners = 3;
    int minDistance = 3;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6134};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1000};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1000};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 5990};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {1, 0, 2, 2};
    vector<int> y = {0, 1, 1, 4};
    int maxPartners = 2;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 12};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x = {897, 802, 765, 992, 1, 521, 220, 380, 729, 969};
    vector<int> y = {184, 887, 104, 641, 909, 378, 724, 582, 387, 583};
    int maxPartners = 3;
    int minDistance = 100;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 7067};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x = {42, 468, 335, 501, 170, 725, 479, 359, 963, 465};
    vector<int> y = {706, 146, 282, 828, 962, 492, 996, 943, 828, 437};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6107};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 291};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 25};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x = {1, 2, 3, 0};
    vector<int> y = {0, 0, 0, 0};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> x = {354, 5, 14, 24, 5, 14, 34, 14, 5, 24};
    vector<int> y = {5, 14, 5, 14, 65, 24, 5, 14, 34, 24};
    int maxPartners = 3;
    int minDistance = 5;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 1267};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> x = {2, 2, 1, 3};
    vector<int> y = {6, 3, 1, 1};
    int maxPartners = 1;
    int minDistance = 3;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> x = {77, 7, 21, 78, 35, 84, 86, 64, 85, 85};
    vector<int> y = {15, 67, 62, 97, 10, 19, 12, 90, 60, 24};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 592};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> y = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 50};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> x = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> y = {20, 40, 59, 60, 20, 70, 90, 100, 50, 65};
    int maxPartners = 3;
    int minDistance = 2;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 594};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> x = {0, 0, 4, 4};
    vector<int> y = {0, 3, 1, 2};
    int maxPartners = 1;
    int minDistance = 3;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> x = {0, 0, 1, 2};
    vector<int> y = {0, 1, 0, 2};
    int maxPartners = 2;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> x = {0, 2, 2, 2, 3, 3, 3, 5};
    vector<int> y = {2, 0, 2, 4, 0, 2, 4, 2};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 30};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> x = {10, 10, 12, 12};
    vector<int> y = {10, 12, 10, 7};
    int maxPartners = 1;
    int minDistance = 3;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 9};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> x = {10, 20, 30, 40, 50, 60, 70, 80, 90, 78};
    vector<int> y = {10, 20, 30, 40, 40, 40, 56, 60, 70, 90};
    int maxPartners = 3;
    int minDistance = 5;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 444};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> x = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 25};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> x = {0, 10, 0, 1000};
    vector<int> y = {0, 0, 10, 1000};
    int maxPartners = 2;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4000};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> x = {123, 300, 507, 999, 111, 222, 346, 786, 5, 786};
    vector<int> y = {666, 777, 888, 999, 222, 122, 675, 433, 211, 344};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 6578};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> x = {1, 2};
    vector<int> y = {0, 0};
    int maxPartners = 3;
    int minDistance = 100;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 111};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 328};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 1, 2};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 8};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> x = {1, 1, 1, 1};
    vector<int> y = {1, 3, 4, 6};
    int maxPartners = 1;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> x = {515, 882, 234, 284, 891, 534, 696, 773, 14, 180};
    vector<int> y = {963, 182, 727, 475, 250, 860, 235, 422, 193, 721};
    int maxPartners = 1;
    int minDistance = 185;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2091};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> x = {1, 1};
    vector<int> y = {1, 2};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> x = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    vector<int> y = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 100};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> x = {10, 15, 12, 20, 48, 28, 22, 21, 29, 299};
    vector<int> y = {120, 145, 112, 202, 484, 228, 232, 121, 29, 3};
    int maxPartners = 3;
    int minDistance = 1;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 2340};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> x = {0, 10, 0, 10};
    vector<int> y = {0, 0, 20, 20};
    int maxPartners = 2;
    int minDistance = 10;
    TwinTowns* pObj = new TwinTowns();
    clock_t start = clock();
    vector<int> result = pObj->optimalTwinTowns(x, y, maxPartners, minDistance);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 60};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=13521&pm=10138
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <queue> 
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cassert> 
#include <numeric> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <ctime> 
using namespace std; 
 
typedef vector<int> vi; 
 
#define For(i,a,b) for (int i(a),_b(b); i <= _b; ++i) 
#define Ford(i,a,b) for (int i(a),_b(b); i >= _b; --i) 
#define Rep(i,n) for (int i(0),_n(n); i < _n; ++i) 
#define Repd(i,n) for (int i((n)-1); i >= 0; --i) 
#define MP(x, y) make_pair((x), (y)) 
 
template<typename T> inline int Size(const T& c) { return (int)c.size(); } 
 
typedef pair<int,int> pii; 
 
int n; 
bool a[10][10]; 
int d[10][10]; 
map<int,pii> memo; 
int b[10]; 
 
pii rec(int i) { 
  if (i == n) return MP(0, 0); 
  int state = 0; 
  For(j, i, n-1) 
    state = state*4+b[j]; 
  state = state*n+i; 
  if (memo.count(state)) return memo[state]; 
  pii res = rec(i+1); 
  if (b[i] >= 1) { 
    For(j, i+1, n-1) { 
      if (a[i][j] && b[j] >= 1) { 
        --b[i]; --b[j]; 
        pii cur = rec(i+1); 
        cur.first += 1; 
        cur.second += d[i][j]; 
        if (cur.first > res.first || cur.first == res.first && cur.second < res.second) res = cur; 
        ++b[i]; ++b[j]; 
      } 
    } 
    if (b[i] >= 2) { 
      For(j1, i+1, n-1) if (a[i][j1] && b[j1] >= 1) { 
        --b[i]; --b[j1]; 
        For(j2, j1+1, n-1) if (a[i][j2] && b[j2] >= 1) { 
          --b[i]; --b[j2]; 
          pii cur = rec(i+1); 
          cur.first += 2; 
          cur.second += d[i][j1]+d[i][j2]; 
          if (cur.first > res.first || cur.first == res.first && cur.second < res.second) res = cur; 
          ++b[i]; ++b[j2]; 
        } 
        ++b[i]; ++b[j1]; 
      } 
      if (b[i] == 3) { 
        For(j1, i+1, n-1) if (a[i][j1] && b[j1] >= 1) { 
          --b[i]; --b[j1]; 
          For(j2, j1+1, n-1) if (a[i][j2] && b[j2] >= 1) { 
            --b[i]; --b[j2]; 
            For(j3, j2+1, n-1) if (a[i][j3] && b[j3] >= 1) { 
              --b[i]; --b[j3]; 
              pii cur = rec(i+1); 
              cur.first += 3; 
              cur.second += d[i][j1]+d[i][j2]+d[i][j3]; 
              if (cur.first > res.first || cur.first == res.first && cur.second < res.second) res = cur; 
              ++b[i]; ++b[j3]; 
            } 
            ++b[i]; ++b[j2]; 
          } 
          ++b[i]; ++b[j1]; 
        } 
      } 
    }     
  } 
  return memo[state] = res; 
} 
 
struct TwinTowns { 
  vi optimalTwinTowns(vi x, vi y, int maxP, int minD) { 
    n = Size(x); 
    Rep(i, n) Rep(j, n) 
      a[i][j] = (d[i][j] = abs(x[i]-x[j])+abs(y[i]-y[j])) >= minD; 
    Rep(i, n) 
      b[i] = maxP; 
    pii res = rec(0); 
    vi v; 
    v.push_back(res.first); 
    v.push_back(res.second); 
    return v; 
  } 
};

********************************************************************************
*******************************************************************************/