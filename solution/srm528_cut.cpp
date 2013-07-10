/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11564
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

class Cut {
public:
    int getMaximum(vector<int> eelLengths, int maxCuts);
};

int Cut::getMaximum(vector<int> eelLengths, int maxCuts) {
    int ret;
    return ret;
}


int test0() {
    vector<int> eelLengths = {13, 20, 13};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {5, 5, 5, 5};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> eelLengths = {34, 10, 48};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> eelLengths = {30, 50, 30, 50};
    int maxCuts = 350;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> eelLengths = {1};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {10};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> eelLengths = {25, 15};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> eelLengths = {25, 15};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> eelLengths = {25, 15};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> eelLengths = {10, 10, 10, 10, 10, 50, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> eelLengths = {10, 10, 10, 10, 10, 50, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {10, 10, 10, 10, 10, 50, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> eelLengths = {10, 10, 10, 10, 10, 50, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> eelLengths = {999};
    int maxCuts = 99;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> eelLengths = {999};
    int maxCuts = 100;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> eelLengths = {143, 32, 59, 128, 147};
    int maxCuts = 22;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> eelLengths = {121, 117, 133, 169, 52, 71, 83, 112, 97, 53, 191, 173, 41, 124, 72};
    int maxCuts = 143;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> eelLengths = {41, 22, 11, 159, 178, 37, 182, 182, 123, 95, 98, 19, 122, 2, 88, 175, 87, 62, 83, 139, 179, 37, 131, 15, 146};
    int maxCuts = 229;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> eelLengths = {111, 163, 139, 108, 97, 125, 44, 92, 156, 49, 194, 142, 132, 42, 41, 67, 56, 176, 47, 175, 176, 154, 169, 13, 135, 133, 128, 188, 107, 7, 175, 4, 188, 59, 111};
    int maxCuts = 385;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> eelLengths = {19, 87, 158, 158, 128, 94, 152, 168, 12, 158, 51, 24, 87, 101, 141, 174, 165, 174, 155, 107, 129, 78, 194, 129, 61, 75, 175, 66, 18, 116, 186, 129, 178, 5, 53, 65, 4, 196, 144, 41, 136, 85, 131, 107, 139};
    int maxCuts = 497;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 471;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> eelLengths = {128, 553, 964, 371, 769};
    int maxCuts = 276;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> eelLengths = {957, 653, 962, 452, 709, 985, 742, 705, 991, 153, 108, 683, 684, 21, 312};
    int maxCuts = 816;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> eelLengths = {739, 618, 127, 164, 38, 961, 437, 61, 63, 463, 214, 528, 111, 949, 76, 706, 946, 292, 478, 25, 502, 372, 524, 807, 741};
    int maxCuts = 902;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 902;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> eelLengths = {537, 355, 775, 222, 801, 146, 938, 808, 206, 526, 281, 82, 411, 206, 934, 476, 405, 697, 939, 63, 483, 521, 208, 675, 647, 414, 509, 998, 889, 203, 831, 948, 605, 619, 597};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> eelLengths = {426, 729, 121, 319, 647, 459, 117, 37, 107, 223, 526, 117, 695, 584, 845, 216, 114, 986, 831, 586, 448, 182, 894, 426, 775, 481, 426, 782, 745, 908, 37, 835, 471, 579, 775, 15, 755, 74, 439, 836, 73, 797, 268, 32, 579};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> eelLengths = {120, 100, 130, 190, 140, 40};
    int maxCuts = 48;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> eelLengths = {160, 60, 10, 30, 200, 60, 100, 180, 200, 100, 170, 180, 60, 200, 40};
    int maxCuts = 163;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> eelLengths = {100, 120, 120, 150, 20, 50, 120, 110, 160, 180, 110, 200, 50, 70, 180, 30, 80, 140, 80, 180, 60, 150, 200, 140};
    int maxCuts = 280;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> eelLengths = {20, 40, 60, 90, 40, 150, 130, 50, 200, 110, 50, 80, 70, 130, 160, 80, 40, 110, 200, 50, 20, 40, 100, 170, 180, 170, 180, 150, 30, 190, 30, 160, 130};
    int maxCuts = 353;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 341;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> eelLengths = {60, 40, 90, 190, 170, 90, 80, 70, 100, 180, 160, 130, 10, 200, 30, 170, 130, 150, 150, 170, 120, 140, 110, 160, 160, 60, 120, 70, 190, 60, 100, 60, 70, 190, 20, 170, 140, 170, 150, 130, 70, 30};
    int maxCuts = 510;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 486;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> eelLengths = {580, 450, 340, 10, 190, 280};
    int maxCuts = 185;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 185;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> eelLengths = {230, 90, 600, 510, 180, 240, 220, 10, 530, 760, 600, 10, 420, 380, 800};
    int maxCuts = 478;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 492;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> eelLengths = {270, 320, 610, 40, 760, 620, 700, 440, 450, 230, 770, 230, 40, 510, 340, 780, 50, 520, 300, 180, 20, 520, 800, 610};
    int maxCuts = 851;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 873;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> eelLengths = {290, 490, 130, 740, 700, 300, 210, 800, 350, 320, 520, 50, 260, 610, 730, 560, 140, 670, 180, 170, 530, 690, 720, 640, 10, 240, 680, 780, 710, 570, 120, 420, 110};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1027;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> eelLengths = {570, 380, 740, 300, 650, 650, 230, 130, 360, 130, 570, 330, 240, 700, 360, 650, 350, 180, 80, 60, 560, 280, 350, 490, 670, 590, 730, 500, 20, 790, 160, 130, 220, 540, 540, 360, 700, 310, 500, 660, 120, 440};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1031;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> eelLengths = {220, 120, 353, 470, 393};
    int maxCuts = 155;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> eelLengths = {45, 490, 363, 30, 161, 315, 490, 187, 190, 90, 100, 233, 60, 414};
    int maxCuts = 234;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 241;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> eelLengths = {429, 170, 255, 489, 290, 116, 480, 408, 180, 450, 470, 228, 329, 310, 59, 390, 211, 410, 413, 350, 460, 472, 182};
    int maxCuts = 588;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 599;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> eelLengths = {187, 328, 420, 60, 2, 155, 380, 270, 110, 380, 34, 365, 4, 203, 248, 490, 410, 290, 440, 383, 380, 36, 175, 44, 360, 260, 387, 360, 73, 272, 210, 35};
    int maxCuts = 527;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 542;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> eelLengths = {49, 49, 235, 453, 199, 60, 266, 10, 250, 148, 175, 260, 314, 433, 373, 141, 138, 230, 204, 390, 450, 180, 460, 455, 360, 240, 470, 190, 280, 240, 434, 12, 63, 200, 280, 70, 403, 345, 50, 409, 22};
    int maxCuts = 668;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 687;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> eelLengths = {613, 930, 903, 574, 370, 390, 769, 992, 851, 502};
    int maxCuts = 687;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 687;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> eelLengths = {109, 213, 300, 845, 836, 448, 40, 240, 240, 214, 961, 240, 94, 330, 430, 552, 980, 450, 135, 363};
    int maxCuts = 717;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 726;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> eelLengths = {942, 923, 300, 619, 980, 906, 530, 810, 920, 220, 520, 760, 350, 450, 568, 500, 969, 66, 151, 690, 488, 600, 541, 360, 931, 543, 240, 564, 387, 888};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1015;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> eelLengths = {930, 40, 959, 303, 270, 600, 690, 844, 978, 557, 370, 932, 513, 960, 490, 770, 613, 896, 115, 1000, 811, 640, 752, 460, 700, 997, 350, 492, 241, 419, 580, 858, 920, 300, 310, 810, 70, 520, 976, 928};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1019;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> eelLengths = {916, 60, 80, 863, 13, 84, 679, 719, 830, 851, 621, 359, 830, 432, 180, 746, 80, 140, 420, 167, 138, 250, 352, 461, 960, 260, 230, 760, 448, 660, 40, 153, 358, 440, 390, 850, 870, 850, 300, 292, 760, 140, 960, 570, 520, 980, 756, 722, 908, 772};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> eelLengths = {430, 440, 300, 60, 20, 70, 540, 460, 160, 680, 430, 720, 280, 210, 530, 290, 960, 30, 200, 110, 320, 830, 470, 10, 240, 150, 810, 800, 150, 80, 20, 460, 660, 460, 10, 430, 750, 620, 190, 610, 660, 720, 400, 310, 910, 800, 720, 740, 790, 270};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1035;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> eelLengths = {854, 849, 701, 162, 326, 767, 159, 218, 37, 632, 71, 29, 844, 735, 47, 914, 353, 954, 125, 254, 968, 901, 226, 981, 423, 247, 952, 747, 523, 115, 709, 393, 672, 366, 325, 989, 504, 228, 203, 951, 118, 879, 434, 557, 523, 509, 783, 955, 603, 198};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> eelLengths = {209, 164, 456, 162, 442, 320, 171, 192, 386, 414, 440, 259, 445, 377, 141, 176, 250, 184, 250, 483, 453, 1, 415, 416, 44, 313, 103, 56, 244, 118, 277, 50, 291, 453, 287, 82, 229, 205, 27, 267, 497, 371, 35, 276, 446, 409, 48, 293, 384, 359};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1005;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> eelLengths = {129, 171, 120, 15, 151, 153, 126, 507, 109, 202, 141, 258, 193, 91, 207, 18, 392, 32, 203, 438, 241, 18, 125, 338, 420, 121, 150, 372, 218, 187, 138, 40, 228, 50, 382, 122, 364, 80, 387, 30, 118, 400, 475, 220, 385, 404, 408, 389, 480, 497};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> eelLengths = {318, 238, 10, 214, 438, 416, 1, 470, 440, 27, 88, 253, 430, 100, 212, 315, 401, 478, 378, 496, 251, 184, 150, 96, 180, 441, 40, 370, 169, 88, 9, 150, 176, 266, 439, 72, 123, 90, 114, 230, 20, 240, 142, 215, 170, 259, 444, 381, 133, 187};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1015;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> eelLengths = {157, 43, 465, 510, 360, 440, 45, 48, 30, 131, 250, 374, 480, 296, 132, 440, 380, 80, 244, 210, 426, 420, 25, 110, 424, 189, 502, 26, 135, 380, 338, 357, 86, 490, 310, 455, 364, 379, 312, 370, 255, 108, 342, 176, 431, 189, 210, 240, 370, 240};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1020;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> eelLengths = {242, 265, 527, 433, 270, 197, 90, 350, 363, 320, 426, 396, 460, 334, 40, 130, 500, 15, 322, 400, 70, 400, 270, 504, 54, 170, 500, 80, 340, 360, 68, 71, 270, 540, 350, 511, 500, 301, 176, 460, 20, 415, 330, 2, 134, 494, 178, 355, 310, 377};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1025;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> eelLengths = {227, 407, 11, 418, 223, 678, 928, 166, 815, 293, 684, 282, 749, 397, 256, 836, 743, 776, 497, 836, 891, 19, 727, 605, 196, 93, 57, 402, 215, 265, 215, 485, 641, 819, 937, 122, 312, 438, 157, 173, 87, 973, 19, 152, 867, 456, 626, 702, 312, 115};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> eelLengths = {480, 950, 500, 100, 410, 680, 910, 380, 940, 240, 310, 700, 530, 690, 670, 800, 320, 570, 700, 980, 610, 110, 700, 610, 160, 870, 570, 790, 100, 740, 880, 860, 620, 910, 790, 860, 920, 170, 200, 30, 370, 290, 850, 480, 380, 430, 890, 330, 840, 960};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1027;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> eelLengths = {9, 9, 1000, 9, 9, 9, 9, 9, 9, 9, 1000, 9, 1000, 9, 9, 9, 9, 9, 9, 9, 1000, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1000, 9, 9, 9, 9};
    int maxCuts = 99;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> eelLengths = {9, 1000, 9, 9, 9, 9, 1000, 9, 9, 9, 1000, 1000, 9, 1000, 9, 1000, 1000, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 1000, 9, 9, 9, 9, 1000, 9, 9, 9, 1000, 9, 9, 9, 9, 9};
    int maxCuts = 100;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> eelLengths = {9, 9, 9, 9, 9, 9, 9, 1000, 9, 1000, 9, 9, 9, 9, 9, 9, 9, 1000, 9, 1000, 9, 9, 9, 9, 9, 1000, 1000, 1000, 1000, 9, 9, 9, 9, 9, 1000, 1000, 9, 1000, 1000, 9, 1000, 1000, 9, 9, 1000, 9, 9, 9, 9, 9};
    int maxCuts = 101;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> eelLengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> eelLengths = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 20, 20, 20, 20, 20, 20, 20, 20, 20, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 20};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> eelLengths = {30, 20, 15};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> eelLengths = {13, 20, 13};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> eelLengths = {1, 2, 3, 4, 5, 30, 6, 7, 8, 9, 50, 10, 11, 12, 13, 14, 15, 16, 30, 17, 18, 50};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> eelLengths = {100, 90};
    int maxCuts = 8;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> eelLengths = {30, 50, 30, 50};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> eelLengths = {11, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> eelLengths = {40, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> eelLengths = {50, 30, 40};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> eelLengths = {100, 90, 20};
    int maxCuts = 9;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> eelLengths = {13, 40, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> eelLengths = {23, 50, 30, 80, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> eelLengths = {30, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> eelLengths = {100, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> eelLengths = {20, 100, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> eelLengths = {31, 40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> eelLengths = {30, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> eelLengths = {10, 30, 11, 21, 20, 21, 11, 30, 10};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> eelLengths = {25, 25, 20, 30};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> eelLengths = {40, 30, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> eelLengths = {23, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> eelLengths = {40, 30, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {40, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> eelLengths = {50, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> eelLengths = {16, 32, 50, 20};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> eelLengths = {40, 20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> eelLengths = {120, 123, 45, 40, 30, 10, 20, 20, 22, 55, 30, 50};
    int maxCuts = 8;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> eelLengths = {50, 60, 15, 20, 20, 20, 15, 15, 15};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> eelLengths = {20, 20, 20, 30, 30, 30, 40, 40, 40, 40, 40};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> eelLengths = {13, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> eelLengths = {40, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> eelLengths = {15, 15, 20, 20, 20, 25, 25};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> eelLengths = {80, 40, 40};
    int maxCuts = 7;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> eelLengths = {100, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    int maxCuts = 9;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> eelLengths = {50, 50, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    int maxCuts = 8;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> eelLengths = {48, 50};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> eelLengths = {80, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> eelLengths = {100, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> eelLengths = {13, 40, 13};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> eelLengths = {13, 30, 20, 20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> eelLengths = {10, 13, 14, 15, 20, 30, 40, 28};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> eelLengths = {50, 20, 20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> eelLengths = {1000, 1000, 1000, 1000, 1000, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 300, 270, 110};
    int maxCuts = 531;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 541;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> eelLengths = {30, 37, 41, 20, 20, 20, 10, 10};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> eelLengths = {31, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> eelLengths = {931, 230, 984, 724, 288, 418, 20, 20, 401, 990, 333, 10, 11, 116, 452, 1000, 727, 217, 368, 165, 863, 370, 673, 997, 829, 294, 314, 480, 542, 713, 449, 897, 850, 209, 983, 883, 307, 738, 314, 88, 631, 441, 20, 420, 15, 10, 592, 490, 6, 999};
    int maxCuts = 888;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 901;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> eelLengths = {20, 10, 13};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> eelLengths = {23, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> eelLengths = {13, 20, 23};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> eelLengths = {10, 21, 50, 10, 50, 50, 20, 50, 20, 50, 20, 50, 50, 31};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> eelLengths = {100, 20, 20, 20, 20, 9};
    int maxCuts = 9;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> eelLengths = {50, 50, 50};
    int maxCuts = 10;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> eelLengths = {13, 20, 13};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> eelLengths = {17, 20, 51};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> eelLengths = {40, 35, 35};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> eelLengths = {15, 20, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> eelLengths = {100, 100, 20};
    int maxCuts = 17;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> eelLengths = {40, 20, 20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> eelLengths = {31, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> eelLengths = {100, 100, 100, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> eelLengths = {50};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> eelLengths = {20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> eelLengths = {40, 40, 30};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> eelLengths = {100, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> eelLengths = {40, 30, 20, 40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> eelLengths = {50};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> eelLengths = {20, 20, 30, 48};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {30, 33};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> eelLengths = {1, 10, 22, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> eelLengths = {30, 40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> eelLengths = {30, 10};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> eelLengths = {30};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> eelLengths = {40, 30, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> eelLengths = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> eelLengths = {13, 13, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> eelLengths = {50, 20, 20, 13};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> eelLengths = {5, 20, 15, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> eelLengths = {23, 23, 23, 30, 33, 33, 33};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> eelLengths = {11, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> eelLengths = {50, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> eelLengths = {15, 16, 17, 18, 19, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> eelLengths = {15, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> eelLengths = {13, 20, 10, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> eelLengths = {50, 30, 30};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> eelLengths = {98, 72, 20, 98};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> eelLengths = {20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> eelLengths = {12, 22, 23, 33, 60};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> eelLengths = {11, 50, 40, 13, 30, 20, 11};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> eelLengths = {20, 50};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> eelLengths = {23, 20, 10, 11};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> eelLengths = {48, 10, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> eelLengths = {48, 34, 20};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> eelLengths = {63, 40, 10, 20, 61};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> eelLengths = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> eelLengths = {30, 40, 20, 20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> eelLengths = {20, 22};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> eelLengths = {10, 11, 30};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> eelLengths = {30, 10, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> eelLengths = {41, 320, 150, 460, 930, 700, 258, 952, 990, 820, 350, 899, 290, 400, 699, 440, 750, 860, 642, 10, 675, 291, 650, 126, 220, 520, 630, 17, 715, 500, 304, 160, 280, 30, 240, 419, 875, 340, 992, 360, 610, 60, 730, 960, 910, 928, 602, 530, 100, 907};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1026;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> eelLengths = {34, 30, 20, 20, 30};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> eelLengths = {15, 20, 25};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> eelLengths = {11, 11, 11, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> eelLengths = {30, 20, 30};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> eelLengths = {50, 20, 20, 20};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> eelLengths = {21, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> eelLengths = {30, 50, 30, 50};
    int maxCuts = 350;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> eelLengths = {21, 57, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> eelLengths = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> eelLengths = {50, 40};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> eelLengths = {30, 80, 70};
    int maxCuts = 8;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> eelLengths = {44, 40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> eelLengths = {30, 22};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> eelLengths = {15, 20, 50, 20, 30, 30};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> eelLengths = {20, 70};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> eelLengths = {20, 23};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> eelLengths = {50, 20, 20, 20, 20, 20};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> eelLengths = {48, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> eelLengths = {30, 45};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {20, 30};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> eelLengths = {30, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {50, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> eelLengths = {23, 30, 13, 55};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> eelLengths = {13, 13, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> eelLengths = {20, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {20, 20, 41};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {90};
    int maxCuts = 8;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> eelLengths = {30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> eelLengths = {85, 60, 30, 20, 20};
    int maxCuts = 7;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> eelLengths = {53, 53, 53, 60, 63, 63, 63};
    int maxCuts = 7;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> eelLengths = {1000, 20, 20, 20};
    int maxCuts = 100;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> eelLengths = {20, 30, 10};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> eelLengths = {30, 30, 2, 17, 10};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {10};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {30, 10, 10, 10};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> eelLengths = {50, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> eelLengths = {50, 30};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> eelLengths = {20, 30, 40, 50};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> eelLengths = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 30, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> eelLengths = {30, 50, 30};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> eelLengths = {100, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> eelLengths = {30, 31};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> eelLengths = {100, 11, 21, 30, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> eelLengths = {50};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> eelLengths = {38, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> eelLengths = {63, 40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> eelLengths = {40, 20, 30, 50};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> eelLengths = {300};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> eelLengths = {100};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> eelLengths = {60, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {18, 18, 12, 40, 18, 18};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> eelLengths = {50, 50, 50, 40, 30, 40};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> eelLengths = {31, 20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {13, 13, 13, 40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {11, 11, 200, 200, 20, 20, 200, 1000};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> eelLengths = {20, 10};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> eelLengths = {60};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> eelLengths = {20, 20, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxCuts = 7;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> eelLengths = {143, 140, 15};
    int maxCuts = 14;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> eelLengths = {23, 23, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> eelLengths = {40, 30, 20, 20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> eelLengths = {13, 23, 40, 20, 20, 10, 33};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> eelLengths = {100, 100, 100, 19, 29, 39, 13, 33};
    int maxCuts = 15;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> eelLengths = {13, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> eelLengths = {12, 12, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> eelLengths = {30, 10, 10, 10, 50};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> eelLengths = {39, 20, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> eelLengths = {35, 100, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> eelLengths = {34, 28};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {5, 5, 15, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> eelLengths = {70, 30, 30, 30};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> eelLengths = {13, 13, 13, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> eelLengths = {50, 20, 20, 20, 20};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> eelLengths = {34, 30, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> eelLengths = {40, 20, 30};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> eelLengths = {27};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> eelLengths = {2, 30, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> eelLengths = {10, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> eelLengths = {15, 20, 35};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> eelLengths = {12, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> eelLengths = {19, 20, 23, 25, 72, 51, 40, 30, 20, 16, 10, 12};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> eelLengths = {19, 40, 63};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> eelLengths = {20, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> eelLengths = {13, 20, 13, 23, 36};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> eelLengths = {90, 120, 123, 45, 40, 30, 10, 20, 20, 22, 55, 30, 50};
    int maxCuts = 8;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> eelLengths = {60, 101};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> eelLengths = {100, 40, 40, 40};
    int maxCuts = 9;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> eelLengths = {10, 50, 40, 25};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> eelLengths = {30, 50, 30, 50};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> eelLengths = {40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> eelLengths = {50, 50, 30};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> eelLengths = {30, 30};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> eelLengths = {40, 20, 30};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> eelLengths = {63, 40, 20, 10, 10};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> eelLengths = {13, 13, 13, 30, 40};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> eelLengths = {30, 30, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> eelLengths = {11, 11, 11, 30, 30, 30};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> eelLengths = {10, 30, 20, 3};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> eelLengths = {10, 10, 10, 10, 10, 20, 20, 20, 20, 20, 202, 20, 20};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> eelLengths = {70, 80, 23, 20, 20, 20, 13, 40, 20, 30};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> eelLengths = {10, 10, 10, 30, 30, 21, 21, 41, 45, 49};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> eelLengths = {60, 20, 20, 20, 20, 20, 20, 20, 20};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> eelLengths = {50, 50, 50, 50, 50};
    int maxCuts = 20;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> eelLengths = {30, 50, 60, 50, 40, 20, 40, 30, 60, 80};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> eelLengths = {13, 23, 20};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> eelLengths = {60, 20, 20, 20, 20};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> eelLengths = {30, 20, 20, 17, 10};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> eelLengths = {15, 20, 30};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> eelLengths = {60, 30, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> eelLengths = {73, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> eelLengths = {20, 30, 50};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> eelLengths = {100, 105};
    int maxCuts = 7;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> eelLengths = {34};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
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
    vector<int> eelLengths = {99, 100, 999};
    int maxCuts = 9;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<int> eelLengths = {15, 15, 30};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<int> eelLengths = {20, 21};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<int> eelLengths = {70, 30, 30, 30, 30};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<int> eelLengths = {35, 30, 10, 10};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<int> eelLengths = {40};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    vector<int> eelLengths = {30, 50, 40, 50};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    vector<int> eelLengths = {20, 20, 30, 30};
    int maxCuts = 4;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    vector<int> eelLengths = {19, 20, 23, 25, 72, 51, 40, 30, 20, 16, 10, 12, 13, 14};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    vector<int> eelLengths = {13, 20, 33};
    int maxCuts = 1;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    vector<int> eelLengths = {100};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    vector<int> eelLengths = {70, 80, 20, 20, 20, 40, 20, 30};
    int maxCuts = 6;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    vector<int> eelLengths = {13, 13, 13, 30, 40};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    vector<int> eelLengths = {1000, 10};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    vector<int> eelLengths = {55, 50, 50, 50, 40, 30, 40};
    int maxCuts = 5;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    vector<int> eelLengths = {11, 21, 31, 41, 51, 100};
    int maxCuts = 9;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    vector<int> eelLengths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int maxCuts = 1000;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    vector<int> eelLengths = {7, 74, 20};
    int maxCuts = 2;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    vector<int> eelLengths = {40, 20, 20, 20, 20};
    int maxCuts = 3;
    Cut* pObj = new Cut();
    clock_t start = clock();
    int result = pObj->getMaximum(eelLengths, maxCuts);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14553&pm=11564
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
 
class Cut {
public:
  int getMaximum(vector <int>, int);
};
 
int Cut::getMaximum(vector <int> a, int cuts) {
  int n = a.size(), i, ans = 0;
  sort(a.begin(),a.end());
  for (i=0;i<n;i++)
    if (a[i] % 10 == 0)
      if (cuts >= a[i]/10-1) {
        cuts -= a[i]/10-1;
        ans += a[i]/10;
      }
      else return ans+cuts;
  for (i=0;i<n;i++)
    if (a[i] % 10 != 0)
      if (cuts >= a[i]/10) {
        cuts -= a[i]/10;
        ans += a[i]/10;
      }
      else return ans+cuts;
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/