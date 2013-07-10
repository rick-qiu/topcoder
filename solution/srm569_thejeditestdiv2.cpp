/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12404
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

class TheJediTestDiv2 {
public:
    int countSupervisors(vector<int> students, int Y, int J);
};

int TheJediTestDiv2::countSupervisors(vector<int> students, int Y, int J) {
    int ret;
    return ret;
}


int test0() {
    vector<int> students = {10, 15};
    int Y = 12;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> students = {11, 13, 15};
    int Y = 9;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> students = {10};
    int Y = 100;
    int J = 2;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
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
    vector<int> students = {4, 7, 10, 5, 6, 55, 2};
    int Y = 20;
    int J = 3;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> students = {45, 551, 575, 17, 90, 488, 22, 195, 278, 659, 36, 251, 663, 341, 129, 6, 481, 398, 778, 360, 297, 545, 869, 798, 739, 684, 711, 928, 986, 85, 885, 586, 723, 341, 453, 552, 507, 123, 648, 920, 573, 956, 919, 739, 963, 391, 385};
    int Y = 201;
    int J = 194;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> students = {116, 689, 301, 755, 311, 150, 582, 835, 440, 943, 708, 969, 612};
    int Y = 630;
    int J = 294;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> students = {985, 37, 940, 856, 793, 314, 755, 558, 675, 661, 953, 424, 342, 190, 584, 226, 244, 956, 440, 681, 852, 700, 944, 129, 344, 944, 95};
    int Y = 517;
    int J = 219;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> students = {432, 799, 320, 235, 730, 242, 54, 824, 734, 310, 447, 496, 572, 332, 862, 882, 600, 435, 647, 336, 358, 700, 369, 230, 5, 215, 981, 569, 49, 939};
    int Y = 134;
    int J = 133;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> students = {94, 451, 47, 285, 729, 904, 829, 687, 992, 902, 498, 920, 590, 741, 663, 159, 929, 33, 50, 225, 361, 265, 261};
    int Y = 204;
    int J = 191;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> students = {418, 628, 404, 19, 533, 600, 561, 52, 893, 62, 790, 50, 808, 72, 741, 135, 628, 300, 966, 148, 983, 852, 703, 312, 872, 837, 659, 964, 331, 314, 743, 439, 115, 204, 31, 418, 34, 518, 616, 562, 330, 788, 317};
    int Y = 196;
    int J = 22;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 952;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> students = {732, 825, 749, 511, 467, 306, 742, 532, 934, 791, 866, 972, 547, 646, 529, 929, 762, 461, 622, 886, 891, 353, 894, 902, 314, 526, 939, 940, 266, 238, 779, 167, 94, 620, 63, 385, 556, 418, 523, 893, 459, 644, 403, 989, 704};
    int Y = 66;
    int J = 49;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 589;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> students = {572, 413, 803, 177, 944, 820, 689, 155, 962, 177, 440, 473, 545, 711, 122, 764, 85, 800, 800, 577, 591, 849, 50, 287, 517, 627, 402, 685, 551, 701, 366, 753, 640, 333, 234, 896, 627, 163, 724, 347, 974, 279, 73, 800, 154, 834, 210, 338, 517, 169};
    int Y = 248;
    int J = 69;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 394;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> students = {560, 919, 798, 730, 31, 834, 393, 520, 430, 227, 850, 37, 829, 274, 335, 679, 629, 872, 404, 986, 210, 229, 15, 585, 789, 110, 622, 422};
    int Y = 153;
    int J = 93;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> students = {939, 784, 554, 559, 337, 905, 470, 339};
    int Y = 210;
    int J = 98;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> students = {732, 242, 353, 371, 686, 220, 170, 671, 561, 215, 298, 315, 374, 451, 455, 179, 933, 983, 473, 687, 573, 72, 960, 440};
    int Y = 568;
    int J = 54;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> students = {889, 241, 942, 573, 688, 274, 185, 725, 628, 692, 79, 508, 667, 53, 71, 410, 889, 19, 390, 532, 972, 925, 703, 240, 30, 730};
    int Y = 329;
    int J = 225;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> students = {306, 959, 16, 721, 161, 201, 223, 436, 667, 546, 909, 620, 572, 379, 429, 10, 66, 12, 790, 30, 962, 198, 901, 394, 603, 827, 416, 941, 995, 528};
    int Y = 458;
    int J = 417;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> students = {169, 513, 153, 611, 479, 360, 565, 544, 303, 34, 450};
    int Y = 284;
    int J = 70;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> students = {301, 929, 661, 141, 972, 302, 226, 248, 115, 583, 17, 674, 264, 559, 597, 207, 885, 594};
    int Y = 184;
    int J = 66;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> students = {905, 2, 4, 732, 374, 534, 675, 69, 434, 452, 105, 680, 562, 160, 971, 967, 714, 16, 931, 225, 593, 274, 865, 696, 969, 57, 253, 407, 419, 239, 709, 100, 757, 856};
    int Y = 392;
    int J = 65;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> students = {455, 366, 840, 955, 627};
    int Y = 881;
    int J = 160;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> students = {787, 167, 426, 169, 199, 95, 135, 239, 111};
    int Y = 38;
    int J = 7;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 331;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> students = {841, 591, 619, 878, 616, 149, 776, 139, 999, 651, 785, 973, 730, 387, 343, 3, 952, 262, 304, 205, 811, 846, 284, 916, 631, 46, 742, 11, 974, 445, 273, 262, 113, 436, 950, 460, 687, 729, 122, 382, 532, 416, 315, 786, 7, 782};
    int Y = 658;
    int J = 306;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> students = {255, 903, 530, 604, 429, 631, 703, 789, 867, 830, 543, 918, 490, 487, 367, 237, 718, 423, 282, 120, 136, 371};
    int Y = 450;
    int J = 288;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> students = {985, 158, 729, 632, 625, 136, 86, 641, 234, 897, 2, 989, 584, 264, 409, 279, 735, 120, 526, 326, 569, 590, 974};
    int Y = 528;
    int J = 116;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> students = {574, 973, 561, 928, 243, 215, 225, 222, 166, 584, 505, 642, 280, 251, 327, 625, 919, 828, 420, 39, 382, 771, 243, 438, 88, 405, 773, 97, 934, 752, 427, 883, 427};
    int Y = 20;
    int J = 17;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 964;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> students = {233, 566, 721, 490, 728, 622};
    int Y = 456;
    int J = 363;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> students = {437, 571, 555, 195, 323, 944, 155, 889, 960, 757, 612, 18, 1000, 78, 899};
    int Y = 698;
    int J = 71;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> students = {392, 767, 387, 742, 850, 526, 280, 689, 996, 502};
    int Y = 284;
    int J = 168;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> students = {176, 618, 564, 243, 723, 6, 119, 652, 798, 211, 692, 436, 528, 349, 383, 141, 700, 155, 287, 990, 624};
    int Y = 93;
    int J = 79;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> students = {681, 783, 413, 670, 56, 979, 967, 858, 785, 89, 202, 405, 796, 906, 945, 959, 306, 509, 144, 893, 553, 61, 935, 646, 575, 932, 979, 469, 460};
    int Y = 367;
    int J = 139;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> students = {252, 143, 27, 983, 486, 425, 966, 743, 149, 80, 30, 615, 723, 129, 575, 627, 827, 570, 794, 907, 922, 763, 27, 696, 468, 463, 220, 423, 900, 851, 476, 548, 801, 319, 545, 821, 710, 514, 498, 338, 38, 55, 832, 252, 692};
    int Y = 248;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 22975;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> students = {133, 216, 59, 361, 780, 995, 935, 81, 811, 778, 343, 316, 716, 933, 728, 406};
    int Y = 706;
    int J = 497;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> students = {626, 20, 284, 8, 26, 787, 274, 475};
    int Y = 162;
    int J = 105;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> students = {186, 955, 754, 989, 507, 351, 266, 365, 98, 387, 860, 67, 29, 803, 69, 388, 504, 894, 961, 599, 691, 775, 880, 12, 47, 729, 374, 595, 9, 771, 785, 386, 911, 355};
    int Y = 700;
    int J = 9;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 1865;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> students = {694, 429, 948, 572, 531, 905, 620, 531, 302, 990, 717, 372, 563, 385, 745, 541, 214, 968, 733, 839, 560, 762, 529, 8, 446, 904};
    int Y = 612;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 15196;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> students = {899, 147, 151, 689, 405, 932, 701, 558, 718, 1000, 140, 820, 111, 738, 970, 955, 194, 27, 552, 348, 481, 12, 88, 752, 460, 550, 164, 779, 520, 87, 849, 103, 259, 287, 388, 123, 838, 518, 67, 676, 260};
    int Y = 179;
    int J = 10;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 1928;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> students = {663};
    int Y = 481;
    int J = 10;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> students = {990, 241, 374, 163, 683, 978, 52, 812, 369, 647, 134, 112, 855, 62, 416, 798, 137, 48, 450, 535, 555, 76, 680, 547, 636, 706, 629, 527, 696, 721, 505, 864, 729, 778, 984};
    int Y = 549;
    int J = 6;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3003;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> students = {848, 945, 850, 128, 635, 523, 416, 206, 435, 637, 445, 601, 502, 719, 487, 534, 405, 832, 297, 668, 26, 541, 576, 807, 826, 566, 495, 617, 461, 296};
    int Y = 628;
    int J = 7;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 2255;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> students = {710};
    int Y = 550;
    int J = 2;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> students = {512, 609, 410, 875, 312, 442, 797, 551, 485, 843, 34, 662, 972, 495, 837, 256, 613, 714, 2, 893, 815, 514, 572, 28, 236, 479, 116, 333, 943, 512, 682, 701, 959, 598, 176, 246, 429, 883, 535, 601};
    int Y = 65;
    int J = 7;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3104;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> students = {356, 235, 986, 617, 613, 742, 556, 135, 210, 621, 416, 783, 326, 124, 490, 86, 887, 918, 948, 733, 344, 311, 416, 710, 231, 740, 405, 381, 64, 393, 830, 443, 72, 5, 987, 23, 498, 688, 814, 871, 104, 346};
    int Y = 674;
    int J = 6;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3315;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> students = {648, 127, 90, 369, 762, 367, 490, 614, 33, 327, 251, 554, 616, 176, 437, 413, 566, 320, 43, 513, 320, 376, 612, 641, 545, 954, 172, 731, 304, 789, 874, 227, 134, 539, 113, 660, 120, 387, 706, 690, 305, 434, 668, 113, 780, 777, 456, 92};
    int Y = 762;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 4113;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> students = {181, 663, 151, 659, 572, 563, 929};
    int Y = 658;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3060;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> students = {459, 603, 256, 435, 776, 869, 624, 75, 811, 540, 630, 965, 537, 286, 353, 279, 351, 212, 673, 679, 951, 370, 324, 2, 130, 595, 339, 217, 167, 357, 695};
    int Y = 28;
    int J = 4;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3644;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> students = {185, 59};
    int Y = 329;
    int J = 8;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> students = {305, 459, 112, 213, 704, 250, 983, 892, 717, 993};
    int Y = 338;
    int J = 9;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 592;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> students = {531, 850, 121, 81, 908, 681, 478, 531, 807, 326, 987, 705, 930, 53, 742, 562, 946, 473, 641, 501, 250, 309, 37, 521, 357};
    int Y = 129;
    int J = 3;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 4407;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> students = {385, 101, 152, 243, 778, 371, 120, 959, 54, 943, 231, 648, 179, 707, 671, 926, 825, 148, 19, 170, 653, 863, 213, 37, 527, 842, 861, 410, 421, 123, 704, 704, 703, 702, 747, 209, 342};
    int Y = 523;
    int J = 4;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 4306;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> students = {581, 351, 19, 650, 547, 642, 804, 859, 335, 538, 509, 673, 75, 364, 874, 878, 635, 545, 195, 309, 648, 344, 213, 777, 739, 464, 696, 737, 957, 739, 148, 909, 629, 249, 161, 632, 87, 595, 522, 197};
    int Y = 167;
    int J = 10;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 2082;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> students = {550, 974, 703, 406, 749, 758, 944, 156, 300, 997, 115, 492, 41, 309, 539, 317, 532, 109, 100};
    int Y = 952;
    int J = 8;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 1025;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> students = {39, 842, 21, 127, 563, 798, 807, 220, 234, 5, 362, 46, 225, 714, 548, 988, 46, 554, 48, 536, 110, 165};
    int Y = 574;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 7424;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> students = {247, 164, 970, 85, 603, 897, 538, 105, 332, 149, 631, 537, 437, 327, 515, 585, 765, 378, 974, 432, 389, 15, 660, 411, 239, 507, 57, 317};
    int Y = 43;
    int J = 9;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 1370;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> students = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int Y = 2;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 49998;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> students = {459, 494};
    int Y = 1000;
    int J = 999;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> students = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int Y = 1000;
    int J = 999;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> students = {352, 825, 556, 40, 974, 980, 215, 2, 461, 73, 935, 216, 333, 25, 45, 558, 53, 463, 718, 743, 523, 641, 932, 445, 697, 856, 938, 886, 455, 172, 848, 326, 883, 336, 161, 719, 655, 573};
    int Y = 1000;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 18633;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> students = {0, 0, 0, 0, 0};
    int Y = 145;
    int J = 21;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
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
    vector<int> students = {11, 13, 15};
    int Y = 9;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> students = {10, 15};
    int Y = 12;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> students = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int Y = 2;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 49998;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> students = {12, 15, 10, 9};
    int Y = 10;
    int J = 2;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> students = {4, 3};
    int Y = 5;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> students = {4, 7, 10, 5, 6, 55, 2, 22, 35, 42};
    int Y = 29;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> students = {10, 11, 11, 11};
    int Y = 9;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> students = {15, 13, 11};
    int Y = 9;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> students = {20, 21, 22, 23, 5};
    int Y = 7;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> students = {5, 7};
    int Y = 10;
    int J = 7;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> students = {4, 7, 10, 5, 6, 55, 2};
    int Y = 20;
    int J = 3;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> students = {10, 9, 10, 10, 10};
    int Y = 9;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> students = {15, 13, 15};
    int Y = 9;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> students = {16, 10};
    int Y = 10;
    int J = 8;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> students = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int Y = 2;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 30103;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> students = {3};
    int Y = 4;
    int J = 2;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
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
    vector<int> students = {20, 9};
    int Y = 9;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> students = {10, 16, 23};
    int Y = 15;
    int J = 8;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> students = {2, 4, 6, 1};
    int Y = 8;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
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
    vector<int> students = {99, 78, 1, 34, 45, 11, 90, 34, 26, 67, 12};
    int Y = 45;
    int J = 9;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> students = {1, 2, 3, 4, 5, 6, 7};
    int Y = 1000;
    int J = 3;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> students = {11, 13};
    int Y = 10;
    int J = 3;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> students = {2, 12};
    int Y = 10;
    int J = 4;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> students = {15, 6};
    int Y = 6;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> students = {8, 9};
    int Y = 5;
    int J = 4;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> students = {1, 1, 1, 1, 3};
    int Y = 3;
    int J = 1;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> students = {5, 7};
    int Y = 10;
    int J = 5;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
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
    vector<int> students = {12, 0};
    int Y = 12;
    int J = 3;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> students = {4, 4, 4, 4};
    int Y = 4;
    int J = 3;
    TheJediTestDiv2* pObj = new TheJediTestDiv2();
    clock_t start = clock();
    int result = pObj->countSupervisors(students, Y, J);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23080041&rd=15489&pm=12404
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <cstring>
#include <climits>
 
using namespace std;
 
class TheJediTestDiv2 {
public:
  int countSupervisors(vector <int> s, int Y, int J) {
    sort(s.begin(),s.end());
    int res=10000001,cnt;
    for(int i=0;i<s.size();i++){
      cnt=0;
      for(int j=0;j<s.size();j++){
        if(j==i){
          if(s[j]>=Y)cnt+=(int)ceil(((s[j]-Y)*1.0)/J);
        }
        else {
          cnt+=(int)ceil((s[j]*1.0)/J);
        }
      }
      res=min(cnt,res);
    }
    return res;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/