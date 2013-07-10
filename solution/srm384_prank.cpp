/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8199
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

class Prank {
public:
    vector<int> realWeight(int apparentGain);
};

vector<int> Prank::realWeight(int apparentGain) {
    vector<int> ret;
    return ret;
}


int test0() {
    int apparentGain = 233;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {117};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int apparentGain = 15;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int apparentGain = 1440;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 39, 42, 46, 49, 53, 66, 77, 94, 123, 182, 361};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int apparentGain = 100000;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {325, 350, 550, 665, 1025, 1270, 2510, 3133, 5005, 6254, 12502, 25001};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int apparentGain = 93301;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3595, 46651};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int apparentGain = 3;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int apparentGain = 15;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int apparentGain = 45;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 9, 23};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int apparentGain = 96;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 14, 25};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int apparentGain = 192;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 16, 19, 26, 49};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int apparentGain = 240;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 17, 19, 23, 32, 61};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int apparentGain = 480;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 23, 26, 29, 34, 43, 62, 121};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int apparentGain = 720;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 28, 29, 36, 41, 49, 63, 92, 181};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int apparentGain = 960;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 32, 34, 38, 46, 53, 64, 83, 122, 241};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int apparentGain = 1440;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 39, 42, 46, 49, 53, 66, 77, 94, 123, 182, 361};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int apparentGain = 2880;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54, 56, 58, 61, 63, 72, 82, 89, 98, 126, 149, 184, 243, 362, 721};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int apparentGain = 3360;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 59, 61, 62, 71, 74, 82, 94, 113, 127, 146, 173, 214, 283, 422, 841};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int apparentGain = 5040;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71, 72, 73, 81, 83, 88, 99, 104, 117, 136, 149, 187, 216, 257, 319, 423, 632, 1261};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int apparentGain = 6720;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {82, 83, 86, 88, 94, 101, 104, 121, 127, 134, 152, 178, 218, 247, 286, 341, 424, 563, 842, 1681};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int apparentGain = 10080;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 102, 103, 106, 107, 114, 118, 129, 141, 146, 158, 183, 194, 222, 262, 289, 323, 367, 426, 509, 634, 843, 1262, 2521};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int apparentGain = 20160;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {142, 143, 144, 146, 153, 157, 162, 166, 176, 179, 198, 208, 234, 261, 272, 298, 331, 351, 374, 432, 514, 569, 638, 727, 846, 1013, 1264, 1683, 2522, 5041};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int apparentGain = 30240;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {174, 177, 178, 183, 186, 191, 194, 213, 222, 229, 246, 251, 282, 298, 307, 339, 381, 398, 438, 519, 554, 642, 766, 849, 953, 1087, 1266, 1517, 1894, 2523, 3782, 7561};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int apparentGain = 40320;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {201, 202, 204, 206, 212, 214, 223, 228, 236, 258, 269, 282, 292, 316, 323, 347, 366, 388, 444, 501, 524, 578, 646, 687, 734, 852, 1018, 1129, 1268, 1447, 1686, 2021, 2524, 3363, 5042, 10081};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int apparentGain = 60480;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {246, 247, 248, 249, 258, 264, 269, 282, 286, 303, 312, 326, 334, 363, 381, 402, 418, 456, 467, 534, 568, 587, 654, 741, 776, 858, 961, 1023, 1094, 1272, 1522, 1689, 1898, 2167, 2526, 3029, 3784, 5043, 7562, 15121};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int apparentGain = 80640;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {284, 286, 288, 292, 297, 306, 314, 324, 332, 352, 358, 379, 383, 396, 416, 468, 493, 522, 544, 596, 611, 662, 702, 748, 864, 981, 1028, 1138, 1276, 1359, 1454, 1692, 2026, 2249, 2528, 2887, 3366, 4037, 5044, 6723, 10082, 20161};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int apparentGain = 92681;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46341};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int apparentGain = 93725;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {369, 465, 1887, 2049, 9375, 46863};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int apparentGain = 94455;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1072, 3156, 5252, 9448, 15744, 47228};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int apparentGain = 95665;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {313, 551, 929, 2527, 9569, 47833};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int apparentGain = 96907;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48454};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int apparentGain = 97253;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3747, 48627};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int apparentGain = 98221;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49111};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int apparentGain = 99099;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {318, 330, 418, 470, 482, 550, 590, 682, 818, 1290, 1518, 2370, 3818, 4510, 5510, 7082, 16518, 49550};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int apparentGain = 99997;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {319, 2641, 49999};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int apparentGain = 99999;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {320, 468, 1240, 5560, 16668, 50000};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int apparentGain = 85171;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {830, 42586};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int apparentGain = 96740;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {726, 3462, 4842, 24186};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int apparentGain = 10498;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int apparentGain = 648;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 33, 57, 83, 163};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int apparentGain = 30765;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {199, 457, 743, 1033, 2201, 3079, 5129, 15383};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int apparentGain = 13469;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6735};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int apparentGain = 24342;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int apparentGain = 1594;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int apparentGain = 6271;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3136};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int apparentGain = 22640;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {303, 576, 1137, 1419, 2832, 5661};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int apparentGain = 7356;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {616, 1840};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int apparentGain = 64420;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3226, 16106};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int apparentGain = 83735;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8376, 41868};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int apparentGain = 19855;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {152, 208, 532, 908, 1988, 9928};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int apparentGain = 31292;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7824};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int apparentGain = 948;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {82, 238};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int apparentGain = 20934;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int apparentGain = 9298;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int apparentGain = 79400;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {447, 819, 1995, 3975, 9927, 19851};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int apparentGain = 87157;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6229, 43579};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int apparentGain = 9006;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int apparentGain = 18143;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9072};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int apparentGain = 23916;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1996, 5980};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int apparentGain = 94926;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int apparentGain = 98318;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int apparentGain = 16;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int apparentGain = 10000;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {125, 145, 260, 505, 629, 1252, 2501};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int apparentGain = 99994;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int apparentGain = 50000;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {225, 300, 525, 645, 1260, 2505, 3129, 6252, 12501};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int apparentGain = 93303;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {772, 2232, 5188, 6668, 15552, 46652};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int apparentGain = 96001;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48001};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int apparentGain = 1;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int apparentGain = 2168;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {273, 543};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int apparentGain = 94005;
    Prank* pObj = new Prank();
    clock_t start = clock();
    vector<int> result = pObj->realWeight(apparentGain);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1067, 3141, 5227, 9403, 15669, 47003};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=267465&rd=10808&pm=8199
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
 
class Prank {
public:
  vector <int> realWeight(int);
};
 
vector <int> Prank::realWeight(int apparentGain) {
  vector<int> retval;
  for(int i=1;i<=100000;i++)
  {
    for(int j=i+1;j<=100000;j++)
    {
      int old = i * i;
      int neww = j * j;
      if((neww-old)==apparentGain)
      {
        retval.push_back(j);
        j=100000;
      }
      if((neww-old)>apparentGain)
      {
        j=100000;
      }
    }
  }
  sort(retval.begin(),retval.end());
  return retval;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/