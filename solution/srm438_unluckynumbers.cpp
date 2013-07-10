/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10396
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

class UnluckyNumbers {
public:
    int getCount(vector<int> luckySet, int n);
};

int UnluckyNumbers::getCount(vector<int> luckySet, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<int> luckySet = {1, 7, 14, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> luckySet = {4, 8, 13, 24, 30};
    int n = 10;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> luckySet = {10, 20, 30, 40, 50};
    int n = 30;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> luckySet = {3, 7, 12, 18, 25, 100, 33, 1000};
    int n = 59;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1065;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> luckySet = {935, 273, 796, 757, 284, 782, 415, 425, 189, 278, 241, 402, 903, 827};
    int n = 93;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8927;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> luckySet = {287, 601, 866, 241, 295, 285, 721, 805, 338, 125, 844, 841, 236, 531, 16, 327, 641, 198, 626, 52, 109, 50, 465, 111, 427, 949, 713, 774, 763, 845, 701, 2, 636, 687, 937, 272};
    int n = 37;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> luckySet = {349, 523, 862, 640, 172, 641, 419, 691, 912, 406, 930, 655, 540, 351, 150, 48, 931, 608, 168, 835, 825, 354, 585, 12, 308, 521, 496, 9, 364};
    int n = 482;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 881;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> luckySet = {933, 824, 273, 855, 651, 9, 192, 519, 904, 480, 204, 11, 425, 959, 637, 401, 829, 846, 956, 243, 220, 184, 710, 70, 465, 666, 836, 776, 560, 438, 961, 576, 898, 328, 717, 694, 27, 143, 726, 164, 48, 816, 402, 334};
    int n = 414;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> luckySet = {937, 469, 531, 477, 319, 377, 930, 486, 22, 663, 768, 516, 262, 92, 975, 789, 820, 170, 611, 655, 879, 567, 253, 533, 367, 186, 58, 361, 949, 133, 793, 590, 198};
    int n = 348;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> luckySet = {876, 69, 561, 381, 158, 868, 275, 498, 658, 38, 625, 599, 697, 652, 762, 738, 582, 321, 376, 842, 256, 323, 765, 604, 767, 46, 320};
    int n = 330;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> luckySet = {190, 362, 655, 410, 384, 667, 247, 517, 509, 500, 253, 989, 849, 971};
    int n = 99;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9008;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> luckySet = {63, 229, 26, 306};
    int n = 171;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6263;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> luckySet = {599, 160, 59, 955, 486, 918, 556, 27, 457, 632, 42, 733, 987, 613, 754, 739, 474, 909, 394, 998, 986};
    int n = 615;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> luckySet = {766, 415, 694, 663, 390, 657, 997, 338, 662, 349};
    int n = 467;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9879;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> luckySet = {337, 437, 940, 521, 221, 855, 633, 820, 313, 777, 211, 765, 629, 208, 873};
    int n = 663;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3059;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> luckySet = {803, 760, 843, 830, 648, 891, 89, 766, 862};
    int n = 9;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 719;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> luckySet = {261, 881, 72, 806, 45, 430, 307, 203, 413};
    int n = 342;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2484;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> luckySet = {317, 11, 534, 168};
    int n = 261;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5207;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> luckySet = {33, 742, 908, 430, 513, 244, 516, 600, 529, 581, 756, 276, 279};
    int n = 276;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> luckySet = {843, 609, 910, 882, 4, 359, 53, 313, 945, 796, 102, 137, 510, 543, 917, 659, 838, 612, 440, 732, 888, 789, 24, 619};
    int n = 202;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7214;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> luckySet = {340, 368, 831, 572, 684, 793, 259, 423, 639, 532, 389, 424, 526, 502, 182, 75, 833, 224, 673, 85, 428, 984, 613, 705, 381, 628, 137, 983, 352, 914, 472, 553, 527, 103, 407, 31};
    int n = 496;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> luckySet = {363, 978, 64, 410, 552, 864, 26, 350, 556};
    int n = 782;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 18531;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> luckySet = {631, 928, 906, 343, 291, 182, 20, 379, 107, 11, 62, 141, 30, 507, 640, 757, 857, 650, 573, 472, 193, 407, 916, 761};
    int n = 753;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 411;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> luckySet = {463, 487, 821, 182, 25, 971, 802, 131, 639, 717, 680, 789, 143, 94, 569, 164, 156, 953, 577, 868, 553, 625, 637, 578, 485, 994, 301, 744, 256, 261};
    int n = 636;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
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
    vector<int> luckySet = {123, 381, 610, 341, 949, 983, 787, 965, 196, 701, 516, 883, 42, 312, 632, 808, 270, 792, 96, 712, 9, 66, 358, 390, 461, 189, 239, 813, 262, 176, 710, 122, 927, 724};
    int n = 672;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1159;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> luckySet = {511, 426};
    int n = 161;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 42664;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> luckySet = {293, 494, 364, 614, 271, 789, 714, 478, 435, 529, 573};
    int n = 158;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 17853;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> luckySet = {541, 751, 954, 690, 253, 155, 116, 204, 719, 322, 795, 121, 643, 276, 526, 269, 404, 703, 11, 214, 499, 590, 857, 771, 281, 827, 381, 251, 883, 956, 515, 603, 280, 646, 979, 186, 589, 523, 972, 983, 190};
    int n = 854;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> luckySet = {708, 761, 636, 848, 466, 732, 425, 41, 403, 631, 919, 720, 160, 446, 138, 644, 205, 340, 316, 67, 516, 62, 132, 115, 771, 302, 796, 242, 757, 53, 5, 198, 9, 780, 214, 812, 621, 459, 90, 746, 382, 206, 563, 427};
    int n = 424;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> luckySet = {992, 350, 909, 135, 117, 668, 425, 762, 302, 36, 454, 53, 934, 61, 710, 488, 946, 119, 49, 382, 920, 359, 202, 268, 424, 475, 819, 906, 835, 512, 834, 681, 65, 374, 336, 452, 564, 423, 870, 986};
    int n = 230;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1063;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> luckySet = {616, 945, 710, 106, 772, 978, 492, 728, 949, 702, 606, 733, 635, 845, 12, 638, 35, 341, 63, 602, 255, 857, 605};
    int n = 282;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1592;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> luckySet = {762, 178, 779, 727, 719, 723, 961, 493, 720, 298, 326, 543, 256, 139, 137, 529, 804, 271, 65, 866, 460, 501, 354, 316, 122, 693, 376, 488, 966, 208, 589, 99, 129, 556, 395, 586, 355, 338, 25, 681, 688, 155, 77, 960, 629};
    int n = 731;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> luckySet = {127, 928, 862, 383, 753, 689, 873, 33};
    int n = 801;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2927;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> luckySet = {227, 935, 582, 311, 875, 477, 380, 876, 159, 66, 413, 584, 463, 836, 830, 904, 251, 364, 369, 160, 892, 617, 111, 281, 945, 268, 639, 675, 927, 274, 392, 589, 252, 949, 697, 232, 810, 467, 704};
    int n = 685;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> luckySet = {807, 312, 93, 451, 954, 859, 705, 990, 434, 26, 241, 712, 223, 84, 359, 857, 395, 608, 429, 793, 74, 869};
    int n = 238;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> luckySet = {544, 750, 786, 431, 175, 518, 660, 426, 659, 512, 827, 885, 356, 546, 240, 108, 939, 392, 795, 730, 895, 908, 309, 800, 840, 575, 832, 888, 766, 873, 525, 850, 65, 205, 773, 940, 969, 302, 259};
    int n = 96;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> luckySet = {170, 741, 574, 559, 942, 904, 604, 888, 862, 995, 654, 420, 111, 554, 956, 272, 82, 296, 249, 120, 954, 353, 689, 934, 504};
    int n = 369;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 815;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> luckySet = {109, 961, 597, 439, 137, 595, 458, 581, 260, 50, 852, 758, 480, 831, 200, 54, 103, 204, 164, 622, 835, 377, 579, 59, 450, 707, 323, 998, 383, 892, 295, 719, 786, 456, 437, 334, 698, 268, 721, 781, 256, 628, 911, 716, 378, 750, 966, 902, 97, 819};
    int n = 352;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> luckySet = {53, 958, 131, 167, 937, 861, 823, 880, 541, 874, 390, 207, 893, 495, 907, 74, 55, 38, 514, 393, 711, 212, 638, 857, 760, 247, 385, 177, 589, 972, 401, 498};
    int n = 573;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 511;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> luckySet = {500, 281, 576, 258, 471, 379, 811, 725, 296, 60, 523, 10, 447, 656, 898};
    int n = 502;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> luckySet = {530, 891, 939, 764, 86, 545, 477, 793, 381, 293, 213, 601, 269, 768, 706, 975, 944, 134, 878, 551, 754, 43, 290, 169, 508, 935, 629, 272, 401, 948, 692, 959, 66, 974, 806, 521, 153, 801, 144, 437, 628, 709, 84, 565};
    int n = 787;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> luckySet = {1, 428, 346, 906};
    int n = 69;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 18835;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> luckySet = {818, 315, 418, 545, 122, 482, 457, 863, 706, 245, 240, 971};
    int n = 458;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> luckySet = {200, 49, 119, 496, 266, 540, 954, 765, 884, 123, 736, 710, 167, 414, 424, 502, 367, 387, 507};
    int n = 71;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1055;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> luckySet = {768, 760, 198, 39, 135, 593, 85, 708, 881, 937, 243, 704, 689, 796, 615, 89, 824, 514, 490, 441, 304, 132, 450, 754, 149, 972, 297, 778, 536, 864, 336, 498, 207, 358, 890, 191, 746, 757, 34, 794, 346, 953, 731, 494, 543, 736, 906, 552};
    int n = 34;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> luckySet = {193, 939, 321, 488, 217, 183, 86, 773, 510, 46, 222, 791, 544, 727, 210, 224, 771, 679, 855, 205};
    int n = 152;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2045;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> luckySet = {600, 976, 42, 705, 277, 876, 410, 120, 513, 111, 415, 380, 97, 464, 205, 488, 53, 682, 348, 321, 451, 952, 869, 350, 303, 474, 727, 349, 290, 390, 840, 560, 448, 644, 831, 605, 824, 206, 958, 55, 404, 636, 35, 835};
    int n = 388;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> luckySet = {980, 170, 989, 769, 190, 849, 622, 604, 681, 53, 177, 176, 877, 886, 807, 842, 563, 644, 713, 233, 836, 765, 659, 371, 498, 43, 581, 478, 86, 189, 220, 731, 585, 517, 373, 432, 971, 472, 703, 750, 803, 188, 766, 643, 749, 471, 311, 326, 685, 516};
    int n = 416;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 687;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> luckySet = {1000, 1};
    int n = 500;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 249499;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> luckySet = {3, 2};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> luckySet = {998, 1000};
    int n = 999;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> luckySet = {999, 1000};
    int n = 499;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 249499;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> luckySet = {1000, 999};
    int n = 998;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 997;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> luckySet = {3, 7, 12, 18, 25, 100, 33, 1000};
    int n = 59;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1065;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> luckySet = {3, 4};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
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
    vector<int> luckySet = {4, 8, 13, 24, 30};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> luckySet = {30, 40};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> luckySet = {3, 10, 100, 500};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
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
    vector<int> luckySet = {10, 11};
    int n = 5;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> luckySet = {10, 20, 30};
    int n = 5;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> luckySet = {5, 6};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> luckySet = {50, 34, 566, 43, 578, 564, 234, 565, 879, 456};
    int n = 30;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> luckySet = {3, 10, 15};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
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
    vector<int> luckySet = {4, 10};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> luckySet = {7, 10, 6};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
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
    vector<int> luckySet = {3, 7};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> luckySet = {4, 7, 9};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> luckySet = {20, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> luckySet = {14, 10, 4};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> luckySet = {7, 14, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> luckySet = {34, 68, 19};
    int n = 6;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> luckySet = {10, 20, 30, 40, 50};
    int n = 6;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> luckySet = {10, 11};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> luckySet = {4, 6};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> luckySet = {7, 5};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> luckySet = {5, 6, 7, 8, 9};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> luckySet = {7, 4, 10};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
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
    vector<int> luckySet = {6, 10, 12};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> luckySet = {10, 20, 30, 40, 50};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> luckySet = {4, 14, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> luckySet = {999, 1000};
    int n = 500;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 249499;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> luckySet = {8, 9, 10, 11};
    int n = 4;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> luckySet = {999, 777, 666, 50};
    int n = 20;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 599;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> luckySet = {19, 7, 14, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> luckySet = {3, 4, 5};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> luckySet = {3, 20};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> luckySet = {3, 5};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> luckySet = {8, 10};
    int n = 4;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> luckySet = {5, 6};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> luckySet = {2, 3};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> luckySet = {2, 10, 15};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> luckySet = {7, 6, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> luckySet = {5, 7, 14, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> luckySet = {3, 6};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> luckySet = {14, 15};
    int n = 5;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> luckySet = {12, 13};
    int n = 10;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> luckySet = {14, 10, 7};
    int n = 4;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> luckySet = {5, 34, 11};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> luckySet = {1000, 999};
    int n = 995;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3979;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> luckySet = {5, 7, 8, 9};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> luckySet = {10, 20, 30, 40, 50};
    int n = 5;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> luckySet = {1, 14, 7, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> luckySet = {7, 14, 10};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> luckySet = {10, 11};
    int n = 4;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> luckySet = {6, 7, 8};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> luckySet = {10, 15};
    int n = 5;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> luckySet = {1000, 998};
    int n = 500;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 248999;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> luckySet = {5, 10, 12, 7};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> luckySet = {3, 4};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> luckySet = {5, 6, 7, 8, 9, 10};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> luckySet = {10, 20, 30, 40, 50};
    int n = 8;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> luckySet = {10, 11, 12};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> luckySet = {10, 20, 30, 40, 50};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> luckySet = {500, 600, 700};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 995;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> luckySet = {5, 8};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> luckySet = {3, 4, 2, 6};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> luckySet = {10, 15};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> luckySet = {4, 5, 10};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> luckySet = {6, 7, 14, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> luckySet = {6, 9, 12};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> luckySet = {4, 5};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> luckySet = {1000, 999};
    int n = 998;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 997;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> luckySet = {3, 5};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> luckySet = {8, 10};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> luckySet = {4, 7};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> luckySet = {10, 20};
    int n = 5;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> luckySet = {10, 15};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> luckySet = {5, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> luckySet = {3, 7, 12, 18, 25, 100, 33, 1000};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> luckySet = {4, 5, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> luckySet = {4, 7, 14, 10};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> luckySet = {999, 1000};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 997;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> luckySet = {6, 8, 13, 24, 30};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> luckySet = {5, 6, 7, 8, 9};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> luckySet = {5, 6};
    int n = 4;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> luckySet = {5, 10};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> luckySet = {8, 12, 45};
    int n = 4;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> luckySet = {5, 10, 20, 30};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> luckySet = {4, 10};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> luckySet = {4, 5, 6};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> luckySet = {1, 5};
    int n = 3;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> luckySet = {5, 7, 8, 9};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> luckySet = {7, 8, 9};
    int n = 6;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> luckySet = {50, 100, 200};
    int n = 2;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> luckySet = {40, 8, 13, 24, 30};
    int n = 1;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> luckySet = {2, 10};
    int n = 9;
    UnluckyNumbers* pObj = new UnluckyNumbers();
    clock_t start = clock();
    int result = pObj->getCount(luckySet, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22746012&rd=13803&pm=10396
********************************************************************************
#line 6 "TCp.cpp" 
#include <string> 
#include <set> 
#include <algorithm> 
#include <iostream> 
#include <map> 
#include <queue> 
#include <sstream> 
#include <stack> 
#include <math.h> 
#include <vector> 
using namespace std; 
class UnluckyNumbers 
{ 
public: 
  int getCount(vector <int> luckySet, int n) 
  { 
    int ans=0; 
  sort(luckySet.begin(),luckySet.end()); 
  for(int i=1;i<=luckySet.back();i++) 
    for(int j=i+1;j<=luckySet.back();j++){ 
      if ( (n<i) || (n>j) ) 
        continue; 
      int count=0; 
      for(int k=0;k<luckySet.size();k++) 
        if ( (luckySet[k]>=i) && (luckySet[k]<=j) ) 
          count++; 
      if (!count) 
        ans++; 
    } 
    return ans; 
  } 
   
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/