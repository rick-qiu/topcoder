/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2331
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

class PolicePair {
public:
    vector<int> bestSquad(vector<int> skillStart, vector<int> skillEnd);
};

vector<int> PolicePair::bestSquad(vector<int> skillStart, vector<int> skillEnd) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> skillStart = {2};
    vector<int> skillEnd = {4};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> skillStart = {2, 4};
    vector<int> skillEnd = {3, 4};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> skillStart = {1};
    vector<int> skillEnd = {5};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> skillStart = {2, 3};
    vector<int> skillEnd = {3, 4};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> skillStart = {2, 100, 200};
    vector<int> skillEnd = {5, 100, 200};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> skillStart = {371, 639, 303, 170, 130, 834, 147, 41, 524, 523, 213, 437, 379, 281, 296, 20, 468, 841, 296, 136, 507, 49, 784, 746, 197, 129, 32, 611, 109, 298, 276, 712, 168, 743, 407, 252, 101, 584, 385, 300, 81, 833, 467, 452, 310, 229, 310, 713, 382, 91};
    vector<int> skillEnd = {997, 997, 488, 903, 294, 903, 795, 503, 975, 726, 310, 633, 863, 397, 649, 447, 865, 986, 888, 633, 952, 294, 936, 927, 861, 460, 782, 878, 234, 381, 319, 805, 367, 991, 434, 487, 161, 955, 886, 935, 838, 912, 812, 651, 951, 608, 488, 965, 819, 793};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1201, 535};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> skillStart = {267, 791, 67, 97, 340, 124, 870, 299, 164, 15, 740, 453, 793, 85, 50, 668, 586, 393, 81, 298, 92, 809, 339, 160, 133, 525, 169, 39, 143, 350, 261, 617, 12, 136, 766, 220, 159, 675, 745, 216, 492, 47, 375, 251, 684, 63, 781, 527, 623, 592};
    vector<int> skillEnd = {481, 920, 177, 749, 714, 985, 976, 704, 380, 87, 755, 679, 909, 898, 555, 775, 747, 795, 901, 395, 577, 971, 670, 529, 230, 871, 173, 203, 630, 415, 289, 984, 17, 680, 874, 261, 243, 965, 911, 665, 551, 985, 648, 299, 793, 888, 953, 767, 649, 593};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {554, 512};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> skillStart = {496, 504, 450, 435, 490, 684, 300, 138, 624, 584, 2, 513, 336, 648, 145, 170, 59, 207, 312, 245, 410, 33, 155, 826, 193, 289, 454, 177, 563, 187, 6, 966, 106, 309, 864, 169, 457, 880, 395, 1, 122, 191, 204, 329, 885, 248, 47, 546, 773, 302};
    vector<int> skillEnd = {989, 662, 531, 708, 719, 783, 487, 815, 851, 688, 648, 737, 448, 735, 550, 860, 529, 394, 537, 554, 467, 619, 545, 868, 564, 565, 959, 726, 947, 808, 455, 974, 873, 480, 962, 848, 709, 925, 478, 994, 748, 622, 508, 627, 999, 409, 437, 930, 935, 800};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1533, 480};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> skillStart = {437, 480, 210, 194, 591, 93, 173, 254, 194, 778, 302, 317, 607, 913, 61, 697, 138, 371, 236, 217, 594, 161, 311, 106, 69, 482, 761, 126, 422, 634, 337, 262, 774, 75, 101, 298, 120, 58, 330, 232, 121, 686, 125, 426, 558, 107, 94, 30, 541, 108};
    vector<int> skillEnd = {907, 695, 693, 888, 743, 549, 533, 655, 622, 892, 660, 490, 921, 915, 116, 962, 900, 808, 887, 753, 602, 381, 789, 570, 801, 490, 907, 373, 701, 640, 690, 435, 875, 216, 711, 834, 942, 910, 899, 856, 578, 750, 247, 579, 912, 249, 122, 875, 892, 368};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {523, 500};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> skillStart = {175, 637, 432, 682, 902, 798, 777, 587, 435, 401, 445, 864, 400, 181, 545, 415, 545, 66, 270, 619, 319, 229, 20, 829, 92, 328, 409, 645, 738, 350, 75, 662, 183, 255, 45, 383, 83, 228, 465, 714, 627, 518, 401, 377, 396, 762, 156, 358, 657, 263};
    vector<int> skillEnd = {622, 730, 598, 931, 914, 961, 827, 947, 690, 889, 881, 968, 799, 457, 809, 616, 759, 631, 425, 633, 337, 621, 998, 964, 254, 753, 434, 985, 874, 837, 385, 858, 871, 832, 526, 661, 972, 778, 983, 926, 921, 699, 704, 587, 998, 898, 832, 857, 828, 835};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1666, 577};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> skillStart = {957, 435, 97, 437, 354, 130, 280, 125, 170, 274, 576, 3, 383, 42, 71, 494, 166, 710, 113, 52, 749, 38, 140, 228, 25, 841, 213, 9, 211, 389, 580, 135, 683, 35, 405, 638, 15, 248, 406, 732, 839, 224, 602, 182, 321, 106, 44, 152, 598, 323};
    vector<int> skillEnd = {1000, 625, 416, 980, 855, 715, 695, 371, 952, 702, 731, 636, 646, 207, 829, 592, 634, 787, 309, 254, 890, 760, 241, 696, 232, 985, 940, 482, 348, 866, 756, 789, 778, 903, 428, 817, 286, 304, 889, 953, 872, 814, 636, 881, 477, 763, 871, 985, 858, 475};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {955, 485};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> skillStart = {22, 193, 489, 167, 9, 720, 649, 536, 184, 527, 320, 280, 150, 25, 89, 577, 114, 436, 462, 186, 293, 336, 677, 819, 830, 602, 3, 302, 162, 282, 11, 311, 471, 83, 385, 121, 413, 304, 654, 69, 271, 361, 419, 137, 308, 34, 256, 348, 150, 274};
    vector<int> skillEnd = {536, 958, 730, 875, 696, 992, 704, 885, 983, 626, 339, 499, 512, 35, 593, 698, 916, 661, 745, 640, 865, 708, 795, 865, 918, 622, 584, 616, 299, 953, 820, 576, 678, 640, 777, 560, 963, 872, 799, 597, 546, 529, 516, 678, 894, 123, 498, 575, 471, 529};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {984, 480};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> skillStart = {189, 392, 222, 587, 559, 183, 324, 200, 144, 186, 33, 58, 316, 356, 228, 502, 244, 540, 214, 85, 417, 525, 627, 286, 566, 45, 152, 89, 617, 16, 520, 687, 648, 278, 220, 251, 91, 491, 659, 714, 186, 581, 641, 158, 351, 64, 226, 403, 124, 171};
    vector<int> skillEnd = {529, 659, 523, 935, 575, 326, 643, 302, 162, 904, 503, 487, 487, 965, 275, 786, 635, 764, 750, 259, 514, 879, 736, 796, 857, 234, 768, 683, 692, 212, 959, 793, 957, 358, 846, 694, 907, 779, 729, 811, 989, 600, 853, 343, 494, 329, 493, 473, 736, 174};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {765, 496};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> skillStart = {24, 286, 520, 372, 560, 95, 178, 316, 11, 761, 773, 71, 517, 424, 295, 303, 439, 125, 513, 94, 809, 3, 677, 301, 231, 29, 460, 597, 75, 162, 557, 108, 427, 72, 279, 448, 486, 832, 248, 104, 398, 878, 640, 361, 778, 173, 236, 107, 431, 356};
    vector<int> skillEnd = {217, 910, 812, 684, 976, 502, 770, 611, 162, 955, 918, 765, 646, 567, 425, 924, 449, 483, 765, 284, 967, 829, 678, 763, 783, 312, 719, 675, 368, 502, 748, 797, 984, 594, 519, 714, 583, 919, 861, 732, 469, 898, 966, 983, 961, 619, 743, 927, 909, 988};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {629, 519};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> skillStart = {411, 242, 306, 113, 425, 309, 70, 335, 259, 664, 43, 647, 288, 806, 195, 805, 791, 62, 199, 59, 104, 365, 708, 585, 156, 513, 637, 82, 193, 500, 643, 99, 98, 652, 215, 322, 204, 151, 430, 115, 282, 326, 269, 323, 172, 29, 231, 534, 656, 240};
    vector<int> skillEnd = {677, 548, 890, 372, 980, 517, 322, 621, 582, 756, 450, 764, 983, 855, 507, 878, 949, 830, 439, 1000, 974, 499, 980, 942, 399, 704, 638, 471, 560, 698, 721, 492, 269, 673, 719, 989, 869, 631, 438, 428, 768, 858, 757, 933, 655, 474, 423, 878, 700, 478};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2319, 514};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> skillStart = {476, 44, 456, 67, 70, 198, 619, 210, 218, 80, 8, 370, 60, 127, 370, 776, 670, 209, 487, 268, 704, 187, 621, 913, 431, 74, 19, 7, 95, 418, 420, 747, 19, 415, 723, 399, 375, 119, 572, 93, 46, 39, 368, 114, 17, 976, 309, 51, 388, 226};
    vector<int> skillEnd = {660, 469, 486, 574, 140, 810, 988, 465, 729, 81, 115, 689, 219, 498, 816, 956, 917, 784, 636, 870, 876, 466, 948, 959, 525, 828, 405, 264, 597, 921, 889, 926, 939, 903, 899, 647, 694, 567, 772, 850, 849, 930, 815, 776, 455, 995, 885, 274, 502, 962};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1054, 487};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> skillStart = {100, 103, 181, 110, 913, 384, 905, 33, 867, 837, 142, 534, 418, 856, 282, 379, 38, 145, 48, 239, 214, 177, 32, 765, 144, 495, 233, 540, 190, 290, 298, 386, 506, 131, 100, 336, 750, 58, 239, 787, 284, 428, 463, 413, 549, 52, 214, 131, 215, 298};
    vector<int> skillEnd = {801, 913, 214, 193, 938, 995, 918, 277, 921, 931, 506, 934, 675, 934, 857, 826, 616, 287, 438, 713, 690, 481, 70, 946, 975, 940, 811, 988, 640, 626, 633, 641, 735, 417, 990, 541, 857, 320, 578, 955, 843, 441, 675, 955, 718, 517, 991, 374, 637, 418};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1456, 507};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> skillStart = {254, 207, 602, 452, 85, 38, 349, 206, 600, 15, 73, 793, 501, 2, 452, 154, 354, 537, 154, 106, 782, 334, 251, 288, 312, 104, 632, 377, 103, 120, 420, 470, 617, 137, 244, 77, 351, 371, 396, 638, 474, 784, 112, 495, 106, 768, 227, 427, 190, 277};
    vector<int> skillEnd = {802, 427, 739, 819, 593, 785, 669, 835, 784, 266, 666, 937, 516, 999, 593, 161, 643, 879, 222, 700, 959, 694, 859, 866, 564, 484, 979, 590, 606, 670, 806, 575, 920, 552, 636, 832, 500, 627, 751, 796, 700, 812, 731, 597, 582, 819, 791, 527, 403, 355};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {774, 489};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> skillStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> skillEnd = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 500};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> skillStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> skillEnd = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 500};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> skillStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> skillEnd = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 500};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> skillStart = {2, 5};
    vector<int> skillEnd = {3, 5};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> skillStart = {100, 100, 100, 1};
    vector<int> skillEnd = {200, 300, 400, 800};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {503, 250};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> skillStart = {1, 1};
    vector<int> skillEnd = {1, 1};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> skillStart = {1000, 1000};
    vector<int> skillEnd = {1000, 1000};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1000};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> skillStart = {1000, 1000};
    vector<int> skillEnd = {1000, 1000};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1000};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> skillStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> skillEnd = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 500};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> skillStart = {1, 1, 2, 3, 2, 1, 2, 3, 4, 2, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3};
    vector<int> skillEnd = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 500};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> skillStart = {1000, 1000, 1000};
    vector<int> skillEnd = {1000, 1000, 1000};
    PolicePair* pObj = new PolicePair();
    clock_t start = clock();
    vector<int> result = pObj->bestSquad(skillStart, skillEnd);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1000};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4775&pm=2331
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
int sk[5000]; 
 
class PolicePair { 
public: 
vector <int> bestSquad(vector <int> a, vector <int> b) { 
  int i, j, k, x, y, z, n; 
  vector <int> ret(2, 10000); 
 
  int tot = 0; 
  for( i = 0; i < a.size(); i++ ) { 
    for( j = a[i]; j <= b[i]; j++ ) sk[j]++; 
    tot += b[i]-a[i]+1; 
  } 
  for( z = 2000; z >= 0; z-- ) { 
    n = 0; 
    for( x = 0; x <= 1000; x++ ) { 
      if( x*2 == z ) n += sk[x]/2; 
      else if( z-x > x ) n += sk[x] <? sk[z-x]; 
    } 
    n = tot-n-n; 
    if( n < ret[0] ) {ret[0] = n; ret[1] = z/2;} 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/