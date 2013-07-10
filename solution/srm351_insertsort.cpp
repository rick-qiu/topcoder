/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4844
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

class InsertSort {
public:
    int calcMinimalCost(vector<int> theArray);
};

int InsertSort::calcMinimalCost(vector<int> theArray) {
    int ret;
    return ret;
}


int test0() {
    vector<int> theArray = {7, 1, 2, 3};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> theArray = {7, 1, 2, 5};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> theArray = {1, 8, 8, 12, 99};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
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
    vector<int> theArray = {8, 2, 6, 5, 1, 4};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> theArray = {6, 4, 5, 3, 8, 2, 7, 2, 11, 2, 2};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> theArray = {7, 9, 4, 4, 10, 3, 6, 9, 1, 6, 3, 4, 1, 4, 6, 3, 2};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> theArray = {8, 9, 1, 3, 8, 10, 4, 1};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> theArray = {4, 6, 7, 3, 8, 3, 7};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> theArray = {1};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
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
    vector<int> theArray = {6, 7, 5, 8, 10, 10, 3, 3, 6, 6, 7};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> theArray = {9, 3, 7, 2, 6, 1, 3, 9, 3, 2, 5, 2, 2, 4, 6, 9};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> theArray = {1, 10, 4, 9, 1, 2, 5, 3, 1, 6, 6, 8, 9, 10, 4};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> theArray = {4, 4, 10, 1, 10, 6, 2, 3, 8, 5, 5, 1};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> theArray = {5, 4, 10, 6, 9};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> theArray = {4, 9, 7, 8, 7, 5, 7, 8, 9, 10, 5, 3};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> theArray = {8, 8, 4, 4, 3, 4, 6};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> theArray = {3, 7, 6, 7, 3, 7, 1, 10, 10, 6, 4};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> theArray = {1, 6, 5, 9, 1, 3, 8, 2, 6, 9, 8, 3, 8, 10, 8, 8, 7};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> theArray = {10, 3, 8, 1, 10, 6, 7};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> theArray = {10, 8, 5, 8, 3, 2, 4, 6, 3, 2, 7, 4};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> theArray = {8, 1, 5, 6, 10, 8, 5, 7};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> theArray = {2, 4, 7, 7, 9, 7, 7, 3, 1, 2, 10, 6, 5, 9, 3, 5};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
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
    vector<int> theArray = {5, 4, 5, 4, 4};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> theArray = {8, 2, 4, 7, 4, 10, 2, 1, 7, 6, 5};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> theArray = {5, 5};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> theArray = {139, 752, 348, 706, 178, 503, 152, 217, 877, 334, 810, 342, 850, 916, 733, 455, 396, 673, 652, 717, 84, 340, 649, 847, 472, 869, 290, 348, 387, 642, 266, 677, 897, 125};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 11975;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> theArray = {112, 68, 308, 795, 36, 576, 278, 827, 619, 642, 899, 169, 969, 242, 644, 525, 905, 656, 551, 622, 472, 717, 579, 870, 759, 532, 447, 79, 292, 138, 77, 95, 376, 601, 228, 681, 658};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 12900;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> theArray = {673, 880, 217, 996, 22, 239, 582, 781, 834, 819, 751, 967, 156, 510, 91, 563, 219, 579, 396, 224, 511, 176, 254, 262, 161, 630, 500, 681, 14, 722, 91, 335, 672, 559, 412, 153, 212, 369};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 13072;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> theArray = {811, 107, 611, 512, 817, 987, 392, 706, 350, 262, 924, 411, 566, 531, 947, 491, 644, 439, 496, 986, 253, 604, 990, 367, 851, 321, 449, 690, 977, 924, 117, 352, 299, 143, 725, 396, 534, 775, 453, 875, 675, 189};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 18383;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> theArray = {614, 167, 913, 137, 308, 958, 353, 661, 692, 571, 189, 317, 886, 929, 421, 527, 177, 331, 591, 141, 230, 486, 805, 715, 627, 37, 109, 254, 519, 699, 671, 63, 300, 636, 946, 850, 367, 403, 581, 724, 768, 356, 625, 511, 120, 122, 516, 23, 133};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 17894;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> theArray = {22, 496, 318, 813, 543, 437, 620, 544, 774, 914, 599, 23, 132, 928, 181, 572, 598, 751, 765, 675, 381, 391, 832, 945, 591, 12, 645, 247};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 8681;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> theArray = {587, 971, 930, 328, 286, 850, 543, 572, 313, 921, 646, 755, 136, 241, 716, 836, 725, 353, 790, 917, 693, 631, 127, 295, 460, 187, 288, 218, 164, 373, 463, 555, 769, 220, 231, 252, 390, 305, 915, 868, 296, 186, 727};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 16792;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> theArray = {985, 415, 142, 582, 141, 767, 452, 934, 880, 187, 564, 780, 701, 649, 170, 502, 759, 608, 881, 259, 290, 1, 366, 524, 850, 482, 162, 648, 666, 253, 891, 644};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 12472;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> theArray = {919, 994, 523, 409, 305, 316, 875, 934, 2, 317, 821, 881, 881, 512, 661, 581, 806, 871, 447, 487, 216, 816, 510, 906, 359, 965, 469, 399};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 11523;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> theArray = {73, 586, 486, 779, 546, 340, 430, 662, 864, 828, 254, 500, 689, 464, 439, 436, 184, 265, 926, 295, 48, 621, 847, 282, 501, 700, 59, 55, 618, 702, 216, 164, 883, 362, 192, 913, 187, 208, 143, 654, 262, 695, 641, 17, 72, 399};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 14833;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> theArray = {147, 515, 598, 42, 370, 804, 742, 441, 728, 173, 781, 608, 226, 91, 201, 298, 889, 816, 286, 597, 699, 201, 286, 946, 712, 736, 381, 319, 273};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 9288;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> theArray = {408, 549, 893, 154, 447, 233, 322, 18, 938, 430, 56, 744, 368, 95, 752, 270, 745, 785, 599, 88, 804, 14, 55};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 5543;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> theArray = {952, 634, 983, 948, 62, 505, 989, 367, 93, 285, 922, 387, 339, 35, 116, 820, 721, 422, 788, 174, 679, 138};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 8435;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> theArray = {237, 746, 410, 130, 763, 53, 42, 391, 708, 189, 836, 568, 828, 762, 564, 547, 95, 115, 504, 544, 248, 18, 280, 177, 1000, 596, 658, 458};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 8885;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> theArray = {552, 656, 84, 446, 983, 958, 967, 969, 105, 912, 801, 643, 789, 144, 787, 774, 265, 660, 708, 977, 606, 685, 988, 438, 515, 720, 457, 632, 761, 872, 619, 291, 773, 593, 195, 970, 464, 493, 550, 353, 264, 777, 191, 428, 911, 425, 954, 220, 867, 566};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 23286;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> theArray = {536, 468, 742, 241, 424, 992, 587, 371, 68, 40, 825, 104, 82, 93, 429, 885, 474, 778, 591, 490, 749, 931, 726, 687, 384, 868, 555, 620, 149, 56, 531, 496, 793, 828, 946, 554, 894, 768, 225, 137, 225};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 15542;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> theArray = {494, 607, 124, 615, 251, 553, 300, 969, 108, 584, 396, 56, 614, 139, 631, 93, 442, 41, 80, 304, 539, 258, 828, 383, 584, 5, 38, 474, 370, 530, 898, 98};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 7804;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> theArray = {137, 953, 300, 309, 905, 194, 426, 300, 585, 982, 417, 408, 873, 833, 225, 930, 273, 503, 307, 983, 319, 524, 438, 673, 788, 18, 168, 214, 262, 301, 603, 880, 831, 58, 781, 129, 356, 762, 205, 552, 613};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 15775;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> theArray = {499, 413, 386, 998, 775, 742, 123, 664, 505, 29, 215, 245, 423, 590, 925, 312, 41, 965, 374, 204, 359, 893, 111, 460, 753, 521, 673, 221, 804, 382, 773, 779, 401, 534};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 12617;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> theArray = {822, 978, 293, 65, 885, 770, 742, 194, 234, 676, 406, 546, 793, 61, 407, 455, 54, 383, 350, 290, 811, 111, 388, 698, 299, 622, 967, 510, 677, 851, 546, 927, 778, 398, 447, 666, 821, 102, 51, 273, 354, 211, 496, 817, 269};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 17656;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> theArray = {993, 952, 975, 956, 987, 968, 981, 985, 964, 951, 963, 975, 994, 1000, 955, 959, 986, 994, 956, 952, 998, 975, 974, 992, 992, 964, 992, 995, 987, 964, 966, 957, 966, 957, 995, 957, 1000, 969, 991, 987, 968, 972, 968, 966, 969, 972, 982, 962, 959, 970};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36918;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> theArray = {959, 998, 957, 953, 967, 987, 991, 962, 952, 954, 976, 985, 986, 971, 994, 980, 982, 972, 979, 961, 984, 966, 955, 991, 973, 995, 975, 999, 995, 957, 991, 985, 991, 1000, 999, 965, 970, 983, 958, 956, 952, 996, 995, 964, 957, 991, 993, 996, 976, 963};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 37036;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> theArray = {992, 973, 992, 986, 986, 953, 987, 987, 983, 983, 959, 973, 998, 995, 971, 950, 972, 969, 990, 957, 993, 964, 985, 998, 991, 951, 983, 995, 964, 957, 985, 990, 960, 972, 967, 996, 986, 983, 995, 959, 991, 982, 956, 964, 969, 959, 993, 986, 985, 959};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 39981;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> theArray = {993, 974, 953, 1000, 976, 959, 970, 989, 996, 958, 959, 985, 950, 951, 988, 992, 983, 960, 990, 962, 980, 975, 978, 994, 962, 958, 981, 969, 950, 968, 983, 955, 957, 955, 977, 993, 991, 986, 982, 964, 1000, 950, 967, 988, 986, 984, 975, 979, 957, 985};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 38014;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> theArray = {972, 958, 950, 957, 970, 983, 965, 990, 993, 981, 998, 986, 969, 979, 957, 988, 1000, 997, 988, 976, 979, 988, 971, 1000, 979, 969, 951, 961, 989, 965, 955, 990, 955, 968, 985, 953, 995, 960, 967, 968, 953, 967, 986, 997, 968, 979, 971, 982, 962, 991};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36980;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> theArray = {983, 991, 954, 956, 978, 994, 973, 959, 975, 980, 973, 963, 967, 958, 1000, 983, 964, 971, 986, 989, 981, 959, 973, 961, 986, 987, 973, 992, 960, 983, 990, 966, 951, 977, 969, 972, 1000, 993, 959, 972, 989, 998, 999, 967, 991, 976, 962, 958, 950, 974};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36003;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> theArray = {961, 954, 961, 969, 958, 987, 956, 977, 969, 957, 986, 981, 973, 1000, 972, 958, 970, 956, 951, 963, 976, 972, 954, 992, 967, 965, 982, 961, 980, 980, 962, 962, 971, 1000, 955, 958, 966, 967, 953, 954, 964, 998, 987, 990, 998, 971, 970, 955, 981, 961};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36893;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> theArray = {953, 993, 979, 969, 982, 988, 975, 953, 983, 952, 968, 974, 954, 951, 986, 980, 968, 976, 970, 994, 996, 995, 967, 987, 967, 988, 968, 987, 980, 990, 995, 999, 987, 979, 969, 993, 958, 964, 970, 963, 980, 989, 995, 988, 976, 997, 974, 993, 965, 973};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 37218;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> theArray = {954, 995, 977, 990, 973, 966, 965, 966, 982, 999, 966, 977, 996, 953, 972, 958, 975, 973, 959, 967, 998, 953, 958, 975, 952, 980, 952, 978, 997, 997, 973, 963, 980, 962, 975, 991, 975, 987, 995, 998, 958, 993, 960, 977, 956, 952, 984, 994, 963, 993};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 37014;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> theArray = {1000, 997, 965, 988, 963, 988, 950, 956, 965, 960, 998, 998, 965, 979, 980, 952, 979, 994, 994, 979, 989, 999, 992, 998, 957, 995, 1000, 964, 979, 956, 995, 978, 957, 954, 980, 984, 996, 977, 950, 988, 989, 950, 974, 962, 966, 988, 971, 996, 991, 952};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36141;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> theArray = {968, 956, 958, 991, 984, 973, 969, 976, 991, 985, 983, 985, 963, 1000, 1000, 962, 985, 971, 978, 992, 981, 956, 995, 996, 996, 989, 950, 955, 964, 977, 969, 953, 987, 966, 985, 958, 970, 972, 962, 980, 999, 992, 957, 982, 988, 950, 970, 987, 956, 983};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36999;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> theArray = {998, 996, 977, 975, 989, 981, 996, 993, 979, 973, 985, 955, 970, 996, 972, 952, 973, 993, 972, 953, 959, 982, 986, 999, 960, 950, 971, 951, 958, 983, 972, 979, 994, 977, 986, 982, 970, 960, 989, 971, 968, 965, 962, 988, 954, 1000, 950, 986, 968, 971};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 39048;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> theArray = {962, 952, 960, 954, 994, 981, 952, 950, 997, 968, 962, 958, 977, 997, 982, 975, 981, 958, 995, 968, 970, 973, 986, 987, 969, 967, 976, 971, 964, 960, 980, 965, 977, 990, 964, 1000, 975, 996, 995, 956, 985, 993, 976, 985, 963, 997, 986, 955, 983, 995};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36122;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> theArray = {981, 988, 961, 952, 967, 962, 957, 985, 973, 968, 967, 974, 960, 992, 975, 977, 967, 991, 986, 971, 968, 956, 960, 953, 990, 999, 950, 996, 971, 987, 968, 984, 956, 968, 1000, 992, 990, 956, 954, 957, 982, 953, 975, 991, 992, 960, 978, 969, 973, 984};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 37890;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> theArray = {995, 993, 992, 982, 960, 996, 959, 992, 993, 957, 988, 990, 977, 994, 975, 961, 965, 950, 979, 972, 971, 981, 967, 956, 996, 991, 992, 981, 981, 994, 997, 994, 956, 984, 977, 961, 972, 951, 996, 985, 985, 979, 999, 980, 969, 969, 966, 992, 962, 979};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 38121;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> theArray = {995, 959, 958, 976, 959, 991, 991, 968, 952, 998, 989, 992, 980, 951, 972, 980, 980, 961, 962, 991, 967, 960, 991, 955, 962, 953, 994, 984, 999, 1000, 982, 990, 980, 955, 979, 957, 950, 978, 964, 981, 958, 950, 964, 973, 977, 954, 950, 986, 962, 953};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 37812;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> theArray = {989, 971, 1000, 954, 983, 986, 951, 956, 982, 980, 999, 998, 981, 971, 986, 975, 973, 965, 999, 956, 976, 962, 985, 990, 981, 984, 978, 996, 978, 963, 952, 995, 957, 950, 999, 1000, 964, 985, 996, 954, 964, 971, 959, 976, 993, 951, 969, 999, 951, 951};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 38126;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> theArray = {973, 951, 961, 994, 966, 968, 981, 974, 982, 974, 999, 987, 974, 979, 969, 953, 961, 1000, 999, 953, 959, 969, 993, 981, 962, 964, 994, 980, 990, 1000, 985, 958, 998, 969, 966, 987, 985, 979, 957, 997, 984, 983, 985, 1000, 999, 996, 970, 950, 959, 960};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36160;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> theArray = {987, 987, 990, 964, 990, 982, 974, 962, 962, 988, 986, 980, 954, 952, 977, 977, 993, 954, 973, 968, 978, 957, 986, 970, 956, 978, 951, 972, 955, 955, 986, 987, 980, 991, 977, 970, 981, 972, 960, 997, 982, 999, 991, 994, 989, 985, 998, 964, 957, 953};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 36968;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> theArray = {1000, 987, 957, 956, 994, 986, 987, 968, 957, 994, 1000, 982, 981, 951, 984, 987, 970, 995, 982, 973, 970, 973, 976, 986, 953, 958, 999, 992, 950, 976, 982, 961, 957, 999, 951, 962, 973, 965, 971, 959, 992, 999, 997, 979, 984, 950, 956, 953, 989, 978};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 38981;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> theArray = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 975, 974, 973, 972, 971, 970, 969, 968, 967, 966, 965, 964, 963, 962, 961, 960, 959, 958, 957, 956, 955, 954, 953, 952, 951};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 47775;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> theArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> theArray = {951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
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
    vector<int> theArray = {2, 2};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
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
    vector<int> theArray = {2, 2, 2};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
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
    vector<int> theArray = {951, 950, 951, 950, 951, 951, 950, 950, 950, 950, 951, 950, 951, 950, 951, 951, 951, 950, 950, 951, 951, 950, 951, 950, 951, 950, 951, 950, 950, 950, 951, 951, 950, 951, 950, 950, 951, 951, 951, 950, 950, 950, 951, 950, 950, 950, 951, 950, 951, 951};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 20921;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> theArray = {950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950, 950};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> theArray = {5, 4, 11, 8, 9, 22, 3, 17, 5, 41, 2, 1, 9, 34, 55, 66, 4, 11, 8, 25, 52, 3, 11, 5, 22, 33, 1, 44, 14, 55, 3, 22, 11, 8, 9, 22, 3, 17, 99, 41, 2, 7, 4, 14, 55, 38, 22, 11, 99, 13};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 675;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> theArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 33, 8, 2, 6, 5, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 55, 45, 46, 47, 48, 1, 4};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> theArray = {6, 4, 5, 3, 8, 2, 7, 2, 11, 2, 2};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> theArray = {998, 465, 12, 34, 156, 866, 147, 666, 777, 919, 737, 432, 1, 46, 285, 643, 445, 321, 123, 465, 789, 747, 777, 1};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 7460;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> theArray = {1, 1, 343, 54, 45, 78, 88, 5, 423, 32, 234, 5, 11, 2, 22, 21, 212, 1, 2, 2, 2, 2, 154, 25, 215, 215, 215, 88, 59, 21, 10, 48, 45, 5, 18, 99, 1000, 1, 55, 45};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 1825;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> theArray = {2, 4, 5, 2, 100, 3, 45, 67, 2, 3, 455, 56, 54, 34, 65, 234, 23};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 576;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> theArray = {1000, 7, 1000, 1, 1000, 2, 1000, 3, 1000, 7, 1000, 1, 1000, 2, 1000, 5, 1000, 1000, 1000, 1000, 1, 1000, 1000, 1000, 7, 1000, 1, 1000, 2, 1000, 3, 1000, 7, 1000, 1, 1000, 2, 1000, 5, 1000, 1000, 1000, 1000, 1, 1000, 1000};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> theArray = {34, 5, 1, 45, 1000, 465, 34, 45, 2, 6, 1, 546};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 1094;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> theArray = {7, 5, 2, 3, 45, 34, 5, 3, 4, 45, 345, 2, 3, 4, 4, 34, 5, 54, 2, 4, 34, 4, 34, 23, 3, 41, 1, 1, 45, 1, 3, 4, 6, 88, 888, 34, 34, 33, 13, 7, 8, 22, 5, 6, 7, 3, 3, 1, 89, 3};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 724;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> theArray = {22, 11, 24, 1, 3, 17, 8};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> theArray = {681, 286, 389, 57, 267, 948, 110, 53, 797, 191, 859, 112, 138, 974, 494, 948, 160, 728, 719, 571, 585, 779, 558, 682, 693, 390, 161, 183, 94, 915, 730, 666, 844, 801, 245, 296, 858, 585, 640, 574, 289, 623, 244, 772, 451, 572, 908, 823, 643, 866};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 19912;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> theArray = {1, 1, 343, 54, 45, 78, 88, 5, 423, 32, 234, 5, 11, 2, 22, 21, 212, 1, 2, 2, 2, 2, 154, 25, 215, 215, 215, 88, 59, 21, 10, 48, 45, 5, 18, 99, 1000, 1, 55, 45, 23, 23, 232, 22, 21, 87, 76, 66, 6, 75};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 2456;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> theArray = {1, 9, 3, 4, 10, 1000, 600, 8, 2, 4, 6, 800, 900, 300, 50, 70, 1, 4, 8, 10, 100, 600, 300, 382, 400, 5, 5, 5, 7, 7, 7, 8, 6, 8, 6, 8, 6};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 3330;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> theArray = {2, 3, 2, 2, 3, 1, 1, 2, 2, 3, 1, 1, 3};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> theArray = {1000, 999, 998, 997, 996, 995, 994, 998, 996, 990, 1000, 999, 998, 997, 996, 995, 994, 998, 996, 990, 1000, 999, 998, 997, 996, 995, 994, 998, 996, 990, 1000, 999, 998, 997, 996, 995, 994, 998, 996, 990, 1000, 999, 998, 997, 996, 995, 994, 998};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 37849;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> theArray = {7, 1, 2, 3, 999, 999, 999, 999, 999, 999, 99, 99, 9, 9, 9, 76, 255, 255, 998, 988, 464, 1, 2, 1, 4, 5, 6, 7, 8, 998, 544, 344, 22, 34, 4, 3, 3, 3, 34, 4, 3, 3, 4, 5, 6, 7, 88, 55, 33, 22};
    InsertSort* pObj = new InsertSort();
    clock_t start = clock();
    int result = pObj->calcMinimalCost(theArray);
    clock_t end = clock();
    delete pObj;
    int expected = 5520;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22627678&rd=10675&pm=4844
********************************************************************************
#include<iostream> 
#include<vector> 
using namespace std; 
int f[50],ma,i,j,sum,n; 
class InsertSort{ 
public: 
int calcMinimalCost(vector<int> x){ 
   n=x.size(); 
   sum=0; 
   for(i=0;i<n;i++){ 
      sum+=x[i]; 
      f[i]=x[i]; 
      for(j=0;j<i;j++) 
         if(x[j]<=x[i]&&f[j]+x[i]>f[i]) 
            f[i]=f[j]+x[i]; 
      if(f[i]>ma) 
         ma=f[i]; 
   } 
   return sum-ma; 
} 
};

********************************************************************************
*******************************************************************************/