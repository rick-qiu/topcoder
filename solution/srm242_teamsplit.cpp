/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4564
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

class TeamSplit {
public:
    int difference(vector<int> strengths);
};

int TeamSplit::difference(vector<int> strengths) {
    int ret;
    return ret;
}


int test0() {
    vector<int> strengths = {5, 7, 8, 4, 2};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
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
    vector<int> strengths = {100};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> strengths = {1000, 1000};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
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
    vector<int> strengths = {9, 8, 7, 6};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> strengths = {1, 5, 10, 1, 5, 10};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> strengths = {824, 581, 9, 776, 149, 493, 531, 558, 995, 637, 394, 526, 986, 548, 344, 509, 319, 37, 790, 491, 479, 34, 776, 321, 258, 851, 711, 365, 763, 355, 386, 877, 596, 96, 151, 166, 558, 109, 874, 959, 845, 181, 976, 335, 930, 22, 78, 120, 907, 584};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 478;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> strengths = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> strengths = {1000, 1, 1};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> strengths = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 341;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> strengths = {757, 605, 212, 730, 531, 69, 280, 966, 915, 572, 326, 358, 163, 32, 724, 562, 632, 716, 14, 708, 748, 832, 232, 254, 67, 173, 928, 548, 907, 100, 886, 900, 165, 406, 450, 330, 516, 510, 816, 968};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 548;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> strengths = {51, 313, 275, 609, 882, 697, 216, 443, 240, 633, 189, 282, 324, 569, 557, 435, 995, 676, 619, 635, 117, 15, 320, 561, 941, 567, 695, 379, 702, 254, 685, 32, 649, 970, 406, 953, 123, 234, 354};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 599;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> strengths = {155, 422, 887, 47, 34, 826, 944, 862, 242, 758, 675, 153, 577, 829, 97, 596, 671, 624, 102, 260, 882, 607, 272, 747, 915, 987, 860, 593, 553, 491, 675, 791, 684, 65, 228, 753, 884, 479, 60};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 557;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> strengths = {216, 115, 272, 232, 570, 421, 755, 436, 215, 745, 659, 51, 140, 790, 517, 751, 981, 490, 369, 220, 359, 399, 728, 616, 149, 317, 57, 586, 496, 837, 404, 259, 102};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 636;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> strengths = {982, 163, 45, 778, 131, 186, 114, 94, 633, 949, 586, 463, 984, 48, 465, 777, 456, 366, 369, 266, 820, 282, 682, 896, 730, 296, 336, 23, 20, 550, 27, 63, 56, 664, 7, 224, 963, 173, 579, 364, 845, 692, 775, 439, 534, 650};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 405;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> strengths = {917, 407, 115, 419, 464, 675, 505, 368, 788, 243, 238, 226, 906, 472, 595, 584, 645, 452, 843, 506, 100, 682, 727, 79, 836, 804, 166, 910, 946, 562, 808, 806, 490, 40, 903, 313};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> strengths = {873, 699, 947, 759, 791, 441, 296, 569, 101, 391, 860, 366, 572, 646, 28, 250, 585, 988, 673, 909, 847, 629, 373, 754, 81, 350, 126, 588, 344, 542, 847, 48};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 547;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> strengths = {434, 14, 275, 292, 59, 232, 432, 30, 117, 96, 974, 132, 855, 847, 620, 814, 890, 590, 354, 629, 311, 255, 462, 517, 298, 833, 855, 674, 165, 665, 737, 795};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 507;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> strengths = {541, 221, 756, 201, 277, 324, 567, 258, 35, 545, 858, 200, 953, 504, 940, 427, 33, 927, 416, 280, 279, 447, 356, 118, 779, 134, 588, 207, 291, 237, 279, 433, 838, 497, 980, 72, 99, 792, 485, 682, 495, 74, 960, 903};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 404;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> strengths = {650, 119, 3, 159, 15, 214, 378, 675, 411, 33, 910, 369, 271, 1000, 608, 937, 225, 91, 649, 178, 939, 663, 795, 13, 481, 99, 969, 792, 527, 788, 463, 838, 901, 35, 360, 764, 744, 169, 794};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 505;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> strengths = {813, 489, 696, 231, 461, 499, 52, 192, 888, 97, 38, 415, 479, 506, 726, 361, 578, 341, 474, 995, 306, 440, 980, 410, 581, 589, 684, 787, 300, 445, 989, 44, 130, 623, 814, 568, 347, 353, 71, 778};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 374;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> strengths = {119, 350, 481, 497, 314, 909, 354, 440, 759, 162, 660, 129, 144, 971, 348, 831, 488, 547, 288, 536, 88, 846, 792, 661, 999, 540, 385, 670, 542, 542, 492, 848, 489, 83, 755, 781, 313, 796, 556, 341, 622, 524, 406, 22, 530, 822, 887, 446};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 561;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> strengths = {434, 240, 88, 180, 352, 824, 211, 157, 816, 573, 827, 373, 635, 322, 145, 25, 473, 514, 142, 835, 464, 707, 888, 413, 453, 85, 318, 24, 691, 649, 894, 650, 629, 791, 712, 166, 393, 119, 911, 878, 20, 449, 164};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 458;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> strengths = {332, 393, 374, 717, 29, 930, 754, 862, 612, 419, 362, 856, 961, 622, 294, 967, 277, 29, 36, 121, 160, 880, 844, 114, 773, 297, 677, 53, 140, 985, 894, 652, 868, 627, 690, 928, 347, 109, 563, 572, 299, 456, 441, 388, 556, 501, 224, 499, 320};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 614;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> strengths = {763, 57, 454, 791, 320, 380, 294, 458, 50, 694, 470, 727, 37, 444, 207, 997, 290, 326, 943, 618, 7, 578, 595, 758, 625, 675, 409, 37, 256, 864, 936, 243, 880};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> strengths = {884, 113, 136, 679, 482, 566, 425, 773, 636, 698, 37, 518, 449, 548, 545, 28, 604, 923, 984, 236, 351, 585, 253, 11, 69, 779, 756, 785, 953, 373, 790, 86, 542, 466, 848, 97, 3, 441, 207, 439, 330};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> strengths = {762, 712, 94, 242, 467, 293, 943, 268, 483, 158, 908, 941, 889, 624, 947, 506, 183, 851, 679, 400, 242, 962, 87, 693, 827, 908, 975, 367, 871, 303, 965, 953, 767, 156, 115, 940, 69, 973};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 511;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> strengths = {642, 172, 507, 980, 510, 178, 340, 16, 655, 317, 138, 559, 458, 527, 463, 644, 935, 103, 340, 489, 532, 133, 513, 321, 174, 2, 743, 770, 607, 570, 201, 758, 705, 991, 680, 405, 128, 363, 637, 448, 933, 833, 26, 132, 222, 977, 514, 952, 51, 590};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> strengths = {261, 732, 678, 10, 882, 943, 365, 564, 289, 477, 630, 435, 954, 516, 8, 121, 265, 287, 152, 687, 462, 769, 537, 902, 361, 80, 973, 566, 328, 926, 894, 263, 983, 796, 101, 45, 699};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 445;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> strengths = {174, 337, 939, 332, 302, 329, 539, 519, 867, 338, 622, 583, 838, 676, 359, 358, 111, 340, 28, 221, 950, 767, 232, 420, 865, 489, 780, 382, 415, 294, 409, 90, 71};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 470;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> strengths = {260, 263, 190, 951, 454, 735, 19, 238, 807, 972, 593, 706, 927, 321, 992, 118, 841, 631, 216, 49, 772, 775, 436, 289, 607, 743, 7, 641, 16, 990, 85, 846, 984, 545, 32, 951, 703, 504, 30, 779, 504, 195, 539, 28, 161, 125, 593, 185, 850, 963};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 409;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> strengths = {241, 559, 342, 787, 75, 883, 267, 513, 739, 531, 372, 5, 799, 988, 472, 851, 23, 610, 437, 126, 59, 790, 894, 595, 566, 826, 527, 292, 392, 53, 605, 210, 858, 758, 915, 154, 410, 942};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> strengths = {850, 351, 791, 690, 25, 302, 58, 358, 512, 834, 570, 515, 65, 11, 155, 906, 490, 709, 678, 147, 246, 721, 772, 785, 728, 104, 948, 858, 789, 492, 59, 381, 509, 473, 255, 532, 534, 712, 696, 497, 213};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 485;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> strengths = {140, 261, 297, 70, 773, 595, 750, 748, 416, 748, 907, 854, 397, 67, 529, 552, 646, 512, 560, 803, 895, 482, 959, 182, 856, 517, 111, 162, 305, 116, 326, 123, 323, 488, 803};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 591;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> strengths = {95, 6, 722, 999, 709, 430, 950, 356, 955, 231, 966, 197, 528, 9, 646, 700, 404, 883, 11, 552, 422, 226, 666, 5, 673, 819, 509, 872, 308, 231, 819, 25, 525, 525, 987, 34, 297, 878, 381, 31, 762, 898, 677, 27};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 606;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> strengths = {264, 637, 706, 383, 210, 294, 478, 797, 351, 730, 200, 588, 665, 193, 368, 827, 663, 285, 8, 891, 438, 988, 426, 815, 280, 931, 122, 782, 942, 634, 375, 163, 729, 551, 610, 21};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 509;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> strengths = {578, 737, 240, 358, 298, 6, 223, 916, 75, 663, 187, 83, 837, 179, 229, 211, 450, 658, 292, 247, 395, 627, 116, 192, 375, 371, 347, 969, 138, 457, 81, 814, 494, 23, 819, 846, 592, 434};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 491;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> strengths = {895, 129, 178, 113, 888, 167, 605, 887, 970, 32, 959, 124, 703, 155, 980, 678, 621, 227, 301, 468, 588, 336, 985, 855, 66, 459, 163, 380, 105, 430, 801, 937, 558, 551, 284, 313, 674, 335, 35, 958, 533, 162, 243, 74, 830, 389};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 448;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> strengths = {474, 575, 631, 57, 240, 205, 198, 190, 227, 974, 415, 1, 21, 619, 698, 599, 833, 309, 983, 722, 319, 668, 745, 258, 309, 570, 125, 572, 643, 677, 534, 200, 59, 396, 881, 321, 500, 209, 664, 942, 26, 804, 942, 237};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 588;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> strengths = {73, 182, 711, 640, 56, 48, 431, 70, 186, 608, 355, 592, 851, 844, 533, 219, 27, 563, 564, 781, 126, 261, 27, 515, 315, 458, 107, 838, 74, 651, 108, 729, 751, 631, 487, 146, 795, 67, 607, 50, 881, 298, 829, 923, 510, 868, 675, 893, 81};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 497;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> strengths = {16, 436, 259, 878, 426, 2, 16, 896, 922, 189, 275, 322, 729, 204, 96, 241, 785, 75, 618, 414, 598, 465, 253, 73, 835, 170, 917, 992, 568, 710, 646, 916, 305, 885, 221, 376, 658, 557, 611, 94, 351, 753, 730, 128};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 531;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> strengths = {704, 904, 176, 898, 504, 841, 925, 616, 149, 713, 642, 232, 153, 862, 548, 34, 337, 196, 889, 419, 786, 306, 815, 600, 919, 649, 344, 726, 288, 421, 728, 950, 144, 324, 704, 965, 323, 724};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 660;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> strengths = {922, 42, 449, 857, 289, 693, 532, 869, 829, 708, 263, 480, 329, 297, 932, 193, 375, 933, 894, 874, 42, 374, 175, 623, 190, 545, 656, 13, 912, 26, 255, 380, 247};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 632;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> strengths = {898, 539, 418, 329, 371, 471, 843, 192, 700, 559, 337, 533, 649, 535, 611, 763, 236, 607, 56, 93, 940, 912, 612, 495, 847, 698, 61, 16, 118, 468, 44, 243, 184, 138, 46, 888, 518, 764, 586, 340, 326, 129, 117, 754, 339, 583, 137, 860};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 541;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> strengths = {13, 980, 770, 15, 775, 253, 69, 734, 693, 905, 889, 725, 537, 731, 509, 830, 122, 283, 672, 587, 138, 61, 794, 106, 489, 554, 92, 888, 228, 884, 653, 466, 710, 626, 586, 254, 601, 539, 864, 144, 696, 920, 873, 896, 572, 714, 26, 721};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 475;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> strengths = {363, 893, 317, 157, 576, 591, 284, 980, 812, 335, 515, 411, 824, 762, 296, 999, 910, 7, 148, 777, 100, 244, 874, 457, 702, 789, 252, 299, 397, 987, 572, 546, 539, 321, 512, 1000, 656, 118, 527, 727, 62, 976, 384, 775, 169, 862, 145};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 575;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> strengths = {283, 455, 69, 59, 644, 996, 343, 258, 742, 207, 379, 865, 22, 463, 596, 185, 398, 545, 24, 799, 528, 917, 327, 148, 805, 314, 954, 612, 956, 502, 345, 33, 46, 21};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 494;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> strengths = {916, 861, 93, 180, 200, 173, 613, 234, 139, 459, 800, 140, 769, 34, 842, 497, 270, 476, 29, 577, 640, 917, 808, 367, 679, 836, 677, 451, 578, 531, 774, 816, 672, 869, 843, 204, 335, 671, 170};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 416;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> strengths = {268, 399, 539, 705, 104, 641, 191, 215, 707, 953, 309, 937, 855, 514, 744, 330, 652, 197, 121, 548, 563, 813, 820, 858, 681, 319, 753, 916, 3, 400, 490, 841, 609, 670, 4, 47, 784, 152, 20, 117, 447, 610, 623, 82};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 471;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> strengths = {600, 717, 335, 397, 363, 827, 607, 288, 538, 309, 847, 382, 640, 716, 87, 24, 579, 489, 816, 380, 557, 158, 305, 510, 467, 93, 162, 768, 203, 792, 97};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 457;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> strengths = {898, 84, 562, 184, 603, 650, 432, 365, 844, 187, 739, 240, 115, 848, 986, 626, 502, 283, 104, 468, 175, 326, 459, 286, 366, 662, 255, 897, 192, 651, 41, 598, 454, 471, 631, 873, 216, 56, 309, 253, 832, 380, 890, 285, 572, 240, 465, 748};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 513;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> strengths = {541, 323, 706, 912, 231, 274, 108, 500, 875, 129, 207, 86, 549, 71, 944, 597, 12, 634, 227, 247, 970, 767, 494, 946, 707, 192, 665, 23, 481, 439, 916, 678, 522, 871, 77, 629, 15, 161, 668, 346, 801, 140, 13, 424, 42, 918, 506, 278, 933};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 507;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> strengths = {858, 810, 836, 581, 810, 781, 996, 233, 6, 560, 919, 472, 893, 61, 149, 246, 566, 160, 104, 238, 250, 124, 651, 412, 368, 98, 949, 443, 382, 980, 872, 786, 51, 47, 689, 408, 191, 927, 995, 881, 939, 740, 677, 993, 18};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> strengths = {308, 726, 347, 991, 766, 242, 162, 806, 973, 205, 162, 720, 147, 729, 122, 482, 488, 775, 569, 153, 118, 727, 783, 170, 829, 892, 521, 206, 320, 486, 104, 963, 706, 345, 31, 526, 166, 355, 896, 779, 339, 163, 354, 919, 664};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 405;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> strengths = {688, 861, 617, 674, 233, 517, 342, 764, 415, 683, 844, 718, 598, 819, 899, 554, 772, 138, 780, 469, 15, 823, 804, 229, 63, 377, 353, 658, 74, 498, 735};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 558;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> strengths = {205, 849, 264, 471, 830, 398, 702, 955, 875, 94, 878, 972, 542, 430, 707, 906, 104, 987, 276, 132, 478, 752, 460, 915, 877, 58, 619, 255, 990, 710, 941, 13, 397, 970, 479, 274, 612, 64, 690, 873, 167, 902, 982, 216, 972, 331, 76, 617};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 487;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> strengths = {52, 600, 508, 713, 788, 521, 602, 700, 275, 158, 860, 666, 93, 414, 690, 508, 627, 788, 463, 608, 951, 38, 209, 695, 120, 680, 767, 628, 126, 866, 908, 459, 535, 946, 960};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 474;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> strengths = {880, 407, 653, 793, 63, 780, 222, 227, 485, 717, 940, 918, 489, 442, 810, 925, 912, 981, 696, 551, 624, 744, 342, 403, 91, 184, 662, 10, 233, 72, 460, 360, 831, 788, 457, 777, 356, 195, 426, 853, 185, 207, 271, 591, 712};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 513;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> strengths = {592, 576, 853, 651, 618, 378, 954, 91, 839, 692, 199, 499, 348, 625, 974, 517, 891, 701, 821, 946, 521, 990, 684, 790, 714, 338, 646, 64, 128, 219, 460};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 531;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> strengths = {299, 588, 285, 294, 18, 566, 770, 899, 919, 147, 37, 390, 977, 542, 266, 982, 475, 525, 910, 478, 138, 221, 660, 201, 316, 896, 726, 43, 675, 549, 913};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 459;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> strengths = {824, 581, 9, 776, 149, 493, 531, 558, 995, 637, 394, 526, 986, 548, 344, 509, 319, 37, 790, 491, 479, 34, 776, 321, 258, 851, 711, 365, 763, 355, 386, 877, 596, 96, 151, 166, 558, 109, 874, 959, 845, 181, 976, 335, 930, 22, 78, 120, 907, 584};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 478;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> strengths = {5, 2, 2, 3, 6, 7, 1, 4, 3, 9};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> strengths = {2, 11, 7, 3, 5};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> strengths = {2, 5, 3};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> strengths = {5, 8, 20};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> strengths = {4, 1, 3, 2};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> strengths = {5, 7, 8, 4, 2, 1, 3};
    TeamSplit* pObj = new TeamSplit();
    clock_t start = clock();
    int result = pObj->difference(strengths);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=295007&rd=7217&pm=4564
********************************************************************************
#include <string>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;
class TeamSplit {
public:
int difference(vector <int> strengths)
{
  int a=0;
  int b=0;
  sort(strengths.begin(), strengths.end());
  for (int i=0; i<strengths.size(); i++)
  {
    if (i%2==1) a+=strengths[i];
    else b+=strengths[i];
  }
  return (int) abs(a-b);
}
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/