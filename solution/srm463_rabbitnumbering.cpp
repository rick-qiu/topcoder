/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10697
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

class RabbitNumbering {
public:
    int theCount(vector<int> maxNumber);
};

int RabbitNumbering::theCount(vector<int> maxNumber) {
    int ret;
    return ret;
}


int test0() {
    vector<int> maxNumber = {5};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> maxNumber = {4, 4, 4, 4};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> maxNumber = {5, 8};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> maxNumber = {2, 1, 2};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> maxNumber = {25, 489, 76, 98, 704, 98, 768, 39, 697, 8, 56, 74, 36, 95, 87, 2, 968, 4, 920, 54, 873, 90};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 676780400;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> maxNumber = {190};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> maxNumber = {122, 123};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 14884;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> maxNumber = {472, 478, 306};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 68603976;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> maxNumber = {14, 4, 18, 11};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 7200;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> maxNumber = {2, 2, 5, 3, 5};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> maxNumber = {44, 23, 56, 22, 16, 57, 50, 56, 56, 84, 25, 52, 45, 16, 66, 39, 43, 17, 50, 14, 31, 71, 76, 58, 62, 56, 56, 49, 57, 7, 27, 37, 37, 48, 66, 33, 53};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 912191125;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> maxNumber = {41, 51};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 2050;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> maxNumber = {20, 29, 22, 44, 12, 35, 41, 68, 46, 56, 13, 44, 53, 25};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 156265080;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> maxNumber = {3, 12, 14, 17, 9, 26, 11, 23, 6, 17, 8, 18, 28, 23, 17, 16, 13, 21, 21, 22, 10, 30, 27, 23, 5};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 489700007;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> maxNumber = {20, 17, 4, 8};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 7140;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> maxNumber = {10, 34, 30, 24, 13, 45, 21, 43, 40, 7, 37, 50, 14, 47, 11, 35, 4, 50, 17, 44, 38, 8, 28, 8, 23, 2, 19, 42, 38, 16, 6, 18, 49, 25, 5, 40, 15, 27, 33, 43, 32, 32, 28, 19, 29, 2, 21, 48, 23, 10};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 268435456;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> maxNumber = {48, 21, 41, 32, 18, 49, 68, 39, 47, 39, 45, 11, 4, 45, 48, 17, 56, 59, 30, 2, 47, 31, 41, 27, 62, 34, 50, 9, 21, 30, 25, 46, 43, 41, 14, 21, 57, 35, 27, 47, 64, 43, 9, 38, 51, 34, 31, 33, 22};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 96783208;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> maxNumber = {277};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 277;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> maxNumber = {44, 26, 15, 24, 34, 8, 20, 38, 4, 22, 27, 23, 35, 41, 27, 38, 31, 20, 23};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 877427600;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> maxNumber = {40, 8, 46, 46, 2, 27, 19, 15, 40, 28, 22, 34, 14, 39, 31, 28, 39, 3, 31, 37, 19, 23, 23, 27, 29, 32, 15, 34, 23, 15, 23, 39, 34, 39};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 581883665;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> maxNumber = {965};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 965;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> maxNumber = {427, 166};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 70716;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> maxNumber = {165, 405, 874};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 58127520;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> maxNumber = {830, 822, 778, 225};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 555824674;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> maxNumber = {420, 380, 38, 839, 626};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 652805463;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> maxNumber = {229, 528, 772, 56, 321, 403, 762, 677, 806, 75, 280, 34, 977, 289, 798, 343, 698, 758, 939, 440, 383, 876, 262, 283, 492, 967, 675, 328, 319};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 801937806;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> maxNumber = {712, 985, 240, 450};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 132426675;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> maxNumber = {280, 626, 841, 850, 577, 423, 514, 16, 140, 494, 716, 886, 890, 889, 685, 532, 89, 786, 423, 652, 955, 284, 244, 214, 984, 268, 535, 597, 398};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 237178289;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> maxNumber = {620, 146, 888, 516, 84, 670, 454, 271, 779, 786, 978, 101, 354, 584, 596, 554, 592, 943, 288, 903, 98, 145, 354, 698, 810, 779, 126, 90, 190, 761, 545, 338, 199, 239, 58, 520, 889, 484, 293, 701, 91, 343, 586, 570, 169, 176};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 499609145;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> maxNumber = {64, 327, 767, 376, 724, 763, 615, 75, 912, 840, 812, 419, 962, 58, 44, 745, 876, 824, 272, 473, 280};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 661838298;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> maxNumber = {6};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> maxNumber = {108, 29};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 3103;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> maxNumber = {25, 4, 14};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 1196;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> maxNumber = {9, 564, 463, 1};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 2068968;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> maxNumber = {2, 287, 294, 260, 8};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 297484320;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> maxNumber = {26, 284, 692};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 5077020;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> maxNumber = {67, 578, 552, 268, 10, 147, 89, 348, 20, 384, 4, 152, 407, 26, 116, 53, 56, 28, 17, 101, 150, 2, 42, 5, 8, 10, 27};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 239341733;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> maxNumber = {69, 4, 7, 45, 180, 9, 3, 58, 2, 263, 86, 70, 86, 162, 5, 19, 315};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 256996107;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> maxNumber = {367, 20, 287, 22, 140, 439, 693, 288, 124, 37, 16, 82, 39, 287, 49, 5, 374, 12, 418, 35, 56, 12, 137, 362, 326, 15, 52, 2};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 205386743;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> maxNumber = {24, 100, 628, 9, 161, 22, 143, 110, 166, 49, 2, 142, 1, 4, 60, 58, 121, 9, 12, 31, 23, 61, 22, 69, 1, 550, 11, 85, 21, 22, 101, 37, 332};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
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
    vector<int> maxNumber = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 512907687;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> maxNumber = {1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> maxNumber = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> maxNumber = {1};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> maxNumber = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> maxNumber = {25, 489, 76, 98, 704, 98, 768, 39, 697, 8, 56, 74, 36, 95, 87, 2, 968, 4, 920, 54, 873, 90};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 676780400;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> maxNumber = {5, 7};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> maxNumber = {1000, 1000, 1000, 1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 10987042;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> maxNumber = {530, 775, 820, 727, 734, 420, 687, 338, 695, 185, 431, 528, 429, 8, 857, 541, 988, 123, 827, 992, 495, 129, 273, 338, 534, 97, 405, 711, 88, 101, 728, 505, 736, 805, 836, 85, 298, 381, 943, 464, 71, 49, 668, 911, 691, 80, 663, 674, 950, 363};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 455673152;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> maxNumber = {45, 45, 45, 34, 456, 444, 333};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 93026007;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> maxNumber = {25, 489, 76, 98, 704, 98, 768, 39, 697, 8, 999, 74, 36, 95, 87, 2, 968, 4, 920, 999, 999, 909};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 690914420;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> maxNumber = {25, 489, 76, 98, 704, 98, 798, 39, 697, 8, 56, 74, 36, 95, 87, 2, 968, 4, 920, 54, 873, 90};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 703851616;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> maxNumber = {1000, 1000, 1000, 1000, 1000, 1000, 234, 324, 345, 654};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 657239485;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> maxNumber = {1000, 1000, 1000, 1000, 1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 943093762;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> maxNumber = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 210504217;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> maxNumber = {2, 5, 125, 985, 657, 45, 11, 92, 12, 58, 125, 526, 548, 14, 54, 981, 126, 853, 265, 485, 123, 945, 12, 325, 425, 125, 365, 156, 165, 9, 574, 125};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 822647744;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> maxNumber = {25, 489, 76, 98, 704, 98, 768, 39, 697, 8, 56, 74, 36, 95, 87, 2, 968, 4, 920, 54, 873, 90, 77, 78, 79, 80, 90, 31, 34, 35, 36, 37, 38, 39, 40, 567, 568, 569, 570, 234, 546};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 904675131;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> maxNumber = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 130223370;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> maxNumber = {1, 2};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> maxNumber = {1000, 1000, 1000, 1000, 1000, 999, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 997, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 997};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 458059245;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> maxNumber = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 512907687;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> maxNumber = {1000, 1000, 1000, 1000, 1000, 1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 378286624;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> maxNumber = {1000, 999, 1000, 998, 1000, 1000, 1000, 1000, 1000, 789, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 403161038;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> maxNumber = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    RabbitNumbering* pObj = new RabbitNumbering();
    clock_t start = clock();
    int result = pObj->theCount(maxNumber);
    clock_t end = clock();
    delete pObj;
    int expected = 112594051;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=14148&pm=10697
********************************************************************************
#include <math.h> 
#include <string.h> 
#include <vector> 
#include <string> 
#include <map> 
#include <queue> 
#include <algorithm> 
using namespace std; 
 
const long long mmod = 1000000007; 
class RabbitNumbering 
{ 
  public: 
  int theCount(vector <int> maxNumber) 
  { 
    int n = maxNumber.size(); 
    sort(maxNumber.begin(), maxNumber.end()); 
    long long res = 1; 
    for (int i=0; i<n; i++) { 
      res = res * (maxNumber[i]-i); 
      res %= mmod; 
    } 
    return res; 
  }; 
};

********************************************************************************
*******************************************************************************/