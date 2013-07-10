/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5893
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

class SnakeTurbo {
public:
    double finishTime(int startLocation, int endLocation, vector<int> orbs);
};

double SnakeTurbo::finishTime(int startLocation, int endLocation, vector<int> orbs) {
    double ret;
    return ret;
}


int test0() {
    int startLocation = 10;
    int endLocation = 20;
    vector<int> orbs = {2, 18, 8};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int startLocation = 10;
    int endLocation = 0;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.998046875;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int startLocation = 77;
    int endLocation = 77;
    vector<int> orbs = {27, 127};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int startLocation = 0;
    int endLocation = 100000000;
    vector<int> orbs = {99999999};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99999995E7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int startLocation = 100;
    int endLocation = 200;
    vector<int> orbs = {99, 102, 96, 108, 84, 132, 36};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.375;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int startLocation = 1000;
    int endLocation = 10000;
    vector<int> orbs = {999, 1005, 966};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1143.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int startLocation = 10;
    int endLocation = 100;
    vector<int> orbs = {11, 0};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 31.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int startLocation = 1000;
    int endLocation = 1000000000;
    vector<int> orbs = {999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 1001, 1002, 1003, 1004, 1005, 1007, 1009, 1010, 1020, 10001, 100002, 100004, 987654321, 987654322, 989898989, 999999997, 999999998, 999999999};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0081691057391424;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int startLocation = 40;
    int endLocation = 30;
    vector<int> orbs = {20, 39, 45, 47, 49, 1000000000};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int startLocation = 7777;
    int endLocation = 5555;
    vector<int> orbs = {};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2222.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int startLocation = 0;
    int endLocation = 1024;
    vector<int> orbs = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int startLocation = 4256;
    int endLocation = 9999;
    vector<int> orbs = {212, 3214, 544, 8912, 4892, 128, 8492, 8948, 1824, 48, 9003, 9994, 99, 119, 4177, 756, 5487, 4756, 888, 908, 1098, 81, 7605, 7128, 7599, 7336, 1, 2, 3, 9092, 4568, 4389, 1299, 3789, 2890, 1289, 8429, 474, 4419, 213, 5598, 4829, 8859, 8593, 9299, 1290, 84, 46, 2229, 3393};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 232.18855934188664;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int startLocation = 3;
    int endLocation = 0;
    vector<int> orbs = {4, 5, 6, 8, 10, 13, 16, 21, 27, 35, 45, 58, 74, 95, 122, 157, 202, 260, 334, 429, 551, 708, 910, 1070, 1404};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.370961904525757;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int startLocation = 0;
    int endLocation = 1000000000;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31, 33, 34, 35, 36, 37, 38, 39, 40, 42, 45};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0009095253999476;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int startLocation = 0;
    int endLocation = 1000000000;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000008881783735;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int startLocation = 1000000000;
    int endLocation = 0;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99999951E8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int startLocation = 1000;
    int endLocation = 20000;
    vector<int> orbs = {999, 997, 994, 990, 985, 979, 972, 956, 931, 889, 842, 775, 1002, 1005, 1010, 1020, 1040, 1080, 1120, 1200, 1300, 1500, 1900, 1901, 1999, 20001};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 4.163080960512161;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int startLocation = 500000000;
    int endLocation = 0;
    vector<int> orbs = {499999999, 500000003, 499999991, 500000027, 499999919, 500000243, 499999271, 500002187, 499993439, 500019683, 499940951, 500177147, 499468559, 501594323, 495217031, 514348907, 456953279, 629140163, 112579511};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 5681.183437347412;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int startLocation = 500000000;
    int endLocation = 100000000;
    vector<int> orbs = {499999999, 500000002, 499999996, 500000008, 499999984, 500000032, 499999936, 500000128, 499999744, 500000512, 499998976, 500002048, 499995904, 500008192, 499983616, 500032768, 499934464, 500131072, 499737856, 500524288, 498951424, 502097152, 495805696, 508388608, 483222784, 533554432, 432891136, 634217728, 231564544};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 35.990116119384766;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int startLocation = 500000000;
    int endLocation = 0;
    vector<int> orbs = {499999999, 500000003, 499999992, 500000020, 499999950, 500000125, 499999687, 500000783, 499998042, 500004895, 499987762, 500030595, 499923512, 500191220, 499521950, 501195125, 497012187, 507469533, 481326167, 546684583, 383288542, 791778645};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 928.4932708740234;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int startLocation = 500000000;
    int endLocation = 0;
    vector<int> orbs = {499999999, 500000002, 499999997, 500000005, 499999993, 500000010, 499999986, 500000019, 499999974, 500000035, 499999953, 500000063, 499999915, 500000114, 499999847, 500000205, 499999726, 500000366, 499999511, 500000653, 499999129, 500001162, 499998450, 500002067, 499997243, 500003677, 499995097, 500006538, 499991282, 500011625, 499984499, 500020669, 499972441, 500036746, 499951005, 500065327, 499912897, 500116138, 499845149, 500206469, 499724707, 500367058, 499510589, 500652549, 499129934, 501160089, 498453214, 502062382, 497250157, 600000000};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 4.899532506911905;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int startLocation = 14739012;
    int endLocation = 449842127;
    vector<int> orbs = {102457899, 258019305, 288238212, 7750000, 60777956, 353932032, 62186736, 73853675, 16107360};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3713853255859375E7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int startLocation = 18102175;
    int endLocation = 96325767;
    vector<int> orbs = {271309830, 119599740, 336657582, 483936544, 34218779, 200552625, 36369170, 47651910, 76043364, 25724952, 53895026, 1680104, 225343272, 18171944, 105967610, 12726000, 170581671, 64280880, 72495960, 121216992, 28344134, 30732894, 363726291, 73841318, 5180944, 33572, 2260080, 16124498, 296600460, 21402121, 34137594};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 3289959.757537842;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int startLocation = 42516705;
    int endLocation = 74086;
    vector<int> orbs = {68210232, 8032200, 652459, 200376815, 84524468, 41811636, 34145064, 7892695, 4668742, 395089464, 122017015, 149752320, 128982672, 38778985, 43398450, 151743079, 144576104, 90344737, 1629105, 22038710, 110196980, 123180642, 25968174, 171256368, 86140172, 29486592, 136488992, 71261450, 49862983, 138761980, 113452560, 40527808, 104468838, 139755720, 454990210, 89584962, 300409758, 3431918, 15279039, 1251068};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2778424.9805145264;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int startLocation = 336481488;
    int endLocation = 101405782;
    vector<int> orbs = {74208645, 31419312, 467224914, 9423700, 72842832, 34089484, 4511312, 66487365, 390025128, 39215358, 398789664, 275014528, 332516802, 309216231, 117598740, 313463520, 77894420, 138902208, 132163274, 5005476, 175528446};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.64731471953125E7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int startLocation = 3447324;
    int endLocation = 12511620;
    vector<int> orbs = {83505558, 156804360, 105226128, 485121455, 1278926, 6866510, 313370316, 310316844, 57106428, 179607220, 128145995, 169508256, 4408614, 47561085, 267400984, 393037662, 7704141, 5085080, 326467055, 7941531, 314809250, 55314630, 11765698, 160983658, 5794390, 3190, 78491430, 118992960, 77449119, 29887922, 58081906, 39452184, 9021705, 115159650, 43197624, 10088595, 90669277, 17601748, 99037048, 684912, 39830562, 239721695, 102408612};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1703856.734375;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int startLocation = 159898426;
    int endLocation = 7375280;
    vector<int> orbs = {47085631, 58098550, 14073015, 64968046, 210155428, 184937994, 491655120, 208072620, 126699870, 36161839, 42911031, 288129598, 39724568, 225334818, 5257216, 131215860, 142352840, 9367990, 257030680, 33388740, 158435816, 41060565, 151535530, 92701896, 62711656, 9083620, 44548860, 59894475, 18761734};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0423707127847672E7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int startLocation = 110829319;
    int endLocation = 307556224;
    vector<int> orbs = {70737548, 82485655, 242481893};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.5288095125E7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int startLocation = 24119221;
    int endLocation = 271300220;
    vector<int> orbs = {38547858, 51001137, 138658404};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 5.914982025E7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int startLocation = 77881418;
    int endLocation = 59620320;
    vector<int> orbs = {25291308};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8261098E7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int startLocation = 96407906;
    int endLocation = 3660612;
    vector<int> orbs = {69611136, 257607261, 35099568, 114494000, 46330492, 28362000, 104969000, 210622078, 41587068, 2948372, 34472158, 3664656, 27935202, 20851248, 158788374, 409306168, 2584288, 289291722, 50973850, 203308926, 2444288, 59739826, 21360218, 20598735, 38775568, 29164100, 3812692, 258535953, 1428301};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.658964597695923E7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int startLocation = 14962592;
    int endLocation = 12757075;
    vector<int> orbs = {29234445, 2694795, 237428119, 155981705, 250320, 3832598, 23793, 26865904, 56339504, 11077920, 258290640, 148359862, 151309136, 60770718, 228203481, 109996544, 133541100, 149993178, 14684971, 60095100, 90292700, 28244153, 15264350, 200882064, 149503406, 130460736, 5759737, 220742722, 204353758, 30265573, 161455487, 200941140};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1073421.5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int startLocation = 6050246;
    int endLocation = 115154295;
    vector<int> orbs = {27055833, 86311186, 330783750, 17098125, 16867116, 384999426, 334460904, 530227808, 120012724, 10831324, 23994548, 92273425, 169518978, 5432830, 139525293, 382840136, 79443196, 113262705, 55538504, 155610716, 3452438, 8081744, 13721138, 31619862, 30861207, 37624745, 23132200, 76183236, 83469855, 100864764, 327779998, 4567725, 60434360, 77299200, 3764700, 13432036, 95994650, 13203968, 102335638, 249240030, 14913280, 87083724, 2812980, 23123880, 112450800, 79781592, 168540510, 28618704, 77068725, 159649875};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1560349.5916371953;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int startLocation = 155908207;
    int endLocation = 60998658;
    vector<int> orbs = {30029454, 67450896, 38958780, 59272020, 38515113, 445022112, 233424768, 64507608, 80285120, 363702352, 76617576, 93143232, 17825448};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.15503621875E7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int startLocation = 306046167;
    int endLocation = 3637404;
    vector<int> orbs = {19170333, 298509506, 368924271, 324336792, 12176880, 15478753};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.578375259375E7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int startLocation = 6046035;
    int endLocation = 13533828;
    vector<int> orbs = {96480385, 180461984, 137962748, 262221520, 12206961, 291807628};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 6824359.5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int startLocation = 17428366;
    int endLocation = 2027970;
    vector<int> orbs = {128333790, 170722720, 86023420, 103163040, 249940048, 38420626, 33806182, 123927110, 99262527, 25621652, 1767052, 37682625, 174984452, 8798484, 573129117, 120336, 109983099, 409082560, 131794356, 24822029, 12921990, 36622608, 306117696, 51573600, 151957, 134954520, 120728396};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 8260757.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int startLocation = 27350310;
    int endLocation = 59092446;
    vector<int> orbs = {99855885, 67533048, 71215140, 15565386, 36944955, 23579437, 13957680, 28530876, 261798128, 98111208, 672846, 51760170, 138509959, 13647774, 7851844, 419803351, 108671868, 12302556, 9911356, 135921024, 9550008};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 6027455.231933594;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int startLocation = 53680549;
    int endLocation = 105618528;
    vector<int> orbs = {64201380, 33935360, 1029300, 13204908, 2017569, 222854868, 64790544, 264029464, 49609635, 41893632, 64101264, 48445026, 9899304, 17556038, 363939072, 194036202, 251593342, 25024850, 5726292, 244191410, 157573206, 56562295, 151096682, 84382809, 16969338, 41283675, 513263779, 95681925, 44089116, 5468946, 6612224, 35713282, 20753258, 428535248};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 6353127.135960996;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int startLocation = 74906559;
    int endLocation = 468977220;
    vector<int> orbs = {279827310, 162534975, 339093160, 8688141, 610869573, 32200272, 364458, 89125754, 77141582, 146228085, 36135127, 67178844, 106462976};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9083517229492188E7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int startLocation = 23670945;
    int endLocation = 259403904;
    vector<int> orbs = {1576058, 3765160, 49148475, 2388852, 181708970, 15508080, 40541688, 96351402, 255794790, 129401909, 188863812, 50905645, 320011536, 27001185, 3666108, 3361525, 113067556, 3819798, 7309412, 10507275, 33950300, 20680779, 16604926, 1271484, 21099864, 32474114, 5659352, 22524480, 65162675, 9526014, 77940605};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2741364.374576805;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int startLocation = 98992956;
    int endLocation = 12936900;
    vector<int> orbs = {82407052, 31359380, 119044407, 15506932, 176025058, 70925106, 2239208, 526683936, 24809855, 6065376, 2676180, 28807500, 24575320, 525826845, 104197463, 66964508, 263532217, 30912356, 21945924, 219279057, 52439154, 5240238, 452710880, 296839517, 82266129, 1550718, 17224235, 7394400, 367816344, 677625, 135555164, 39775890, 336363516, 54010498, 146911788, 104992368};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2381892720108032E7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int startLocation = 91400400;
    int endLocation = 7254824;
    vector<int> orbs = {87126686, 6130527, 50036976, 21669870};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 3.171222625E7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int startLocation = 15392280;
    int endLocation = 38839975;
    vector<int> orbs = {121491156, 377972616, 62483740, 38296104, 2348850, 120235962, 95047500, 23881718, 3876534, 404573494, 119676180, 37807779, 10417960, 41836002, 19300950, 39107124};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 9775601.8125;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int startLocation = 22931300;
    int endLocation = 5981535;
    vector<int> orbs = {98363978, 287939925, 49401300, 380740145, 266035260, 335940960, 545258940, 62543687, 47291554, 4155975, 27691455, 364230098, 206515388, 26720820, 18397189, 3362528, 10329166};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7878633.8125;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int startLocation = 75679314;
    int endLocation = 8243613;
    vector<int> orbs = {69648425, 9381869, 140403540, 263288570, 8339703, 106508129, 2974752, 10945125, 202811700, 86092592, 787280, 22486728, 136457550, 10638615, 56656314, 63650448, 4719176, 117818624, 60062376, 331054548, 80863520, 61724347, 74842880, 139427142, 113648612, 47349045, 12338040, 202709340, 348935553, 65847722, 37715515, 43555158, 17766736, 144465300, 23871798, 279087060, 140411745, 4032196, 39305462, 3798124, 122338188};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 4989486.1291770935;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int startLocation = 64276564;
    int endLocation = 42323888;
    vector<int> orbs = {1955165, 56931342, 498900060, 50879328, 32338957, 284546272, 11063070, 94505615, 122723858, 28441101, 1854815, 62644580, 27482668, 18677001, 356459055, 181268416, 151759952, 117375178, 94320930, 328249532, 198308871, 213459036, 415044, 32205102, 459939650, 164161305, 22581405, 30017466, 105916725, 184620800, 16800075, 1637100, 8873676, 24585600, 68376000};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7071036.5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int startLocation = 57200;
    int endLocation = 36364458;
    vector<int> orbs = {42635583, 27927456, 55610520, 81978930, 48564160, 636840, 114848671, 109489341, 213468762, 71266447, 77924288, 223392994, 93874133, 23518236, 17024130, 128013936, 20798136, 6431440, 189421344, 9927330, 126651206, 19297237, 116712800, 140882160, 32931976, 118235096, 61320955, 91629627, 1704381, 338217876, 134588864, 7098300, 209669176, 12564300};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2743959.0122070312;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int startLocation = 19271207;
    int endLocation = 119532179;
    vector<int> orbs = {21050490, 7461922, 6803225, 6955984, 464018560, 17243330, 3185725, 573433056, 19819008, 34179959, 45563811, 217253913, 113677758, 12591425, 56626716, 319505609, 157284888, 12792312, 218896178, 23528752, 28555712, 7952896, 221823667, 80428418, 12055120, 3415498, 17856930, 552603};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2345304.880651951;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int startLocation = 52658275;
    int endLocation = 83738670;
    vector<int> orbs = {67776200, 13912236, 290708170, 261540879, 128268444, 34206289, 526149, 212040, 9508104, 394009, 195531400, 42742140, 111770529, 49442970, 175690938, 72678600, 19665600, 15380382, 87155797, 4107808, 1178212, 153317080, 122302593, 33941835, 54974304, 303407974, 90275616, 38652680, 436798525, 253899507, 6759164, 28682438, 8846848, 122948536, 328801590, 11022774};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7730857.664008141;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int startLocation = 21463000;
    int endLocation = 173937600;
    vector<int> orbs = {485397894, 55719975, 291212952, 98696490, 16839900, 366716231, 231831990};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4212405E7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int startLocation = 19996164;
    int endLocation = 2316600;
    vector<int> orbs = {23166075, 13778953, 200404692, 19318068, 235476, 301621998, 132608412, 130587314, 151602858, 38697400, 175808204, 2103360, 76634576, 278852190, 392912030, 8327914, 100157778, 206054016, 16715864, 11327176, 6338100, 160882980, 19301496, 53867688, 250876224, 200833344, 10225432, 280905144, 275779896, 58773332};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1948472.5625;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int startLocation = 6470940;
    int endLocation = 21228584;
    vector<int> orbs = {340454492, 74214045, 28405456, 161074026, 101599525, 30090553, 137035409, 1686456, 158737536, 59367204, 40871735, 30740160, 76095890, 363447040, 243111680, 105883470, 530624835, 384804069, 165916250, 59814624, 45577675, 8348470, 184110667, 311026038, 316198680, 267991416, 301378588, 780255};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7991128.375;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int startLocation = 8564181;
    int endLocation = 83330286;
    vector<int> orbs = {185704272, 183344490, 39117100, 87832500, 34282208, 61263996, 45289047, 25785936, 93786870, 17186013, 9094922, 64545663, 6828523, 24364366, 51156070, 163516730, 77637102, 244032120, 109142600, 69168528, 16756480, 5784450, 232668189, 3917823, 137555670, 400440168, 551146046, 283014252, 346085784, 49389610, 27809958, 56730366, 123109920, 350222410, 1867096, 30315488, 265469015, 346910508, 5107752, 349032884, 4515955, 15338610, 13803048, 56168147, 30288812, 346085608, 33214599, 145650658, 246896544, 355466760};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2204044.640555948;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int startLocation = 568192896;
    int endLocation = 212193150;
    vector<int> orbs = {394438715, 6427975, 331167998};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.351332515E8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int startLocation = 231705188;
    int endLocation = 80204748;
    vector<int> orbs = {107610885, 74321496, 11944982, 33041100, 19352034, 10388994, 4774527, 7901585, 126243925, 34555528, 106821936, 2362272, 357737843, 65081178, 234496755, 47721920, 63174870, 143544485, 2375275, 134370264, 207709326, 101803380, 213224576, 64920768, 581782826, 39484800, 191420625, 7421223, 37914522, 30796024, 7108920, 63317709, 201341816, 4028835, 49941444, 143134462, 32698356, 13050620, 67741336, 432694438, 40146741, 33337728, 39944304, 144648294, 23450175, 158223840, 100869828};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7517869260253906E7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int startLocation = 76663140;
    int endLocation = 110308920;
    vector<int> orbs = {18283572, 37684, 78957424, 201205015, 80447496, 7351300, 7777324, 19272600, 27712160, 296872139, 22678590, 33235000, 97703368, 285949180, 192238512, 16436160, 216315825, 136494075, 2501368, 60856096, 159812352, 93620123, 426802185, 5165800, 121921235, 96623835, 380217879, 89568696, 273850852, 892588, 425230248, 119213752, 51095253, 146601300};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 6244477.53125;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int startLocation = 192493290;
    int endLocation = 104104200;
    vector<int> orbs = {2508055, 161595995, 561349832, 78688680, 8378970, 134223568, 142070337, 15791856, 57666940, 127898427, 7360640, 36191508, 35398090, 179632922, 381858940, 43995014, 7179271, 112459764, 178707760, 132085140, 34205446, 126039484, 29714028, 45746018, 325356946, 2884878, 44896936, 17394102, 49643003, 41791024, 42536160, 46851192, 40766971, 315918450, 56794290, 36927332, 97743300, 64318968, 93483576, 12904990, 119322390, 311575558, 11743584};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0726588765625E7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int startLocation = 760;
    int endLocation = 389;
    vector<int> orbs = {939, 593, 721, 400, 994, 450, 974, 70, 828, 586, 186, 548, 990, 485, 394, 616, 151, 503, 906, 638, 909, 761, 304, 547, 405, 779, 889, 317, 81, 299, 688, 121, 295, 853, 156, 996, 655, 603, 498, 894, 885, 414, 443, 636, 681, 726, 280, 102, 379, 678};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 24.97099858522415;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int startLocation = 706;
    int endLocation = 872;
    vector<int> orbs = {588, 998, 52, 150, 752, 178, 383, 548, 930, 561, 323, 27, 473, 741, 358, 285, 593, 830, 889, 208, 365, 805, 907, 942, 662, 870};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 59.4375;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int startLocation = 343;
    int endLocation = 273;
    vector<int> orbs = {870, 491, 171, 704, 160, 610};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 70.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int startLocation = 293;
    int endLocation = 155;
    vector<int> orbs = {365, 638, 269, 655, 212};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 66.75;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int startLocation = 191;
    int endLocation = 782;
    vector<int> orbs = {892, 316, 389, 96};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 259.75;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int startLocation = 701;
    int endLocation = 421;
    vector<int> orbs = {983, 881, 870, 805, 198, 812, 684, 490, 107, 87, 146, 54, 846, 711, 562, 85, 800, 582, 47, 420, 315, 408, 426, 748, 290, 608, 148, 447, 818, 660, 196, 379, 2, 678, 993, 157, 151, 893, 579, 831, 675, 84, 205, 141, 342};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 27.25537109375;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int startLocation = 289;
    int endLocation = 877;
    vector<int> orbs = {415, 185, 437, 278, 813, 132, 493, 50, 534, 113, 684, 14, 211, 773, 629, 681, 428, 787, 647, 203, 617, 955, 509, 225, 373, 274, 772, 958, 562, 962, 500, 948, 191, 696, 749, 995, 577, 588, 41, 937, 184, 846, 566, 595, 420};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 28.336292687063178;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int startLocation = 129140163;
    int endLocation = 1000000000;
    vector<int> orbs = {129140164, 129140160, 129140172, 129140136, 129140244, 129139920, 129140892, 129137976, 129146724, 129120480, 129199212, 128963016, 129671604, 127545840, 133923132, 114791256, 172186884, 0, 999999999, 999999998, 999999997, 999999996, 999999995, 999999994, 999999993, 999999992, 999999991, 999999990, 999999989, 999999988, 999999987, 999999986, 999999985, 999999984, 999999983, 999999982, 999999981, 999999980, 999999979, 999999978, 999999977, 999999976, 999999975, 999999974, 999999973, 999999972, 999999971, 999999970, 999999969, 999999968};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 7752.742160797119;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int startLocation = 34;
    int endLocation = 0;
    vector<int> orbs = {33, 39};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 13.75;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int startLocation = 5;
    int endLocation = 39;
    vector<int> orbs = {0, 6};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 13.75;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int startLocation = 100;
    int endLocation = 200;
    vector<int> orbs = {99, 102, 96, 108, 84, 132, 36};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 8.375;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int startLocation = 50;
    int endLocation = 1000000000;
    vector<int> orbs = {49, 48, 47, 46, 45, 44, 43, 42, 1, 40, 39, 38, 37, 35, 36, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 41, 0};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.000000888178418;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int startLocation = 0;
    int endLocation = 100;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000000000000426;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int startLocation = 10;
    int endLocation = 200;
    vector<int> orbs = {1, 2, 3, 11};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 17.8125;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int startLocation = 999;
    int endLocation = 10000000;
    vector<int> orbs = {0, 1, 2, 3, 4, 5, 1000, 1001, 1002, 1003};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 9829.935546875;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int startLocation = 10;
    int endLocation = 100;
    vector<int> orbs = {1, 11};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 30.75;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int startLocation = 0;
    int endLocation = 1000000000;
    vector<int> orbs = {100000000, 200000000, 300000000, 400000000, 500000000, 600000000, 700000000, 800000000, 900000000, 100004000, 200004000, 300004000, 400004000, 500004000, 600004000, 700004000, 800004000, 900004000, 100300000, 200300000, 300300000, 400300000, 500300000, 600300000, 700300000, 800300000, 900300000, 100000200, 200000200, 300000200, 400000200, 500000200, 600000200, 700000200, 800000200, 900000200, 100001000, 200001000, 300001000, 400001000, 500001000, 600001000, 700001000, 800001000, 900001000};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0323592258064504E8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int startLocation = 500;
    int endLocation = 1000000000;
    vector<int> orbs = {501, 504, 492, 519, 477, 5992, 8, 50, 1300, 2443, 200000, 1};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 244221.9169921875;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int startLocation = 10000;
    int endLocation = 1000000000;
    vector<int> orbs = {10001, 1};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5000500075E8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int startLocation = 100;
    int endLocation = 500000000;
    vector<int> orbs = {3443, 46757, 79889, 9090, 23299, 102, 96, 108, 84, 132, 36, 234234, 43564356, 43564353, 2342, 2458909, 2349284, 1237656, 73845387, 329485943, 495438543, 394834, 34535, 3567567, 6578768, 678678, 898898, 234243, 54654564, 65465456, 32131321, 2131564, 464654, 327498, 234685, 3246874};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 155.74492426183133;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int startLocation = 1000000000;
    int endLocation = 50;
    vector<int> orbs = {49, 48, 47, 460, 45, 44, 43, 42, 1, 40, 39, 38, 37, 35, 36, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 41, 0};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99999745E8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int startLocation = 0;
    int endLocation = 1000000000;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0000008881783735;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int startLocation = 1000;
    int endLocation = 10000;
    vector<int> orbs = {1001, 990, 1100, 500};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 702.75;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int startLocation = 0;
    int endLocation = 1000000000;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1164153177523986;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int startLocation = 100;
    int endLocation = 100000;
    vector<int> orbs = {1, 2, 3, 4, 101};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 3174.90625;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int startLocation = 500000000;
    int endLocation = 1000000000;
    vector<int> orbs = {500000001, 499999997, 500000009, 499999271, 500006561, 500059049, 500531441, 500478269};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1960208.90234375;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int startLocation = 500000000;
    int endLocation = 1000000000;
    vector<int> orbs = {250000000, 300000000, 200000000, 190000000, 189000000, 188900000, 188890000, 188889000, 188888900, 188888890, 188888889, 750000000};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3915080466455078E8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int startLocation = 250000000;
    int endLocation = 750000000;
    vector<int> orbs = {148193122, 615983917, 789376168, 674673414, 178929786, 480757868, 734355081, 312582500, 84061266, 777025060, 374443668, 622594029, 707287944, 486228446, 460903623, 745815341, 863796931, 560992082, 714570893, 12068110, 732244380, 583389641, 680994804, 261298817, 427015462, 930187866, 586360304, 855879995, 808763876, 81361265, 260319004, 804270544, 952346234, 203692574, 676100602, 195343775, 682548786, 522954717, 149608075, 512234949, 870766380, 7951954, 307469476, 869054875, 199255720, 101762192, 617817291, 794944714, 363372909, 896675393};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7284325044738688E7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int startLocation = 1000000;
    int endLocation = 0;
    vector<int> orbs = {1000001, 1000002, 1000003, 1000004, 1000005, 1000006, 1000007, 1000008, 1000009, 1000010};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 978.5703125;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int startLocation = 10;
    int endLocation = 800;
    vector<int> orbs = {4, 12};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 205.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int startLocation = 500000000;
    int endLocation = 0;
    vector<int> orbs = {500000100, 499999300, 600000100, 100000100};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 9.375070625E7;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int startLocation = 500000;
    int endLocation = 1000000000;
    vector<int> orbs = {0, 500001, 500002};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25125002E8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int startLocation = 105;
    int endLocation = 0;
    vector<int> orbs = {100, 104, 106, 126};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 14.125;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int startLocation = 15;
    int endLocation = 51;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9999999999708962;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int startLocation = 25;
    int endLocation = 999999975;
    vector<int> orbs = {0, 1000000000, 1, 999999999, 2, 999999998, 3, 999999997, 4, 999999996, 5, 999999995, 6, 999999994, 7, 999999993, 8, 999999992, 9, 999999991, 10, 999999990, 11, 999999989, 12, 999999988, 13, 999999987, 14, 999999986, 15, 999999985, 16, 999999984, 17, 999999983, 18, 999999982, 19, 999999981, 20, 999999980, 21, 999999979, 22, 999999978, 23, 999999977, 24, 999999976};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 31.802321583032608;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int startLocation = 500000000;
    int endLocation = 0;
    vector<int> orbs = {999999999, 999999998, 999999997, 999999996, 999999995, 999999994, 999999993, 999999992, 999999991, 999999990, 999999989, 999999988, 999999987, 999999986, 999999985, 999999984, 999999983, 999999982, 999999981, 999999980, 999999979, 999999978, 999999977, 999999976, 999999975, 999999974, 999999973, 999999972, 999999971, 30, 29, 28, 27, 999999906, 25, 24, 23, 22, 21, 20, 99999999, 9999998, 999997, 99996, 995, 94, 999599993, 999992992, 919999991, 909999990};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 4.349495501176441E8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int startLocation = 4;
    int endLocation = 1;
    vector<int> orbs = {2};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int startLocation = 500000000;
    int endLocation = 0;
    vector<int> orbs = {500000002, 500000001, 499999992, 500000027, 499999936, 500000125, 499999784, 500000343, 499999488, 500000729, 499999000, 500001331, 499998272, 500002197, 499997256, 500003375, 499995904, 500004913, 499994168, 500006859, 499992000, 500009261, 499989352, 500012167, 499986176, 500015625, 499982424, 500019683, 499978048, 500024389, 499973000, 500029791, 499967232, 500035937, 499960696, 500042875, 499953344, 500050653, 499945128, 500059319, 499936000, 500068921, 499925912, 500079507, 499914816, 500091125, 499902664, 500103823, 499889408, 500117649};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 30.89261965379289;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int startLocation = 13;
    int endLocation = 1000;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15, 14, 16, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 39, 40, 43, 44, 45, 46, 47, 48, 49, 52, 53, 54, 55};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.003021526903467;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int startLocation = 100;
    int endLocation = 0;
    vector<int> orbs = {80};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int startLocation = 100;
    int endLocation = 1000000000;
    vector<int> orbs = {0, 101, 102};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25000027E8;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int startLocation = 77;
    int endLocation = 77;
    vector<int> orbs = {27, 127};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int startLocation = 1000;
    int endLocation = 3000;
    vector<int> orbs = {0, 1001, 1, 2};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 688.375;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int startLocation = 10000;
    int endLocation = 1000000000;
    vector<int> orbs = {9000, 10001};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.499982515E8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int startLocation = 100;
    int endLocation = 20;
    vector<int> orbs = {50};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 65.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int startLocation = 0;
    int endLocation = 10;
    vector<int> orbs = {};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int startLocation = 50;
    int endLocation = 200;
    vector<int> orbs = {51, 46, 66, 18};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 24.875;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int startLocation = 500000000;
    int endLocation = 0;
    vector<int> orbs = {499999999, 500000002, 499999993, 500000020, 499999939, 500000182, 499999453, 500001640, 499995079, 500014762, 499955713, 500132860, 499601419, 501195742, 496412773, 510761680, 467714959, 596855122};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 5230.605361938477;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int startLocation = 123456;
    int endLocation = 12345644;
    vector<int> orbs = {12, 4, 1234, 1233, 123450, 123400, 12345645, 12345670, 123545, 654444, 354, 1534599, 12345643, 12345642, 12345640, 1230000, 12300054};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 24634.76107788086;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int startLocation = 0;
    int endLocation = 60;
    vector<int> orbs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.000000000000007;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int startLocation = 2;
    int endLocation = 1000;
    vector<int> orbs = {0, 3, 5};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 128.125;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int startLocation = 100;
    int endLocation = 90;
    vector<int> orbs = {99};
    SnakeTurbo* pObj = new SnakeTurbo();
    clock_t start = clock();
    double result = pObj->finishTime(startLocation, endLocation, orbs);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=264869&rd=8070&pm=5893
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <set> 
#include <map> 
#include <queue> 
#include <stack> 
#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
 
using namespace std; 
 
class SnakeTurbo 
{ 
        int n; 
        int s; 
        int e; 
        vector<int> o; 
        double B[100][100]; 
 
        double best (int a, int b, double speed) 
        { 
                if (o[a]==e) return 0; 
                if (o[b]==e) return abs(o[a]-o[b])/speed; 
                if (B[a][b]!=-1) return B[a][b]; 
                double sol=1e100; 
                if (a<=b && a>0) sol=min(sol, (o[a]-o[a-1])/speed+best(a-1, b, speed*2)); 
                if (a<=b && b<n-1) sol=min(sol, (o[b+1]-o[a])/speed+best(b+1, a, speed*2)); 
                if (a>b && b>0) sol=min(sol, (o[a]-o[b-1])/speed+best(b-1, a, speed*2)); 
                if (a>b && a<n-1) sol=min(sol, (o[a+1]-o[a])/speed+best(a+1, b, speed*2)); 
                return B[a][b]=sol; 
        } 
 
  public: 
  double finishTime(int start, int end, vector <int> orbs)  
  { 
    s=start; 
                e=end; 
                o=orbs; 
                o.push_back(s); 
                o.push_back(e); 
                n=o.size(); 
                sort(o.begin(), o.end()); 
                 
                int a=0; 
                while (o[a]!=s) a++; 
 
                for (int i=0; i<n; i++)  
                        for (int j=0; j<n; j++)  
                                B[i][j]=-1; 
                 
                return best(a, a, 1); 
  } 
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/