/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12469
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

class SkiResortsEasy {
public:
    int minCost(vector<int> altitude);
};

int SkiResortsEasy::minCost(vector<int> altitude) {
    int ret;
    return ret;
}


int test0() {
    vector<int> altitude = {30, 20, 20, 10};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> altitude = {5, 7, 3};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> altitude = {6, 8, 5, 4, 7, 4, 2, 3, 1};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
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
    vector<int> altitude = {23, 507};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 484;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> altitude = {249, 739, 471};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 712;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> altitude = {836, 515, 256, 985};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 729;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> altitude = {893, 564, 67, 59, 902};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 843;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> altitude = {539, 162, 187, 745, 413, 621};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 1318;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> altitude = {781, 478, 793, 32, 6, 212, 130};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 645;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> altitude = {870, 78, 227, 622, 930, 554, 578, 597};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 3040;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> altitude = {533, 901, 375, 989, 799, 37, 120, 842, 548};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 2805;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> altitude = {749, 560, 921, 166, 757, 818, 228, 584, 366, 88};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 2284;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> altitude = {733, 985, 965, 457, 553, 172, 880, 763, 421, 30, 327, 233};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 2628;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> altitude = {386, 932, 176, 785, 56, 705, 223, 336, 835, 770, 498, 674, 677, 848};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 6217;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> altitude = {112, 574, 224, 410, 3, 860, 502, 37, 123, 748, 392, 714, 319, 374, 747, 646};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 6301;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> altitude = {371, 272, 95, 980, 335, 830, 669, 491, 949, 465, 529, 220, 878, 888, 117, 57, 66, 747};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 6910;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> altitude = {712, 745, 230, 200, 648, 440, 115, 913, 627, 621, 186, 222, 741, 954, 581, 193, 266, 320, 798, 745};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 6393;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> altitude = {290, 943, 836, 208, 421, 991, 972, 684, 448, 127, 516, 444, 483, 378, 923, 674, 422, 664, 181, 179, 321, 602};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 7938;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> altitude = {479, 551, 232, 301, 509, 100, 609, 306, 76, 110, 261, 260, 200, 792, 318, 539, 148, 572, 230, 384, 294, 31, 517, 831};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 5615;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> altitude = {782, 750, 335, 705, 129, 979, 817, 867, 501, 507, 926, 901, 668, 332, 195, 631, 34, 39, 858, 138, 655, 194, 141, 777, 502, 862};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 10135;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> altitude = {740, 875, 214, 255, 735, 90, 552, 99, 296, 7, 803, 550, 321, 989, 552, 656, 25, 554, 843, 693, 225, 290, 541, 719, 105, 391, 338, 894};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 10737;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> altitude = {218, 250, 956, 746, 635, 430, 962, 113, 267, 907, 649, 333, 217, 952, 481, 142, 588, 821, 268, 586, 416, 357, 787, 856, 587, 15, 245, 433, 616, 814};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 12012;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> altitude = {439, 796, 413, 281, 807, 919, 810, 574, 2, 279, 805, 774, 829, 524, 794, 264, 546, 202, 737, 626, 450, 365, 506, 873, 337, 807, 268, 579, 988, 7, 160, 352};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 14369;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> altitude = {670, 678, 231, 581, 43, 117, 816, 856, 638, 419, 676, 869, 52, 205, 861, 346, 630, 85, 937, 350, 20, 474, 790, 293, 243, 103, 323, 108, 247, 33, 534, 870, 81, 805};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 12214;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> altitude = {88, 27, 368, 476, 88, 852, 874, 282, 614, 659, 530, 846, 127, 630, 241, 57, 697, 730, 373, 790, 692, 310, 440, 667, 23, 258, 101, 489, 18, 238, 229, 418, 993, 529, 405, 745};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 14959;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> altitude = {287, 405, 750, 328, 794, 82, 131, 370, 832, 244, 155, 304, 23, 852, 951, 677, 493, 929, 550, 904, 477, 300, 230, 672, 6, 707, 748, 594, 60, 672, 43, 477, 447, 177, 763, 530, 544, 452};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 15591;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> altitude = {45, 424, 641, 650, 217, 478, 939, 983, 702, 325, 928, 600, 213, 747, 821, 801, 215, 608, 71, 745, 880, 917, 652, 40, 700, 643, 712, 365, 589, 712, 984, 57, 273, 871, 854, 37, 862, 473, 203, 652};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 20929;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> altitude = {867, 885, 624, 54, 867, 201, 803, 670, 250, 226, 599, 942, 95, 937, 906, 57, 796, 762, 784, 882, 664, 39, 872, 162, 669, 650, 417, 79, 926, 84, 770, 823, 632, 50, 218, 190, 152, 142, 147, 888, 374, 0};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 17045;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> altitude = {689, 698, 496, 970, 538, 153, 880, 81, 368, 602, 818, 861, 484, 783, 291, 108, 784, 166, 906, 753, 681, 770, 749, 128, 121, 930, 518, 68, 846, 726, 123, 391, 842, 325, 498, 831, 741, 236, 798, 672, 542, 19, 391, 327};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 17901;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> altitude = {370, 74, 378, 939, 990, 843, 38, 556, 577, 218, 172, 119, 808, 111, 849, 888, 733, 574, 476, 820, 201, 938, 633, 522, 492, 642, 857, 179, 595, 761, 938, 437, 183, 64, 387, 953, 864, 718, 325, 111, 852, 709, 28, 127, 68, 152};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 21049;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> altitude = {78, 653, 56, 299, 348, 830, 78, 243, 163, 931, 354, 389, 215, 653, 373, 672, 13, 785, 573, 649, 369, 817, 206, 104, 473, 433, 436, 21, 435, 905, 420, 699, 14, 921, 896, 721, 842, 450, 318, 236, 966, 19, 403, 560, 613, 259, 653, 754};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 20942;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> altitude = {978, 599, 991, 768, 170, 384, 706, 260, 445, 585, 743, 520, 172, 60, 422, 89, 267, 375, 477, 741, 782, 517, 951, 263, 277, 502, 402, 440, 888, 145, 85, 599, 711, 974, 113, 523, 878, 81, 495, 294, 524, 67, 444, 77, 633, 767, 731, 730, 918, 493};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 18531;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> altitude = {0, 0};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> altitude = {1000, 1000};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> altitude = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> altitude = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> altitude = {712, 745, 230, 200, 648, 440, 115, 913, 627, 621, 186, 222, 741, 954, 581, 193, 266, 320, 798, 745};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 6393;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> altitude = {10, 50, 30, 5, 10, 100, 1};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> altitude = {1, 3, 2, 0};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
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
    vector<int> altitude = {5, 7, 10};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
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
    vector<int> altitude = {6, 8, 5, 4, 7, 4, 2, 3, 1};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> altitude = {30, 31};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> altitude = {2, 3, 5};
    SkiResortsEasy* pObj = new SkiResortsEasy();
    clock_t start = clock();
    int result = pObj->minCost(altitude);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22905394&rd=15493&pm=12469
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
 
class SkiResortsEasy {
public:
  int minCost(vector <int>);
};
 
int SkiResortsEasy::minCost(vector <int> a) {
int sum=0;
 for(int i=0;i<a.size()-1;i++)
 {
     
if(a[i+1]>a[i])
{sum+=(a[i+1]-a[i]);
a[i+1]=a[i];
}
 }
 return sum;
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/