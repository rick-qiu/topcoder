/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2943
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

class SumOfSquareRoots {
public:
    vector<int> shortestList(vector<int> A);
};

vector<int> SumOfSquareRoots::shortestList(vector<int> A) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> A = {12, 48};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {108};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {9, 16, 25};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {144};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {3, 4};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {4, 3};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {1};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {1, 1};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {1, 1, 1};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {5, 3, 5};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 20};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {1, 3, 5, 12, 20};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 27, 45};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {961, 1922};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 14, 15, 17, 19, 21, 22, 23, 26, 29, 30, 31, 33, 34, 35, 37, 38, 39, 41, 42, 43, 46, 47, 54, 63, 90, 99, 180, 300, 450, 784};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {25, 16, 9};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {144};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2500000};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {313, 934, 939, 655, 11};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 313, 655, 934, 939};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {35, 924, 676, 866, 866};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 676, 924, 3464};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {72, 893, 288, 18, 838};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {838, 882, 893};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {176, 338, 162, 11, 98};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {275, 1682};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {752, 621, 139, 960, 15, 950, 49, 550, 887, 15};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 139, 550, 621, 752, 887, 950, 1500};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {1, 416, 158, 576, 256, 841, 121, 650, 891, 418};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {158, 418, 891, 2106, 6561};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {167, 314, 838, 156, 199, 784, 16, 808, 18, 936, 715, 838, 2, 312, 668, 882, 172, 650, 649, 184};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {156, 172, 184, 199, 312, 314, 649, 715, 808, 1024, 1250, 1503, 3146, 3352};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {604, 767, 106, 14, 75, 377, 347, 751, 12, 162, 386, 604, 350, 838, 877, 918, 37, 235, 925, 484, 947, 568, 928, 3, 588, 121, 749, 108, 9, 767};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {106, 162, 235, 347, 377, 386, 504, 568, 749, 751, 838, 877, 918, 928, 947, 1296, 1332, 2352, 2416, 3068};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {417, 672, 540, 540, 288, 722, 529, 499, 514, 658, 285, 706, 560, 421, 920, 168, 636, 207, 887, 352, 766, 425, 550, 450, 560, 70, 692, 102, 63, 832, 102, 541, 289, 42, 766, 98, 832, 385, 339, 352};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63, 70, 207, 285, 339, 385, 408, 417, 421, 425, 499, 514, 541, 636, 658, 692, 706, 887, 920, 1600, 2058, 2160, 2240, 3064, 3328, 3718, 5618};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {453, 221, 195, 484, 183, 542, 643, 566, 662, 176, 70, 709, 284, 359, 855, 317, 845, 579, 853, 603, 279, 240, 278, 181, 771, 186, 707, 531, 154, 683, 611, 604, 593, 276, 277, 74, 851, 190, 267, 476, 358, 354, 52, 381, 103, 318, 188, 556, 864, 194};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 70, 74, 103, 154, 176, 181, 183, 186, 188, 190, 194, 195, 221, 240, 267, 276, 277, 278, 279, 284, 317, 318, 354, 358, 359, 381, 453, 476, 484, 531, 542, 556, 566, 579, 593, 603, 604, 611, 643, 662, 683, 707, 709, 771, 845, 851, 853, 855, 864};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {690, 801, 406, 955, 531, 410, 426, 192, 356, 167, 195, 356, 356, 784, 96, 617, 801, 99, 188, 118, 954, 384, 44, 655, 23, 848, 835, 386, 118, 652, 286, 77, 864, 870, 179, 661, 478, 108, 936, 759, 942, 894, 176, 451, 611, 223, 395, 846, 146, 373};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 77, 146, 167, 179, 188, 195, 223, 286, 373, 386, 395, 406, 410, 426, 451, 472, 478, 531, 588, 611, 617, 652, 655, 661, 690, 759, 784, 835, 846, 848, 870, 891, 894, 936, 942, 954, 955, 3456, 12816};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {910, 246, 988, 57, 583, 256, 830, 189, 674, 713, 553, 305, 567, 625, 433, 196, 451, 576, 947, 141, 150, 294, 36, 144, 577, 363, 958, 980, 235, 7, 516, 813, 516, 793, 847, 567, 36, 728, 959, 150, 3, 880, 277, 720, 63, 643, 501, 85, 951, 791};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {57, 85, 141, 189, 235, 246, 277, 305, 432, 433, 451, 501, 553, 577, 583, 643, 674, 713, 728, 791, 793, 813, 830, 880, 910, 947, 951, 958, 959, 988, 1734, 2064, 3380, 7623, 10609};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {9, 96, 56, 95, 2, 73, 75, 9, 34, 74, 71, 51, 72, 4, 32, 64, 43, 11, 92, 10, 51, 64, 16, 71, 47, 98, 63, 54, 16, 4, 40, 63, 20, 99, 49, 85, 93, 71, 23, 18, 74, 43, 12, 43, 98, 63, 1, 56, 92, 34};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 47, 73, 85, 90, 93, 95, 136, 147, 176, 204, 224, 294, 296, 387, 567, 575, 639, 1568, 1764};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {1, 8, 8, 2, 8, 8, 2, 2, 8, 2, 1, 8, 10, 1, 7, 10, 9, 4, 6, 9, 7, 2, 2, 6, 9, 4, 6, 9, 4, 2, 9, 7, 7, 6, 2, 6, 9, 8, 10, 9, 4, 2, 8, 1, 6, 7, 8, 10, 7, 7};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {160, 216, 343, 1089, 1458};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {961, 1922};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {6};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990};
    SumOfSquareRoots* pObj = new SumOfSquareRoots();
    clock_t start = clock();
    vector<int> result = pObj->shortestList(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24750, 24775, 24800, 24825, 24850, 24875, 24900, 24925, 24950, 24975};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5858&pm=2943
********************************************************************************
/*
 * Hey, stop reading this code right this instant!
 * You don't know what it could do to your fragile mind!
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
//#include <brains>  /* commented out to avoid compile error -- brains not found */
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<char> vc;
typedef long long ii;
#define b2e(A) (A).begin(), (A).end()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{"; for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i]; os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
 
/*
public class antimatter extends Idiot {
  String[] codeSolution(String[] problemStatement) {
    //re-code this method!
    //it always returns quickly, but is often incorrect (about 33% of the time)
    return null;
  }
}
*/
 
//----------------------------
 
class SumOfSquareRoots {
  public:
  vector <int> shortestList(vector <int> A) {
    vector<pair<int,int> > foo;
    for (int i = 0; i < A.si; i++) {
      pair<int,int> X = make_pair(1,0);
      for (int j = 2; j * j <= A[i]; j++) {
        while (!(A[i] % (j*j))) {
          X.first *= j;
          A[i] /= j*j;
        }
      }
      X.second = A[i];
      foo.pb(X);
    }
    debug(foo);
    bool change = 1;
    while (change) {
      change = 0;
      for (int i = 0; i < foo.si; i++) {
        for (int j = i + 1; j < foo.si; j++) {
          if (foo[i].second == foo[j].second) {
            foo[i].first += foo[j].first;
            foo.erase(foo.begin() + j);
            change = 1;
            goto done;
          }
        }
      }
      done:;
    }
    vi ret;
    for (int i = 0; i < foo.si; i++)
    ret.pb(foo[i].first * foo[i].first * foo[i].second);
    s(ret);
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/