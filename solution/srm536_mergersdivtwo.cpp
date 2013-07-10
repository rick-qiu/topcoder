/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11802
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

class MergersDivTwo {
public:
    double findMaximum(vector<int> revenues, int k);
};

double MergersDivTwo::findMaximum(vector<int> revenues, int k) {
    double ret;
    return ret;
}


int test0() {
    vector<int> revenues = {5, -7, 3};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> revenues = {5, -7, 3};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> revenues = {1, 2, 2, 3, -10, 7};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9166666666666665;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> revenues = {-100, -100, -100, -100, -100, 100};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -66.66666666666667;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> revenues = {869, 857, -938, -290, 79, -901, 32, -907, 256, -167, 510, -965, -826, 808, 890, -233, -881, 255, -709, 506, 334, -184, 726, -406, 204, -912, 325, -445, 440, -368};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 706.0369290573373;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> revenues = {300, -800, 700, -89, -82, -97, 100, -89, -89, -94, -89, -89, -1000, -500, -800, -86, -86, -700, -87, -80, -89, -81, 300, -87, -100, -96, -99, -87, -93, 100};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 189.87845804988663;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> revenues = {-1000, -300, -97, 900, -94, -96, -99, -400, -400, -81, -86, 900, -1000, -600, 300, -89, 700, 1000, -82, -94, -93, -91, -300, -200, -91, 800, -84, 700, 0, -400};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 710.8573696145124;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> revenues = {-90, -82, -91, -900, -82, -400, 400, -89, -84, -91, -93, -400, 300, -400, -97, -98, -92, 500, 500, 500, 900, 600, 700, -100, 800, -300, -600, -500, -93, -86, 700, -300, -100, -81, -96, -85, -1000, -80, -89, -300, -93, 800, -99, 1000, -84, -88, -86, -84, -90, 600};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 632.2304353632479;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> revenues = {4, 21, -355, -56, -351, -2, -5, 5, -10, 2, 8, 6, 40, 22, -357, -950, -356, 544, -657, -335, 95, -953, -650, -957, 250, 248, -655, 552, -2, -357, -651, 5, 551, -2, -47, 4, 544, -1, -355, -17, -656, 7, 65};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 241.77255639097746;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> revenues = {-790, -348, 243, 246, 549, -352, -276, -1, -69, 77, -349, -84, 7, -652, 692, 243, -348, 186, 549, -353, -56, 25, 553, 36, -647, -46, 74, 251, -653, 32, -55, 546, 87, 244, -52, -640, 9, -348, -54, 245, -651, 550, 548, 5, -8};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 420.7946084104938;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> revenues = {-13, 3, 496, 548, -954, 1, 21, -355, 244, -50, -54, -919, 7, -657, -651, -7, -48, -651, -352, -949, -17, 1, -950, -351, -2, -49, 678, -955, -58, -653, -955, -35, -147, -649, -951, -654, 48, -355, -617, -15, -348, 247, -648, 243};
    int k = 5;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 415.98374076952376;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> revenues = {245, -977, 545, -348, -951, -708, -655, -51, -91, -350, 0, 253, 547, 47, -54, -223, -806, 250, -354, -348, 1, -761, -3, 0, -51, -654, -953, 71, 9, -16, 551, 543, -655, 88, 8, -5, -47, 52, 10, 15, -347, -649, -10, 889, 5, -950, -245, -497, -4};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 335.73408564814815;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> revenues = {-10, -651, -950, -576, -44, -951, -10, -46, -86, -650, -990, -950, 64, -18, 31, -7, 85, -48, -652, -39, -957, -650, -777, 6, 8, 1, 546, -350, -349, 247, -2, -8, -31, -47, -956, -657, -947, 97, -947, 494, -53, -653, 9, -47, -352};
    int k = 6;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 247.798616894746;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> revenues = {-56, -652, -54, 552, 1, 60, 5, 414, -84, -7, -648, 74, 78, 85, -53, -955, 742, 3, -648, 7, 547, 547, 548, -649, 4, 369, -955, 549, 221, -950, 253, 249, -3, 6, -1, 543, -68, 36, -11, -866, -60, 574, -6, -48, -349, 6, -953, 68};
    int k = 11;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 498.5644547075028;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> revenues = {715, -347, 53, -947, 543, -681, -951, -10, 3, -354, -355, 253, -902, 73, -348, -104, 82, -349, -76, -347, 6, -50, -732, -657, -629, 61, -83, 0, -651, 52, -50, -47, -177, -349, -648, -7, -347, -947, 543, -55, 318, 6, 8, 735, -347, 248, 246, 547};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 505.74137429510193;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> revenues = {548, -651, -349, 252, -55, -652, -6, 543, 9, -12, -19, -351, -956, 249, 727, 812, 791, 154, -1, 550, 243, 552, -951, 96, 8, 549, 5, 546, -24, -51, -653, 550, 545, -948, 546, 545, -356, 0, -6, 549, 597, -657};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 635.0892260950855;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> revenues = {-647, 40, -3, -4, -56, -890, -389, 95, 8, 616, 93, 1, -50, -52, 249, 243, -1, -955, -53, 94, 63, -93, -652, -57, -4, -54, 45, 543, -650, 88, 10, -57, 642, -950, -355, -222, 544, -353, 545, -55, -53, 553, -951, 3, 7};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 443.60229766803843;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> revenues = {252, 244, -96, -957, -55, 551, 59, 7, 253, -57, -50, -49, 4, 3, 545, -8, -77, -38, -47, -954, -54, 252, -352, 8, 284, 54, -655, 6, 252, -6, 13, -176, -35, 9, 62, -26, 551, -30, -4, 652, -179, -53, -347, 337, -62};
    int k = 6;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 477.2643927455527;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> revenues = {1, -32, -764, -7, -951, -647, -2, -51, 253, -4, -345, 253, 244, -47, -272, -60, 543, -56, -2, -956, -950, 553, -40, 526, 544, -649, 243, -7, 0, -50, 244, 7, -53, -657, 248, -88, 9, -48, -348, -657, 804, -655, -9, -56, -48, 79, -478};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 423.69955908289245;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> revenues = {84, -96, -651, -42, 5, 56, -407, -3, 345, -2, 243, 79, -4, 125, 352, -652, 248, -3, 548, 252, -354, -654, 7, -53, -266, -768, -351, -74, -291, -49, 245, -355, 543, 253, 246, -80, -54, -1, -357, -6, 320, 6, 9, 67, -347, -123};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 471.1257590690506;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> revenues = {-93, 22, 924, 70, -952, -67, 10, 247, 548, -350, -62, 705, 249, -648, 1, -79, -57, -5, 575, -49, -656, -348, 42, 5, 550, 2, -654, 8, 546, 169, 3, -656, 553, 100, -649, 250, -47, 553, -347, -90, -657, -95, -949, 54, -565, -652, 857};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 755.5247154645622;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> revenues = {553, 388, -50, 553, 550, -5, -51, -2, 6, -652, -10, 246, 248, 9, -47, -56, -10, 129, -1, 545, 59, 550, 243, -655, 1, -352, -127, -950, -2, 549, -947, -49, -351, 295, -952, -60, -79, 486, -55, -350, -856, 656, 0, 95, 23, -357, -96, 249, 546};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 534.0882641392895;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> revenues = {4, 21, -355, -56, -351, -2, -5, 5, -10, 2, 8, 6, 40, 22, -357, -950, -356, 544, -657, -335, 95, -953, -650, -957, 250, 248, -655, 552, -2, -357, -651, 5, 551, -2, -47, 4, 544, -1, -355, -17, -656, 7, 65};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 241.77255639097746;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> revenues = {69, 3, 4, -349, -649, 547, -651, -355, 9, 3, 5, 253, 424, -57, 8, -45, 249, -67, -6, -3, -347, -4, -647, -1, -352, 69, -815, 551, -7, -59, -235, -51, 106, -35, -4, -648, -48, 9, -352, -653, 262, 246, -48, 75, -45, 97, -957, -654};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 297.18513031550066;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> revenues = {250, -248, -394, 983, 550, 844, -657, -3, 546, -354, -831, 77, -57, 551, 550, 40, 546, 253, 0, 244, -608, 8, 547, -656, 253, -83, -3, 8, -1, 243, -95, 46, -4, -17, -657, -50, 6, 551, -948, -8, -57, 1, -190, 46, 544};
    int k = 10;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 586.0912299465241;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> revenues = {-50, -51, -54, -950, 74, -11, -45, -1, -936, 244, 8, -949, 552, 869, 1, -350, 8, -653, -6, 253, 243, 250, 3, -56, -6, 248, -49, -642, -58, -592, 546, -352, -949, -511, 552, -54, -6, 246, 253, -54, 549, -55};
    int k = 19;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 241.47587719298247;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> revenues = {-349, -3, 246, 6, -10, -54, -83, -947, 88, 251, 545, 547, -137, -955, 380, 279, 549, 1, 377, -957, -356, 544, 253, 547, -51, -348, -56, 938, -46, -813, -956, -515, -54, -957, -357, 552, 243, -1, 814, 553, 95, 5};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 604.725343883547;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> revenues = {-357, 1, -352, 9, -353, -4, -52, -949, 6, -10, 550, 551, -54, -53, 811, -7, 249, -52, 4, -73, -47, 245, 246, 4, -649, -949, -13, 250, -9, -110, -26, -952, -801, 519, -649, 551, -56, 246, 75, 150, -194, -649};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 450.15553218482904;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> revenues = {-355, 4, 544, -56, -954, -649, 47, -576, -366, -53, -3, -48, -5, 4, 352, 247, -49, 45, -238, -79, -651, 648, -951, 246, -60, -811, -956, -655, 244, 569, 55, 16, -952, -955, -351, 937, -9, 546, 945, 75, 253, -49, -9, -347, -348, -56, 61, 51};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 586.2865506685697;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> revenues = {-54, -551, -657, -47, -956, 269, -405, -48, -648, -47, 244, -728, -35, -41, -937, 998, 874, -2, -653, -655, -8, 246, 348, -4, -356, -5, -85, 8, 38, -55, -53, -3, 8, -30, -52, 244, -947, 827, -651, -356, -954, 246, 243, 51, -21, -51, 2, -356, 8, -5};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 382.14132612179486;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> revenues = {-5, -348, 549, 548, 8, -351, -52, 105, -656, 115, -347, -48, 5, -383, -52, -352, -657, -54, 244, 0, -950, -53, -47, -9, -6, 246, -348, -353, -53, 412, 548, -957, -16, -651, -348, 3, -54, -956, -53, 245, 54, 781, -690, -78};
    int k = 6;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 499.73338140554574;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> revenues = {-955, 244, -56, 936, 549, 550, -8, -957, 252, -951, 8, -194, -1, -355, -655, -8, -57, -141, -3, -10, -67, -67, -49, -855, -657, 544, -48, 7, -657, -10, -650, -49, -51, 42, 543, -956, -11, -647, -953, 95, 245, 1, 8};
    int k = 5;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 568.3621436444444;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> revenues = {-95, -5, -348, 90, 90, -51, -48, -55, 549, -53, 252, 728, 546, 3, 72, -762, 323, 553, 56, -61, 246, 243, 115, 244, -74, -9, -956, -51, -947, 994, -953, -9, -4, -5, -1, 1, -947, 5, 68, -956, -5, -356, -136, 243, -953, -70, -11, -468};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 513.340727629485;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> revenues = {-348, 248, 700, -10, -49, -954, -647, -655, -50, 544, -654, 553, -349, 545, -29, -9, -263, 1, 548, -347, 6, 160, 128, -749, 66, -356, -91, 248, -54, 2, 7, 6, -653, -357, 245, 93, 6, -952, 546, 2, 833, -356};
    int k = 19;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 271.1425438596491;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> revenues = {550, -651, -50, -652, -36, -189, 35, 295, -57, 7, 5, -57, -79, -657, -652, -49, 5, -652, 11, 550, 247, -59, 253, -10, -818, 42, 8, -948, 246, -649, -648, -9, -7, -6, 253, 250, -1, -68, -68, -242, 689};
    int k = 14;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 241.18469387755104;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> revenues = {-955, -354, 245, 549, 17, 0, -219, 250, 552, -347, -44, 543, -357, -951, 552, 223, 5, -52, -657, 1, -654, -46, 0, 543, -356, 243, 251, -16, -353, 1, -864, 550, -57, -351, -655, -791, 247, 551, 8, -182, 549, 10, -10, 546, 32, 551, -49, -835, 247};
    int k = 6;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 541.3084591529084;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> revenues = {8, 952, -80, -350, -30, -72, 33, -652, -653, -90, -3, -969, 79, -952, -54, 548, -7, -1, 249, -950, 917, -347, -49, 56, 249, -649, -79, -30, -355, 9, -51, -498, 39, -994, 248, 19, -418, 553, 253, -68, 550, -953, 252, -955};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 517.8160230848524;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> revenues = {249, 96, -347, -52, -48, -49, -7, 552, 44, -956, 279, -22, -351, -58, -38, -76, 243, 24, 18, -1, -72, 164, 544, 13, -77, -50, 0, 71, -956, -55, -348, 549, -74, 88, 246, -50, -7, 87, -647, 958, -348, -653, -949, 247, -69, -354, 0};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 470.11697581364905;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> revenues = {-145, -648, 544, -356, 2, -1, -948, -48, 2, -50, 983, 550, -49, -950, 694, -655, 795, 5, 3, -647, -6, 246, 551, -49, 10, 545, -952, -352, 35, 247, 553, 247, 249, -349, -4, -4, -649, -41, -20, 201, -649, -55};
    int k = 20;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 306.5195652173913;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> revenues = {546, 545, -355, 245, -354, 7, 552, 9, 2, -1, -947, 552, -649, -352, -484, -1, 358, -354, -3, 544, -653, 11, 247, 4, -38, 2, -352, 2, -573, -957, 10, -954, -352, -9, 248, -7, -55, -654, 70, -54, 27, -645, -6, 21, 3, -348, -51, -3};
    int k = 14;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 281.2875283446712;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> revenues = {549, -953, -53, 252, -62, 9, -47, -47, -650, -56, -347, 0, -348, 37, -647, 582, -352, 548, 546, -954, -5, -650, -353, -1, 552, 71, -349, 72, 7, -521, 5, -347, -52, -225, 841, -352, -45, -434, -627, -54, -6, 5};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 602.8096564511458;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> revenues = {489, -6, 550, -770, 551, -52, -951, 8, 922, -56, -950, 9, -956, 93, 45, 551, -354, -56, -2, 244, 8, 8, -949, -655, -948, -354, 250, -352, -51, -55, 1, 7, -649, -8, 4, -48, 6, -7, -92, 551, -5};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 489.2775607638889;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> revenues = {5, -50, 543, -49, -53, -3, 2, -652, -951, 247, -4, -2, -656, 246, 23, 92, 252, 10, 5, 621, 551, 244, -63, -13, -653, -938, -37, 250, -1, 551, 6, -54, -2, -354, -47, -329, -950, -647, 68, -649, -6, 543, -3, 551, 2};
    int k = 20;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 226.72307692307692;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> revenues = {3, 550, -353, 268, 62, 53, -62, -49, 549, 553, 543, -6, -655, 4, 1, -355, -876, -956, -10, -656, -950, -57, 83, 244, 547, -48, 545, 553, -52, -948, -100, -1, 8, 99, -577, -55, -51, -47, 246, -4, 5, 24, -52, -947, 248};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 469.38949474165526;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> revenues = {74, -48, 551, 4, -953, -948, 849, -859, 75, -57, -647, -30, 252, 151, -875, -55, 30, -9, -350, 87, 462, -950, -52, -5, -947, -31, 73, 87, -53, 556, 251, 2, 7, -654, -48, 9, 543, -653, 246, 56, 21, -651, -253, -95, -652, -649, -51, -15};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 419.9052491998171;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> revenues = {547, -23, 552, 251, 552, -953, 80, -4, -7, 189, -353, -629, -3, -55, -651, -53, 720, 545, 243, -3, -968, -10, -651, -930, 552, 2, -81, 251, 249, 353, -950, -650, 9, -952, 75, 97, 706, 545, -9, 23, -957, -948, -1, -16, 91};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 565.4477008351585;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> revenues = {360, 10, 76, -57, 312, -953, -708, 364, -351, -356, -347, 428, -57, -954, 513, -53, 544, -10, -69, 501, -653, 4, -3, 546, -50, -49, 247, 7, 69, 97, -119, -2, 79, -654, -7, 6, -248, 6, -49, -50, -50, -16, 0, -351, 54, -41, 4};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 404.23624338624336;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> revenues = {-44, 174, 546, -48, -957, -56, 543, -941, -656, -5, 247, 243, 544, 545, -350, -7, 907, -952, 4, -54, 219, -654, -3, -4, 946, -56, 244, 6, -40, -48, 0, 662, -652, 41, -949, -951, 248, 10, -874, 543, -56};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 616.4881365740741;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> revenues = {8, 8, -6, -965, 2, 548, -351, -71, -350, -219, -647, -654, 245, -955, -355, 0, 97, 552, -654, 550, -59, 547, -3, 7, 711, -3, 2, -951, 6, -953, 252, 246, 23, 243, -90, 45, -112, 545, -349, -49, -53, -351, -347};
    int k = 6;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 528.0100872910892;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> revenues = {-1, -33, -80, -353, 545, 7, 0, 7, 873, 567, 243, -195, 544, -1, -824, 85, 3, 171, -685, -800, 69, -4, -947, -2, -381, -6, -1, -23, 40, 783, -351, 991, -354, 544, -993, 96, -7, 550, 31, 25, 548, 245, -349, 250};
    int k = 10;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 606.4683333333334;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> revenues = {-8, -53, -55, -947, 248, -53, -686, -955, -55, 766, -9, 544, -354, 253, 546, -648, -957, -5, 7, 250, 1, -52, 2, 8, 31, -16, -656, 5, -647, -357, -129, -65, -348, 9, -4, 249, -890, -7, 543, 245, -955, 237, 2};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 323.1608974358974;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> revenues = {-21, -76, 988, -57, -4, -50, -267, 10, 4, -948, -947, 889, -154, 20, -48, -951, -54, -652, 0, -52, -356, 6, -657, -653, -695, -88, -8, -955, -9, -905, -950, 543, -55, -648, 264, -648, -949, -2, -3, -17, -947, -347, -950, 250};
    int k = 17;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 142.83193277310926;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> revenues = {250, -6, -947, 789, 99, -51, -347, 59, -947, -347, -6, -354, -651, -51, -347, -348, 248, -7, -955, -510, -51, 45, -51, -952, 243, 249, 2, -354, -6, 247, -48, -949, -947, -50, -53, 4, 251, -82, -48, -349, 99, -41, -9, -51, -86, 100, -9, 243, 247, -352};
    int k = 6;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 329.2031874026563;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> revenues = {-947, 2, -8, -347, 161, -48, 659, 252, -351, -10, -560, -953, -41, 545, 5, 37, -14, 328, 248, -52, 547, -467, -950, 1, -8, 553, 253, -747, -347, 387, -948, 591, -357, 8, 551, -355, -51, -345, 252, -48, -5, -352, -648, 3, -352};
    int k = 6;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 535.7701729145233;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> revenues = {-353, 59, 544, -653, 49, -48, -54, -651, -10, 545, -54, -54, 551, 33, -1, 546, -56, 11, -49, -955, -10, 77, 544, -305, 251, -10, -652, -56, -2, -951, -2, -348, -41, -54, -57, -348, 121, -8, -53, 952, 73, 100, 94, -33, 543, 84, -948};
    int k = 8;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 540.8461083984375;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> revenues = {3, 6, 9, 8, 250, -52, -5, -646, -348, -656, 1, 451, 250, 251, 67, -49, 253, 0, -9, -4, 549, -2, 248, 551, -55, -948, -657, -353, 96, 8, -4, 253, -657, -357, -947, 251, -352, 0, -932, -14, 4, -650, 549, -648, 548, 386, -54, 596, -2};
    int k = 11;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 408.34485001530453;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> revenues = {-352, -653, -75, 5, -5, 23, -347, 9, 544, -354, -10, -35, -96, -5, -954, -994, -348, -618, -353, 3, 7, -977, -51, -68, -9, 249, 344, -785, 90, 543, 36, -14, 0, -350, -8, -952, 552, -650, -1, 249, 543, 248, 543, -655, 546, -7, -34};
    int k = 13;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 342.7385114885115;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> revenues = {-8, 14, 295, -657, 546, -652, 76, 12, -48, -5, -356, 729, -3, 1, 2, 8, 294, -954, 7, -954, -2, 552, -357, 42, 4, 543, -295, 244, 243, -54, -8, -6, -33, 43, 253, 546, 43, 667, 775, 551, -91, 686, -854, 58, 6, 23};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 586.3046410608139;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> revenues = {-355, 249, 425, -650, 246, -944, -656, 83, -48, -54, -648, 253, -356, 544, -1, -52, -647, 1, 200, -704, -53, -957, -950, 6, 137, -652, -648, -55, -836, -5, -3, -349, -9, 546, -657, -9, 958, 551, 252, -1, 6, -48, -2, 545, 252, 253, 48, -54};
    int k = 9;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 470.74632830361224;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> revenues = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int k = 50;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> revenues = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int k = 26;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> revenues = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> revenues = {-182, -22, -952, -28, -53, -58, -52, -957, -54};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -119.12;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> revenues = {-8, -353, -950, -652, -55, -954, -957, -9, -56};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -180.24;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> revenues = {-2, -47, -11, -4, -95, -7, -947, -352, -10};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -62.67999999999999;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> revenues = {-52, -42, -156, -946, -18, -95, -955, -419, -48};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -134.84;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> revenues = {-1000, 1000};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> revenues = {-699, -373, 510, 359, 229, -799, -522, -624, -973};
    int k = 5;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32000000000000456;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> revenues = {-981, -972, -963, -948, -946, -928, -927, -908, -902, -896, -895, -890, -882, -874, -874, -855, -826, -777, -770, -750, -728, -690, -621, -598, -575, -555, -497, -485, -481, -477, -463, -446, -402, -300, -296, -255, -236, -221, -203, -166, -143, -119, -113, -109, -85, -26, -26, -21, -9, 51};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -0.010811316695289008;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> revenues = {-971, -948, -947, -936, -910, -898, -888, -884, -804, -784, -755, -733, -730, -708, -668, -615, -605, -601, -601, -591, -589, -562, -542, -513, -497, -435, -415, -396, -393, -363, -354, -344, -308, -305, -302, -274, -247, -217, -214, -192, -188, -113, -112, -112, -89, -70, -49, -9, -4, 56};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08931759489396048;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> revenues = {-986, -963, -948, -901, -874, -858, -855, -839, -776, -767, -738, -700, -689, -687, -653, -643, -637, -622, -609, -608, -607, -568, -542, -537, -502, -464, -449, -372, -363, -350, -349, -326, -289, -272, -251, -226, -208, -184, -184, -182, -180, -164, -152, -146, -87, -71, -48, -40, -34, 99};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14192664564740198;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> revenues = {-998, -944, -933, -856, -853, -835, -827, -813, -790, -784, -780, -777, -744, -712, -690, -682, -677, -671, -666, -604, -604, -596, -593, -591, -566, -529, -527, -398, -395, -368, -340, -277, -250, -241, -227, -223, -205, -178, -158, -154, -154, -132, -130, -120, -112, -82, -58, -45, -27, 98};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05946072289036408;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> revenues = {-983, -973, -961, -916, -903, -893, -892, -886, -875, -848, -823, -820, -779, -743, -739, -648, -614, -583, -540, -533, -522, -518, -506, -498, -470, -465, -459, -439, -428, -418, -418, -400, -368, -368, -338, -306, -299, -275, -249, -218, -194, -168, -160, -142, -134, -90, -86, -80, -16, 115};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -0.018686732359900777;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> revenues = {-981, -972, -963, -948, -946, -928, -927, -908, -902, -896, -895, -890, -882, -874, -874, -855, -826, -777, -770, -750, -728, -690, -621, -598, -575, -555, -497, -485, -481, -477, -463, -446, -402, -300, -296, -255, -236, -221, -203, -166, -143, -119, -113, -109, -85, -26, -26, -21, -9, 21};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004461599147633777;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> revenues = {-971, -948, -947, -936, -910, -898, -888, -884, -804, -784, -755, -733, -730, -708, -668, -615, -605, -601, -601, -591, -589, -562, -542, -513, -497, -435, -415, -396, -393, -363, -354, -344, -308, -305, -302, -274, -247, -217, -214, -192, -188, -113, -112, -112, -89, -70, -49, -9, -4, 21};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -0.18781559978837414;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> revenues = {-986, -963, -948, -901, -874, -858, -855, -839, -776, -767, -738, -700, -689, -687, -653, -643, -637, -622, -609, -608, -607, -568, -542, -537, -502, -464, -449, -372, -363, -350, -349, -326, -289, -272, -251, -226, -208, -184, -184, -182, -180, -164, -152, -146, -87, -71, -48, -40, -34, 45};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00724766587079273;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> revenues = {-998, -944, -933, -856, -853, -835, -827, -813, -790, -784, -780, -777, -744, -712, -690, -682, -677, -671, -666, -604, -604, -596, -593, -591, -566, -529, -527, -398, -395, -368, -340, -277, -250, -241, -227, -223, -205, -178, -158, -154, -154, -132, -130, -120, -112, -82, -58, -45, -27, 45};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17167842545826772;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> revenues = {-983, -973, -961, -916, -903, -893, -892, -886, -875, -848, -823, -820, -779, -743, -739, -648, -614, -583, -540, -533, -522, -518, -506, -498, -470, -465, -459, -439, -428, -418, -418, -400, -368, -368, -338, -306, -299, -275, -249, -218, -194, -168, -160, -142, -134, -90, -86, -80, -16, 54};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22746336958789826;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> revenues = {265, -389, 101, -871, -752, -966, -847, -533, -909, -286, -244, -1000, -653};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6035665294924873;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> revenues = {-469, 138, 400, -909, -557, -466, -991, -962, -779, -553};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6203703703703999;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> revenues = {698, -613, 74, -443, 410, -247, 489, -541, 213, 712, 779, -3, -842, 407, 18, 314, -194, 525, -92, 664, 492, -587, -300, -499, -445, -188, -452, 385, 430, -787, 209, -274, -580, 212, -996, -144, 538, -611, 471, 714, 965, 833, 819, -643, -955, 812, -806, 123, -147, -506};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 785.1837686374603;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> revenues = {-100, -100, -100, -100, -100, 100};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -66.66666666666667;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> revenues = {886, -394, 173, -638, 236, -231, 733, -146, 0, 0, 296, -142, 515, -987, 10, -690, 803, -240, 636, -90, 867, -142, 88, -549, 379, -123, 114, -732, 841, -900, 947, -81, 519, 0, 0, -409, 391, -307, 813, -822, 269, -796, 641, -566, 880, -624, 811, -424, 303, -394};
    int k = 12;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 760.2217796840958;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> revenues = {869, 857, -938, -290, 79, -901, 32, -907, 256, -167, 510, -965, -826, 808, 890, -233, -881, 255, -709, 506, 334, -184, 726, -406, 204, -912, 325, -445, 440, -368};
    int k = 7;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 706.0369290573373;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> revenues = {383, 777, 793, 386, 649, 362, 690, 763, 540, 172, -211, 567, -782, 862, 67, 929, 22, 69, 393, 11, 229, -421, 784, -198, 315, 413, -91, 956, -862, 996, 305, 84, -336, 846, -313, 124, 582, 814, -434, -43, 87, -276, 788, -403, 754, 932, 676, 739, 226, -94};
    int k = 5;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 925.5364900317867;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> revenues = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 38.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> revenues = {-1000, 999, 2, 34, 1, 4, 5, 346, 244, 1000, 456, 365, -800, -564, -999, 346, -490, 1, 2, 356, 346, -564, -22, -599, 156, 123, 156, 15, 224, 503, 404, 129, -543, 455, 11, -245, -603, 167, 105, -123, 144, 905, -943, 383, 998, -534, 465, -659, 448, -33};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 929.8667455560263;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> revenues = {1, 2, 3};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.25;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> revenues = {-999, -826, -345, 1, 2, 3, 4, 5, 6, 7, -999, -826, -345, 1, 2, 3, 4, 5, 6, 7, -999, -826, -345, 1, 2, 3, 4, 5, 6, 7, -999, -826, -345, 1, 2, 3, 4, 5, 6, 7, -999, -826, -345, 1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 6.967741925001604;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> revenues = {1, 5, -2, 7, 123, -78, -7, 4, 5, 89, 12, 34, 23, 1, 3, 7, 8, 34, 12, 234, 76, 23, 45, 78, 7, 9, 9, 9, 9, 9, 9, 9, 9, 5, 78, 9, 2, 3, 45, 666, 34, 921, 345, 45, 678, 123, 234, 567, 62};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 765.8335819838521;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> revenues = {-100, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int k = 4;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -2.546875;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> revenues = {-1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = -1000.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> revenues = {1, 2, 3, 4, 5, 6, 7, 9, 9, 10, 11, 12, 13, 14, 15, 15, 16, 17, 1, 354, 234, 2, 23, 23, 432, 34, 3, 4, 2, 12, 23, 3, 423, 365, 3, 32, 4, 34, 34, 23, 2, 3, 23, 23, 23, 34, 45, 4, 34, 44};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 398.1234065371372;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> revenues = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> revenues = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> revenues = {1, 2, 2, 3, -10, 7};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9166666666666665;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> revenues = {-100, 533, 678, 144, 756, 367, -53, -435, 864, -1000, 1000, 654, -563, 576, 875, 467, 362, 532, -678, 104, -345, 546, 752, 326, 325, -563, 576, 875, 467, 362, 532, -678, 104, -345, 546, 752, 326, 325, -100, 533, 678, 144, 756, 367, -53, -435, 864, -1000, 1000, 654};
    int k = 3;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 952.6827937901388;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> revenues = {869, 857, -938, -290, 79, -901, 32, -907, 256, -167, 510, -965, -826, 808, 890, -233, -881, 255, -709, 506, 334, -184, 726, -406, 204, -912, 325, -445, 440, -368, 222, 222, 222, 222, 222, 222, 222, 222, 222, 111, 111, 111, 222, 222, 111, 222, 111, 222, 111, 111};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 857.4143047050397;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> revenues = {180, 536, 48, -157, 126, 408, -8, -26, -619, 168, 945, -540, 815, 139, -692, 993, 960, 164, -143, 772, 116, -881, 591, 865, -764, 945, 815, 819, 7, 738, -725, 744, -170, 323, -857, 956, -713, 135, -514, -331, 861, 988, -314, 675, 127, -449, 225, -357, 716, -919};
    int k = 2;
    MergersDivTwo* pObj = new MergersDivTwo();
    clock_t start = clock();
    double result = pObj->findMaximum(revenues, k);
    clock_t end = clock();
    delete pObj;
    double expected = 980.8257445696017;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22913261&rd=14728&pm=11802
********************************************************************************
#include<iostream> 
#include<cstring> 
#include<cstdio> 
#include<cstdlib> 
#include<algorithm> 
#include<vector> 
using namespace std; 
int a[100];double f[100]; 
struct MergersDivTwo 
{ 
  public:  
  double findMaximum(vector <int> r, int k) 
  { 
         sort(r.begin(),r.end()); 
         int n=r.size(); 
         for(int i=1;i<=n;i++) 
         a[i]=r[i-1]; 
         for(int i=1;i<=n;i++) 
         { 
                 f[i]=-1e100; 
                 if(i>=k) 
                 { 
                         double tmp=0; 
                         for(int j=1;j<=i;j++) 
                         tmp+=a[j]; 
                         f[i]=tmp/i; 
                         for(int j=1;j<=i-k+1;j++) 
                         { 
                                 tmp-=a[j]; 
                                 f[i]=max(f[i],(tmp+f[j])/(i-j+1)); 
                         } 
                 } 
         } 
         return f[n]; 
  } 
};

********************************************************************************
*******************************************************************************/