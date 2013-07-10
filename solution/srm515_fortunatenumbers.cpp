/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11509
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

class FortunateNumbers {
public:
    int getFortunate(vector<int> a, vector<int> b, vector<int> c);
};

int FortunateNumbers::getFortunate(vector<int> a, vector<int> b, vector<int> c) {
    int ret;
    return ret;
}


int test0() {
    vector<int> a = {1, 10, 100};
    vector<int> b = {3, 53};
    vector<int> c = {4, 54};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {47};
    vector<int> b = {500};
    vector<int> c = {33};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {100, 1, 10, 100, 1, 1};
    vector<int> b = {3, 53, 53, 53, 53, 53, 53};
    vector<int> c = {4, 54, 4, 54, 4, 54};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {500, 800};
    vector<int> b = {50, 80};
    vector<int> c = {5, 8};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {30000, 26264};
    vector<int> b = {30000, 29294};
    vector<int> c = {30000, 29594};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {5, 8, 1, 2, 18, 28, 19, 29, 18504, 28436, 19253, 29150, 18489, 28503, 19519, 29340, 18493, 28438, 19348, 29418, 18545, 28269, 19379, 29502, 18466, 28397, 19390, 29230, 18444, 28543, 19538, 29439, 18494, 28515, 19402, 29398, 18448, 28479, 19471, 29261};
    vector<int> b = {50, 80, 1, 2, 18, 28, 19, 29, 18758, 28840, 19599, 29811, 18792, 28649, 19809, 29906, 18602, 28604, 19776, 29735, 18899, 28662, 19692, 29828, 18793, 28846, 19781, 29529, 18770, 28823, 19809, 29874, 18603, 28804, 19595, 29601, 18790, 28937, 19784, 29945};
    vector<int> c = {500, 800, 5500, 5800, 8500, 8800, 3, 4, 19, 29, 20, 30, 18293, 28279, 19703, 29594, 18574, 28703, 19527, 29609, 18490, 28543, 19461, 29432, 18441, 28954, 19814, 29555, 18299, 28315, 19387, 29799, 18644, 28492, 19511, 29545, 18491, 28269, 19591, 29589, 18650, 28472, 19633, 29682};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {3};
    vector<int> b = {1};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {6};
    vector<int> b = {1};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {1};
    vector<int> b = {53};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {1};
    vector<int> c = {56};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {83};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {86};
    vector<int> b = {1};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {553};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {556};
    vector<int> b = {1};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {583};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {586};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {853};
    vector<int> b = {1};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {856};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {1};
    vector<int> b = {883};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {1};
    vector<int> c = {886};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {1};
    vector<int> b = {2};
    vector<int> c = {3};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {29975, 29967, 29955, 29994, 29951, 29988, 29991, 29957, 29969, 29993, 30000, 29983, 29962, 29995, 29960, 29970, 29966, 29976, 29968, 29978, 29963, 29998, 29952, 29982, 29974, 29964, 29954, 29972, 29980, 29981, 29959, 29990, 29956, 29965, 29989, 29953, 29973, 29987, 29977, 29999, 29985, 29961, 29984, 29996, 29979, 29997, 29992, 29958, 29971, 29986};
    vector<int> b = {29994, 29991, 29960, 29990, 29992, 29952, 29987, 29958, 29969, 29962, 29995, 29978, 29973, 29961, 29957, 29972, 29951, 29984, 29968, 29999, 29956, 29964, 29959, 29982, 29983, 29966, 29986, 29996, 29993, 29953, 30000, 29985, 29998, 29977, 29967, 29979, 29963, 29971, 29955, 29981, 29965, 29974, 29980, 29997, 29989, 29954, 29988, 29976, 29970, 29975};
    vector<int> c = {29994, 29957, 29963, 29976, 29999, 29988, 29965, 29961, 29972, 29968, 29982, 29970, 29991, 29992, 29998, 29990, 29960, 29981, 29978, 29997, 29996, 29989, 29959, 29986, 29971, 29983, 29967, 29966, 29969, 29958, 29984, 29979, 29973, 29955, 29985, 29954, 29980, 29987, 29953, 29974, 29995, 29952, 29962, 29951, 30000, 29975, 29964, 29977, 29993, 29956};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {1, 3037, 5, 180, 28706, 18658, 9, 9, 225, 12, 7, 1986, 1440, 2288, 3490, 1575, 219, 12700, 1, 195, 15, 13708, 396, 4811, 3, 45, 262, 13, 1, 42, 1232, 8376, 1239, 1, 5484, 58, 2, 348, 40, 6, 2, 110, 10429, 1, 2, 588};
    vector<int> b = {639, 20554, 384, 1178, 10, 3, 3, 49, 17439, 2};
    vector<int> c = {6957, 24486, 7491, 38, 506, 9, 16482, 309, 18684, 126, 11, 357, 10303, 172, 2441, 7, 288, 2, 6, 220, 116};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {128, 950, 975, 1, 256, 1, 2, 618, 127, 8073, 5, 809, 139, 10206, 1141, 798, 1299, 30, 12089, 2273, 2, 18, 28904};
    vector<int> b = {26, 327, 859, 38, 64, 116, 2, 15, 326, 1, 19959, 2778, 5473, 28357, 8, 4998, 12328, 46, 50, 67, 91, 74, 1515, 10, 1, 29047, 7, 171, 22495};
    vector<int> c = {87, 539, 1, 233, 2, 14165, 44, 14, 5809, 86, 535, 871, 40, 74, 48, 7023, 3, 186, 21877, 9795, 60, 7, 5, 104, 136, 2, 2322, 1, 4247, 462, 15, 43, 24, 1138, 1, 69, 53};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {6213, 3, 960, 3, 52, 3, 3481};
    vector<int> b = {24110, 1003, 43, 1, 146, 1684, 356, 127, 20, 4680, 1, 6, 6638, 8885, 1, 7, 6853, 45, 3, 30, 3239, 1753, 1, 13007, 38, 5616, 23041, 4, 28, 15, 760, 43, 1100, 26, 1, 524, 212, 2891, 726, 32, 14, 4, 89, 36, 5209, 15333, 352, 10101};
    vector<int> c = {3206, 133, 6, 22, 4, 2555, 1, 39, 1962, 27, 91, 56, 13468, 23};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {3, 396, 31, 1213, 18, 1, 86, 63, 23, 83, 1937, 955, 3393, 1355, 12544, 4, 5063, 34, 31, 685, 8, 7, 12, 643, 304, 10, 22097, 12, 1, 7689, 2, 1956, 7, 44, 5874, 328, 6894, 12782, 1};
    vector<int> b = {15, 26430};
    vector<int> c = {82, 2757, 29, 1, 4341, 21, 45, 17, 192, 24, 7042, 16929, 1206, 22876, 3, 15090, 7471, 67, 1, 1, 623, 3724, 3299, 15, 3694, 21336, 6, 13, 264, 395, 999, 76, 8, 16, 336, 73, 8, 5533, 18239, 9, 5651, 309, 240, 250, 617, 32, 2};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {75, 821, 39, 1, 5986, 92, 62, 1636, 3707, 214, 3135};
    vector<int> b = {1138, 22, 19469, 63, 6945, 1537, 85, 11, 2277, 71, 29775, 6, 1, 1, 29713, 2, 352, 32, 1, 1, 249, 734, 391, 1384, 8650, 6004, 5281, 78, 7, 9, 15756, 24466, 20, 75, 7, 29081, 34};
    vector<int> c = {26, 5, 2615, 10, 112, 20364, 461, 954, 23818, 26, 2667, 185, 1, 23447, 2388, 1, 2779, 3, 33, 11357, 2, 15700, 267, 6632, 893, 3, 622, 214, 13, 11397, 7832, 37, 20, 22313, 5963, 273, 2};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {3, 3320, 4, 1, 2, 1279, 7, 153};
    vector<int> b = {29274, 22, 319, 248, 14, 4, 9831, 90};
    vector<int> c = {15591, 1, 1921, 11, 4422, 1187, 47};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {11, 19, 171, 5303, 126, 1215, 649, 27};
    vector<int> b = {5, 1380, 1584, 15, 10, 633, 7, 4, 4214, 7512, 949, 6140, 1474, 88, 3992, 603, 1806, 45, 198, 681, 638, 6230, 18807, 449, 1570, 1375, 10, 804, 865};
    vector<int> c = {11398};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {55, 67, 1889, 922, 3886, 2935, 6260, 573, 8, 17555, 10, 65, 12317, 31, 362, 1, 23591, 70, 25501, 574, 2, 2556, 4, 5, 1770, 19020, 129, 199, 139, 722, 16, 7};
    vector<int> b = {9971, 127, 3, 2306, 83, 1, 221, 10, 20805, 38, 1, 1032, 76, 17, 5, 32};
    vector<int> c = {2, 107, 29537, 18063, 5137, 845, 12, 5, 17, 8, 12990, 19149, 303, 39, 1, 42, 1, 1265, 813, 27, 39, 11174, 56, 144, 2, 6342, 274, 5, 227, 405, 85, 13110, 1639, 522, 308, 478};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {12227, 19338, 2, 3, 416, 2, 734, 60, 977, 52, 7784, 15, 603, 222, 1211, 173, 14};
    vector<int> b = {4070, 18, 96, 169, 9, 6864, 90, 41, 16, 977, 18, 8, 4, 2, 9764, 1903, 2, 36, 23, 204, 1054, 8, 15, 68, 2447, 8, 27, 27, 84, 1217, 3, 1900, 23, 821, 1, 29, 14922, 96, 102, 9, 1589, 495};
    vector<int> c = {3473, 6, 2379, 12373, 214, 6, 3, 95, 2, 40, 1486, 4552, 2072, 6237, 1788, 9, 99, 1344, 1097, 1, 108, 224, 6, 14, 2, 440, 894, 1556, 399, 3, 30};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {10663, 1747, 8, 7, 6718, 19, 13, 11462, 26, 268, 3, 1, 2, 139, 71, 673, 293, 1088, 19818, 26, 175, 4913, 1, 1, 5892, 11799, 98, 195, 2, 395, 1, 579, 287, 14360, 3697, 6, 1405, 20, 22, 1527, 1, 1, 136, 3518, 279, 5233, 26940, 117, 2};
    vector<int> b = {2804, 2, 13, 91, 230, 11477, 227, 1152, 62, 10, 423, 25634, 151, 1040, 6, 29878, 27, 10400, 50, 3727, 12332, 71, 271, 432, 77, 21094, 1676, 3800, 14950, 277, 114, 4, 2, 9, 1195, 94};
    vector<int> c = {4, 1144, 118, 59, 2, 19, 502, 2, 28914, 30, 896, 25645, 43, 19441, 2, 28, 285, 12849, 5247, 2636, 17, 10533, 10, 2299, 10527, 46, 12, 3, 3, 7, 8, 2, 43, 195, 731, 10, 2, 8723, 41};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {3, 12827, 758, 22, 97, 8214, 4011, 5343, 467, 108, 5, 4610, 11, 2572, 1, 5951, 1232, 4218, 167, 5745, 3282, 5227, 4675, 845, 3824, 4253, 39};
    vector<int> b = {3385, 740, 2235, 420, 2277, 28257, 9, 12293, 6946, 118, 286, 25816, 6615, 1971};
    vector<int> c = {3495, 4460, 2, 1433, 2106, 368, 7208, 578, 6164, 275, 2648, 271, 386, 1099, 553, 8788, 7123, 653, 20242, 4998, 4425, 6229, 3575, 4644, 595, 3627, 31, 4861, 3185, 13959, 684, 4586, 6606, 3320, 2161, 6744, 26507, 17, 5473};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {247, 6453, 34, 5242, 9, 1, 21, 17029, 28, 214, 4917, 24940, 1142, 929, 445, 39, 1635, 1, 2093, 5000, 29595, 1, 28282, 8128, 269, 114, 4, 1529, 29, 5574, 53};
    vector<int> b = {1074, 11, 2722, 213, 51, 63, 4022, 2111, 300, 322, 3472, 26944, 994, 7869, 751, 3002, 5564, 268, 178, 28450, 5447, 523, 29509, 3327};
    vector<int> c = {531, 685, 40, 148, 27129, 22818, 5641, 747, 95, 4627, 5810, 13965, 269, 28821, 6493, 94, 7322, 580, 28832, 6413, 3830, 2839, 9731, 708, 7, 2604, 5700, 133, 11036, 8408, 1, 307, 316, 2845, 3748, 87, 3446, 8340, 7587, 4968, 252, 5538, 6620, 741, 376, 4};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {813, 5892, 2542, 2033, 10756, 13, 28338, 3350, 9505, 4476, 24977, 6, 3272, 29222, 7006, 413, 533, 12, 1633, 266, 25542, 41, 839, 341, 5533, 13, 26105, 2017, 5820, 60, 3, 22, 2438, 24494, 4, 28624, 18, 23134, 117, 823, 7439, 4985, 3270, 400, 24165, 1564, 19511, 505, 638, 411};
    vector<int> b = {3001, 1028, 6563, 588, 3940, 62, 11, 4134, 1368, 6563, 24964, 7890, 120, 2982, 3603, 792, 26163, 274, 89, 24, 4610, 4702, 2513, 1193, 7708, 284, 576, 5034, 5302, 1281, 294, 3833, 284};
    vector<int> c = {522, 3406};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {8167, 5565, 408, 788, 5287, 13555, 29954};
    vector<int> b = {280, 2337, 19, 642, 5234, 1, 3008, 669, 16891, 73, 26, 66, 11304, 2836, 6981, 3005, 2702, 2270, 574, 42, 650, 8269, 547, 748, 3752, 4301, 1985, 3045, 34, 3005, 3, 311, 23799, 25228, 5764, 481, 15, 3459, 7705};
    vector<int> c = {377, 3143, 4835, 8801, 1082, 1047, 2966, 1348, 2747, 3495, 3673, 2137, 95, 15942, 588, 23, 173, 772, 1261, 25145, 876, 2337};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {507, 8457, 148, 4678, 26, 4600, 2148, 3447, 778, 2629, 204, 85, 8376, 5, 7596, 2796, 3330, 29619, 3295, 5359, 75, 300, 185, 2918, 896, 63, 4542};
    vector<int> b = {6304, 28212, 2280, 950, 7, 486, 179, 6199, 6396, 3729, 28616, 528, 3692};
    vector<int> c = {88, 339, 79, 106, 7565, 13, 2276, 2012, 3312, 259, 5800, 968, 3001, 26, 3332, 75, 12834, 2384, 1171, 5045, 2079, 15, 2708, 389, 152, 11, 2018, 2, 27647, 42, 25577, 1586, 338, 29, 28276, 3634, 2159, 6220};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {2098, 3642, 28521, 201, 6293, 900, 2554, 21171, 24202, 799, 262, 5469, 487, 521, 1, 26159, 14799, 363, 1283, 1432, 3482, 2, 27995, 27350, 3414, 7240, 393, 749, 15951, 28781, 769};
    vector<int> b = {2000, 13596, 3101, 4147, 141, 29355, 5149, 25097, 1507};
    vector<int> c = {2187, 3918, 13, 356, 538, 29846, 266, 2967, 2020, 4022, 975, 2390, 168, 720, 10, 6344, 16516, 1058, 28208, 60, 14609, 2771, 2379, 3098, 3186};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {9913, 427, 1362, 6, 2843, 5, 2288, 6790, 1775, 937, 5671, 6764, 3396, 15, 2102, 298, 652, 1555, 9, 25, 98, 423, 42, 3, 1659, 1538, 1762, 1, 2432, 884, 4722, 687};
    vector<int> b = {2748, 21826, 2519, 3688, 29394, 7, 5102, 450, 5080, 467, 6125, 2520, 3383};
    vector<int> c = {1825, 2, 6729, 328, 768, 4495, 14641, 270, 301, 2591, 6226, 3377, 2107, 407, 5908, 1723, 3, 3859, 4978, 64, 1614, 4, 2701};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {620, 732, 2141, 5917, 111, 2066, 6031, 6, 23, 4948, 11813, 286, 11008, 34, 423, 350, 1414, 5387, 5265, 3332, 670, 74, 4391, 2015, 112, 25, 4472, 1, 5811, 4851};
    vector<int> b = {20803, 5077, 2472, 5006, 4915, 742, 7359, 23827, 1968, 359, 3016, 3772, 429, 148, 8, 8, 99, 36, 320, 154, 35, 605, 109, 8050, 1362, 3401, 113, 206, 351, 4654, 174, 1, 161, 703, 335, 8820, 495, 3986, 2543};
    vector<int> c = {1828, 3247, 791, 10, 2345, 3, 1, 3300, 3091, 4001, 5024, 3481, 6344, 1228, 3708};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {2848, 11356, 4, 14139, 23, 4730, 452, 5861, 197, 1, 6075, 9364, 7, 3144, 2219, 136, 6536, 22, 1960, 4088, 581, 620, 1701, 2587, 467, 1, 4232, 2963, 5, 1502, 186, 24, 204, 3920, 2351, 14891, 9007, 515, 1487, 268, 1259, 6413};
    vector<int> b = {2, 4627, 5162, 309, 1502, 24484, 4731, 1888, 7162, 8729, 4443, 11459, 1013, 1, 238, 3076, 3, 2881, 6169, 303, 1491, 2439, 7140, 22727, 5029, 31, 409, 3990, 8263};
    vector<int> c = {5284, 3801, 2093, 287};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {12, 26, 358, 5847, 842, 895, 7, 7, 127, 2, 749, 2336, 67, 1117, 19817, 31, 24175, 1087, 17, 22643, 1478, 6006, 8832, 1545, 189, 675, 2143, 2, 20085, 27865, 360, 29630, 11, 47, 5370, 2237, 3369, 2390, 7881, 773, 1, 553, 1, 21505, 11, 1387, 1807};
    vector<int> b = {6443, 2489, 144, 544, 3276, 21323, 3267, 27768, 842, 1572, 7898};
    vector<int> c = {4281, 2062, 798, 538, 8032, 2310, 84, 11000, 12829, 7469, 3001, 611, 5230, 373, 2, 7068, 592, 1843, 3925, 19359, 60, 3036, 833, 1453, 7734, 3065, 27449, 11, 28823, 617, 3398, 2040, 9367, 2752, 2455, 5065, 1634, 3330, 3336, 5262, 23, 51, 25741, 5209, 4038, 4792, 2657, 5026, 7671, 14};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {13565, 14, 275, 1903, 7064, 4350, 172, 503, 3001, 8482, 611, 1778, 5, 1, 325, 207, 3165, 4338, 4, 87};
    vector<int> b = {6429, 1071, 65, 544, 2732, 4819, 1500, 14, 20436, 5563, 2695, 2704, 124, 1048, 707, 27359, 4693, 56, 16, 5069, 1291, 937, 7777, 73, 103, 29685, 28319, 3133, 6, 209, 4462, 7488, 583, 2840, 1, 47, 6020};
    vector<int> c = {488, 1510, 3791, 3511, 24568, 1504, 4877, 40, 252, 27585, 1432, 1455, 3568, 5, 481, 5578, 19955, 3340, 5502, 5580, 1869, 874, 852, 315, 5543, 27404, 332, 5344, 1229, 364, 3785, 9529, 5198, 99, 3259, 5562};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {184, 1926, 4494, 1744, 1306, 5121, 10, 334, 1120, 4909, 2814, 1801, 3, 8868, 614, 8729, 1, 5360, 2102, 2536, 2995};
    vector<int> b = {2898, 32, 5562, 1403, 4, 144, 563, 2251, 85, 36, 3771, 613, 2948, 5520, 2498, 27116, 309, 4, 2699, 2035, 2, 432, 1124, 2617, 102, 76, 2, 5255, 1002, 112, 544, 10972, 5847, 29852, 5368, 200, 6158, 95, 3722, 5308, 87, 3004, 3552, 334};
    vector<int> c = {2921, 1353, 2043, 3554, 4108, 5968, 1296, 718, 421, 465, 28432, 2229, 2316, 2360, 3040, 3066, 5554, 5334, 24279, 2991, 3493, 6077, 3048, 23818, 3280, 3949};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {1, 9, 5843, 5690, 4531, 5784, 5746, 220, 2, 850, 3330, 5180, 22, 5536, 1947, 2797, 1328};
    vector<int> b = {34, 58, 297, 29454, 4596, 5565, 250, 3378, 1077, 3488, 3240, 28022, 2911, 8024, 11, 3210, 6060, 284, 2738, 298, 3919, 4, 26141, 668, 11, 31, 2, 3887, 302, 3, 80, 2862, 2653, 863, 3740, 805, 5065, 2297};
    vector<int> c = {6119, 2934, 1, 35, 102, 283, 5602, 2584, 2754, 261, 944, 1969, 7782, 4228, 996, 495, 984, 2181, 319, 2501, 19569, 3397, 4924, 58, 4781, 2096, 2465, 5068, 421, 15346, 28144, 28, 2570, 104, 1894, 766, 231, 2757, 2318, 343, 76, 1473, 2200, 1880};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {5401, 4445, 256, 1219, 189, 115, 4606};
    vector<int> b = {9, 3590, 7628, 355, 622, 4, 7104, 5763, 23, 7362, 13480, 7686, 5519, 928, 328, 3359, 1436, 10, 3385, 2683, 627, 482, 9, 5234, 1275, 277, 780, 12, 8017, 7028, 1070, 1, 1, 1, 8144, 11};
    vector<int> c = {8359, 155, 5023, 966, 59, 1666, 3895, 6, 1278, 4968, 3652, 2707, 16634, 707, 66, 666, 4007, 5196, 8001, 11, 2707, 9, 2001, 269, 3034, 39, 3435, 738, 261, 1782, 1087, 109, 2311, 7694, 8001, 4748, 195, 2404, 1640, 241, 7730, 1, 621};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {6, 1521, 5095, 4981, 6, 2382, 843, 1661, 503, 3554, 518, 1, 2285, 610, 4891, 4023, 25493, 28588, 27466, 29888, 108, 547, 4261, 33, 28408};
    vector<int> b = {1985, 22, 23874, 5, 26686, 2965, 2243, 4604, 84, 2047, 557, 4073, 3502, 2047, 19, 1193, 49, 1170, 3059, 1084, 2725, 938, 2968, 7781, 28661, 27185, 1117, 1, 2981, 20, 4300};
    vector<int> c = {748, 29284, 5339, 44, 7675, 969, 2428, 3210, 221, 6022, 4256, 818, 2977, 1967, 3606, 5883, 1801, 26675, 404, 2003, 812, 4};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {29477, 29180, 4263, 8261, 3273, 5502, 3, 1434, 2229, 1634, 19, 27, 2729, 442, 26, 479, 6026, 22204, 75, 1623, 776, 17208, 5166, 2474};
    vector<int> b = {5970, 3076, 7265, 3352, 3216, 5147, 771, 29826, 2099, 5057, 1669, 27703, 9, 3083, 5060, 1660, 8091, 3935, 2973, 166, 2737, 25986, 1387, 104, 887, 4233, 3, 228, 29169, 1465, 3};
    vector<int> c = {5756, 17, 392, 25623, 1, 28052, 241, 2152, 441, 895, 28883, 5381, 26362, 6111, 3708, 1, 2874, 6494, 4687, 475};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {51, 33, 13852, 40, 5078, 3, 28970, 6790, 4208, 694, 2441, 1003, 8570, 9821, 51, 23, 870, 15268, 18, 40, 57, 6490, 6, 1724, 704, 7450, 321, 2, 25, 2502, 7917, 57, 3235, 3, 3, 1532, 8089, 849, 5, 4086, 8244, 63, 1, 1349};
    vector<int> b = {20415, 799, 2, 802, 2173, 4849, 1757, 2726, 3177, 8378, 828, 5445, 3572, 5720};
    vector<int> c = {5856, 27, 459, 279, 413, 91, 2066, 1598, 1364, 3277, 8854, 6, 27723, 38, 1693, 5774, 489, 4683, 5803, 1263, 134, 2135};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {383, 3246, 7247, 5, 7183, 2938, 7072, 6445, 3138, 391, 2943};
    vector<int> b = {1766, 1389, 1895, 5583, 26812, 149, 512, 4734, 927, 1948, 132, 1627, 605, 6732, 935, 5182, 2074, 1483, 37, 29544};
    vector<int> c = {362, 851, 5719, 3329, 4698, 8374, 25301, 1157, 285, 4066, 1792, 889, 1462, 1446, 8879, 22619, 5462, 515, 4028, 2469, 306, 5097, 4379, 3876, 8096, 209, 839, 2022, 22837, 366, 7, 2205, 3121, 1162, 6210, 26373, 34, 316, 24604, 28920, 22876, 2148};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {1457, 873, 480, 3219, 202, 11, 811, 28696, 2612, 44, 14322, 2959, 4131, 24099, 2436, 792, 3225, 7925, 1232, 1423, 1466, 3159, 4897, 1713, 5, 2, 967, 28023, 5990, 7402, 94, 2, 4134, 161, 444, 3205, 26, 2661, 189, 25265, 3386, 20692, 1160};
    vector<int> b = {120, 570, 4619, 3259, 3877, 63, 1067, 559, 1482, 4702, 4393, 1594, 34, 25271, 3289, 1496, 2833, 25592, 305, 5780, 24456, 430, 4373, 19, 7679, 1265, 24790, 1053, 3940, 20105, 362};
    vector<int> c = {1267, 2261, 9966, 935, 8132, 177, 4574, 2779};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {6894, 4, 4, 9843, 415, 3659, 5534, 1925, 5933, 883, 2488, 86, 3773, 4057, 457, 1, 5312, 1093, 707, 187, 5396, 1972, 12581, 1978, 14, 520, 5521, 4344, 322, 3256, 16, 518, 22301, 7904, 6769, 4417, 21365, 2473, 907, 1965, 7265, 476, 2121, 1828, 1, 210};
    vector<int> b = {204, 432, 9334, 9, 284, 4621, 998, 3666, 2628, 5311, 2758, 3536};
    vector<int> c = {1384, 7910, 34, 2434, 5051, 6296, 3434, 848, 202, 21755, 1570, 4549, 92, 3000, 320, 76, 297, 2351, 3833, 7795, 774, 8, 1030, 780, 7823, 3231, 2};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {30000, 26264};
    vector<int> b = {30000, 29294};
    vector<int> c = {30000, 29594};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1, 10, 100};
    vector<int> b = {3, 53};
    vector<int> c = {4, 54};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {80};
    vector<int> b = {2};
    vector<int> c = {3};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {5, 8, 8};
    vector<int> b = {8, 5, 5};
    vector<int> c = {5, 8, 5, 5, 5};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {5};
    vector<int> b = {3};
    vector<int> c = {580};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {5};
    vector<int> b = {2};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {1, 87};
    vector<int> b = {87};
    vector<int> c = {87};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {400};
    vector<int> b = {100};
    vector<int> c = {8};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {100, 1, 10, 100, 1, 1};
    vector<int> b = {3, 53, 53, 53, 53, 53, 53};
    vector<int> c = {4, 54, 4, 54, 4, 54};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {5};
    vector<int> b = {5};
    vector<int> c = {5};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {500, 800};
    vector<int> b = {50, 80};
    vector<int> c = {5, 8};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {30};
    vector<int> b = {4};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {5};
    vector<int> b = {80};
    vector<int> c = {600};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {800, 799, 798};
    vector<int> b = {80, 81, 82, 79};
    vector<int> c = {4, 5, 6, 7, 8};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {1};
    vector<int> b = {1};
    vector<int> c = {3};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {6};
    vector<int> b = {6};
    vector<int> c = {6};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 5};
    vector<int> c = {1, 2, 3, 4, 5};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {1};
    vector<int> b = {1};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {500};
    vector<int> b = {4};
    vector<int> c = {4};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {10};
    vector<int> b = {7};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {3};
    vector<int> b = {7};
    vector<int> c = {25};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {25};
    vector<int> b = {23};
    vector<int> c = {1, 7};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {1};
    vector<int> b = {1};
    vector<int> c = {4583};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {5};
    vector<int> b = {10};
    vector<int> c = {3};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {1};
    vector<int> b = {3, 1};
    vector<int> c = {1, 4, 3};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {526};
    vector<int> b = {32};
    vector<int> c = {30};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {800};
    vector<int> b = {50};
    vector<int> c = {8, 2, 8};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
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
    vector<int> a = {500};
    vector<int> b = {50};
    vector<int> c = {5, 8};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {3};
    vector<int> b = {4};
    vector<int> c = {1};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {100};
    vector<int> b = {200};
    vector<int> c = {8};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {1};
    vector<int> b = {1};
    vector<int> c = {4};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {1, 5, 1};
    vector<int> b = {2, 1, 2};
    vector<int> c = {2, 2, 2};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> c = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    FortunateNumbers* pObj = new FortunateNumbers();
    clock_t start = clock();
    int result = pObj->getFortunate(a, b, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23010605&rd=14540&pm=11509
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
 
class FortunateNumbers { 
public: 
    int check(int a){ 
                int r; 
                while(a!=0){ 
                    r = a%10; 
                    if( r != 5 && r != 8 ) return 0; 
                    a=a/10; 
                } 
            return 1; 
    } 
    int getFortunate(vector <int> a, vector <int> b, vector <int> c){ 
            int i,j,k,tmp; 
            set <int> st; 
            for(i=0;i<a.size();i++){ 
                for(j=0;j<b.size();j++){ 
                    for(k=0;k<c.size();k++){ 
                        tmp = a[i]+b[j]+c[k] ; 
                        if( check(tmp) ){ 
                            st.insert(tmp); 
                        } 
                    } 
                } 
            } 
            return st.size(); 
        } 
};

********************************************************************************
*******************************************************************************/