/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12029
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

class ANDEquation {
public:
    int restoreY(vector<int> A);
};

int ANDEquation::restoreY(vector<int> A) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {1, 3, 5};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {31, 7};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {31, 7, 7};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {32763, 32751, 32751, 32763, 24575, 32751, 32767, 32767, 32751, 32767, 24575, 32767, 32767, 32767, 24559, 32767, 32763, 32763, 32767, 32751, 32763, 32767, 32767, 24555, 32767, 32767, 32751, 32751, 32767, 24575, 32751, 32767, 32751, 32767, 32767, 24575, 32751, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767, 32767};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 24555;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {13, 13, 13, 15, 15};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {915198, 915199, 915198, 917247, 915198, 917246, 915454, 1046526, 917246, 1046526, 917246, 1046271, 1046270, 915198, 915454, 915454, 915454, 1048318, 915199, 1046526, 1048318, 915198, 915198, 915455, 915454, 915199, 915198, 1046270, 915198};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 915198;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {65324, 14980, 14788, 63622, 14420, 65093, 14493, 14340, 47700, 48260, 15428, 47110, 14341, 14885, 14404, 14406, 64516, 15013, 14638, 65029, 14476, 15886, 14484, 14476, 47949, 14340, 32446, 14598, 48404, 32292, 48590, 31748, 14484, 63566, 14854, 14342};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 14340;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {37, 21, 13, 14, 54, 36, 36, 15, 4, 108, 6, 52, 5, 21, 85, 22, 70, 13, 68, 102, 36, 36, 84, 31, 47, 68, 20, 5};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {255, 223, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 215, 223, 255, 247, 255};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {88, 88, 88, 90, 88, 89, 94, 121, 125, 88, 88, 124, 88, 120, 88, 90, 120, 88, 92, 92, 88, 88, 88, 90, 88, 93, 88, 92, 89, 90, 88, 88, 90, 89, 120, 89, 88, 88};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {1048519, 1048519, 1048519, 1048519, 1048519, 1048519, 1048519, 1048519, 1048519, 1048519, 1048519, 1048551, 1048519, 1048519, 1048551, 1048519, 1048551, 1048519, 1048527, 1048527, 1048519, 1048535, 1048551, 1048519, 1048519, 1048519, 1048519, 1048551, 1048519};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1048519;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 31, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 31, 15, 31, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {982855, 343399, 343303, 269623, 269671, 269575, 401199, 270303, 286487, 826831, 417167, 376167, 367879, 998791, 335183};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 269575;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {511, 495, 511, 511, 511, 511, 511, 495, 511, 511, 495, 511, 511, 511, 495, 495, 511, 511, 511, 511, 511, 495, 511, 511, 511, 511, 511, 511, 511, 495};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 495;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {511, 495, 495, 511, 255, 495, 239, 495};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {740, 740, 750, 1012, 996, 740, 740, 740, 740, 756, 756, 998, 748, 740, 740, 748, 740, 756, 740, 740, 749, 742, 740, 740, 740, 740, 742, 740, 740, 740, 740, 1012};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 740;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {1023, 1023, 1023, 1023};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {7631, 7631, 7631, 7631, 7631, 7631, 8143, 7631, 7631};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 7631;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {4095, 4095, 4030, 3007, 4095, 3071, 4095, 4094, 4095, 4031, 3071, 4094, 3006, 4094, 3071, 4095, 3071, 4094, 4094, 3071, 4031, 4095, 4095, 4095, 4095, 4031, 3070, 3071, 4094, 4095, 4094, 3071, 4095, 4094, 4094, 4094, 3071, 4095, 4095, 3070, 4094, 4095, 3071, 4094, 3071, 3070, 4095, 4095, 4094, 4094};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 3006;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {196541, 262135, 262069, 262141, 196605, 262143, 196607, 262141, 196533};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 196533;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 16383;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {63, 59, 59, 63, 27, 31, 31, 63, 63, 63, 31, 59, 59, 63, 63, 63, 27, 59, 63, 63, 31, 27, 31, 27, 59, 63, 59, 63, 31, 63, 31, 59, 59, 59, 59, 59, 27, 27, 27, 59, 59, 63, 63, 63};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {935, 2, 692, 304, 826, 658, 10, 576, 225, 360, 37, 625, 320, 370, 734, 112, 621, 388, 779, 582, 341, 456, 976, 30, 920, 49, 841, 616, 1008, 970, 256, 49, 319, 171, 0, 578, 537, 515, 226, 786, 133, 802, 35, 1, 208, 648, 100, 667, 840, 137};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {33280, 33284, 33408, 33284, 37392, 35328, 33280, 34304, 33280, 33280, 33280, 37384};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 33280;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {2043, 1915, 1915, 1915, 2043, 2043, 1915, 1915, 1915, 1915, 1915, 1915, 1915, 2043, 1915, 2043, 2043, 1915, 2047, 1915};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1915;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {1, 1, 1, 1, 1, 1, 9, 5, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 3};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {6, 5, 4, 4, 7, 5, 4, 4, 4, 6, 5, 4, 6, 4, 6, 6, 4};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {517621, 518133, 521717, 517621, 517629, 523767, 517629, 517623, 517621, 518141, 520181, 518141, 521717, 519671, 521717, 517623, 519669, 519671, 521717, 521725, 517621, 517623, 517623, 523765, 517629, 519679, 522229, 517621};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 517621;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {127, 127, 127, 127, 127, 255, 127, 127, 127, 127, 255, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 255, 127, 127, 127, 127, 127, 127};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {191411, 256951, 191411, 191411, 191411, 256951, 195507, 191411, 192435, 191411, 191411, 195511, 191419, 191411, 256947, 191415, 191475, 195579, 191415, 191411, 191483, 191411, 191419, 191475, 256947, 191411, 191411, 191411, 191419, 256947, 191411, 191411, 191411};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 191411;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16383};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 16383;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {11, 11, 14, 10, 11, 11, 10, 10, 10, 15, 15, 15, 15, 14, 14, 10, 10, 10, 15, 15, 10, 10, 14, 15, 14, 14, 10, 10, 11, 10, 11, 11, 10, 15, 10, 15, 15, 10, 11, 15};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {23, 15, 15, 15, 7, 23, 23, 15, 15};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071, 131071};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 131071;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {81911, 81911, 81919, 81911, 81911, 98295, 81911, 81911, 81911, 81911, 81911, 81911, 114679, 81911, 114679, 131063, 98295, 81911, 81911, 81911, 131071, 81911, 81919, 81911, 81911, 81911, 81911, 81911, 114687, 81911, 98295, 81911, 114679};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 81911;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {59, 59, 63, 63, 59};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {513, 155, 8, 1220, 32, 1776, 417, 768, 113, 1088, 105, 12, 113, 1320, 1046, 112, 100, 137, 9, 0, 169, 270, 1808, 16, 512, 192, 128, 898, 592, 1024, 4, 296};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {111, 111, 127, 238, 238, 254, 126, 110, 238, 110, 126, 238, 238, 111, 238, 127, 238, 254, 126, 127, 126, 110, 254};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {23, 31, 9, 25, 29, 15, 11, 27, 27, 29, 31, 23, 27, 31, 27, 19, 29, 31, 27};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {262143, 262139, 262139, 262139, 131071, 262143, 262143, 262139, 262139, 262143, 262143, 262143, 262139, 262143, 262127, 262143, 262143, 262127, 131067, 262127, 131055, 262127, 262143, 262127, 131071, 262143, 131071, 262143, 262143, 131071, 262143, 262143, 262143, 262143, 262143, 131071, 262143, 262143, 262143, 262143, 131067, 262143, 262143, 262139, 131071, 262143};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {12, 31, 20, 7, 11, 20, 27, 10, 7, 21, 17, 15, 31, 30, 27};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {901119, 1032191, 1044479, 913343, 917439, 912319, 917503, 846847, 1028095, 1032191, 982975, 850943, 835583, 835583, 847807, 965631, 1028095, 977919, 850943, 1044479, 847871, 847807, 917439, 895999, 834559, 847871, 1043455, 1048511, 965567, 981951, 1032127, 962559, 901119, 1048575, 851903, 912383, 851903, 1047487, 901119};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {2047, 2047, 1535, 2047, 2047, 1983, 2047, 1791, 1535, 2047, 2047, 1791, 2047, 2047, 2047, 2047, 2047, 1919, 1535, 1791, 1919};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {65535, 52735, 60414, 65487, 65487, 52175, 60831, 61374, 65023, 56766};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {15, 15, 11, 15, 5, 7, 15, 13, 15, 15, 15, 15, 7, 5, 15, 15, 15, 11, 15, 15, 15, 7, 11, 15, 15, 7, 15, 15, 15, 15, 13, 15, 15, 15, 15, 13};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {1362, 1066, 1659, 2010, 1912, 1720, 1851, 1593, 1799, 1805, 1139, 1493, 1141, 1163, 1211};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {5757, 8047, 4093, 3838, 7671, 7423, 7135, 7163, 7676, 2942, 7663, 7679, 3518, 7679, 3541, 8071, 6135, 7935, 8127, 7679, 8187, 4031, 7161, 8095, 7907, 7670, 8186, 6911, 7903, 8043, 6140, 3985, 6133, 8063, 8191, 4095, 7679, 7915, 5118, 7679, 8175, 8191, 5887};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {31, 31, 23, 30, 31};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {1023, 447, 1023, 1013, 959, 1023, 959, 1023, 959, 638, 1023, 767, 990, 959, 1023, 1023, 1017, 1019, 767};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {447, 511, 511};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {98239, 130815, 128767, 130719, 130815, 98303, 131005, 129023, 130943, 128991, 130815, 131039, 130783, 131071, 122749, 129021, 131007, 122879, 131071, 131037, 122495, 90031, 131007, 95791, 122607, 129007, 131053, 130815, 131055, 131039, 98287, 122877, 131055, 122847, 90109, 131071, 130911, 98175, 131023, 122879, 122495, 129007, 98303, 122879, 131071, 130815};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {4095, 4095, 4095, 4095, 4095, 4095, 4087, 4095, 4095, 4093, 4095, 3581, 4093, 3519, 4031, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095, 4031};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {511, 511, 511, 511, 507, 511, 511, 479, 511, 511, 511, 511, 511, 511, 507, 511, 511, 511, 511, 479, 495, 511, 511, 511, 511, 511, 511, 511, 507, 511, 511, 511, 511, 511, 507};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {238, 446, 47, 127, 430, 366, 446, 111, 62, 174, 367, 511, 127, 495, 254, 190, 302, 191, 446};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {6045, 7839, 6132, 5854, 7927, 14300};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {1446, 1422, 1398, 1517, 1350, 1895, 1372, 1431, 1870, 1391, 1422, 1502, 1391, 1870, 1957, 1324, 2031, 1807, 1919, 1853, 2012, 1806, 1845, 1877, 1485, 1399, 1980, 1316, 1999, 1965, 2013, 1836, 1478, 1511, 1294, 1892, 1887, 1949, 1933, 1444, 1303, 1894};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {795, 957, 989, 1011, 921, 1009, 921, 923, 823, 1021, 987, 927, 883, 923, 955, 827, 825, 991, 953, 957, 959, 851, 887, 889, 895, 885, 849, 1023, 895, 989, 857};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {511, 511, 495, 479, 239, 463, 495, 255, 222, 511, 247, 503};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {246, 247, 255, 251, 255, 255};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {15345, 31734, 24575, 30719, 30591, 20471, 14704, 26559, 30591, 26623, 3966, 32127, 25584, 31739, 31728, 31735, 22335, 25535, 8189, 29692, 16371, 30205, 32703, 32759, 32703};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {9, 12, 9, 12, 15, 11, 4, 12, 15, 15, 12, 12, 12, 14, 6, 11, 13, 14, 11, 11, 1, 11, 11, 7};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {94075, 131037, 94207, 125755, 126829, 81851};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {63076, 112469, 201830, 151236, 76916, 9333, 67092, 7447, 3540, 155044, 2020, 95885, 27941, 228429, 89669, 156877, 171415, 83756, 37895, 3604, 21812, 83076, 24108, 1335, 17678, 72735, 17862, 55092, 19468, 1559, 1510, 1132, 148660, 126260, 34526, 5174, 75014, 230487, 11364, 11540, 34100};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {60757, 61169, 65247, 65403, 65239, 65535, 63199, 65271, 63487, 64725};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {767, 453, 1019, 999, 239, 479, 471};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {1027581, 1045949, 249338, 1043448, 524281, 738815, 1023993, 1011135, 1004415, 1000959, 1046396, 509372, 999281, 1031613, 1030654, 728959, 474998, 1019773, 256497, 519674, 1022399, 198586, 996341, 260019, 784883};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {1048575, 1047551, 1048319, 1048575, 1047551, 1047293, 1047167, 1048189, 1048319, 1048447, 1048575, 1048319, 1048191, 1047295};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {191, 255, 255, 255, 255, 255, 254, 255, 255, 255, 255, 254, 191, 255, 255, 251, 255, 255, 255, 255, 255, 255, 127, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {255, 255, 255, 255, 255, 255, 255, 255, 255, 191, 255, 255, 191, 251, 255, 223, 255, 255, 255, 251, 255, 191, 255, 251, 255, 255, 251, 255, 255};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {262142, 261103, 261886, 261103, 262143, 262063, 262143, 261567, 131070, 196095, 97279, 196603, 258047, 131071, 262135, 126463, 262127, 216575, 192511, 229371, 253951, 262143, 262143, 253423, 262142, 262143, 130039, 262143, 262143, 122879, 261631, 247783, 262143, 262143};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {90, 723, 255, 71, 1010, 603, 363, 219, 106, 866, 631, 754, 634, 334, 355, 735, 330, 579, 98, 883, 870, 622, 334, 474, 478, 506, 510, 238, 98, 67, 998, 978, 622, 450, 342, 734, 635, 203, 330, 750, 195, 214, 326, 338, 894};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {32683, 32750, 28615, 32683, 32751};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {511, 1023, 1023, 1023, 1023};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> A = {255, 159, 77, 251, 235, 253, 201, 235, 255, 253, 63, 95, 127, 239, 29, 239, 219, 47, 235, 187, 217, 127, 237, 239, 127, 203, 43, 255, 95, 253, 125, 255, 109, 253, 221, 95, 217, 155, 125, 191, 253, 13, 27, 127, 175, 251, 189, 203};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {32765, 28671, 32763, 32767, 32761, 28671, 28671, 30717, 30719, 32767, 30717, 30719, 32765, 32767, 32765, 32767, 32765, 32765, 32763, 24575, 24575, 32767, 32767, 32765, 30719, 32763, 24575, 24575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {981368, 753371, 524143, 896759, 1040308, 745397, 655199, 716669, 1046959, 386894, 752639, 116607, 1048429, 998895, 1007015, 407407, 456703, 523706, 1044415};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {393215, 524223, 521661, 458367, 522230, 522941, 489465, 131059, 392699, 523772, 524223, 524023, 522687, 425983, 393211, 491263, 261631, 260991, 491518, 524287, 392376, 524287, 62003, 491517, 524285, 127871, 524287, 491002, 457203, 425726, 424951, 491451, 520887, 98301, 393215, 521213, 260094, 390846, 524275};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {8175, 16367, 14314, 6139, 6138, 16379, 6143, 14334, 6139, 14334, 8191, 6123, 8191, 14314, 16378, 8186, 8186, 14335, 14319, 16367, 6139, 8175, 14318, 14314, 8175, 8191, 14319, 6126, 8190, 8175, 8191, 16363, 8191, 16363, 6126, 14334, 16362, 14319, 8191, 16363, 16363, 14318, 16379, 14330, 16382, 6127};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {884709, 1044461, 880501, 916855, 884197, 880501, 1048037, 1011573, 880125, 1048429, 884725, 880101, 880119, 884607, 913383, 880501, 884085, 912869, 913405, 880629, 1043837, 879981, 1011061, 1011173, 912741, 1015653, 1044333, 880631, 884071, 880119, 1011053, 1015141, 1011559, 1011071, 1047911, 1015661, 1047925, 1011685, 916853, 880485, 912757, 884095, 879973, 912871, 1044327, 1011175, 916853, 1015797, 884725, 884607};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 879973;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {585935, 585935, 585935, 585935, 585935, 586191, 585935, 585935, 585935, 585951, 585935, 585935, 585935, 585935, 585935, 585935, 651471, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 717007, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935, 585935};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 585935;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {1040379, 1040383, 1048571, 1048571, 1048571, 1048571, 1040379, 1040379, 1040379, 1040379, 1040379, 1040379, 1048571, 1048571, 1048575, 1048575, 1048571, 1048575, 1048575, 1048575, 1048571, 1048571, 1040383, 1048571, 1040379, 1040383, 1040383, 1048571, 1048575, 1048571, 1048575, 1040383, 1040383, 1040383, 1040383, 1040383, 1048571, 1040383, 1040379, 1040383, 1048575, 1048575, 1040379, 1048571, 1040379, 1048575, 1040379, 1040383, 1040379, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1040379;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {2177, 2177, 526465, 141457, 2177, 2177, 2177, 2177, 2185, 2177, 34945, 35201, 2177, 67713, 26819, 2209, 2177, 2185, 2689, 264321, 2177, 264897, 788617, 2177, 2257, 2177, 2177, 18595, 39041, 264385, 264321, 67713, 2177, 2179, 10369, 137345, 133297, 2177, 2177, 2437, 534657, 2177, 2241, 3205, 2177, 198785, 2177, 2177, 2177, 2193};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2177;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {786431, 1015807, 753663, 1015807, 786431, 786431, 753663, 1048575, 786431, 1048575, 1015807, 786431, 1015807, 1015807, 786431, 786431, 1048575, 1015807, 1015807, 786431, 753663, 753663, 1015807, 753663, 753663, 753663, 1048575, 786431, 786431, 1015807, 1048575, 1048575, 753663, 753663, 753663, 753663, 753663, 786431, 786431, 753663, 753663, 1048575, 786431, 753663, 753663, 1048575, 1048575, 1015807, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 753663;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {522199, 786391, 1030103, 235487, 499703, 514015, 505855, 505847, 759767, 243711, 505815, 776151, 497655, 243679, 245751, 237567, 235479, 767999, 235479, 770039, 235479, 767959, 235479, 251903, 1023991, 1032151, 767991, 767959, 260055, 260087, 761815, 243711, 243671, 759799, 243711, 243671, 1038295, 235479, 507863, 499703, 759767, 243671, 235511, 245719, 235479, 1021951, 262103, 514007, 759775, 759767};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 235479;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {516, 0, 329728, 2048, 2, 0, 4160, 266240, 32800, 32768, 4112, 786432, 0, 0, 8192, 16, 65536, 8192, 262148, 128, 262144, 16, 0, 131072, 16385, 2048, 1024, 40992, 24, 0, 4, 4096, 0, 16, 128, 4097, 4, 256, 8194, 4, 10784, 1024, 0, 0, 0, 6144, 18436, 0, 0, 426000};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {301333, 121108, 47572, 318237, 113940, 39188, 39317, 104732, 646933, 39700, 39292, 47380, 579988, 309588, 39292, 638388, 64276, 39198, 826132, 40276, 170260, 121108, 55637, 572692, 302357, 48508, 39220, 47380, 56118, 47381, 891221, 703255, 39188, 563988, 694612, 39190, 170292, 55580, 104798, 825751, 56598, 572700, 768276, 171796, 39317, 432404, 39286, 40215, 301364, 39188};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 39188;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> A = {1048279, 1048279, 1048311, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279, 1048279};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1048279;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> A = {1048575, 1048567, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1032183, 1048575, 1048575, 1032191, 1048575, 1048575, 1048575, 1032191, 1048567, 1032191, 1048575, 1048567, 1048575, 1048575, 1032191, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1032183, 1048575, 1032191, 1032191, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1032183;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> A = {1042191, 493071, 1033743, 511919, 524111, 1041967, 501391, 493103, 509487, 521823, 511567, 503599, 1021519, 509599, 1027711, 497215, 493103, 509535, 511855, 522095, 495407, 1035791, 517839, 1027903, 505551, 515647, 499295, 1017391, 1017455, 499551, 493327, 1029759, 1042223, 515791, 1019487, 493119, 1042159, 507471, 1019471, 501455, 509535, 497183, 517711, 497167, 1042207, 493551, 515999, 501679, 509535, 1037983};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 493071;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> A = {1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1048575;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> A = {523967, 523967, 523967, 1048255, 523967, 1048319, 524223, 523967, 523967, 523967, 523967, 523967, 523967, 524031, 523967, 524223, 523967, 523967, 524031, 523967, 1048319, 523967, 523967, 523967, 524223, 523967, 523967, 523967, 1048255, 523967, 523967, 1048255, 524223, 523967, 523967, 1048255, 523967, 524031, 523967, 524031, 1048255, 523967, 523967, 524031, 1048255, 523967, 523967, 523967, 523967, 1048255};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 523967;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> A = {261987, 786173, 524277, 261985, 261859, 524009, 524149, 1048417, 262115, 1048417, 524019, 523893, 786149, 1048177, 786291, 261995, 523883, 261739, 261883, 786301, 1048165, 786037, 261729, 786029, 523875, 1048317, 261757, 524129, 261859, 786149, 1048423, 261993, 1048297, 786417, 261857, 261731, 1048567, 1048551, 524263, 261737, 524259, 524147, 786161, 261873, 1048191, 261757, 261753, 262133, 261857, 261731};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 261729;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> A = {1048575, 1048575, 1048575, 1040383, 1040383, 1048575, 1048575, 1040383, 1048575, 1048575, 1040383, 1040383, 1048575, 1040383, 1048575, 1040383, 1048575, 1040383, 1040383, 1048575, 1048575, 1048575, 1040383, 1040383, 1040383, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1040383, 1048575, 1048575, 1048575, 1040383, 1040383, 1048575, 1048575, 1048575, 1048575, 1040383, 1048575, 1040383, 1040383, 1048575, 1048575, 1048575, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1040383;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> A = {1048575, 1046527, 1013759, 1015807, 1013759, 1013759, 1013759, 1048575, 1013759, 1015807, 1013759, 1015807, 1013759, 1015807, 1015807, 1046527, 1013759, 1048575, 1013759, 1013759, 1013759, 1046527, 1015807, 1013759, 1013759, 1046527, 1013759, 1013759, 1046527, 1013759, 1046527, 1046527, 1013759, 1013759, 1046527, 1013759, 1015807, 1015807, 1046527, 1015807, 1013759, 1015807, 1015807, 1046527, 1013759, 1013759, 1046527, 1046527, 1015807, 1015807};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1013759;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> A = {1048575, 1048575, 1015807, 1048575, 1048575, 1048575, 1015807, 1015807, 1015807, 1015807, 1015807, 1048575, 1048575, 1048575, 1015807, 1048575, 1015807, 1015807, 1048575, 1015807, 1048575, 1048575, 1048575, 1048575, 1015807, 1015807, 1048575, 1048575, 1048575, 1015807, 1015807, 1048575, 1015807, 1015807, 1048575, 1048575, 1048575, 1048575, 1048575, 1015807, 1048575, 1048575, 1048575, 1048575, 1048575, 1015807, 1048575, 1048575, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1015807;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> A = {1047389, 1047039, 1048063, 1048413, 1047935, 1048447, 1046909, 1047421, 1047423, 1046877, 1046877, 1047005, 1048029, 1047901, 1047389, 1047005, 1047933, 1047903, 1047901, 1047901, 1047933, 1047007, 1047007, 1046909, 1046879, 1048029, 1048413, 1047389, 1046879, 1048445, 1046877, 1046909, 1047037, 1048061, 1046877, 1047005, 1047037, 1048063, 1047421, 1047517, 1047519, 1047517, 1048029, 1046877, 1047005, 1047421, 1046879, 1046877, 1047037, 1047389};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1046877;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> A = {19488, 19488, 19488, 117792, 19488, 19552, 543776, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 23584, 19488, 19488, 19488, 19488, 19488, 27680, 19488, 19488, 19488, 19488, 19488, 150560, 19488, 19488, 19488, 19488, 19488, 19488, 158752, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19488, 19552};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 19488;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> A = {1048535, 1048535, 524279, 1048567, 524255, 524247, 524279, 524247, 524247, 1048535, 1048535, 524287, 524247, 1048535, 524279, 1048535, 1048543, 524247, 524287, 1048535, 1048535, 1048535, 524255, 1048535, 1048543, 1048567, 1048567, 524247, 1048575, 524279, 524247, 1048567, 524247, 524247, 524247, 524287, 524287, 524255, 1048535, 524247, 1048535, 524247, 1048575, 1048535, 524247, 524255, 524255, 1048567, 524279, 524279};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 524247;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> A = {797915, 208725, 582124, 786428, 878844, 1036231, 779603, 961278, 333301, 457469, 981203, 880366, 973949, 683379, 99160, 1013489, 972025, 392019, 1040238, 1022419, 503671, 719615, 1026428, 621261, 504666, 211951, 749527, 580847, 106487, 900601, 956143, 993510, 411518, 1006293, 892263, 447734, 914800, 1028453, 1042372, 681451, 1021765, 507377, 228063, 929142, 130663, 159194, 434672, 748391, 1017343, 708600};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> A = {586202, 932806, 29406, 179534, 867531, 422011, 1013315, 766787, 406627, 766919, 735970, 210758, 621507, 1013083, 343890, 1029215, 130531, 63938, 1031747, 146030, 900295, 127343, 79958, 883395, 963523, 47719, 47698, 425850, 31318, 980479, 455754, 325367, 376534, 391502, 996082, 982767, 456191, 130558, 750418, 128579, 130023, 999275, 490483, 783682, 30418, 949502, 801106, 143682, 589419, 292062};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {1048575, 1048571, 1048575, 1048574, 1032191, 1047423, 1048511, 915455, 1048575, 1048573, 1048511, 1048575, 1048060, 1048575, 982907, 524287, 1046519, 1046399, 1048575, 1048575, 523775, 1048575, 1048575, 786431, 1048574, 1047550, 1048063, 1048575, 1048575, 786427, 1048575, 983039, 917503, 917375, 1048575, 982527, 786431, 917503, 1048575, 1029119, 1048063, 1044477, 1048575, 1048575, 1048574, 1048575, 1046515, 1048571, 786431, 1048063};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> A = {253258, 1040377, 524206, 982563, 1047416, 1007590, 506621, 458734, 523183, 1031505, 785911, 1031663, 892911, 1048007, 784886, 489854, 1048565, 1048575, 524151, 342843, 523610, 1015677, 850399, 851823, 1032111, 908623, 883711, 1014771, 622543, 818107, 450502, 1040243, 572155, 1032023, 457919, 228731, 1048255, 1048567, 753151, 875006, 261366, 900792, 908731, 1013948, 835583, 712461, 612604, 524270, 720350, 655089};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> A = {808925, 476911, 478917, 876475, 909297, 190654, 457341, 849563, 1015806, 961908, 724957, 764843, 750126, 908781, 233198, 347882, 930622, 862694, 91135, 515724, 810855, 504118, 1045074, 809093, 505456, 360341, 455773, 785822, 873330, 699893, 1043103, 524265, 454396, 442207, 744879, 1013791, 515034, 1027103, 455423, 65317, 973183, 849739, 1010305, 834271, 988246, 1030266, 980207, 182894, 876281, 148859};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> A = {1048575, 1048575, 1048575, 1048575, 1015807, 1048575, 1048575, 1048575, 1048575, 1048575, 917503, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 524287, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> A = {1048574, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 524287, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048319, 1048575, 1048575, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {1046527, 1048503, 1048063, 915453, 785343, 786431, 982527, 983039, 883710, 1048575, 884669, 1048573, 1047541, 753663, 916479, 983039, 948125, 1048575, 1048535, 1048541, 950271, 1013759, 1048575, 917463, 1048573, 1048574, 655356, 1046527, 1048575, 1015799, 917502, 1047549, 1048511, 1046463, 786429, 917439, 983006, 916477, 1041855, 983037, 655359, 1015711, 913407, 913343, 1044479, 1013663, 1048052, 913373, 786431, 916991};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> A = {1011710, 1048575, 1048575, 1015807, 1048573, 1034239, 1048575, 1048575, 1046527, 1030143, 1048575, 1044479, 1036223, 1048575, 1048543, 786431, 1048575, 1048575, 1048575, 1048542, 1048575, 786431, 1048559, 1015807, 1048511, 1048575, 1044479, 1048575, 1048575, 1048031, 1040381, 1048495, 1048559, 1048575, 1048574, 785918, 1040351, 1048495, 917471, 1048575, 1048575, 1040381, 1048575, 1048575, 1048575, 1047998, 1048575, 1048063, 1048575, 1042431};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> A = {515997, 514876, 1026895, 523096, 364345, 519053, 1043404, 514831, 904984, 364376, 917320, 1048408, 387912, 368541, 887674, 391982, 387902, 523050, 1018829, 523048, 1018655, 892889, 376651, 383816, 523263, 510859, 1030921, 387884, 392042, 383834, 908093, 371465, 511759, 1019661, 892683, 379851, 383804, 495450, 892776, 514825, 498603, 899960, 900031, 515981, 367483, 363337, 523178, 383902, 523213, 518990};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> A = {697819, 926068, 1009643, 978257, 783045, 729596, 980332, 930500, 945360, 751810, 995950, 682074, 769632, 1042531, 948708, 965874, 1029611, 1029700, 753244, 734411, 720849, 931812, 765791, 991727, 669948, 960609, 963043, 750793, 1012697, 1046640, 946164, 716115, 766150, 720739, 670281, 998638, 784105, 961788, 961370, 943356, 715843, 729179, 963439, 947533, 1031756, 697333, 998773, 949877, 746871, 1046872};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {982783, 1048575, 909308, 1048575, 1048575, 1048543, 1048495, 1048571, 1048575, 1040383, 1048575, 1048315, 1048575, 1048569, 982975, 1048571, 1048574, 917503, 1048543, 917499, 1048575, 1048511, 1048319, 1015807, 1048543, 1048573, 1048303, 1048511, 1007615, 916975, 1048575, 393215, 1015039, 1048527, 1048511, 1040383, 1048559, 1048573, 1048575, 1048319, 1048575, 1048510, 1048511, 1048060, 983037, 1048063, 1048251, 1048575, 1048575, 524271};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> A = {523639, 507383, 499191, 515959, 1048447, 507255, 1031679, 983039, 458743, 1032063, 499199, 974711, 1031671, 1040375, 1048575, 982391, 1048447, 499575, 442231, 507263, 974847, 1047935, 974719, 441719, 1031671, 958327, 1032063, 515967, 441719, 982391, 434039, 957951, 974335, 966527, 507383, 515575, 1048575, 450551, 450431, 1048447, 499191, 1023479, 442231, 499199, 966519, 449911, 966655, 442367, 449911, 499063};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> A = {764747, 212509, 736074, 469549, 229021, 212603, 207802, 731784, 491134, 995289, 519740, 256925, 994137, 782185, 1048168, 474011, 1044330, 487048, 1011258, 207567, 244250, 785295, 485900, 768622, 469769, 1015662, 245404, 733177, 781036, 260828, 522959, 1043278, 1014782, 507516, 507692, 470698, 261822, 764877, 749243, 1043384, 780904, 1047117, 240218, 260953, 994169, 473816, 737112, 212650, 240265, 241646};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> A = {13280, 862, 901452, 289242, 954833, 201034, 399680, 295904, 437576, 196053, 281578, 1042803, 123225, 546144, 284096, 329579, 6468, 756732, 332798, 458055, 733550, 886655, 327506, 14810, 813385, 446808, 58346, 414545, 547795, 17396, 790348, 289611, 598389, 586609, 586060, 262632, 574796, 766954, 594368, 211412, 547657, 138601, 83805, 448364, 28482, 728549, 623050, 430920, 283978, 65899};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> A = {1015791, 1048575, 1048567, 1015805, 1048571, 1048415, 1048063, 983027, 1032063, 1015805, 1048567, 999415, 999423, 1048061, 983031, 835583, 983039, 999423, 1032191, 1047551, 1048541, 917503, 917503, 999419, 1048575, 1048061, 983023, 1048543, 917501, 1047551, 1048047, 917503, 801791, 1047551, 1032175, 1048527, 1031679, 917503, 1048543, 1032189, 1015771, 1015799, 1048527, 1048559, 835583, 999389, 1048571, 1048575, 1048575, 1048565};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> A = {1048575, 983039, 524287, 1048575, 1048575, 1048575, 983039, 1048575, 1048575, 1048575, 1048575, 786431, 458751, 983039, 983039, 1048575, 1048575, 786431, 1048575, 983039, 524287, 1048575, 1048575, 524287, 983039, 983039, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 262143, 1048575, 524287, 1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 786431, 786431, 1048575, 1048575, 1048575, 1048575, 1048575};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> A = {1011709, 1048559, 1048575, 1048571, 1044475, 1048575, 1048427, 1007599, 1015679, 1040383, 1048429, 1044475, 1048447, 1048575, 1048575, 1015805, 1044463, 1044351, 1007613, 1040383, 1003519, 1011707, 1015807, 1048447, 1015791, 1040383, 1048447, 1048553, 1048553, 1044463, 1007599, 1048445, 1048447, 1040235, 1048557, 1048559, 1015679, 1048571, 1040383, 1048429, 1044351, 1036285, 1015807, 1048575, 1007615, 1048447, 1048443, 1040381, 1048575, 1044479};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> A = {1046527, 1048575, 1048575, 1048575, 1048575, 524283, 1048575, 524223, 1048571, 1048575, 524287, 524287, 1048575, 1048511, 1048511, 1046463, 1048575, 1048575, 524287, 1048575, 1048575, 1048575, 1046527, 522239, 1048575, 1046527, 1048575, 1048507, 1048575, 1048511, 1048575, 1048575, 1048575, 524287, 1048575, 1048575, 1048575, 1048571, 1048575, 1046527, 1048571, 1048571, 1048575, 1048575, 1048575, 1048571, 1048575, 524287, 1048575, 1048511};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> A = {524017, 998273, 507547, 1044376, 1044371, 491196, 1043455, 1001468, 1009662, 1047262, 1045172, 459761, 475135, 524285, 1040318, 1027791, 523263, 485293, 995259, 503747, 1023935, 1044395, 1047529, 1014447, 1016792, 1023968, 984781, 993957, 511912, 1046527, 1045229, 1044204, 1018622, 1044214, 1048575, 488427, 483230, 1031163, 476100, 507871, 1040382, 522175, 467853, 1017828, 1028765, 1004220, 1039077, 520947, 1031934, 1006525};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> A = {2, 3, 7, 19};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> A = {191411, 256951, 191411, 191411, 191411, 256951, 195507, 191411, 192435, 191411, 191411, 195511, 191419, 191411, 256947, 191415, 191475, 195579, 191415, 191411, 191483, 191411, 191419, 191475, 256947, 191411, 191411, 191411, 191419, 256947, 191411, 191411, 191411};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 191411;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> A = {1, 1};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> A = {7, 7};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> A = {45, 45};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> A = {2, 2};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> A = {5, 5};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> A = {35, 35};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> A = {30, 30};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> A = {6, 6};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> A = {4, 4};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {31, 31};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> A = {2, 3, 7, 19};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> A = {1, 3, 0};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> A = {1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> A = {3, 3};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> A = {2, 3, 4, 0};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> A = {457, 457};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 457;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> A = {0, 5};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> A = {0, 1};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> A = {1, 3};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> A = {12, 12, 4, 12, 4, 12};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> A = {1, 0};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> A = {26, 26};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> A = {5, 7, 5, 3};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> A = {23, 23};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> A = {5, 5, 5, 4};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> A = {1048575, 1048574, 1048565, 1048564};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1048564;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> A = {1, 0, 0};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> A = {0, 0, 0, 0, 1, 1, 1};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> A = {3, 3, 3};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> A = {0, 0};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> A = {5, 3, 1};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> A = {0, 3, 4};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> A = {1048575, 1048575, 1048575, 1048575, 1048575, 1048575, 2, 3};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> A = {5, 14, 4, 14, 5};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> A = {10, 10};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> A = {31, 7, 7};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
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
    vector<int> A = {2, 3, 6, 9};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> A = {12, 12};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> A = {1, 3, 5, 0};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> A = {2, 3, 2, 1};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> A = {3, 1, 5};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> A = {1, 3, 5};
    ANDEquation* pObj = new ANDEquation();
    clock_t start = clock();
    int result = pObj->restoreY(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22916431&rd=14737&pm=12029
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class ANDEquation {
public:
  int restoreY(vector <int> A) {
    
    int a;
    
    for ( int i = 0; i < A.size(); i++ ) {
      a = ~0;
      for ( int j = 0; j < A.size(); j++ ) {
        if ( i != j ) a &= A[j];
      }
      if ( A[i] == a ) return A[i];
    }
    
    return -1;
          
          
  }
};
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/