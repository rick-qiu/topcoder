/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10258
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

class LaserShooting {
public:
    double numberOfHits(vector<int> x, vector<int> y1, vector<int> y2);
};

double LaserShooting::numberOfHits(vector<int> x, vector<int> y1, vector<int> y2) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {739};
    vector<int> y1 = {-281};
    vector<int> y2 = {971};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4085848429662569;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {335, 229, 785, 285, 358, 822, 550, 272, 157, 915};
    vector<int> y1 = {972, -460, -125, -326, -179, -138, 640, 795, 518, -738};
    vector<int> y2 = {531, -32, 561, 913, 990, 381, 385, -741, -391, -348};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7811636703394518;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {727, 217};
    vector<int> y1 = {-401, 971};
    vector<int> y2 = {760, -577};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.233020543509081;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {87, 558, 841, 440, 232, 779};
    vector<int> y1 = {-614, -646, -66, -307, -515, 397};
    vector<int> y2 = {-457, 356, -875, 69, -661, -98};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1610111575206146;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {236, 650, 774, 274, 146, 730, 762};
    vector<int> y1 = {392, -376, -181, 980, 95, -454, -857};
    vector<int> y2 = {383, 559, -71, -256, -281, -2, -605};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8550951609466348;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {181, 106, 554, 792, 346};
    vector<int> y1 = {521, 488, 699, -94, 746};
    vector<int> y2 = {-145, -737, 988, 580, 841};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7984639572306262;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {932, 431};
    vector<int> y1 = {809, 764};
    vector<int> y2 = {-536, 394};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4944518713555241;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {497, 785, 370, 894, 228, 7, 553};
    vector<int> y1 = {558, -484, 703, 252, -513, -884, 190};
    vector<int> y2 = {-535, -683, -418, -295, 580, 708, 764};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.323421013645208;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {826, 177, 304, 773, 374, 403, 302, 549};
    vector<int> y1 = {-913, 817, -10, -77, 960, 367, -564, -776};
    vector<int> y2 = {357, -935, 72, -147, -315, -815, -780, -531};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6727369679818613;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {145, 249, 220, 351, 646};
    vector<int> y1 = {-945, -603, -887, 271, -915};
    vector<int> y2 = {777, 906, -759, -484, -783};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2286560871811254;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {34, 422, 800, 985, 571, 113, 570, 813, 62};
    vector<int> y1 = {537, 48, 44, 961, -366, 305, -881, 327, 532};
    vector<int> y2 = {-678, 711, -617, -956, 294, -277, -132, -296, -356};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4576805408743905;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {498, 605, 381, 91, 856, 671, 161, 219, 965, 455, 796, 380, 781, 312, 335, 761, 251, 39, 542, 719, 548, 992, 797, 872, 27, 208, 870};
    vector<int> y1 = {0, -453, -308, -203, -306, -315, -492, 383, -343, -926, -524, 354, 590, 1, -99, 871, -288, 723, -166, 791, -72, 3, -297, -247, -113, -142, 88};
    vector<int> y2 = {-762, 851, 539, -659, -539, 103, 631, -275, -881, 992, -380, -626, -587, -100, 585, -967, 904, 870, 577, 82, 23, 923, -716, -812, -807, -274, 987};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 8.321332018440666;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {961, 957, 313, 121, 786, 888, 797, 744, 129, 459, 91, 998};
    vector<int> y1 = {661, -772, -774, 665, 560, 403, 555, -645, 987, 900, 776, 888};
    vector<int> y2 = {980, -260, 990, 920, 216, -256, -250, -643, -459, -848, 566, -846};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6485730360963626;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {170, 774};
    vector<int> y1 = {-343, 331};
    vector<int> y2 = {-159, 478};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16163930304742738;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {794, 543, 73, 40, 751};
    vector<int> y1 = {-996, 664, 998, 35, -639};
    vector<int> y2 = {-951, 716, -470, -995, -909};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7184012744435184;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {706, 871};
    vector<int> y1 = {988, -294};
    vector<int> y2 = {172, 878};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5813355809391328;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {258, 117, 350};
    vector<int> y1 = {-536, 300, 355};
    vector<int> y2 = {261, 304, 115};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7616700272864345;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {321, 261, 353, 482, 64, 710, 840, 788, 996, 287, 726, 847, 639, 413, 526, 174, 146, 518, 25, 476, 415, 660, 551, 30, 354, 203};
    vector<int> y1 = {539, -782, 90, -145, 794, 539, -214, -784, -572, 0, -869, -920, 605, -593, 233, -119, -16, -202, -691, -58, -31, 732, 365, 295, 712, 982};
    vector<int> y2 = {937, -171, -294, 471, 225, -604, 237, -11, -833, 237, -870, 567, -323, 911, 450, 475, 961, -289, 319, 672, 929, 809, -426, 404, 813, -782};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.800353205869368;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {217, 519, 193, 577, 94, 659, 689, 408, 173, 174, 426};
    vector<int> y1 = {-389, 237, -854, -995, 200, -542, -674, -249, -509, 513, 668};
    vector<int> y2 = {794, 295, -915, -312, -286, 778, -237, -339, 213, -627, -499};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.485243944457861;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {964, 247, 432, 12, 399, 837, 467, 443, 883, 413, 197, 653, 189, 812, 914, 554};
    vector<int> y1 = {-375, 408, 900, -450, -838, -5, -731, -465, -162, 905, 426, -392, -473, 600, -737, 420};
    vector<int> y2 = {-200, -940, 977, -443, -261, -502, -587, 501, -511, -298, -307, 305, -304, 907, 504, 419};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.873851742818556;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {424, 685, 721};
    vector<int> y1 = {-219, 165, -475};
    vector<int> y2 = {527, 84, 153};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7244898423380514;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {396, 1000, 737, 250, 335, 895, 507, 916, 505, 213, 690, 517, 558, 298, 406, 402, 663, 490, 835, 549};
    vector<int> y1 = {-570, -138, 470, -408, -555, 323, 750, -391, 200, -802, -859, -166, 842, -996, 497, 186, -319, -908, 128, -697};
    vector<int> y2 = {257, -618, 67, -101, -875, 710, 611, -320, -570, 374, -291, -759, 618, -364, -5, 872, -855, 631, 199, 348};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6565976342577455;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {791, 776, 599, 47, 914, 595, 298, 238, 92, 123, 760, 601, 429};
    vector<int> y1 = {790, -802, 829, 836, 456, -478, 326, -390, -226, 43, 176, 699, 645};
    vector<int> y2 = {1000, -379, 306, -258, -547, -417, -594, -434, 952, -807, 761, 558, 636};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.814670209765941;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {946, 318, 483, 780, 189, 18, 361, 110, 556, 519, 264, 709, 395, 374, 860, 286, 120, 80, 590, 255, 214};
    vector<int> y1 = {-59, 186, 437, 221, 296, -239, -931, -663, 658, 84, 979, 790, -578, -307, 450, 999, 461, -347, -50, -749, 917};
    vector<int> y2 = {-248, 825, -437, 54, 873, -140, 346, -209, -762, -240, -395, -140, 270, 662, 327, 920, 137, -409, -497, 683, 771};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 5.73989542405811;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {78, 486, 276, 150, 528, 327, 498, 104};
    vector<int> y1 = {-822, -244, 988, -492, -368, 250, 754, 652};
    vector<int> y2 = {823, 498, -981, 28, 960, 660, -777, -977};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.860497789779521;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {585, 859, 563, 348, 396, 838, 215, 719, 257, 367, 926, 771};
    vector<int> y1 = {-26, 896, -467, 131, 417, 29, -51, 765, 968, -638, 926, -819};
    vector<int> y2 = {-965, 299, -59, -938, -811, 347, -290, 723, -835, -510, 869, -658};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.010111734771504;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {924, 764, 403, 397, 682, 424, 510, 760, 274, 260, 631, 203, 886, 369, 143, 967, 460};
    vector<int> y1 = {524, 956, -996, -687, -975, 480, -496, 702, -473, -643, 375, 716, -610, 836, 479, 627, 69};
    vector<int> y2 = {-856, 931, -619, -611, -119, 316, 225, -22, -437, 128, -548, -616, -84, 740, 629, 232, 753};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.752725113696416;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {101, 16, 851, 459, 345, 534, 503, 977, 185};
    vector<int> y1 = {72, 743, -233, -548, -178, -531, -14, 737, 409};
    vector<int> y2 = {574, -572, -760, 51, -882, -548, -641, 703, -664};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.991467104667217;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {577, 439, 297, 817, 133, 728, 596, 900, 426, 701, 560, 31, 669, 464, 80, 527, 808, 241, 341};
    vector<int> y1 = {514, 459, -772, 40, 16, 739, -984, 824, 936, 916, -660, 958, 188, 136, -671, -537, 84, 716, 586};
    vector<int> y2 = {-260, 913, -454, -653, -968, 355, -938, -85, -587, 2, 69, -363, -818, 881, 216, -367, -223, 798, -341};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.116309666215456;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {229, 175, 454, 878, 579, 316, 976, 427, 86, 795, 618, 159, 52, 21, 794, 414, 335, 663, 615, 749, 434, 102, 626, 212};
    vector<int> y1 = {-383, 552, -718, 286, -797, 63, 717, -982, 378, 327, -668, -670, -540, 402, -221, 308, -989, -706, 960, 122, 469, -751, 328, 747};
    vector<int> y2 = {-705, 561, 603, 271, -570, 202, 593, -313, -552, 221, 748, -936, 697, 893, 789, 913, 953, -574, -951, -766, 266, -287, -682, 568};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.34996885508088;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {255, 699, 341, 304, 652, 658, 735, 330, 81, 143, 426, 363, 73, 608, 817, 807, 243, 421, 775, 33, 34, 268, 683, 678};
    vector<int> y1 = {946, -77, -194, 355, 485, -105, -261, 261, 94, -615, 383, 256, -606, -614, -489, 271, 896, 307, -849, 492, 94, 990, 843, -356};
    vector<int> y2 = {823, 363, 605, -39, -691, 928, 912, -631, -407, 507, 816, -345, 362, 235, 998, -37, 387, 162, 31, -458, 168, 988, -222, -816};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 8.691956453232901;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {93, 122, 8, 797};
    vector<int> y1 = {-742, -369, 186, 359};
    vector<int> y2 = {-366, 737, 641, 97};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9915330579294094;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {724, 538, 345, 715, 414, 171, 412, 51, 986, 372};
    vector<int> y1 = {538, -860, 836, -257, -575, 697, -777, -716, 412, 17};
    vector<int> y2 = {-304, -366, 251, 106, -508, -33, -291, -197, -491, 19};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.778715434990047;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {463, 246, 759, 499, 346, 288, 742, 891, 836, 765, 113, 96, 563, 656, 554, 646, 996, 383, 472};
    vector<int> y1 = {-197, 18, 186, 922, -713, 294, 213, -763, 855, 357, -488, -367, 884, 151, -864, 861, 259, 704, 349};
    vector<int> y2 = {868, 653, 522, 850, 858, -848, 159, -772, 736, 899, 510, 620, -968, 846, -613, -581, 174, -228, -57};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.485280253261458;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {924, 754, 619, 372, 877, 110, 550, 349, 625, 834, 844, 697, 35, 859, 249, 67, 467};
    vector<int> y1 = {757, -895, 500, 225, -785, 577, 774, -433, 561, 20, -72, -527, 21, -84, -875, -210, -667};
    vector<int> y2 = {490, 417, 221, 429, -818, -514, 936, 636, -736, -270, -195, -618, -781, 567, -330, -310, -58};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.213974086345034;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {855, 528, 847, 643};
    vector<int> y1 = {915, -687, 264, -857};
    vector<int> y2 = {626, -745, 455, -286};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2945694106382323;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {787, 171, 805, 408, 525, 733, 857, 692, 7, 864, 851, 506, 369, 518, 49, 474, 799};
    vector<int> y1 = {101, 911, -347, -694, 354, -579, -591, 500, -258, -752, 46, -317, 349, -857, -238, 395, -365};
    vector<int> y2 = {596, -748, -404, -104, 904, 289, -550, 634, 784, -254, -726, 46, 636, 806, 395, -139, 132};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 5.536165177497946;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {58, 633, 445, 696};
    vector<int> y1 = {313, -389, -634, 238};
    vector<int> y2 = {-974, 672, 937, 471};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1062120071962918;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {862, 595, 499, 151, 903, 841, 621, 509, 810, 384, 101, 688, 560};
    vector<int> y1 = {-427, -716, 820, -793, -74, 729, -259, -224, -563, 40, 755, -764, 874};
    vector<int> y2 = {-605, -352, -752, -915, -192, -383, -508, 76, 54, -28, 763, -198, -984};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.583170403681006;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {798, 953, 226, 51};
    vector<int> y1 = {-560, 830, -640, 410};
    vector<int> y2 = {198, 979, -964, -220};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2212475203973596;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {971, 811, 248, 103, 678, 124, 195, 492, 684, 823, 632, 563, 5, 3, 498, 711, 818, 45, 178, 206, 944, 630, 302, 778, 63, 501, 466, 238};
    vector<int> y1 = {-600, 563, -184, 986, 451, 884, -115, 1000, -568, 908, 372, -552, 282, -267, -156, 111, 803, -162, 79, 638, 994, 655, -383, -806, 963, -858, 251, -892};
    vector<int> y2 = {-63, -775, -290, 926, 484, 514, 136, 139, -531, 291, -940, -133, 496, -897, 221, 723, -979, 902, 171, -933, -7, -674, -711, -389, -431, 28, 740, -513};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.434087469722398;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {49, 212, 405, 353, 483, 857, 181, 48, 951, 112, 676, 511, 18};
    vector<int> y1 = {-92, 367, 824, -601, 669, -709, 578, 720, 971, 741, -36, -318, -281};
    vector<int> y2 = {-805, 46, 652, -903, -766, -651, -176, 813, 470, -401, -284, -39, -122};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0317110577940345;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {702, 819, 184, 613, 22, 704, 695, 555, 473, 453, 998, 382, 850};
    vector<int> y1 = {302, -440, -878, 276, 403, 11, -986, 253, 512, -885, -967, -21, 235};
    vector<int> y2 = {-565, 705, 733, -855, -11, -788, 535, -776, -589, -166, -414, 313, 423};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 5.07757563472413;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {751, 257, 907};
    vector<int> y1 = {292, -448, 667};
    vector<int> y2 = {-73, -522, -842};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6090515835772928;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {494, 558, 4, 969, 759, 63, 463, 890, 675, 733};
    vector<int> y1 = {707, -722, 553, -575, 288, -604, 750, -426, -784, 576};
    vector<int> y2 = {908, -672, 259, -127, -536, -552, -581, -698, 205, -394};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.908485766907921;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {182, 777, 393, 502, 903, 614, 63, 301, 176, 114, 3, 444, 423, 125, 567, 669, 306, 478, 510, 392, 403, 778, 57, 450, 365, 263, 361, 383, 48, 65, 716, 76, 602, 740, 18};
    vector<int> y1 = {763, -525, 867, 318, 49, -433, 78, 325, -493, 488, -395, 93, -995, 602, -531, 104, -144, 196, -938, -398, -726, 235, 206, -770, 113, 371, -460, -706, -809, -151, 8, 515, 669, -494, -209};
    vector<int> y2 = {799, 880, 284, -261, 295, -900, 703, 697, -759, 393, -826, -529, -233, 89, 768, 996, 858, -437, 605, 744, -217, 154, 701, -993, -589, -757, 325, 443, -992, -765, 349, 557, 643, -49, 700};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 9.15315557981137;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {842, 288, 730, 243, 439, 161, 329, 380, 202, 934, 745, 618, 928, 304, 908, 789, 489, 665, 334, 430, 947, 314, 526, 466, 302, 361, 452, 697, 903};
    vector<int> y1 = {866, 1, 413, -133, -138, 797, -645, 857, -196, 521, -139, 26, 966, 995, 238, -327, 329, -34, -949, 873, 886, 955, -843, -641, 791, 117, 653, 245, 731};
    vector<int> y2 = {-739, 117, -986, -879, 781, -682, 867, 770, -503, 588, 390, 470, -548, -899, 290, 734, -956, 298, -928, -789, -80, 501, -264, 405, 812, -999, -65, -808, 935};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 9.226040971178643;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {304, 111, 134, 320, 760, 923, 878, 553, 691, 580, 996, 483, 381, 991, 267, 113, 585, 958};
    vector<int> y1 = {818, 369, 647, -117, -957, 86, -306, 433, 782, -528, -180, -824, -225, -901, -877, -135, 557, 720};
    vector<int> y2 = {-650, 41, -245, -114, -804, -468, 117, 883, -551, -784, -847, 26, 894, 302, -977, -705, 796, 822};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.4753860760576005;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {469, 464, 414, 578, 902, 622, 730, 527, 367, 158, 116, 762, 539, 52, 979, 983, 205, 606, 551, 608, 505, 69, 14, 938, 659, 284, 940, 543, 299, 128, 224, 93, 808, 256, 763, 981, 884, 263, 252, 495, 248, 569, 249, 260, 265, 754, 264, 668, 2};
    vector<int> y1 = {-198, 98, -11, -377, -2, 259, -148, -428, -882, 706, 543, -800, 534, -905, 213, -541, 842, -341, -449, -681, 745, -255, -376, -392, 854, 608, 135, 582, 736, -854, -683, -623, 824, -589, 802, 845, 787, 330, 963, 401, 707, 960, -687, -359, -591, -772, 703, -376, 86};
    vector<int> y2 = {244, 443, 25, -633, 930, 386, 523, -332, -168, 63, 694, 59, 76, 778, -247, 127, -179, -46, -582, 459, -712, 310, 512, -579, -771, -482, -637, -539, 469, 266, -712, 39, -956, 17, 369, -843, -944, 873, 356, 596, -759, -423, 355, 336, 661, 353, 921, -749, 252};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 16.936749397799193;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {974, 410, 812, 988, 478, 287, 306, 610, 532, 289, 113, 479, 851, 513, 662, 273, 502, 392, 496, 282, 355, 853, 923, 243, 606, 484, 731, 622};
    vector<int> y1 = {-447, 452, -169, 134, -902, -768, 739, 918, -280, -915, -777, 394, -103, 655, 473, 646, 827, -191, 615, -75, 537, -529, 258, -189, 227, 314, 10, 799};
    vector<int> y2 = {27, -418, 332, -663, 147, -80, 512, -199, 317, 754, 434, 803, 608, 980, -522, 518, 13, -103, 128, 413, 474, -749, -715, -233, -215, 929, 862, 688};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.167659285865239;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {235, 656, 100, 586, 863, 712, 303, 867, 906, 824, 80, 524, 841, 933, 82, 190, 553, 503};
    vector<int> y1 = {-372, -180, -924, 344, -370, 785, -708, -745, -823, 985, -424, -124, 152, -985, 74, -933, 327, -114};
    vector<int> y2 = {570, -889, -71, 989, -900, 332, -913, -315, 736, 994, -58, 651, -811, -139, -267, -700, 826, 603};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.450976296294169;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {614, 702, 317, 728, 138, 210, 758, 512, 381, 332, 350, 559, 911, 243, 387, 969, 161, 565, 513};
    vector<int> y1 = {535, 553, 358, 549, -495, 282, 916, -657, -644, -50, 264, -998, 566, 838, -781, -11, 280, -562, -434};
    vector<int> y2 = {-913, -657, -2, 7, -809, -535, -7, -706, 698, 911, -575, -326, -199, 568, -463, 276, -344, 524, -229};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.000607115276835;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {940, 957, 151, 612, 704, 789, 911, 803, 632, 59, 517, 540, 812, 782, 617, 625, 909, 988, 275, 414, 406, 776, 487, 461};
    vector<int> y1 = {-711, 170, -778, -969, -413, 58, -490, -32, 630, -572, 298, 733, -839, 263, -137, -882, 626, 632, -753, 33, 335, 220, -662, 282};
    vector<int> y2 = {-333, 901, 418, 924, 812, 72, 637, 250, 716, 999, 897, -454, -538, 33, -954, -429, 597, -702, -180, -840, 960, 480, -398, 10};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.285372720104949;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {804, 583, 810, 923, 743, 288, 820, 609, 732, 695, 529, 110, 376, 881, 532, 379, 6, 852, 186, 610, 217, 932, 488, 242, 35, 57, 150, 433, 621, 576, 851, 363, 215, 681, 58};
    vector<int> y1 = {205, -697, 417, -698, -766, -494, 609, -718, -598, 119, 224, -828, -47, 166, -244, -946, 322, -710, 572, -621, -11, 944, 394, 677, 767, 641, 161, -576, 241, -823, -595, -861, -805, 798, 719};
    vector<int> y2 = {-744, 254, 698, 909, -669, -511, -186, 696, 341, 299, -991, 244, -291, -591, -98, -433, -276, -436, 933, 31, -910, 734, -705, -762, -256, 380, -209, -535, 691, 844, -688, 666, 859, 615, -98};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 12.283701007295054;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {967, 992, 45, 117, 592, 348, 547, 561, 102};
    vector<int> y1 = {-945, -741, 807, 758, -486, -871, -737, 615, -634};
    vector<int> y2 = {-924, -1, 963, 144, 208, -545, 77, -711, 328};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.511525164035891;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {78, 736, 708, 781, 503, 579, 380, 117, 588, 328, 391, 260, 365, 771, 848, 469, 881, 259, 979, 288, 432, 327, 336};
    vector<int> y1 = {-934, 247, 473, -708, -887, 728, 960, 52, 935, -100, 966, 239, -321, 949, -997, -94, 306, 993, 414, 899, 958, 136, -577};
    vector<int> y2 = {-94, 459, -474, -363, -320, 222, 652, -535, 286, -559, -984, -979, 559, 103, -295, -472, -730, 545, 516, -598, 553, -995, 577};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.082729608755051;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {338, 374, 613, 271, 654, 721, 800, 488, 571, 399, 962, 226, 450, 699, 710, 341, 658, 447, 839, 168, 224, 392, 211, 880, 826, 903, 697, 608, 334, 188, 832, 650, 949, 295, 369, 790, 237, 671, 231, 328, 263, 687};
    vector<int> y1 = {887, 339, 662, -861, -64, -704, -551, 92, -757, -255, 640, 71, -2, -828, 312, 469, 598, -10, 144, 755, 632, 481, -906, 386, 7, -741, 813, -72, -546, 93, -812, -813, -205, 615, -665, -200, 890, -209, 650, -625, 670, 422};
    vector<int> y2 = {151, 781, 475, 973, -615, -11, 464, 804, -277, 442, 950, 757, 273, -382, 639, 784, 356, 44, -182, -259, -514, -42, -541, 936, 892, 986, 876, 556, 626, 440, 746, 55, -780, -264, -671, -354, -546, 744, 429, 179, 686, 339};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 11.233539497234478;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {22, 857, 469, 544, 549, 928, 927, 238, 134, 138, 660, 728, 344, 237, 491, 871, 699, 758, 172, 376, 776, 719, 560, 10, 496, 622, 245, 328, 115, 431, 641, 240};
    vector<int> y1 = {937, -409, -207, 472, 525, -554, -781, -742, 319, 249, 628, -577, -921, -456, 926, 79, 284, -244, -317, 453, 588, 755, 657, -973, 592, -378, 236, -65, -378, -407, -222, 868};
    vector<int> y2 = {44, 594, -490, 576, -428, 328, 383, -605, 555, 592, -430, -865, 668, 361, 888, -406, -831, -101, -287, -224, 259, 904, 686, -882, 101, -823, -109, 687, -774, -855, 667, 148};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.882956734086022;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {210, 164, 374, 563, 948, 288, 951, 366, 496, 261, 197, 244, 809, 115, 532, 127, 919, 30, 339, 318, 27};
    vector<int> y1 = {-571, 521, -151, 686, 117, -769, 362, -794, -272, -387, -833, 294, -311, -721, -957, 437, -985, -128, -847, -479, 532};
    vector<int> y2 = {810, 466, -613, 729, -764, -445, -189, 883, 102, -294, -290, -412, 782, 462, -666, 799, 735, -942, -145, 166, -495};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.810317316884673;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {395, 166, 892, 821, 556, 68, 360, 303, 344, 846};
    vector<int> y1 = {-975, -993, 669, -444, -150, -133, -796, -226, 347, 271};
    vector<int> y2 = {-388, 426, 910, -516, 350, 203, -48, 697, -142, 617};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.411822907877731;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {394, 263, 313, 399, 357, 538, 221};
    vector<int> y1 = {-157, -222, 42, 486, 44, 365, 803};
    vector<int> y2 = {-921, -258, 219, -785, -519, -454, 572};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.849767497789983;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {30, 12, 953, 293, 500, 244, 554, 758, 172, 181, 103, 459, 521, 157, 171, 148, 14, 436, 235, 657};
    vector<int> y1 = {891, 520, 769, 316, -699, -113, 539, -449, -408, -38, -842, -295, 891, -954, -375, 993, 379, -306, -65, 571};
    vector<int> y2 = {-326, -402, -72, -720, -777, -292, 445, -523, 709, -677, -209, 880, -880, -828, 109, 899, 864, 276, 168, 526};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.710411336809421;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {638, 929, 284};
    vector<int> y1 = {-776, 244, -127};
    vector<int> y2 = {89, -296, 146};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7900290486596858;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {342, 555, 795, 672};
    vector<int> y1 = {-239, -425, -400, 435};
    vector<int> y2 = {757, -291, -589, 522};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6953201037364501;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {618, 931, 740, 473, 369, 959, 276, 555, 838, 580, 48, 409, 62, 551, 499, 320, 706, 116, 728, 588, 884, 458, 212, 113, 484, 532, 102, 919};
    vector<int> y1 = {-314, 166, 335, 165, 34, -877, 411, 345, -793, 230, -406, -693, 940, 227, -685, -188, -880, -485, -268, -698, 934, 867, 293, -119, -627, -701, 115, -466};
    vector<int> y2 = {-643, -144, -64, 103, -923, 812, 417, -922, 712, 273, 332, -970, -817, 34, -618, -893, -29, 915, 632, 735, -383, -94, 746, -795, 838, -188, -777, -936};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 9.335134358809631;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {391, 763, 638, 670, 248, 842, 518, 900, 334, 429, 543, 923, 992, 402, 455, 979, 950, 174, 732, 31, 532, 366, 73, 57, 572, 924, 909, 838};
    vector<int> y1 = {-17, -742, -594, 18, 383, 545, -891, 830, -183, -80, 404, -534, 357, 787, 686, -848, -118, 920, -466, -603, -534, -825, -15, -111, 444, 546, -523, 804};
    vector<int> y2 = {-23, -971, -322, -738, -847, 496, -103, 669, -965, -814, 32, 423, 559, 767, 346, -870, 352, -861, 622, 156, 105, -282, 622, 355, -622, 417, -253, 302};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.504812576502472;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {343, 459, 107, 134, 623, 791, 480};
    vector<int> y1 = {908, -407, -858, 76, 686, 426, -31};
    vector<int> y2 = {737, 345, 158, -545, 978, 297, 536};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2033923271425455;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {6, 706, 961, 144, 956, 432, 628, 398, 914, 957, 601, 340, 190, 968, 300, 237, 640, 892, 25, 709, 575};
    vector<int> y1 = {335, -630, -218, 173, 516, -314, -787, 589, -404, 393, 634, 984, -108, -938, 641, 836, 689, 406, 613, 893, -626};
    vector<int> y2 = {399, 40, -318, 1000, 771, 374, -438, -989, -434, 96, -410, -9, -203, 841, 225, -59, 530, -362, -770, -377, 498};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 6.099790379887459;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {330, 868, 883, 684, 499, 960, 675, 782, 763};
    vector<int> y1 = {449, 748, -145, -553, 198, 945, 662, 733, -26};
    vector<int> y2 = {-932, 701, 156, -401, -744, -75, -735, 984, -486};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2863588569845836;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {981, 405, 895, 494, 591, 912, 108, 757, 880, 424, 454, 9, 288, 825, 165, 576, 768, 463};
    vector<int> y1 = {-369, 853, 314, -190, -800, 868, 418, -60, 30, -706, -81, -724, -252, 548, -606, 360, 526, -938};
    vector<int> y2 = {-789, 105, -461, -404, -883, -524, -880, 41, 468, -874, 376, -495, -255, 963, -632, 789, -96, 918};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6872930237326105;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {47, 869, 166, 182, 650, 757, 849, 501, 477, 2, 537, 653, 851, 94, 407, 605, 822, 787};
    vector<int> y1 = {885, -538, -864, 438, -501, -274, 492, 494, 366, -533, 73, 704, 584, -293, -886, -272, 619, 222};
    vector<int> y2 = {769, 735, -805, -928, -924, 852, -591, -239, 668, -289, 202, 509, 910, -182, 383, 475, -246, 563};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.143071408538596;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {775, 604, 701};
    vector<int> y1 = {360, 625, -198};
    vector<int> y2 = {351, 207, -466};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2525182450509638;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {772, 23, 600, 194, 574, 577, 176, 730, 959, 490, 279, 756, 777, 740};
    vector<int> y1 = {-618, -938, 578, 245, -605, 325, -370, -976, 587, -689, -910, 941, 924, -297};
    vector<int> y2 = {170, -876, 614, 590, 731, -51, -633, 205, -394, -332, 197, -380, 281, -408};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.233959724360006;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {400, 451, 726, 920, 326, 117, 980, 167, 654, 204, 604, 798, 787, 804, 102, 314, 839, 752, 607, 89, 48, 97, 892, 882, 517};
    vector<int> y1 = {-506, 664, 455, -910, -126, 752, 453, -554, -625, 902, -680, 551, -909, -884, -915, 774, -545, -688, 592, -585, -289, 688, -604, 251, 301};
    vector<int> y2 = {751, -314, -59, -19, -843, 925, -372, -699, -743, -847, -972, 527, 83, -232, 288, -111, 368, 230, -988, -321, 637, 627, -899, -21, -170};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 7.501184924069519;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {1};
    vector<int> y1 = {-1};
    vector<int> y2 = {1};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {1, 2};
    vector<int> y1 = {-1, -2};
    vector<int> y2 = {1, 2};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {3, 4, 7, 1};
    vector<int> y1 = {1, 2, 3, 4};
    vector<int> y2 = {4, 3, 2, 1};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4623163952488826;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {134, 298, 151, 942};
    vector<int> y1 = {-753, -76, 19, 568};
    vector<int> y2 = {440, 689, -39, 672};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.444210260641501;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {807, 921, 372, 61, 469, 699, 21, 861, 657, 239, 65, 146, 583, 916, 559, 435, 954, 585, 231, 407, 75, 250, 677, 362, 408, 389, 254, 974, 897, 697, 359, 604, 722, 276, 544, 715, 191, 452, 658, 538, 31, 862, 831, 123, 348, 701, 170, 42, 678, 240};
    vector<int> y1 = {742, 642, -65, -356, -345, -410, 71, -805, 975, -650, -764, 809, 833, 472, -54, 558, 254, -433, -613, 840, -415, 758, 31, 79, 476, 146, -566, -886, -874, -150, -515, -119, 988, 896, 136, -830, 595, -600, -883, 366, 427, 885, 484, -134, 22, -755, 683, 828, -313, -675};
    vector<int> y2 = {-27, -7, -391, 237, -836, 260, 982, -173, -986, 955, 130, -645, 778, 679, 346, -583, -777, -522, -672, -439, 213, -369, -429, -462, 376, -514, -978, 604, 384, -120, -632, -505, 257, -297, -117, -646, 618, -438, -238, -339, 126, -130, 995, 433, -955, -317, -147, -643, -97, -90};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 16.025540206129005;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {1};
    vector<int> y1 = {-1};
    vector<int> y2 = {-2};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10241638234956671;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {159, 500, 677, 1000};
    vector<int> y1 = {1000, 0, 658, -15};
    vector<int> y2 = {-107, 1000, 987, -279};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1357644380312917;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {1};
    vector<int> y1 = {-10};
    vector<int> y2 = {-15};
    LaserShooting* pObj = new LaserShooting();
    clock_t start = clock();
    double result = pObj->numberOfHits(x, y1, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01053621279560712;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22504795&rd=13522&pm=10258
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
#include <complex>
#include <setjmp.h>
#include <ext/hash_map>
#include <queue>
using namespace std;
 
#define FR(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,v) FOR(i,(int)v.size())
#define FORALL(i,v) for(typeof(v.end())i=v.begin();i!=v.end();++i)
#define BEND(v) v.begin(),v.end()
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long ll; typedef long double ld;
 
struct LaserShooting {
double numberOfHits(vector <int> x, vector <int> y1, vector <int> y2) {
  double ret = 0;
  FORI(i,x) {
    double theta = atan2(y1[i], x[i]);
    double phi = atan2(y2[i], x[i]);
    ret += fabs(theta - phi);
  }
  return ret / M_PI;
}
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/