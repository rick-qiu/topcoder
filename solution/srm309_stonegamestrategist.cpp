/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6239
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

class StoneGameStrategist {
public:
    string play(vector<int> piles);
};

string StoneGameStrategist::play(vector<int> piles) {
    string ret;
    return ret;
}


int test0() {
    vector<int> piles = {6, 6};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> piles = {6, 12};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> piles = {3, 6, 6};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 3 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> piles = {3, 5, 9, 11, 16};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> piles = {2, 5, 7, 11, 13, 18};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> piles = {4, 6, 9, 11, 16};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 2";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> piles = {2, 6, 8, 11, 13, 18};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> piles = {4, 6, 11, 13, 16};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> piles = {2, 6, 8, 13, 15, 18};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> piles = {5, 7, 10, 12, 16};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 2";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> piles = {2, 7, 9, 12, 14, 18};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> piles = {5, 7, 11, 13, 16};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> piles = {2, 7, 9, 13, 15, 18};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> piles = {3, 5, 10, 12, 18};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> piles = {47, 554, 712, 820, 857, 969};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 479 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> piles = {1000};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 1000 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> piles = {2, 34, 76, 121, 127, 157, 169, 225, 256, 263, 310, 413, 468, 475, 486, 504, 505, 559, 632, 642, 644, 647, 725, 784, 793, 799, 831, 837, 848, 892, 931, 988};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 57 STONES FROM PILE 22";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> piles = {65, 67, 69, 80, 93, 95, 106, 128, 131, 145, 146, 151, 167, 179, 191, 197, 207, 207, 233, 246, 246, 266, 271, 277, 289, 296, 351, 357, 442, 473, 493, 494, 503, 515, 559, 586, 620, 700, 722, 754, 767, 839, 846, 853, 906, 943, 944, 951, 962, 962};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 10 STONES FROM PILE 14";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> piles = {82, 83, 89, 94, 151, 162, 207, 207, 247, 268, 284, 323, 327, 343, 405, 417, 419, 462, 473, 495, 510, 526, 546, 581, 589, 615, 636, 657, 658, 667, 680, 690, 696, 702, 731, 752, 778, 785, 792, 833, 838, 858, 904, 946, 981, 995};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 18 STONES FROM PILE 44";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> piles = {8, 29, 44, 162, 179, 199, 253, 298, 305, 318, 408, 422, 463, 484, 498, 503, 581, 625, 772, 847, 880, 917, 925};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 86 STONES FROM PILE 18";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> piles = {4, 14, 16, 48, 125, 133, 134, 143, 145, 173, 224, 270, 317, 385, 413, 431, 437, 442, 458, 463, 474, 474, 479, 489, 511, 517, 519, 525, 529, 616, 623, 628, 638, 644, 644, 652, 676, 718, 739, 751, 784, 829, 840, 854, 860, 878, 882, 884, 914, 980};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 50 STONES FROM PILE 10";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> piles = {27, 124, 159, 225, 274, 302, 316, 317, 371, 473, 524, 533, 542, 565, 627, 665, 690, 786};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> piles = {27, 53, 112, 112, 175, 195, 195, 218, 222, 232, 298, 346, 354, 360, 382, 447, 468, 473, 504, 512, 532, 634, 656, 764, 780, 789, 828, 847, 870, 873, 886, 909, 976, 998};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 7 STONES FROM PILE 15";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> piles = {32, 65, 90, 124, 137, 193, 201, 211, 266, 349, 364, 381, 418, 444, 460, 511, 526, 545, 563, 597, 675, 681, 715, 734, 769, 781, 791, 833, 843, 847, 862, 907, 925, 977, 981, 988};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 62 STONES FROM PILE 20";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> piles = {1, 35, 35, 38, 43, 107, 183, 190, 193, 281, 285, 314, 333, 338, 451, 471, 534, 627, 670, 720, 734, 771, 886, 974, 980, 990, 990};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 62 STONES FROM PILE 6";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> piles = {65, 69, 82, 114, 151, 152, 195, 200, 207, 207, 229, 233, 234, 273, 323, 329, 425, 493, 506, 530, 538, 561, 571, 589, 619, 621, 626, 687, 699, 728, 729, 740, 783, 789, 809, 811, 853, 864, 872, 924};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 58 STONES FROM PILE 17";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> piles = {13, 21, 32, 41, 48, 68, 77, 91, 94, 156, 200, 236, 259, 261, 265, 280, 288, 307, 335, 342, 372, 416, 421, 494, 524, 529, 531, 538, 543, 555, 575, 608, 612, 621, 684, 692, 700, 711, 792, 812, 825, 843, 859, 904, 917, 927, 943, 958, 969, 973};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 14 STONES FROM PILE 23";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> piles = {32, 136, 251, 369, 403, 593, 624, 657, 729, 731, 769};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> piles = {11, 21, 61, 102, 127, 152, 176, 196, 201, 209, 212, 237, 241, 258, 262, 310, 355, 462, 510, 517, 542, 613, 624, 633, 660, 708, 709, 717, 746, 809, 821, 838, 879, 886, 897, 897, 904, 933, 939, 962, 962};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 1 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> piles = {23, 32, 117, 131, 194, 220, 234, 247, 319, 327, 368, 383, 384, 614, 616, 655, 667, 668, 718, 770, 828, 964, 976, 982, 995};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 12 STONES FROM PILE 5";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> piles = {7, 12, 52, 57, 59, 61, 74, 84, 116, 142, 149, 203, 215, 226, 239, 241, 249, 265, 276, 281, 302, 304, 348, 348, 380, 413, 418, 430, 430, 444, 447, 502, 522, 588, 591, 609, 622, 687, 693, 803, 839, 873, 877, 885, 887, 887, 898, 954, 970, 986};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 47 STONES FROM PILE 37";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> piles = {24, 37, 49, 62, 93, 104, 137, 165, 172, 177, 182, 200, 208, 273, 296, 319, 323, 338, 377, 418, 452, 453, 463, 501, 508, 532, 558, 575, 585, 654, 705, 708, 720, 726, 746, 748, 770, 786, 788, 809, 834, 858, 865, 882, 899, 901, 937, 941, 998, 1000};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 12 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> piles = {45, 51, 66, 95, 117, 150, 176, 235, 265, 285, 319, 325, 337, 353, 355, 359, 366, 368, 369, 371, 375, 375, 398, 431, 465, 475, 551, 557, 559, 568, 573, 598, 635, 637, 648, 665, 667, 677, 703, 704, 739, 739, 770, 771, 821, 889, 898, 908, 949, 972};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 6";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> piles = {37, 39, 43, 45, 48, 50, 57, 96, 99, 114, 131, 156, 164, 183, 194, 202, 231, 241, 245, 260, 278, 281, 283, 287, 292, 329, 331, 348, 348, 409, 416, 535, 536, 549, 562, 567, 570, 577, 598, 611, 625, 660, 660, 666, 668, 672, 678, 701, 734, 830};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> piles = {40, 69, 74, 97, 99, 104, 106, 125, 187, 189, 195, 271, 284, 316, 325, 332, 355, 371, 386, 400, 412, 431, 443, 446, 446, 516, 517, 539, 553, 582, 614, 617, 631, 672, 692, 721, 729, 739, 743, 759, 795, 796, 838, 843, 927, 929, 940, 950, 951, 957};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 15 STONES FROM PILE 17";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> piles = {12, 16, 33, 50, 54, 61, 87, 103, 108, 113, 123, 160, 162, 187, 217, 224, 248, 248, 324, 365, 367, 387, 403, 428, 436, 462, 486, 492, 500, 525, 527, 535, 545, 551, 555, 566, 584, 588, 599, 621, 649, 671, 774, 826, 878, 902, 922, 970, 979, 981};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> piles = {7, 12, 52, 57, 59, 61, 74, 84, 116, 142, 149, 203, 215, 226, 239, 241, 249, 265, 276, 281, 302, 304, 348, 348, 380, 413, 418, 430, 430, 444, 447, 502, 522, 588, 591, 609, 622, 687, 693, 803, 839, 873, 877, 885, 887, 887, 898, 954, 970, 986};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 47 STONES FROM PILE 37";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> piles = {24, 37, 49, 62, 93, 104, 137, 165, 172, 177, 182, 200, 208, 273, 296, 319, 323, 338, 377, 418, 452, 453, 463, 501, 508, 532, 558, 575, 585, 654, 705, 708, 720, 726, 746, 748, 770, 786, 788, 809, 834, 858, 865, 882, 899, 901, 937, 941, 998, 1000};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 12 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> piles = {45, 51, 66, 95, 117, 150, 176, 235, 265, 285, 319, 325, 337, 353, 355, 359, 366, 368, 369, 371, 375, 375, 398, 431, 465, 475, 551, 557, 559, 568, 573, 598, 635, 637, 648, 665, 667, 677, 703, 704, 739, 739, 770, 771, 821, 889, 898, 908, 949, 972};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 6";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> piles = {37, 39, 43, 45, 48, 50, 57, 96, 99, 114, 131, 156, 164, 183, 194, 202, 231, 241, 245, 260, 278, 281, 283, 287, 292, 329, 331, 348, 348, 409, 416, 535, 536, 549, 562, 567, 570, 577, 598, 611, 625, 660, 660, 666, 668, 672, 678, 701, 734, 830};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> piles = {40, 69, 74, 97, 99, 104, 106, 125, 187, 189, 195, 271, 284, 316, 325, 332, 355, 371, 386, 400, 412, 431, 443, 446, 446, 516, 517, 539, 553, 582, 614, 617, 631, 672, 692, 721, 729, 739, 743, 759, 795, 796, 838, 843, 927, 929, 940, 950, 951, 957};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 15 STONES FROM PILE 17";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> piles = {12, 16, 33, 50, 54, 61, 87, 103, 108, 113, 123, 160, 162, 187, 217, 224, 248, 248, 324, 365, 367, 387, 403, 428, 436, 462, 486, 492, 500, 525, 527, 535, 545, 551, 555, 566, 584, 588, 599, 621, 649, 671, 774, 826, 878, 902, 922, 970, 979, 981};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> piles = {172, 300, 496, 569, 616, 768, 849};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 10 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> piles = {14, 40, 63, 108, 137, 142, 152, 202, 218, 241, 261, 263, 279, 305, 321, 356, 361, 411, 440, 442, 445, 472, 474, 495, 522, 530, 613, 674, 699, 712, 747, 775, 793, 828, 828, 843, 858, 870, 890, 902, 903, 904, 906, 907, 935, 949, 971, 972, 973, 996};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> piles = {31, 37, 93, 128, 144, 193, 194, 250, 255, 268, 289, 290, 297, 320, 350, 359, 365, 477, 494, 512, 521, 534, 577, 579, 665, 698, 721, 735, 759, 772, 773, 775, 786, 790, 799, 833, 857, 865, 872, 874, 892, 906, 920, 929, 937, 990};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 43 STONES FROM PILE 2";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> piles = {10, 17, 26, 29, 48, 81, 102, 145, 153, 192, 194, 242, 278, 289, 320, 320, 346, 350, 353, 374, 390, 391, 444, 456, 467, 506, 518, 537, 601, 611, 615, 656, 685, 691, 715, 717, 795};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> piles = {12, 15, 80, 85, 99, 122, 131, 144, 146, 188, 217, 224, 249, 259, 265, 275, 299, 328, 352, 381, 396, 399, 404, 409, 411, 413, 441, 492, 506, 524, 525, 613, 618, 637, 703, 717, 743, 748, 785, 790, 794, 827, 842, 893, 910, 957, 961, 962, 963, 983};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 23 STONES FROM PILE 26";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> piles = {59, 77, 83, 92, 157, 160, 162, 163, 196, 203, 250, 295, 300, 322, 352, 356, 364, 458, 498, 514, 540, 559, 585, 592, 604, 612, 633, 651, 668, 674, 692, 693, 704, 741, 750, 752, 757, 780, 784, 789, 802, 805, 821, 833, 882, 895, 913, 943, 956, 986};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 49 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> piles = {27, 47, 56, 79, 87, 88, 91, 115, 125, 166, 177, 243, 314, 345, 368, 391, 411, 457, 480, 480, 483, 517, 523, 544, 559, 579, 580, 615, 620, 652, 675, 688, 697, 720, 733, 756, 763, 795, 807, 880, 894, 928, 939, 940, 946, 984, 986, 989, 989, 995};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 13 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> piles = {8, 9, 24, 34, 56, 87, 98, 100, 117, 124, 171, 194, 207, 213, 233, 243, 262, 283, 331, 348, 376, 416, 416, 445, 461, 512, 615, 636, 636, 639, 646, 661, 673, 675, 718, 724, 727, 837, 839, 844, 852, 861, 875, 895, 931, 963, 972, 973, 973, 983};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 72 STONES FROM PILE 26";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> piles = {30, 40, 42, 81, 118, 147, 206, 219, 221, 226, 243, 330, 350, 377, 416, 449, 466, 563, 588, 592, 597, 643, 645, 648, 707, 764, 779, 896, 905, 946, 959, 978};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 25 STONES FROM PILE 24";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> piles = {1, 3, 14, 32, 33, 34, 63, 90, 93, 145, 154, 173, 181, 185, 213, 226, 271, 279, 294, 296, 302, 318, 328, 341, 357, 380, 405, 441, 449, 479, 490, 500, 512, 544, 551, 557, 566, 593, 624, 625, 633, 634, 651, 664, 683, 694, 705, 711, 737, 777};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 1 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> piles = {38, 45, 54, 117, 134, 144, 144, 174, 208, 228, 261, 279, 286, 287, 312, 351, 421, 424, 454, 475, 500, 506, 509, 521, 522, 534, 539, 540, 564, 564, 572, 614, 656, 658, 674, 705, 726, 749, 777, 782, 793, 816, 829, 830, 856, 891, 965, 969, 971, 994};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 11";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> piles = {12, 18, 18, 19, 65, 86, 88, 114, 145, 146, 155, 159, 163, 166, 194, 201, 229, 234, 235, 235, 243, 257, 318, 323, 331, 353, 356, 385, 393, 430, 468, 471, 484, 550, 570, 580, 596, 610, 625, 632, 656, 671, 688, 704, 708, 724, 775, 821, 869, 984};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 9 STONES FROM PILE 29";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> piles = {15, 38, 65, 74, 83, 83, 86, 125, 155, 168, 198, 224, 247, 272, 276, 277, 294, 301, 321, 333, 367, 380, 382, 408, 408, 433, 439, 447, 462, 466, 510, 547, 547, 556, 633, 661, 700, 710, 711, 736, 737, 737, 817, 818, 857, 859, 910, 937, 983, 993};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> piles = {39, 40, 57, 65, 101, 115, 132, 163, 225, 241, 243, 244, 245, 258, 260, 293, 310, 351, 359, 360, 360, 403, 415, 432, 434, 474, 479, 515, 526, 530, 535, 540, 551, 591, 600, 645, 669, 680, 694, 720, 731, 766, 839, 848, 874, 894, 895, 917, 920, 978};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 4 STONES FROM PILE 6";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> piles = {23, 69, 69, 99, 191, 223, 238, 435, 476, 512, 546, 620, 624, 640, 662, 696, 802};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 11 STONES FROM PILE 8";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> piles = {29, 48, 55, 76, 78, 82, 169, 170, 202, 225, 229, 237, 252, 261, 282, 290, 303, 327, 329, 335, 347, 364, 372, 379, 383, 410, 417, 435, 453, 458, 460, 482, 509, 527, 560, 562, 565, 583, 586, 597, 597, 615, 615, 632, 654, 666, 711, 737, 744, 763};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> piles = {11, 41, 64, 93, 104, 108, 137, 143, 156, 213, 262, 312, 317, 351, 358, 426, 448, 473, 479, 481, 483, 485, 526, 559, 562, 578, 582, 596, 617, 643, 683, 689, 694, 710, 718, 724, 731, 736, 739, 752, 786, 818, 828, 837, 845, 909, 947, 949, 979, 998};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 16 STONES FROM PILE 2";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> piles = {24, 89, 145, 183, 263, 285, 349, 448, 479, 560, 764, 779, 856, 881, 919};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 136 STONES FROM PILE 10";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> piles = {4, 52, 77, 96, 109, 110, 144, 146, 147, 151, 219, 232, 244, 252, 258, 258, 286, 295, 303, 337, 404, 414, 416, 434, 438, 456, 467, 505, 508, 541, 600, 614, 632, 635, 646, 647, 694, 695, 744, 752, 757, 770, 776, 857, 875, 883, 895, 916, 960, 969};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 54 STONES FROM PILE 20";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> piles = {71, 140, 160, 198, 277, 284, 291, 293, 294, 347, 356, 357, 369, 432, 468, 486, 551, 575, 622, 630, 666, 690, 808, 810, 820, 828, 843, 854, 873, 903, 918};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> piles = {9, 34, 35, 103, 106, 123, 190, 211, 262, 276, 281, 304, 318, 362, 463, 470, 470, 473, 475, 486, 520, 524, 531, 537, 555, 563, 569, 571, 576, 621, 686, 688, 697, 723, 787, 792, 861, 882, 943};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 45 STONES FROM PILE 34";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> piles = {13, 16, 22, 23, 25, 31, 37, 45, 69, 87, 143, 146, 180, 194, 271, 294, 347, 356, 366, 368, 377, 384, 397, 407, 412, 422, 427, 458, 474, 477, 484, 501, 509, 518, 527, 531, 536, 559, 587, 598, 625, 628, 633, 652, 668, 678, 691, 719, 746, 764};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> piles = {12, 35, 72, 87, 101, 119, 121, 130, 133, 155, 179, 198, 203, 238, 243, 286, 306, 319, 329, 330, 332, 358, 375, 393, 412, 458, 488, 491, 498, 513, 515, 549, 602, 604, 607, 619, 680, 681, 689, 703, 733, 806, 857, 865, 867, 875, 887, 897, 938, 987};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 23 STONES FROM PILE 48";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> piles = {17, 41, 59, 70, 164, 202, 247, 253, 279, 285, 351, 386, 393, 442, 456, 479, 489, 514, 538, 640, 673, 675, 709, 728, 769, 784, 787, 836, 881, 917};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 60 STONES FROM PILE 4";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> piles = {9, 30, 66, 68, 72, 72, 75, 97, 104, 143, 160, 170, 190, 209, 220, 223, 245, 280, 319, 339, 348, 352, 365, 397, 416, 419, 438, 457, 463, 562, 569, 594, 610, 610, 614, 617, 654, 663, 682, 695, 703, 761, 786, 788, 818, 831, 844, 903, 907, 994};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 5 STONES FROM PILE 19";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> piles = {3, 14, 26, 28, 38, 60, 69, 75, 78, 94, 120, 160, 164, 164, 171, 199, 223, 263, 264, 270, 275, 346, 349, 359, 363, 365, 477, 488, 507, 512, 540, 600, 612, 648, 673, 675, 684, 695, 698, 707, 782, 831, 840, 850, 853, 926, 939, 948, 963, 993};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 19 STONES FROM PILE 41";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> piles = {5, 14, 16, 30, 35, 49, 64, 71, 94, 99, 103, 160, 166, 182, 217, 243, 260, 268, 277, 299, 359, 361, 369, 369, 373, 399, 437, 481, 512, 514, 520, 530, 548, 604, 631, 674, 675, 676, 683, 725, 727, 728, 732, 742, 769, 787, 819, 871, 931, 957};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 11 STONES FROM PILE 6";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> piles = {11, 13, 50, 56, 59, 93, 99, 104, 115, 136, 144, 145, 167, 173, 188, 198, 211, 214, 223, 227, 234, 258, 288, 329, 338, 379, 425, 452, 475, 493, 503, 534, 537, 545, 579, 591, 592, 621, 654, 654, 656, 658, 665, 669, 692, 711, 718, 725, 741, 798};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> piles = {35, 132, 135, 152, 301, 307, 312, 403, 449, 577, 579, 607, 609, 668, 670, 702, 767, 778, 805, 843, 848, 865, 877, 898, 911, 916, 934, 1000};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 60 STONES FROM PILE 9";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> piles = {3, 7, 22, 30, 39, 56, 69, 100, 118, 187, 201, 204, 223, 272, 285, 310, 323, 330, 339, 351, 373, 402, 404, 406, 438, 447, 461, 464, 492, 527, 549, 561, 575, 631, 651, 652, 662, 676, 685, 702, 737, 738, 786, 841, 848, 849, 881, 889, 932, 998};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> piles = {10, 21, 34, 46, 53, 73, 121, 131, 148, 187, 207, 223, 247, 247, 281, 313, 316, 323, 355, 395, 411, 412, 431, 451, 469, 527, 534, 539, 543, 613, 623, 624, 627, 629, 704, 708, 760, 780, 784, 795, 809, 843, 856, 885, 922, 924, 933, 957, 958, 963};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 19 STONES FROM PILE 29";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> piles = {11, 23, 35, 77, 114, 118, 126, 165, 228, 302, 330, 385, 396, 408, 409, 445, 450, 450, 457, 480, 498, 533, 535, 559, 583, 612, 618, 690, 698, 738, 781, 785, 814, 892, 901, 904, 904, 917, 970};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 3 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> piles = {78, 107, 128, 207, 278, 341, 364, 441, 442, 462, 463, 520, 555, 581, 610, 615, 696, 701, 743, 745, 854, 918, 944, 979};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 10 STONES FROM PILE 4";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> piles = {4, 17, 63, 102, 151, 162, 269, 446, 454, 455, 498, 538, 553, 606, 685, 711, 743, 893};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> piles = {16, 20, 29, 33, 34, 40, 42, 73, 87, 97, 108, 116, 128, 179, 181, 186, 225, 266, 288, 299, 322, 332, 343, 394, 422, 445, 456, 471, 487, 520, 581, 616, 629, 666, 683, 699, 719, 725, 821, 848, 849, 864, 870, 882, 910, 930, 952, 967, 970, 995};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 3 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> piles = {8, 59, 98, 231, 241, 242, 254, 271, 273, 290, 298, 382, 434, 454, 506, 516, 561, 604, 604, 609, 656, 664, 696, 714, 731, 801, 816, 826, 838, 867, 895, 916, 917, 922, 923, 923, 925, 930, 969};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 22 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> piles = {12, 48, 59, 112, 126, 127, 137, 140, 150, 151, 168, 189, 209, 228, 236, 278, 306, 311, 360, 383, 442, 451, 457, 493, 518, 552, 567, 580, 600, 610, 671, 695, 718, 720, 721, 731, 744, 746, 752, 753, 776, 784, 809, 814, 829, 854, 873, 892, 900, 972};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 24 STONES FROM PILE 49";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> piles = {4, 55, 58, 66, 68, 73, 83, 112, 127, 144, 167, 168, 186, 214, 259, 289, 305, 367, 385, 385, 464, 473, 475, 490, 507, 521, 527, 531, 553, 613, 619, 679, 710, 724, 742, 795, 803, 826, 839, 861, 880, 899, 918, 929, 941, 946, 966, 974, 995, 999};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 24 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> piles = {39, 582, 818, 959};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 402 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> piles = {4, 29, 35, 51, 52, 74, 75, 87, 119, 143, 152, 169, 171, 192, 212, 219, 235, 259, 264, 287, 305, 313, 315, 329, 360, 360, 367, 394, 410, 422, 455, 455, 456, 488, 509, 521, 551, 552, 585, 597, 609, 663, 671, 677, 686, 702, 731, 747, 749, 756};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> piles = {105, 185, 223, 502, 580, 611, 652, 699, 712, 832, 961, 963};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 253 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> piles = {12, 15, 32, 49, 111, 143, 151, 175, 182, 182, 197, 202, 226, 282, 286, 302, 349, 381, 396, 407, 426, 436, 467, 468, 484, 487, 527, 530, 573, 593, 596, 612, 631, 644, 689, 707, 747, 748, 770, 780, 781, 798, 807, 807, 854, 895, 907, 914, 921, 942};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 3 STONES FROM PILE 15";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> piles = {6, 83, 98, 107, 177, 255, 287, 395, 440, 498, 528, 616, 627};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 43 STONES FROM PILE 9";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> piles = {21, 27, 79, 90, 127, 153, 174, 191, 210, 219, 245, 254, 281, 311, 319, 336, 373, 392, 411, 416, 461, 466, 474, 484, 505, 506, 507, 550, 567, 569, 574, 598, 600, 705, 712, 718, 719, 727, 764, 784, 798, 806, 814, 851, 892, 956, 956, 965, 984, 987};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 12 STONES FROM PILE 12";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> piles = {74, 118, 226, 237, 263, 271, 284, 348, 396, 550, 586, 603, 604, 627, 718, 771, 859, 911, 951};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 1 STONES FROM PILE 16";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> piles = {9, 18, 58, 81, 98, 102, 120, 122, 126, 135, 140, 154, 178, 180, 201, 216, 224, 240, 265, 282, 292, 295, 310, 311, 332, 336, 339, 402, 404, 405, 409, 438, 462, 464, 477, 505, 558, 571, 582, 596, 615, 615, 626, 642, 668, 685, 737, 743, 744, 788};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> piles = {22, 56, 67, 81, 81, 87, 131, 132, 133, 141, 147, 160, 164, 181, 184, 220, 226, 289, 320, 354, 399, 540, 548, 566, 591, 606, 609, 621, 643, 646, 664, 681, 715, 745, 776, 801, 859, 913, 978};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 43 STONES FROM PILE 17";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> piles = {217, 270, 331, 339, 341, 482, 527, 541, 583, 656, 713, 750, 790};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 176 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> piles = {21, 40, 44, 182, 188, 227, 237, 264, 377, 398, 430, 434, 459, 506, 523, 536, 574, 603, 632, 656, 690, 713, 751, 830, 832, 900, 939, 941};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 131 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> piles = {51, 73, 77, 192, 211, 249, 251, 283, 294, 296, 324, 330, 384, 444, 477, 483, 484, 494, 504, 542, 567, 589, 631, 637, 640, 648, 649, 655, 672, 677, 701, 715, 726, 755, 755, 767, 776, 779, 785, 800, 802, 813, 832, 875, 879, 882, 926, 978, 979, 992};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 35 STONES FROM PILE 12";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> piles = {13, 25, 67, 79, 113, 119, 122, 122, 151, 169, 176, 181, 211, 211, 213, 224, 226, 241, 259, 263, 340, 347, 366, 373, 376, 406, 458, 463, 466, 468, 500, 504, 505, 524, 550, 576, 579, 630, 703, 716, 771, 779, 786, 804, 819, 861, 864, 897, 952, 985};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 5 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> piles = {1, 6, 15, 94, 100, 124, 152, 154, 158, 163, 184, 188, 225, 264, 271, 291, 293, 307, 317, 318, 336, 341, 347, 374, 385, 389, 395, 404, 473, 484, 497, 501, 506, 562, 563, 572, 573, 577, 583, 590, 614, 624, 649, 656, 675, 677, 700, 712, 734, 798};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> piles = {15, 22, 28, 33, 39, 87, 109, 125, 128, 133, 141, 153, 185, 221, 255, 267, 318, 318, 410, 413, 427, 439, 454, 468, 512, 562, 572, 578, 592, 606, 627, 629, 644, 676, 693, 700, 717, 767, 769, 803, 840, 844, 855, 889, 900, 965, 987, 990, 990, 998};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 33 STONES FROM PILE 24";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> piles = {151, 414, 465, 610, 641, 693, 696, 801, 927, 974, 984};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 52 STONES FROM PILE 7";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> piles = {1, 49, 59, 83, 104, 128, 131, 144, 149, 207, 254, 287, 288, 298, 326, 384, 388, 400, 411, 425, 441, 446, 456, 485, 500, 516, 527, 528, 538, 589, 592, 617, 673, 673, 699, 712, 730, 731, 743, 799, 799, 803, 808, 815, 819, 859, 881, 918, 928, 987};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 10 STONES FROM PILE 11";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> piles = {57, 90, 101, 107, 162, 183, 314, 423, 520, 531, 611, 767, 929, 940, 968};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 7 STONES FROM PILE 5";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> piles = {131, 162, 305, 328, 342, 353, 363, 476, 484, 528, 537, 553, 562, 636, 700, 762, 786, 825, 838, 859, 861, 866, 872, 915, 966, 987, 989};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 32 STONES FROM PILE 14";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> piles = {31, 33, 40, 85, 97, 124, 166, 170, 202, 203, 209, 261, 277, 330, 335, 349, 412, 504, 508, 515, 519, 530, 536, 558, 563, 625, 636, 657, 658, 674, 682, 688, 739};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> piles = {12, 30, 38, 69, 74, 144, 171, 188, 203, 205, 237, 241, 256, 294, 307, 348, 357, 359, 365, 420, 444, 469, 477, 484, 493, 499, 523, 543, 544, 550, 560, 576, 593, 647, 678, 684, 727, 778, 778, 868, 876, 884, 918, 923, 937, 966, 980, 984, 985, 996};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 2";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> piles = {34, 40, 43, 68, 72, 82, 112, 132, 160, 161, 173, 187, 227, 248, 255, 256, 263, 273, 278, 332, 371, 404, 444, 458, 471, 472, 510, 528, 563, 569, 596, 604, 614, 626, 638, 666, 681, 683, 732, 763, 796, 801, 812, 840, 858, 899, 923, 952, 974};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 12 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> piles = {20, 53, 178, 179, 183, 269, 401, 453, 459, 462, 517, 523, 622, 711, 717, 717, 717, 854, 930, 946, 965};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 30 STONES FROM PILE 6";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> piles = {13, 36, 37, 127, 130, 144, 162, 167, 210, 254, 267, 291, 307, 307, 363, 375, 379, 415, 429, 475, 485, 498, 499, 525, 615, 645, 648, 678, 696, 728, 731, 786, 802, 828, 832, 845, 889, 902, 913, 976};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 49 STONES FROM PILE 24";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> piles = {82, 172, 210, 256, 266, 305, 318, 332, 386, 464, 541, 564, 574, 606, 626, 735, 766, 768, 790, 799, 815, 823, 887, 897, 902, 910, 916, 981};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 7 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> piles = {8, 39, 50, 82, 104, 111, 206, 230, 251, 305, 332, 340, 376, 467, 477, 477, 513, 588, 639, 659, 706, 708, 743, 767};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> piles = {4, 12, 21, 40, 44, 50, 54, 75, 125, 148, 170, 203, 221, 289, 298, 323, 339, 344, 417, 443, 448, 467, 500, 575, 583, 589, 589, 597, 606, 658, 691, 721, 724, 732, 737, 744, 750, 764, 824, 833, 859, 864, 883, 891, 907, 966, 967, 967, 981, 991};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 12 STONES FROM PILE 8";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> piles = {17, 151, 199, 296, 336, 403, 438, 448, 504, 618, 727, 807, 986, 997};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 129 STONES FROM PILE 12";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> piles = {43, 44, 82, 114, 160, 193, 204, 224, 247, 259, 268, 282, 351, 368, 426, 472, 509, 519, 522, 544, 552, 559, 594, 609, 629, 664, 671, 710, 727, 738, 742, 772, 963, 999};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 8 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> piles = {20, 38, 143, 149, 157, 176, 255, 296, 331, 380, 383, 424, 425, 479, 501, 503, 562, 666, 732, 773, 800, 931};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 64 STONES FROM PILE 21";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> piles = {7, 50, 61, 162, 167, 204, 250, 260, 265, 271, 278, 298, 316, 317, 324, 338, 350, 352, 395, 404, 450, 454, 470, 497, 571, 575, 583, 584, 586, 590, 601, 608, 619, 637, 639, 678, 702, 707, 717, 805, 817, 818, 819, 838, 874, 904, 917, 932, 934, 981};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 22 STONES FROM PILE 3";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> piles = {4, 6, 7, 12, 19, 21, 23, 27, 56, 96, 119, 121, 128, 163, 168, 169, 178, 179, 192, 252, 270, 292, 324, 335, 340, 341, 383, 385, 389, 411, 432, 440, 458, 458, 462, 500, 502, 504, 506, 532, 533, 537, 582, 587, 592, 620, 667, 672, 688, 710};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 4 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> piles = {1, 13, 13, 42, 64, 81, 96, 110, 144, 167, 185, 237, 262, 281, 294, 395, 411, 432, 443, 494, 535, 583, 592, 621, 626, 630, 644, 704, 766, 767, 783, 786, 802, 803, 806, 810, 825, 917, 922, 937};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 4 STONES FROM PILE 22";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> piles = {14, 45, 55, 58, 65, 75, 99, 108, 119, 129, 168, 168, 181, 185, 203, 220, 223, 226, 271, 315, 345, 361, 382, 415, 443, 465, 471, 514, 544, 606, 621, 634, 641, 650, 658, 667, 690, 702, 713, 790, 826, 828, 834, 839, 844, 915, 927, 949, 969, 978};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 7";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> piles = {27, 28, 43, 44, 62, 64, 85, 100, 132, 133, 149, 227, 240, 267, 271, 302, 334, 336, 357, 361, 375, 415, 423, 467, 502, 516, 543, 574, 580, 589, 623, 651, 673, 709, 725, 747, 754, 763, 815, 819, 882, 937, 954, 956, 965, 970, 971, 971};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 77 STONES FROM PILE 11";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> piles = {6, 10, 15, 18, 27, 52, 196, 212, 249, 254, 268, 271, 286, 295, 296, 326, 347, 358, 404, 415, 425, 468, 471, 477, 520, 564, 604, 616, 617, 632, 643, 649, 655, 680, 715, 720, 741, 754, 763, 785, 798, 849, 856, 881, 928, 933, 934, 969, 982, 992};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 7";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> piles = {2, 40, 56, 74, 79, 92, 100, 108, 124, 157, 178, 188, 190, 228, 229, 265, 268, 315, 319, 368, 380, 386, 388, 433, 442, 454, 472, 473, 519, 519, 525, 549, 566, 608, 613, 613, 631, 633, 677, 685, 810, 818, 820, 851, 853, 863, 888, 902, 993, 1000};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 4 STONES FROM PILE 7";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> piles = {21, 50, 50, 71, 111, 120, 124, 131, 136, 144, 148, 165, 174, 174, 180, 182, 196, 234, 260, 268, 269, 310, 330, 398, 401, 425, 429, 489, 512, 569, 601, 618, 624, 641, 644, 644, 661, 681, 699, 703, 708, 728, 740, 811};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> piles = {2, 33, 57, 76, 106, 107, 142, 153, 156, 224, 228, 249, 268, 271, 281, 285, 293, 295, 297, 322, 326, 369, 389, 395, 399, 401, 406, 407, 407, 426, 445, 450, 461, 512, 516, 522, 524, 552, 559, 602, 602, 670, 685, 686, 719, 798, 810, 823, 828, 940};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 2";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> piles = {90, 135, 144, 191, 210, 303, 334, 376, 388, 414, 434, 449, 505, 521, 556, 596, 620, 686, 727, 741, 773, 791, 805, 838, 927, 929};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 27 STONES FROM PILE 7";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> piles = {143, 244, 255, 268, 500, 545, 795, 977, 994};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 121 STONES FROM PILE 4";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> piles = {87, 123, 129, 136, 146, 158, 171, 187, 216, 222, 253, 264, 279, 289, 317, 318, 347, 351, 364, 369, 400, 402, 434, 442, 452, 454, 473, 478, 522, 534, 539, 594, 600, 617, 643, 658, 661, 670, 689, 703, 705, 707, 774, 864, 871, 882, 893, 913, 916, 985};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 11 STONES FROM PILE 7";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> piles = {14, 15, 67, 75, 97, 115, 151, 197, 202, 217, 261, 294, 302, 308, 318, 444, 468, 472, 487, 548, 567, 567, 570, 574, 576, 610, 630, 671, 671, 680, 681, 686, 695, 699, 720, 750, 799, 813, 816, 828, 831, 841, 863, 884, 885, 892, 952, 958, 972, 980};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 85 STONES FROM PILE 15";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> piles = {11, 63, 67, 73, 78, 90, 127, 139, 174, 195, 203, 231, 250, 260, 261, 308, 336, 340, 341, 366, 378, 380, 408, 417, 420, 425, 426, 461, 470, 471, 486, 501, 540, 559, 570, 583, 588, 620, 635, 652, 674, 681, 683, 683, 703, 706, 710, 744, 750, 791};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> piles = {13, 18, 26, 26, 33, 72, 141, 181, 194, 240, 267, 289, 316, 394, 436, 448, 466, 473, 514, 523, 533, 586, 764, 768, 854, 899, 931, 991};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 62 STONES FROM PILE 13";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> piles = {10, 25, 35, 47, 68, 77, 81, 85, 101, 123, 123, 152, 184, 187, 188, 218, 220, 244, 326, 331, 346, 347, 376, 480, 487, 490, 497, 504, 515, 530, 553, 562, 620, 633, 647, 657, 667, 669, 698, 736, 749, 757, 777, 795, 867, 874, 882, 915, 964, 986};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 27 STONES FROM PILE 38";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> piles = {13, 47, 54, 113, 153, 157, 175, 178, 184, 210, 230, 244, 246, 253, 261, 285, 301, 314, 340, 345, 370, 376, 393, 403, 459, 492, 544, 546, 565, 572, 601, 646, 650, 654, 684, 704, 723, 733, 749, 780, 833, 850, 881, 906, 919, 921, 924, 941, 961, 1000};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 31 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> piles = {5, 134, 780, 804};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 105 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> piles = {1, 68, 155, 166, 177, 194, 227, 233, 269, 274, 437, 447, 465, 478, 499, 505, 506, 515, 542, 559, 564, 571, 598, 609, 637, 641, 660, 662, 680, 714, 730, 796, 831, 877, 888, 901, 938, 953, 962};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 81 STONES FROM PILE 10";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> piles = {2, 6, 15, 27, 41, 85, 105, 119, 156, 181, 190, 198, 226, 272, 290, 316, 343, 351, 401, 405, 419, 419, 442, 470, 473, 482, 498, 514, 518, 531, 548, 563, 577, 588, 589, 599, 610, 637, 665, 669, 704, 734, 796};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> piles = {50, 53, 53, 60, 72, 91, 122, 137, 147, 191, 200, 200, 206, 208, 213, 250, 276, 283, 287, 292, 309, 316, 390, 427, 472, 478, 489, 503, 548, 562, 614, 617, 631, 644, 695, 705, 709, 737, 771, 777, 804, 837, 886, 893, 918, 935, 961, 983, 994, 998};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 16";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> piles = {84, 100, 147, 151, 176, 180, 203, 206, 236, 268, 275, 277, 281, 285, 286, 306, 327, 357, 407, 442, 448, 462, 517, 579, 634, 638, 648, 655, 705, 718, 755, 765, 767, 771, 774, 777, 807, 825, 846, 850, 852, 868, 874, 879, 919, 920, 943, 979, 979, 982};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 6";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> piles = {15, 20, 31, 44, 75, 108, 173, 193, 229, 240, 350, 378, 423, 483, 541, 588, 645, 646, 683, 685, 749, 764, 843, 853, 879, 921, 929, 941, 984, 986, 995};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 28 STONES FROM PILE 14";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> piles = {120, 771};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 651 STONES FROM PILE 1";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> piles = {10, 12, 36, 56, 68, 105, 112, 114, 168, 172, 201, 209, 226, 230, 241, 253, 261, 275, 280, 304, 312, 412, 425, 427, 454, 456, 498, 535, 587, 601, 601, 623, 627, 653, 657, 692, 711, 742, 780, 799, 813, 819, 821, 847, 874, 907, 911, 919, 985, 990};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 73 STONES FROM PILE 21";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> piles = {52, 61, 93, 201, 271, 603, 618, 642, 735};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> piles = {14, 54, 61, 101, 117, 125, 176, 183, 188, 206, 229, 257, 280, 319, 330, 365, 396, 400, 430, 445, 448, 467, 475, 516, 521, 529, 551, 553, 556, 562, 588, 620, 634, 647, 650, 692, 696, 725, 726, 730, 750, 788, 789, 804, 806, 846, 860, 869, 871, 959};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 42 STONES FROM PILE 49";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> piles = {6, 14, 23, 36, 75, 90, 97, 99, 136, 136, 153, 188, 210, 224, 229, 230, 234, 254, 276, 285, 291, 311, 340, 350, 403, 443, 446, 455, 495, 524, 539, 565, 640, 667, 680, 687, 689, 690, 703, 707, 714, 774, 791, 794, 799, 842, 866, 893, 935, 948};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 6 STONES FROM PILE 4";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> piles = {37, 74, 79, 81, 103, 124, 142, 155, 155, 174, 176, 181, 228, 236, 269, 273, 315, 316, 339, 341, 365, 371, 403, 403, 461, 461, 476, 483, 493, 523, 535, 541, 553, 577, 582, 603, 621, 685, 699, 707, 726, 742, 771, 800, 831, 832, 834, 863, 920, 962};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 63 STONES FROM PILE 37";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> piles = {7, 8, 79, 86, 122, 153, 158, 170, 173, 176, 187, 191, 266, 274, 291, 310, 351, 368, 458, 478, 501, 518, 557, 582, 588, 600, 610, 649, 650, 662, 664, 677, 680, 693, 711, 716, 742, 758, 778, 788, 804, 806, 830, 878, 887, 939, 943, 954, 972, 982};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 5 STONES FROM PILE 4";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> piles = {473, 535, 842, 960};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 56 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> piles = {47, 62, 78, 80, 101, 106, 135, 158, 163, 174, 194, 246, 276, 302, 334, 341, 342, 345, 350, 357, 373, 391, 423, 456, 530, 533, 538, 589, 598, 604, 643, 662, 691, 711, 724, 783};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> piles = {1, 50, 53, 59, 76, 87, 171, 191, 196, 202, 231, 235, 245, 264, 296, 346, 355, 378, 388, 393, 435, 447, 478, 492, 513, 519, 586, 602, 605, 616, 623, 683, 688, 688, 708, 709, 719, 728, 738, 837, 838, 846, 867, 875, 888, 913, 913, 983, 984, 984};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 2 STONES FROM PILE 2";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> piles = {5, 35, 45, 131, 186, 271, 301, 316, 388, 464, 501, 562, 629, 639, 849};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 202 STONES FROM PILE 14";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> piles = {6, 11, 19, 26, 82, 105, 107, 146, 163, 167, 174, 182, 221, 241, 302, 312, 333, 342, 352, 366, 392, 396, 407, 436, 452, 484, 493, 501, 507, 512, 531, 545, 576, 591, 604, 607, 621, 640, 645, 649, 650, 773, 776, 777, 826, 870, 887, 893, 896, 916};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 66 STONES FROM PILE 41";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> piles = {12, 39, 57, 115, 133, 172, 236, 277, 313, 314, 319, 381, 392, 395, 403, 456, 470, 487, 492, 493, 499, 518, 522, 526, 534, 535, 546, 547, 547, 564, 572, 576, 583, 585, 588, 605, 609, 631, 668, 699, 722, 796, 806, 858, 872, 873, 899, 945, 948, 967};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 20 STONES FROM PILE 46";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> piles = {776};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 776 STONES FROM PILE 0";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> piles = {25, 43, 48, 93, 106, 128, 133, 164, 165, 173, 182, 192, 203, 212, 234, 267, 272, 273, 285, 286, 296, 297, 299, 303, 308, 319, 345, 429, 450, 454, 463, 476, 487, 487, 502, 517, 576, 603, 605, 625, 640, 646, 676, 678, 692, 698, 736, 739, 746, 824};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> piles = {31, 136, 251, 369, 403, 593, 624, 657, 729, 731, 769};
    StoneGameStrategist* pObj = new StoneGameStrategist();
    clock_t start = clock();
    string result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    string expected = "TAKE 1 STONES FROM PILE 5";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8511003&rd=9989&pm=6239
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <string.h> 
 
#define sz size()
#define pb push_back
#define VI vector < int >
#define VS vector < string >
#define ALL(a) a.begin(),a.end()
 
using namespace std; 
 
int sg(VI a)
  {int q1,c1=0;
  
  for(q1=0;q1<a.sz;q1+=2)c1=c1^a[q1];
  
  return c1;}
 
VI comp(VI a)
  {int q1,c1;
  VI b;
 
  b.pb(a[0]);
  for(q1=1;q1<a.sz;q1++)b.pb(a[q1]-a[q1-1]);
  reverse(ALL(b));
  return b;}
 
class StoneGameStrategist 
{public:
string play(vector <int> piles) 
  {
  int q1,q2,s,k,found=0,c1;
 
  for(q2=1;q2<=1000;q2++)for(q1=0;q1<piles.sz;q1++)
    {
    VI kk=piles;
 
    kk[q1]-=q2;
    
    if(kk[q1]<0)continue;
    if(q1!=0 && kk[q1]<kk[q1-1])continue;
 
    c1=sg(comp(kk));
    if(c1==0 && found==0)
      {found=1;
      s=q2;
      k=q1;}
    }
 
  string ret;
 
  if(found==0)ret="YOU LOSE";
  else
    {
    char dd[100];
    sprintf(dd,"TAKE %d STONES FROM PILE %d",s,k);
    ret=dd;
    }
 
  return ret;}};

********************************************************************************
*******************************************************************************/