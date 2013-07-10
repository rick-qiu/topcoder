/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8736
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

class PubTrivia {
public:
    long maximumScore(int N, int tokensNeeded, vector<int> p, vector<int> b);
};

long PubTrivia::maximumScore(int N, int tokensNeeded, vector<int> p, vector<int> b) {
    long ret;
    return ret;
}


int test0() {
    int N = 5;
    int tokensNeeded = 5;
    vector<int> p = {1, 2, 3, 4, 5};
    vector<int> b = {0, 0, 0, 2, 5};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 5;
    int tokensNeeded = 3;
    vector<int> p = {1, 2, 3, 4, 5};
    vector<int> b = {0, 0, 0, 2, 5};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 5;
    int tokensNeeded = 3;
    vector<int> p = {1, 2, 3};
    vector<int> b = {7, 0};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 500000;
    int tokensNeeded = 12;
    vector<int> p = {1, 34, 643, 293};
    vector<int> b = {2938, 398, 103};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 477926801;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 4;
    int tokensNeeded = 4;
    vector<int> p = {998, 1};
    vector<int> b = {9998, 1};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1056;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 6;
    int tokensNeeded = 8;
    vector<int> p = {1, 3, 6, 7, 2};
    vector<int> b = {5};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 34;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 10;
    int tokensNeeded = 1;
    vector<int> p = {13};
    vector<int> b = {13};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 260;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 101;
    int tokensNeeded = 2;
    vector<int> p = {13};
    vector<int> b = {13};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1963;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 3257;
    int tokensNeeded = 348;
    vector<int> p = {382, 238, 29, 192, 839, 999, 238, 328, 129, 129, 385, 234, 89};
    vector<int> b = {21, 1291, 3289, 3257, 9029, 9999, 129, 1, 2489, 1902};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1635567;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 100000;
    int tokensNeeded = 27;
    vector<int> p = {328, 389, 203, 908, 999, 382, 109, 90, 2, 35, 395, 98};
    vector<int> b = {9283, 9023, 1209, 2901, 3982, 2398, 9238, 923, 12, 1389};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 72717936;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 500000;
    int tokensNeeded = 1;
    vector<int> p = {1000};
    vector<int> b = {10000};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 13010974;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 430887;
    int tokensNeeded = 289384;
    vector<int> p = {992, 1, 521, 220, 380, 729, 969, 184, 887, 104, 641, 909, 378, 724, 582, 387, 583, 241, 294, 159, 198, 653, 369, 418, 692, 36, 901, 516};
    vector<int> b = {2472, 9493, 6170};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 210367694;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 461394;
    int tokensNeeded = 398168;
    vector<int> p = {464, 219, 183, 648, 796, 287, 979};
    vector<int> b = {1758, 6985, 3337, 524, 3468, 5048, 4818, 6568, 8800, 6957, 3083, 4871, 8716, 3733, 1140, 2504, 3356, 3612, 3076, 604, 279, 8484, 1258, 2479, 1974, 5461, 5610, 455, 8945, 8560, 4389, 1781, 6623, 7727, 3385, 1169, 2774, 8203};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 225184733;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 393585;
    int tokensNeeded = 195789;
    vector<int> p = {65, 113, 260, 985};
    vector<int> b = {8536, 8988, 3354, 1611, 671, 3634, 1174, 1929, 7192, 4227, 7390};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 187285727;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 97468;
    int tokensNeeded = 460379;
    vector<int> p = {763, 216};
    vector<int> b = {141, 7877, 4737, 1311, 1729, 4018, 126, 4382, 255, 2025, 1904, 6287, 7658, 1646, 4823, 6645, 5001, 7513};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 23441318;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 120710;
    int tokensNeeded = 390676;
    vector<int> p = {494, 577, 572, 5, 659, 259, 120, 421, 165, 194, 637, 577, 39, 900, 472, 4, 724, 577, 157, 304, 486, 261, 249, 312, 592, 411, 874, 397};
    vector<int> b = {7549, 9273, 5245, 6612, 4343, 5116, 8476, 4096, 4559, 2780, 6157, 3196, 9384, 6094, 7649, 6219, 7761, 7199, 4259, 3808, 5926, 4325};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 58971508;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 316438;
    int tokensNeeded = 452552;
    vector<int> p = {597, 646, 712, 470, 42, 730, 231, 459, 932, 569, 829, 138, 565, 766, 466, 673, 559, 678, 417, 618, 930, 751, 840, 184, 809, 639, 287, 550, 923};
    vector<int> b = {9476, 8957, 2727, 8050, 3546, 6246, 465, 5684, 114, 8126, 5512, 8327, 3059, 3815, 1714, 2552, 4899, 1258};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 154691180;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 388465;
    int tokensNeeded = 308543;
    vector<int> p = {575, 336, 860, 760, 835, 498, 737, 384, 110, 78, 925, 320, 755, 176, 690, 784, 848, 981, 653, 140, 840, 659, 262, 954, 812, 850, 431, 523, 495, 16, 233, 70, 352, 92, 520, 877, 280, 256, 260, 390, 24, 185, 400, 780, 51, 89, 253, 900};
    vector<int> b = {8249, 6436, 1354, 662, 4661, 2886, 6947, 6517, 394, 3411, 4692, 4347, 7850, 2759, 4665, 3661, 8255, 3371, 8052, 7876, 8972, 5382, 2497, 940, 3531, 2687, 7327, 7122, 6849, 9676, 2918, 5098, 6112, 5351, 6839, 1851, 8237, 3785, 9448, 9711, 8275, 5218, 5136, 7203, 7977};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 189780406;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 455940;
    int tokensNeeded = 229905;
    vector<int> p = {662, 507, 458, 601, 162, 735, 725, 217, 481, 591, 51, 791};
    vector<int> b = {2182, 4473, 512, 7534, 1311, 2364, 6849, 6175, 1811, 6559, 5529, 7029, 1695, 2731, 6084, 2575, 4674, 2314, 7905, 5746, 8578, 2206, 2200, 6260, 8526, 3264, 8786, 2172, 3608, 7082, 5495, 5790, 2633, 6007, 3323, 5023, 9450, 172, 1198, 2339, 7810, 6727, 446, 583, 536, 6530, 3158};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 222886743;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 328203;
    int tokensNeeded = 18945;
    vector<int> p = {898, 830, 795};
    vector<int> b = {5839, 3952, 8579, 4624, 6125, 2186, 2785, 2698, 7976, 5418, 9784, 2378, 441, 9234, 3629, 2718, 1572, 2517, 523, 2019, 3101, 1059, 9628, 6259, 7349, 9551, 8401, 9384, 8051, 3827, 4697, 4968, 7780, 3275, 9592, 4983, 6540, 3455, 7681, 5595, 8874, 7464, 7973};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 98383523;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 43922;
    int tokensNeeded = 253415;
    vector<int> p = {209, 464, 467, 916, 814, 40, 625, 105, 820, 496, 54};
    vector<int> b = {2503, 1831, 8943, 7201, 6799, 7801, 1554, 7470, 3862, 8095, 924, 1542, 3689, 876, 84, 2740, 1269, 7861, 5420, 5459, 9367, 1695, 9093, 2891, 9994, 4865, 6043, 6708, 9064, 9825, 1822, 1567, 1655, 1843, 9847, 9534, 9644, 1400, 8082, 3505};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 21450759;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 453827;
    int tokensNeeded = 570;
    vector<int> p = {868, 536, 610, 118, 642, 9, 946, 958, 873, 931, 878, 549, 646, 733, 20, 180, 775, 547, 11, 771, 287, 103, 594, 135, 411, 406, 492, 989, 375, 201, 817, 933, 427};
    vector<int> b = {1834, 1213, 1590, 6413, 1060, 7185, 2687, 10000, 5670, 33, 4883, 1277, 3008, 8830, 5629, 8885, 5422, 3794, 6604, 1860, 1492, 5045, 9699, 8351, 8071, 9190, 5294, 7223, 4022, 3197, 3663, 5856, 5489, 6333, 3347, 6549, 4596, 7114, 7628, 266, 7147};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 227679327;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 436874;
    int tokensNeeded = 490784;
    vector<int> p = {746, 663, 426, 688, 825, 744, 914, 811, 853};
    vector<int> b = {4046, 916, 9667, 9340, 8139, 3688, 3615, 2880, 622, 9105, 9213, 5048, 6732, 3809, 2161, 5438, 5154, 9309, 9027, 7776, 542, 2523, 6026, 660, 1441, 9150, 8461, 2219, 4845, 2384};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 213272089;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 296158;
    int tokensNeeded = 391522;
    vector<int> p = {139, 672, 692, 81, 507, 968, 84, 589, 398, 835, 944, 744, 331, 234, 931, 906, 99, 906, 691, 89, 234, 592, 768, 386, 927};
    vector<int> b = {6762, 1708, 6419, 5652, 6088, 9860, 4960, 9684, 9146, 8963, 6160, 9054, 2068};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 144762807;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 163951;
    int tokensNeeded = 20128;
    vector<int> p = {813, 796, 688, 744, 701, 787, 339, 81, 566, 573, 363, 333, 650, 980, 382, 379, 783, 327, 432, 724, 722, 155, 47, 577, 386, 27, 827, 206, 406, 601, 659, 219, 86, 346, 963, 787, 823};
    vector<int> b = {5723, 4133, 2758, 6501, 420, 3419, 8761, 9353, 1920, 2728, 4704, 6074, 3863, 9915, 6267, 4681, 5349, 6500, 1658, 916, 8802, 1564, 1572, 3010, 6053, 5513, 7637, 3012, 1321, 8065, 7026, 7044, 3276, 9784, 4623, 3696, 4281, 3383, 3049};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 80371691;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 414640;
    int tokensNeeded = 82196;
    vector<int> p = {977, 395, 60, 537, 919, 860, 484, 159, 486, 326, 116, 92, 518, 983, 95, 747, 501, 264, 798, 321, 301, 928, 395, 948, 469, 374, 875, 185, 636, 173, 22, 612, 568, 82, 149, 176, 633, 323, 335, 118, 339, 142, 901, 858, 124, 686, 604, 626, 951, 91};
    vector<int> b = {2311, 8185, 6798, 1710, 2025, 223, 5572, 9995, 929, 5545, 6794, 6069, 5492};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 202404975;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 91172;
    int tokensNeeded = 102748;
    vector<int> p = {481, 505, 395, 289, 844, 537, 189, 391, 351, 876, 685, 667, 826, 466, 994, 767, 174, 716, 345, 352, 501, 799, 405, 923, 424, 480, 956};
    vector<int> b = {4893, 5969, 4260, 7950, 913, 662, 8893, 5975, 171, 6463, 2323, 8875, 7071, 7683, 8027, 5213, 1082, 5912, 7824, 3744, 1673, 2144, 7353, 8737, 2037};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 44516807;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 473814;
    int tokensNeeded = 311132;
    vector<int> p = {270, 855, 700, 288, 682, 757, 788, 394};
    vector<int> b = {8482, 5806, 5657, 4944, 8129, 4531, 2014, 6890, 3637, 8306, 9051, 627, 6129, 2795, 3379, 8274, 1226, 2115, 1389, 5419, 8846, 8865, 1086, 1794, 9428, 2725, 712, 4251, 2314, 542, 815, 796, 7427, 6472, 5740, 6634, 2082, 8834};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 231018469;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 197315;
    int tokensNeeded = 294584;
    vector<int> p = {566, 107, 124, 988, 579, 651, 414, 337, 144, 320, 996, 721, 806, 509, 686, 960, 394, 408, 902, 363, 339, 108, 283, 849, 247, 480, 275};
    vector<int> b = {5633};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 96529106;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 363828;
    int tokensNeeded = 9098;
    vector<int> p = {494, 133, 211, 763, 784, 315, 99, 618, 635, 786, 28, 130, 985, 715, 90, 68, 122, 992, 431, 152, 99, 404, 0, 36, 575, 275, 899};
    vector<int> b = {8507, 5565, 9111, 6201, 9190, 7003, 4698, 7592, 5805, 6113, 2160, 8780, 2528, 1761, 9169, 3580, 7979, 777, 1059, 5063, 3762, 6588, 3830, 1076, 6512, 1830, 8461, 8546, 2224, 6905, 7292, 1809, 2469, 6402, 8010, 2737, 4483, 2707, 1407, 288, 9900, 4646, 146, 2427, 6407, 9315, 7087, 5464, 1171};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 177504109;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 224791;
    int tokensNeeded = 476365;
    vector<int> p = {14, 536, 296, 465, 756, 21, 799, 249, 645, 365, 786, 485, 78, 476};
    vector<int> b = {1203, 3096, 1223, 1491, 4074, 6948, 2716, 6501, 3355, 3110, 4666, 9898, 4281, 3891, 424, 292};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 109542637;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 273680;
    int tokensNeeded = 39876;
    vector<int> p = {290, 38, 443, 780, 978, 87, 835, 763, 262, 913, 930, 317, 371, 394, 456, 572, 554, 811, 825, 281, 230, 256, 744, 970, 776, 555, 26, 902, 380, 1000, 324, 361, 37, 457, 140, 705, 545, 975, 158, 497, 578, 87};
    vector<int> b = {4574, 1852, 8537, 3676, 7643, 3300, 5495, 1012, 2497, 423, 9049, 1592, 9633, 3133, 1111, 213, 6921, 7570, 7096, 7050, 8234, 143, 3311, 3672};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 133897988;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 125384;
    int tokensNeeded = 474977;
    vector<int> p = {241, 807, 123, 746, 445, 294, 86, 346, 709, 238, 70, 715, 309, 432, 153, 350, 568, 147, 107, 606};
    vector<int> b = {3423, 3804, 5216, 2735, 3948, 9606, 6408, 4679, 8865, 2672, 1696, 6166, 9073, 9435, 197, 7324, 5710, 7906, 3218, 5285, 2188, 1203, 8436, 6894, 8237, 2100, 3389, 9483, 7954, 9020, 7649, 2456, 3902, 3943};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 61297622;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 128790;
    int tokensNeeded = 27584;
    vector<int> p = {424, 270, 711, 997, 802, 17, 692, 79, 769, 371, 443, 867, 760, 735, 725, 553, 335, 705, 190, 977, 252, 974, 35, 96, 659, 648, 599, 669, 226, 648, 570, 341, 918, 971, 337, 410, 988, 719, 489, 446, 89};
    vector<int> b = {9499, 7499, 4858, 1604, 4743, 1183, 603, 1303, 1767, 4071, 7347, 304, 6557, 1038, 1297};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 62694836;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 381520;
    int tokensNeeded = 339644;
    vector<int> p = {407, 914, 678, 14, 574, 705, 424, 561, 423, 603, 7, 203, 224, 9, 743, 270, 737, 215, 342, 858, 569, 80, 231, 896, 854, 392, 881, 274, 150, 224, 611, 247, 829, 289, 953, 402, 994, 376, 654, 417, 670, 351, 310};
    vector<int> b = {7764, 1465, 4969, 3492, 9742, 1306, 9825, 400, 1568, 226, 8406, 1055, 8265, 8528, 1839, 1406, 9481, 2261, 4967, 4604, 9026, 1109, 2888, 9580, 7299, 5139, 2554, 6817, 9858};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 185941712;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 86318;
    int tokensNeeded = 99485;
    vector<int> p = {216, 862, 668, 864, 438, 312, 80, 94, 188, 501, 604, 145, 183};
    vector<int> b = {2992, 1742, 2865, 9039, 6346, 2969, 1226, 312, 2548, 9604};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 42250174;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 403567;
    int tokensNeeded = 406528;
    vector<int> p = {651, 610, 411, 842, 516, 272, 200, 380, 711, 512, 460, 805, 390, 651, 99, 536, 524, 176, 479, 613, 28, 468, 126, 254, 765, 777, 226, 124, 597};
    vector<int> b = {6722, 6186, 3414, 1930, 1274, 4188, 9817, 8555, 6653, 3845, 7851, 4446, 3426, 1548, 5973, 1771, 5753, 9763, 1798, 5107, 5293, 5770, 3500, 8249, 1631, 3119, 2595, 2198, 3420, 2393, 8947, 141, 9658, 3440, 3150, 931, 7628, 4046, 9486};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 197147994;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 10636;
    int tokensNeeded = 463954;
    vector<int> p = {574, 858, 515, 313, 753, 312, 577, 515, 588, 454, 305, 22, 147, 39, 221, 617, 1000, 545, 373, 704, 776, 376, 70, 326, 850, 997, 777, 611, 171, 528, 244, 745, 76, 449, 748, 519, 451, 15, 33, 730, 159, 338, 752, 306, 377, 974};
    vector<int> b = {3302, 1102, 656, 2127, 6420, 7618, 4392, 5967, 5511, 4284, 638, 3969, 9535, 2122, 1920, 5668, 7080, 9836, 8657, 6203};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 5219524;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 63180;
    int tokensNeeded = 476506;
    vector<int> p = {766, 434, 651, 208, 430, 28, 181, 42, 786, 389, 718, 246, 62, 770, 467, 62, 670, 684, 838, 562, 762, 832, 699, 274, 902, 284, 224, 181, 10, 500, 804, 467, 624, 454, 675, 54, 172, 546, 96, 958, 625, 505, 203};
    vector<int> b = {7756};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 30664558;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 438330;
    int tokensNeeded = 102409;
    vector<int> p = {734, 968, 887, 495, 799, 585, 459, 391, 559, 684, 572, 569, 874, 375, 726, 187, 519, 400, 241, 382, 636, 28, 339, 260, 533, 233, 638, 497, 283, 76, 821, 17, 43, 707, 512, 533, 291, 662, 924, 540, 35, 185, 800, 599, 250, 525, 786, 769, 616, 27};
    vector<int> b = {3935, 4034, 8664, 9081};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 213733704;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 349811;
    int tokensNeeded = 39808;
    vector<int> p = {465, 386, 916, 976, 403, 960, 683, 606, 182, 664, 958, 796, 204, 993, 981, 3, 591, 230, 218, 66, 689, 834, 784, 840, 85, 529, 710, 597, 497, 503, 746, 652, 889, 661, 318};
    vector<int> b = {7400, 7946, 415, 4828, 824, 3598, 1987, 1801, 1734, 8316, 7164, 7083, 6111, 1848, 5918, 4038};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 170898382;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 1;
    int tokensNeeded = 2;
    vector<int> p = {0, 323, 35, 239, 358, 3};
    vector<int> b = {0, 238, 23};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 500000;
    int tokensNeeded = 1;
    vector<int> p = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> b = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2277323685;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 500000;
    int tokensNeeded = 1;
    vector<int> p = {1000, 999, 1000, 998, 1000, 997, 1000, 999, 1000, 998, 1000, 999, 1000, 998, 1000, 997, 1000, 999, 1000, 998, 1000, 999, 1000, 998, 1000, 997, 1000, 999, 1000, 998, 1000, 999, 1000, 998, 1000, 997, 1000, 999, 1000, 998, 1000, 999, 1000, 998, 1000, 997, 1000, 999, 1000, 998};
    vector<int> b = {10000, 9999, 10000, 9998, 10000, 9997, 10000, 9999, 10000, 9997, 10000, 9999, 10000, 9998, 10000, 9997, 10000, 9999, 10000, 9997, 10000, 9999, 10000, 9998, 10000, 9997, 10000, 9999, 10000, 9997, 10000, 9999, 10000, 9998, 10000, 9997, 10000, 9999, 10000, 9997, 10000, 9999, 10000, 9998, 10000, 9997, 10000, 9999, 10000, 9997};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2290771387;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 50;
    int tokensNeeded = 10;
    vector<int> p = {1, 1, 1, 1, 1, 1, 1, 1, 1, 800, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 3, 4, 4, 3, 3, 3, 2, 6, 5, 4, 2, 3, 1, 5, 2, 2, 3, 1, 0, 7, 9, 7, 2, 1, 3, 4, 8};
    vector<int> b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 0, 0, 0, 0, 0, 0, 0, 0, 1900, 0, 0, 0, 0, 0, 0, 0, 3100, 0, 0, 0, 0, 0, 0, 5000, 0, 0, 0, 1500};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 7823;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 357;
    int tokensNeeded = 10;
    vector<int> p = {1, 1, 1, 1, 1, 1, 1, 1, 1, 800, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 3, 4, 4, 3, 3, 3, 2, 6, 5, 4, 2, 3, 1, 5, 2, 2, 3, 1, 0, 7, 9, 7, 2, 1, 3, 4, 8};
    vector<int> b = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1500, 0, 0, 0, 0, 0, 0, 0, 0, 1900, 0, 0, 0, 0, 0, 0, 0, 3100, 0, 0, 0, 0, 0, 0, 5000, 0, 0, 0, 1500};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 99237;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 3;
    int tokensNeeded = 2;
    vector<int> p = {1, 2, 3};
    vector<int> b = {1, 4, 7};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 3;
    int tokensNeeded = 2;
    vector<int> p = {13};
    vector<int> b = {13};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 500000;
    int tokensNeeded = 1;
    vector<int> p = {96, 998, 883, 966, 834, 258, 615, 706, 110, 752, 917, 963, 212, 884, 153, 50, 910, 565, 774, 67, 547, 179, 698, 127, 552, 656, 297, 46, 901, 953, 875, 37, 535, 683, 469, 785, 679, 230, 206, 762, 751, 483, 206, 708, 764, 889, 387, 283, 490, 725};
    vector<int> b = {2879, 5906, 838, 9833, 796, 4802, 3494, 6131, 9763, 3180, 9581, 9576, 9617, 3645, 5779, 9433, 9371, 9009, 7517, 973, 1124, 1769, 6472, 5112, 226, 3587, 2145, 1836, 8941, 6861, 7760, 8211, 8972, 2311, 6120, 9237, 1948, 1644, 8506, 3842, 7778, 5031, 9919, 2732, 5261, 4915, 6004, 5060, 6394, 9575};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2298441919;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 500000;
    int tokensNeeded = 2;
    vector<int> p = {913, 686, 522, 988, 618, 394, 164, 691, 106, 653, 966, 8, 965, 35, 746, 812, 76, 511, 622, 722, 474, 523, 779, 81, 410, 468, 262, 696, 217, 318, 480, 106, 691, 498, 396, 760, 482, 157, 106, 175, 700, 588, 886, 912, 711, 332, 442, 36, 552, 564};
    vector<int> b = {5314, 557, 5808, 8854, 8297, 5833, 3898, 2421, 921, 2829, 7059, 4185, 7213, 6073, 3848, 8446, 9703, 7795, 7151, 7669, 3542, 5194, 9598, 3628, 1882, 7657, 1137, 5884, 6068, 7907, 408, 7199, 6949, 9186, 5840, 1686, 1914, 453, 1759, 8929, 8124, 388, 8510, 328, 452, 8211, 2698, 4104, 6178, 3850};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1417699059;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 500000;
    int tokensNeeded = 7;
    vector<int> p = {573, 339, 523, 394, 709, 761, 764, 719, 921, 456, 206, 672, 507, 911, 451, 693, 795, 520, 604, 971, 188, 693, 137, 482, 725, 194, 791, 417, 593, 656, 476, 283, 255, 426, 413, 862, 572, 102, 831, 940, 503, 981, 207, 698, 503, 202, 114, 12, 189, 257};
    vector<int> b = {4231, 3565, 6425, 6605, 8123, 6513, 9932, 2598, 7119, 9171, 3005, 2129, 3330, 6577, 7631, 1759, 3406, 5347, 4511, 6176, 4066, 4098, 1459, 183, 7180, 8507, 1438, 9953, 7484, 5815, 8122, 9437, 8266, 8042, 7710, 7625, 892, 6368, 5820, 9856, 6373, 244, 8617, 7467, 7259, 365, 4532, 3318, 1748, 5625};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 648301783;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 500000;
    int tokensNeeded = 8;
    vector<int> p = {212, 817, 434, 8, 711, 877, 570, 16, 922, 731, 343, 476, 707, 841, 536, 766, 548, 877, 152, 266, 706, 993, 567, 810, 379, 741, 416, 59, 205, 419, 970, 879, 894, 417, 313, 67, 501, 648, 544, 352, 205, 150, 798, 273, 999, 914, 494, 536, 725, 6};
    vector<int> b = {5639, 8253, 855, 5032, 5575, 6676, 9946, 9951, 2295, 6695, 5681, 3020, 6863, 7002, 9295, 957, 7320, 1084, 792, 2811, 7456, 422, 9878, 3652, 5521, 42, 5001, 4911, 7273, 4428, 3416, 7503, 3361, 4603, 5988, 1484, 3482, 6871, 8185, 5703, 9966, 7703, 9021, 1463, 5445, 7698, 5941, 6719, 4385, 8398};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 603597108;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 500000;
    int tokensNeeded = 29;
    vector<int> p = {630, 675, 721, 31, 145, 540, 549, 785, 927, 257, 479, 111, 785, 2, 827, 934, 451, 277, 836, 418, 102, 765, 227, 370, 776, 440, 721, 517, 795, 722, 9, 893, 595, 303, 247, 44, 622, 390, 826, 956, 776, 965, 521, 541, 884, 996, 673, 888, 234, 463};
    vector<int> b = {9895, 6809, 6290, 1342, 5831, 5032, 4689, 2405, 509, 3642, 9833, 5346, 7719, 573, 9373, 9325, 5272, 9170, 5937, 3833, 58, 9353, 2019, 2330, 9082, 5715, 9249, 5393, 5783, 2092, 1048, 8845, 2726, 5920, 3044, 1842, 9390, 5562, 479, 5074, 6049, 1858, 6225, 8090, 9641, 2083, 6070, 1199, 4233, 4946};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 356354792;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 500000;
    int tokensNeeded = 50;
    vector<int> p = {259, 439, 100, 433, 627, 248, 694, 412, 707, 933, 720, 878, 115, 442, 24, 877, 743, 98, 950, 670, 38, 776, 179, 313, 191, 145, 162, 409, 295, 841, 204, 685, 309, 446, 147, 502, 4, 39, 952, 162, 938, 46, 527, 636, 549, 257, 341, 268, 7, 936};
    vector<int> b = {6071, 126, 6536, 6546, 6879, 5045, 7772, 9016, 2317, 8006, 7573, 245, 3993, 5224, 5459, 5418, 9543, 7038, 3704, 9633, 6245, 8634, 3796, 7790, 2727, 1707, 1609, 6024, 8033, 5861, 5266, 5202, 5161, 69, 5656, 7426, 9907, 6045, 45, 8791, 1216, 8735, 3506, 8319, 8243, 5949, 6828, 7454, 6848, 4300};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 311922440;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 500000;
    int tokensNeeded = 123;
    vector<int> p = {469, 122, 633, 967, 676, 712, 175, 560, 959, 361, 682, 650, 877, 76, 366, 171, 932, 847, 707, 596, 1000, 873, 866, 63, 761, 661, 650, 683, 601, 126, 324, 749, 330, 977, 654, 461, 530, 17, 733, 265, 191, 389, 758, 987, 757, 773, 597, 353, 556, 5};
    vector<int> b = {4561, 2062, 2658, 8431, 3602, 9711, 547, 7709, 4346, 5043, 23, 8904, 857, 7372, 4274, 6790, 4885, 159, 3817, 1226, 3454, 9694, 3048, 6622, 1267, 3831, 2360, 4857, 3687, 2293, 1842, 484, 5427, 4206, 6158, 8302, 3284, 1911, 4127, 7108, 3247, 3951, 7617, 9714, 4038, 6442, 2326, 2905, 8247, 5481};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 272884240;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 500000;
    int tokensNeeded = 146;
    vector<int> p = {301, 748, 713, 763, 881, 898, 324, 453, 484, 419, 636, 725, 613, 164, 239, 936, 614, 462, 39, 606, 248, 754, 953, 698, 753, 376, 215, 942, 238, 356, 747, 642, 750, 470, 950, 975, 738, 548, 894, 121, 611, 411, 725, 385, 976, 734, 230, 751, 217, 25};
    vector<int> b = {8749, 2732, 6983, 783, 7763, 8150, 7622, 6194, 483, 7714, 3803, 4102, 3977, 1468, 768, 5513, 6790, 2635, 4014, 7463, 5642, 3360, 2145, 4266, 8131, 86, 4124, 2454, 1650, 5896, 9, 5714, 146, 8015, 3521, 6702, 9791, 2976, 6693, 9698, 5408, 4577, 1783, 8145, 117, 8225, 1354, 2815, 6897, 7958};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 268256888;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 500000;
    int tokensNeeded = 343;
    vector<int> p = {852, 155, 195, 137, 36, 764, 528, 782, 690, 378, 931, 184, 633, 514, 338, 949, 789, 766, 279, 608, 689, 750, 974, 716, 486, 397, 345, 499, 965, 958, 759, 690, 85, 419, 101, 582, 854, 528, 533, 431, 811, 635, 868, 658, 885, 663, 711, 719, 555, 555};
    vector<int> b = {5733, 2072, 9951, 5396, 1363, 8506, 3615, 4177, 8223, 4437, 237, 3952, 5431, 6491, 2379, 513, 8606, 3662, 9924, 6536, 2116, 2938, 3236, 8386, 5504, 3652, 3169, 5278, 7217, 9775, 5062, 4669, 1685, 3936, 4277, 9322, 1203, 8195, 248, 5324, 6031, 7774, 9889, 2709, 6339, 4853, 1257, 2504, 6293, 382};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 255354955;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 500000;
    int tokensNeeded = 551;
    vector<int> p = {383, 56, 782, 411, 950, 104, 385, 126, 23, 289, 14, 359, 465, 984, 185, 990, 831, 725, 858, 791, 66, 0, 714, 258, 56, 538, 388, 648, 41, 494, 779, 219, 457, 927, 361, 383, 443, 314, 210, 384, 693, 578, 415, 369, 357, 695, 154, 912, 786, 717};
    vector<int> b = {8068, 1215, 8119, 39, 981, 5889, 9671, 3903, 743, 1779, 9887, 5447, 38, 9810, 3260, 2468, 3963, 7352, 7591, 1859, 8510, 2817, 6994, 7299, 1879, 2184, 8122, 478, 3316, 7294, 2136, 2840, 9227, 4364, 5162, 4499, 7413, 2938, 1751, 972, 3406, 1462, 6252, 8519, 8917, 8809, 4248, 7911, 9766, 8597};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 251465285;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 500000;
    int tokensNeeded = 1523;
    vector<int> p = {815, 652, 725, 554, 405, 827, 33, 386, 658, 836, 471, 961, 315, 600, 391, 234, 19, 602, 326, 566, 79, 100, 168, 302, 893, 503, 660, 758, 532, 730, 823, 76, 652, 962, 530, 361, 680, 555, 230, 697, 874, 962, 470, 917, 563, 535, 377, 598, 177, 99};
    vector<int> b = {7159, 9283, 8250, 940, 6771, 4968, 6697, 2684, 9178, 1822, 9947, 9599, 4893, 718, 7268, 7634, 3902, 188, 5937, 3810, 3314, 8066, 4549, 8766, 9610, 4748, 8924, 8591, 1374, 3392, 7769, 4613, 6971, 5652, 8712, 8924, 6224, 9611, 4260, 6781, 2379, 1460, 5946, 6397, 2375, 3796, 2290, 2888, 8595, 5642};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 246482574;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 500000;
    int tokensNeeded = 2120;
    vector<int> p = {451, 53, 723, 793, 617, 640, 73, 271, 29, 131, 396, 22, 915, 170, 479, 712, 277, 562, 399, 745, 452, 273, 817, 901, 484, 286, 703, 16, 956, 129, 471, 832, 755, 180, 113, 216, 487, 242, 983, 964, 552, 982, 445, 869, 63, 92, 127, 427, 457, 176};
    vector<int> b = {5545, 5932, 5714, 2529, 8990, 5466, 1635, 5126, 8370, 9351, 6948, 56, 7326, 2429, 1073, 2669, 198, 6540, 8915, 4526, 5831, 8414, 6460, 4785, 2926, 4639, 59, 4554, 8473, 9979, 3392, 8310, 5677, 3263, 6335, 7070, 3579, 1616, 6285, 1091, 643, 2425, 369, 5102, 7129, 2624, 1481, 7948, 3045, 2544};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 245913402;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 500000;
    int tokensNeeded = 7126;
    vector<int> p = {560, 387, 245, 209, 578, 401, 947, 759, 533, 837, 888, 679, 628, 62, 486, 148, 452, 301, 596, 392, 460, 491, 620, 404, 40, 961, 123, 461, 156, 857, 278, 328, 36, 890, 916, 238, 732, 464, 469, 69, 375, 152, 234, 669, 240, 986, 195, 277, 677, 473};
    vector<int> b = {6824, 1732, 4808, 5407, 8755, 5211, 1166, 5781, 3321, 2870, 398, 9213, 7067, 3918, 3440, 1702, 4777, 8626, 4380, 9616, 5654, 6619, 9139, 5998, 1521, 2493, 1253, 6191, 5242, 1076, 7727, 5130, 8525, 2542, 545, 4228, 3266, 522, 5898, 5873, 1284, 5050, 8265, 6305, 4473, 579, 322, 1734, 8029, 4189};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244829485;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 500000;
    int tokensNeeded = 8727;
    vector<int> p = {989, 897, 258, 435, 670, 402, 395, 680, 986, 899, 475, 90, 321, 22, 103, 569, 826, 767, 159, 517, 718, 283, 541, 269, 878, 618, 409, 636, 286, 720, 283, 965, 479, 414, 385, 741, 96, 566, 870, 760, 130, 65, 385, 613, 792, 688, 494, 109, 452, 124};
    vector<int> b = {6956, 9630, 8599, 4095, 9747, 4169, 6113, 8984, 6904, 4679, 9653, 4815, 336, 6388, 9125, 690, 5421, 137, 5821, 7712, 1940, 1344, 3484, 1392, 1322, 1889, 8989, 5361, 7358, 6566, 8529, 5254, 2058, 3541, 2847, 2500, 9411, 8018, 9868, 4568, 7993, 2705, 7128, 8037, 7467, 7365, 2805, 5271, 104, 3647};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244613818;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 500000;
    int tokensNeeded = 20265;
    vector<int> p = {681, 934, 40, 618, 497, 508, 697, 658, 11, 447, 721, 942, 998, 983, 944, 825, 865, 703, 16, 282, 431, 580, 829, 753, 141, 395, 708, 932, 984, 794, 199, 727, 953, 211, 551, 638, 755, 89, 607, 405, 277, 74, 439, 905, 455, 237, 298, 397, 127, 296};
    vector<int> b = {1660, 2967, 2068, 8465, 1663, 5690, 483, 9964, 6581, 8348, 960, 5802, 4565, 5326, 3692, 2177, 6298, 4389, 1487, 7281, 2081, 7630, 3066, 6328, 4584, 1865, 1040, 5537, 4793, 5465, 3791, 308, 602, 3098, 4038, 1089, 1152, 3424, 4808, 5130, 6710, 5536, 6680, 9800, 2822, 8668, 1529, 7463, 1455, 3695};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244626042;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 500000;
    int tokensNeeded = 51768;
    vector<int> p = {258, 233, 720, 360, 378, 727, 154, 806, 147, 623, 494, 399, 56, 374, 826, 502, 800, 336, 333, 486, 348, 934, 710, 233, 302, 240, 231, 184, 430, 762, 325, 489, 172, 905, 443, 436, 365, 250, 438, 549, 690, 197, 26, 871, 466, 335, 760, 515, 615, 669};
    vector<int> b = {9388, 9494, 4372, 9405, 3736, 2728, 8896, 8082, 4320, 998, 1982, 9634, 4133, 8967, 2797, 9117, 4492, 2601, 9823, 9420, 3668, 1203, 6158, 5337, 1735, 4770, 2984, 3339, 6680, 619, 2181, 9709, 9334, 5815, 3021, 5029, 3283, 8110, 827, 7078, 1560, 6505, 3082, 2048, 403, 3522, 511, 8007, 6911, 6473};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244455169;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 500000;
    int tokensNeeded = 127624;
    vector<int> p = {440, 320, 714, 376, 689, 416, 220, 418, 853, 776, 114, 659, 488, 466, 251, 77, 22, 690, 798, 105, 163, 371, 589, 863, 586, 289, 643, 240, 179, 200, 787, 192, 460, 234, 724, 598, 426, 921, 850, 452, 583, 789, 320, 988, 745, 848, 989, 175, 818, 552};
    vector<int> b = {1726, 3347, 3382, 6715, 3116, 3748, 4996, 8685, 8810, 4162, 8263, 5265, 8371, 3236, 9775, 8047, 9574, 4113, 4322, 2444, 7645, 1627, 8491, 4844, 1673, 4102, 7693, 2394, 8934, 6974, 8730, 9245, 4941, 2423, 3025, 1155, 2470, 8543, 9364, 418, 1002, 4239, 7447, 9572, 3233, 212, 1432, 5683, 3462, 6380};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244183331;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 500000;
    int tokensNeeded = 132319;
    vector<int> p = {381, 205, 609, 348, 767, 112, 844, 866, 743, 602, 810, 864, 46, 83, 373, 883, 847, 579, 413, 448, 413, 817, 813, 230, 972, 992, 23, 640, 118, 734, 550, 174, 628, 138, 183, 983, 424, 542, 403, 442, 578, 767, 486, 898, 400, 434, 160, 737, 381, 66};
    vector<int> b = {5278, 8184, 879, 9771, 9364, 3951, 2004, 5063, 5479, 8887, 58, 8479, 2684, 3570, 1297, 4461, 2970, 1446, 9903, 6542, 4158, 1139, 1288, 5833, 3191, 2313, 2868, 2918, 3954, 3848, 4275, 2929, 5586, 3792, 8206, 6178, 6555, 4369, 3160, 509, 5845, 3840, 9502, 125, 3035, 779, 4979, 5250, 6089, 5307};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 243880732;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 500000;
    int tokensNeeded = 348848;
    vector<int> p = {1000, 164, 672, 78, 322, 546, 147, 218, 711, 572, 406, 910, 131, 410, 988, 642, 673, 665, 641, 203, 309, 712, 300, 427, 863, 18, 793, 696, 897, 714, 704, 831, 50, 20, 986, 154, 895, 432, 554, 189, 372, 317, 135, 38, 903, 787, 305, 605, 277, 813};
    vector<int> b = {1345, 3429, 7489, 5608, 2837, 1720, 5942, 9158, 866, 5828, 5226, 2504, 4399, 8485, 2635, 3023, 5529, 5902, 3813, 3900, 9046, 6233, 4918, 6726, 3610, 6381, 7150, 6996, 7070, 6854, 2, 6739, 7235, 5854, 51, 8028, 332, 9380, 4846, 9070, 5261, 5377, 2757, 7743, 6508, 3585, 7894, 6345, 977, 7494};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244472906;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 500000;
    int tokensNeeded = 500000;
    vector<int> p = {860, 138, 431, 730, 150, 212, 647, 857, 555, 443, 99, 911, 981, 93, 434, 50, 586, 695, 557, 623, 269, 506, 362, 964, 639, 935, 501, 926, 134, 745, 386, 975, 97, 703, 257, 43, 127, 542, 36, 453, 183, 693, 365, 501, 947, 532, 772, 395, 480, 674};
    vector<int> b = {226, 3683, 7863, 3297, 5015, 760, 2796, 8954, 3783, 1263, 6497, 8181, 423, 7064, 6554, 1810, 6431, 934, 9608, 3808, 3339, 5238, 9660, 9057, 8706, 6935, 436, 9946, 3478, 4375, 5361, 5600, 8563, 8893, 3386, 2560, 2046, 5744, 1216, 729, 4230, 6038, 3451, 4841, 2985, 947, 3373, 2425, 6605, 5902};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244184375;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 10;
    int tokensNeeded = 4;
    vector<int> p = {998, 1};
    vector<int> b = {9998, 1};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1695;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 500000;
    int tokensNeeded = 399999;
    vector<int> p = {590, 575, 84, 781, 474, 899, 952, 185, 886, 847, 308, 821, 866, 851, 288, 321, 366, 519, 52, 29, 722, 115, 72, 521, 398, 615, 964, 101, 706, 315, 152, 281, 622, 415, 740, 685, 122, 779, 104, 865, 566, 759, 524, 213, 834, 651, 592, 65, 54, 247};
    vector<int> b = {2212, 5757, 2146, 3827, 7728, 2265, 3262, 7983, 3180, 4245, 1754, 155, 1816, 2753, 3862, 9159, 6676, 2461, 5714, 8403, 8096, 6761, 7518, 2479, 8044, 8293, 1130, 6251, 1688, 1569, 2118, 1943, 9796, 7821, 6562, 7347, 1552, 6985, 8302, 655, 6924, 9653, 3098, 5035, 4392, 7425, 2838, 7639, 4116, 3805};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244053039;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 499999;
    int tokensNeeded = 85000;
    vector<int> p = {1, 3, 67, 8, 1};
    vector<int> b = {5, 12, 4, 1, 2, 5, 700};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 232978165;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 500000;
    int tokensNeeded = 8641;
    vector<int> p = {414, 999, 313, 5, 0, 1000, 123, 312, 461, 777, 11, 12, 13, 14, 921, 998, 126, 126, 345, 411, 414, 999, 313, 5, 0, 1000, 123, 312, 461, 777, 11, 12, 13, 14, 921, 998, 126, 126, 345, 411, 414, 999, 313, 5, 0, 1000, 123, 312, 461};
    vector<int> b = {414, 999, 3213, 5, 0, 1000, 123, 312, 0, 7775, 11, 1000, 13, 14, 921, 998, 0, 1226, 3445, 411, 414, 999, 3113, 10000, 0, 1000, 123, 312, 0, 7177};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244470026;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 500000;
    int tokensNeeded = 2;
    vector<int> p = {10, 100, 45, 76, 2, 67, 77, 888, 543, 1, 456, 22, 345, 999, 0, 0, 0, 345, 657, 123, 345, 12, 23, 676, 987, 123, 456, 789, 335, 662, 5, 6, 7, 8, 9, 45, 56, 67, 78, 89, 90, 123, 543, 676, 987, 443, 221, 938, 467};
    vector<int> b = {345, 3453, 6575, 1234, 564, 55, 6757, 6754, 8888, 6665, 90, 8, 4522, 3423, 5678, 3232, 222, 1234, 55, 2342, 9999, 6784, 5466, 88, 980, 5, 4512, 3478, 111, 1111, 9090, 8643, 4568, 56, 32, 1235, 7631};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1416815892;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 9;
    int tokensNeeded = 2;
    vector<int> p = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    vector<int> b = {2, 2, 2, 2, 2, 2, 100, 2, 2};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 153;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 500000;
    int tokensNeeded = 3;
    vector<int> p = {1, 2, 3, 4, 5};
    vector<int> b = {0, 0, 0, 2, 5};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1050382441;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 500000;
    int tokensNeeded = 499995;
    vector<int> p = {12, 3, 2, 2, 3};
    vector<int> b = {3, 2, 23, 3, 1};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 238324223;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 7;
    int tokensNeeded = 2;
    vector<int> p = {10, 10, 10, 10, 10, 10, 10};
    vector<int> b = {0, 100, 0, 100, 0, 100, 0};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 370;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 500000;
    int tokensNeeded = 11781;
    vector<int> p = {903, 301, 3, 2, 1, 452, 432, 31, 2, 3, 4, 5};
    vector<int> b = {89, 399, 193, 4, 13, 4, 15, 52, 31, 256, 432};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 243946067;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 500000;
    int tokensNeeded = 5;
    vector<int> p = {1, 2, 3, 4, 5};
    vector<int> b = {0, 0, 0, 2, 5};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 795737340;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 3;
    int tokensNeeded = 1;
    vector<int> p = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 500000;
    int tokensNeeded = 250000;
    vector<int> p = {1, 2, 3};
    vector<int> b = {7, 0};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 185970068;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 6;
    int tokensNeeded = 3;
    vector<int> p = {5, 5, 5, 5, 4, 3};
    vector<int> b = {0, 0, 7, 1, 1, 9};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 43;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 500000;
    int tokensNeeded = 1;
    vector<int> p = {998, 1};
    vector<int> b = {9998, 1};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 2547909750;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 50000;
    int tokensNeeded = 1234;
    vector<int> p = {649, 885, 512, 14, 687, 285, 614, 744, 628, 89, 886, 645, 669, 240, 793, 279, 909, 695, 289, 617, 471, 356, 651, 434, 720, 184, 567, 236, 705, 754, 181, 802, 360, 920, 472, 24, 823, 230, 17, 82, 183, 927, 130, 290, 992, 418, 67, 986, 789, 174};
    vector<int> b = {2804, 2575, 440, 6112, 5913, 8178, 3673, 2705, 377, 5455, 9595, 2356, 5029, 1029, 1573, 9938, 5397, 2522, 58, 9060, 926, 9527, 7598, 8735, 6067, 6564, 7460, 8448, 1090, 2576, 7549, 8372, 4275, 638, 1550, 1283, 5747, 3890, 1162, 8299, 1221, 3327, 7059, 5154, 8300, 2154, 3093, 9019, 7779, 3400};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 24660431;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 113876;
    int tokensNeeded = 474255;
    vector<int> p = {341, 585, 630, 977};
    vector<int> b = {6801, 3339, 9947, 7671};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 53652030;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 10;
    int tokensNeeded = 1;
    vector<int> p = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> b = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 500000;
    int tokensNeeded = 500000;
    vector<int> p = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> b = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 244470487;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 5;
    int tokensNeeded = 3;
    vector<int> p = {1, 2, 3, 4, 5};
    vector<int> b = {0, 0, 0, 2, 5};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 500000;
    int tokensNeeded = 3;
    vector<int> p = {1000, 1, 1, 1, 1, 1, 1};
    vector<int> b = {0, 0, 0, 0, 0, 100};
    PubTrivia* pObj = new PubTrivia();
    clock_t start = clock();
    long result = pObj->maximumScore(N, tokensNeeded, p, b);
    clock_t end = clock();
    delete pObj;
    long expected = 1070272674;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9941146&rd=11129&pm=8736
********************************************************************************
#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <valarray>
#include <vector>
#include <ext/hash_map>
#include <ext/hash_set>
#include <ext/rope>
#include <ext/slist>
using namespace std;
using namespace __gnu_cxx;
#define sz size()
#define iter(i, a, b) for(typeof(a) i=a; i!=b; ++i)
#define rep(i, n) for(int i=0; i<n; i++)
#define all(x) x.begin(),x.end()
typedef long long ll;
struct PubTrivia {
  vector<int> gen(int N, int G, vector<int> x) {
    vector<int> ans(N);
    int k=0, m=x.sz;
    rep(i, N) {
      ans[i]=x[k];
      int s=(k+1)%m;
      x[k]=((x[k]^x[s])+13)%G;
      k=s;
    }
    return ans;
  }
  long long maximumScore(int N, int tokensNeeded, vector <int> p, vector <int> b) {
    vector<int> pt=gen(N, 1001, p), bon=gen(N, 10001, b);
    vector<ll> ans(N+1), withtok(N+1), psum(N);
    rep(i, N) psum[i]=(i?psum[i-1]:0)+pt[i];
    rep(i, N) {
      withtok[i+1]=ans[i]-pt[i];
      if(i+1>=tokensNeeded) withtok[i+1]=max(withtok[i+1], bon[i]+withtok[i+1-tokensNeeded]+psum[i]-(i>=tokensNeeded?psum[i-tokensNeeded]:0));
      ans[i+1]=max(withtok[i+1], ans[i]+pt[i]);
    }
    return ans.back();
  }
};
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/