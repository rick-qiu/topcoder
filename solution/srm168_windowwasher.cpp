/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1919
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

class WindowWasher {
public:
    int fastest(int width, int height, vector<int> washTimes);
};

int WindowWasher::fastest(int width, int height, vector<int> washTimes) {
    int ret;
    return ret;
}


int test0() {
    int width = 10;
    int height = 10;
    vector<int> washTimes = {60};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int width = 10;
    int height = 10;
    vector<int> washTimes = {60, 60};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 10;
    int height = 10;
    vector<int> washTimes = {60, 30};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2100;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 1000;
    int height = 1000;
    vector<int> washTimes = {1000};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 421;
    int height = 936;
    vector<int> washTimes = {111, 56, 931, 22, 445, 90, 14, 222};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2450448;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 25;
    int height = 25;
    vector<int> washTimes = {1, 625};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 526;
    int height = 239;
    vector<int> washTimes = {75, 773, 812, 535, 985};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6739800;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 703;
    int height = 648;
    vector<int> washTimes = {510, 992, 957, 825, 276, 480, 871, 874, 476, 585, 589, 958, 917, 500, 433, 386, 652, 521, 669, 416, 465, 431, 627, 221, 346, 695, 580, 261, 177, 688, 212, 581};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 6755400;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 454;
    int height = 801;
    vector<int> washTimes = {705, 446, 393, 176, 403, 733, 950, 181, 755};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 15507360;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 529;
    int height = 427;
    vector<int> washTimes = {579, 75, 730, 299, 582, 296, 229, 382, 870, 730, 493, 341, 769, 114, 280, 568, 497, 173};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3682875;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 815;
    int height = 937;
    vector<int> washTimes = {842, 58, 822, 825, 294, 167, 986, 590, 184, 673, 716, 311, 669, 665, 311, 229, 687, 267, 566, 378, 291, 790, 26};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 7173672;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 724;
    int height = 5;
    vector<int> washTimes = {842, 405, 598, 845, 813, 85, 146, 887, 612, 818, 760, 204, 350, 982, 273, 737, 889, 562, 572, 390};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 69615;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 779;
    int height = 359;
    vector<int> washTimes = {117, 88, 29, 264, 463, 566, 755, 528, 630, 4, 850, 570, 625, 471, 936, 926, 5, 138, 464, 295, 768, 166, 749, 758, 362, 797, 517, 889, 943, 774, 462, 702, 554, 67, 723, 622};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 495420;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 427;
    int height = 137;
    vector<int> washTimes = {953, 373, 987, 918, 838, 395, 925, 5, 69, 971, 113, 836, 807, 340, 681, 905, 776, 973};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 244545;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 526;
    int height = 885;
    vector<int> washTimes = {283, 965, 820, 893, 538, 97, 835, 226, 550, 130, 625, 913, 990, 110, 47, 527, 846, 122, 376, 112, 1, 384, 487, 191, 236};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 430995;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 735;
    int height = 408;
    vector<int> washTimes = {896, 140, 602, 120, 159, 827, 999, 397, 631};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 9783024;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 491;
    int height = 85;
    vector<int> washTimes = {181, 626, 330, 990, 634, 232, 87, 610, 172, 999, 721, 619, 28, 531, 815, 217, 778, 235, 88, 899, 50, 761, 594, 348, 293, 98, 581, 253, 964, 217, 98, 822};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 261800;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int width = 867;
    int height = 129;
    vector<int> washTimes = {82, 40, 379, 380, 728, 360, 131, 697, 528, 944, 575};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1861728;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 989;
    int height = 387;
    vector<int> washTimes = {943, 48, 831, 74, 267, 6, 915, 549, 860, 461, 477};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1784070;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 426;
    int height = 446;
    vector<int> washTimes = {794, 469, 627, 317, 916, 144, 165, 288, 823, 831, 924, 408, 769, 724, 451, 177, 446, 129, 488, 376, 853, 481, 531, 223, 838, 968, 792, 649, 542, 577, 683, 32, 654, 342, 235, 704};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1676960;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int width = 820;
    int height = 155;
    vector<int> washTimes = {45, 293, 426, 642, 871, 100, 160, 139, 431, 142, 481, 841, 311, 917};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1803735;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 12;
    int height = 754;
    vector<int> washTimes = {728, 734, 147, 464, 6, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 54288;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int width = 264;
    int height = 729;
    vector<int> washTimes = {406, 84, 279, 49, 884, 426, 50, 452, 534, 806, 464, 541, 551, 831, 924, 330, 982, 10, 456, 954, 815, 39, 351, 950, 758, 177, 271, 369, 396, 349, 825, 248, 671, 561, 215, 128, 125, 223, 205, 246, 903, 978, 374, 832, 810, 505};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 729000;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int width = 418;
    int height = 191;
    vector<int> washTimes = {767, 221, 436, 468, 687, 753, 618, 114, 302, 760, 135, 882, 683, 126, 652, 59, 207, 336, 875, 61, 140, 488, 727, 270, 3, 864, 488, 49, 220, 610, 221, 448, 872, 31, 748, 347, 727, 972, 582, 281, 149, 865, 898, 666};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 159103;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int width = 591;
    int height = 642;
    vector<int> washTimes = {406, 582, 467, 714, 864, 241, 481, 57, 391, 189, 542, 452, 299, 756, 469, 691, 46, 859, 596, 807, 555, 899, 597, 301, 449, 520, 839, 242, 279, 677, 724, 639, 326, 84, 146, 815, 612, 942, 393};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2964114;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 173;
    int height = 822;
    vector<int> washTimes = {873, 710, 486, 782, 609, 738, 891, 248, 912, 129, 321, 399, 280};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4559634;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 112;
    int height = 625;
    vector<int> washTimes = {364, 317, 130, 144, 336, 149, 826, 243, 208, 434, 714, 687, 423, 55, 821, 645, 655, 143, 310, 195, 109, 436, 654, 536, 885, 788, 569};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 756250;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 823;
    int height = 941;
    vector<int> washTimes = {826, 21, 174, 692, 933, 412, 336, 510, 247, 665, 539, 486, 409, 234, 413, 761, 542, 836, 808, 419, 113, 767, 955, 872, 883, 114, 501, 791, 910, 807, 573, 494, 724, 184, 346, 184, 227, 821, 587, 904, 332, 486, 341};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 5134096;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 423;
    int height = 978;
    vector<int> washTimes = {561, 346};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 88657656;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 243;
    int height = 538;
    vector<int> washTimes = {43, 283, 560, 721, 975, 349, 28, 567, 643, 721, 896, 699, 750, 164, 7, 690, 619, 502, 159, 82, 872, 45, 715, 205, 604};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 484200;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int width = 501;
    int height = 467;
    vector<int> washTimes = {999, 380, 166, 574, 667, 774, 32, 704, 692, 878, 699, 418, 359, 360, 224, 989, 387, 82, 146, 92, 729, 819, 800, 135, 876, 246, 94, 91};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1783006;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int width = 275;
    int height = 738;
    vector<int> washTimes = {556, 918, 207, 282};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 18106092;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 878;
    int height = 182;
    vector<int> washTimes = {829, 656, 434, 185, 533, 393, 660, 898};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 9162608;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 94;
    int height = 877;
    vector<int> washTimes = {829, 316, 923, 955};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 12951536;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 629;
    int height = 658;
    vector<int> washTimes = {397, 545, 697, 783, 981, 106, 484, 759, 543, 902, 710, 535, 429, 77, 18, 697};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4204620;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 962;
    int height = 615;
    vector<int> washTimes = {985, 914, 124, 781, 416, 534, 624, 671, 609, 329, 458, 719, 336, 615, 212, 1000, 648, 773, 296, 255, 111, 561, 32, 694, 779, 214, 849, 186, 703, 611, 256, 722, 702, 995, 500, 338, 764, 672, 559, 301};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4753950;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 412;
    int height = 212;
    vector<int> washTimes = {512, 615, 181, 289, 235, 850, 200, 81, 57, 725, 784, 390, 950, 675, 232, 372, 369, 805, 884, 799, 317, 226, 847, 453, 944, 999, 667, 285, 393, 391, 419, 920, 699, 177, 924, 903, 475, 657, 589, 276, 916, 224, 905, 535, 197, 455, 887};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 676704;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int width = 258;
    int height = 462;
    vector<int> washTimes = {980, 297, 276, 775, 259, 42, 803, 335, 322, 283, 201, 578, 447, 258, 24, 315, 175, 819, 209, 158, 260, 129, 206, 604, 199, 599, 470, 16, 462, 575, 449, 710, 379, 26, 333, 474, 177, 45};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 434280;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 618;
    int height = 545;
    vector<int> washTimes = {544, 436, 990, 519, 54, 635};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 12448890;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 623;
    int height = 671;
    vector<int> washTimes = {515, 425, 636, 264, 632, 49, 223, 514, 649, 376, 553, 100, 488, 529, 160, 710, 857, 294, 13, 636, 198, 751, 387, 674, 353, 49, 239, 796};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2268651;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int width = 586;
    int height = 167;
    vector<int> washTimes = {154, 502, 951, 827, 402, 186, 39, 644, 533, 653, 389, 845, 170, 217, 444, 496, 534, 833, 969, 323, 628, 749, 711, 500, 679};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1208412;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int width = 24;
    int height = 373;
    vector<int> washTimes = {583, 179, 8, 709, 820, 8, 832, 786, 456, 628, 411, 15, 707, 880, 830, 721, 767, 980, 789, 182, 789, 395, 193, 96, 496, 568, 797, 922, 22, 980, 361, 920, 822, 464, 368, 800, 730, 251, 58, 239, 198, 164, 912, 871, 596, 360, 287, 180};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 24618;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int width = 294;
    int height = 224;
    vector<int> washTimes = {527, 874};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 21720832;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 505;
    int height = 283;
    vector<int> washTimes = {937, 379, 867, 916, 710, 476, 93, 228, 745, 903, 130, 484, 833, 565, 228, 331, 894, 280, 881, 694, 561, 727, 324, 439, 382, 49, 782, 447, 654, 17, 375, 238, 704, 394, 284, 923, 793, 341, 368, 400};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 845887;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int width = 655;
    int height = 651;
    vector<int> washTimes = {779, 178, 238, 204, 157, 931, 440, 397, 27, 425, 655, 809, 322, 603, 338, 53, 964, 71, 181, 309, 658, 565, 537, 127, 250, 326};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3080532;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 122;
    int height = 260;
    vector<int> washTimes = {953, 872, 318, 412, 817};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3611140;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 580;
    int height = 36;
    vector<int> washTimes = {983};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 20525040;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 230;
    int height = 465;
    vector<int> washTimes = {461, 113, 611, 348, 120, 790, 443, 855, 415, 500};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3295920;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 501;
    int height = 685;
    vector<int> washTimes = {182, 501, 74, 688, 321, 587, 894, 347, 750, 1, 190, 327, 700, 53, 408, 150, 52, 356, 409, 23, 975, 81, 981, 505, 675, 897, 42, 89, 942, 618, 636, 610, 768, 576};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 295235;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int width = 977;
    int height = 677;
    vector<int> washTimes = {314, 923, 826, 925, 459, 344, 716, 60, 408, 590, 104, 112, 973, 521, 157, 652, 711, 835, 713, 683, 524, 276, 570, 18, 437, 972, 372, 101, 872};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 4508820;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int width = 412;
    int height = 298;
    vector<int> washTimes = {485, 672, 516, 549, 426, 859, 991, 769, 477, 252, 560, 593, 717, 657, 946, 819, 65, 255, 257, 148, 720, 620, 270, 994, 100, 420};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1627080;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int width = 464;
    int height = 220;
    vector<int> washTimes = {609, 882, 866, 608, 268, 646, 488, 189, 401, 689, 582, 428};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3950320;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int width = 794;
    int height = 579;
    vector<int> washTimes = {420};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 193084920;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int width = 783;
    int height = 771;
    vector<int> washTimes = {979, 586, 257, 888, 853, 179, 804, 437, 477, 497, 815, 790, 928, 904, 811, 455, 274, 61, 179, 86, 380, 679, 512, 193, 925, 277, 825, 445, 304, 991, 475, 411, 938, 19, 824, 365, 895, 602, 765, 79, 562, 574, 656, 173, 888, 228, 534, 289, 493, 994};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 3174207;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int width = 915;
    int height = 624;
    vector<int> washTimes = {858, 913, 460, 842, 926, 555, 342, 220, 292, 190, 38};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 11263200;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int width = 901;
    int height = 71;
    vector<int> washTimes = {845, 474, 546, 897, 406, 996, 93, 915, 423, 861, 778, 3, 912, 327, 452, 627, 391, 909, 133, 679, 756, 596, 750, 130, 963, 978, 554, 137, 639, 6, 86, 494, 603, 129, 991, 79, 441, 286, 405, 105, 996, 187, 96, 991, 644, 169, 312, 231, 749};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 99258;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int width = 12;
    int height = 754;
    vector<int> washTimes = {728, 734, 147, 464, 6, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 54288;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int width = 22;
    int height = 22;
    vector<int> washTimes = {728, 34, 147, 464, 66, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 9702;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int width = 421;
    int height = 936;
    vector<int> washTimes = {111, 56, 931, 22, 445, 90, 14, 222};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2450448;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int width = 332;
    int height = 323;
    vector<int> washTimes = {728, 34, 147, 464, 66, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1801048;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int width = 10;
    int height = 10;
    vector<int> washTimes = {1, 1000};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int width = 2;
    int height = 754;
    vector<int> washTimes = {728, 734, 147, 464, 6, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 9048;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int width = 12;
    int height = 754;
    vector<int> washTimes = {728, 734, 147, 464, 6, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 54288;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int width = 22;
    int height = 22;
    vector<int> washTimes = {728, 34, 147, 464, 66, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 9702;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int width = 421;
    int height = 936;
    vector<int> washTimes = {111, 56, 931, 22, 445, 90, 14, 222};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 2450448;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int width = 332;
    int height = 323;
    vector<int> washTimes = {728, 34, 147, 464, 66, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 1801048;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int width = 10;
    int height = 10;
    vector<int> washTimes = {1, 1000};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int width = 2;
    int height = 754;
    vector<int> washTimes = {728, 734, 147, 464, 6, 703, 254};
    WindowWasher* pObj = new WindowWasher();
    clock_t start = clock();
    int result = pObj->fastest(width, height, washTimes);
    clock_t end = clock();
    delete pObj;
    int expected = 9048;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7501828&rd=4645&pm=1919
********************************************************************************
#include <vector>
#include <string>
#include <set>
#include <iostream>
#include <algorithm>
 
using namespace std;
typedef vector<int> VI;
 
class WindowWasher
{
public:
  int fastest(int width, int height, VI washTimes);
};
 
int max(int x, int y) { return x>y ? x : y; }
 
int find_better(const VI& washTimes, int maxtime, int width)
{
  int tot_columns = 0;
  int tot_time = 0;
  for (int i=0; i<washTimes.size(); ++i) {
    int columns = (maxtime-1)/washTimes[i];
    tot_columns += columns;
    tot_time = max(tot_time, columns*washTimes[i]);
  }
  if (tot_time>=maxtime) return 0;
  if (tot_columns<width) return 0;
  return tot_time;
}
 
int WindowWasher::fastest(int width, int height, VI washTimes)
{
  sort(washTimes.begin(), washTimes.end());
  int maxtime = width*washTimes[0];
  for(;;) {
    int newtime = find_better(washTimes, maxtime, width); // not optimistic
    if (newtime==0) return maxtime*height;
 
    maxtime=newtime;
  }
}

********************************************************************************
*******************************************************************************/