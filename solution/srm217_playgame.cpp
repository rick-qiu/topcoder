/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3002
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

class PlayGame {
public:
    int saveCreatures(vector<int> you, vector<int> computer);
};

int PlayGame::saveCreatures(vector<int> you, vector<int> computer) {
    int ret;
    return ret;
}


int test0() {
    vector<int> you = {5, 15, 100, 1, 5};
    vector<int> computer = {5, 15, 100, 1, 5};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> you = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> computer = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> you = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> computer = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> you = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    vector<int> computer = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> you = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> computer = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> you = {561, 193, 805};
    vector<int> computer = {582, 478, 349};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 1366;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> you = {819, 743, 174, 854, 707, 511, 303, 16, 92, 363, 148, 166, 983, 444, 120, 6, 10, 377, 529, 569, 599, 604, 167, 660, 449, 351, 58, 605, 779, 798, 518, 301, 871, 723, 951, 921, 537, 143, 460, 235, 858, 210, 776, 839, 991, 994};
    vector<int> computer = {609, 391, 266, 297, 836, 25, 375, 93, 674, 57, 10, 914, 275, 272, 585, 688, 833, 723, 483, 205, 740, 467, 456, 944, 741, 109, 596, 384, 731, 606, 570, 360, 152, 225, 424, 799, 515, 984, 748, 345, 169, 654, 490, 65, 696, 503};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 23300;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> you = {944, 142, 900, 689, 302, 425, 71, 961, 680, 154};
    vector<int> computer = {873, 817, 579, 191, 178, 813, 473, 156, 502, 728};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 4901;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> you = {279, 566, 679, 752, 718, 473, 124, 367, 830, 36, 515, 660, 425, 105, 944, 916, 547, 345, 470, 374, 842, 316};
    vector<int> computer = {454, 271, 978, 297, 735, 565, 196, 757, 835, 396, 499, 885, 29, 989, 570, 52, 529, 194, 839, 624, 654, 198};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 11142;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> you = {124, 111, 739, 313, 936, 286, 335, 141, 729, 830, 704, 597, 743, 252, 145, 3, 62, 802, 848, 211, 116, 551, 16, 114, 453, 748, 683, 541, 75, 435, 202, 693, 290, 435, 232, 575, 530, 626, 161, 502, 958, 692, 920, 190};
    vector<int> computer = {335, 179, 990, 456, 992, 98, 622, 95, 436, 926, 50, 890, 289, 227, 765, 409, 202, 625, 601, 450, 465, 595, 632, 850, 824, 622, 717, 563, 374, 184, 734, 553, 900, 243, 189, 602, 695, 582, 350, 492, 81, 737, 609, 617};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 18887;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> you = {800, 150, 573, 863, 907, 612, 724, 44, 665, 971, 314, 567, 305, 174, 109, 864, 847, 741, 155, 326, 80, 78, 638, 816, 543, 447, 408, 298, 464, 499, 153, 322, 734, 313, 822, 954};
    vector<int> computer = {869, 721, 299, 939, 128, 67, 781, 522, 607, 951, 73, 871, 651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378, 495, 789, 507, 381, 685, 530, 603, 394, 7, 704, 101, 620};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 18078;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> you = {490, 744, 495, 379, 781, 550, 356, 950, 628, 177, 373, 132, 740, 946, 609, 29, 329, 57, 636, 132, 843, 860, 594, 718, 849, 16, 127, 704, 614, 218, 67, 169, 621, 340, 319, 366, 658, 798, 803, 524, 608, 794, 896, 145, 627};
    vector<int> computer = {401, 253, 137, 851, 67, 426, 571, 302, 546, 225, 311, 111, 804, 135, 284, 784, 890, 786, 740, 612, 360, 852, 228, 859, 229, 249, 540, 979, 55, 82, 522, 425, 95, 258, 887, 233, 147, 126, 927, 81, 48, 60, 336, 910, 397};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 22642;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> you = {941, 833, 532, 838, 690, 396, 259, 6, 523, 950, 397, 241, 583, 255, 681, 940, 434, 885, 9, 936, 599, 782, 574, 143};
    vector<int> computer = {222, 382, 6, 416, 83, 657, 851, 66, 807, 659, 688, 799, 528, 682, 143, 686, 724, 774, 32, 864, 641, 703, 86, 550};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 13269;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> you = {60, 275, 146, 976, 617, 292, 917, 366, 691, 219, 156, 240, 519, 897, 107, 898, 440, 81, 778, 172, 969, 772, 866, 211, 455, 5, 747, 115, 403, 310, 987, 40, 252, 189, 247, 154, 617, 881, 934, 196, 776, 642, 654, 904, 454, 916, 661, 151, 633};
    vector<int> computer = {567, 421, 938, 538, 576, 534, 255, 396, 349, 38, 791, 197, 71, 388, 588, 72, 198, 156, 641, 453, 602, 694, 440, 681, 395, 831, 590, 200, 944, 871, 390, 982, 185, 891, 572, 440, 624, 705, 51, 285, 260, 406, 890, 707, 725, 891, 392, 396, 899};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 23129;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> you = {387, 568, 353, 730, 742, 733, 736, 140, 200, 272, 677, 906, 367, 515, 110, 903, 203, 516};
    vector<int> computer = {652, 437, 684, 91, 80, 77, 29, 354, 307, 694, 143, 394, 69, 672, 721, 199, 691, 613};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 9058;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> you = {542, 99, 543, 51, 969, 462, 965, 724, 529, 677, 689, 371, 387, 51, 806, 170, 62, 310, 780, 212, 321, 483, 11, 438, 506, 603, 755, 400, 349, 838, 937, 620, 992, 55, 560};
    vector<int> computer = {859, 386, 306, 284, 28, 610, 390, 20, 32, 454, 853, 932, 401, 724, 609, 804, 871, 580, 592, 80, 789, 460, 588, 587, 567, 812, 669, 343, 12, 267, 341, 232, 767, 371, 865};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 17037;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> you = {722, 626, 889, 183, 533, 897, 776, 960};
    vector<int> computer = {197, 897, 793, 948, 844, 886, 626, 186};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 4870;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> you = {265, 250, 729, 784, 171, 710, 479, 82, 802, 851, 125, 307, 571, 471, 758, 192, 724, 989, 17, 645, 688, 174, 73, 275, 673, 834, 554, 370, 775, 232, 635, 232, 205};
    vector<int> computer = {966, 281, 24, 765, 152, 48, 11, 348, 641, 342, 413, 415, 92, 543, 696, 337, 654, 872, 533, 567, 55, 464, 260, 425, 859, 485, 88, 563, 706, 774, 860, 846, 292};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 15174;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> you = {642, 743, 824, 762, 867, 903, 908, 520, 439, 108, 353, 819, 426, 170, 2, 654, 770, 65, 91, 384, 681, 803, 154, 143, 50, 345, 20, 973, 645, 55, 909, 634, 430, 22, 242, 391, 651, 778, 24, 822, 139, 631, 548, 978, 462};
    vector<int> computer = {215, 300, 778, 342, 479, 605, 103, 979, 752, 151, 455, 708, 993, 772, 639, 618, 941, 685, 289, 565, 290, 546, 709, 246, 544, 491, 947, 667, 761, 620, 444, 795, 742, 983, 205, 627, 905, 589, 913, 503, 487, 448, 885, 935, 183};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 21261;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> you = {203, 727, 936, 622, 43, 638, 36, 554, 542, 445, 62, 990, 128, 598, 51};
    vector<int> computer = {173, 657, 332, 315, 650, 409, 426, 222, 675, 167, 496, 506, 799, 433, 6};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 6383;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> you = {375, 129, 823, 730, 886, 640, 647, 512, 730, 733, 952, 464, 362, 113, 900, 817, 453, 109, 865};
    vector<int> computer = {757, 40, 415, 931, 69, 165, 211, 118, 588, 119, 615, 577, 687, 728, 911, 666, 298, 805, 377};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 11131;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> you = {520, 727, 994, 964, 863, 836, 147, 373, 284, 171, 968, 738, 713, 32, 642, 808, 732, 814, 125, 715, 374, 647, 910, 885, 33, 770, 447, 9, 228, 417, 157, 914, 500, 243, 751, 902, 213, 33, 767, 228, 554, 802, 847, 331, 537, 986, 865};
    vector<int> computer = {644, 228, 809, 370, 366, 36, 559, 397, 120, 324, 894, 202, 935, 126, 845, 889, 444, 222, 632, 558, 621, 422, 18, 860, 140, 267, 291, 678, 559, 954, 604, 784, 421, 814, 736, 136, 514, 21, 8, 745, 333, 897, 460, 764, 52, 628, 25};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 26516;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> you = {964, 498, 703, 266, 818, 644, 594, 263, 840, 458, 744, 351, 16, 475, 624, 403, 382, 29, 288, 594, 879, 431, 926, 382, 531, 11, 969, 861, 436, 696, 332, 600, 497, 557, 40, 377};
    vector<int> computer = {233, 932, 855, 959, 606, 581, 77, 406, 305, 497, 81, 870, 304, 777, 928, 586, 216, 279, 558, 870, 250, 301, 723, 862, 231, 191, 445, 886, 572, 30, 990, 60, 616, 257, 170, 117};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 18383;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> you = {493, 955, 50, 81, 337, 279, 513, 489, 411, 920, 598, 292, 474, 400};
    vector<int> computer = {946, 546, 831, 790, 797, 590, 865, 317, 934, 268, 938, 715, 128, 771};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 3968;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> you = {176, 28, 43, 453, 858, 137, 16, 213, 814, 793, 776, 655, 298, 777, 916, 838, 242, 497, 24, 77, 32, 355, 712, 408, 181, 297};
    vector<int> computer = {182, 741, 135, 59, 523, 358, 803, 159, 895, 132, 31, 182, 814, 249, 568, 346, 538, 662, 866, 927, 940, 106, 154, 556, 796, 890};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 10473;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> you = {868, 818, 387, 546, 669, 449};
    vector<int> computer = {281, 944, 977, 724, 592, 272};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 2901;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> you = {198, 598, 485, 354, 230, 477, 688, 943, 668};
    vector<int> computer = {977, 237, 511, 236, 893, 482, 326, 535, 568};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 4213;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> you = {347, 170, 290, 219, 918, 736, 803, 647, 683, 270, 763, 65, 718, 854, 341, 46, 482, 22, 834};
    vector<int> computer = {616, 538, 601, 566, 773, 637, 693, 756, 863, 158, 422, 782, 23, 437, 43, 504, 269, 69, 245};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 9075;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> you = {858, 759, 49, 481, 57, 956, 86, 563, 957, 571, 874, 407};
    vector<int> computer = {402, 412, 655, 819, 940, 283, 4, 613, 51, 653, 420, 949};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 6569;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> you = {201, 413, 340, 620, 804, 6, 106, 393, 276, 316, 820, 849, 311, 198, 562, 467, 990, 432, 367, 417, 384, 578, 873, 337, 392, 946, 507, 417, 605, 773, 85, 152};
    vector<int> computer = {208, 88, 317, 470, 626, 332, 80, 612, 143, 280, 821, 437, 989, 221, 108, 517, 264, 9, 574, 767, 108, 964, 368, 899, 520, 223, 302, 477, 310, 413, 761, 837};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 14846;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> you = {426, 721, 731, 92, 83, 749, 842, 635, 359, 473, 95, 414, 189, 342, 908, 229, 310, 155, 341, 182, 272, 206};
    vector<int> computer = {173, 334, 66, 500, 958, 805, 445, 908, 179, 480, 470, 696, 248, 932, 277, 299, 818, 815, 627, 791, 9, 261};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 7958;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> you = {948, 855, 515, 704, 256, 916, 489, 94, 822, 78, 282, 383, 640, 513, 430, 141, 970};
    vector<int> computer = {76, 7, 910, 410, 751, 188, 102, 422, 675, 525, 820, 833, 271, 497, 866, 149, 965};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 8958;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> you = {221, 68, 205, 198, 193, 200, 952, 591, 735, 294, 677, 782, 916, 923, 840, 259, 106, 63, 899, 149, 888, 358, 951, 380, 331, 681, 883, 379, 432};
    vector<int> computer = {671, 267, 481, 526, 798, 790, 743, 485, 823, 557, 278, 346, 55, 906, 759, 367, 282, 211, 324, 51, 877, 249, 402, 145, 871, 605, 780, 197, 450};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 14168;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> you = {432, 633, 800, 175, 322, 958, 706, 198, 858, 48, 739, 37, 131, 83, 550, 566, 531, 219, 78, 304, 65, 410, 134, 251, 816, 507, 268, 982, 912, 122, 284, 703, 469, 294, 344, 523, 807, 515, 68, 825};
    vector<int> computer = {552, 104, 507, 941, 719, 472, 450, 914, 546, 364, 880, 657, 123, 505, 113, 279, 544, 787, 368, 854, 741, 462, 359, 440, 583, 378, 629, 555, 481, 832, 186, 11, 110, 42, 222, 256, 409, 704, 441, 134};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 17035;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> you = {852, 802, 218, 919, 313, 144, 604, 12, 950, 535, 386, 14, 237, 881, 590, 153, 18, 533, 912, 650, 224, 404, 960, 98, 398, 504, 334, 328, 622};
    vector<int> computer = {250, 289, 531, 894, 476, 327, 671, 459, 580, 411, 917, 122, 662, 149, 247, 112, 103, 686, 822, 489, 452, 650, 417, 637, 100, 826, 368, 873, 518};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 13309;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> you = {393, 722, 628, 373, 809, 848, 65, 740, 361, 235, 815, 780, 273, 561, 175, 125, 753, 412, 279, 171, 542, 241, 318, 225, 655, 695, 667, 640, 57, 329, 947, 320, 307, 163, 367, 276, 956, 236, 260, 622, 752, 580, 271, 709, 337, 711, 23, 697, 628, 127};
    vector<int> computer = {716, 380, 522, 860, 589, 493, 32, 669, 551, 349, 570, 760, 24, 2, 545, 744, 282, 790, 831, 720, 296, 536, 404, 103, 388, 98, 665, 162, 688, 668, 735, 883, 753, 567, 265, 112, 267, 730, 972, 486, 215, 797, 610, 348, 481, 993, 373, 943, 221, 627};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 21810;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> you = {146, 925, 456, 639, 50, 653, 739, 101, 648, 200, 234, 728, 989, 750, 888, 545, 887, 864, 613, 716, 727, 152, 752, 153, 403, 612, 713, 826, 881, 65, 393};
    vector<int> computer = {601, 486, 450, 758, 576, 335, 580, 359, 746, 82, 96, 992, 46, 395, 109, 414, 432, 269, 451, 225, 261, 639, 888, 874, 448, 410, 232, 959, 736, 341, 719};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 17232;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> you = {619, 889, 679, 235, 110, 529, 712, 565, 16, 509, 457, 965, 885, 699, 246, 104, 266, 464, 604, 50, 385, 117, 993, 736, 42, 6, 677, 951, 703, 747, 142, 675};
    vector<int> computer = {610, 660, 971, 72, 902, 857, 626, 884, 573, 153, 894, 571, 263, 176, 622, 830, 667, 854, 447, 978, 657, 705, 59, 812, 743, 969, 831, 313, 118, 206, 291, 943};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 15332;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> you = {249, 216, 862, 429, 206, 924, 749, 389, 374, 556, 628, 936, 733, 732, 387, 548, 975, 625, 327, 428, 624, 692, 488, 665, 268, 105, 66, 140, 452, 180, 643, 852, 266, 813, 622, 912, 103, 254, 495, 698, 701, 110, 371, 480};
    vector<int> computer = {956, 100, 453, 94, 519, 325, 786, 820, 734, 561, 53, 188, 985, 426, 640, 718, 896, 838, 910, 481, 478, 724, 754, 383, 741, 274, 362, 32, 818, 754, 433, 224, 83, 265, 623, 763, 325, 254, 483, 748, 559, 347, 693, 962};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 21363;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> you = {272, 884, 590, 604, 346, 797, 825, 811, 422, 82, 629, 977, 685, 497, 184, 565, 238, 857, 288, 984, 816, 401};
    vector<int> computer = {321, 397, 654, 926, 899, 277, 760, 523, 947, 912, 639, 49, 263, 288, 788, 258, 286, 351, 909, 814, 243, 321};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 12250;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> you = {956, 245, 928, 814, 104, 575, 227, 375, 192, 783, 892, 309, 55, 748};
    vector<int> computer = {716, 556, 546, 367, 110, 70, 769, 29, 319, 308, 145, 524, 326, 737};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 7148;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> you = {577, 921, 657, 706, 579, 73, 294, 16, 768, 992, 577, 305, 473, 135, 513, 187, 547, 376, 509, 674, 720, 704, 613, 124, 952, 727, 57, 228, 497, 134, 969, 455};
    vector<int> computer = {781, 609, 771, 610, 835, 288, 992, 853, 337, 158, 108, 958, 973, 582, 115, 69, 330, 397, 429, 731, 800, 594, 873, 561, 902, 206, 229, 179, 438, 320, 217, 830};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 15333;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> you = {852, 397, 442, 944, 49, 784, 300, 517, 221, 665, 289, 173, 868, 470, 838, 907, 583, 160, 444, 679, 814, 977, 960, 512, 89, 52, 574, 858, 590, 601, 578, 282, 785, 386, 877, 120, 963, 59, 417, 343, 358};
    vector<int> computer = {3, 316, 212, 778, 489, 62, 884, 396, 566, 444, 703, 566, 582, 603, 196, 374, 772, 901, 562, 808, 795, 943, 766, 197, 627, 512, 839, 821, 726, 687, 616, 395, 874, 977, 531, 253, 597, 677, 638, 945, 560};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 20854;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> you = {508, 203, 871, 170, 149, 718, 688, 554, 619, 991, 994, 595, 512, 523, 47, 828};
    vector<int> computer = {888, 549, 257, 7, 928, 813, 101, 131, 850, 380, 758, 66, 326, 18, 76, 369};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 8923;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> you = {230, 572, 743};
    vector<int> computer = {354, 438, 115};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 1545;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> you = {393, 319, 929, 594, 562, 868, 582, 236, 321, 234, 624, 652, 655, 757, 498, 509, 176, 418, 469, 979, 882, 23, 74, 93, 388, 316, 927, 828, 571, 492, 393, 915, 520, 113, 856, 416, 749, 990, 229, 31, 464, 119, 354};
    vector<int> computer = {339, 939, 22, 937, 777, 773, 772, 747, 611, 45, 54, 552, 694, 136, 286, 728, 329, 347, 508, 907, 939, 920, 857, 568, 935, 688, 306, 985, 424, 935, 602, 489, 166, 721, 50, 323, 501, 220, 17, 158, 534, 300, 844};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 20889;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> you = {348, 3, 117, 285, 546, 2, 762, 77, 913, 802, 209, 382, 446, 771, 869, 910, 536, 641, 250, 610, 640, 710, 948, 568, 146, 346, 854, 774, 737};
    vector<int> computer = {937, 802, 110, 119, 27, 937, 439, 203, 634, 198, 331, 757, 646, 949, 154, 631, 178, 421, 78, 393, 752, 763, 827, 689, 406, 496, 638, 84, 284};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 15197;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> you = {231, 618, 34, 974, 333, 976, 525, 57, 569, 413, 144};
    vector<int> computer = {397, 153, 302, 219, 54, 265, 594, 851, 333, 580, 918};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 4783;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> you = {27, 785, 633, 82, 104, 523, 597, 434, 22, 664, 973, 419, 77, 342, 817, 109, 899, 583, 707, 187, 612, 44, 277, 559, 613, 630, 834, 545, 642, 569, 954, 325, 52, 655, 205, 789, 841, 243, 876};
    vector<int> computer = {486, 561, 762, 22, 729, 460, 290, 426, 646, 91, 918, 26, 215, 748, 537, 325, 5, 906, 700, 271, 767, 51, 211, 246, 545, 27, 144, 535, 381, 455, 843, 23, 409, 156, 736, 360, 379, 160, 359};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 19227;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> you = {314, 373, 551, 695, 457, 370, 209, 990, 156, 362, 452, 211, 822, 892, 699, 432, 702, 287, 479, 176, 468, 325, 419, 23, 450, 299, 332};
    vector<int> computer = {20, 550, 842, 765, 624, 547, 671, 972, 475, 923, 686, 649, 736, 901, 550, 393, 380, 791, 194, 277, 75, 383, 329, 435, 71, 456, 497};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 10270;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> you = {784, 142, 652, 814, 419, 221};
    vector<int> computer = {852, 760, 330, 79, 62, 227};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 2890;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> you = {415, 577, 496, 914, 424, 215, 562, 906, 538, 600, 199, 628, 450, 801, 309, 572, 525, 673, 960, 133, 292, 37, 5, 397, 141, 181, 620, 21};
    vector<int> computer = {903, 759, 862, 364, 494, 569, 407, 793, 168, 244, 534, 333, 702, 441, 758, 469, 56, 517, 923, 452, 640, 216, 258, 771, 992, 412, 225, 191};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 12254;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> you = {464, 654, 18, 328, 167, 986, 993, 520, 847, 76, 546, 862, 685, 411, 592, 711, 683, 290, 863, 619, 434, 650, 868, 548, 134, 167, 340, 627, 909, 350, 442, 645, 16, 207, 544, 903, 809, 228, 781, 628, 260, 222, 249, 533};
    vector<int> computer = {750, 822, 40, 771, 962, 142, 3, 860, 670, 376, 407, 773, 97, 925, 360, 843, 817, 778, 206, 646, 783, 641, 738, 496, 397, 729, 501, 735, 296, 603, 880, 470, 797, 939, 419, 869, 569, 700, 952, 769, 505, 520, 42, 626};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 21325;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> you = {561, 193, 805, 582, 478, 349, 891, 819, 743, 174, 854, 707, 511, 303, 16, 92, 363, 148, 166, 983, 444, 120, 6, 10, 377, 529, 569, 599, 604, 167, 660, 449, 351, 58, 605, 779, 798, 518, 301, 871, 723, 951, 921, 537, 143, 460, 235, 858, 210, 776};
    vector<int> computer = {839, 991, 994, 609, 391, 266, 297, 836, 25, 375, 93, 674, 57, 10, 914, 275, 272, 585, 688, 833, 723, 483, 205, 740, 467, 456, 944, 741, 109, 596, 384, 731, 606, 570, 360, 152, 225, 424, 799, 515, 984, 748, 345, 169, 654, 490, 65, 696, 503, 148};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 24277;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> you = {142, 900, 689, 302, 425, 71, 961, 680, 154, 873, 817, 579, 191, 178, 813, 473, 156, 502, 728, 404, 279, 566, 679, 752, 718, 473, 124, 367, 830, 36, 515, 660, 425, 105, 944, 916, 547, 345, 470, 374, 842, 316, 454, 271, 978, 297, 735, 565, 196, 757};
    vector<int> computer = {835, 396, 499, 885, 29, 989, 570, 52, 529, 194, 839, 624, 654, 198, 838, 124, 111, 739, 313, 936, 286, 335, 141, 729, 830, 704, 597, 743, 252, 145, 3, 62, 802, 848, 211, 116, 551, 16, 114, 453, 748, 683, 541, 75, 435, 202, 693, 290, 435, 232};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 25538;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> you = {530, 626, 161, 502, 958, 692, 920, 190, 335, 179, 990, 456, 992, 98, 622, 95, 436, 926, 50, 890, 289, 227, 765, 409, 202, 625, 601, 450, 465, 595, 632, 850, 824, 622, 717, 563, 374, 184, 734, 553, 900, 243, 189, 602, 695, 582, 350, 492, 81, 737};
    vector<int> computer = {609, 617, 688, 800, 150, 573, 863, 907, 612, 724, 44, 665, 971, 314, 567, 305, 174, 109, 864, 847, 741, 155, 326, 80, 78, 638, 816, 543, 447, 408, 298, 464, 499, 153, 322, 734, 313, 822, 954, 869, 721, 299, 939, 128, 67, 781, 522, 607, 951, 73};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 25715;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> you = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378, 495, 789, 507, 381, 685, 530, 603, 394, 7, 704, 101, 620, 859, 490, 744, 495, 379, 781, 550, 356, 950, 628, 177, 373, 132, 740, 946, 609, 29, 329, 57, 636, 132, 843, 860, 594, 718, 849};
    vector<int> computer = {16, 127, 704, 614, 218, 67, 169, 621, 340, 319, 366, 658, 798, 803, 524, 608, 794, 896, 145, 627, 401, 253, 137, 851, 67, 426, 571, 302, 546, 225, 311, 111, 804, 135, 284, 784, 890, 786, 740, 612, 360, 852, 228, 859, 229, 249, 540, 979, 55, 82};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 25084;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> you = {425, 95, 258, 887, 233, 147, 126, 927, 81, 48, 60, 336, 910, 397, 431, 941, 833, 532, 838, 690, 396, 259, 6, 523, 950, 397, 241, 583, 255, 681, 940, 434, 885, 9, 936, 599, 782, 574, 143, 222, 382, 6, 416, 83, 657, 851, 66, 807, 659, 688};
    vector<int> computer = {799, 528, 682, 143, 686, 724, 774, 32, 864, 641, 703, 86, 550, 943, 60, 275, 146, 976, 617, 292, 917, 366, 691, 219, 156, 240, 519, 897, 107, 898, 440, 81, 778, 172, 969, 772, 866, 211, 455, 5, 747, 115, 403, 310, 987, 40, 252, 189, 247, 154};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 23556;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> you = {578, 198};
    vector<int> computer = {829, 600};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
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
    vector<int> you = {359, 918, 843, 765, 179, 880, 728, 526, 312, 16, 94, 374, 151, 170, 457, 122, 5, 10, 387, 545, 585, 617, 622, 171, 679};
    vector<int> computer = {462, 361, 59, 623, 803, 822, 533, 310, 897, 745, 979, 948, 553, 146, 474, 241, 883, 215, 799, 864, 627, 402, 273, 305, 861};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 9947;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> you = {385, 95, 694};
    vector<int> computer = {58, 10, 941};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 1079;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> you = {280, 603, 708, 858, 744, 497, 211, 762, 480, 469, 972, 763, 111, 614, 395};
    vector<int> computer = {753, 624, 587, 371, 156, 231, 436, 823, 530, 770, 354, 174, 674, 504, 66};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 8467;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> you = {517, 152, 973, 145, 927, 710, 311, 437, 73, 990, 700, 157, 899, 842, 597, 196, 183, 837, 487, 160, 517, 750, 416, 287, 583, 699, 774, 740, 487, 126, 377, 855, 36, 530, 679, 437};
    vector<int> computer = {108, 973, 944, 563, 355, 484, 384, 868, 325, 468, 279, 305, 757, 581, 201, 780, 860, 408, 513, 912, 29, 587, 52, 545, 199, 864, 642, 674, 203, 863, 127, 113, 761, 322, 964, 293};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 18206;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> you = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378, 495, 789, 507, 381, 685, 530, 603, 394, 7, 704, 101, 620, 859, 490, 744, 495, 379, 781, 550, 356, 950, 628, 177, 373, 132, 740, 946, 609, 29, 329, 57, 636, 132, 843, 860, 594, 718, 849};
    vector<int> computer = {16, 127, 704, 614, 218, 67, 169, 621, 340, 319, 366, 658, 798, 803, 524, 608, 794, 896, 145, 627, 401, 253, 137, 851, 67, 426, 571, 302, 546, 225, 311, 111, 804, 135, 284, 784, 890, 786, 740, 612, 360, 852, 228, 859, 229, 249, 540, 979, 55, 82};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 25084;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> you = {5, 15, 100, 1, 5};
    vector<int> computer = {5, 15, 100, 1, 5};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> you = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378};
    vector<int> computer = {300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 4468;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> you = {11, 12};
    vector<int> computer = {10, 20};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> you = {1, 4, 5, 15, 100};
    vector<int> computer = {1, 5, 5, 15, 100};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> you = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378, 495, 789, 507, 381, 685, 530, 603, 394, 7, 704, 101, 620, 859, 490, 744, 495, 379, 781, 550, 356, 950, 628, 177, 373, 132, 740, 946, 609, 29, 329, 57, 636, 132, 843, 860, 594, 718, 849};
    vector<int> computer = {16, 127, 704, 614, 218, 67, 169, 621, 340, 319, 366, 658, 798, 803, 524, 608, 794, 896, 145, 627, 401, 253, 137, 851, 67, 426, 571, 302, 546, 225, 311, 111, 804, 135, 284, 784, 890, 786, 740, 612, 360, 852, 228, 859, 229, 249, 540, 979, 55, 82};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 25084;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> you = {5, 15, 100, 1, 5};
    vector<int> computer = {5, 15, 100, 1, 5};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> you = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378};
    vector<int> computer = {300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 4468;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> you = {11, 12};
    vector<int> computer = {10, 20};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> you = {1, 4, 5, 15, 100};
    vector<int> computer = {1, 5, 5, 15, 100};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> you = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378, 495, 789, 507, 381, 685, 530, 603, 394, 7, 704, 101, 620, 859, 490, 744, 495, 379, 781, 550, 356, 950, 628, 177, 373, 132, 740, 946, 609, 29, 329, 57, 636, 132, 843, 860, 594, 718, 849};
    vector<int> computer = {16, 127, 704, 614, 218, 67, 169, 621, 340, 319, 366, 658, 798, 803, 524, 608, 794, 896, 145, 627, 401, 253, 137, 851, 67, 426, 571, 302, 546, 225, 311, 111, 804, 135, 284, 784, 890, 786, 740, 612, 360, 852, 228, 859, 229, 249, 540, 979, 55, 82};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 25084;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> you = {5, 15, 100, 1, 5};
    vector<int> computer = {5, 15, 100, 1, 5};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> you = {651, 321, 106, 503, 227, 290, 915, 549, 660, 115, 491, 378};
    vector<int> computer = {300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300, 300};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 4468;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> you = {11, 12};
    vector<int> computer = {10, 20};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> you = {1, 4, 5, 15, 100};
    vector<int> computer = {1, 5, 5, 15, 100};
    PlayGame* pObj = new PlayGame();
    clock_t start = clock();
    int result = pObj->saveCreatures(you, computer);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5863&pm=3002
********************************************************************************
/*
 * This code fails systests.
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue>
//#include <1337_sk1llz>  /* D'oh!  TC's compiler doesn't support this header.  Looks like I'm doomed... */
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define len length()
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef long long ii;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i];
  os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
 
/*
public class antimatter extends Idiot {
  String[] codeSolution(String[] problemStatement) {
      //re-code this method!
    //it always returns quickly, but is often incorrect (about 33% of the time)
    return null;
  }
}
*/
 
//----------------------------
 
class PlayGame {
  public:
  int saveCreatures(vector <int> a, vector <int> b) {
    s(a); s(b);
    int s = 0;
    for (int i = a.si - 1; i >= 0; i--) {
      //if larger
      for (int j = b.si - 1; j >= 0; j--) {
        if (a[i] > b[j]) {
          s += a[i];
          b.erase(b.begin() + j);
          goto hit;
        }
      }
      b.erase(b.end() - 1);
      hit:;
    }
    return s;
  }
};

********************************************************************************
*******************************************************************************/