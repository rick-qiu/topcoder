/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5905
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

class CuttingPoles {
public:
    int countCuts(vector<int> poles);
};

int CuttingPoles::countCuts(vector<int> poles) {
    int ret;
    return ret;
}


int test0() {
    vector<int> poles = {1, 3};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {10, 10, 10};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {1, 1, 3, 3};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> poles = {10, 10, 10, 10, 10, 10, 10, 18};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {10, 1, 9, 2, 8, 3, 7, 4, 6, 10};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> poles = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 950};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> poles = {42};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {468};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> poles = {335, 107};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {170, 450};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> poles = {479, 833};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> poles = {963, 27};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> poles = {706, 292};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> poles = {282, 656};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> poles = {962, 492, 22};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> poles = {943, 828, 437, 568};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> poles = {605, 903, 154, 293, 915};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> poles = {422, 717, 719, 896, 448, 878};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> poles = {772, 539, 870, 913, 668, 300, 964};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> poles = {895, 704, 812, 323, 334, 674, 665, 105};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> poles = {712, 254, 869, 548, 645, 663, 758, 38, 895};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> poles = {724, 742, 530, 779, 317, 36, 191, 843, 289, 109};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> poles = {41, 943, 265, 649, 447, 806, 891, 730, 371, 351, 732};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> poles = {102, 394, 549, 630, 624, 85, 955, 757, 841, 967, 377, 932, 309, 945, 440, 627, 324, 538, 539, 119, 83, 930, 813};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> poles = {834, 116, 640, 659, 705, 931, 978, 307, 674, 387, 22, 746, 925, 73, 271, 830, 778, 574, 98, 513, 987, 291, 58};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> poles = {637, 356, 768, 656, 575, 32, 53, 351, 151, 942, 725, 967, 431, 108, 192, 8, 338, 458, 288, 754, 384, 946, 207};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> poles = {210, 759, 222, 589, 423, 947, 507, 31, 414, 169, 901, 592, 763, 656, 411, 360, 625, 538, 549, 484, 596, 42, 781};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> poles = {351, 292, 837, 375, 21, 597, 22, 349, 200, 669, 485, 282, 735, 54, 1000, 419, 939, 901, 789, 128, 468, 729, 582};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> poles = {649, 484, 808, 422, 311, 618, 814, 515, 310, 617, 936, 452, 601, 250, 520, 557, 799, 304, 225, 9, 845, 610, 856};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> poles = {703, 196, 486, 94, 344, 524, 588, 315, 504, 449, 201, 459, 619, 581, 797, 799, 282, 590, 799, 10, 158, 473, 425};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> poles = {539, 293, 39, 180, 191, 658, 959, 192, 816, 889, 157, 512, 203, 635, 273, 56, 329, 647, 363, 887, 876, 434, 870, 143, 845, 417, 882, 999, 323, 652, 22, 700, 558, 477, 893, 390, 76, 713, 601, 511, 4, 870, 862, 689, 402, 790, 717};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> poles = {424, 3, 586, 183, 286, 89, 427, 618, 758, 833, 933, 170, 155, 722, 190, 977, 330, 369, 693, 426, 556, 435, 550, 442, 513, 146, 61, 719, 754, 140, 424, 280, 997, 688, 530, 550, 438, 867, 950, 194, 196, 298, 417, 287, 106, 489, 374};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> poles = {456, 735, 115, 702, 317, 672, 787, 264, 314, 356, 186, 54, 913, 809, 833, 946, 314, 757, 322, 559, 647, 983, 482, 145, 197, 223, 130, 162, 536, 451, 174, 467, 45, 660, 293, 440, 254, 25, 155, 511, 746, 650, 187, 314, 475, 23, 377};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> poles = {19, 788, 906, 959, 392, 203, 626, 478, 415, 315, 825, 335, 875, 373, 160, 834, 71, 488, 298, 519, 178, 774, 271, 764, 669, 193, 986, 103, 481, 214, 628, 803, 100, 528, 626, 544, 925, 24, 973, 62, 182, 4, 433, 506, 594, 726, 531};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> poles = {493, 143, 223, 287, 65, 901, 188, 361, 414, 975, 271, 171, 236, 834, 712, 761, 897, 668, 286, 551, 141, 695, 696, 625, 20, 126, 577, 695, 659, 303, 372, 467, 679, 594, 852, 485, 19, 465, 120, 153, 801, 88, 61, 927, 11, 758, 935};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> poles = {316, 577, 228, 44, 759, 165, 110, 883, 87, 566, 488, 578, 475, 626, 628, 630, 929, 424, 521, 903, 963, 124, 597, 738, 262, 196, 526, 265, 261, 203, 117, 31, 327, 12, 772, 412, 548, 154, 521, 791, 925, 189, 764, 941, 852, 663, 563};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> poles = {901, 714, 959, 579, 366, 8, 478, 201, 59, 440, 304, 761, 358, 325, 478, 109, 114, 888, 802, 851, 461, 429, 994, 385, 406, 541, 112, 705, 836, 357, 73, 351, 824, 486, 557, 217, 627, 358, 527, 358, 338, 272, 870, 362, 897, 23, 828};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> poles = {113, 718, 697, 586, 42, 424, 130, 230, 566, 560, 933, 297, 856, 54, 963, 585, 735, 655, 973, 458, 370, 533, 964, 608, 484, 912, 636, 68, 849, 676, 939, 224, 143, 755, 512, 742, 176, 460, 826, 222, 871, 627, 935, 206, 784, 851, 513};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> poles = {280, 702, 194, 735, 638, 535, 557, 994, 177, 706, 963, 549, 882, 301, 414, 642, 856, 856, 143, 463, 612, 878, 425, 679, 753, 444, 297, 674, 41, 314, 876, 73, 819, 611, 18, 933, 113, 696, 170, 832, 41, 489, 686, 91, 498, 590, 991, 146, 354, 519};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> poles = {652, 741, 45, 259, 336, 760, 193, 606, 265, 182, 504, 830, 776, 609, 293, 998, 550, 557, 562, 628, 468, 542, 130, 241, 814, 175, 602, 78, 216, 684, 214, 993, 825, 602, 393, 760, 671, 429, 28, 85, 76, 787, 499, 971, 288, 848, 605, 504, 222, 754};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> poles = {707, 364, 11, 172, 490, 241, 165, 543, 620, 914, 592, 705, 819, 233, 751, 206, 976, 540, 304, 423, 99, 248, 585, 649, 972, 865, 914, 76, 546, 713, 547, 679, 770, 263, 520, 986, 290, 945, 866, 541, 246, 509, 319, 871, 602, 324, 133, 473, 153, 370};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> poles = {571, 764, 902, 104, 424, 528, 601, 970, 16, 566, 29, 544, 348, 89, 944, 638, 410, 464, 50, 682, 589, 343, 609, 61, 222, 759, 955, 889, 147, 691, 950, 844, 431, 621, 749, 68, 537, 784, 36, 227, 186, 39, 854, 630, 225, 749, 924, 360, 258, 469};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> poles = {945, 956, 319, 727, 412, 26, 356, 2, 550, 497, 585, 516, 965, 343, 76, 914, 143, 197, 949, 73, 427, 607, 174, 430, 405, 706, 627, 813, 376, 94, 566, 37, 737, 142, 815, 995, 257, 653, 937, 839, 483, 356, 16, 132, 231, 842, 626, 12, 638, 326};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> poles = {691, 651, 663, 635, 894, 354, 417, 453, 9, 263, 234, 455, 304, 635, 304, 257, 149, 125, 318, 214, 110, 29, 201, 81, 319, 859, 51, 156, 362, 265, 904, 677, 644, 910, 903, 562, 490, 949, 283, 654, 675, 221, 403, 924, 832, 370, 879, 260, 9, 493};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> poles = {972, 4, 946, 782, 505, 393, 686, 314, 699, 590, 723, 939, 38, 411, 462, 235, 509, 962, 960, 494, 516, 270, 938, 870, 59, 701, 972, 265, 118, 216, 556, 816, 331, 40, 213, 289, 83, 955, 86, 711, 485, 775, 381, 816, 952, 542, 116, 680, 111, 63};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> poles = {74, 789, 978, 133, 957, 690, 114, 9, 942, 791, 724, 364, 29, 185, 779, 201, 72, 886, 975, 72, 334, 868, 154, 296, 169, 826, 677, 630, 651, 599, 310, 694, 687, 81, 117, 250, 668, 529, 680, 865, 422, 406, 827, 817, 517, 727, 667, 88, 682, 748};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> poles = {341, 687, 22, 663, 722, 65, 310, 416, 903, 874, 125, 942, 746, 763, 424, 532, 807, 269, 319, 603, 908, 308, 482, 13, 137, 631, 115, 810, 85, 557, 291, 294, 997, 153, 55, 346, 709, 249, 492, 713, 132, 115, 440, 959, 723, 705, 996, 53, 270, 629};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> poles = {239, 424, 919, 867, 660, 499, 487, 197, 463, 634, 159, 23, 147, 393, 38, 926, 648, 459, 603, 808, 99, 831, 293, 601, 279, 800, 353, 449, 883, 541, 316, 576, 763, 568, 337, 398, 419, 898, 829, 852, 817, 231, 450, 926, 659, 230, 521, 941, 561, 236};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> poles = {163, 656, 676, 793, 362, 755, 399, 147, 715, 947, 189, 570, 639, 664, 76, 516, 522, 476, 616, 529, 235, 571, 906, 465, 558, 963, 162, 525, 550, 470, 331, 924, 351, 334, 926, 911, 738, 337, 338, 279, 394, 637, 715, 165, 592, 950, 136, 506, 338, 533};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> poles = {338, 624, 665, 971, 609, 569, 282, 86, 153, 374, 653, 195, 877, 827, 397, 573, 250, 641, 175, 820, 944, 612, 942, 290, 420, 566, 806, 586, 217, 451, 616, 610, 65, 167, 894, 75, 510, 301, 696, 574, 590, 162, 173, 969, 359, 32, 269, 427, 511, 537};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> poles = {775, 780, 911, 553, 183, 392, 496, 765, 875, 365, 903, 256, 461, 475, 973, 822, 123, 548, 578, 790, 606, 196, 595, 951, 344, 755, 482, 13, 673, 440, 429, 913, 763, 968, 409, 416, 909, 224, 760, 435, 205, 487, 320, 959, 946, 807, 167, 701, 368, 185};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> poles = {788, 533, 557, 975, 448, 22, 284, 223, 332, 377, 584, 949, 724, 983, 19, 777, 221, 112, 183, 857, 491, 926, 325, 487, 678, 970, 644, 535, 678, 669, 69, 992, 197, 784, 829, 728, 427, 872, 698, 613, 704, 28, 409, 546, 509, 186, 239, 238, 444, 737};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> poles = {502, 851, 129, 112, 651, 150, 193, 455, 870, 682, 466, 268, 714, 794, 635, 473, 973, 831, 902, 443, 178, 878, 771, 703, 365, 382, 591, 824, 238, 24, 180, 596, 170, 328, 43, 311, 183, 59, 927, 488, 671, 529, 652, 259, 214, 861, 784, 287, 743, 167};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> poles = {473, 129, 435, 842, 719, 504, 868, 866, 939, 882, 258, 751, 615, 599, 459, 662, 64, 757, 808, 279, 490, 436, 366, 76, 587, 387, 834, 361, 331, 49, 929, 493, 434, 841, 767, 736, 811, 600, 838, 893, 983, 329, 353, 370, 245, 795, 609, 253, 648, 497};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> poles = {536, 209, 265, 498, 244, 650, 16, 842, 190, 101, 813, 649, 524, 852, 475, 634, 892, 201, 855, 991, 698, 920, 781, 579, 932, 545, 341, 488, 900, 526, 484, 539, 493, 194, 253, 12, 561, 835, 841, 498, 786, 530, 541, 806, 792, 393, 211, 550, 579, 905};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> poles = {972, 278, 74, 194, 621, 498, 827, 277, 791, 583, 579, 160, 419, 490, 160, 450, 925, 73, 381, 9, 968, 209, 478, 504, 371, 608, 197, 75, 723, 612, 20, 762, 57, 891, 164, 684, 717, 933, 453, 742, 955, 814, 863, 397, 461, 616, 905, 600, 137, 323};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> poles = {199, 33, 388, 585, 241, 518, 7, 671, 242, 883, 250, 524, 759, 106, 622, 96, 297, 917, 679, 179, 580, 59, 578, 751, 8, 730, 82, 996, 679, 677, 754, 900, 785, 566, 94, 609, 173, 244, 930, 515, 169, 56, 192, 974, 923, 749, 652, 987, 145, 597};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> poles = {578, 518, 630, 917, 875, 792, 470, 913, 147, 694, 92, 816, 950, 858, 641, 53, 237, 552, 488, 227, 163, 956, 184, 395, 181, 98, 66, 66, 514, 262, 579, 79, 879, 141, 612, 948, 446, 171, 976, 490, 751, 150, 334, 866, 215, 283, 8, 433, 897, 409};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> poles = {523, 883, 811, 642, 232, 188, 706, 480, 322, 539, 352, 448, 209, 647, 277, 760, 190, 423, 667, 487, 456, 29, 615, 861, 254, 778, 349, 504, 862, 432, 83, 456, 198, 107, 753, 822, 297, 282, 22, 456, 948, 125, 319, 136, 377, 775, 860, 999, 75, 34};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> poles = {923, 636, 644, 889, 154, 233, 748, 681, 927, 679, 451, 802, 962, 200, 856, 364, 717, 574, 562, 246, 474, 275, 551, 354, 182, 288, 700, 111, 644, 466, 173, 530, 982, 113, 477, 382, 248, 891, 672, 806, 373, 33, 990, 321, 166, 432, 659, 294, 207, 808};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> poles = {949, 207, 172, 167, 397, 698, 21, 695, 530, 789, 110, 985, 970, 979, 618, 16, 627, 685, 169, 907, 929, 98, 119, 391, 200, 786, 487, 200, 421, 711, 272, 814, 416, 86, 319, 581, 332, 268, 388, 445, 187, 508, 361, 828, 75, 432, 153, 272, 269, 11};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> poles = {886, 338, 312, 605, 678, 407, 769, 23, 414, 1, 543, 538, 39, 389, 356, 290, 648, 182, 94, 585, 988, 762, 494, 218, 502, 483, 448, 666, 754, 105, 85, 96, 526, 222, 965, 782, 873, 107, 657, 344, 594, 81, 81, 869, 412, 714, 969, 252, 217, 737};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> poles = {769, 41, 532, 934, 780, 664, 260, 654, 937, 96, 366, 875, 721, 836, 681, 977, 456, 726, 72, 809, 560, 157, 603, 833, 906, 441, 376, 563, 886, 963, 81, 837, 798, 203, 509, 81, 341, 77, 59, 494, 741, 547, 475, 774, 98, 881, 336, 73, 401, 220};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {956, 667, 142, 589, 482, 169, 316, 397, 226, 10, 13, 137, 456, 763, 44, 743, 22, 923, 513, 249, 19, 369, 718, 715, 651, 291, 336, 760, 170, 896, 304, 641, 980, 200, 106, 792, 662, 682, 653, 754, 34, 30, 988, 43, 254, 84, 421, 815, 719, 446};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> poles = {64, 230, 653, 865, 770, 471, 6, 48, 595, 488, 327, 277, 324, 541, 680, 991, 589, 711, 272, 946, 222, 471, 184, 590, 956, 979, 780, 7, 263, 136, 488, 197, 34, 89, 936, 780, 994, 791, 963, 966, 2, 106, 808, 568, 670, 135, 672, 458, 999, 558};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> poles = {598, 219, 839, 845, 373, 564, 29, 265, 802, 724, 491, 605, 602, 228, 198, 693, 772, 364, 302, 364, 722, 566, 422, 446, 611, 496, 742, 23, 813, 152, 16, 56, 394, 739, 280, 883, 609, 655, 823, 708, 246, 339, 145, 291, 340, 155, 605, 624, 226, 746};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> poles = {725, 982, 331, 734, 224, 595, 131, 847, 988, 446, 806, 617, 751, 490, 339, 964, 136, 698, 210, 631, 225, 909, 738, 475, 921, 373, 294, 856, 735, 562, 57, 607, 185, 76, 383, 120, 742, 433, 685, 780, 280, 284, 668, 837, 126, 119, 738, 29, 120, 48};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> poles = {738, 92, 557, 796, 61, 902, 794, 433, 137, 581, 876, 908, 185, 75, 720, 791, 477, 42, 352, 330, 291, 975, 73, 592, 190, 788, 491, 240, 894, 54, 64, 682, 904, 6, 177, 480, 696, 140, 469, 999, 84, 640, 516, 622, 994, 827, 723, 839, 829, 174};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> poles = {400, 979, 892, 24, 944, 835, 244, 350, 703, 708, 503, 142, 688, 347, 892, 638, 414, 401, 817, 691, 163, 936, 127, 411, 878, 383, 261, 190, 706, 875, 664, 723, 196, 567, 361, 39, 589, 812, 246, 468, 426, 868, 190, 543, 64, 548, 503, 618, 100, 33};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> poles = {227, 204, 49, 52, 571, 637, 459, 968, 457, 406, 532, 963, 820, 976, 557, 532, 496, 45, 592, 804, 389, 916, 451, 320, 273, 792, 384, 134, 776, 643, 570, 301, 955, 79, 586, 258, 334, 894, 491, 104, 751, 234, 723, 272, 612, 991, 339, 642, 259, 480};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> poles = {353, 659, 480, 303, 684, 991, 3, 569, 423, 896, 136, 9, 362, 743, 195, 700, 189, 179, 43, 358, 942, 848, 470, 346, 381, 914, 965, 711, 62, 386, 74, 505, 463, 704, 103, 70, 155, 530, 553, 75, 150, 731, 245, 845, 50, 119, 66, 364, 553, 395};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> poles = {471, 732, 748, 512, 870, 399, 499, 104, 353, 680, 54, 44, 523, 89, 564, 835, 851, 23, 241, 912, 493, 652, 581, 478, 617, 877, 179, 221, 616, 349, 799, 180, 636, 858, 884, 663, 903, 263, 421, 771, 23, 274, 842, 687, 889, 918, 718, 893, 699, 12};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    vector<int> poles = {10, 10, 10, 18, 18, 18, 18, 18};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> poles = {1, 2, 6, 3};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> poles = {10, 10, 10, 10, 10, 10, 18, 18};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> poles = {10, 18, 18, 18};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> poles = {1, 7, 7};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> poles = {10, 20};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> poles = {1, 6, 6, 6, 6};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> poles = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> poles = {10, 10, 10, 10, 10, 10, 10, 18};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> poles = {1, 10, 13};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> poles = {1, 3, 5};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> poles = {1, 2, 3, 6};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> poles = {1, 4, 5, 5, 5};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> poles = {1, 4, 6, 9};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> poles = {1, 3, 3, 3, 3, 28, 28, 28, 29};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> poles = {10, 10, 7};
    CuttingPoles* pObj = new CuttingPoles();
    clock_t start = clock();
    int result = pObj->countCuts(poles);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20763521&rd=8083&pm=5905
********************************************************************************
#pragma warning (disable:4786) 
 
#include <sstream> 
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
typedef vector <int> VI; 
typedef vector <string> VS; 
 
class CuttingPoles  
{ 
public: 
  int countCuts(vector <int> a)  
  { 
    int tot = 0; 
    int i, n = a.size(); 
    for (i=0;i<a.size();i++) 
      tot += a[i]; 
 
    tot /= (a.size()); 
     
    int ans = 0; 
    sort(a.begin(), a.end()); 
    while ( a[0]!=a[n-1] ) 
    { 
      int diff = a[n-1] - tot; 
      a[0] += diff; 
      a[n-1] -= diff;; 
      ans++; 
      sort(a.begin(), a.end()); 
    } 
 
    return ans; 
  } 
 
   
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/