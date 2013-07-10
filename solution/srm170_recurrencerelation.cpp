/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1915
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

class RecurrenceRelation {
public:
    int moduloTen(vector<int> coefficients, vector<int> initial, int N);
};

int RecurrenceRelation::moduloTen(vector<int> coefficients, vector<int> initial, int N) {
    int ret;
    return ret;
}


int test0() {
    vector<int> coefficients = {2, 1};
    vector<int> initial = {9, 7};
    int N = 6;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {1, 1};
    vector<int> initial = {0, 1};
    int N = 9;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> coefficients = {2};
    vector<int> initial = {1};
    int N = 20;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> coefficients = {2};
    vector<int> initial = {1};
    int N = 64;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> coefficients = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> initial = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int N = 96837;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> coefficients = {25, 143};
    vector<int> initial = {0, 0};
    int N = 100000;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> initial = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = 654;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> coefficients = {901, 492, 100};
    vector<int> initial = {-6, -15, -39};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> coefficients = {901, 492, 100};
    vector<int> initial = {5, -15, -39};
    int N = 2;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> coefficients = {-2};
    vector<int> initial = {-4};
    int N = 3;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> coefficients = {4, 9, -150, -30};
    vector<int> initial = {63, 10, -199, 593};
    int N = 83;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {157, -358, 1000, 29, -599};
    vector<int> initial = {28, 0, 53, -66, -599};
    int N = 93753;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> coefficients = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    vector<int> initial = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    int N = 99999;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> coefficients = {217, 588, 967, -12, -659, 764, -778, -529};
    vector<int> initial = {-475, -963, -265, -270, -557, 365, 843, 342};
    int N = 28387;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> coefficients = {771};
    vector<int> initial = {-891};
    int N = 73266;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> coefficients = {-377, 442, -643, 692, -569};
    vector<int> initial = {-713, 267, 771, 950, -535};
    int N = 78556;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> coefficients = {-941, -246, -272, 47, 575, -667, 726, 54, -873, 796};
    vector<int> initial = {-559, -396, -347, -509, -174, -955, -982, 496, -733, -693};
    int N = 6441;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> coefficients = {574, -878, -582, 287, -871, -109, 950, -349, 667};
    vector<int> initial = {-532, 265, -447, -107, 346, -559, 176, -447, -775};
    int N = 2239;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> coefficients = {-729, 576, -843};
    vector<int> initial = {105, -118, 260};
    int N = 71291;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> coefficients = {568, -696, 286, 521};
    vector<int> initial = {-183, -302, 984, 261};
    int N = 69507;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> coefficients = {711, -847, -336, 334, -787, 540, -886, -746, 808};
    vector<int> initial = {-777, -842, 660, 315, -443, 593, 368, 247, 969};
    int N = 8286;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> coefficients = {478, -555, 887, 322, -452};
    vector<int> initial = {189, 339, 731, 407, 416};
    int N = 57268;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> coefficients = {639, -584};
    vector<int> initial = {925, 860};
    int N = 70138;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> coefficients = {-384, 706, -912, -643, -229, -379, -566};
    vector<int> initial = {-397, -810, -280, -388, -483, -429, -407};
    int N = 12128;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> coefficients = {-150, 716, 96, -624, -527, -901, -662, 507};
    vector<int> initial = {151, 203, -42, 399, -501, 134, 875, -46};
    int N = 38428;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> coefficients = {144, 932, -708, 576};
    vector<int> initial = {-877, 58, -298, -87};
    int N = 68447;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> coefficients = {506, -560, 561};
    vector<int> initial = {-148, 913, -844};
    int N = 24724;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> coefficients = {-329, 612, 991, 835, 586, -161, -447, 744, -403};
    vector<int> initial = {492, 144, 711, -672, 341, 621, 983, -516, -964};
    int N = 73462;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> coefficients = {-494, 297, 984, 925};
    vector<int> initial = {575, -988, 294, 101};
    int N = 56215;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> coefficients = {758, -912};
    vector<int> initial = {678, 369};
    int N = 50217;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {-363, 521, 555, -43, 899, -852};
    vector<int> initial = {-344, 780, -641, -893, -743, -505};
    int N = 14068;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> coefficients = {-775, 581, -631, -628};
    vector<int> initial = {-643, 522, 122, 851};
    int N = 39505;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> coefficients = {-110, 57, -94, -387};
    vector<int> initial = {980, -22, 879, 100};
    int N = 69226;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> coefficients = {-893, -798, 605};
    vector<int> initial = {-774, -813, -466};
    int N = 21337;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> coefficients = {-647, 251, -246, 53, 109, -393, -566, -602, 692};
    vector<int> initial = {721, -275, 259, 656, -423, 903, 706, 179, -191};
    int N = 28546;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> coefficients = {-65, 819, 904, 229, -446, 764, 708, 190};
    vector<int> initial = {678, 42, -980, 66, 988, -93, -428, -539};
    int N = 20988;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> coefficients = {674, -623, -601, 544, 991, 606, -217, -915, 139};
    vector<int> initial = {-60, -720, -189, -203, 235, -592, -460, -399, 547};
    int N = 5036;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> coefficients = {-831, 913, 640, -939, 639};
    vector<int> initial = {176, 490, 620, -614, 450};
    int N = 1166;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> coefficients = {-611, 593, -69, 142, 928, -114, -155, 311};
    vector<int> initial = {-437, -655, 136, -79, -253, -290, -471, 984};
    int N = 41238;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> coefficients = {909, -336, -595, -3, 805, 474, 948};
    vector<int> initial = {359, 378, 862, -533, -365, 991, 863};
    int N = 52247;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> coefficients = {765};
    vector<int> initial = {42};
    int N = 16129;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> coefficients = {520, 210, 984, -508, 596, -661, -403, -562};
    vector<int> initial = {274, 964, -946, -149, 682, 61, -439, 2};
    int N = 95186;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> coefficients = {469, 628, 775};
    vector<int> initial = {784, -58, 132};
    int N = 72912;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> coefficients = {4, -6};
    vector<int> initial = {2, 3};
    int N = 2;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> coefficients = {901, 492, 100};
    vector<int> initial = {-6, -15, -39};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> coefficients = {2};
    vector<int> initial = {-111};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> coefficients = {2};
    vector<int> initial = {1};
    int N = 20;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> coefficients = {2};
    vector<int> initial = {1};
    int N = 64;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> coefficients = {2};
    vector<int> initial = {-100};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> coefficients = {1, 1};
    vector<int> initial = {1, 2};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> coefficients = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> initial = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = 654;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> coefficients = {2};
    vector<int> initial = {1};
    int N = 9999;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> coefficients = {45, 23};
    vector<int> initial = {43, 55};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> coefficients = {901, 492, 100};
    vector<int> initial = {-6, -15, -39};
    int N = 1;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> coefficients = {-10, -10};
    vector<int> initial = {1, 1};
    int N = 10000;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> coefficients = {1};
    vector<int> initial = {-1};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> coefficients = {0, 0, 0};
    vector<int> initial = {1, 2, 3};
    int N = 99999;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> coefficients = {2, 1};
    vector<int> initial = {9, 7};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> coefficients = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> initial = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int N = 100000;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> coefficients = {1, 1, 1};
    vector<int> initial = {9, 1, 1};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> coefficients = {34, 43};
    vector<int> initial = {-199, 323};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> coefficients = {7};
    vector<int> initial = {1};
    int N = 100000;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> coefficients = {-32, -34};
    vector<int> initial = {-199, -32};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> coefficients = {2};
    vector<int> initial = {1};
    int N = 108;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> coefficients = {25, 143, -111, -432, -312, -999};
    vector<int> initial = {-818, -13, -312, -823, -211, 987};
    int N = 100000;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> coefficients = {-16};
    vector<int> initial = {-16};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> coefficients = {25, 143, -123, -234, -345, -567};
    vector<int> initial = {-12, -982, -345, 247, -232, -987};
    int N = 100000;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {10, 10};
    vector<int> initial = {10, 10};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {2};
    vector<int> initial = {2};
    int N = 0;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> coefficients = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> initial = {1000, 1000, 1000, 1000, 999, 1000, 1000, 1000, 1000, 1000};
    int N = 100000;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {1, 1};
    vector<int> initial = {10, 10};
    int N = 1;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> coefficients = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> initial = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int N = 3;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
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
    vector<int> coefficients = {1, 2, 3};
    vector<int> initial = {-1, -10, -2};
    int N = 1;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> coefficients = {1, 1};
    vector<int> initial = {12, 12};
    int N = 1;
    RecurrenceRelation* pObj = new RecurrenceRelation();
    clock_t start = clock();
    int result = pObj->moduloTen(coefficients, initial, N);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4655&pm=1915
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class RecurrenceRelation { 
public: 
int moduloTen(vector <int> a, vector <int> b, int c) { 
  int i, j, k, x, y, z, n; 
  int ret; 
 
  if( c < a.size() ) return (b[c]%10+10)%10; 
  for( i = 0; i <= c-a.size(); i++ ) { 
    x = 0; 
    for( j = 0; j < a.size(); j++ ) x += b[j]*a[j]; 
    b.push_back((x%10+10)%10); 
    b.erase(b.begin()); 
  } 
  return b.back(); 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/