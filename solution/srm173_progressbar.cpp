/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1975
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

class ProgressBar {
public:
    string showProgress(vector<int> taskTimes, int tasksCompleted);
};

string ProgressBar::showProgress(vector<int> taskTimes, int tasksCompleted) {
    string ret;
    return ret;
}


int test0() {
    vector<int> taskTimes = {19, 6, 23, 17};
    int tasksCompleted = 3;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##############......";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> taskTimes = {2, 3, 7, 1, 4, 3};
    int tasksCompleted = 4;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#############.......";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> taskTimes = {553, 846, 816, 203, 101, 120, 161, 818, 315, 772};
    int tasksCompleted = 4;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##########..........";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> taskTimes = {7, 60, 468, 489, 707, 499, 350, 998, 1000, 716, 457, 104, 597, 583, 396, 862};
    int tasksCompleted = 2;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "....................";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> taskTimes = {419, 337, 853, 513, 632, 861, 336, 594, 94, 367, 336, 297, 966, 627, 399, 433, 846, 859, 80, 2};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###################.";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> taskTimes = {500};
    int tasksCompleted = 0;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "....................";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> taskTimes = {500};
    int tasksCompleted = 1;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "####################";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> taskTimes = {878, 766, 805, 362};
    int tasksCompleted = 2;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###########.........";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> taskTimes = {199, 921, 25, 245, 696, 596, 289, 503, 139, 560, 163, 929, 435, 607, 882, 808, 774, 968, 576, 112, 509, 387, 456, 85, 285, 487, 453, 953, 856, 221, 314, 90, 536};
    int tasksCompleted = 9;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "####................";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> taskTimes = {408, 396};
    int tasksCompleted = 1;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##########..........";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> taskTimes = {886, 457, 649, 949, 630, 882, 17, 209, 307, 108, 867, 473, 902, 841, 424, 160, 621, 123, 985, 36};
    int tasksCompleted = 16;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "################....";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> taskTimes = {87, 515, 621, 634, 896, 567, 265, 79, 558, 577, 846, 927, 471};
    int tasksCompleted = 0;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "....................";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> taskTimes = {377, 817, 295, 239, 890, 60, 424, 88, 427, 68, 424, 309, 8, 966, 729};
    int tasksCompleted = 14;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#################...";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> taskTimes = {332, 865, 914, 885, 473, 63, 853, 1000, 133, 497, 789, 540, 22, 841, 211, 336, 507, 759, 614, 997, 990, 568, 107, 432, 937, 469, 90, 813, 114, 106, 987, 615, 135, 336, 823, 123, 708};
    int tasksCompleted = 4;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##..................";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> taskTimes = {341, 810, 131, 1000, 659, 974, 383, 272, 734, 874, 198, 392, 917, 625, 767, 996, 221, 644, 172, 665, 382, 676, 195, 86, 706, 295, 489, 712, 996, 968, 583, 939, 40, 956, 997, 521, 167, 465};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##########..........";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> taskTimes = {130, 721, 994, 883, 576, 629, 615, 546, 735, 726, 32, 71, 970, 949, 690, 128, 808, 231, 262, 598, 511, 786, 348, 854, 981, 995, 437, 86, 176, 922, 117, 201, 614, 426, 944, 43, 927, 89, 508, 988, 638, 189, 423, 703, 6, 782, 884, 152};
    int tasksCompleted = 25;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###########.........";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> taskTimes = {948, 38, 627, 755, 233, 264, 898, 8, 787, 667, 615, 553, 98, 406, 72, 44, 290, 763, 88, 441, 162, 538, 958, 950, 803, 733, 975, 608, 415, 921, 62, 724, 408};
    int tasksCompleted = 17;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "########............";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> taskTimes = {553, 846, 816, 503, 101, 120, 161, 818, 315, 772};
    int tasksCompleted = 9;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "################....";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> taskTimes = {602, 901, 638, 93, 590, 473, 669, 461, 952, 778, 779, 730, 946, 530, 292, 983, 928, 826, 887};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "####################";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> taskTimes = {649, 532, 748, 318, 299, 170, 577, 468, 956, 439, 23, 65, 500, 877, 739, 729, 379, 439, 745, 729, 990, 915, 50, 647, 980};
    int tasksCompleted = 24;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##################..";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> taskTimes = {964, 550, 841, 395, 685, 983, 815, 276, 668, 146, 261, 494, 37, 776, 321, 101, 815, 98};
    int tasksCompleted = 5;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#######.............";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> taskTimes = {812, 632, 21, 744, 977, 941, 494, 603, 423, 4, 657, 116, 429, 800, 634, 812, 134, 972, 301, 489};
    int tasksCompleted = 20;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "####################";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> taskTimes = {214, 115, 50, 283, 61, 430, 312, 914, 108, 97, 209, 732, 875, 70, 653, 138, 435, 959, 376, 476, 311, 928, 705, 476, 447, 455, 533, 894, 348, 496, 970, 602, 627, 850, 891};
    int tasksCompleted = 17;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "######..............";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> taskTimes = {132, 61, 119, 126, 616, 860, 997, 99, 549, 395, 190, 332, 997, 985, 226, 290, 825, 166, 489, 101, 252, 269, 759, 747, 784, 994, 228, 368, 805, 888, 864, 502, 973, 578, 593};
    int tasksCompleted = 6;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##..................";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> taskTimes = {975, 763, 761, 118, 36, 253, 351, 714, 308, 580, 383, 554, 224, 485, 737, 315, 908, 271, 550, 824, 833};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "################....";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> taskTimes = {127, 603, 44, 620, 566, 827, 103, 171, 896, 873, 165, 85, 594, 113, 855, 504, 550, 110, 299};
    int tasksCompleted = 3;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#...................";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> taskTimes = {706, 165, 679, 36, 704, 506, 567, 727, 781, 385, 683, 968, 986, 792, 171, 785, 512, 931, 335, 875, 82, 667, 21, 487, 299, 207, 549, 274, 515, 384};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##############......";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> taskTimes = {1, 4, 852, 451, 855, 608, 519, 221, 822, 44, 926, 169, 485, 488, 556, 950, 781, 598, 821, 358, 783, 218, 186, 860, 269, 701, 461, 626, 192, 45, 924, 192, 312, 798, 655, 184, 395, 933, 232, 790, 421, 254, 684, 800, 233, 161};
    int tasksCompleted = 33;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##############......";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> taskTimes = {23, 309, 823, 38, 812, 689, 190, 761, 917, 525, 753, 591, 298, 551, 842, 982, 400, 160, 756, 976, 73, 795, 419, 587, 350, 367, 122, 698, 725, 44, 364, 676, 983, 933, 219, 991, 648, 282, 324};
    int tasksCompleted = 13;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "######..............";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> taskTimes = {571, 149, 361, 508, 319, 906, 935, 429, 737};
    int tasksCompleted = 9;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "####################";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> taskTimes = {492, 824, 897, 946, 836, 560, 412, 925, 728, 806, 900, 746, 708, 152, 117, 660, 314, 955, 740, 495, 490, 483, 766, 441, 292, 493, 443, 735, 144, 329, 636, 139, 513, 323, 522, 318, 249, 347, 227, 247, 609};
    int tasksCompleted = 21;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "############........";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> taskTimes = {695, 734, 398, 544, 881, 813, 140, 955, 574, 480, 587, 357, 359, 816, 158, 517, 609, 981, 898, 493, 572, 435, 493, 736, 53, 382, 739};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##############......";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> taskTimes = {45, 81, 216, 400, 968, 40, 700, 435, 604, 977, 971, 368, 151, 416, 875, 385, 576, 319, 533, 107, 744, 775, 254, 515, 162, 452, 458, 815, 294, 202, 994, 933, 37, 2, 100, 923, 26};
    int tasksCompleted = 26;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##############......";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> taskTimes = {924, 882, 441, 255, 34, 552, 105, 867, 960, 328, 987, 489, 873, 620, 260, 338, 945, 727, 244, 832, 20, 322, 258, 288, 123, 707, 452, 73, 480, 483, 311, 822, 618, 680, 443, 265, 261};
    int tasksCompleted = 29;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###############.....";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> taskTimes = {803, 428, 476, 492, 319, 152, 537};
    int tasksCompleted = 2;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#######.............";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> taskTimes = {781, 70, 642, 686, 432, 294, 221, 820, 185, 74, 927, 871, 319, 928, 149, 225, 453, 903, 384, 465, 412, 614, 258, 37, 959, 24, 231, 617, 458, 406, 761, 413, 901, 348, 541, 447, 267, 168};
    int tasksCompleted = 2;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "....................";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> taskTimes = {256, 193, 202, 914, 899, 315, 44, 876, 595, 310, 576, 508, 126, 193, 185, 957};
    int tasksCompleted = 16;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "####################";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> taskTimes = {720, 92, 470, 600, 78, 851, 135, 352, 169, 432, 638, 415, 257, 356, 756, 387, 621, 416, 188, 801, 984, 624, 82, 400, 260, 558, 568, 177, 534, 262, 645, 642, 35, 918};
    int tasksCompleted = 15;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "########............";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> taskTimes = {472, 729, 515, 360, 297, 86, 652, 695, 887, 531, 574, 320, 790, 592, 720, 706, 929, 725, 890, 349, 676, 148, 450, 752, 781, 736, 548, 951, 314, 165, 102, 741, 28, 304, 994, 786, 929, 429, 57, 577, 871, 813, 707, 242, 625, 654};
    int tasksCompleted = 17;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#######.............";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> taskTimes = {582, 975, 822, 994, 413, 602, 105, 812, 361, 191, 52, 803, 322, 828, 769, 509, 674, 673, 987, 348, 420, 54, 169, 655, 999, 875, 3, 230, 63, 546, 284, 298, 743};
    int tasksCompleted = 32;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###################.";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> taskTimes = {453, 871, 908, 420, 108, 720, 430, 822, 471, 279, 296, 832, 638, 142, 524, 192, 287, 94, 844, 997, 811, 253, 676, 380, 874, 702, 726, 126, 85, 318, 587, 643, 617, 695, 444, 941, 574, 468};
    int tasksCompleted = 24;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "############........";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> taskTimes = {141, 303, 80, 406, 183, 128, 592, 885, 254, 998, 594, 465, 270, 859, 533, 925, 30, 863};
    int tasksCompleted = 10;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#########...........";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> taskTimes = {894, 250, 342, 664, 682, 670, 656, 425, 459, 462, 58, 404, 629, 562, 123, 674, 418, 858, 327, 369, 790, 935, 612, 781, 4, 359, 942, 800, 314, 995, 843, 116, 365, 714, 956, 330, 44, 747, 317, 461, 835, 718, 150, 638, 538, 325, 323, 370};
    int tasksCompleted = 7;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###.................";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> taskTimes = {401, 301, 312, 12, 904, 869, 499, 407, 862, 64, 381, 55, 288, 619, 184, 748, 48, 333, 718, 954, 940, 668, 482, 896, 595, 71, 994, 862, 910, 24, 463, 915, 829, 359, 132, 822, 120, 860, 763, 299, 839, 179, 479, 46, 926, 501, 720, 802, 585, 596};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "######..............";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> taskTimes = {647, 374, 463, 411};
    int tasksCompleted = 3;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###############.....";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> taskTimes = {172, 250, 21, 944, 235, 869, 115, 665, 327, 402, 222, 208, 893, 295, 629, 505, 580, 396, 259, 338, 890, 507, 553, 644, 797, 58, 848, 693, 348, 251, 916, 628, 195, 89, 92, 558, 778, 735, 43, 787};
    int tasksCompleted = 15;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "######..............";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> taskTimes = {484, 442, 388, 168, 405, 475, 543, 102, 93, 377, 38, 300, 319, 191, 731, 184, 367, 517, 423, 528, 634, 325, 463, 570, 345, 300, 208, 402, 446, 795, 93, 909, 166, 544, 473, 63, 900, 833, 776, 911, 116};
    int tasksCompleted = 32;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##############......";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> taskTimes = {522, 387, 680, 102, 913, 702, 653, 109, 2, 129, 672};
    int tasksCompleted = 8;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "################....";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> taskTimes = {360, 686, 553, 485, 689, 78, 49, 764, 845, 488, 832, 317, 216, 747, 405, 76, 29, 928, 882, 399, 903, 696, 878, 395, 538, 189, 654, 748, 875, 687, 867, 948, 171, 583, 464, 952, 347, 343, 974, 946, 465, 840, 54, 981, 493, 329, 858};
    int tasksCompleted = 22;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "########............";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> taskTimes = {405, 275, 385, 592, 437, 845, 398, 415, 827, 986};
    int tasksCompleted = 4;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#####...............";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> taskTimes = {103, 691, 764, 624, 74, 410, 11, 37, 441, 835, 223, 937, 315, 666, 89, 907, 782, 263, 655, 134, 657, 379, 524, 18, 891, 948, 989};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#############.......";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> taskTimes = {249, 678, 137, 266, 787, 87, 499, 713, 626, 127, 870, 99, 322, 88, 555, 993, 857, 137, 973, 224, 831, 461, 502, 614, 717, 692, 855, 170, 883, 272, 465, 123, 846, 464, 38, 315, 999, 34, 347, 986, 913, 368, 356, 416};
    int tasksCompleted = 21;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "#########...........";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> taskTimes = {588, 665, 826, 511, 135, 268, 769, 506, 355, 314, 101, 515, 909, 43, 640};
    int tasksCompleted = 7;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##########..........";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> taskTimes = {19, 6, 23, 17};
    int tasksCompleted = 3;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##############......";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> taskTimes = {47, 43};
    int tasksCompleted = 1;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "##########..........";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> taskTimes = {419, 337, 853, 513, 632, 861, 336, 594, 94, 367, 336, 297, 966, 627, 399, 433, 846, 859, 80, 2};
    int tasksCompleted = 19;
    ProgressBar* pObj = new ProgressBar();
    clock_t start = clock();
    string result = pObj->showProgress(taskTimes, tasksCompleted);
    clock_t end = clock();
    delete pObj;
    string expected = "###################.";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7473757&rd=4670&pm=1975
********************************************************************************
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
class ProgressBar {
public:
  string showProgress(vector<int> tt, int tc) {
    int sum = accumulate(tt.begin(), tt.end(), 0);
 
    int total = 0;
    for(int i = 0; i < tc; i++) {
      total += tt[i];
    }
    
    int ratio = float(total) / sum * 20;
    string result;
    for(int j = 0; j < ratio; j++) {
      result += '#';
    }
 
    while(result.size() < 20) {
      result += '.';
    }
 
    return result;
  }
};

********************************************************************************
*******************************************************************************/