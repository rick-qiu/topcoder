/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8761
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

class CircularLine {
public:
    int longestTravel(vector<int> t);
};

int CircularLine::longestTravel(vector<int> t) {
    int ret;
    return ret;
}


int test0() {
    vector<int> t = {1, 1, 1, 1};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
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
    vector<int> t = {1, 4, 4, 1, 5};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
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
    vector<int> t = {1, 1, 1000};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
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
    vector<int> t = {1, 1000, 1, 1000};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 1001;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> t = {1, 1, 1, 1, 4};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> t = {484, 480, 231, 909, 717, 760, 724, 904, 219, 645, 118, 775, 113, 75, 278, 809, 376, 152, 597, 178, 915, 412, 487, 4, 647, 964, 685, 924, 632, 123, 540, 227, 455, 926, 28, 519, 16, 242, 651};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9461;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> t = {247, 773, 55, 511, 986, 997, 794, 29, 474, 505, 495, 768, 467, 114, 12, 625};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 3846;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> t = {101, 488, 522, 463, 976, 987, 800, 633, 286, 13, 823, 886, 849, 934, 240, 747, 731, 757, 289, 560, 457, 397, 89, 405, 645, 953, 694, 977, 70, 319, 29, 809, 78, 794, 62, 5, 528, 490, 777, 278, 811, 607, 504, 516, 216};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 11793;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> t = {979, 804, 148, 85, 978, 439, 578, 105, 67, 637, 80, 852, 376, 640, 76, 406, 956, 718, 604, 840, 106, 486, 695, 453, 857, 259, 946, 749, 800, 366, 579, 573, 922, 149, 92, 938, 310};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9820;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> t = {620, 747, 95, 239, 832, 599, 874, 37, 689, 91, 9, 644, 666, 478, 859, 509, 705, 416, 45, 235, 295, 260, 850, 456, 398, 967, 994, 243};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 6916;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> t = {361, 698, 598, 171, 648, 727, 894, 687, 155, 528, 93, 328, 100, 144, 969, 861, 383, 837, 343, 658, 471, 808, 722, 613, 352, 17, 733, 997, 879, 86, 97, 727, 957, 911, 855, 876, 226, 714, 415, 986, 839, 222, 953, 916, 916, 782, 17, 953};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 14105;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> t = {92, 304, 591, 982, 271, 45, 609, 876, 914, 642, 116, 807, 866, 387, 434, 667, 76, 297, 57, 759, 577, 997, 700, 701, 408, 408, 571, 606, 126, 550, 769, 76, 996, 356};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 8805;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> t = {769, 468, 519, 415};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 987;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> t = {337, 67, 256, 229, 75, 141, 604};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 820;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> t = {820, 616, 232, 162, 378, 435, 410, 849, 217, 700, 48, 16, 828, 574, 90, 151};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 3232;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> t = {510, 601, 20, 822, 580, 386, 926, 498, 716, 395, 804, 524, 107, 233, 979, 259, 391, 404, 526, 569, 272, 504, 712, 223, 811, 16, 981, 197, 741, 168, 310, 574, 91, 231, 76, 614, 976, 407, 851, 873, 753, 619};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 10625;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> t = {994, 362, 45, 558, 156, 139, 9, 329, 561, 893, 329, 701, 580, 967, 141, 969, 877, 653, 534, 997, 881, 391, 944, 811, 266, 424, 818, 626, 810, 701, 891, 244, 480, 301};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9673;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> t = {786, 845, 384, 403, 558, 334, 736, 882, 413, 694, 972, 765, 983};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 4351;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> t = {428, 497, 607, 404, 654, 608, 910, 38, 919, 958, 772, 881, 893, 847, 126, 227, 393, 960, 747, 264, 898, 14, 232, 517};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 6842;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> t = {374, 412, 687, 824, 626, 485, 943, 557, 629, 225, 892, 692, 84, 553, 229, 457, 744, 600, 458, 765, 204, 545, 981, 144, 431, 614, 355, 20, 783, 69, 745, 470, 451, 533, 564, 85, 178, 502, 673, 324, 773, 870, 142, 828, 454, 400};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 11685;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> t = {410, 636, 343, 736, 825, 844, 801, 517, 240, 173, 103, 624, 516, 928, 184, 310, 504, 299, 436, 713, 552, 952, 830, 874, 230, 862, 435, 980, 883, 116, 824, 525, 479, 693, 216, 57, 60};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9847;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> t = {618, 76, 189, 702, 937, 716, 844, 175, 477, 273, 664, 282, 606, 210, 789, 977, 185, 254, 558, 956, 372, 515, 133, 673, 603, 430, 131, 600, 477, 63, 4, 402, 288, 608, 489, 486, 328, 507, 913};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9247;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> t = {167, 917, 729, 173, 487, 171, 80, 375, 907, 567, 8, 922, 123, 599, 198, 465, 406, 546, 915, 497, 426, 232, 307, 287, 335};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 5380;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> t = {962, 560, 817, 905, 670, 748, 956, 79, 304, 328, 954, 680, 772, 423, 40, 596, 176, 453, 423, 892, 610, 128, 790, 246, 481, 131, 236, 238, 917, 672, 579, 206, 947, 409, 72, 66, 401, 234, 743};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9908;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> t = {584, 95, 556, 637, 279, 958, 428, 222, 579, 73, 514, 622, 884, 378, 685, 926, 963, 43, 518, 454, 48, 721, 312, 191, 72, 788, 992, 370, 508, 750, 860, 659, 797, 645, 808, 477};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9691;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> t = {311, 539, 779, 508, 73, 536, 1000, 937, 772, 649, 588, 708, 492, 45, 284, 574, 902, 986, 789, 22, 110, 294, 164, 300, 370, 975, 157, 803, 95, 315, 758, 284, 62, 9, 143, 799, 794};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 8953;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> t = {392, 413, 448, 652, 334, 833, 884, 541, 572, 173, 716, 549, 75, 392, 195, 933, 30, 909, 908, 804, 292, 239, 49, 112};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 5721;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> t = {752, 967, 98, 796, 193, 239, 272, 320, 284, 444, 340, 632, 77, 876, 809, 202, 295, 918, 997, 989, 842, 974, 362, 938, 858, 167, 679, 245};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 7773;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> t = {726, 612, 750, 321, 406, 570, 817, 125, 278, 281, 398, 673, 43, 419, 437, 68, 699, 581, 770, 936, 712, 686, 144, 281, 636, 216, 286, 824, 615, 908, 923, 110, 923, 530, 703, 380, 360, 654};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9896;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> t = {775, 177, 221, 628, 825, 937, 223, 745, 58, 851, 407, 800, 486, 86, 989, 696, 456, 425, 300, 452, 44, 776, 63, 651, 593};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 6306;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> t = {879, 639, 733, 735, 256, 188, 67, 836, 714, 447, 240, 539, 402, 401, 196, 841, 256, 679, 363, 580, 228, 399, 651, 936, 58, 545, 615, 39, 412};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 6936;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> t = {418, 347, 14, 83, 24, 689, 613, 292, 742, 596, 89, 916, 306, 155, 442, 632, 141, 480, 230, 437, 444, 30, 848, 140, 830, 310, 357, 785, 288, 366, 447, 870, 796, 591, 324, 871, 152, 705, 249, 674, 43};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 8880;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> t = {768, 517, 802, 335, 362, 787, 345, 862, 517, 700, 37, 561, 269, 120, 662, 735, 745, 240, 249, 835, 389, 874, 811, 322, 397, 223, 859, 259, 665, 866, 702, 115, 683, 407, 382, 409, 125, 149, 140};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9612;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> t = {560, 681, 418, 903, 568, 585, 229, 438, 667, 922, 160, 889, 840, 975};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 4382;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> t = {106, 460, 494, 243, 427, 687, 440, 244, 585, 389, 453, 848, 503, 57, 474, 603, 289, 76, 49, 734, 38, 843, 666, 554, 232, 871, 755, 375, 844, 477};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 6907;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> t = {66, 128, 725, 986, 989, 246, 848, 489, 8, 60, 339, 949, 653, 164, 145, 271, 537, 167, 332};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 3988;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> t = {174, 793, 931, 944, 982, 953, 408, 551};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 2857;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> t = {576, 776, 861, 737, 363, 709, 134, 692, 126, 185, 305, 774, 463, 952, 946, 376, 684, 464, 79, 866, 627, 573, 901, 38, 652, 173, 486, 687, 564, 66, 97, 343, 809, 182, 423, 501};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9090;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> t = {976, 461, 429, 449, 892, 171, 290, 303, 681, 968, 239, 692, 788, 383, 851};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 4236;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> t = {819, 146, 890, 115, 691, 769, 736, 990, 986, 775, 384, 883, 17, 538, 555, 227, 873, 749, 189, 562, 279, 651, 697, 808, 466, 754, 4, 318, 608, 466, 79, 955, 232, 265, 742, 787, 843, 148, 29, 667, 820, 707};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 11559;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> t = {715, 78, 402, 758, 696, 677, 888, 246, 477, 756, 974, 318, 413, 462, 621, 340, 400, 400, 420, 562, 8, 91, 197, 245, 790, 839, 619, 51, 174, 611, 555, 345, 756, 322, 899, 898};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 8983;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> t = {855, 435, 884, 214, 481, 983, 941, 876, 289, 206, 147};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 3089;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> t = {600, 522, 144, 514, 910, 244, 44, 26, 229, 411, 429, 884, 388, 305, 401, 626, 935, 498, 684, 194, 444, 202, 173, 81, 792, 834, 410, 846, 608, 231, 876};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 7208;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> t = {172, 983, 366, 942, 117, 864, 487, 514, 87, 471, 127, 449, 362, 834, 214, 801, 563, 195, 711};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 4617;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> t = {951, 657, 195, 67, 191, 76, 818, 738, 510, 197, 413, 744, 592, 904, 47, 368};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 3714;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> t = {143, 722, 706, 899, 548, 981, 544};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 2216;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> t = {226, 147, 789, 744, 105, 935, 282, 965, 844, 523, 110, 169};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 2893;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> t = {656, 978, 889};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 978;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> t = {576, 518, 312, 360, 159, 99, 402, 667, 408, 406, 428, 445, 276, 102, 231, 805, 813, 82, 324, 272, 232, 530, 49, 279, 441, 136, 577, 411, 161, 314, 490, 568, 202, 464, 400, 339, 587, 164};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 7010;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> t = {906, 558, 547, 757, 886, 367, 558, 822, 391, 496, 117, 17, 125, 687, 817, 824, 662, 929, 724, 853, 528, 967, 176, 375, 381, 199, 528, 364, 110, 822, 711, 256, 942, 768, 867, 84, 908, 826, 182, 426, 860};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 11658;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> t = {361, 597, 275, 631, 332, 501, 508, 526, 22, 720, 740, 368, 654, 60, 575, 866, 916, 984, 844, 732, 31, 259, 932, 634, 28, 620, 138, 154, 415, 264, 816, 152, 2, 642, 302, 412, 983, 309, 655, 125, 171};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9620;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> t = {842, 471, 545, 932, 113, 744, 903, 144, 914, 81, 553, 561, 992, 856, 289, 601, 621, 362, 120, 180, 382, 717, 116, 150, 955, 659, 533, 148, 921, 938, 909};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 8605;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> t = {398, 961, 196, 596, 145, 597, 45, 376, 499, 122, 457, 520};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 2454;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> t = {581, 198, 350, 992, 606, 251, 457, 108, 515, 27, 412, 981, 823, 275, 357, 760, 873, 178, 954, 965, 873, 932, 23, 473, 741, 434, 589, 924, 770, 386, 268, 634, 790, 439, 265, 608, 802, 197, 875, 580, 117, 963, 751, 249, 684, 933, 604, 766};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 13652;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> t = {884, 249, 50, 803, 765, 42, 823, 116, 811, 857, 192, 837, 9, 48, 455, 103};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 3438;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> t = {93, 559, 403, 369, 847, 803, 273, 904, 941, 90, 302, 694, 238, 304, 916, 145, 283, 522, 243, 498, 152, 845, 93, 538, 217, 603};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 5893;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> t = {26, 281, 579, 500, 54, 22, 292, 228, 933, 89, 342, 329, 151, 657, 821, 58, 123, 167, 866, 688, 932, 324, 176, 590, 64, 158, 792, 861, 509, 705, 274, 597, 448, 67, 144, 648, 251, 936, 680, 33, 842};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 8612;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> t = {983, 554, 11, 727, 484, 899, 960, 978, 80, 318, 121, 207, 272, 94, 194, 959, 932, 488, 23, 102, 144, 394};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 4913;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> t = {544, 916, 553, 989, 423, 81, 22, 23, 188, 947, 936, 800, 67, 350, 621, 336, 923, 510, 729, 373, 850, 879, 434, 790, 608, 461, 674, 708, 34, 73, 595, 862, 919, 201};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9206;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> t = {567, 135, 955, 392, 206, 238, 782, 751, 258, 1000, 756, 468, 936, 567, 512, 711, 874, 192, 312, 347, 510, 836, 327, 775, 952, 210, 778, 58, 245, 282, 148, 661, 693, 364, 273, 930, 612, 494, 452, 146, 277, 732, 661};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 11152;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> t = {683, 890, 362, 594, 918, 693, 16, 583, 62, 904, 198, 514, 968, 587, 22, 461, 10, 581, 818, 112, 619, 730, 927};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 6059;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> t = {828, 439, 1000, 198, 46, 146, 50, 491, 558, 447, 959, 343, 580, 22, 666, 633, 772, 736, 582, 432, 238, 199, 778, 727, 56, 317, 205, 688, 182, 861, 34, 23, 643, 110, 224, 983, 263, 294, 889, 387, 941, 891, 989};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 10423;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> t = {696, 237, 770, 885, 897, 855, 146, 853, 840, 284, 753, 389, 876, 270, 930, 359, 48, 1, 237, 978};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 5604;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> t = {438, 863, 769, 958, 84, 101, 95, 844, 65, 118, 262, 478, 223, 901, 624, 68, 777, 544, 884, 32, 820, 536, 602, 354, 899, 765, 866, 983, 258, 612, 878, 421, 556, 448, 279, 190, 304, 267, 5, 966, 166, 895, 785, 834, 208, 606, 276};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 11939;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> t = {683, 434, 923, 300, 197, 50, 514, 302, 832, 289, 236, 262, 724, 572, 685, 88, 643, 264, 23, 891, 270, 766, 48, 288, 422, 37, 485, 681, 644, 714, 328, 727, 769, 957, 148, 440, 57, 443, 105, 795, 730};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 9372;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> t = {56, 1, 1, 1, 1, 23, 234, 22, 22, 34, 56, 66, 67, 77, 777};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 661;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> t = {2, 5, 7, 3, 5, 1, 1, 6};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> t = {1, 2, 1};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> t = {1, 4, 4, 1, 5};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> t = {1, 1, 1, 1, 4};
    CircularLine* pObj = new CircularLine();
    clock_t start = clock();
    int result = pObj->longestTravel(t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707682&rd=12171&pm=8761
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
 
class CircularLine {
public:
  int longestTravel(vector <int>);
};
 
int CircularLine::longestTravel(vector <int> t) {
  int res=-1;
  int tot=0;
  int i;
  for(i=0;i<t.size();i++)
    tot+=t[i];
  for(i=0;i<t.size();i++)
    for(int j=i+1;j<t.size();j++)
    {
      int sum=0;
      for(int k=i;k<j;k++)
        sum+=t[k];
      res=max(res,min(sum,tot-sum));
    }
  return res;
}

********************************************************************************
*******************************************************************************/