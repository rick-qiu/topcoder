/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11288
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

class SubFibonacci {
public:
    int maxElements(vector<int> S);
};

int SubFibonacci::maxElements(vector<int> S) {
    int ret;
    return ret;
}


int test0() {
    vector<int> S = {8, 1, 20, 3, 10};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {19, 47, 50, 58, 77, 99};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {512};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> S = {3, 5, 7, 10, 13, 15, 20, 90};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> S = {1, 2};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> S = {100000000, 99999999, 99999998, 99999997, 99999996, 99999995, 99999994, 99999993, 99999992, 99999991, 99999990, 99999989, 99999988, 99999987, 99999986, 99999985, 99999984, 99999983, 99999982, 99999981, 99999980, 99999979, 99999978, 99999977, 99999976, 99999975, 99999974, 99999973, 99999972, 99999971, 99999970, 99999969, 99999968, 99999967, 99999966, 99999965, 99999964, 99999963, 99999962, 99999961, 99999960, 99999959, 99999958, 99999957, 99999956, 99999955, 99999954, 99999953, 99999952, 99999951};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> S = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> S = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> S = {1, 3, 4, 7, 11, 18, 29, 47, 76, 123, 199, 322, 521, 843, 1364, 2207, 3571, 5778, 9349, 15127, 24476, 39603, 64079, 103682, 167761, 271443, 439204, 710647, 1149851, 1860498, 3010349, 4870847, 7881196, 12752043, 20633239, 33385282, 54018521, 87403803};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> S = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {999221, 999233, 999239, 999269, 999287, 999307, 999329, 999331, 999359, 999371, 999377, 999389, 999431, 999433, 999437, 999451, 999491, 999499, 999521, 999529, 999541, 999553, 999563, 999599, 999611, 999613, 999623, 999631, 999653, 999667, 999671, 999683, 999721, 999727, 999749, 999763, 999769, 999773, 999809, 999853, 999863, 999883, 999907, 999917, 999931, 999953, 999959, 999961, 999979, 999983};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> S = {5, 4, 3, 7, 8, 9, 17, 26};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {10, 14, 20, 100, 101, 201};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> S = {1, 2, 3, 5, 8, 13, 21, 34, 35, 39, 43, 82, 125, 207, 332, 539, 871, 1410, 2281, 3691, 5972, 9663, 15635, 25298, 40933, 66231, 107164, 173395, 280559, 453954, 734513, 1188467, 1922980, 3111447, 5034427, 8145874, 13180301, 21326175, 34506476, 55832651, 90339127};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> S = {1, 7, 8, 38, 61, 259, 353, 16454, 69700, 295254, 99999, 56, 8901, 23};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> S = {2673, 57, 906366, 22, 37, 17, 631, 7369};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> S = {29028664, 1, 7, 6, 13, 46969365, 75998029};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> S = {6, 10, 110, 178, 288, 466, 488, 3319, 8688, 22745, 31024085, 81222109, 82256363, 98347500, 28955677, 14091631, 5281930, 32815441, 39419867, 69792279, 16762848, 62743064, 11815158, 76165202, 1739025, 90352894, 81560458, 47006515, 89870694, 11656816, 55474949, 4215181, 10332549, 51283389, 6864856, 81026347, 81129822, 78558453, 74365655, 9810827, 18778888, 24146162, 78224351, 1035250, 22493662, 59696380, 15126880, 80291943, 92511820, 54546747};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> S = {12, 42, 111, 471, 762, 1233, 1995, 3228, 41669, 67422, 109091, 1209838, 91963604, 50084221, 9274667, 17289810, 61899378, 37956221, 71545186, 52252271, 19516678, 71068052, 94639316, 31173493, 26543001, 51370848, 41506041, 30342741, 58235703, 75048739, 63988915, 36794156, 1930746, 73799741, 55573043, 26076907, 52024091, 9124645, 1086920, 11720470, 24251524, 81378862, 56748642, 31314622};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> S = {13, 512, 17681, 28602, 38849, 62859, 52990063, 85739723, 31463082, 66023308, 1120783, 45878811, 56495880, 25182321, 50647433, 76012558, 96250372, 45286748, 59702402, 75309724, 49173948, 53724795, 58168817, 7409650, 28773533, 22157731, 96720157, 30704278, 48473823, 4809552, 9297537, 497913, 13934196, 10384456};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {1024, 2049, 3074, 5123, 21517, 34837, 56354, 91191, 113031, 295919, 774726, 1253533, 3281792, 5310051, 13901894, 22493737, 95284999, 64734735, 90702071, 91763318, 21483376, 74533045, 23226399, 40023035, 75653827, 21621562, 96518915, 53352499, 72268994, 25047824, 2119223, 17555742, 37266577, 77428946, 19246041, 90991371, 35597762, 79172042, 72281256, 10271844, 75892199, 55501885, 58745666, 33218102, 64799421, 11759931, 47152297, 75183877, 29011017, 90370719};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> S = {104, 77, 181, 258, 439, 704, 1139, 1843, 2982, 4825, 451, 730, 1181, 1911, 3092, 5003};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {10, 11, 32, 138, 223, 584, 1529, 2474, 4003, 16957, 27437, 44394, 304281, 74528, 5460101, 8834629, 14294730, 23129359, 37424089, 60553448, 66947194, 50494392, 64903763, 42689944, 43033778, 93073942, 64311505, 92069044, 98942792, 36580499, 69633219, 1062014, 6652592, 6899796, 31007312, 78414984, 50407518, 19121425, 57587025, 22688773, 29393269, 33479223, 78190658, 40655286, 66697324, 95506430, 52415216, 66365972, 70690306, 81426232};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> S = {102085, 165177, 267262, 432439, 699701, 1132140, 1831841, 2963981, 4795822, 7759803, 12555625, 20315428, 32871053, 53186481, 86057534, 7, 110, 117, 227, 344, 571, 915, 1486, 2401, 3887, 9253043, 90153851, 84436975, 26673157, 85360147, 27470753, 72263450, 49671651, 72056148, 71206242, 38768501, 41689367, 72268255, 97937444, 48589162, 3275566, 76352427, 98996679, 22396991, 86455804, 74201804, 4306611, 19935026, 4908813};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> S = {1, 9, 10, 19, 29, 48, 77, 125, 202, 327, 529, 856, 1385, 2241, 3626, 5867, 9493, 15360, 24853, 40213, 65066, 79206, 128158, 207364, 335522, 542886, 878408, 1421294, 2299702, 3720996, 44961896, 39148702, 415242, 49893464, 58031025, 71105548, 31319695, 67284067, 13775750, 68273022, 46473576, 99135896, 48260126, 18737025, 1323899, 20316273, 89943266, 92608751, 62005639, 14727873};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> S = {5, 11, 16, 27, 43, 70, 113, 183, 296, 479, 775, 1254, 2029, 3283, 5312, 8595, 2, 100, 102, 202, 304, 506, 810, 1316, 2126, 3442, 5568, 9010, 14578, 23588, 38166, 61754, 99920, 161674, 261594, 423268, 684862, 1108130, 1792992, 10};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> S = {2, 10, 12, 22, 34, 56, 90, 146, 236, 382, 618, 1000, 1618, 2618, 4236, 6854, 11090, 17944, 29034, 46978, 76012, 122990, 199002, 321992, 520994, 842986, 1363980, 2206966, 3570946, 5777912, 9348858, 15126770, 24475628, 39602398, 64078026, 50, 60, 70, 43062547, 63111152, 18003438, 71931325, 14624183, 92916780, 58387128, 88825986, 49739742, 78322154, 93734798, 94701638};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> S = {46666391, 44595101, 80534583, 70288290, 28431147, 47818650, 84064040, 96704168, 46808577, 35716287, 44964293, 65545601, 37040185, 17796918, 55488867, 29648936, 79802556, 22733091, 25227834, 42913708, 93252880, 97159158, 57537890, 86169660, 55546286, 98880227, 35909401, 86384791, 45131376, 83127390};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {91797766, 80238842, 89422931, 62086056, 8669989, 89757932, 98666447, 57890508, 36566508, 34382733, 55371153};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> S = {71422918, 25684422, 10117327, 53588205, 5486977, 32850417, 78816038, 917036, 26103296, 28491547, 10971277, 64789307, 84037832, 9851503, 53215060, 22938974, 7499230, 36342449, 31827322, 99296996, 16581291, 21250253, 13899403, 77767631, 11008184, 12565849, 88174490, 47574692};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> S = {96061994, 49686800, 70887850, 21746415, 59804126, 76992406, 79749744, 45170894, 8324795, 80666779, 71274189, 36816342, 44154408, 88579848, 73370525, 6522262, 41794907, 96309499, 14021492, 78137355, 28136820, 65834839, 47234997, 1903424, 79734241, 77518979};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {44816441, 18209821, 60486299, 44281373, 14271814, 62689450, 15169223, 88534581, 75009927, 44677980, 68284324, 20180820, 5519127, 1467454, 43971360, 42335468, 45621861, 32551207, 68222344, 4660475, 74346113, 17048194, 18681966, 4999820, 45185014, 84516804, 4751168, 47088437, 16767396, 82270147, 12516396, 61583836, 479967, 25519046, 5865208, 67268132, 88208495, 73550782, 8319064, 63218421, 70745114};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> S = {35915592, 76264240, 30587193, 79886952, 71116059, 28725405, 64954510, 91854754, 33385879, 91816975, 8902948, 52067844, 96816794, 54087961, 89100999, 1567961, 53692749, 5868394, 36354459, 18725497, 19968581, 89350777, 44244542, 78350141, 9135261, 32453037, 4417274, 17454324, 48187809, 27678739, 46574063, 36619753};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> S = {77161255, 16506704, 27575388, 58403011, 33977565, 19430142, 91788890, 25794539, 28333089, 96373085, 22611332, 34937401, 85474084, 76695645, 41146501, 43858829, 65566455, 59871997, 16343762, 54917232, 4116539, 94693902, 64052492, 36569575, 51627527, 34023167};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> S = {79306266, 80597229, 73893487, 35765595, 10274835, 42916542, 63340983, 68677846, 76894107, 82771124, 60466735, 2688645, 11104212, 56839819, 77816329, 98557964, 94830254, 7028325, 39704464, 38689083, 72594779, 99576461, 7549196, 80028362, 3692999, 54759449, 44080853, 92778925, 6386975, 78104020, 30052659, 85693240, 11217600, 3946146, 21458835, 21492435, 46862687, 37316169, 90170280, 23756793};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> S = {3153366, 78961790, 83707855, 59993184, 9294470, 82265818, 7339790, 16322794, 74486633, 98545224, 41433924, 74063093, 6094419, 21462286, 77756091, 60853867, 18059490, 70535015, 67240841, 48679861, 53104026, 5450433, 59897461, 57050171, 79425619, 81389895, 3912857, 16741787, 71560174, 80186002, 36829078, 27229891, 11664143};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {87223074, 20958612, 7835453, 47079215, 89797757, 82322085, 45624438, 31231680, 56385178, 51718856, 5210317, 86657620, 12572722, 23269807, 9708987, 32329915};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> S = {61, 41, 75, 63, 38, 69, 71, 6};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> S = {15, 55, 74, 41, 34, 12, 62, 1, 30};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> S = {5, 99, 211, 336, 259, 326, 408, 185, 174, 6};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> S = {343, 311, 10, 54, 144, 233, 51, 271, 70, 2};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> S = {1, 233, 334, 290, 442, 370, 144, 229, 177};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> S = {1, 10946, 63245986, 63245990, 100000000};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> S = {1, 6765, 63245986, 63245990, 63245991};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> S = {1};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> S = {100000000};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> S = {1000000, 1000001, 2000001, 2000003, 2000009};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> S = {1, 4, 1157800, 1619762, 3062209, 3879256, 4000000, 4924330, 5753226, 11877552, 12081476, 13100409, 15758372, 19823117, 20067776, 21377675, 22230784, 26813862, 26973128, 27937970, 29110908, 29504856, 29591580, 32667020, 33832756, 34390354, 35838285, 38445022, 38874160, 41474606, 43882062, 45101280, 46803616, 47108267, 48820852, 49504046, 49971328, 51469459, 51901381, 53075600, 53225539, 56118697, 59318438, 61358840, 61410680, 61682951, 61712649, 61834388, 67235805, 67842089};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> S = {38, 62, 100, 162, 262, 424, 686, 1110, 1796, 2906, 4702, 7608, 12310, 19918, 32228, 52146, 84374, 136520, 220894, 357414, 578308, 935722, 1514030, 46823204, 75990814, 4313782, 95839711, 3333013, 81997084, 30225478, 38750691, 97854634, 35259406, 37134792, 59521805, 92330740, 62199119, 11947550, 85498221, 93758791, 87505278, 62515568, 646711, 37438601, 12116425, 21243420};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> S = {8, 1, 20, 3, 10};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> S = {314, 315, 629, 944, 1573, 2517, 4090, 6607, 10697, 17304, 28001, 45305, 73306, 118611, 191917, 310528, 502445, 812973, 1315418, 2128391, 3443809, 5572200, 9016009, 14588209, 23604218, 521, 518, 1039, 1557, 2596, 4153, 6749, 10902, 17651, 28553, 46204, 74757, 120961, 195718, 316679, 512397, 829076, 1341473, 2170549, 3512022, 5682571, 9194593, 14877164, 24071757, 38948921};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> S = {18160810, 73005287, 93397091, 16772423, 8507591, 89565480, 48393216, 95497696, 18889240, 90589143, 65735246, 4635423, 88825106, 6275981, 80314361, 19903962, 67340166, 56925008, 91487187, 46908893, 49606148, 95311486, 41366783, 60413138, 75523919, 22474377, 32125515, 10213671, 34940098, 83741079, 75684409, 37023916, 37960422, 47617034, 78245658, 45374126, 38216940, 6593524, 36832001, 74780367, 41965602, 15977797, 65328671, 95295997, 96535376, 4525441, 73480683, 29047829, 27919522, 48955652};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> S = {3, 1097, 2207, 7, 8, 678, 9, 28047, 11, 15, 64079, 7752, 12543, 18, 21, 73428, 699, 23, 267, 24, 4092, 29, 2872, 4647, 12166, 33, 99999999, 20295, 47, 165, 7519, 19685, 3571, 4791, 63, 61, 2961, 76, 31851, 87, 99999997};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> S = {10, 14, 20, 34, 54, 88, 142, 230, 372, 602, 974, 1000, 1970, 2950, 4920, 7870, 12790, 20660, 33450, 54110, 87560, 141670, 229230, 370900, 600130, 971030, 1571160, 2542190, 4113350, 6655540, 10768890, 17424430, 28193320, 45617750, 73811070, 73811071, 73811072, 73811073, 73811074, 73811075, 73811076, 73811077, 73811078, 73811079, 73811080, 73811081, 73811082, 73811083, 73811084, 73811085};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 100000000};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> S = {1, 47, 199, 843, 3571, 9349, 15127, 24476, 64079, 103682, 167761, 271443, 439204, 710647, 1860498, 3010349, 4870847, 7881196, 12752043, 20633239, 33385282, 87403803};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> S = {99999998, 99999997, 99999999, 99999996, 99999995, 99999994, 99999993, 99999992};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> S = {1, 2, 3, 5, 8, 100, 200, 300, 500, 800, 24157817, 39088169};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> S = {150002, 400005, 1050013, 2750034, 7200089, 18850233, 49350610, 1542, 4111, 10791, 28262, 73995, 193723, 507174, 1327799, 3476223, 9100870, 66325441, 40549031, 29877911, 833951, 71088961, 62194101, 73378271, 5061571, 45489751, 22978731, 27224931, 58518891, 67100031, 67815031, 53408221, 64957441, 73441891, 90178171, 65988311, 57293601, 49724901, 74689011, 33881301, 98242051, 36485501, 32394691, 14909631, 58123171, 43731631, 71262311, 13765811, 21106061};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> S = {1, 8, 13, 21, 34, 7, 56, 91, 147, 10, 40, 70, 110, 180, 11, 55, 88, 99, 143, 231, 19, 4, 27, 50, 77, 204, 331, 535};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> S = {193930, 90128509, 8, 1, 73618286, 20, 34201293, 3, 17403099, 89130794, 90555731, 24794237, 10, 93128198, 15010346, 71947956, 40777815, 4405452, 1761387, 6317562, 5375163, 69887291, 70887714, 297169, 91019775, 58325989, 60571010, 39375381, 89539559, 27824594, 84005968, 46336539, 84239526, 64073399, 70822824, 19364610, 19316399, 4107334, 44499164, 53732709, 41162929, 14601005, 88534272, 88294632, 17175947, 66922355, 94153400, 57275918, 25961278, 88428239};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> S = {99999999, 27, 44, 487, 8739, 137, 14140, 410547, 1739105, 7366967, 8516818, 22297319, 58375139, 94452959};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> S = {9999, 10000, 10001, 10002, 10003, 10004};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {1000, 2000, 3000, 3, 4, 5};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> S = {3, 5, 8, 13, 14, 15, 29, 43};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> S = {1, 2, 4, 6, 11, 7, 18, 26, 27};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
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
    vector<int> S = {1, 4, 7234234, 62343465, 9, 213434, 134, 345, 678, 556, 7, 6, 456, 100, 101, 102, 103, 105, 456413, 64243, 53431, 123243, 4653451, 4531534, 453786, 876, 7687, 74564, 243435, 45468, 486642, 456469, 7864543, 4531326, 4567896, 676658, 87896, 5676978, 456567, 35423, 12312313, 4351245, 45633669, 4566598, 877763, 123, 321, 22263, 553212, 5431324};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> S = {1000000, 2000000, 3000000, 10000001, 20000002, 30000003};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> S = {2, 1, 3, 4, 7, 11, 18, 29, 47, 123145, 546564, 1235714};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> S = {1, 8, 10, 11, 1000, 1008};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> S = {4, 3571, 15127, 90000, 90001, 90002};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> S = {1, 2, 3, 5, 8, 13, 21, 30, 34, 55, 89, 144, 233, 239, 269, 300, 377, 568, 610, 867, 987, 1435, 1597, 2302, 2584, 3737, 4181, 6039, 6765, 9776, 10946, 15815, 17711, 25591, 28657, 41406, 46368, 66997, 75025, 108403, 121393, 175400, 196418, 283803, 317811, 459203, 514229, 743006, 832040, 1202209};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> S = {10001, 25002, 40003, 65005, 100001, 250002, 400003, 650005};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> S = {1, 18, 20, 35, 42};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> S = {200000, 600000, 3600000, 3900000, 4500000, 11500000, 30000000, 48500000};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> S = {1, 2, 3, 5, 8, 10, 18, 26, 44};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> S = {2, 1, 3, 4, 15, 12, 27, 39};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> S = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169};
    SubFibonacci* pObj = new SubFibonacci();
    clock_t start = clock();
    int result = pObj->maxElements(S);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707311&rd=14537&pm=11288
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define FOR(i,a,b) for(__typeof(b) i=(a);i!=(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(),a.end()
#define EACH(i,a) FOR(i,a.begin(),a.end())
#define PB push_back
#define iss istringstream
#define SZ(a) (int)a.size()
#define CLEAR(a) memset(a,0,sizeof(a))
#define ll long long
 
class SubFibonacci {
public:
  int maxElements(vector <int>);
};
 
long long fib[999];
 
inline int calc(vector< int > v) {
  if (SZ(v) <= 2) {return SZ(v);}
  set< int > st;
  REP(i,SZ(v)) {st.insert(v[i]);}
  
  int s = SZ(v);
  int ret = 2;
  for(int start = 0 ; start < s ; start++) {
    for(int i = start + 1 ; i < s ; i++) {
      for(int j = 0 ; fib[j] * v[start] < v[i]; j++) {
        int diff = v[i] - fib[j] * v[start];
        if ((diff % fib[j + 1]) == 0) {
          int y = diff / fib[j + 1];
          int x = v[start];
          int ct = 2;
          for(int k = j + 1 ;; k++) {
            long long val = fib[k] * x + fib[k + 1] * y;
            if (val > 100000000) {break;}
            if (st.count((int)val) > 0) {ct++;}
          }
          ret = max(ret, ct);
        }
      }
    }
  }  
  return ret;
}
 
int SubFibonacci::maxElements(vector <int> S) {
  fib[0] = 0;
  fib[1] = 1;
  for(int i = 2 ; i < 999 ; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  sort(ALL(S));
  int ans = 0;
  for(int L = 0 ; L < SZ(S) ; L++) {
    vector< int > a, b;
    for(int i = 0 ; i < L ; i++) {
      a.push_back(S[i]);
    }
    for(int i = L ; i < SZ(S) ; i++) {
      b.push_back(S[i]);
    }
    ans = max(ans, calc(a) + calc(b));
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/