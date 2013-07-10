/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11430
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

class NumberLabyrinthDiv1 {
public:
    int getNumberOfPaths(vector<int> X, vector<int> Y, vector<int> val, int xFinish, int yFinish, int K);
};

int NumberLabyrinthDiv1::getNumberOfPaths(vector<int> X, vector<int> Y, vector<int> val, int xFinish, int yFinish, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<int> X = {};
    vector<int> Y = {};
    vector<int> val = {};
    int xFinish = 3;
    int yFinish = 3;
    int K = 2;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
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
    vector<int> X = {};
    vector<int> Y = {};
    vector<int> val = {};
    int xFinish = 3;
    int yFinish = 3;
    int K = 3;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> X = {2};
    vector<int> Y = {2};
    vector<int> val = {1};
    int xFinish = 3;
    int yFinish = 3;
    int K = 3;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> X = {1, 3, 6};
    vector<int> Y = {1, 3, 6};
    vector<int> val = {2, 2, 2};
    int xFinish = 5;
    int yFinish = 5;
    int K = 4;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> X = {1, 19, 20, 21, 21, 21, 20, 19, 19};
    vector<int> Y = {1, 11, 11, 11, 10, 9, 9, 9, 10};
    vector<int> val = {1, 2, 2, 2, 2, 2, 2, 2, 2};
    int xFinish = 20;
    int yFinish = 10;
    int K = 4;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1778;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> X = {13, 224, 77, 509, 1451, 43, 379, 142, 477};
    vector<int> Y = {1974, 375, 38, 783, 3, 1974, 1790, 1008, 2710};
    vector<int> val = {30, 1845, 360, 11, 837, 84, 210, 4, 6704};
    int xFinish = 509;
    int yFinish = 2011;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 196052726;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> X = {};
    vector<int> Y = {};
    vector<int> val = {};
    int xFinish = 999997;
    int yFinish = 999991;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 428751995;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X = {};
    vector<int> Y = {};
    vector<int> val = {};
    int xFinish = 1;
    int yFinish = 1;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> X = {340, 698};
    vector<int> Y = {790, 4671};
    vector<int> val = {509, 332};
    int xFinish = 1000;
    int yFinish = 9999;
    int K = 0;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
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
    vector<int> X = {6504, 97, 3914};
    vector<int> Y = {1011, 1460, 861};
    vector<int> val = {39, 742, 1134};
    int xFinish = 5341;
    int yFinish = 2300;
    int K = 1;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> X = {1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 391012, 1, 1, 1, 1, 1};
    vector<int> Y = {1000000, 106, 1, 998765, 3977, 14632, 45, 998762, 998762, 48119, 998764, 99917, 256792, 504613, 164302, 9005, 752037, 992193, 841, 998761};
    vector<int> val = {1237, 735, 998762, 2, 4978, 998763, 803, 1, 2, 11374, 1, 3, 517344, 103689, 295891, 90912, 246725, 3741, 2, 29};
    int xFinish = 1;
    int yFinish = 998763;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 810039249;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {992534, 989103, 970873, 124897, 9, 970873, 946729, 9808, 415, 5932, 970871, 13926, 970800, 395066, 94, 395066, 67350, 10, 19384, 1673, 782301, 961840};
    vector<int> Y = {1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 365015, 1, 1, 1, 1, 1000000, 1, 1, 1};
    vector<int> val = {21662, 103992, 1, 270169, 1, 1, 24143, 7071, 934851, 2310, 1, 84, 70, 365014, 321, 365014, 875239, 586, 8394, 12253, 5, 9033};
    int xFinish = 970872;
    int yFinish = 1;
    int K = 7;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 665560201;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {1, 4, 5, 6, 6, 2, 6, 1, 3, 4, 3, 1, 5, 1, 4, 4, 2, 7, 5, 5, 6, 3, 2, 7, 3, 2, 5, 3, 6, 2, 5, 1, 1, 5, 7, 2, 3, 6, 4, 4};
    vector<int> Y = {6, 6, 7, 3, 1, 2, 2, 4, 3, 1, 2, 3, 2, 2, 5, 2, 5, 5, 4, 6, 4, 1, 1, 7, 6, 4, 3, 4, 7, 3, 1, 5, 1, 5, 6, 6, 5, 5, 4, 3};
    vector<int> val = {2, 2, 2, 1, 2, 3, 2, 2, 1, 3, 2, 3, 3, 1, 1, 1, 1, 1, 1, 1, 2, 3, 2, 3, 1, 3, 3, 1, 3, 1, 1, 2, 1, 1, 3, 2, 1, 1, 3, 2};
    int xFinish = 6;
    int yFinish = 6;
    int K = 3;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 758;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> X = {21, 40, 16, 40, 40, 40, 12, 40, 31, 40, 29, 20, 40, 40, 30, 40, 40, 7, 27, 8, 40, 17, 14, 40, 40, 3, 40, 40, 40, 40, 40, 35, 40, 40, 25, 8, 24, 40, 40, 32};
    vector<int> Y = {40, 19, 40, 13, 37, 15, 40, 9, 40, 5, 40, 40, 11, 4, 40, 1, 6, 40, 40, 25, 22, 40, 40, 36, 18, 40, 39, 38, 26, 34, 33, 40, 2, 28, 40, 40, 40, 10, 23, 40};
    vector<int> val = {30, 22, 35, 34, 14, 32, 35, 34, 18, 46, 15, 30, 39, 37, 14, 45, 36, 38, 22, 12, 27, 30, 30, 6, 31, 42, 8, 5, 22, 17, 12, 6, 45, 21, 22, 43, 18, 41, 22, 9};
    int xFinish = 40;
    int yFinish = 40;
    int K = 2;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> X = {40, 40, 40, 22, 19, 28, 40, 6, 40, 40, 7, 40, 18, 26, 40, 38, 13, 40, 40, 40, 40, 40, 3, 40, 40, 40, 36, 24, 35, 40, 40, 27, 12, 40, 40, 40, 16, 40, 15, 11};
    vector<int> Y = {4, 33, 34, 40, 40, 40, 2, 40, 14, 26, 40, 17, 40, 17, 30, 40, 40, 21, 23, 5, 1, 37, 40, 29, 39, 25, 40, 40, 40, 8, 20, 40, 40, 9, 32, 10, 40, 31, 40, 40};
    vector<int> val = {45, 9, 17, 19, 27, 15, 45, 45, 37, 24, 35, 28, 33, 12, 16, 6, 31, 23, 24, 39, 41, 6, 41, 22, 9, 26, 10, 26, 13, 36, 27, 17, 37, 37, 15, 32, 28, 14, 32, 30};
    int xFinish = 40;
    int yFinish = 40;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 233125606;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X = {778793, 523948, 144297, 7393, 592179, 438357, 769124, 174842, 626166, 986488, 83584, 914792, 335887, 49941, 839244, 935720, 818301, 227132, 418990, 388681, 71720, 272957, 121657, 573633, 847854, 674529, 490526, 179815, 256137, 560999, 484456, 741539, 311515, 878929, 950361, 697173, 377966, 648451, 301178};
    vector<int> Y = {770507, 533057, 138495, 7769, 600267, 450226, 748708, 178206, 629298, 995191, 99029, 901577, 336156, 31853, 826748, 930822, 803346, 213865, 422942, 407375, 68753, 268276, 112806, 585385, 856670, 672325, 498276, 180569, 247284, 562283, 474294, 718737, 322249, 873771, 961169, 692729, 379500, 651637, 287346};
    vector<int> val = {691302, 568044, 861367, 269703, 594592, 75319, 271601, 841410, 59246, 597012, 378339, 554382, 787940, 43085, 109543, 617343, 783397, 873526, 859987, 798209, 179146, 501070, 453155, 716135, 510842, 416017, 210276, 275497, 418151, 549783, 628400, 448543, 211048, 492848, 27393, 775774, 189285, 839997, 816944};
    int xFinish = 999980;
    int yFinish = 999921;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 96661770;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X = {515435, 957524, 772841, 9096, 204094, 606309, 647343, 454766, 800457, 414558, 591063, 908030, 559616, 340059, 90510, 485444, 239370, 282593, 936295, 838561, 891612, 119739, 264274, 426041, 873327, 29046, 138085, 168262, 785890, 355776, 322156, 712044, 540958, 55688, 975513, 658982, 697492, 189621, 740901, 398219};
    vector<int> Y = {508346, 952562, 750405, 10284, 201451, 607659, 626544, 450239, 804542, 422930, 588124, 922480, 566824, 331639, 80775, 498360, 235920, 275810, 929983, 839137, 898756, 107579, 264576, 437447, 853486, 35955, 129538, 166819, 799442, 362667, 306402, 706566, 545940, 62493, 998404, 664523, 681797, 186057, 731632, 386207};
    vector<int> val = {362825, 519823, 981875, 589374, 708670, 842070, 455378, 945810, 943294, 503179, 177695, 543689, 206084, 881436, 213946, 391577, 651199, 585215, 352367, 109291, 858748, 574670, 974335, 840702, 311727, 54358, 250960, 862047, 895305, 961459, 698357, 422202, 142221, 707081, 58648, 99346, 637912, 644700, 806436, 491595};
    int xFinish = 999958;
    int yFinish = 999977;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 464490871;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X = {751013, 559829, 192199, 797996, 888961, 424432, 333183, 133990, 302748, 939417, 972436, 48317, 166977, 262701, 817731, 93678, 100292, 527187, 493780, 386665, 351456, 984093, 589521, 462658, 670095, 200378, 636057, 835297, 279405, 65078, 523382, 436696, 691653, 13630, 726097, 234642, 715946, 913581, 617069, 862079};
    vector<int> Y = {773456, 566289, 188350, 775940, 889881, 416605, 335683, 141031, 310494, 948716, 967655, 38618, 150005, 269848, 806416, 94741, 109604, 525593, 499499, 399881, 360496, 979350, 587077, 456951, 670760, 205014, 645006, 841597, 289359, 70828, 508326, 439746, 695480, 8141, 747550, 241809, 712519, 912022, 616004, 850587};
    vector<int> val = {20696, 7563, 1308, 12286, 20501, 13107, 14823, 20769, 20700, 306, 20406, 11357, 15779, 23358, 3498, 18448, 20766, 19247, 4027, 6882, 6816, 860, 18665, 14334, 2306, 14833, 9616, 6720, 5315, 11706, 5576, 1585, 24294, 22236, 4022, 2216, 5215, 17870, 6742, 4216};
    int xFinish = 999988;
    int yFinish = 999922;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 782093595;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> X = {20406, 125241, 695093, 318068, 628844, 402010, 298235, 556604, 82672, 810506, 878067, 914433, 985776, 868402, 162394, 582483, 489745, 272708, 732368, 793850, 358293, 675300, 41897, 462669, 821069, 211847, 143714, 189825, 642685, 964109, 413970, 73115, 519583, 376083, 749349, 604009, 437843, 255274, 930897};
    vector<int> Y = {13716, 115722, 716967, 329343, 637455, 388166, 292967, 554504, 91274, 816113, 876173, 902958, 987985, 853218, 167124, 585076, 496687, 263783, 723805, 773583, 342670, 676958, 38871, 473047, 838830, 206880, 152881, 186488, 658815, 964725, 415560, 60911, 513322, 383904, 768772, 602371, 460937, 245688, 934776};
    vector<int> val = {12852, 25227, 15134, 2651, 14392, 4183, 25495, 9653, 8158, 10785, 21619, 1885, 10632, 2802, 8047, 25636, 15989, 14182, 18060, 8951, 24600, 1868, 7715, 5512, 21981, 1340, 19660, 4051, 2562, 1355, 17935, 3928, 22215, 14381, 23680, 17256, 3726, 19271, 5560};
    int xFinish = 999940;
    int yFinish = 999943;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 644218079;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {671219, 932954, 820487, 536431, 740341, 960077, 584358, 415900, 24429, 893873, 351530, 191705, 28617, 287978, 317736, 55258, 675900, 554669, 754058, 993433, 144544, 630288, 903963, 118020, 234220, 510154, 783804, 331446, 464634, 201156, 382775, 852577, 427810, 825722, 157243, 96046, 480565, 617221, 701936, 259683};
    vector<int> Y = {660718, 925635, 805979, 532412, 728896, 968717, 589400, 404909, 6004, 899758, 352290, 176693, 31818, 295471, 313496, 69361, 691006, 573010, 759771, 979150, 135023, 644768, 902237, 119580, 235236, 509361, 792789, 333887, 454920, 200973, 385408, 871062, 427299, 843114, 161177, 91114, 482901, 622932, 724766, 270900};
    vector<int> val = {15, 264, 226, 179, 172, 32, 109, 148, 155, 315, 130, 141, 112, 20, 276, 302, 55, 6, 278, 266, 60, 302, 29, 181, 261, 207, 204, 201, 183, 315, 259, 114, 195, 324, 306, 152, 173, 264, 12, 142};
    int xFinish = 999954;
    int yFinish = 999964;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33509253;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {870589, 215822, 758758, 979931, 435384, 476192, 436142, 186636, 837641, 97913, 956786, 907484, 946985, 729163, 12403, 684106, 517763, 895207, 330255, 797528, 703848, 113571, 136208, 247938, 301331, 67855, 352765, 639159, 642380, 784785, 277051, 547937, 27699, 156972, 409246, 371711, 499828, 613374, 572724};
    vector<int> Y = {861649, 211424, 764239, 984453, 423969, 464766, 440151, 182608, 845397, 93459, 963861, 902510, 941325, 719901, 19645, 679825, 532833, 887639, 318362, 814110, 701756, 113613, 140407, 246361, 285499, 62029, 340384, 635467, 653439, 779361, 275121, 540991, 29106, 176958, 395013, 383344, 511242, 598322, 576492};
    vector<int> val = {329, 24, 49, 49, 288, 320, 224, 128, 85, 279, 277, 100, 223, 73, 238, 167, 190, 188, 304, 250, 119, 174, 32, 34, 279, 1, 194, 327, 12, 206, 228, 129, 259, 133, 38, 133, 81, 251, 207};
    int xFinish = 999901;
    int yFinish = 999990;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 470241272;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {949178, 9713, 783665, 534392, 129746, 915063, 286022, 250570, 976549, 224340, 317385, 690720, 590764, 810240, 716168, 114306, 841374, 232593, 633890, 614536, 29937, 437449, 191177, 877934, 864826, 974113, 392780, 740084, 457528, 342785, 68891, 569774, 763455, 81786, 354236, 173609, 510281, 486106, 409380, 657554};
    vector<int> Y = {67638, 976417, 222688, 473086, 870318, 98068, 716596, 729958, 6202, 793385, 683684, 319155, 422422, 197309, 285042, 891913, 154836, 761841, 357674, 383041, 959456, 555604, 822484, 108196, 127427, 47185, 601677, 264429, 544590, 657627, 935022, 433604, 245106, 904936, 646253, 838108, 499799, 504174, 579042, 341410};
    vector<int> val = {203830, 666120, 30784, 391298, 280803, 598124, 605257, 365520, 522439, 102347, 606283, 168466, 466946, 83882, 58789, 470711, 328014, 706339, 680492, 851060, 794365, 383731, 381138, 154020, 351694, 713527, 10622, 794456, 600702, 165222, 876083, 422598, 602814, 656802, 244559, 15913, 308559, 641209, 741503, 743502};
    int xFinish = 999964;
    int yFinish = 999971;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 732635353;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {97366, 928447, 757978, 483983, 502000, 58557, 654643, 355118, 872148, 908586, 452732, 175936, 397978, 376413, 243589, 637135, 417512, 994316, 212599, 728763, 588356, 682168, 13302, 556209, 303089, 774805, 192416, 966608, 34762, 715078, 124084, 593416, 861858, 136085, 797801, 264563, 839846, 516074, 312142};
    vector<int> Y = {909147, 60095, 251048, 515582, 494814, 923178, 354967, 664715, 114111, 101940, 553644, 845173, 607220, 617585, 751192, 361356, 575879, 6058, 792470, 257615, 413767, 310530, 990883, 440842, 698876, 215571, 802537, 41039, 960655, 301097, 889194, 398102, 135116, 868613, 188326, 727065, 173367, 478505, 679317};
    vector<int> val = {397091, 639348, 417881, 976375, 64797, 218784, 995640, 151412, 996851, 650540, 972302, 3885, 334241, 955897, 441100, 864059, 346808, 27523, 89382, 374975, 33894, 284237, 543269, 991314, 825315, 506052, 524, 82618, 680724, 602368, 633335, 849135, 812812, 430415, 83847, 307027, 183599, 54059, 244345};
    int xFinish = 999923;
    int yFinish = 999929;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 166331453;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> X = {815612, 832961, 188520, 744142, 574347, 460733, 386103, 224202, 704657, 858202, 54415, 997517, 347827, 298330, 112004, 627007, 369215, 662386, 443362, 908483, 683319, 963880, 133076, 878315, 5044, 540635, 167925, 767348, 36112, 507162, 301608, 229735, 255426, 601351, 943202, 589288, 776247, 75477, 414397, 491409};
    vector<int> Y = {189919, 171457, 807967, 266326, 439307, 534627, 608972, 777623, 284680, 129125, 944019, 3651, 654262, 709691, 875408, 356364, 645357, 333174, 562750, 91698, 305805, 33944, 868706, 101152, 985686, 459624, 825591, 234569, 952892, 498585, 692035, 750423, 739239, 396047, 50894, 414037, 217841, 924451, 590080, 502709};
    vector<int> val = {21634, 2802, 17955, 4908, 2733, 15818, 15226, 2626, 5621, 40, 10292, 12513, 16951, 2587, 12659, 10313, 4144, 2809, 2197, 3029, 4731, 24679, 20941, 24228, 9533, 10523, 14885, 11602, 19781, 14949, 1287, 23456, 6331, 8435, 2051, 22061, 10310, 14899, 15904, 5878};
    int xFinish = 999949;
    int yFinish = 999974;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 981002056;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {152473, 682743, 210619, 704010, 307951, 2839, 534030, 944016, 865765, 909404, 105255, 366293, 822428, 258727, 98575, 333554, 194556, 633873, 881924, 653005, 461793, 27346, 416940, 600021, 577806, 518459, 829724, 275698, 748114, 788516, 985205, 569448, 56338, 131281, 245012, 771591, 970553, 382650, 493495, 426054};
    vector<int> Y = {829238, 302962, 797178, 284915, 685290, 975471, 471449, 59546, 147368, 88430, 878388, 630279, 176595, 739516, 911020, 651686, 802753, 366295, 111061, 344099, 532571, 957589, 593670, 385264, 419549, 492509, 169047, 711114, 266324, 201582, 18050, 441939, 932667, 867956, 762455, 249145, 35693, 615777, 504037, 567840};
    vector<int> val = {13737, 2901, 19145, 15800, 15377, 12237, 1644, 12378, 12051, 10097, 8666, 40, 16489, 6954, 21766, 3801, 309, 2921, 8705, 6338, 24497, 13929, 16317, 3007, 1177, 14392, 20830, 9934, 9074, 1322, 12742, 8175, 14077, 2725, 16362, 8786, 3213, 19081, 9597, 21595};
    int xFinish = 999987;
    int yFinish = 999932;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 423621667;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {505950, 374100, 912339, 589832, 817456, 829839, 86152, 9563, 197929, 324999, 933938, 497632, 959760, 665688, 236182, 131471, 613138, 526638, 560010, 307181, 718501, 269132, 108578, 70812, 375499, 858819, 763744, 174394, 276744, 647604, 791279, 994192, 448813, 890577, 45060, 456745, 405915, 731593, 698261, 224352};
    vector<int> Y = {483735, 643197, 97449, 405165, 197016, 170550, 902331, 984942, 814260, 674900, 71050, 501773, 46574, 344401, 761524, 863161, 387052, 455634, 426956, 684005, 277177, 739274, 893176, 934444, 621588, 139250, 226299, 833859, 711942, 365794, 211957, 3875, 568828, 105246, 952576, 536416, 594996, 267055, 320024, 785429};
    vector<int> val = {177, 4, 180, 72, 305, 302, 2, 278, 91, 187, 101, 311, 300, 51, 56, 114, 240, 187, 323, 8, 39, 82, 258, 298, 252, 220, 130, 188, 270, 26, 154, 281, 181, 276, 321, 36, 116, 72, 175, 286};
    int xFinish = 999949;
    int yFinish = 999937;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 630668467;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {792790, 107548, 149395, 203790, 363317, 532824, 619032, 511729, 953090, 824446, 892966, 89430, 581130, 858228, 294128, 639190, 836179, 657151, 30002, 396587, 195925, 155253, 458714, 21511, 248233, 67165, 552002, 905231, 437553, 998136, 306602, 926700, 677729, 703208, 260272, 749659, 342291, 490889, 400293, 750416};
    vector<int> Y = {211695, 881055, 856280, 797185, 633228, 464341, 391776, 480941, 47475, 187636, 112833, 900916, 411654, 130210, 703668, 361772, 174172, 344676, 957703, 616635, 820604, 846308, 534819, 993041, 771308, 944313, 426741, 93842, 561968, 5717, 678836, 72185, 312650, 278758, 744364, 259116, 656936, 524863, 579129, 247075};
    vector<int> val = {162, 136, 164, 262, 14, 175, 158, 212, 79, 18, 200, 67, 243, 275, 30, 24, 166, 120, 72, 146, 190, 252, 194, 162, 236, 56, 148, 25, 314, 102, 53, 160, 82, 69, 175, 2, 185, 240, 257, 89};
    int xFinish = 999957;
    int yFinish = 999976;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 663024059;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {72045, 663205, 500904, 574703, 483039, 580558, 376181, 704412, 962029, 393734, 790004, 739982, 840240, 677694, 751886, 201473, 440001, 419582, 743419, 812244, 466676, 943951, 406373, 614670, 351271, 8088, 71406, 742393, 976248, 193021, 321347, 625031, 239906, 85540, 48262, 279432, 750301, 544128, 295807, 144220};
    vector<int> Y = {261293, 664725, 509337, 553968, 498308, 581003, 395707, 717928, 967084, 706960, 784525, 813250, 841965, 690458, 774000, 217322, 431497, 406977, 746158, 820801, 460121, 50052, 334701, 608996, 350428, 14712, 50185, 268414, 977985, 185837, 322734, 645266, 238656, 80185, 44890, 959464, 508433, 305362, 294754, 136594};
    vector<int> val = {578043, 236477, 142486, 393904, 378437, 216434, 182017, 172558, 465109, 311969, 995016, 555343, 821836, 402832, 483829, 508004, 96119, 69625, 413868, 755208, 802406, 277386, 634380, 661131, 427896, 256939, 435247, 89089, 323090, 556836, 476811, 496000, 607187, 180747, 868740, 764960, 451324, 835980, 914478, 194969};
    int xFinish = 999921;
    int yFinish = 999932;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 505039464;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> X = {311005, 570430, 208282, 728183, 470756, 372088, 773528, 804736, 117902, 420762, 807731, 648504, 921015, 740002, 799577, 36071, 290102, 17196, 50619, 987219, 603625, 587693, 916264, 653037, 419628, 905725, 99321, 943121, 731401, 184609, 438643, 385795, 881563, 103234, 963836, 341115, 481014, 543974, 171810, 563460};
    vector<int> Y = {307477, 147216, 224400, 727179, 452815, 355340, 773318, 226703, 123819, 594550, 817589, 634580, 924868, 930252, 780813, 44558, 296041, 22859, 59645, 995824, 610216, 580270, 906779, 650407, 424970, 729966, 85290, 949120, 742982, 187485, 442998, 396486, 878882, 876315, 959034, 343688, 480616, 952504, 172907, 556741};
    vector<int> val = {10549, 15393, 6696, 21610, 17540, 8591, 13647, 12770, 9004, 2772, 11100, 21835, 5272, 12430, 5878, 396, 12612, 18418, 11280, 5717, 15590, 19052, 18839, 13798, 6744, 5808, 12056, 6672, 11013, 15468, 2433, 9576, 23734, 12257, 22909, 3330, 23258, 10916, 8784, 20096};
    int xFinish = 999959;
    int yFinish = 999900;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 466096520;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> X = {439753, 675404, 604600, 840515, 705748, 764157, 115650, 644831, 547559, 501047, 163001, 334532, 361772, 455494, 362218, 132828, 876087, 208257, 955172, 805507, 938910, 250826, 545370, 568571, 51739, 184490, 262433, 195774, 871159, 276642, 388453, 883341, 421272, 480962, 343236, 670835, 885064, 524802, 253602, 5670};
    vector<int> Y = {440601, 604088, 621932, 836723, 701358, 771761, 103486, 627223, 249395, 647039, 152011, 329829, 366279, 460449, 890409, 131141, 581690, 321975, 956394, 819987, 943473, 254353, 549173, 249435, 760997, 1767, 42064, 188880, 854387, 287765, 376050, 493307, 402277, 490829, 874344, 656908, 885355, 507357, 218270, 19314};
    vector<int> val = {282467, 406327, 41495, 528307, 124764, 701128, 179993, 130703, 574949, 535497, 633252, 693129, 362550, 432441, 612560, 787368, 707074, 682864, 354392, 895881, 262138, 636711, 154786, 601302, 418510, 23174, 145478, 50039, 454682, 988245, 186837, 68723, 199603, 867134, 745850, 509322, 875062, 337761, 927583, 165803};
    int xFinish = 999968;
    int yFinish = 999983;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 579613958;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> X = {784321, 806036, 494548, 671847, 5707, 417243, 435834, 960104, 747909, 967346, 701522, 680276, 274797, 827747, 628720, 922751, 334271, 492375, 138918, 234219, 593380, 891700, 562039, 116859, 462049, 940187, 442087, 628527, 747390, 37058, 548263, 394349, 351979, 216279, 755111, 214745, 198351, 543475, 828843, 63884};
    vector<int> Y = {793026, 858253, 548966, 655546, 24650, 416136, 668443, 953428, 360413, 785793, 718157, 678801, 265778, 844657, 6089, 734218, 424502, 491460, 127044, 237198, 214257, 898138, 571100, 103933, 462913, 931643, 440368, 639482, 735516, 31014, 757912, 393085, 353216, 801358, 761203, 214269, 193554, 530151, 356592, 67948};
    vector<int> val = {16532, 98, 9129, 350, 19299, 21221, 10887, 1638, 2088, 14873, 21513, 5854, 20625, 14005, 24222, 11049, 6372, 266, 6092, 24772, 2084, 22600, 22864, 20654, 1296, 22416, 22365, 10593, 4302, 21414, 14860, 24117, 17688, 6167, 3494, 18791, 9504, 3829, 2514, 18908};
    int xFinish = 999998;
    int yFinish = 999910;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 281701079;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X = {645928, 849292, 808574, 681113, 181586, 366180, 693314, 226623, 637644, 524608, 113928, 890362, 394389, 278805, 565374, 418351, 123805, 907929, 154381, 946968, 471388, 291785, 76428, 451660, 348081, 164532, 126829, 799069, 670449, 994937, 336512, 464584, 477268, 559558, 102092, 413216, 311439, 770920, 253896};
    vector<int> Y = {973925, 135486, 957739, 331708, 803372, 615662, 282057, 780829, 364736, 463922, 43213, 122638, 605007, 736292, 431326, 332288, 273426, 85780, 206883, 70558, 449855, 692621, 934300, 552267, 654357, 827098, 880282, 183235, 764210, 19567, 436284, 538380, 709034, 457288, 912883, 588206, 678296, 225639, 766819};
    vector<int> val = {449437, 129477, 123570, 45399, 471383, 216333, 388158, 63990, 639368, 728863, 806900, 456212, 603397, 189299, 325687, 123964, 950065, 576790, 891291, 557222, 327100, 234459, 797739, 651864, 70888, 235311, 467417, 765563, 904611, 766785, 738639, 324695, 829270, 491746, 621809, 541945, 234654, 305342, 43544};
    int xFinish = 999907;
    int yFinish = 999979;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 625848826;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> X = {589449, 941015, 378081, 873438, 799630, 448992, 391157, 300837, 251280, 27046, 907007, 291748, 791804, 596474, 522259, 534844, 320434, 914667, 341096, 267191, 951312, 899292, 106890, 990619, 170044, 520211, 246681, 156495, 560142, 838937, 687741, 415364, 745121, 498183, 192663, 220622, 732124, 324394, 90839};
    vector<int> Y = {415970, 59799, 632086, 115273, 185344, 561079, 600319, 710443, 457271, 960543, 135155, 160272, 206353, 394591, 658479, 482088, 360016, 95196, 654149, 734557, 29264, 507950, 889629, 1909, 838749, 815268, 750537, 34803, 449816, 179087, 328432, 585726, 244103, 498197, 798228, 771306, 272148, 681851, 913819};
    vector<int> val = {6216, 20271, 3510, 538, 9352, 615, 10722, 24179, 7135, 10124, 5111, 18319, 1239, 2919, 13820, 23070, 2908, 16856, 16596, 19375, 19546, 11425, 10889, 15661, 16011, 15093, 15825, 4953, 12299, 7088, 13278, 5690, 7477, 4717, 6028, 11612, 8510, 10212, 17918};
    int xFinish = 999945;
    int yFinish = 999985;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 729331571;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X = {562484, 572335, 930617, 35512, 757865, 285506, 777183, 407043, 866, 348687, 181461, 223514, 137128, 707814, 450955, 864391, 312670, 124715, 882421, 835377, 510892, 281402, 362015, 689601, 784004, 995697, 389997, 40559, 739499, 485549, 460416, 613728, 121683, 89827, 353033, 245752, 662445, 156383, 633848};
    vector<int> Y = {459474, 433275, 460176, 264732, 253557, 700318, 445724, 364903, 985642, 657917, 808380, 771455, 852984, 833788, 548477, 153264, 667304, 874852, 109828, 159871, 497713, 448876, 958888, 311361, 218846, 14012, 596376, 877549, 275245, 660237, 507005, 124370, 154959, 903577, 857740, 763814, 212752, 605235, 370619};
    vector<int> val = {352574, 409004, 416927, 748408, 949168, 296747, 951922, 196430, 132084, 400641, 375615, 594525, 938044, 213090, 963803, 971391, 57071, 444135, 668422, 157423, 855035, 851503, 800298, 366672, 354331, 786872, 781868, 999653, 627131, 306511, 579990, 522364, 538916, 7953, 456608, 720442, 983752, 139626, 9707};
    int xFinish = 999922;
    int yFinish = 999962;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 592472856;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> X = {246355, 913650, 121889, 459997, 904421, 91211, 726751, 89179, 565257, 285731, 612511, 178352, 220798, 499027, 32189, 198241, 364077, 583548, 711838, 543548, 377283, 621173, 342333, 4038, 692822, 499882, 786050, 946799, 122573, 885156, 777567, 410218, 313296, 402289, 769000, 344651, 356366, 595355, 488762, 59324};
    vector<int> Y = {772464, 724062, 887464, 534345, 85873, 637063, 271591, 902844, 447374, 225412, 269983, 398820, 787959, 507927, 966791, 499504, 40233, 412802, 285436, 450636, 614599, 375183, 478304, 528205, 705667, 130672, 872330, 74766, 28107, 112683, 202288, 587753, 697872, 61138, 235659, 659964, 632338, 928704, 908197, 937110};
    vector<int> val = {6933, 11392, 9462, 4382, 16821, 15254, 23701, 23716, 17045, 20456, 1796, 20323, 10736, 23448, 16069, 3148, 20870, 11873, 16549, 2030, 23443, 9302, 9760, 1535, 2083, 14951, 24129, 5363, 276, 23384, 987, 15081, 5900, 16169, 17528, 6855, 12100, 14350, 12047, 20033};
    int xFinish = 999991;
    int yFinish = 999911;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 64095972;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> X = {913735, 883578, 805865, 378414, 409622, 775073, 960118, 147167, 806820, 904728, 123944, 260163, 546033, 940229, 171384, 190475, 589076, 574131, 464892, 644566, 718597, 838660, 560497, 984802, 713773, 379730, 491520, 624067, 234233, 684122, 500424, 669943, 10332, 441467, 784857, 655425, 314731, 32782, 98152, 523944};
    vector<int> Y = {435498, 114513, 714235, 663028, 588668, 814422, 200909, 853907, 183218, 99270, 891412, 730197, 466439, 64662, 847187, 861863, 417359, 425067, 539480, 354992, 285883, 168385, 477447, 18421, 990217, 608642, 518202, 396042, 753953, 302153, 871568, 333977, 976360, 570254, 202609, 629696, 696151, 951165, 918636, 475800};
    vector<int> val = {11, 218, 100, 157, 255, 282, 237, 79, 176, 7, 283, 141, 2, 21, 112, 35, 72, 245, 266, 46, 269, 147, 36, 144, 58, 54, 236, 46, 66, 20, 89, 171, 179, 58, 75, 76, 183, 48, 16, 168};
    int xFinish = 999935;
    int yFinish = 999995;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 199921091;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> X = {562912, 798566, 92566, 675965, 221237, 120576, 161709, 108687, 59100, 90478, 856809, 727417, 884568, 447036, 218000, 752103, 421664, 107163, 361041, 293637, 918227, 212081, 541947, 978367, 643432, 70860, 573236, 857109, 253445, 661193, 555694, 237948, 592875, 14602, 718811, 190056, 126314, 813281, 321654, 970481};
    vector<int> Y = {885068, 789330, 80359, 483255, 3629, 124228, 157884, 256577, 405098, 885922, 151646, 746494, 761467, 447056, 617226, 752834, 129336, 740603, 365632, 280406, 249733, 213831, 548454, 992272, 635434, 57229, 432418, 863788, 259328, 656861, 557668, 242703, 579179, 18047, 804036, 199714, 126508, 815636, 96382, 683817};
    vector<int> val = {283, 103, 219, 317, 316, 298, 332, 44, 205, 123, 279, 126, 178, 265, 111, 280, 105, 193, 259, 268, 316, 284, 13, 48, 192, 204, 140, 251, 310, 173, 304, 319, 320, 181, 208, 235, 283, 152, 313, 301};
    int xFinish = 999984;
    int yFinish = 999976;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 858490006;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> X = {5, 3, 4, 10, 4, 2, 2, 9, 9, 2, 4, 2, 3, 9, 1, 1, 8, 8, 9, 7, 9, 3, 6, 8, 4, 9, 6, 9, 5, 1, 2, 5, 9, 5, 4, 2, 3, 9, 10, 3};
    vector<int> Y = {7, 6, 9, 1, 5, 4, 5, 9, 7, 2, 8, 10, 9, 4, 1, 6, 7, 1, 2, 5, 10, 7, 1, 10, 1, 3, 2, 1, 4, 8, 6, 2, 6, 8, 4, 8, 1, 8, 9, 3};
    vector<int> val = {5, 6, 5, 3, 3, 7, 3, 6, 3, 1, 8, 5, 8, 2, 8, 4, 6, 6, 7, 2, 3, 2, 4, 2, 7, 5, 4, 8, 5, 2, 7, 1, 7, 2, 4, 4, 6, 5, 6, 6};
    int xFinish = 10;
    int yFinish = 10;
    int K = 4;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1525;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> X = {3, 4, 5, 3, 5, 9, 5, 6, 126, 4, 1, 3, 8, 2, 6, 10, 7, 9, 9, 7, 2, 8, 5, 8, 9, 7, 6, 7, 7, 10, 9, 4, 1, 4, 2, 3, 10, 3, 8};
    vector<int> Y = {2, 7, 5, 10, 4, 2, 10, 9, 8, 4, 1, 1, 5, 10, 4, 5, 1, 8, 7, 10, 7, 10, 9, 1, 1, 7, 6, 5, 9, 2, 3, 10, 8, 9, 8, 8, 7, 6, 9};
    vector<int> val = {6, 1, 7, 4, 1, 4, 4, 7, 3, 2, 6, 1, 7, 2, 8, 1, 8, 3, 1, 8, 4, 5, 1, 4, 6, 4, 1, 8, 3, 7, 7, 2, 2, 5, 7, 6, 5, 6, 8};
    int xFinish = 7;
    int yFinish = 11;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 165003;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> X = {9, 9, 3, 8, 5, 2, 7, 10, 3, 10, 8, 5, 9, 6, 7, 5, 1, 4, 10, 612, 7, 10, 6, 8, 2, 7, 3, 5, 9, 9, 4, 7, 9, 1, 10, 1, 3, 9, 8, 6};
    vector<int> Y = {7, 5, 6, 4, 1, 4, 1, 4, 1, 8, 10, 2, 1, 6, 6, 4, 10, 6, 1, 8, 3, 7, 3, 7, 5, 10, 2, 7, 4, 6, 11940, 9, 2, 8, 6, 9, 7, 10, 2, 10};
    vector<int> val = {6, 2, 7, 7, 5, 3, 4, 2, 6, 5, 7, 8, 1, 6, 8, 3, 8, 7, 8, 8, 6, 5, 7, 7, 1, 1, 4, 1, 1, 8, 6, 6, 4, 4, 4, 3, 8, 2, 6, 5};
    int xFinish = 8;
    int yFinish = 11;
    int K = 3;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> X = {9, 7, 5, 3, 9, 6, 8, 1, 3, 408, 7, 7, 8, 1, 5, 5, 6, 8, 5, 8, 9, 7, 4, 7, 3, 3, 4, 4, 10, 6, 1, 2, 10, 10, 2, 3, 7, 2, 1, 1};
    vector<int> Y = {8, 8, 4, 10, 1, 1, 9, 4, 4, 10, 10, 1, 6, 3, 3, 2, 3, 5, 6, 921, 6, 7, 4, 3, 8, 6, 6, 9, 10, 6, 1, 1, 7, 1, 4, 3, 4, 8, 9, 2};
    vector<int> val = {3, 3, 2, 1, 4, 3, 3, 4, 2, 6, 4, 4, 8, 4, 8, 4, 4, 2, 1, 8, 8, 5, 4, 7, 8, 5, 5, 7, 7, 6, 8, 5, 3, 4, 2, 6, 4, 4, 8, 4};
    int xFinish = 10;
    int yFinish = 9;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20559;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> X = {10, 9, 5, 10, 8, 3, 2, 10, 7, 4, 6, 5, 8, 9, 2, 3, 9, 6, 1, 7, 10, 5, 10, 2, 3, 7, 7, 2, 1, 1, 4, 4, 5, 7, 6, 4, 9, 8, 9, 1};
    vector<int> Y = {6, 1, 9, 8, 7, 557, 9, 2, 10, 2, 9, 10, 1, 7, 8, 4, 4, 1, 1, 6, 1828, 6, 9, 2, 5, 9, 3, 7, 3, 9, 10, 6, 1, 5, 5, 5, 6, 10, 10, 7};
    vector<int> val = {6, 3, 3, 125, 7, 1, 2, 5, 2, 5, 7, 2, 6, 6, 2, 7, 5, 13, 2, 5, 3, 8, 4, 3, 7, 3, 8, 8, 6, 2, 5, 1, 7, 1, 1, 2, 2, 1, 2, 7};
    int xFinish = 9;
    int yFinish = 9;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 124604;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> X = {4, 1, 3, 1, 4, 4, 2, 3, 2, 5, 2};
    vector<int> Y = {5, 5, 2, 2, 1, 2, 1, 4, 5, 2, 4};
    vector<int> val = {1, 2, 1, 3, 2, 1, 4, 1, 3, 2, 1};
    int xFinish = 4;
    int yFinish = 6;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1532;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> X = {3, 4, 5, 5, 2, 2, 2, 4, 3, 4, 2, 3, 5};
    vector<int> Y = {3, 4, 5, 2, 2, 3, 5, 5, 5, 1, 1, 2, 4};
    vector<int> val = {1, 3, 2, 4, 3, 4, 4, 4, 2, 2, 1, 4, 1};
    int xFinish = 5;
    int yFinish = 6;
    int K = 4;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> X = {2, 4, 5, 2, 1, 2, 5, 2, 5, 3, 5, 3, 1, 1, 3, 1, 3, 2};
    vector<int> Y = {1, 2, 3, 3, 4, 2, 5, 5, 2, 3, 4, 2, 2, 5, 5, 1, 4, 4};
    vector<int> val = {4, 1, 4, 2, 1, 3, 2, 3, 4, 2, 2, 2, 2, 1, 2, 4, 3, 4};
    int xFinish = 6;
    int yFinish = 6;
    int K = 7;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3731;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> X = {4, 3, 3, 4, 1, 1, 5, 2, 2, 4, 4, 1, 3};
    vector<int> Y = {4, 5, 3, 1, 2, 1, 2, 4, 2, 5, 2, 4, 1};
    vector<int> val = {2, 2, 2, 2, 2, 2, 4, 3, 2, 3, 2, 2, 3};
    int xFinish = 3;
    int yFinish = 4;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> X = {5, 4, 4, 4, 3, 1, 2, 1, 3, 2, 2, 5, 4, 1, 1};
    vector<int> Y = {4, 3, 2, 4, 1, 3, 4, 5, 4, 2, 3, 3, 1, 1, 4};
    vector<int> val = {4, 2, 3, 1, 3, 1, 2, 2, 4, 3, 1, 4, 2, 3, 2};
    int xFinish = 6;
    int yFinish = 5;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2389;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> X = {9659, 8617, 1604, 9963, 6562, 34, 7685, 7117};
    vector<int> Y = {1718, 6937, 511, 6564, 1303, 9838, 7071, 4327};
    vector<int> val = {850, 946, 32, 828, 985, 920, 772, 917};
    int xFinish = 8602;
    int yFinish = 7050;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 655356775;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> X = {1998, 6361, 8370, 9816, 5473, 9603};
    vector<int> Y = {9314, 7554, 8887, 7020, 8353, 7227};
    vector<int> val = {101, 835, 360, 573, 76, 478};
    int xFinish = 9956;
    int yFinish = 9854;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 656520256;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> X = {5743, 133, 198, 3148, 7040, 3269, 4684, 2079, 6121, 873, 6693, 9187, 783, 7338, 6888, 6911, 9468};
    vector<int> Y = {3791, 3761, 1598, 9881, 4282, 8093, 7138, 5005, 6549, 5495, 5955, 5851, 3001, 4136, 5896, 4317, 5710};
    vector<int> val = {254, 461, 426, 867, 45, 8, 576, 868, 312, 588, 132, 376, 492, 712, 607, 994, 236};
    int xFinish = 7314;
    int yFinish = 9655;
    int K = 2;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> X = {8218, 1272, 571, 8782, 7376, 2007, 6041, 210, 8675, 736, 2927, 5469};
    vector<int> Y = {1913, 3352, 9702, 362, 2241, 4331, 5786, 4600, 5488, 6050, 8737, 1446};
    vector<int> val = {476, 976, 162, 157, 529, 859, 433, 728, 703, 196, 924, 973};
    int xFinish = 7149;
    int yFinish = 8557;
    int K = 7;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 44748623;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> X = {3733, 6771, 3661, 9169, 7886, 4023, 2133, 3636, 1859, 3046, 4661, 2845, 8012, 1911, 7110, 9044, 6450, 9859, 9695, 8578, 2780};
    vector<int> Y = {6739, 5444, 6989, 2197, 9817, 6201, 87, 733, 6406, 2754, 1364, 453, 1137, 4007, 7564, 5750, 6195, 3489, 7974, 8760, 9875};
    vector<int> val = {278, 167, 991, 121, 5, 79, 896, 385, 261, 78, 133, 877, 878, 588, 351, 170, 663, 368, 373, 90, 184};
    int xFinish = 8997;
    int yFinish = 8735;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 400099365;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> X = {7626, 4482, 3162, 4435, 3713, 7516, 9232, 219, 1555, 1519, 1788, 3832, 679, 6131, 886, 6497, 7110, 4719, 3399, 8078, 7176, 9116, 7879, 5640, 5892, 913};
    vector<int> Y = {3080, 4917, 5594, 2147, 9487, 9683, 5397, 2963, 7051, 9523, 8785, 4129, 116, 6829, 2692, 1126, 2577, 6826, 2089, 9161, 7595, 4514, 9350, 9891, 569, 1852};
    vector<int> val = {439, 948, 482, 499, 434, 247, 510, 406, 828, 863, 996, 130, 805, 492, 981, 206, 19, 78, 496, 858, 729, 947, 118, 720, 229, 334};
    int xFinish = 8631;
    int yFinish = 7978;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 927211039;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> X = {1643, 3876, 4385, 8218, 554, 8115, 872, 4672, 2632, 7471, 1002, 751, 7484, 7184, 5310, 5631, 2991, 141, 4045, 5976, 8504, 2639, 5343, 993, 9920, 6157, 6747, 9698, 5758, 7904, 9161, 9412, 2443, 8943, 515};
    vector<int> Y = {2141, 8704, 7957, 1169, 9980, 2929, 1473, 2702, 7107, 1481, 9729, 6063, 6810, 9823, 3581, 2329, 1066, 3548, 1647, 1894, 6299, 7287, 9037, 8430, 2388, 3593, 5263, 8, 6013, 1418, 3566, 8573, 6496, 3649, 4177};
    vector<int> val = {738, 663, 554, 218, 555, 862, 421, 802, 807, 357, 471, 598, 525, 637, 848, 903, 710, 165, 191, 525, 201, 830, 981, 127, 751, 167, 993, 325, 560, 329, 356, 640, 387, 427, 357};
    int xFinish = 8431;
    int yFinish = 7808;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 941758339;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> X = {4450, 9671, 4930, 6551, 750, 2563, 4358, 5707, 7450, 9966, 4407, 8634, 2574, 4271, 7885, 2796, 2099, 2495, 7808, 3992, 8625, 4934, 6742, 5783, 4159, 1915, 9914, 9024, 902, 9734, 5618, 7164, 1149, 2481, 8231, 2371, 1837};
    vector<int> Y = {9153, 7614, 8869, 8212, 8593, 9570, 5907, 5957, 4219, 526, 8024, 3643, 3321, 7115, 8092, 2093, 3521, 6896, 9878, 7651, 6987, 3398, 4703, 134, 272, 4516, 2430, 4942, 4920, 4435, 2908, 2498, 4074, 5370, 8416, 6379, 4510};
    vector<int> val = {987, 183, 202, 969, 11, 853, 758, 602, 72, 438, 2, 817, 10, 153, 959, 462, 544, 623, 852, 675, 731, 768, 322, 878, 466, 611, 41, 759, 302, 953, 144, 583, 910, 17, 184, 438, 827};
    int xFinish = 8055;
    int yFinish = 8722;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 42183488;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> X = {7161, 6058, 3917, 7428, 9140, 1017, 3934, 9415, 9578, 415, 4309, 8975, 8897, 3749, 7098, 5905, 2849, 5027, 7412, 9576, 9683, 7840, 9196, 5402, 5055, 180, 5929, 1599, 460, 8953, 3236, 4336, 2930, 3989, 8485, 629, 363, 5440, 3667, 5333};
    vector<int> Y = {8745, 5806, 258, 6627, 8466, 581, 358, 2868, 6607, 4782, 5498, 1346, 743, 6416, 4485, 7238, 5795, 1027, 4576, 9831, 4875, 4528, 3602, 2382, 7286, 8447, 5412, 8211, 8396, 4551, 4318, 3629, 4183, 4433, 583, 8708, 7820, 8165, 1911, 722};
    vector<int> val = {900, 737, 509, 346, 734, 811, 535, 571, 54, 441, 187, 636, 547, 131, 256, 828, 718, 984, 599, 996, 351, 329, 367, 548, 637, 621, 857, 11, 721, 797, 828, 506, 338, 952, 337, 416, 849, 23, 928, 789};
    int xFinish = 9086;
    int yFinish = 9984;
    int K = 3;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 57206;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> X = {8010, 3959, 1276, 2651, 9272, 3535, 8845, 4195, 4056, 8342, 7131, 2615, 9682, 7861, 1838, 6815, 5725, 1139, 191, 8642, 3474, 6697, 3526, 8793, 2745, 5359, 8778, 8891, 1928, 4876, 1331, 9777, 1562, 9593, 9003, 2866, 8341, 6397, 5976};
    vector<int> Y = {1274, 3192, 3723, 9071, 5608, 1738, 1504, 6375, 5505, 885, 1196, 548, 7311, 914, 1288, 4591, 919, 2233, 8892, 4575, 6740, 2257, 3631, 2733, 6396, 546, 3882, 2512, 5127, 7317, 3684, 6113, 4286, 4754, 6454, 4663, 7081, 4384, 6807};
    vector<int> val = {638, 889, 768, 437, 895, 152, 837, 271, 830, 459, 659, 881, 130, 57, 747, 738, 348, 83, 21, 627, 876, 681, 976, 267, 33, 362, 165, 603, 707, 855, 683, 571, 835, 679, 427, 938, 681, 107, 420};
    int xFinish = 9267;
    int yFinish = 8218;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 614964141;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> X = {219943};
    vector<int> Y = {236155};
    vector<int> val = {26150};
    int xFinish = 950003;
    int yFinish = 972615;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 984898896;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> X = {174359, 745397};
    vector<int> Y = {906340, 121120};
    vector<int> val = {16842, 84558};
    int xFinish = 836208;
    int yFinish = 748003;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 304999876;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> X = {321314, 189379};
    vector<int> Y = {226756, 889833};
    vector<int> val = {15091, 41677};
    int xFinish = 979618;
    int yFinish = 924895;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 482196103;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> X = {715695, 975292, 26169, 115774, 284310, 506274, 29557, 892439, 113572, 179020, 359171, 769712};
    vector<int> Y = {288025, 673646, 998418, 3848, 753529, 222607, 453132, 872338, 622282, 93055, 848610, 558214};
    vector<int> val = {25092, 94347, 55875, 88572, 67162, 5812, 47831, 41426, 49913, 8501, 17329, 2188};
    int xFinish = 829476;
    int yFinish = 729122;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 310208388;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> X = {613254, 42781, 75293, 776253, 255355, 846900, 1806, 381584, 975286, 323280, 382850, 289219, 332656, 180009, 767744, 44703, 455201, 560198, 793265};
    vector<int> Y = {144487, 577689, 884611, 737016, 834033, 172584, 394607, 132280, 927372, 240022, 288775, 88034, 686943, 892186, 109844, 326766, 343123, 640205, 443517};
    vector<int> val = {84731, 50754, 7427, 88350, 94822, 96724, 21044, 38069, 52972, 62271, 68076, 51202, 70740, 62219, 41667, 9803, 99927, 85471, 46224};
    int xFinish = 973033;
    int yFinish = 793447;
    int K = 2;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> X = {7584, 323463, 686859, 126351, 526445, 144479, 51285, 604131, 246242, 653149, 557156, 790634, 136792, 299706};
    vector<int> Y = {576668, 754484, 292203, 751426, 271804, 174321, 159085, 343328, 731838, 964991, 486734, 619756, 878987, 119093};
    vector<int> val = {29535, 20221, 36208, 46534, 24397, 1019, 94182, 81706, 77016, 98435, 32660, 66517, 47335, 34926};
    int xFinish = 990998;
    int yFinish = 838036;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 416624552;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> X = {619771, 284027, 837100, 430603, 30455, 771077, 729052, 956599, 808120, 609842, 307996, 111042, 61766, 638921, 272500, 912756, 571575, 609267, 323374, 369076, 234614, 43575, 611039};
    vector<int> Y = {8638, 490755, 994036, 405001, 354798, 97556, 774188, 681729, 728253, 597457, 28223, 475633, 805922, 46674, 87269, 865314, 744934, 84320, 218661, 981579, 474784, 888643, 510551};
    vector<int> val = {7095, 28206, 5919, 16528, 59270, 22464, 71900, 26558, 2302, 35209, 65645, 30031, 92855, 42368, 45915, 6267, 53752, 87390, 32285, 41593, 28649, 45946, 95676};
    int xFinish = 785449;
    int yFinish = 824039;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 873914108;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> X = {824601, 394370, 143316, 967256, 618232, 622582, 710068, 180987, 118390, 27750, 740014, 494679, 660235, 306459, 75, 274035, 384462, 326861, 792946, 980503, 477976, 593699, 167900, 533165, 825872};
    vector<int> Y = {721955, 453325, 13103, 258877, 825182, 872143, 415071, 616755, 304945, 776279, 328452, 734875, 216085, 991390, 528053, 915726, 360546, 220075, 138090, 192356, 84623, 761831, 294477, 256084, 58324};
    vector<int> val = {59678, 46130, 1616, 51945, 52351, 77085, 79788, 76157, 96467, 8984, 80214, 32269, 22994, 15132, 95479, 44531, 24483, 73617, 16998, 67221, 9855, 41774, 92252, 15627, 25725};
    int xFinish = 728220;
    int yFinish = 985623;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 548419256;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> X = {892899, 193574, 930922, 40474, 615175, 238868, 21689, 920098, 540079, 356755, 718856, 952856, 137731, 247182, 812832, 819348, 344540, 963979, 739800, 439232, 430258};
    vector<int> Y = {524929, 264942, 455094, 703666, 762524, 244485, 481282, 854920, 509446, 924586, 369016, 565832, 881478, 330738, 353600, 739928, 53477, 819991, 104787, 51168, 107178};
    vector<int> val = {60763, 4671, 13964, 38344, 93289, 26764, 65424, 95610, 16128, 14992, 1096, 29662, 58664, 93874, 23405, 51308, 15528, 60923, 8727, 99406, 70008};
    int xFinish = 972257;
    int yFinish = 884836;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 668946916;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> X = {346457, 71193, 409550, 625400, 955321, 919323, 663753, 279042, 381740, 328029, 923986, 185482, 35593, 546840, 434833, 791254, 952505, 24003, 52336, 535839, 889348, 396919, 858964, 243868, 352497, 56939, 840024, 352213, 73016, 929688, 281410, 902356, 929251, 993350, 615370, 898527, 455591, 552044, 398377};
    vector<int> Y = {193197, 973770, 217906, 474641, 464823, 967800, 978300, 751790, 149134, 746385, 693678, 400161, 357146, 372045, 189409, 880691, 204946, 86419, 805596, 333867, 929375, 56843, 301064, 384306, 656920, 501983, 554365, 857584, 203862, 119876, 724258, 4908, 676369, 625221, 427744, 714510, 172432, 16936, 502014};
    vector<int> val = {39921, 33868, 71852, 62586, 50738, 10003, 401, 37940, 9225, 93134, 75000, 81087, 25646, 17286, 75338, 83906, 38426, 79874, 39518, 96742, 74501, 3771, 21773, 49586, 79718, 64345, 78782, 49839, 46806, 65219, 34138, 37444, 23676, 3937, 48985, 27866, 93377, 68125, 89778};
    int xFinish = 751505;
    int yFinish = 814700;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 481741132;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> X = {291339, 150117, 714197, 124839, 596795, 386245, 901693, 596590, 510824, 90256, 164893, 294091, 143241, 930077, 668733, 388406, 235255, 945413, 791814, 241416, 91994, 352543, 889888, 197817, 999881, 929924, 629042, 110800, 77660, 734491, 465717, 709221, 421244, 667773, 205712, 53170, 580241, 907650};
    vector<int> Y = {934060, 635164, 897726, 104696, 354982, 564809, 555252, 423391, 605303, 560058, 26909, 621175, 9014, 785559, 510800, 971416, 51787, 666377, 408214, 530345, 865407, 379944, 817159, 948467, 672522, 898379, 260826, 202126, 731252, 485483, 62855, 791057, 140723, 422607, 517063, 982116, 524002, 97504};
    vector<int> val = {19619, 80455, 12346, 81936, 63186, 87755, 27178, 56997, 578, 83597, 13687, 82612, 9962, 26583, 24761, 30709, 83427, 66063, 84903, 10977, 36373, 29, 42794, 5024, 71847, 5546, 99049, 67449, 90673, 64925, 29133, 74661, 17421, 41600, 18318, 556, 56656, 41736};
    int xFinish = 702710;
    int yFinish = 815132;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 293175085;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> X = {495664, 405479, 605173, 630079, 466797, 629770, 89735, 623303, 410530, 982917, 533406, 312706, 474472, 959773, 913569, 316007, 926951, 567517, 573928, 588958, 326630, 54570, 211261, 627056, 329117, 846239, 534389, 288725, 797509, 876514, 194235, 853156, 210230, 850955, 490293, 919814, 970151, 852243, 638203, 323090};
    vector<int> Y = {118532, 297685, 979759, 69908, 910392, 492626, 656109, 83371, 302766, 50975, 377785, 879421, 693711, 689109, 625788, 260213, 642674, 493404, 317838, 643080, 142751, 471371, 292982, 846145, 627536, 442618, 798540, 712710, 356571, 537891, 760826, 66895, 136056, 109467, 490693, 858053, 481232, 322061, 22631, 82832};
    vector<int> val = {47330, 31297, 59089, 13086, 71368, 34115, 21526, 80318, 34970, 1167, 6772, 8308, 42641, 71518, 73650, 15561, 78917, 86391, 37544, 83093, 89981, 97411, 87472, 39951, 81553, 4825, 71520, 66112, 97722, 43618, 67376, 44015, 83968, 51942, 22105, 42549, 85338, 6620, 89795, 84794};
    int xFinish = 879583;
    int yFinish = 916208;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 725667510;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> X = {209003, 270395, 70872, 886275, 749490, 340447, 228776, 614671, 899658, 932307, 743735, 229944, 498108, 705438, 497114, 233556, 490288, 290297, 519356, 825387, 426477, 134987, 767667, 733846, 955452, 592397, 422007, 476173, 26324, 494646, 261185, 393623, 234830, 324559, 293097, 671133, 392305, 310240};
    vector<int> Y = {989641, 772993, 307107, 751787, 345020, 311563, 809620, 917203, 276298, 928399, 997293, 158880, 120907, 744164, 532917, 185643, 154089, 219459, 900773, 401660, 276169, 288244, 150084, 620714, 7174, 655485, 442652, 144478, 73093, 126217, 871682, 734047, 26145, 334942, 409792, 450598, 774000, 261877};
    vector<int> val = {72433, 68196, 17057, 55921, 98051, 65016, 35446, 45048, 91834, 831, 86829, 95390, 26703, 13410, 60702, 7643, 57081, 85960, 75344, 87512, 23201, 76170, 90955, 91725, 15774, 20752, 85272, 74625, 91385, 25089, 96143, 61421, 77753, 55349, 93815, 41273, 76231, 61878};
    int xFinish = 856560;
    int yFinish = 867206;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8775553;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> X = {184138, 223146, 909605, 15235, 50340, 307480, 500647, 810424, 13484, 951842, 364594, 867925, 260585, 638447, 460191, 765585, 884787, 1688, 409461, 55940, 569795, 12724, 607149, 162487, 299185, 86908, 427055, 252530, 38309, 861800, 129266, 798716, 831349, 102111, 585119, 163182, 991564, 139369};
    vector<int> Y = {905419, 466587, 705753, 607244, 723486, 520300, 161177, 294777, 154568, 678035, 249211, 441592, 925938, 596935, 566474, 73216, 273811, 655105, 776652, 887177, 46100, 693576, 983145, 889645, 862796, 839717, 555658, 353745, 979364, 934544, 200647, 213728, 313187, 79296, 370231, 911280, 581090, 850686};
    vector<int> val = {98422, 35120, 32289, 379, 2725, 47848, 31569, 40948, 8709, 82287, 495, 70600, 57103, 25038, 82595, 21871, 30858, 12332, 45300, 71027, 36943, 16818, 75994, 23705, 38645, 21272, 48190, 65308, 50581, 76389, 49608, 98849, 3591, 42273, 83503, 22275, 74578, 97829};
    int xFinish = 854257;
    int yFinish = 729176;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 537153335;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> X = {612473, 356105, 100609, 183907, 250004, 137055, 134434, 722269, 359113, 430557, 854856, 110412, 772879, 547018, 266236, 624278, 484830, 471535, 410421, 129300, 61360, 122083, 482252, 451021, 70922, 638495, 504489, 188953, 250551, 948923, 615939, 340194, 759229, 483470, 395763, 624990, 406596, 543056, 612416, 474549};
    vector<int> Y = {268248, 918494, 726249, 984343, 296312, 438324, 462725, 435415, 657021, 658444, 321695, 303220, 46268, 360125, 559426, 12119, 334431, 809600, 46644, 931208, 788206, 49469, 891917, 843854, 429073, 958987, 421447, 992386, 503502, 438050, 100791, 179115, 815776, 514779, 990232, 347330, 341149, 514270, 735647, 492415};
    vector<int> val = {68608, 24288, 30821, 64217, 8202, 51785, 69326, 98593, 47681, 2335, 49, 64225, 21101, 5864, 28885, 15025, 76280, 87164, 37171, 92968, 57976, 60100, 9587, 31887, 97877, 90231, 88732, 5917, 1752, 2783, 28775, 86779, 98264, 94801, 46715, 368, 85262, 46151, 12993, 80645};
    int xFinish = 999286;
    int yFinish = 952033;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 422290470;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> X = {58578, 500951, 15609, 897258, 825520, 468406, 569912, 227961, 313808, 23300, 405781, 150437, 676984, 649866, 489784, 34820, 584563, 530736, 409768, 156382, 241655, 989709, 87342, 414044, 604125, 214858, 46705, 592134, 59196, 772478, 852362, 519507, 638253, 584402, 53089, 681627, 16343, 465005, 894061};
    vector<int> Y = {341801, 339057, 105794, 517691, 323807, 113266, 598846, 259250, 134511, 81100, 771026, 511870, 142692, 984168, 916581, 663240, 939812, 996574, 150496, 21032, 190280, 996613, 472010, 207445, 207751, 258054, 809692, 371159, 604873, 344472, 637086, 515800, 315816, 578612, 785095, 377405, 720394, 725730, 57247};
    vector<int> val = {82563, 26288, 48488, 91956, 23107, 98198, 14612, 60374, 87545, 53345, 9682, 78758, 48749, 57366, 90009, 13903, 14246, 11039, 44018, 64423, 70364, 15492, 58836, 42854, 25465, 45933, 648, 84486, 51666, 21025, 38950, 87612, 1650, 31304, 97621, 10211, 53407, 29035, 87358};
    int xFinish = 857705;
    int yFinish = 830514;
    int K = 7;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 978721467;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> X = {890887, 691609, 853744, 959289, 490408, 653921, 803295, 511424, 404549, 26356, 571191, 633804, 154325, 568919, 189070, 160277, 120400, 354373, 345980, 621300, 922416, 771891, 626538, 392993, 599162, 441788, 867136, 806819, 956217, 243478, 120629, 288995, 13331, 125753, 611105, 542920, 125552, 41631, 674958};
    vector<int> Y = {662689, 921138, 446520, 915822, 511169, 840180, 16748, 172531, 757671, 915994, 98929, 983079, 419498, 323451, 316736, 55475, 906851, 178816, 273617, 205199, 538681, 719792, 935755, 273394, 196757, 591044, 331382, 100645, 520142, 669124, 86907, 784255, 994813, 288391, 569410, 576953, 598346, 978853, 768034};
    vector<int> val = {49848, 99719, 81519, 78808, 88571, 87366, 22683, 70223, 56125, 51011, 26802, 8880, 89207, 4325, 36956, 36674, 55520, 44757, 97314, 2941, 13937, 18970, 95596, 95179, 17457, 29165, 63601, 3922, 20169, 84038, 68122, 13578, 83201, 3724, 71230, 12796, 80480, 78440, 67846};
    int xFinish = 804298;
    int yFinish = 799574;
    int K = 7;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 381720028;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> X = {4, 12, 8, 100, 67, 53, 28, 24, 57, 19, 69, 44, 91, 84, 11, 72, 52, 88, 7, 63, 42, 36, 25, 94, 29, 24, 12, 12, 2, 99, 69, 50, 29, 98, 83, 24, 17};
    vector<int> Y = {633470, 970465, 885641, 190764, 23317, 904640, 34336, 652555, 667770, 814732, 95763, 929523, 579128, 248510, 442169, 488573, 728917, 449774, 388746, 394384, 468601, 515875, 898528, 301269, 684621, 842166, 97088, 151171, 603961, 76766, 33301, 998067, 261140, 413828, 572645, 185725, 479206};
    vector<int> val = {18262, 26599, 39551, 47060, 55519, 11016, 63833, 66319, 77436, 93085, 16229, 37784, 78339, 9797, 55361, 69015, 7628, 38251, 82267, 91016, 53436, 19189, 31153, 61501, 288, 60916, 19834, 13844, 3110, 92236, 14171, 35720, 36152, 33538, 68225, 37130, 9598};
    int xFinish = 39;
    int yFinish = 603255;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 299526634;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> X = {52, 8, 65, 12, 55, 65, 87, 14, 30, 91, 84, 10, 28, 55, 45, 72, 30, 84, 73, 31, 95, 11, 69, 88, 60, 92, 25, 70, 60, 98, 4, 86, 24, 77, 39, 15, 12, 79, 97};
    vector<int> Y = {822546, 348735, 732654, 246680, 745994, 662184, 297830, 49423, 31120, 214731, 148359, 241021, 815899, 455875, 749610, 545291, 87972, 130566, 878039, 258113, 20818, 576812, 163541, 596854, 332302, 816590, 275101, 60547, 670288, 421492, 793782, 818335, 391327, 339237, 812633, 571971, 699043, 672074, 87565};
    vector<int> val = {34909, 75407, 32673, 68899, 77319, 67312, 53441, 13730, 4580, 72868, 87339, 68032, 32505, 60559, 25472, 69115, 45113, 24478, 57005, 14834, 33696, 81210, 5843, 16827, 23785, 68529, 78894, 44028, 18749, 61162, 6115, 89902, 68637, 16339, 24319, 77955, 85865, 51867, 88608};
    int xFinish = 59;
    int yFinish = 936220;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 659310184;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> X = {459477, 52810, 827723, 871458, 704205, 885566, 797258, 815917, 608834, 911197, 422756, 516703, 109725, 169648, 549070, 63393, 854710, 943663, 304882, 509866, 931155, 450561, 333496, 350931, 572431, 92783, 924807, 396067, 895456, 635440, 50648, 483443, 284015, 706333, 533379, 262251, 422515, 655085, 875711};
    vector<int> Y = {20, 1, 20, 34, 4, 52, 85, 4, 88, 61, 14, 49, 35, 15, 62, 58, 46, 78, 2, 42, 28, 12, 69, 55, 47, 98, 28, 93, 8, 3, 10, 57, 89, 72, 92, 55, 74, 24, 46};
    vector<int> val = {31874, 47320, 2563, 96052, 83378, 54297, 21257, 43259, 39389, 20294, 48018, 27486, 67255, 90551, 15018, 86528, 12799, 23987, 75252, 64266, 63507, 87424, 39093, 20308, 46866, 56294, 13012, 93195, 7686, 37848, 52539, 2575, 35182, 18565, 89091, 49847, 28836, 21465, 23648};
    int xFinish = 784976;
    int yFinish = 67;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 916020420;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> X = {369058, 498005, 926403, 73635, 955598, 184691, 101572, 502565, 49922, 609575, 27384, 161657, 799685, 266025, 259416, 736390, 106223, 14528, 431595, 855781, 211769, 677765, 862938, 289246, 594235, 905215, 555980, 576280, 765612, 306727, 84058, 657308, 682165, 68709, 738972, 851633, 924366};
    vector<int> Y = {47, 70, 34, 28, 19, 39, 32, 30, 20, 76, 75, 59, 71, 72, 60, 88, 48, 84, 94, 1, 2, 83, 6, 77, 46, 94, 56, 97, 75, 16, 3, 16, 78, 78, 91, 75, 58};
    vector<int> val = {44202, 67828, 43274, 49340, 1350, 55505, 20457, 77110, 61440, 89157, 85887, 117, 20516, 56676, 37652, 87893, 89346, 36290, 75598, 7259, 77813, 89461, 94828, 48205, 57672, 54147, 9783, 51081, 71971, 73847, 4056, 26630, 38002, 61201, 91057, 38378, 73139};
    int xFinish = 850709;
    int yFinish = 37;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 516385218;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> X = {11, 12, 8, 5, 13, 8, 15, 10, 6, 9, 11, 9, 7, 1, 3, 11, 3, 2, 12, 2, 8, 12, 14, 14, 4, 2, 2, 10, 15, 10, 8, 14, 7, 10, 6, 12, 8};
    vector<int> Y = {3, 14, 7, 14, 5, 3, 2, 9, 13, 1, 9, 6, 2, 5, 3, 15, 4, 14, 6, 15, 11, 2, 13, 9, 11, 11, 4, 3, 6, 1, 1, 11, 13, 13, 4, 11, 13};
    vector<int> val = {1, 1, 6, 5, 2, 2, 4, 2, 6, 7, 3, 4, 6, 6, 6, 7, 9, 2, 9, 8, 9, 9, 3, 7, 6, 5, 2, 5, 9, 7, 6, 9, 3, 6, 5, 5, 7};
    int xFinish = 15;
    int yFinish = 15;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 402855527;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> X = {15, 2, 4, 10, 3, 15, 2, 13, 11, 6, 9, 7, 13, 6, 4, 6, 8, 9, 15, 1, 7, 3, 15, 8, 10, 9, 14, 6, 5, 9, 6, 7, 5, 5, 7, 12, 8, 4, 10};
    vector<int> Y = {3, 5, 5, 15, 15, 7, 9, 2, 7, 6, 1, 10, 14, 9, 1, 13, 4, 6, 1, 7, 6, 1, 2, 2, 12, 7, 12, 8, 11, 5, 15, 14, 14, 7, 2, 4, 13, 12, 5};
    vector<int> val = {5, 1, 4, 7, 3, 3, 8, 8, 4, 4, 3, 8, 4, 2, 5, 6, 1, 3, 9, 8, 1, 2, 4, 2, 8, 6, 5, 9, 7, 6, 9, 7, 6, 3, 7, 9, 9, 2, 4};
    int xFinish = 17;
    int yFinish = 16;
    int K = 4;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2724;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> X = {4, 8, 1, 13, 1, 12, 2, 14, 7, 10, 8, 7, 1, 15, 9, 11, 3, 5, 9, 3, 11, 11, 10, 4, 3, 4, 13, 10, 3, 2, 15, 6, 1, 9, 11, 13, 12, 4, 1};
    vector<int> Y = {13, 2, 10, 14, 9, 2, 1, 3, 11, 9, 1, 14, 3, 8, 7, 5, 10, 15, 10, 14, 3, 2, 3, 3, 7, 4, 12, 15, 13, 4, 14, 9, 8, 8, 8, 7, 5, 14, 2};
    vector<int> val = {1, 3, 8, 5, 8, 1, 1, 4, 3, 1, 2, 4, 1, 4, 8, 9, 5, 9, 1, 6, 1, 5, 6, 1, 3, 6, 9, 2, 1, 9, 8, 1, 1, 3, 6, 8, 6, 6, 6};
    int xFinish = 16;
    int yFinish = 12;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 242764081;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> X = {13, 7, 9, 2, 2, 7, 11, 6, 13, 1, 6, 4, 3, 1, 5, 10, 2, 1, 14, 5, 14, 3, 5, 11, 3, 11, 8, 13, 15, 11, 11, 15, 3, 8, 9, 12, 5};
    vector<int> Y = {1, 13, 7, 4, 3, 4, 11, 7, 7, 4, 3, 4, 7, 12, 7, 14, 7, 10, 3, 4, 6, 11, 5, 10, 1, 2, 8, 15, 10, 14, 8, 12, 4, 4, 11, 3, 10};
    vector<int> val = {1, 4, 1, 7, 7, 7, 9, 3, 8, 4, 2, 8, 8, 8, 3, 9, 4, 7, 5, 3, 6, 6, 7, 7, 3, 1, 2, 6, 3, 8, 2, 9, 7, 3, 5, 5, 9};
    int xFinish = 14;
    int yFinish = 15;
    int K = 4;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2202;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> X = {1, 5, 1, 9, 4, 8, 3, 7, 5, 11, 8, 12, 13, 9, 1, 2, 12, 15, 11, 10, 10, 6, 3, 15, 6, 13, 14, 3, 4, 9, 1, 13, 11, 15, 8, 13, 7, 14, 10};
    vector<int> Y = {13, 10, 9, 1, 1, 2, 10, 2, 4, 9, 1, 1, 7, 10, 5, 4, 14, 2, 4, 2, 10, 13, 12, 1, 1, 6, 6, 13, 7, 5, 4, 1, 2, 13, 15, 13, 6, 11, 13};
    vector<int> val = {9, 2, 6, 5, 6, 5, 9, 4, 3, 6, 1, 6, 5, 5, 9, 3, 9, 8, 2, 4, 4, 8, 6, 2, 6, 1, 4, 4, 6, 2, 8, 1, 6, 1, 6, 6, 1, 8, 9};
    int xFinish = 13;
    int yFinish = 17;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16459848;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> X = {7, 4, 17, 11, 17, 20};
    vector<int> Y = {19, 5, 1, 20, 18, 6};
    vector<int> val = {5, 3, 2, 2, 1, 2};
    int xFinish = 17;
    int yFinish = 15;
    int K = 4;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2280;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> X = {19, 6, 2, 19, 14, 15, 9, 15, 12, 17, 3, 17, 4, 5, 5, 7, 16, 1, 5};
    vector<int> Y = {10, 20, 7, 14, 12, 7, 18, 17, 2, 20, 6, 11, 9, 16, 3, 16, 2, 12, 9};
    vector<int> val = {2, 3, 2, 2, 5, 5, 3, 2, 2, 2, 5, 3, 1, 4, 5, 2, 2, 5, 3};
    int xFinish = 18;
    int yFinish = 16;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 639712;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> X = {3, 2, 20, 14, 10, 16, 12, 5, 5, 16, 13};
    vector<int> Y = {17, 15, 12, 14, 19, 3, 5, 19, 17, 17, 18};
    vector<int> val = {5, 4, 4, 2, 5, 3, 5, 4, 2, 5, 2};
    int xFinish = 17;
    int yFinish = 17;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50697350;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> X = {34, 7, 29, 10, 18, 18, 31, 39, 21, 39, 1, 25, 19, 28, 1, 8, 4, 27, 33, 28, 40, 27, 16, 13, 7, 19, 5, 20, 33, 37};
    vector<int> Y = {20, 17, 25, 8, 14, 28, 34, 11, 21, 3, 28, 4, 16, 36, 23, 28, 17, 33, 4, 11, 23, 25, 1, 18, 26, 20, 23, 7, 26, 18};
    vector<int> val = {8, 9, 10, 5, 9, 6, 7, 8, 4, 5, 3, 6, 1, 4, 3, 5, 1, 10, 1, 5, 10, 8, 5, 8, 10, 8, 7, 2, 5, 2};
    int xFinish = 39;
    int yFinish = 32;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14793067;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> X = {28, 23, 3, 23, 15, 9, 15, 1, 26, 24, 22, 28, 3, 36, 8, 39, 4, 13, 6, 12, 36, 19, 6};
    vector<int> Y = {29, 15, 39, 38, 19, 11, 26, 21, 35, 13, 3, 40, 11, 6, 9, 22, 36, 15, 28, 23, 31, 14, 20};
    vector<int> val = {7, 4, 10, 1, 1, 2, 7, 5, 7, 9, 3, 5, 1, 7, 10, 7, 1, 6, 2, 1, 5, 6, 1};
    int xFinish = 31;
    int yFinish = 30;
    int K = 2;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> X = {26, 29, 17, 2, 15, 34, 27, 4, 37, 31, 34, 2, 3, 3, 31, 26, 11, 6, 24, 37, 12, 15, 30, 36, 30, 24, 26, 13, 1, 16, 34, 1, 37, 7, 24};
    vector<int> Y = {23, 23, 17, 12, 34, 26, 23, 40, 16, 13, 27, 9, 8, 1, 39, 31, 28, 15, 1, 18, 27, 13, 19, 34, 13, 13, 11, 15, 35, 14, 11, 17, 11, 31, 2};
    vector<int> val = {3, 9, 3, 1, 3, 4, 3, 2, 1, 9, 4, 2, 9, 2, 4, 7, 5, 3, 7, 1, 2, 10, 5, 2, 9, 10, 5, 10, 2, 5, 3, 2, 8, 1, 2};
    int xFinish = 38;
    int yFinish = 39;
    int K = 2;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> X = {4, 36, 16, 21, 38, 32, 30, 37, 23, 3, 25, 15, 24, 18, 14, 3, 33, 15, 24, 24, 9, 18, 5, 6, 1, 3, 37, 6, 8, 16, 33, 24};
    vector<int> Y = {5, 22, 35, 31, 31, 13, 23, 31, 26, 27, 40, 34, 31, 26, 23, 25, 14, 15, 27, 12, 38, 21, 5, 26, 8, 2, 5, 27, 19, 6, 10, 1};
    vector<int> val = {5, 4, 4, 5, 2, 4, 1, 1, 5, 4, 5, 3, 2, 1, 1, 3, 3, 4, 2, 1, 4, 5, 3, 5, 5, 3, 5, 3, 5, 4, 3, 1};
    int xFinish = 36;
    int yFinish = 29;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 390971;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> X = {18, 37, 1, 6, 22, 29, 14, 38, 1, 11, 14, 24, 11, 30, 25, 27, 30, 31, 24, 24, 31, 5, 35, 14, 33, 9, 33, 22, 18, 6, 30, 16, 30, 13, 5, 32, 19, 5, 39, 32};
    vector<int> Y = {25, 36, 10, 29, 3, 5, 2, 19, 30, 13, 23, 4, 19, 29, 9, 16, 1, 29, 33, 25, 17, 36, 39, 20, 18, 34, 34, 20, 5, 3, 7, 34, 2, 40, 29, 37, 31, 11, 32, 1};
    vector<int> val = {3, 3, 4, 5, 1, 4, 2, 5, 1, 2, 4, 5, 5, 3, 2, 3, 3, 5, 5, 2, 4, 4, 5, 4, 5, 5, 5, 3, 3, 1, 5, 2, 4, 1, 5, 3, 4, 3, 1, 5};
    int xFinish = 39;
    int yFinish = 27;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 827646342;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> X = {37, 17, 23, 6, 7, 7, 18, 12, 40, 27, 24, 4, 16, 28, 9, 5, 1, 11, 30, 31, 33, 24, 39, 36, 40, 10, 11, 25, 39, 1, 27, 1, 13, 3, 8};
    vector<int> Y = {37, 9, 1, 37, 12, 32, 30, 1, 5, 30, 17, 8, 32, 20, 34, 2, 20, 10, 8, 33, 34, 23, 19, 26, 2, 11, 29, 32, 3, 23, 19, 17, 21, 22, 18};
    vector<int> val = {3, 1, 3, 4, 2, 2, 2, 3, 1, 2, 2, 4, 4, 5, 2, 1, 4, 2, 2, 1, 2, 4, 1, 4, 3, 1, 3, 3, 2, 3, 1, 3, 5, 2, 3};
    int xFinish = 40;
    int yFinish = 33;
    int K = 2;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> X = {82321, 447781, 593820, 979409, 907586, 407743, 892656, 254190, 418375, 168765, 370870, 479083, 653211, 501991, 101141, 971423, 906084, 523252, 18118, 717811, 46234, 847757, 831440, 890831, 794630, 729657, 817036, 171578, 241936, 537169, 597345, 468844, 183967, 378396, 539656, 364734, 653420, 835411, 911289};
    vector<int> Y = {272774, 994290, 208133, 428855, 415217, 623441, 393577, 517742, 304811, 813950, 406456, 877439, 947453, 426225, 856235, 447874, 35583, 667777, 926169, 100013, 101992, 196311, 857643, 767691, 695729, 774842, 557992, 136770, 987137, 627235, 656281, 208011, 727857, 162649, 895654, 584285, 917208, 453221, 559094};
    vector<int> val = {40994, 791408, 307631, 960929, 511995, 730296, 872758, 32390, 427054, 945896, 814482, 336302, 494034, 113543, 605516, 701554, 828255, 607134, 972347, 764713, 661278, 8916, 91256, 991308, 361143, 271538, 835146, 399379, 15953, 114527, 277930, 836181, 537877, 305684, 861088, 390395, 914010, 925896, 408771};
    int xFinish = 226700;
    int yFinish = 238768;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 461178246;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> X = {783647};
    vector<int> Y = {992162};
    vector<int> val = {167312};
    int xFinish = 736493;
    int yFinish = 848576;
    int K = 0;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> X = {607670, 479054, 859121, 29103, 284750, 612887, 299576, 643025};
    vector<int> Y = {898496, 49602, 854516, 431590, 457479, 23630, 582739, 343060};
    vector<int> val = {615417, 728938, 645063, 461450, 871952, 662794, 898495, 59430};
    int xFinish = 933966;
    int yFinish = 867653;
    int K = 0;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> X = {859333, 68563, 209931};
    vector<int> Y = {530825, 933018, 742381};
    vector<int> val = {804606, 585578, 924145};
    int xFinish = 673444;
    int yFinish = 615304;
    int K = 1;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> X = {103229, 146690, 146517, 905619, 40959, 938365, 325783, 91834, 832103, 608676, 256907, 147928, 181485, 401247, 975304, 914741, 93016};
    vector<int> Y = {971453, 838048, 792268, 747356, 917643, 862572, 878051, 307499, 316609, 712742, 438270, 468693, 8663, 371445, 811349, 755233, 377877};
    vector<int> val = {237422, 643953, 222814, 131336, 290730, 318640, 959868, 155587, 270799, 366686, 379967, 340810, 178695, 466499, 788113, 472133, 812520};
    int xFinish = 636958;
    int yFinish = 804504;
    int K = 1;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> X = {586416, 863846, 525858, 354182, 890182, 312893, 560439, 485303, 410785, 649726, 742605, 268574, 111223, 303297, 392778, 696642, 222688, 990157, 986134};
    vector<int> Y = {618840, 42587, 156652, 429815, 352381, 359318, 697737, 649892, 393928, 901660, 208776, 985001, 17505, 239142, 108800, 434462, 692976, 657836, 429307};
    vector<int> val = {831451, 393889, 187312, 353601, 697984, 392032, 232870, 788220, 118558, 927901, 523601, 286081, 100859, 284240, 394695, 756471, 252575, 624145, 93888};
    int xFinish = 788225;
    int yFinish = 544399;
    int K = 0;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> X = {999884, 832949, 549407, 937607, 745246, 931211, 418661, 875595, 534847, 388308, 313029, 941584, 766724, 410137, 914519, 228747, 358968, 437218, 69315, 73799, 513329, 41719, 843600, 908619, 686569, 325199, 272311, 244622, 74614};
    vector<int> Y = {799172, 17351, 551974, 302458, 822625, 447147, 934575, 377542, 836957, 746709, 267284, 579060, 842929, 561773, 259805, 591884, 620837, 548443, 760194, 767493, 633936, 531382, 905547, 753368, 470332, 630887, 456271, 16653, 670687};
    vector<int> val = {900332, 660907, 558629, 111584, 414372, 691583, 412675, 289269, 834814, 396172, 331151, 930990, 139250, 739496, 704721, 920835, 224215, 463995, 977312, 845356, 360215, 570383, 615158, 255440, 539896, 607770, 529865, 436089, 791987};
    int xFinish = 530619;
    int yFinish = 963245;
    int K = 0;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> X = {368321, 118907, 266025, 125742, 255306};
    vector<int> Y = {82296, 125279, 107563, 18779, 79132};
    vector<int> val = {110304, 397513, 354201, 126549, 309799};
    int xFinish = 558287;
    int yFinish = 509140;
    int K = 0;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> X = {179647, 14219, 221856, 207425, 98685, 187365, 159132, 216811, 233358, 55133, 56371, 94277, 181079, 235192, 124817, 27586, 165127, 119412, 211695, 171087, 159640, 9598, 141055, 46901};
    vector<int> Y = {363738, 59222, 480330, 543923, 416707, 451850, 601809, 451953, 64201, 286455, 567690, 627900, 233474, 290963, 38205, 130508, 305235, 576749, 24629, 182851, 580883, 174747, 458372, 436135};
    vector<int> val = {374039, 197326, 485056, 425264, 197450, 86161, 251456, 135948, 426734, 425115, 601246, 595515, 139436, 466005, 764282, 175870, 656411, 41639, 216747, 197413, 267861, 75689, 36043, 34551};
    int xFinish = 621709;
    int yFinish = 489213;
    int K = 0;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> X = {35381, 20948, 103223, 120906, 18436, 78373, 118961, 4190, 2377, 64554, 105027, 74137, 31009, 126567, 94317, 129085, 26162, 143996, 136947};
    vector<int> Y = {337005, 392248, 323513, 636298, 376387, 397010, 140384, 341655, 712498, 724662, 394934, 525035, 424395, 124479, 206492, 79084, 575468, 118564, 424737};
    vector<int> val = {623202, 217575, 697090, 469135, 741352, 640082, 586945, 739596, 441548, 255297, 648868, 378941, 293958, 268914, 843053, 561649, 703394, 270178, 532148};
    int xFinish = 882612;
    int yFinish = 120264;
    int K = 1;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> X = {511676, 192425, 602870, 738794, 827261, 876699, 36118, 878419, 784217, 625855, 511676, 878781, 876699, 399529, 192425, 534054, 192425, 304985, 511676, 296886, 534054, 963967, 784217, 600827, 600827, 779336, 600827, 448717, 878781, 751527, 751527, 649282, 649282, 801137, 878781, 814551, 399529, 913005};
    vector<int> Y = {617871, 344613, 641449, 973773, 457894, 154796, 307452, 878456, 396163, 617871, 732050, 457894, 347943, 344613, 551717, 732050, 656178, 307452, 754428, 551717, 956730, 457894, 429744, 307452, 369618, 956730, 418073, 656178, 543080, 418073, 705987, 369618, 534887, 617871, 720871, 369618, 510122, 956730};
    vector<int> val = {114179, 207104, 222301, 266487, 51520, 193147, 268867, 176707, 33581, 175282, 22378, 85186, 165679, 165509, 104461, 224680, 256292, 295842, 287221, 115716, 245282, 299661, 162630, 62166, 48455, 133669, 150700, 11157, 177791, 287914, 75881, 165269, 16093, 104327, 154536, 117336, 239778, 216854};
    int xFinish = 792797;
    int yFinish = 732131;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 556280728;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> X = {209864, 717435, 183576, 568480, 628533, 831983, 387164, 643993, 568480, 918428, 918428, 287193, 643993, 404142, 287193, 513326, 717435, 365969, 568480, 761242, 761242, 607222, 287193, 892697, 892697, 762975, 717435, 896562, 287193, 642625, 607222, 776884, 918428, 428595, 209864, 937869, 937869, 838827, 776884, 726723};
    vector<int> Y = {814419, 381199, 76108, 704822, 911644, 859283, 878961, 339428, 743564, 339428, 541131, 76108, 613863, 76108, 193057, 878961, 676494, 814419, 936326, 743564, 893966, 704822, 429525, 676494, 937247, 911644, 851756, 911644, 718946, 814419, 874484, 704822, 768099, 76108, 970524, 704822, 963897, 814419, 865807, 874484};
    vector<int> val = {156105, 295295, 103617, 38742, 134442, 288701, 126162, 274435, 192762, 201703, 226968, 116949, 252426, 24453, 236468, 255571, 175262, 276656, 122514, 150402, 244231, 169662, 289421, 260753, 282158, 133587, 225190, 189489, 237905, 196202, 119501, 160985, 186094, 59426, 213024, 259075, 200757, 77156, 222100, 168055};
    int xFinish = 836746;
    int yFinish = 982026;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 852634268;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> X = {229099, 863993, 515123, 738721, 840270, 447051, 512203, 917685, 515123, 942606, 863993, 535805, 535805, 934445, 229099, 688576, 515123, 657733, 917685, 615094, 840270, 777508, 934445, 853627, 738721, 870688, 777508, 690517, 512203, 392381, 535805, 715877, 777508, 372080, 690517, 934825};
    vector<int> Y = {622297, 868899, 345944, 799292, 849942, 932129, 355055, 849942, 546698, 868899, 947512, 355055, 509767, 799292, 765278, 509767, 646669, 932129, 893240, 546698, 927357, 546698, 866893, 932129, 995016, 509767, 713437, 355055, 378657, 765278, 662538, 345944, 846252, 622297, 378579, 995016};
    vector<int> val = {142981, 78613, 200754, 195724, 77415, 210682, 23602, 43298, 99971, 199389, 70022, 154712, 152771, 67601, 163282, 182112, 291597, 195894, 110546, 162414, 252132, 166739, 259805, 213337, 196104, 125212, 132815, 23524, 47446, 260798, 100175, 44982, 215129, 40723, 85604, 5399};
    int xFinish = 910325;
    int yFinish = 913664;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 98774516;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> X = {921100, 713869, 550508, 851826, 331994, 828805, 521718, 220390, 521718, 921128, 521718, 921178, 220390, 521801, 828805, 220400, 921128, 521840, 521840, 220460, 220390, 521885, 331994, 521937, 550508, 851915, 521801, 521816, 851826, 828837, 713869, 828917, 521840, 550575, 550508, 521725, 331994, 851837, 828837, 220436};
    vector<int> Y = {658527, 156525, 497673, 173061, 68619, 49494, 145157, 188222, 145164, 658527, 145247, 658527, 188268, 145164, 49526, 188268, 658577, 145164, 145261, 188268, 188278, 145261, 68704, 145164, 497766, 173061, 145203, 145203, 173150, 49494, 156594, 49494, 145306, 497766, 497833, 145157, 68747, 173150, 49574, 188222};
    vector<int> val = {28, 69, 93, 89, 85, 32, 7, 46, 83, 50, 93, 87, 10, 39, 64, 60, 81, 97, 45, 30, 71, 80, 43, 69, 67, 73, 15, 22, 11, 80, 48, 42, 6, 49, 31, 98, 11, 16, 79, 62};
    int xFinish = 806656;
    int yFinish = 962629;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22202639;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> X = {735024, 141646, 853171, 70599, 607926, 187904, 783433, 188001, 188001, 853180, 607926, 141686, 187904, 188097, 853171, 70693, 141686, 188051, 188097, 188129, 607926, 187951, 735024, 188155, 853171, 141769, 783433, 783438, 607926, 853269, 141769, 188027, 853269, 783497, 187904, 735114};
    vector<int> Y = {893081, 213569, 651712, 296872, 210994, 625145, 420190, 625145, 625241, 651712, 211033, 213569, 625242, 625145, 651721, 296872, 213652, 625241, 625190, 625241, 211130, 625242, 893141, 625190, 651819, 213569, 420285, 420285, 211168, 651721, 213668, 625242, 651820, 420285, 625289, 893141};
    vector<int> val = {60, 40, 9, 94, 39, 97, 95, 96, 50, 54, 97, 83, 47, 45, 98, 62, 92, 78, 58, 92, 38, 76, 90, 65, 84, 99, 5, 59, 58, 99, 70, 30, 53, 68, 64, 73};
    int xFinish = 735956;
    int yFinish = 897345;
    int K = 7;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 800974411;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> X = {289622, 508457, 65368, 158852, 487475, 518271, 158852, 446750, 446750, 499592, 65368, 608301, 289622, 349423, 289622, 84753, 446750, 184439, 446750, 261839, 487475, 507366, 349423, 662642, 84753, 776798, 487475, 610117, 507366, 571342, 487475, 853171, 776798, 538729, 499592, 898871};
    vector<int> Y = {631175, 478249, 482718, 386948, 66092, 997051, 412535, 412535, 628427, 66092, 727028, 997051, 690976, 631175, 976140, 727028, 810008, 386948, 837874, 386948, 78209, 631175, 789118, 412535, 898865, 631175, 287743, 837874, 900607, 66092, 369882, 837874, 733243, 478249, 137842, 412535};
    vector<int> val = {59801, 30272, 244310, 25587, 12117, 90030, 287898, 215892, 181581, 71750, 19385, 128190, 285164, 157943, 222156, 171837, 27866, 77400, 163367, 86898, 209534, 269432, 280274, 236229, 253373, 102068, 82139, 243054, 21485, 254558, 96921, 8552, 226624, 5326, 143168, 93545};
    int xFinish = 819964;
    int yFinish = 796429;
    int K = 5;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 296910236;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> X = {606527, 232882, 346937, 770270, 606527, 413853, 232882, 443666, 606527, 905088, 443666, 360204, 606527, 784511, 905088, 856931, 856931, 621371, 621371, 509836, 509836, 673648, 673648, 899028, 899028, 938643, 413853, 429870, 784511, 828683, 828683, 921445, 938643, 608479, 509836, 892144, 346937, 836469, 673648, 708448};
    vector<int> Y = {379527, 778922, 381388, 379527, 543270, 778922, 959893, 778922, 721254, 379527, 956627, 959893, 961247, 543270, 566940, 543270, 571288, 778922, 986234, 381388, 480031, 480031, 514831, 514831, 554446, 514831, 808735, 959893, 615690, 778922, 871684, 778922, 724534, 381388, 643843, 986234, 544287, 615690, 740211, 480031};
    vector<int> val = {163743, 180971, 162899, 134818, 177984, 29813, 127322, 177705, 239993, 187413, 224277, 69666, 254143, 72420, 110648, 28018, 105077, 207312, 270773, 98643, 163812, 34800, 225380, 39615, 147360, 209703, 135363, 22733, 51958, 92762, 110615, 78740, 279569, 209140, 38753, 220547, 26322, 293147, 92888, 163158};
    int xFinish = 779802;
    int yFinish = 747889;
    int K = 9;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 922416828;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> X = {383647, 823886, 823886, 991850, 383647, 859740, 823886, 580466, 383647, 497909, 497909, 743869, 859740, 973712, 823886, 765851, 383647, 624875, 624875, 388039, 823886, 884829, 580466, 823563, 765851, 588733, 383647, 862191, 743869, 955485, 823563, 892229, 588733, 685852, 580466, 728238, 743869, 433034, 991850, 876219};
    vector<int> Y = {105740, 66236, 102090, 102090, 302559, 66236, 270054, 105740, 416821, 302559, 570501, 105740, 249089, 249089, 450957, 302559, 421213, 421213, 669601, 416821, 740963, 302559, 269143, 105740, 421537, 570501, 662441, 105740, 185434, 185434, 144368, 105740, 667620, 570501, 414330, 414330, 397050, 416821, 373571, 421537};
    vector<int> val = {196819, 35854, 167964, 271481, 114262, 182853, 180903, 163403, 4392, 267942, 90824, 79694, 113972, 45669, 290006, 118978, 241228, 248388, 151198, 44995, 174474, 157744, 145187, 38628, 110368, 97119, 16932, 30038, 211616, 127908, 343, 122176, 272602, 159130, 147772, 204421, 151369, 240649, 122643, 52127};
    int xFinish = 784710;
    int yFinish = 839214;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 505439846;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> X = {2011, 54022, 54022, 128264, 128264, 231061, 231061, 465310, 54022, 360002, 465310, 198641, 54022, 236835, 54022, 245217, 465310, 550324, 231061, 518515, 550324, 234632, 54022, 648529, 245217, 327329, 236835, 309721, 360002, 274660, 648529, 556359, 234632, 849328, 2011, 499969, 648529, 651912, 236835};
    vector<int> Y = {509, 509, 191704, 191704, 298072, 298072, 532321, 298072, 265946, 532321, 383086, 265946, 410565, 265946, 690506, 509, 436291, 298072, 661262, 383086, 597076, 191704, 956940, 436291, 82621, 509, 303771, 191704, 728678, 265946, 439674, 532321, 266793, 298072, 52520, 661262, 598399, 436291, 433522};
    vector<int> val = {52011, 191195, 74242, 106368, 102797, 234249, 128941, 85014, 144619, 196357, 53205, 38194, 279941, 37825, 266434, 82112, 183219, 299004, 268908, 263044, 135509, 75089, 208122, 3383, 157104, 211829, 129751, 14274, 80572, 119233, 158725, 209845, 138091, 131334, 114153, 76775, 141363, 223061, 43924};
    int xFinish = 723058;
    int yFinish = 822996;
    int K = 6;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 169084431;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> X = {2011, 189434, 2011, 196350, 2011, 315924, 315924, 473260, 473260, 662479, 196350, 579701, 196350, 423463, 315924, 803426, 315924, 433868, 803426, 433010, 473260, 407545, 315924, 505066, 433868, 531506, 196350, 687913, 531506, 489997, 662479, 761329, 315924, 481760, 579701};
    vector<int> Y = {509, 509, 187932, 187932, 382271, 509, 157845, 509, 258614, 258614, 399127, 157845, 635787, 635787, 421622, 157845, 539566, 421622, 363522, 399127, 447833, 187932, 755148, 421622, 492820, 539566, 862900, 635787, 706804, 187932, 540183, 421622, 872418, 492820, 381570};
    vector<int> val = {187423, 126490, 194339, 211195, 17921, 157336, 263777, 258105, 189219, 281569, 236660, 223725, 227113, 264450, 117944, 205677, 215582, 71198, 35899, 7598, 189982, 82452, 117270, 256263, 47892, 167238, 59022, 13438, 107748, 234494, 293326, 218316, 229499, 228830, 279332};
    int xFinish = 816927;
    int yFinish = 860836;
    int K = 8;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 559810413;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> X = {13, 224, 77, 509, 1451, 43, 379, 142, 477};
    vector<int> Y = {1974, 375, 38, 783, 3, 1974, 1790, 1008, 2710};
    vector<int> val = {30, 1845, 360, 11, 837, 84, 210, 4, 6704};
    int xFinish = 509;
    int yFinish = 2011;
    int K = 10;
    NumberLabyrinthDiv1* pObj = new NumberLabyrinthDiv1();
    clock_t start = clock();
    int result = pObj->getNumberOfPaths(X, Y, val, xFinish, yFinish, K);
    clock_t end = clock();
    delete pObj;
    int expected = 196052726;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14438&pm=11430
********************************************************************************
//  SRM 509 (C)
 
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
 
using namespace std;
 
typedef unsigned uint;
typedef long long Int;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef pair<int,int> pint;
#define mp make_pair
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
 
const Int MO = 1000000009;
 
#define MAX 2000010
const int LIM = 2000005;
Int inv[MAX], fac[MAX], fnv[MAX];
 
int N;
int X[110], Y[110], P[110];
int TX, TY;
int K;
 
namespace SOLVE1 {
int d[110];
}
 
namespace SOLVE2 {
int psLen;
pair<pint,int> ps[110];
Int way0[110][110][20], way1[110][110][20];
Int dp[110][20];
}
 
void prepare() {
  int i;
  fac[0] = fnv[0] = 1;
  for (i = 1; i < LIM; ++i) {
    inv[i] = (i == 1) ? 1 : ((MO - (MO / i) * inv[MO % i] % MO) % MO);
//assert(i*inv[i]%MO==1);
    fac[i] = fac[i - 1] * i % MO;
    fnv[i] = fnv[i - 1] * inv[i] % MO;
  }
}
Int bn(Int n, Int k) {
  if (n < k) return 0;
  return fac[n] * fnv[n - k] % MO * fnv[k] % MO;
}
 
struct NumberLabyrinthDiv1 {
  
  Int solve1() {
    return 0;
  }
  
  Int calc2(int x, int y, int k) {
    if (x < 0 || y < 0) return 0;
    Int ret = 0;
    int kx, ky;
    for (kx = 0; kx <= k; ++kx) {
      ky = k - kx;
      Int tmp = bn(k, kx);
      tmp = tmp * (kx ? bn(x - 1, kx - 1) : x ? 0 : 1) % MO;
      tmp = tmp * (ky ? bn(y - 1, ky - 1) : y ? 0 : 1) % MO;
      ret += tmp;
      ret %= MO;
    }
//cout<<"calc "<<x<<" "<<y<<" "<<k<<" : "<<ret<<endl;
    return ret;
  }
  Int solve2() {
    using namespace SOLVE2;
    int i, j, jj;
    int k, kk, dk;
    
    psLen = 0;
    ps[psLen++] = mp(mp(0, 0), -1);
    for (i = 0; i < N; ++i) if (mp(X[i], Y[i]) < mp(TX, TY)) {
      ps[psLen++] = mp(mp(X[i], Y[i]), P[i]);
    }
    sort(ps, ps + psLen);
    ps[psLen] = mp(mp(TX, TY), -1);
    
    for (i = 0; i < psLen; ++i) {
      for (j = i + 1; j <= psLen; ++j) {
        for (k = 0; k <= K; ++k) {
          int dx = ps[j].first.first - ps[i].first.first;
          int dy = ps[j].first.second - ps[i].first.second;
          way0[i][j][k] = calc2(dx, dy, k);
        }
      }
    }
    for (i = 0; i < psLen; ++i) {
      for (j = i + 1; j <= psLen; ++j) {
        for (k = 0; k <= K; ++k) {
          int dx = ps[j].first.first - ps[i].first.first;
          int dy = ps[j].first.second - ps[i].first.second;
          int p = ps[i].second;
          Int tmp = 0;
          if (i == 0) {
            tmp += way0[i][j][k];
          } else {
            tmp += calc2(dx - p, dy, k);
            tmp += calc2(dx, dy - p, k);
          }
          tmp %= MO;
          for (jj = i + 1; jj < j; ++jj) {
            for (kk = 0; kk <= k; ++kk) {
              tmp -= way1[i][jj][kk] * way0[jj][j][k - kk];
              tmp %= MO;
            }
          }
          tmp %= MO; tmp += MO; tmp %= MO;
          way1[i][j][k] = tmp;
        }
      }
    }
/*
cout<<"way0 : "<<endl;
for(i=0;i<psLen;++i)for(j=i+1;j<=psLen;++j){
cout<<i<<"->"<<j<<" : ";pv(way0[i][j],way0[i][j]+K+1);
}
cout<<"way1 : "<<endl;
for(i=0;i<psLen;++i)for(j=i+1;j<=psLen;++j){
cout<<i<<"->"<<j<<" : ";pv(way1[i][j],way1[i][j]+K+1);
}
*/
    
    memset(dp, 0, sizeof(dp));
    dp[0][K] = 1;
    for (i = 0; i < psLen; ++i) for (k = 0; k <= K; ++k) {
      for (j = i + 1; j <= psLen; ++j) for (dk = 0; dk <= k; ++dk) {
        dp[j][k - dk] += dp[i][k] * way1[i][j][dk];
        dp[j][k - dk] %= MO;
      }
    }
//cout<<"dp : "<<endl;for(i=0;i<=psLen;++i)pv(dp[i],dp[i]+K+1);
    
    Int ret = 0;
    for (k = 0; k <= K; ++k) {
      ret += dp[psLen][k];
      ret %= MO;
    }
    return ret;
    
  }
  
  Int solve() {
    if (K == 0) {
      return 0;
    } else if (K == 1) {
      return solve1();
    } else {
      return solve2();
    }
  }
  
  int getNumberOfPaths(vector <int> _X, vector <int> _Y, vector <int> val, int xFinish, int yFinish, int _K) {
    int i;
    
    prepare();
    
    N = _X.size();
    for (i = 0; i < N; ++i) X[i] = _X[i];
    for (i = 0; i < N; ++i) Y[i] = _Y[i];
    for (i = 0; i < N; ++i) P[i] = val[i];
    TX = xFinish;
    TY = yFinish;
    K = _K;
    
    Int res = solve();
    res %= MO; res += MO; res %= MO;
    return res;
    
  }
  
};

********************************************************************************
*******************************************************************************/