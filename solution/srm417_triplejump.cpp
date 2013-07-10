/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9944
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

class TripleJump {
public:
    vector<double> getProbabilities(int lower, int upper, int first, vector<int> opponents);
};

vector<double> TripleJump::getProbabilities(int lower, int upper, int first, vector<int> opponents) {
    vector<double> ret;
    return ret;
}


int test0() {
    int lower = 1;
    int upper = 2;
    int first = 1;
    vector<int> opponents = {1, 2, 3, 4};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.5, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int lower = 10;
    int upper = 10;
    int first = 10;
    vector<int> opponents = {1000};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int lower = 1;
    int upper = 1000;
    int first = 666;
    vector<int> opponents = {1000, 2000, 3000, 2000, 500, 100, 700, 666, 667, 668, 669};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.22222222222222227, 0.0, 0.7225553882210538, 0.05470936401867332, 5.125245365485975E-4, 5.010015019513148E-7, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int lower = 3;
    int upper = 7;
    int first = 5;
    vector<int> opponents = {9, 9, 19, 19, 19};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int lower = 1;
    int upper = 10;
    int first = 1;
    vector<int> opponents = {5};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.9753086419753086, 0.024691358024691357};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int lower = 1000;
    int upper = 1000;
    int first = 1000;
    vector<int> opponents = {3000, 3000, 3000};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int lower = 1;
    int upper = 1;
    int first = 1;
    vector<int> opponents = {1, 2, 3, 4};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int lower = 1;
    int upper = 2;
    int first = 1;
    vector<int> opponents = {1, 2, 3, 4, 5};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.5, 0.5, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int lower = 1;
    int upper = 10;
    int first = 5;
    vector<int> opponents = {1, 2, 3, 5, 10, 11, 12, 19};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.22222222222222227, 0.6234567901234567, 0.05555555555555558, 0.043209876543209846, 0.05555555555555558, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int lower = 498;
    int upper = 760;
    int first = 629;
    vector<int> opponents = {316, 561, 509, 370, 649, 444, 326, 180, 830, 445, 843, 927, 236, 855, 257, 223, 108, 973, 448, 325, 227, 640, 168, 782, 601, 710, 182, 835, 837, 385, 79, 211, 597, 565, 292, 207, 374, 920, 935, 898, 493, 896, 776, 222, 969, 793, 522, 84, 771, 151};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int lower = 278;
    int upper = 831;
    int first = 683;
    vector<int> opponents = {665, 180, 717, 49, 301, 894, 275, 551, 671, 168, 167, 188, 917, 417, 15, 640, 255, 405, 396, 873, 678, 712, 212, 443, 991, 632, 274, 884, 863, 536, 590, 152, 405, 203, 803, 635, 779, 270, 476, 676, 634, 745, 125, 954, 735, 455, 600, 12, 641, 177};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int lower = 484;
    int upper = 598;
    int first = 512;
    vector<int> opponents = {612, 579, 389, 623, 684, 456, 315, 369, 220, 258, 515, 593, 451, 932, 984, 587, 161, 39, 690, 412, 648, 911, 967, 239, 74, 96, 916, 765, 577, 241, 811, 950, 612, 62, 844, 518, 998, 192, 401, 654, 126, 35, 392, 811, 551, 379, 577, 811, 806, 405};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int lower = 79;
    int upper = 944;
    int first = 444;
    vector<int> opponents = {195, 492, 553, 189, 608, 335, 158, 473, 401, 939, 658, 588, 199, 226, 375, 933, 726, 683, 545, 49, 758, 847, 653, 374, 403, 693, 112, 97, 326, 234, 980, 971, 498, 541, 993, 825, 454, 745, 304, 141, 766, 768, 186, 276, 601, 174, 367, 689, 156, 558};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.8978375488656487, 0.006680477129205831, 0.004492632563734111, 0.01509706304921643, 0.002678338735006225, 0.03310234220989672, 0.006880283337231563, 0.014817067058705558, 4.41043803668717E-4, 0.0017107153596845892, 0.0025974807043335213, 0.0033900230545624854, 0.004741220889438291, 4.757927094123371E-4, 6.735941728758243E-4, 0.0022887500417654305, 3.5751278024664934E-4, 0.0017140566006214053, 2.405693474560877E-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int lower = 197;
    int upper = 458;
    int first = 205;
    vector<int> opponents = {348, 30, 252, 398, 407, 670, 306, 481, 846, 30, 227, 447, 778, 830, 677, 762, 626, 539, 49, 370, 455, 888, 453, 306, 331, 640, 517, 450, 946, 497, 210, 116, 427, 234, 791, 167, 203, 464, 637, 599, 684, 298, 269, 864, 826, 963, 316, 121, 489, 194};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.18323277697039092, 0.04155106354868551, 0.1736909323116219, 0.08631699475932542, 0.0674094625739492, 0.056135406115588427, 0.013446661088357459, 0.10763934763142058, 0.03540024368403283, 0.040163826132910585, 0.141982648522482, 0.008374803658196428, 0.007655495368535492, 0.024661998502664373, 0.00173955168009865, 0.0052480145623229335, 0.005350772889417321, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int lower = 356;
    int upper = 757;
    int first = 428;
    vector<int> opponents = {556, 48, 679, 312, 123, 784, 513, 406, 806, 3, 347, 914, 631, 699, 127, 505, 336, 660, 921, 688, 472, 138, 402, 167, 903, 703, 166, 935, 968, 695, 753, 171, 319, 316, 74, 754, 860, 328, 486, 988, 978, 989, 217, 731, 506, 947, 513, 962, 404, 256};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int lower = 220;
    int upper = 613;
    int first = 431;
    vector<int> opponents = {136, 976, 598, 89, 785, 564, 472, 240, 526, 275, 395, 312, 66, 912, 899, 570, 954, 469, 184, 652, 17, 835, 441, 994, 367, 99, 436, 220, 390, 984, 542, 161, 520, 413, 735, 300, 570, 386, 34, 557, 138, 444, 874, 80, 308, 333, 241, 997, 39, 77};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.9486043936833518, 0.002418273993357034, 0.007640062415425142, 0.0056458766324158915, 0.01338953311449087, 0.016859934347260186, 0.0029038711807781725, 0.002508918801675586, 2.9135831245308275E-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int lower = 711;
    int upper = 875;
    int first = 845;
    vector<int> opponents = {633, 796, 295, 792, 801, 147, 444, 707, 12, 249, 619, 649, 877, 546, 229, 558, 323, 105, 749, 816, 145, 350, 179, 423, 104, 874, 597, 172, 863, 911, 702, 760, 442, 120, 766, 228, 54, 533, 881, 757, 480, 918, 170, 763, 526, 795, 565, 590, 99, 280};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int lower = 813;
    int upper = 902;
    int first = 885;
    vector<int> opponents = {106, 365, 740, 374, 476, 143, 692, 35, 983, 603, 4, 936, 875, 535, 356, 212, 172, 371, 760, 600, 723, 530, 902, 407, 456, 887, 826, 258, 110, 903, 322, 354, 334, 564, 366, 978, 874, 241, 660, 763, 222, 435, 797, 969, 187, 670, 730, 322, 120, 602};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int lower = 4;
    int upper = 879;
    int first = 318;
    vector<int> opponents = {787, 667, 565, 622, 776, 590, 78, 135, 323, 297, 367, 219, 321, 663, 239, 791, 664, 996, 525, 462, 423, 928, 552, 711, 728, 916, 468, 375, 408, 328, 356, 504, 186, 726, 704, 707, 917, 582, 868, 990, 312, 737, 485, 613, 755, 11, 283, 23, 792, 551};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7068408163265306, 0.005227102040816223, 0.051260081632653165, 0.008570122448979589, 7.712653061224817E-4, 0.03548473469387747, 0.050029714285714344, 6.079999999999419E-4, 0.0024189387755102487, 0.00654432653061221, 0.012054857142857145, 0.009874285714285724, 0.004778448979591898, 0.0010475102040815587, 0.007689795918367381, 0.00200097959183676, 0.0014870204081632865, 0.017373387755102, 0.0013302857142857283, 4.408163265305909E-4, 0.01694889795918364, 0.003426612244897931, 0.008276244897959195, 0.002716734693877565, 0.005495510204081677, 0.0039477551020408175, 2.945306122449365E-4, 0.007199346938775442, 0.005170285714285683, 0.004181551020408181, 0.003341714285714281, 0.001089306122449063, 0.0059343673469387515, 0.0017534693877551133, 0.0028231836734693427, 4.702040816326747E-4, 5.100408163265513E-4, 5.851428571428396E-4, 2.6122448979482016E-6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int lower = 151;
    int upper = 390;
    int first = 306;
    vector<int> opponents = {474, 666, 207, 843, 819, 335, 634, 434, 854, 229, 152, 99, 417, 642, 871, 408, 410, 323, 206, 497, 974, 10, 856, 655, 819, 483, 264, 585, 271, 153, 703, 733, 63, 548, 147, 426, 472, 511, 291, 931, 334, 57, 884, 703, 622, 11, 436, 794, 938, 892};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.1098019992647187, 0.08193133873706701, 0.018565851438175046, 0.11914182174681817, 0.02773060695716123, 0.04745190035188446, 0.05842859893909419, 0.008088093695838794, 0.04545613697239187, 0.09369583865828668, 0.0, 0.08687698044502024, 0.16605976786120702, 0.05777209782741899, 0.0, 0.049552703909245266, 0.010110117119798367, 0.009217275607919961, 0.004201607114721395, 0.004201607114721395, 0.0017156562385112206, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int lower = 938;
    int upper = 941;
    int first = 938;
    vector<int> opponents = {2678, 234, 2517, 2755, 858, 144, 2603, 2177, 1944, 1969, 1184, 1674, 7, 2434, 1219, 1580, 1178, 1401, 1321, 2604, 272, 2211, 1343, 2427, 310, 895, 2634, 1416, 2246, 1589, 1740, 2989, 1682, 2163, 2727, 2446, 55, 1293, 2943, 1340, 1476, 1836, 2310, 2255, 653, 559, 139, 593, 2769, 2327};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int lower = 453;
    int upper = 975;
    int first = 868;
    vector<int> opponents = {1153, 2066, 1984, 91, 2171, 271, 1215, 456, 1206, 1439, 1443, 1922, 1195, 1130, 1180, 1693, 1328, 1751, 2509, 2526, 1495, 79, 2021, 1625, 1846, 2611, 1355, 314, 1692, 102, 1316, 2837, 1554, 924, 724, 63, 2394, 573, 2599, 1722, 1158, 1728, 2953, 773, 2922, 1801, 374, 1495, 469, 2746};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.009512485136741982, 0.06911414982164091, 0.009380367287620539, 0.06844989063578048, 0.01874788978435435, 0.15467880682902474, 0.38090860380793007, 0.13275091381512305, 0.044507200422777116, 0.031027509872139314, 0.040728996931929884, 0.030680700518195603, 0.008174791914387636, 0.0013376932223543303, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int lower = 920;
    int upper = 947;
    int first = 929;
    vector<int> opponents = {2589, 801, 1341, 1858, 2692, 2006, 502, 776, 1268, 752, 676, 2832, 1664, 2485, 164, 1348, 371, 557, 912, 666, 849, 2784, 2530, 828, 745, 637, 1820, 853, 478, 2055, 351, 1553, 99, 77, 2806, 1272, 1304, 1006, 2398, 564, 2330, 304, 1945, 2703, 2336, 1248, 997, 1038, 1124, 2955};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.19821673525377223, 0.6474622770919067, 0.154320987654321, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int lower = 312;
    int upper = 459;
    int first = 379;
    vector<int> opponents = {483, 1614, 661, 514, 1746, 2806, 2821, 435, 189, 221, 2582, 2302, 1372, 1523, 910, 205, 1302, 2226, 672, 1329, 2476, 999, 1928, 2999, 2260, 2574, 1255, 2413, 2585, 2266, 716, 1234, 2748, 2070, 2601, 2477, 9, 2313, 1872, 541, 1847, 2200, 1648, 2940, 1546, 1148, 590, 2379, 2854, 2429};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.04081632653061227, 0.0510204081632653, 0.4216761534545792, 0.48648711185154325, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int lower = 109;
    int upper = 505;
    int first = 401;
    vector<int> opponents = {1897, 927, 2690, 2519, 2833, 562, 2090, 2753, 2793, 382, 150, 2453, 2669, 2699, 1188, 2722, 1521, 41, 791, 2497, 2077, 1535, 1692, 957, 2015, 2515, 1314, 416, 125, 2647, 1309, 680, 2913, 1623, 164, 1807, 2661, 2285, 1637, 1996, 2853, 2588, 967, 1838, 743, 2808, 881, 953, 1211, 890};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.030000127538006346, 0.003172507907356372, 0.09436537088052235, 0.03102043158861345, 0.45530749413325167, 0.02187276808488936, 0.00857055402509943, 0.05322161003979187, 0.06830616773798592, 0.015294995408631773, 0.12454086317722679, 0.04530149984695442, 0.03716138659320478, 0.01186422303846546, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int lower = 749;
    int upper = 754;
    int first = 749;
    vector<int> opponents = {1738, 1491, 2276, 2161, 2957, 1571, 1709, 2706, 297, 1013, 1912, 324, 439, 2770, 484, 563, 1081, 2243, 2649, 1864, 1223, 2612, 2682, 305, 328, 330, 637, 44, 2227, 1593, 255, 2122, 199, 2855, 675, 2569, 2558, 23, 1178, 2766, 654, 766, 2126, 45, 667, 1788, 2968, 388, 2282, 2697};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int lower = 789;
    int upper = 942;
    int first = 942;
    vector<int> opponents = {2019, 1271, 2301, 2618, 1077, 2232, 1389, 2854, 2008, 2938, 875, 1405, 2728, 1005, 667, 1211, 1504, 235, 1043, 2986, 1151, 539, 161, 1414, 771, 1517, 1069, 1851, 99, 1200, 2984, 382, 1528, 2773, 2911, 2023, 2473, 449, 2830, 2363, 28, 1557, 513, 2669, 2697, 105, 1832, 1037, 1618, 300};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.059998291255500054, 0.14513648596693574, 0.15030543807937113, 0.17036182664787058, 0.2690631808278867, 0.20513477722243578, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int lower = 102;
    int upper = 766;
    int first = 239;
    vector<int> opponents = {1307, 1391, 1210, 1265, 313, 273, 2885, 533, 913, 1144, 573, 966, 785, 614, 1812, 2416, 2942, 1057, 1191, 658, 627, 2329, 920, 1217, 538, 229, 1797, 2676, 1236, 1422, 2904, 2460, 1474, 1564, 1065, 2688, 2809, 390, 694, 2064, 643, 1155, 1038, 2979, 376, 560, 2347, 979, 1206, 2258};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.04859309224851215, 0.05144070256931337, 0.038095151691101795, 0.025628492887211446, 0.08039991290463061, 0.046201371752068426, 0.034235964944113906, 0.023464717302946636, 0.008851293729133514, 0.005107780519668925, 0.0194773824212513, 0.04882784148642766, 0.015505924299608065, 0.11542291152562062, 0.011213528814051354, 0.02605036108288572, 0.07567430868050518, 0.015612525402816102, 0.05216649731455936, 0.0075176458847437955, 0.11786906662795771, 0.061196971621425456, 0.01902489475976188, 0.0070594879518072196, 0.0069676295543620315, 0.005233660545797658, 0.013995363986064713, 0.003641448323414176, 0.005289229205980517, 0.0010490002177384605, 0.009185839744520252, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int lower = 189;
    int upper = 587;
    int first = 575;
    vector<int> opponents = {911, 545, 2823, 2038, 1461, 137, 2448, 1857, 2776, 1723, 1161, 1888, 2421, 1620, 1947, 175, 2144, 2668, 136, 436, 1810, 1564, 1229, 910, 873, 2780, 2306, 1971, 2329, 1086, 1635, 2578, 2538, 2738, 2655, 2732, 406, 2761, 2341, 420, 2873, 1348, 1552, 2668, 2265, 421, 2193, 1613, 1679, 2981};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.002133784500391401, 0.013332996641498953, 0.025554910229539665, 0.011505391277998031, 0.005855281432287036, 0.04964836746546805, 0.014469331582535855, 0.1393115072851695, 0.24569770965379661, 0.25204224640791906, 0.1038862654983459, 0.08072712810282578, 0.05583507992222414, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int lower = 264;
    int upper = 948;
    int first = 322;
    vector<int> opponents = {1311, 1736, 1606, 279, 2580, 1853, 2347, 2113, 601, 504, 1881, 1312, 2113, 1669, 316, 1952, 2569, 424, 961, 1803, 222, 221, 983, 1356, 1532, 1746, 317, 1882, 2759, 1007, 1972, 1877, 440, 1984, 2673, 2578, 2588, 491, 559, 601, 839, 1540, 2132, 2802, 419, 2556, 579, 702, 1934, 2692};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.007904141445231013, 0.0038783300844704213, 0.0, 0.04673553401046475, 0.006155740227762413, 0.010943538182688659, 0.010580178516466643, 0.0344550459970589, 7.192383981396155E-4, 0.0028983276905714395, 0.018108135836667733, 0.04167949112547442, 0.054032651072124877, 0.010195444752231414, 0.0738229284224205, 0.07816828254847641, 0.0909895352416129, 0.01165315823672236, 0.2234533702677748, 0.04551827912862072, 9.864146233029558E-4, 0.2007797270955165, 0.007438186108546296, 0.005736807906706276, 0.01316751308094799, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int lower = 416;
    int upper = 927;
    int first = 722;
    vector<int> opponents = {610, 61, 2295, 576, 1984, 237, 1644, 916, 1247, 2664, 2043, 520, 1278, 2196, 2705, 197, 1014, 2730, 895, 2484, 1300, 2118, 417, 2213, 1128, 390, 1217, 1463, 2490, 57, 2565, 2312, 2768, 286, 1817, 1092, 1015, 2643, 2112, 2674, 354, 2235, 2722, 2524, 1923, 1396, 2935, 2493, 1751, 1071};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.3169335289004064E-4, 0.004945982896817949, 0.00801352629623815, 9.70814296820258E-4, 0.002045028932946776, 0.11724832548894955, 0.01774081747542325, 0.07146112338724192, 0.02965674916992514, 0.024186105292182458, 0.1251603662669798, 0.01059279031560073, 0.12987274098980928, 0.10382351476901519, 0.09332646550832757, 0.12827769501495478, 0.05813396854331898, 0.05880224110661336, 0.015510050895944816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int lower = 280;
    int upper = 447;
    int first = 347;
    vector<int> opponents = {2317, 2918, 983, 2050, 1140, 814, 1143, 2205, 2839, 2217, 1876, 2091, 2649, 1506, 1035, 1485, 538, 2766, 2544, 2849, 376, 1287, 2185, 2858, 204, 444, 2377, 230, 1534, 1197, 1547, 1227, 838, 265, 291, 548, 2455, 1859, 870, 897, 2292, 1543, 2809, 2278, 2440, 1046, 929, 2520, 840, 347};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0035139302233855637, 0.03119509484025962, 0.13747355588224744, 0.010703144608985637, 0.47072322421026214, 0.05265516870450704, 0.19018250923303104, 0.09487611603141022, 0.008677256265911315, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int lower = 333;
    int upper = 428;
    int first = 343;
    vector<int> opponents = {1127, 924, 1244, 2233, 1192, 603, 1370, 1239, 1444, 2875, 2779, 485, 902, 517, 1277, 15, 1343, 1295, 2054, 1487, 1097, 2989, 581, 1709, 2095, 696, 2159, 1328, 1965, 776, 2955, 1721, 734, 19, 2639, 2680, 1203, 196, 1875, 1579, 2872, 967, 687, 1629, 1412, 2953, 962, 2661, 744, 1715};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0027146814404432136, 0.2844875346260387, 0.28376731301939057, 0.4290304709141275, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int lower = 179;
    int upper = 753;
    int first = 335;
    vector<int> opponents = {2213, 2885, 34, 2609, 1591, 794, 684, 773, 2459, 2759, 1460, 352, 1463, 78, 2420, 1990, 3000, 787, 2018, 1347, 2821, 430, 197, 1055, 2228, 326, 2804, 1183, 136, 2546, 658, 758, 2096, 464, 357, 1073, 2975, 2881, 1806, 1784, 138, 2311, 74, 1183, 294, 2498, 1569, 1597, 2288, 612};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0018590124925639533, 0.0030715439060811645, 0.0854189683011813, 0.004498051451395507, 0.017427673032330185, 0.10455996794910696, 0.0034554868943413586, 0.15004886547123317, 0.2652939819592322, 0.0, 0.14523060860275105, 0.02026854763321151, 0.1833866503174738, 0.002071471063142649, 0.0036967791280700935, 0.003300695650062524, 0.006411696147822554, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int lower = 309;
    int upper = 821;
    int first = 501;
    vector<int> opponents = {2498, 2160, 132, 1520, 1288, 107, 789, 848, 1565, 2160, 2279, 1750, 2413, 309, 731, 800, 251, 2993, 1771, 78, 2072, 1525, 2080, 816, 1072, 325, 368, 1923, 138, 2876, 2902, 775, 1549, 1663, 1239, 815, 707, 1561, 1156, 2617, 316, 459, 413, 1787, 2160, 2868, 1347, 985, 2093, 1469};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00476837158203125, 0.0028018951416015625, 0.002044677734375, 0.08270072937011719, 0.1494140625, 0.022216796875, 0.030641555786132812, 0.1448650360107422, 0.18114471435546875, 0.00677490234375, 0.01995849609375, 0.03826904296875, 0.0076961517333984375, 0.07305335998535156, 0.13449859619140625, 0.04467582702636719, 0.027009963989257812, 0.024854660034179688, 0.0026111602783203125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int lower = 870;
    int upper = 877;
    int first = 876;
    vector<int> opponents = {2914, 397, 810, 1759, 1670, 853, 2012, 944, 2496, 1661, 218, 1858, 469, 530, 2999, 2794, 323, 2647, 444, 2356, 563, 1547, 3000, 2140, 1804, 1015, 1938, 2171, 1107, 1621, 449, 1142, 990, 2836, 2018, 648, 2075, 11, 73, 2038, 1965, 2592, 1741, 154, 1437, 349, 2034, 2053, 315, 2468};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int lower = 474;
    int upper = 894;
    int first = 610;
    vector<int> opponents = {1296, 2193, 699, 261, 2852, 2612, 901, 2116, 1027, 36, 21, 1213, 2945, 2638, 517, 1278, 1295, 474, 682, 1204, 1479, 2655, 1209, 2829, 332, 1438, 159, 679, 632, 703, 769, 2689, 2779, 2393, 91, 813, 1984, 2038, 2621, 1880, 1497, 284, 1523, 2317, 309, 1, 2212, 2895, 44, 2442};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.086167800453465E-5, 0.018526077097505665, 0.07946428571428571, 0.021057256235827687, 0.10628968253968256, 0.14193877551020412, 0.11846938775510202, 0.22029478458049884, 0.29388888888888887, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int lower = 743;
    int upper = 848;
    int first = 767;
    vector<int> opponents = {569, 2412, 1677, 431, 2879, 118, 1226, 2995, 1289, 1223, 667, 949, 1654, 2332, 182, 1977, 1884, 444, 1200, 1221, 1949, 1579, 2220, 1047, 1192, 1625, 1026, 499, 1810, 1143, 2073, 2860, 342, 724, 341, 478, 1493, 2406, 2516, 1190, 1822, 2400, 1680, 2161, 524, 209, 2929, 1254, 2960, 2406};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.11795918367346941, 0.029387755102040836, 0.0, 0.0326530612244898, 0.5369614512471655, 0.2830385487528344, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int lower = 613;
    int upper = 704;
    int first = 645;
    vector<int> opponents = {1375, 2433, 123, 63, 2023, 479, 1868, 229, 2306, 2856, 292, 2058, 2632, 853, 2523, 465, 2579, 583, 2752, 1124, 1003, 2945, 1637, 2915, 2043, 348, 732, 1637, 1230, 1578, 542, 776, 2572, 136, 2242, 1980, 15, 2206, 2472, 55, 1884, 1024, 2624, 2187, 940, 1153, 702, 1278, 27, 2462};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.006037918125830219, 0.048303345006641685, 0.2674193937930202, 0.6680352614418548, 0.010204081632653073, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int lower = 260;
    int upper = 528;
    int first = 381;
    vector<int> opponents = {670, 1340, 890, 2704, 294, 294, 2431, 2841, 1920, 223, 48, 1823, 2158, 641, 1139, 1345, 2542, 1822, 79, 1145, 530, 1347, 695, 474, 342, 945, 1838, 2136, 2276, 1859, 1800, 2971, 2236, 2204, 290, 2926, 2633, 1371, 2579, 2064, 2578, 2892, 671, 1081, 2438, 779, 2747, 2769, 1698, 1040};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.03032412564045443, 0.026063711294274896, 0.0025339719313878864, 0.006578580975718382, 0.5200420472265539, 0.02013254622410332, 0.1687736689685898, 0.09104895299621296, 0.12102500556916906, 0.013477389173535359, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int lower = 262;
    int upper = 906;
    int first = 903;
    vector<int> opponents = {160, 765, 1630, 1851, 39, 764, 884, 586, 2606, 1928, 2251, 7, 1342, 988, 378, 1981, 524, 2054, 941, 312, 1419, 2927, 2901, 1792, 509, 929, 2182, 2190, 1338, 875, 1959, 1628, 2813, 1821, 404, 1752, 2861, 666, 1363, 2391, 778, 326, 2950, 704, 455, 1961, 586, 262, 322, 340};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.014323569692527287, 0.11223404768334552, 0.1330002700513098, 0.07273181011535051, 0.010204081632653073, 0.18355532193974, 0.10393720342579371, 0.02623355580417419, 0.002570309787431002, 0.03860648701824787, 0.08586787739670532, 0.029585085451950155, 0.026536157941437377, 0.033274179236912116, 0.07765904093206288, 9.741136530226902E-4, 0.04870688823733649, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int lower = 261;
    int upper = 447;
    int first = 331;
    vector<int> opponents = {43, 2828, 1041, 802, 687, 2440, 1179, 1870, 960, 2835, 516, 1068, 172, 106, 721, 549, 1095, 1737, 1871, 1235, 1209, 1204, 1372, 285, 1503, 132, 1842, 852, 1686, 1093, 1192, 1036, 1975, 437, 1044, 1429, 2206, 44, 20, 2484, 1356, 921, 1997, 1910, 1755, 995, 2655, 2879, 1107, 83};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0036998496936061906, 0.002673719505145099, 0.009365244536940709, 0.014842756388021728, 0.1706555671175859, 0.043010752688172005, 0.007573129841600218, 0.1044195860793154, 0.1172389871661465, 0.01582552896288586, 0.026693837437853973, 0.19258006705977582, 0.12595386749913284, 0.09863857093305584, 0.06682853509076192, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int lower = 167;
    int upper = 749;
    int first = 508;
    vector<int> opponents = {1693, 2669, 436, 1247, 2985, 2756, 1546, 2028, 671, 989, 1921, 2074, 781, 2130, 695, 792, 2769, 2286, 1811, 1535, 992, 831, 995, 1064, 1442, 956, 48, 73, 594, 1375, 2478, 2256, 2139, 1311, 517, 1789, 1446, 2913, 2061, 926, 1280, 781, 1705, 808, 910, 2405, 1515, 351, 2717, 2186};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.010665025212267204, 0.04546474415748513, 0.0133796247092028, 0.06422928401884719, 0.010876111524427023, 0.16773390725192194, 0.015117027432363761, 0.028400703817857476, 0.10704733057002164, 0.006636671744547407, 0.11109782595859746, 0.0946611400432209, 0.04150429258039001, 0.04106440641938569, 0.16937240939525988, 0.0381948134764587, 0.0013418004038686648, 0.0013152300988414911, 0.012713890955468155, 0.00876820065894357, 0.003589943434772924, 0.006825616135850976, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int lower = 700;
    int upper = 788;
    int first = 704;
    vector<int> opponents = {1492, 789, 2647, 2156, 1451, 1817, 2814, 504, 844, 2502, 952, 1955, 1991, 835, 2611, 846, 278, 1798, 687, 457, 4, 2654, 527, 589, 2825, 28, 535, 2768, 148, 1359, 1793, 437, 2793, 1458, 1155, 1373, 654, 2062, 876, 2430, 2821, 584, 2271, 667, 1572, 2479, 1299, 1918, 2847, 1641};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.005229855371900828, 0.820183367768595, 0.1745867768595042, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int lower = 977;
    int upper = 987;
    int first = 979;
    vector<int> opponents = {2403, 2944, 2, 905, 978, 1861, 1573, 1399, 2412, 2373, 212, 1466, 165, 1305, 2331, 2980, 1272, 1817, 473, 591, 2366, 2646, 2124, 921, 966, 74, 105, 2963, 677, 2473, 2727, 2476, 2387, 127, 1146, 617, 1647, 2352, 125, 474, 1626, 2097, 1015, 129, 2456, 777, 1845, 2092, 147, 925};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.4049999999999999, 0.5950000000000001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int lower = 673;
    int upper = 956;
    int first = 680;
    vector<int> opponents = {910, 208, 2679, 2095, 144, 1637, 2667, 2377, 1475, 82, 1268, 1207, 2349, 2584, 1201, 715, 357, 163, 7, 1318, 159, 239, 212, 442, 1022, 1899, 2311, 2420, 1844, 1060, 1297, 114, 2285, 2914, 1296, 1439, 494, 522, 2494, 1951, 1169, 739, 2224, 904, 1007, 568, 787, 877, 2689, 1056};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 3.995554945123544E-4, 0.05955874090074792, 0.12473623094307588, 0.10389067162781404, 0.08006093221291316, 0.12431170323015633, 0.08825181985041652, 0.17403763313313936, 0.21502952964826627, 0.02972318295895815, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int lower = 844;
    int upper = 940;
    int first = 935;
    vector<int> opponents = {1373, 1715, 395, 578, 1256, 1226, 1225, 249, 766, 620, 123, 1121, 1186, 1994, 2877, 320, 330, 2417, 1066, 813, 1933, 397, 2388, 1971, 2072, 532, 2556, 1263, 469, 2152, 2478, 2330, 2957, 2818, 1073, 2000, 2280, 1052, 319, 2170, 357, 2080, 1121, 953, 1921, 2758, 1817, 1782, 2215, 1005};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.17626953125, 0.82373046875, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int lower = 361;
    int upper = 461;
    int first = 404;
    vector<int> opponents = {1189, 23, 1583, 122, 238, 982, 397, 868, 1893, 991, 2663, 414, 2166, 308, 851, 1463, 1439, 2716, 1867, 2356, 2849, 2822, 2416, 1530, 2155, 1670, 2952, 1145, 2271, 2024, 1990, 2390, 2321, 2456, 491, 2750, 2394, 2382, 2012, 1858, 2289, 497, 1208, 1673, 1783, 2450, 367, 1371, 2268, 724};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.6638000000000001, 0.13774999999999993, 0.1804, 0.01805000000000001, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int lower = 304;
    int upper = 432;
    int first = 401;
    vector<int> opponents = {1695, 2573, 2538, 954, 2122, 1211, 2294, 1244, 1964, 783, 1994, 2234, 1290, 727, 510, 2375, 2458, 1004, 631, 218, 2745, 2618, 2547, 1773, 1964, 1132, 1162, 915, 273, 2580, 1993, 2818, 423, 917, 2767, 662, 2394, 561, 662, 1107, 2960, 868, 2263, 2574, 331, 2519, 902, 1538, 1433, 1468};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.013458251953125, 0.075531005859375, 0.234771728515625, 0.21453857421875, 0.168609619140625, 0.2930908203125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int lower = 453;
    int upper = 621;
    int first = 498;
    vector<int> opponents = {68, 469, 2185, 148, 1108, 1866, 2731, 1328, 1084, 1861, 1452, 2472, 1473, 884, 22, 819, 1356, 1856, 2082, 2878, 2758, 1894, 1773, 2902, 307, 601, 2240, 244, 659, 1291, 1900, 2754, 2154, 411, 2814, 1849, 2642, 2150, 1940, 2639, 1196, 1937, 2907, 2210, 2523, 2060, 697, 94, 198, 300};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.915656887755102, 0.0435267857142857, 0.04081632653061229, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int lower = 3;
    int upper = 10;
    int first = 3;
    vector<int> opponents = {23, 20, 15, 10, 14, 24, 22, 23, 18, 19, 21, 10, 25, 14, 19, 23, 16, 15, 13, 17, 20, 12, 21, 12, 21, 22, 21, 10, 22, 17, 15, 17, 17, 18, 14, 24, 21, 10, 17, 10, 13, 10, 18, 12, 20, 13, 13, 23, 13, 18};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.010204081632653052, 0.0, 0.0, 0.030612244897959218, 0.0, 0.0, 0.0, 0.0, 0.0510204081632653, 0.0, 0.0, 0.0714285714285714, 0.0, 0.09183673469387751, 0.0, 0.0, 0.0, 0.1122448979591838, 0.0, 0.0, 0.0, 0.0, 0.13265306122448972, 0.13265306122448983, 0.0, 0.0, 0.11224489795918369, 0.0, 0.0, 0.09183673469387754, 0.0, 0.0, 0.0, 0.0, 0.0714285714285714, 0.0, 0.0, 0.08163265306122447, 0.0, 0.0, 0.0, 0.0, 0.0, 0.010204081632653073};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int lower = 4;
    int upper = 7;
    int first = 5;
    vector<int> opponents = {10, 21, 11, 23, 16, 14, 11, 23, 14, 10, 19, 12, 15, 25, 18, 25, 13, 20, 12, 23, 13, 19, 19, 16, 23, 14, 17, 24, 17, 20, 15, 19, 20, 15, 13, 23, 11, 11, 13, 24, 13, 24, 21, 12, 17, 11, 21, 13, 22, 24};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05555555555555553, 0.16666666666666674, 0.0, 0.0, 0.27777777777777773, 0.0, 0.2777777777777778, 0.0, 0.0, 0.16666666666666663, 0.0, 0.0, 0.05555555555555558, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int lower = 3;
    int upper = 8;
    int first = 8;
    vector<int> opponents = {22, 21, 15, 17, 20, 25, 21, 20, 24, 21, 14, 21, 16, 12, 15, 23, 11, 10, 24, 21, 14, 23, 21, 20, 11, 14, 11, 24, 17, 16, 11, 24, 17, 13, 19, 11, 14, 21, 20, 20, 11, 22, 13, 15, 19, 11, 17, 15, 19, 12};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.01999999999999999, 0.0, 0.05999999999999997, 0.0, 0.10000000000000009, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.14, 0.0, 0.0, 0.0, 0.0, 0.17999999999999994, 0.0, 0.0, 0.32000000000000006, 0.0, 0.0, 0.0, 0.09999999999999987, 0.0, 0.06000000000000005, 0.0, 0.0, 0.0, 0.020000000000000018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int lower = 5;
    int upper = 6;
    int first = 6;
    vector<int> opponents = {15, 16, 17, 25, 18, 13, 21, 11, 21, 15, 23, 19, 21, 13, 15, 22, 19, 17, 23, 23, 11, 18, 18, 23, 11, 17, 20, 23, 16, 15, 22, 15, 23, 22, 25, 13, 13, 17, 16, 20, 15, 24, 25, 11, 14, 25, 25, 18, 10, 20};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int lower = 4;
    int upper = 8;
    int first = 6;
    vector<int> opponents = {17, 15, 13, 15, 15, 20, 16, 10, 24, 16, 18, 23, 15, 21, 19, 25, 23, 15, 15, 13, 18, 12, 15, 17, 13, 10, 23, 18, 15, 25, 18, 25, 20, 25, 25, 15, 12, 10, 21, 11, 15, 11, 24, 18, 20, 23, 25, 18, 21, 10};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.03125, 0.0, 0.0, 0.09375, 0.0, 0.0, 0.15625, 0.21875, 0.0, 0.0, 0.0, 0.0, 0.0, 0.21875, 0.0, 0.15625, 0.0, 0.09375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.03125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int lower = 7;
    int upper = 7;
    int first = 7;
    vector<int> opponents = {21, 15, 18, 19, 25, 20, 18, 17, 15, 24, 11, 17, 11, 18, 25, 13, 14, 19, 14, 19, 11, 23, 14, 20, 18, 21, 22, 21, 13, 21, 19, 22, 23, 11, 21, 25, 10, 23, 12, 12, 10, 25, 10, 20, 20, 15, 22, 18, 19, 14};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int lower = 4;
    int upper = 7;
    int first = 6;
    vector<int> opponents = {16, 10, 19, 22, 16, 12, 14, 19, 14, 25, 22, 22, 19, 20, 13, 14, 17, 20, 24, 16, 15, 23, 21, 18, 12, 24, 18, 14, 22, 13, 13, 24, 12, 19, 24, 18, 24, 13, 17, 11, 20, 16, 18, 15, 14, 19, 23, 23, 19, 15};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05555555555555553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.16666666666666674, 0.0, 0.0, 0.0, 0.27777777777777773, 0.0, 0.2777777777777778, 0.0, 0.0, 0.0, 0.16666666666666663, 0.0, 0.0, 0.05555555555555558, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int lower = 7;
    int upper = 9;
    int first = 7;
    vector<int> opponents = {13, 10, 24, 17, 22, 15, 16, 24, 15, 11, 22, 19, 15, 21, 22, 21, 22, 13, 15, 25, 15, 14, 22, 22, 23, 22, 15, 22, 11, 14, 13, 11, 18, 19, 10, 23, 22, 19, 18, 13, 18, 16, 11, 11, 23, 24, 13, 11, 20, 20};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.125, 0.0, 0.0, 0.375, 0.0, 0.0, 0.375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int lower = 4;
    int upper = 5;
    int first = 4;
    vector<int> opponents = {12, 20, 17, 16, 25, 11, 22, 13, 24, 20, 21, 16, 24, 21, 21, 20, 24, 10, 25, 21, 25, 15, 10, 12, 16, 23, 12, 23, 24, 21, 12, 16, 10, 11, 17, 15, 18, 14, 21, 10, 15, 12, 23, 24, 19, 10, 18, 24, 22, 23};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int lower = 6;
    int upper = 9;
    int first = 6;
    vector<int> opponents = {15, 13, 21, 16, 21, 25, 21, 23, 14, 17, 22, 12, 11, 24, 17, 22, 13, 15, 16, 20, 17, 12, 12, 20, 11, 16, 15, 20, 14, 10, 18, 18, 13, 13, 20, 20, 17, 20, 15, 24, 15, 22, 18, 17, 18, 20, 18, 13, 14, 24};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.05555555555555553, 0.16666666666666674, 0.0, 0.0, 0.27777777777777773, 0.0, 0.0, 0.2777777777777778, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2222222222222222, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int lower = 6;
    int upper = 10;
    int first = 10;
    vector<int> opponents = {11, 14, 18, 19, 17, 16, 19, 13, 10, 14, 23, 20, 18, 12, 11, 17, 20, 22, 12, 17, 22, 17, 15, 17, 19, 16, 21, 15, 25, 24, 24, 17, 22, 24, 12, 10, 11, 18, 21, 18, 13, 17, 24, 19, 20, 20, 15, 17, 17, 25};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.71875, 0.0, 0.15625, 0.0, 0.0, 0.0, 0.09375, 0.03125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int lower = 4;
    int upper = 8;
    int first = 7;
    vector<int> opponents = {12, 16, 16, 15, 16, 13, 10, 23, 12, 21, 16, 15, 14, 13, 17, 18, 24, 22, 16, 10, 10, 22, 13, 25, 14, 23, 16, 19, 12, 10, 25, 24, 24, 13, 18, 11, 25, 18, 21, 14, 18, 11, 12, 19, 21, 24, 14, 10, 15, 21};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.03125, 0.0, 0.09375, 0.0, 0.0, 0.0, 0.375, 0.0, 0.21875, 0.0, 0.0, 0.0, 0.15625, 0.09375, 0.0, 0.0, 0.0, 0.0, 0.0, 0.03125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int lower = 3;
    int upper = 6;
    int first = 6;
    vector<int> opponents = {10, 15, 13, 10, 17, 13, 25, 12, 24, 20, 14, 19, 10, 22, 13, 18, 20, 24, 25, 20, 18, 24, 24, 19, 20, 11, 21, 13, 12, 15, 10, 19, 18, 11, 20, 24, 10, 22, 18, 13, 10, 16, 13, 16, 19, 13, 11, 18, 18, 16};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05555555555555553, 0.16666666666666674, 0.0, 0.0, 0.27777777777777773, 0.0, 0.2777777777777778, 0.16666666666666663, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05555555555555558, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int lower = 4;
    int upper = 10;
    int first = 9;
    vector<int> opponents = {20, 15, 10, 14, 10, 13, 23, 17, 19, 13, 23, 20, 24, 13, 15, 18, 11, 11, 14, 15, 20, 23, 22, 21, 20, 23, 25, 15, 20, 19, 16, 11, 19, 12, 10, 13, 23, 11, 14, 15, 14, 25, 17, 19, 18, 13, 15, 17, 20, 22};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.22222222222222227, 0.0, 0.12499999999999989, 0.15277777777777785, 0.0, 0.0, 0.0, 0.0, 0.15277777777777768, 0.0, 0.1250000000000001, 0.09722222222222221, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06944444444444442, 0.0, 0.0, 0.0, 0.04166666666666674, 0.0, 0.01388888888888884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int lower = 7;
    int upper = 9;
    int first = 7;
    vector<int> opponents = {20, 24, 12, 20, 19, 22, 10, 16, 11, 15, 16, 21, 12, 10, 17, 14, 17, 15, 25, 17, 19, 11, 22, 23, 19, 11, 20, 23, 16, 20, 10, 13, 21, 25, 15, 13, 14, 19, 20, 22, 21, 25, 17, 11, 14, 15, 24, 24, 20, 19};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.125, 0.0, 0.0, 0.375, 0.0, 0.375, 0.0, 0.0, 0.125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int lower = 7;
    int upper = 8;
    int first = 8;
    vector<int> opponents = {17, 22, 16, 14, 25, 22, 11, 20, 13, 25, 16, 16, 23, 17, 14, 22, 19, 14, 12, 12, 12, 22, 20, 24, 12, 21, 15, 24, 15, 11, 25, 24, 24, 15, 16, 11, 18, 12, 18, 15, 22, 18, 18, 17, 25, 12, 21, 22, 18, 11};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int lower = 7;
    int upper = 8;
    int first = 7;
    vector<int> opponents = {10, 21, 16, 12, 10, 12, 25, 16, 21, 19, 23, 23, 25, 24, 16, 24, 20, 10, 25, 13, 23, 11, 10, 11, 10, 13, 13, 13, 14, 17, 23, 13, 15, 13, 19, 24, 18, 12, 15, 19, 23, 10, 12, 25, 25, 24, 18, 15, 14, 18};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int lower = 4;
    int upper = 9;
    int first = 7;
    vector<int> opponents = {16, 18, 16, 24, 24, 17, 25, 24, 11, 19, 19, 15, 14, 18, 15, 13, 17, 20, 11, 17, 17, 25, 12, 21, 18, 11, 12, 25, 18, 19, 23, 14, 21, 11, 24, 25, 15, 19, 21, 14, 25, 23, 18, 18, 14, 23, 21, 12, 16, 23};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.01999999999999999, 0.0, 0.0, 0.0, 0.05999999999999997, 0.0, 0.0, 0.0, 0.2400000000000001, 0.0, 0.0, 0.0, 0.17999999999999994, 0.17999999999999994, 0.0, 0.0, 0.0, 0.14000000000000012, 0.0, 0.0, 0.0, 0.0, 0.0, 0.09999999999999987, 0.0, 0.0, 0.0, 0.06000000000000005, 0.0, 0.0, 0.020000000000000018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int lower = 5;
    int upper = 10;
    int first = 9;
    vector<int> opponents = {15, 15, 17, 22, 12, 24, 10, 25, 11, 25, 13, 18, 13, 19, 22, 12, 17, 19, 20, 10, 16, 11, 24, 19, 20, 17, 20, 20, 19, 18, 14, 11, 11, 11, 19, 19, 25, 23, 22, 25, 10, 11, 20, 14, 17, 13, 22, 12, 20, 18};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.32000000000000006, 0.0, 0.0, 0.0, 0.17999999999999994, 0.0, 0.17999999999999994, 0.14000000000000012, 0.0, 0.0, 0.0, 0.15999999999999992, 0.0, 0.0, 0.0, 0.0, 0.0, 0.020000000000000018, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int lower = 7;
    int upper = 8;
    int first = 8;
    vector<int> opponents = {21, 11, 24, 21, 16, 25, 20, 17, 16, 23, 23, 15, 15, 11, 10, 11, 20, 19, 16, 24, 19, 16, 20, 24, 23, 19, 20, 13, 22, 10, 18, 11, 23, 10, 21, 16, 14, 23, 21, 14, 19, 11, 25, 11, 16, 15, 22, 22, 12, 25};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int lower = 7;
    int upper = 8;
    int first = 7;
    vector<int> opponents = {10, 10, 14, 17, 11, 13, 23, 22, 24, 16, 16, 13, 10, 12, 13, 12, 15, 22, 12, 17, 24, 23, 20, 24, 12, 15, 20, 21, 24, 16, 16, 22, 20, 14, 19, 15, 16, 21, 12, 10, 18, 15, 23, 24, 11, 16, 25, 23, 12, 18};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int lower = 4;
    int upper = 6;
    int first = 5;
    vector<int> opponents = {19, 10, 25, 25, 24, 22, 21, 20, 23, 14, 22, 25, 17, 13, 18, 16, 11, 23, 12, 25, 24, 10, 13, 15, 17, 21, 17, 11, 20, 19, 20, 23, 17, 13, 11, 18, 10, 12, 15, 20, 23, 21, 13, 15, 25, 21, 15, 25, 13, 16};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.125, 0.0, 0.375, 0.0, 0.0, 0.0, 0.375, 0.125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int lower = 6;
    int upper = 10;
    int first = 9;
    vector<int> opponents = {15, 13, 23, 13, 17, 16, 20, 22, 19, 17, 10, 24, 10, 22, 23, 21, 22, 18, 10, 23, 25, 18, 22, 21, 22, 18, 21, 15, 25, 19, 17, 12, 15, 23, 24, 11, 25, 18, 11, 15, 19, 23, 15, 15, 20, 20, 25, 10, 17, 21};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5, 0.0, 0.0, 0.0, 0.21875, 0.0, 0.15625, 0.0, 0.0, 0.0, 0.0, 0.09375, 0.0, 0.0, 0.0, 0.0, 0.03125, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int lower = 3;
    int upper = 3;
    int first = 3;
    vector<int> opponents = {10, 16, 12, 11, 14, 24, 19, 25, 21, 21, 14, 19, 10, 21, 24, 10, 13, 16, 14, 24, 21, 20, 24, 24, 13, 16, 16, 20, 21, 16, 10, 11, 17, 10, 25, 21, 23, 23, 13, 13, 19, 12, 22, 22, 21, 17, 12, 10, 21, 19};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int lower = 4;
    int upper = 10;
    int first = 4;
    vector<int> opponents = {22, 10, 25, 18, 18, 21, 16, 18, 12, 11, 10, 23, 17, 21, 25, 22, 18, 23, 19, 14, 14, 23, 17, 20, 24, 20, 21, 19, 12, 12, 22, 17, 13, 22, 17, 12, 24, 18, 23, 12, 16, 20, 25, 14, 10, 18, 19, 19, 25, 10};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.013888888888888902, 0.0, 0.0, 0.0, 0.04166666666666663, 0.0, 0.0, 0.0, 0.06944444444444448, 0.0, 0.0, 0.09722222222222227, 0.0, 0.0, 0.12499999999999989, 0.0, 0.0, 0.0, 0.15277777777777785, 0.0, 0.0, 0.0, 0.0, 0.0, 0.15277777777777768, 0.0, 0.0, 0.0, 0.1250000000000001, 0.0, 0.16666666666666663, 0.0, 0.0, 0.04166666666666674, 0.01388888888888884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int lower = 7;
    int upper = 7;
    int first = 7;
    vector<int> opponents = {12, 21, 10, 22, 25, 17, 11, 17, 18, 16, 17, 13, 14, 11, 20, 14, 19, 12, 13, 10, 25, 12, 20, 23, 17, 13, 20, 22, 25, 13, 18, 14, 22, 22, 13, 20, 22, 17, 21, 14, 19, 13, 16, 15, 17, 19, 11, 25, 20, 12};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int lower = 3;
    int upper = 4;
    int first = 3;
    vector<int> opponents = {16, 13, 18, 13, 20, 13, 15, 13, 20, 19, 16, 25, 17, 20, 10, 21, 12, 16, 24, 21, 21, 20, 20, 11, 18, 22, 10, 17, 14, 13, 14, 12, 21, 20, 20, 17, 19, 20, 12, 14, 15, 18, 24, 20, 25, 17, 13, 16, 25, 20};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int lower = 4;
    int upper = 10;
    int first = 9;
    vector<int> opponents = {10, 17, 14, 16, 14, 23, 18, 22, 24, 22, 10, 22, 25, 10, 14, 16, 19, 21, 14, 19, 11, 16, 20, 17, 12, 25, 14, 14, 21, 24, 12, 20, 25, 11, 12, 20, 16, 10, 12, 24, 13, 25, 19, 21, 21, 12, 21, 12, 13, 13};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.22222222222222227, 0.0, 0.0, 0.0, 0.12499999999999989, 0.0, 0.0, 0.15277777777777785, 0.15277777777777768, 0.0, 0.0, 0.1250000000000001, 0.0, 0.0, 0.0, 0.0, 0.09722222222222221, 0.0, 0.0, 0.06944444444444442, 0.0, 0.0, 0.04166666666666674, 0.01388888888888884, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int lower = 5;
    int upper = 8;
    int first = 8;
    vector<int> opponents = {18, 17, 12, 23, 11, 18, 13, 11, 19, 25, 17, 17, 12, 10, 25, 23, 14, 23, 12, 15, 12, 18, 21, 23, 21, 17, 10, 18, 15, 13, 20, 10, 19, 23, 11, 15, 22, 13, 20, 18, 24, 14, 19, 20, 17, 19, 24, 16, 22, 12};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.05555555555555553, 0.0, 0.0, 0.0, 0.0, 0.16666666666666674, 0.0, 0.27777777777777773, 0.0, 0.2777777777777778, 0.0, 0.0, 0.16666666666666663, 0.0, 0.0, 0.0, 0.05555555555555558, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int lower = 7;
    int upper = 8;
    int first = 8;
    vector<int> opponents = {21, 11, 12, 18, 24, 17, 24, 18, 24, 10, 21, 25, 13, 14, 25, 24, 17, 11, 15, 17, 18, 16, 19, 22, 19, 20, 23, 21, 16, 12, 15, 24, 23, 11, 18, 11, 13, 12, 15, 21, 18, 13, 15, 15, 16, 21, 24, 14, 25, 13};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int lower = 1;
    int upper = 10;
    int first = 5;
    vector<int> opponents = {1, 2, 3, 5, 10, 11, 12, 19};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.22222222222222227, 0.6234567901234567, 0.05555555555555558, 0.043209876543209846, 0.05555555555555558, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int lower = 1;
    int upper = 1000;
    int first = 1;
    vector<int> opponents = {2006, 2634, 2888, 2755, 1928, 757, 2694, 303, 2837, 930, 302, 616, 1179, 1869, 662, 2172, 328, 1212, 191, 330, 400, 1355, 1853, 832, 2649, 2084, 1155, 2274, 1194, 2273, 1603, 1448, 1242, 39, 931, 1498, 2989, 2297, 83, 1595, 2752, 1030, 595, 1903, 1398, 984, 658, 2105, 1939, 554};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0019258497736976174, 7.439872304737226E-4, 0.0021417814210607, 0.003917831745659561, 0.002244486728971224, 0.06838670502334163, 0.003222441660880107, 0.04417480543606678, 0.026452879305732147, 0.028957886815744655, 0.026907287668048452, 0.0795415034654274, 0.02326650975299621, 0.014392771149527805, 0.01224197170143132, 0.020056092128164116, 0.11378996614231845, 0.045490936381827274, 0.05068982896810725, 9.29357786214724E-4, 0.0862163464766067, 0.059481403325247095, 0.06725193662130602, 0.0026332638945252285, 0.02668133599064526, 0.012677843008173317, 0.023478433388343323, 0.07314221128034948, 0.02539075612148678, 6.533059586112389E-4, 0.007828148468789098, 3.000998996994797E-4, 0.027082638193749342, 0.014500987473960447, 0.002557111666220746, 6.492979465952953E-4};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int lower = 1;
    int upper = 10;
    int first = 1;
    vector<int> opponents = {5};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.9753086419753086, 0.024691358024691357};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int lower = 499;
    int upper = 899;
    int first = 599;
    vector<int> opponents = {7};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int lower = 500;
    int upper = 500;
    int first = 500;
    vector<int> opponents = {123, 345, 345};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int lower = 1;
    int upper = 1000;
    int first = 1;
    vector<int> opponents = {1, 11, 21, 51, 71, 91, 111, 211, 310, 487, 567, 689, 798, 812, 911, 1000};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5019999979959939, 0.08494229965701439, 0.08516173831489149, 0.01125048972896825, 0.08087617146676207, 0.0764027290553817, 0.0420039659278898, 0.07014371729086444, 0.025543561579597696, 0.01583164746327903, 0.001963925887849882, 0.0015631246862477521, 0.0011623234846458441, 9.919829739649666E-4, 1.302603905205535E-4, 3.2064096128214814E-5, 0.0};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int lower = 1;
    int upper = 10;
    int first = 5;
    vector<int> opponents = {134, 2, 42, 12, 2, 4};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.845679012345679, 0.154320987654321, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int lower = 100;
    int upper = 100;
    int first = 100;
    vector<int> opponents = {300};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int lower = 3;
    int upper = 3;
    int first = 3;
    vector<int> opponents = {1, 1, 1, 1, 4, 4, 4, 5, 5, 6, 7, 8, 9, 6, 6, 6, 3, 6, 74, 3000, 353, 2, 5, 43};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int lower = 1;
    int upper = 1000;
    int first = 5;
    vector<int> opponents = {7, 12, 45, 160, 39, 178, 190, 890, 1425};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.168536905273642, 0.4408377346315285, 0.37384732079426763, 0.002128254380506678, 0.0029218407596786067, 0.011004497991484952, 2.1042063084109053E-4, 5.005005005004337E-4, 1.2525037550115137E-5, 0.0};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int lower = 1;
    int upper = 1;
    int first = 1;
    vector<int> opponents = {5, 6, 7, 8};
    TripleJump* pObj = new TripleJump();
    clock_t start = clock();
    vector<double> result = pObj->getProbabilities(lower, upper, first, opponents);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22626897&rd=13508&pm=9944
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <fstream> 
#include <algorithm> 
#include <functional> 
#include <cmath> 
#include <iomanip> 
#include <set> 
#include <map> 
#include <vector> 
#include <queue> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cstdlib> 
using namespace std; 
 
#define FORI(i, s, e)  for(int i = int(s); i < int(e); i ++) 
#define FORD(i, e, s)  for(int i = int(e) - 1; i >= int(s); i --) 
typedef long long llint; 
typedef vector <int> VI; 
typedef vector <string> VS; 
class TripleJump 
{ 
        public: 
    double prob(int l, int u, int bu, int bl) 
    { 
      if(bl == bu) return 0.0; 
      if(bl >= 2*u) return 0.0; 
      if(bu <= 2*l) return 0.0; 
      if(bl <= 2*l) bl = 2*l; 
      if(bu >= 2*u) bu = 2*u; 
      double s = (u-l)*(u-l); 
      if(bl <= l + u && bu <= l + u) 
      { 
        double t1 =  bu - 2*l; 
        double t2 =  bl - 2*l; 
        return (t1*t1 - t2*t2)/2.0/s; 
      } 
      if(bl <= l + u && bu >= l + u) 
      { 
        double t1 = 2*u - bu; 
        double t2 = bl - 2*l; 
        return (s - (t1*t1 + t2*t2)/2.0)/s; 
      } 
      if(bl >= l + u && bu >= l + u) 
      { 
        double t1 = 2*u - bu; 
        double t2 = 2*u - bl; 
        return (t2*t2 - t1*t1)/2.0/s; 
      } 
      return 0.0; 
    } 
     
        vector <double> getProbabilities(int l, int u, int f, vector <int> o) 
        { 
      o.push_back(10000); 
      o.push_back(-10000); 
      sort(o.begin(),o.end(), greater<int>()); 
      vector <double> res; 
      if(l == u) 
      { 
        f += 2*l; 
        FORI(i,0,o.size()-1) 
         { 
            if(f >= o[i+1] && f < o[i]) 
          { 
            res.push_back(1.0); 
          } 
          else 
          { 
            res.push_back(0.0); 
          } 
          } 
        return res; 
      } 
 
      FORI(i,0,o.size()-1) 
      { 
        res.push_back(prob(l,u,o[i]-f,o[i+1]-f)); 
      } 
      return res; 
        } 
         
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/