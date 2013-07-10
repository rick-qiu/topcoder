/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6006
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

class BasketsWithApples {
public:
    int removeExcess(vector<int> apples);
};

int BasketsWithApples::removeExcess(vector<int> apples) {
    int ret;
    return ret;
}


int test0() {
    vector<int> apples = {1, 2, 3};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> apples = {5, 0, 30, 14};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> apples = {51, 8, 38, 49};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> apples = {24, 92, 38, 0, 79, 45};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> apples = {91, 96, 46, 87};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> apples = {18, 54, 63, 54, 61, 60};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> apples = {60, 61, 34, 27, 11, 6, 48, 8, 29, 51};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> apples = {88, 86, 42};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> apples = {49};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
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
    vector<int> apples = {92, 29, 68, 79, 79, 14, 100};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 340;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> apples = {30, 25, 82};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> apples = {54, 14, 19};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> apples = {17, 78, 70, 67, 41, 86};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 268;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> apples = {13, 44, 40};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> apples = {77, 72, 74, 64, 22, 49, 64, 8};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> apples = {71, 79, 50, 12, 29, 28, 85, 4, 43, 95};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 284;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> apples = {66, 42, 10};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> apples = {40, 17, 35, 2, 26, 64, 88, 77};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> apples = {34, 90, 39, 2, 75, 47, 57};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> apples = {11, 48};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> apples = {30, 17};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> apples = {96, 95, 89, 26, 27};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> apples = {86, 39, 100, 19, 93, 1};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> apples = {54, 11, 17, 89};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> apples = {543, 747, 139, 941, 437, 222, 259, 653, 891, 866, 528, 671, 487, 264, 722, 113, 820, 505, 923, 656, 749, 807, 60, 310, 396, 946, 475, 358, 505, 155, 440, 616, 162, 292, 940, 162, 575, 131, 992, 137, 101, 63, 601, 868, 415};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 11875;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> apples = {580, 506, 187, 748, 481, 550, 941, 592, 574, 183, 567, 144, 658, 383, 694, 206, 80, 38, 909, 654, 329, 182, 812, 733, 629, 462, 52, 37, 542, 395, 202, 947, 658, 879, 113, 112, 28, 96, 342};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 9756;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> apples = {300, 518, 812, 55, 376, 564, 958, 696, 620, 301, 810, 654, 673, 616, 384, 295, 385, 766, 670, 636, 198, 343, 769, 721, 866, 279, 880, 888, 91, 707, 40, 760, 482, 683, 368, 171, 46};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 11704;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> apples = {119, 849, 579, 680, 410, 850, 439, 305, 864, 55, 297, 24, 742, 876, 293, 177, 213, 466, 649, 6, 489, 235, 473, 436, 162, 682, 952, 602, 414};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 7380;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> apples = {219, 368, 684, 342, 199, 179, 1000, 271, 132, 623, 693, 56};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 2492;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> apples = {124, 116, 617, 399, 442, 626, 822, 721, 528, 138, 469, 578, 806, 250, 810, 404, 254, 76, 633, 943, 953, 935, 486, 448, 116, 622, 541, 590};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 8398;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> apples = {788, 782, 508, 718, 224, 112, 309, 572, 505, 272, 796, 669, 980, 944, 519, 1, 145, 30, 564, 336, 365, 454, 171, 997, 564, 612, 191, 227, 383, 255, 275, 893, 460, 489, 161, 70, 812, 871, 79, 424, 839, 723, 469, 328, 919, 531, 738, 457, 144, 99};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 12712;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> apples = {402, 681, 305, 256, 830, 197, 452, 900};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 2043;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> apples = {976, 135, 849, 912, 628, 3, 999, 841, 82, 939, 676, 276, 631, 146, 561, 483, 24, 291, 890, 678, 783, 988, 513, 997, 352, 813, 477, 815, 685, 948, 74, 793, 546, 888, 529, 850, 198, 943, 647};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 14444;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> apples = {695, 607, 389, 241, 879, 921, 616, 345, 694, 257, 106, 82, 975, 269, 833, 250, 405, 13, 987, 898, 358, 801, 663, 613, 829, 714};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 9105;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> apples = {230, 964};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 964;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> apples = {27, 718, 595, 283, 344, 5, 660, 956, 665, 892, 922, 652, 427, 296, 742, 590, 144, 978, 650, 819, 723, 396, 320, 521, 744, 781, 377, 1000, 35, 237, 209, 631, 726, 165, 579, 693, 936, 197, 663, 726, 792, 125, 0, 499, 875, 50, 254, 718, 698, 154};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 16212;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> apples = {861, 822, 295, 781, 850, 883, 921, 477, 784, 892, 0, 689, 822, 210, 700, 910, 134, 74, 893, 421, 953, 850, 345, 878, 328, 900, 80, 370, 382, 406, 363, 461, 169, 576, 150, 89, 963, 217, 424, 456, 827, 859, 296, 928, 154, 412, 571, 614, 496};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 14839;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> apples = {129, 434, 531, 862, 373, 420, 174, 680, 43, 54, 121, 841, 159, 717, 914, 64, 518, 645, 945, 288, 599, 48, 333, 280, 216, 415, 492, 374, 27, 457, 848, 204, 21, 477, 960, 36, 263, 355, 25, 412, 319, 219, 123, 72, 169, 592, 929, 287, 32};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 8652;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> apples = {451, 931, 652, 902, 218, 849, 884, 773, 149, 530, 95, 699, 450, 581, 469, 538, 394, 952, 367, 153, 673, 916, 893, 633, 340, 410, 593, 243, 433, 473, 325, 401, 42};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 9456;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> apples = {964, 166, 989, 485, 288, 119, 90, 688, 177, 206, 874, 360, 219, 545, 875, 492, 635, 858, 853, 688, 204, 125, 281, 353, 780, 87};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 6350;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> apples = {257, 724, 807, 46, 977, 479, 565, 825, 187, 770, 534, 937, 591, 639, 210, 348, 470, 418, 218, 292, 349, 996};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 6110;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> apples = {954, 906, 779, 155, 14, 819, 918, 171, 773, 702, 316, 337, 412, 663};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 5304;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> apples = {105, 351, 195, 702, 866, 348, 547, 613, 970, 719, 902, 94, 914, 606, 838, 593, 157, 991, 879, 805, 680, 464, 871, 22, 491, 496, 870, 857, 178, 177, 704, 721, 645, 105, 373, 21, 271, 64, 496};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 11860;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> apples = {931, 700, 656, 71, 228, 829, 791, 582, 260, 827, 888, 46, 615, 579, 489, 905, 90, 538, 244, 369, 556, 910, 502, 886, 165, 41, 555, 381, 642, 294, 627, 462, 513, 647, 97, 779, 181, 104, 424, 526};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 11736;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> apples = {683, 133, 289, 24, 365, 386, 134, 274, 692, 816, 626, 486, 716, 950, 616, 685, 745, 292, 846, 163, 374, 645, 873, 980, 970, 10, 811, 830, 632, 680, 476, 842, 705, 201, 952, 460, 364, 140, 537, 610, 510, 633, 280, 691, 323};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 14640;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> apples = {641, 709, 105, 829, 615, 230, 561, 930, 993, 460, 8};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 3927;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> apples = {163, 225, 179, 352, 144, 666, 83, 553, 616, 193, 335, 436, 388, 851, 872, 36, 294, 84, 912, 248, 558, 840, 720, 731, 977, 971, 192, 927, 819, 429, 533};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 7995;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> apples = {357, 934, 373, 71, 382, 821, 982, 680, 872, 508, 850, 241, 358, 396, 261, 899, 85, 268, 981, 524, 83, 734, 302, 357, 971, 594, 58, 169, 462, 821, 33, 526, 421, 721, 980, 512, 676, 659, 867, 533, 437, 468, 524};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 11781;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> apples = {23};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
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
    vector<int> apples = {966, 738, 187, 586, 514, 980, 940};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 3084;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> apples = {409, 384, 817, 896, 792, 327, 41, 568, 358, 807, 348, 891, 962, 212, 40, 717, 342, 100, 596, 684, 358};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 5680;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> apples = {757, 336, 443, 999, 104, 625, 857, 685, 770, 213, 365, 520, 60, 707, 789, 89, 253, 599, 871, 319, 115, 957, 705, 471, 566, 653, 56, 405, 460, 839, 547, 556, 592, 192, 665, 939, 609, 852, 769, 642, 347, 779, 577};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 14222;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> apples = {910, 894, 517, 44, 787, 153, 507, 810, 82, 781, 258, 834, 726, 21, 405, 328, 273, 656, 802, 148};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 5904;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> apples = {895, 477, 312, 343, 165, 211, 23, 921, 642, 214, 587, 519, 980, 510, 85, 610, 481, 523, 632, 405, 263, 769, 114, 271, 91, 214, 550, 831, 707, 865, 43, 335, 580};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 8586;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> apples = {606, 928, 181, 549, 723, 409, 615, 73, 622, 878, 23, 146, 719, 26, 929};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 4941;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> apples = {732, 893, 698, 854, 340, 527, 474, 595, 293, 850, 718, 342, 417, 488, 887, 820, 32, 431, 182, 210};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 5838;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> apples = {781, 638, 273};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 1276;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> apples = {305, 857, 128, 213, 5, 791, 107, 579, 73, 173, 442, 221, 273, 730, 334, 349, 591, 143, 776, 275, 793, 53, 637, 381, 712, 552, 943, 806, 174, 968, 584, 771, 235, 768, 390};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 8832;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> apples = {301, 675, 279, 490, 932, 556, 586, 96, 180, 853, 718, 205, 632, 780, 355, 1000, 458, 41, 326, 261, 251, 273, 409, 594, 949, 599, 84, 303, 363, 746, 8, 404, 859, 792, 886, 650, 186, 272, 419};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 9452;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> apples = {651, 779, 393, 788, 597, 775, 837, 732, 98, 76, 791, 144, 31, 998, 202, 787, 174, 452, 923, 425, 144, 4};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 6588;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> apples = {351, 630, 416, 667, 508, 185, 706, 849, 464, 700, 542, 806, 228, 527, 829, 230, 136, 196, 627, 378, 767, 222, 541, 219, 700, 78, 762, 64};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 7620;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> apples = {686, 294, 864};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 1372;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> apples = {807, 224, 209, 297, 400, 486, 935, 913, 75, 38, 689, 602, 420, 25, 526, 613, 330, 784, 942};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 4860;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> apples = {28, 760, 887, 533, 821};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 2280;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> apples = {32, 18, 22, 22, 212, 24, 18, 47, 20, 25, 85, 53, 20, 19, 40, 425, 65, 106, 18, 17, 30, 42, 44, 77, 121, 21, 27, 170, 25, 17, 38, 19, 34, 56, 29, 21, 31, 141, 850, 50, 60, 36, 17, 23, 94, 28, 283, 26, 35, 70};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 850;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> apples = {26, 17, 28, 40, 25, 19, 25, 65, 47, 20, 18, 27, 141, 50, 170, 44, 17, 53, 56, 21, 31, 20, 22, 121, 85, 18, 17, 24, 36, 29, 35, 34, 94, 21, 38, 212, 18, 22, 60, 30, 23, 70, 850, 42, 19, 77, 32, 425, 106, 283};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 850;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> apples = {42, 26, 19, 46, 17, 30, 25, 16, 35, 22, 12, 28, 150, 85, 200, 20, 18, 13, 13, 21, 16, 120, 75, 31, 40, 18, 13, 24, 15, 37, 50, 54, 20, 15, 600, 33, 66, 12, 23, 14, 60, 14, 13, 12, 12, 100, 17, 27, 15, 300};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> apples = {4, 2, 100, 14, 3, 9, 2, 6, 3, 2, 2, 4, 8, 2, 20, 2, 2, 3, 3, 2, 2, 3, 7, 5, 3, 2, 16, 5, 4, 3, 3, 2, 5, 25, 2, 12, 4, 5, 7, 2, 6, 2, 10, 4, 2, 2, 50, 33, 2, 11};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> apples = {8, 8, 12, 11, 16, 13, 14, 22, 25, 44, 9, 400, 57, 9, 80, 13, 8, 15, 11, 17, 23, 9, 30, 19, 12, 20, 14, 10, 10, 10, 36, 28, 21, 11, 16, 8, 26, 8, 133, 8, 18, 33, 100, 12, 40, 50, 9, 200, 10, 66};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> apples = {40, 50, 47, 77, 19, 23, 42, 21, 18, 20, 17, 32, 44, 38, 29, 425, 60, 21, 22, 25, 94, 34, 27, 283, 170, 56, 121, 36, 17, 30, 25, 18, 850, 19, 20, 70, 18, 22, 28, 65, 53, 212, 17, 24, 141, 26, 31, 35, 106, 85};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 850;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> apples = {11, 15, 22, 31, 17, 12, 12, 166, 35, 25, 71, 26, 11, 23, 29, 10, 100, 13, 41, 21, 13, 15, 13, 500, 14, 50, 20, 18, 83, 14, 20, 27, 55, 19, 250, 10, 12, 10, 16, 125, 45, 17, 16, 10, 62, 11, 11, 10, 33, 38};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> apples = {26, 31, 212, 19, 22, 25, 24, 21, 21, 121, 23, 19, 283, 47, 18, 77, 44, 94, 60, 17, 850, 22, 32, 50, 141, 170, 42, 38, 30, 20, 28, 40, 20, 29, 425, 27, 56, 85, 18, 35, 18, 25, 70, 36, 34, 17, 53, 65, 106, 17};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 850;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> apples = {5, 18, 10, 66, 5, 12, 4, 20, 28, 4, 6, 4, 7, 7, 5, 4, 5, 15, 6, 5, 4, 5, 8, 33, 9, 16, 4, 9, 200, 22, 14, 8, 6, 6, 10, 40, 25, 11, 13, 4, 6, 50, 4, 7, 4, 5, 8, 100, 11, 4};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> apples = {27, 13, 33, 11, 12, 71, 11, 38, 15, 83, 29, 18, 250, 13, 166, 12, 100, 12, 10, 16, 10, 35, 23, 500, 10, 15, 10, 20, 11, 62, 22, 25, 20, 41, 45, 19, 13, 10, 50, 26, 14, 21, 17, 31, 125, 14, 17, 16, 55, 11};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> apples = {180, 64, 20, 25, 128, 32, 75, 19, 29, 56, 23, 34, 42, 150, 20, 81, 50, 100, 112, 31, 47, 36, 60, 18, 24, 28, 19, 39, 90, 18, 450, 225, 25, 20, 33, 900, 27, 23, 45, 37, 22, 40, 21, 21, 300, 30, 52, 26, 69, 18};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> apples = {8, 20, 7, 13, 27, 8, 7, 7, 6, 8, 60, 6, 7, 14, 12, 42, 12, 10, 23, 6, 9, 11, 6, 10, 100, 25, 6, 37, 18, 30, 300, 8, 75, 6, 13, 150, 15, 6, 21, 33, 15, 17, 11, 10, 9, 9, 6, 16, 7, 50};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> apples = {65, 17, 121, 283, 24, 50, 32, 34, 25, 38, 40, 425, 94, 28, 31, 17, 27, 53, 106, 22, 18, 77, 170, 21, 20, 141, 22, 26, 21, 30, 18, 85, 23, 35, 850, 25, 19, 19, 18, 29, 20, 17, 36, 56, 70, 60, 44, 42, 47, 212};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 850;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> apples = {38, 19, 85, 20, 70, 40, 28, 21, 60, 850, 27, 106, 141, 25, 17, 94, 65, 44, 22, 47, 32, 18, 30, 25, 17, 42, 19, 53, 21, 17, 29, 18, 283, 24, 31, 212, 121, 425, 50, 22, 23, 77, 36, 56, 26, 34, 18, 35, 170, 20};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 850;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> apples = {65, 19, 34, 25, 15, 18, 59, 22, 54, 14, 17, 18, 17, 81, 20, 216, 15, 23, 13, 26, 16, 92, 13, 14, 130, 13, 40, 27, 72, 108, 19, 650, 15, 30, 32, 20, 24, 46, 21, 13, 16, 43, 36, 50, 38, 14, 162, 28, 29, 325};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 650;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> apples = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
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
    vector<int> apples = {6, 4, 3, 4, 3, 3, 9, 6, 5, 6, 13, 16, 30, 3, 5, 7, 11, 4, 6, 10, 15, 21, 50, 4, 75, 150, 5, 7, 5, 7, 12, 25, 10, 4, 3, 4, 3, 5, 3, 3, 3, 4, 3, 8, 18, 3, 3, 37, 8, 3};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> apples = {3, 2, 3, 2, 5, 50, 2, 20, 6, 2, 2, 4, 7, 25, 4, 6, 5, 2, 5, 3, 10, 2, 3, 2, 16, 14, 4, 2, 2, 3, 2, 2, 2, 11, 4, 3, 2, 3, 3, 5, 100, 8, 9, 2, 2, 12, 4, 33, 7, 2};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> apples = {20, 47, 23, 112, 225, 18, 23, 56, 180, 36, 42, 150, 26, 19, 30, 24, 33, 22, 69, 25, 81, 40, 18, 300, 52, 39, 50, 20, 20, 29, 25, 75, 60, 128, 64, 21, 900, 18, 28, 21, 90, 27, 31, 37, 32, 45, 450, 34, 100, 19};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> apples = {2, 5, 3, 5, 2, 6, 10, 4, 25, 2, 3, 7, 9, 4, 4, 3, 2, 4, 100, 2, 16, 3, 2, 8, 2, 5, 2, 2, 2, 14, 2, 3, 20, 2, 7, 2, 5, 6, 2, 3, 3, 2, 4, 3, 11, 12, 33, 50, 2, 2};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> apples = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> apples = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 50000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> apples = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 1000};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 49950;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> apples = {0, 1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 48000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> apples = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> apples = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 46, 47, 48, 49};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 620;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> apples = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 490};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> apples = {24};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> apples = {500, 500, 1000};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> apples = {24, 92, 38, 0, 79, 45, 14, 14, 14, 14, 14, 14, 14};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> apples = {500, 900};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> apples = {10, 9};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> apples = {10};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> apples = {5, 0, 30, 14};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> apples = {2, 2, 2, 2, 3, 3, 3};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> apples = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
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
    vector<int> apples = {1, 1, 1};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> apples = {3, 3, 3, 11};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> apples = {1000};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> apples = {20, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> apples = {4};
    BasketsWithApples* pObj = new BasketsWithApples();
    clock_t start = clock();
    int result = pObj->removeExcess(apples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7480870&rd=8082&pm=6006
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
 
 
#define FORV(i,v) for(int i=0; i<(int)v.size();i++)
 
using namespace std;
 
class BasketsWithApples {
public:
  int removeExcess(vector <int>);
};
 
int BasketsWithApples::removeExcess(vector <int> apples) {
 
  sort (apples.begin(),apples.end());
  int max = 0;
  FORV(i,apples)
  {
    int a =0;
    FORV(j,apples){
      if (apples[j]>=apples[i]) a+=apples[i];
    }
    if (max<a)max =a;
  }
  return max;
}

********************************************************************************
*******************************************************************************/