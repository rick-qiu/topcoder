/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8186
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

class Containers {
public:
    int wastedSpace(vector<int> containers, vector<int> packages);
};

int Containers::wastedSpace(vector<int> containers, vector<int> packages) {
    int ret;
    return ret;
}


int test0() {
    vector<int> containers = {5, 5, 5};
    vector<int> packages = {5, 5, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
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
    vector<int> containers = {5, 6, 7};
    vector<int> packages = {5, 5, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> containers = {2, 3, 5};
    vector<int> packages = {3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> containers = {3, 4, 5, 6};
    vector<int> packages = {3, 3, 3, 3, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> containers = {1000};
    vector<int> packages = {1000};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
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
    vector<int> containers = {549, 636, 576, 813, 552, 842, 733, 761, 840, 781};
    vector<int> packages = {357, 260, 294, 60, 164, 217, 286, 293, 302, 212};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4638;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> containers = {948, 950, 934, 699, 574, 673, 822, 990, 718, 813};
    vector<int> packages = {322, 475, 26, 442, 491, 215, 392, 450, 484, 474};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4350;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> containers = {840, 818, 930, 665, 944, 752, 561, 773, 860, 827};
    vector<int> packages = {100, 129, 479, 426, 327, 178, 178, 472, 489, 392};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4800;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> containers = {632, 837, 795, 574, 665, 620, 816, 834, 926, 817};
    vector<int> packages = {173, 43, 352, 110, 221, 102, 210, 264, 490, 103};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 5448;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> containers = {811, 555, 929, 833, 699, 680, 929, 516, 1000, 514};
    vector<int> packages = {287, 465, 321, 356, 426, 276, 416, 102, 475, 424};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 3918;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> containers = {832, 932, 890, 713, 943, 814, 784, 959, 544, 875};
    vector<int> packages = {272, 466, 201, 206, 255, 419, 115, 74, 315, 198};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 5765;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> containers = {624, 682, 814, 721, 521, 513, 730, 727, 527, 572};
    vector<int> packages = {499, 6, 153, 169, 322, 260, 59, 92, 428, 212};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4231;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> containers = {723, 724, 947, 899, 981, 628, 519, 663, 738, 657};
    vector<int> packages = {420, 441, 292, 434, 345, 100, 373, 377, 175, 117};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4405;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> containers = {877, 684, 798, 873, 671, 862, 811, 972, 710, 708};
    vector<int> packages = {463, 89, 476, 491, 343, 232, 126, 16, 454, 334};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4942;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> containers = {754, 913, 729, 586, 818, 558, 693, 983, 609, 773};
    vector<int> packages = {499, 230, 443, 473, 116, 135, 121, 262, 238, 211};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4688;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> containers = {817, 812, 541, 681, 701, 517, 778, 537, 789, 865, 957, 742, 785, 719, 742, 785, 447, 588, 779, 464, 714, 425, 521, 490, 710, 730, 553, 911, 964, 898, 494, 780, 646, 635, 997, 947, 688, 710, 484, 476, 574, 977, 818, 959, 696, 495, 679, 743, 619, 994};
    vector<int> packages = {201, 157, 161, 262, 201, 291, 21, 16, 130, 288, 41, 56, 107, 290, 75, 16, 104, 140, 255, 216, 144, 12, 17, 49, 119, 128, 124, 203, 111, 134, 147, 64, 290, 60, 77, 242, 50, 149, 257, 179, 137, 297, 286, 243, 38, 60, 11, 194, 199, 17};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 28307;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> containers = {854, 832, 573, 925, 788, 629, 691, 775, 964, 737, 982, 627, 525, 521, 846, 778, 556, 793, 496, 640, 851, 973, 669, 513, 594, 827, 679, 556, 522, 908, 568, 912, 675, 742, 837, 462, 907, 463, 774, 870, 736, 755, 432, 861, 813, 815, 574, 905, 607, 671};
    vector<int> packages = {57, 156, 75, 298, 281, 163, 276, 218, 65, 147, 52, 232, 230, 32, 178, 138, 204, 22, 154, 93, 18, 35, 184, 64, 198, 217, 220, 221, 133, 287, 150, 242, 142, 225, 291, 174, 139, 266, 91, 256, 164, 195, 187, 93, 278, 116, 283, 181, 189, 136};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27557;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> containers = {833, 438, 685, 801, 428, 799, 581, 770, 487, 930, 718, 445, 695, 596, 519, 810, 517, 903, 436, 762, 550, 961, 636, 767, 967, 952, 630, 954, 506, 710, 922, 939, 748, 542, 675, 712, 942, 856, 481, 428, 722, 735, 409, 416, 867, 465, 763, 985, 968, 799};
    vector<int> packages = {14, 239, 6, 199, 239, 74, 61, 54, 124, 103, 109, 61, 223, 69, 167, 2, 101, 92, 10, 178, 108, 130, 232, 13, 55, 210, 134, 76, 36, 62, 106, 101, 52, 111, 299, 290, 236, 59, 95, 59, 213, 203, 171, 135, 271, 89, 189, 123, 181, 250};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 28746;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> containers = {841, 564, 487, 884, 693, 677, 729, 823, 566, 494, 856, 790, 605, 878, 709, 633, 655, 890, 401, 417, 621, 680, 410, 424, 681, 918, 978, 678, 451, 422, 591, 892, 587, 678, 711, 816, 891, 976, 575, 993, 469, 967, 718, 610, 845, 426, 779, 499, 916, 780};
    vector<int> packages = {234, 144, 107, 175, 38, 197, 139, 73, 175, 225, 39, 102, 114, 293, 211, 287, 103, 204, 207, 201, 262, 107, 48, 136, 189, 100, 42, 153, 46, 109, 107, 279, 5, 265, 205, 94, 161, 43, 166, 35, 19, 205, 136, 133, 249, 98, 171, 103, 54, 77};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27509;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> containers = {682, 711, 772, 603, 478, 943, 968, 873, 892, 768, 519, 556, 557, 838, 818, 947, 588, 691, 524, 886, 455, 607, 551, 836, 421, 908, 848, 815, 572, 444, 562, 854, 691, 871, 993, 769, 749, 961, 578, 576, 664, 633, 732, 758, 470, 549, 640, 594, 841, 764};
    vector<int> packages = {182, 105, 165, 256, 89, 43, 31, 171, 39, 260, 6, 164, 191, 207, 223, 225, 62, 157, 160, 159, 118, 145, 111, 264, 107, 222, 261, 2, 285, 20, 173, 219, 176, 89, 174, 264, 132, 256, 187, 222, 215, 192, 137, 106, 151, 59, 30, 264, 215, 241};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27388;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> containers = {767, 995, 666, 603, 834, 548, 445, 758, 605, 481, 458, 490, 405, 590, 883, 560, 861, 538, 660, 518, 535, 406, 871, 910, 660, 407, 866, 878, 506, 754, 419, 873, 748, 685, 475, 581, 769, 520, 875, 975, 537, 933, 400, 543, 458, 819, 639, 856, 957, 835};
    vector<int> packages = {83, 132, 132, 285, 30, 99, 89, 286, 95, 156, 209, 31, 148, 216, 104, 123, 21, 119, 158, 186, 79, 238, 232, 156, 280, 36, 189, 210, 160, 11, 283, 242, 194, 167, 279, 223, 265, 67, 208, 60, 275, 169, 142, 122, 84, 297, 245, 156, 116, 154};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 25314;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> containers = {699, 843, 934, 464, 612, 854, 824, 737, 412, 438, 882, 406, 562, 991, 777, 466, 500, 583, 822, 949, 840, 405, 890, 966, 890, 799, 644, 486, 602, 718, 451, 901, 561, 921, 965, 709, 775, 724, 445, 723, 698, 863, 729, 861, 853, 441, 863, 889, 561, 684};
    vector<int> packages = {150, 198, 233, 247, 46, 89, 180, 243, 240, 268, 6, 245, 148, 15, 145, 105, 125, 114, 120, 27, 165, 106, 281, 282, 55, 282, 277, 245, 202, 168, 196, 103, 66, 180, 49, 163, 268, 228, 105, 260, 247, 163, 256, 95, 177, 100, 251, 53, 265, 70};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27310;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> containers = {508, 936, 491, 430, 615, 911, 805, 1000, 529, 404, 882, 968, 978, 700, 430, 550, 419, 481, 720, 758, 605, 490, 832, 725, 961, 738, 891, 704, 723, 747, 836, 831, 618, 928, 861, 833, 774, 601, 769, 839, 542, 650, 806, 519, 950, 773, 605, 905, 790, 926};
    vector<int> packages = {4, 117, 67, 60, 206, 87, 45, 95, 57, 30, 1, 96, 146, 35, 114, 73, 284, 165, 144, 71, 244, 261, 268, 248, 278, 40, 55, 242, 149, 37, 134, 205, 205, 200, 16, 110, 286, 60, 257, 42, 141, 257, 190, 38, 43, 55, 110, 26, 219, 6};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29968;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> containers = {851, 653, 883, 620, 994, 870, 875, 506, 462, 971, 945, 515, 728, 649, 648, 514, 672, 627, 605, 777, 822, 785, 646, 466, 758, 498, 496, 919, 829, 751, 806, 616, 403, 689, 836, 997, 494, 647, 438, 492, 617, 919, 608, 881, 567, 792, 931, 839, 418, 535};
    vector<int> packages = {268, 275, 225, 52, 16, 240, 179, 112, 116, 84, 178, 298, 136, 158, 145, 2, 299, 38, 126, 159, 116, 4, 22, 263, 192, 144, 131, 54, 86, 57, 52, 53, 84, 276, 105, 99, 215, 283, 210, 83, 66, 139, 80, 253, 48, 276, 7, 46, 13, 132};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 28165;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> containers = {532, 945, 783, 648, 710, 518, 995, 867, 849, 516, 442, 651, 789, 994, 845, 732, 722, 589, 507, 990, 938, 478, 945, 496, 863, 464, 690, 831, 871, 949, 629, 403, 894, 948, 587, 539, 466, 582, 406, 851, 698, 985, 437, 422, 914, 883, 691, 571, 407, 798};
    vector<int> packages = {210, 239, 8, 76, 29, 226, 289, 94, 150, 299, 171, 258, 265, 128, 252, 208, 227, 25, 22, 101, 282, 289, 55, 121, 17, 276, 223, 211, 210, 202, 253, 172, 192, 261, 247, 220, 186, 287, 13, 88, 285, 236, 97, 2, 63, 100, 209, 289, 177, 230};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 26490;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> containers = {508, 691, 645, 489, 670, 456, 920, 468, 559, 986, 809, 931, 547, 494, 578, 686, 755, 436, 930, 554, 999, 484, 503, 502, 554, 968, 759, 662, 952, 443, 990, 459, 734, 570, 485, 404, 563, 404, 408, 658, 926, 753, 588, 408, 847, 767, 630, 538, 803, 559};
    vector<int> packages = {196, 80, 74, 212, 217, 149, 42, 153, 133, 161, 266, 149, 121, 235, 135, 275, 234, 210, 102, 185, 37, 113, 290, 64, 125, 139, 4, 242, 5, 146, 292, 252, 277, 117, 215, 245, 266, 257, 98, 150, 117, 115, 50, 237, 49, 184, 263, 35, 145, 117};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 24457;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> containers = {543, 636, 775, 563, 609, 787, 430, 948, 429, 434, 489, 768, 731, 839, 749, 693, 964, 400, 826, 493, 584, 608, 736, 690, 506, 761, 823, 671, 573, 547, 978, 653, 719, 688, 816, 928, 474, 782, 876, 504, 817, 901, 808, 547, 675, 556, 776, 574, 493, 602};
    vector<int> packages = {153, 239, 19, 38, 164, 204, 272, 273, 104, 291, 278, 120, 229, 267, 64, 179, 201, 113, 278, 238, 259, 284, 172, 194, 200, 135, 86, 241, 269, 201, 62, 121, 140, 80, 159, 3, 35, 182, 27, 191, 172, 56, 10, 153, 23, 74, 31, 275, 238, 60};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 25915;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> containers = {937, 682, 692, 703, 799, 786, 616, 471, 592, 768, 774, 536, 587, 753, 762, 881, 634, 776, 874, 842, 848, 611, 793, 891, 410, 872, 529, 623, 405, 501, 904, 878, 719, 595, 580, 517, 917, 733, 525, 445, 500, 835, 517, 623, 587, 880, 503, 757, 655, 913};
    vector<int> packages = {80, 188, 224, 90, 300, 251, 173, 238, 9, 283, 164, 126, 55, 38, 90, 14, 155, 48, 293, 250, 293, 12, 27, 38, 141, 277, 209, 288, 103, 241, 140, 182, 180, 115, 23, 179, 65, 196, 168, 73, 230, 32, 198, 36, 69, 287, 101, 223, 87, 145};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27104;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> containers = {952, 512, 711, 714, 791, 437, 600, 885, 803, 907, 569, 481, 683, 892, 820, 988, 543, 565, 426, 788, 603, 742, 464, 711, 611, 555, 545, 816, 578, 432, 959, 465, 545, 669, 715, 936, 642, 915, 757, 982, 757, 926, 999, 977, 818, 819, 964, 897, 920, 926};
    vector<int> packages = {13, 43, 78, 89, 170, 234, 36, 36, 139, 206, 287, 293, 300, 69, 2, 201, 71, 8, 132, 148, 101, 197, 44, 120, 132, 187, 180, 104, 207, 45, 216, 272, 140, 45, 112, 9, 278, 147, 44, 169, 53, 83, 161, 52, 203, 162, 4, 273, 221, 136};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 30060;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> containers = {558, 980, 712, 676, 867, 437, 610, 507, 662, 914, 668, 812, 837, 951, 564, 981, 465, 666, 900, 431, 998, 645, 944, 789, 409, 883, 974, 851, 722, 400, 813, 816, 981, 524, 491, 847, 561, 638, 890, 759, 487, 557, 570, 924, 507, 670, 840, 509, 937, 675};
    vector<int> packages = {86, 4, 151, 135, 142, 99, 86, 193, 50, 62, 216, 189, 262, 260, 58, 128, 300, 194, 148, 216, 98, 84, 103, 39, 51, 154, 7, 16, 24, 85, 22, 161, 89, 172, 47, 282, 270, 132, 174, 71, 246, 89, 259, 207, 101, 69, 34, 152, 14, 234};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29344;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> containers = {546, 941, 872, 997, 492, 867, 954, 851, 700, 419, 544, 745, 497, 644, 774, 594, 402, 604, 464, 865, 687, 430, 832, 898, 780, 819, 634, 404, 672, 593, 741, 819, 470, 548, 815, 562, 951, 704, 412, 651, 659, 493, 932, 756, 737, 642, 950, 740, 846, 413};
    vector<int> packages = {21, 98, 251, 251, 31, 196, 33, 31, 175, 267, 45, 87, 71, 221, 120, 148, 297, 271, 103, 85, 9, 207, 216, 255, 72, 282, 31, 96, 213, 258, 58, 234, 108, 60, 184, 138, 256, 217, 168, 130, 235, 212, 269, 57, 132, 140, 256, 181, 110, 58};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 26718;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> containers = {405, 406, 514, 945, 536, 871, 492, 972, 576, 981, 524, 831, 408, 810, 466, 407, 461, 934, 733, 786, 500, 456, 839, 708, 532, 564, 977, 775, 787, 657, 824, 792, 599, 874, 672, 735, 744, 764, 642, 920, 744, 766, 751, 688, 576, 753, 632, 573, 686, 965};
    vector<int> packages = {128, 138, 12, 67, 97, 67, 241, 194, 78, 243, 101, 197, 13, 230, 280, 66, 131, 148, 83, 290, 198, 226, 261, 290, 282, 254, 132, 32, 54, 83, 44, 234, 220, 107, 52, 68, 173, 292, 262, 2, 286, 114, 199, 298, 44, 230, 63, 226, 77, 197};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 26749;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> containers = {837, 663, 725, 785, 647, 612, 845, 447, 730, 477, 405, 749, 669, 814, 725, 594, 523, 727, 416, 840, 592, 995, 692, 618, 447, 814, 742, 655, 403, 644, 782, 776, 843, 506, 560, 490, 654, 404, 473, 985, 418, 479, 733, 687, 829, 995, 818, 952, 721, 770};
    vector<int> packages = {252, 171, 240, 149, 187, 38, 89, 79, 251, 6, 152, 60, 139, 251, 290, 250, 168, 128, 294, 282, 204, 75, 180, 209, 178, 29, 54, 3, 1, 263, 245, 4, 134, 236, 152, 72, 273, 292, 150, 223, 49, 54, 282, 239, 4, 24, 189, 223, 203, 182};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 25805;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> containers = {661, 719, 536, 607, 989, 962, 917, 589, 541, 578, 445, 426, 567, 815, 676, 511, 651, 673, 824, 833, 546, 909, 402, 675, 476, 940, 503, 825, 734, 949, 822, 995, 667, 894, 537, 592, 856, 454, 717, 933, 632, 762, 959, 736, 513, 634, 847, 764, 843, 607};
    vector<int> packages = {218, 76, 269, 14, 227, 172, 217, 152, 264, 42, 32, 288, 71, 16, 72, 38, 170, 40, 169, 247, 247, 268, 210, 141, 285, 243, 205, 175, 117, 111, 230, 87, 187, 250, 152, 165, 174, 69, 16, 189, 110, 47, 228, 232, 115, 299, 22, 36, 38, 190};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27611;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> containers = {602, 877, 747, 535, 570, 515, 517, 497, 603, 927, 804, 897, 805, 434, 706, 882, 865, 514, 968, 934, 875, 796, 655, 817, 899, 703, 964, 812, 733, 977, 589, 935, 854, 937, 405, 960, 988, 522, 457, 526, 986, 861, 423, 790, 831, 729, 607, 695, 779, 574};
    vector<int> packages = {15, 284, 58, 277, 178, 66, 53, 19, 95, 217, 2, 65, 114, 20, 244, 7, 265, 68, 84, 42, 10, 19, 165, 53, 146, 220, 198, 15, 123, 18, 48, 138, 53, 157, 166, 231, 222, 219, 1, 68, 187, 2, 132, 300, 21, 128, 58, 286, 195, 194};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 30932;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> containers = {831, 676, 641, 551, 907, 929, 696, 755, 668, 565, 945, 727, 917, 573, 776, 423, 568, 804, 489, 473, 929, 788, 622, 921, 519, 775, 509, 860, 572, 804, 895, 402, 480, 471, 489, 987, 1000, 721, 678, 604, 822, 622, 931, 738, 731, 707, 697, 900, 446, 723};
    vector<int> packages = {233, 355, 307, 344, 263, 243, 337, 375, 269, 329, 242, 169, 59, 233, 193, 171, 38, 215, 215, 166, 175, 289, 7, 168, 185, 5, 124, 12, 116, 349, 321};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 28750;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> containers = {657, 533, 925, 723, 965, 490, 628, 841, 451, 642, 456, 844, 594, 753, 771, 571, 435, 633, 870, 868, 636, 991, 986, 505, 785, 770, 681, 876, 454, 903, 690, 647, 972, 550, 970, 936, 576, 534, 712, 627, 712, 769, 406, 842, 521, 777, 412, 492, 947, 819};
    vector<int> packages = {88, 393, 97, 269, 207, 176, 54, 144, 170, 307, 381, 133, 108, 74, 275, 105, 235, 390, 233, 88, 299, 21, 177, 169, 327, 383, 146, 25, 199, 43, 178};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29254;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> containers = {646, 903, 462, 526, 461, 591, 712, 901, 596, 953, 642, 826, 839, 892, 670, 567, 477, 625, 966, 911, 744, 475, 512, 934, 426, 771, 772, 863, 457, 492, 516, 703, 995, 579, 829, 992, 770, 540, 892, 902, 428, 469, 728, 804, 962, 934, 971, 975, 558, 937};
    vector<int> packages = {155, 4, 254, 49, 397, 117, 325, 87, 356, 351, 219, 372, 166, 337, 214, 86, 247, 361, 164, 44, 181, 164, 12, 256, 288, 321, 364, 144, 309, 47, 13};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29692;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> containers = {744, 805, 461, 676, 576, 972, 915, 655, 744, 610, 826, 632, 608, 863, 636, 971, 955, 946, 810, 874, 556, 677, 862, 431, 884, 748, 903, 460, 607, 805, 510, 952, 609, 507, 563, 721, 478, 478, 912, 758, 624, 673, 926, 833, 535, 497, 739, 489, 442, 548};
    vector<int> packages = {284, 221, 110, 326, 99, 318, 192, 292, 222, 366, 84, 138, 107, 324, 224, 311, 66, 148, 5, 290, 313, 339, 368, 194, 279, 234, 54, 214, 88, 203, 354};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 28239;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> containers = {920, 765, 893, 616, 995, 472, 660, 1000, 713, 848, 809, 1000, 986, 763, 857, 623, 438, 728, 939, 626, 957, 815, 486, 984, 586, 417, 571, 569, 438, 801, 701, 959, 502, 529, 574, 496, 537, 771, 431, 787, 618, 776, 786, 539, 539, 643, 763, 577, 971, 637};
    vector<int> packages = {339, 19, 272, 87, 289, 322, 69, 164, 184, 137, 289, 352, 176, 341, 183, 15, 18, 251, 292, 362, 72, 77, 306, 135, 324, 76, 216, 48, 233, 110, 101};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29552;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> containers = {559, 703, 872, 920, 485, 445, 698, 438, 725, 451, 728, 640, 826, 520, 685, 647, 945, 867, 903, 800, 771, 648, 968, 524, 597, 674, 994, 844, 494, 833, 664, 653, 535, 536, 508, 556, 517, 807, 594, 778, 858, 922, 418, 619, 978, 703, 803, 922, 505, 705};
    vector<int> packages = {290, 115, 217, 340, 92, 119, 18, 285, 68, 328, 187, 118, 361, 168, 43, 155, 116, 164, 179, 146, 218, 169, 147, 155, 253, 10, 110, 44, 106, 333, 185};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29546;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> containers = {532, 478, 978, 757, 413, 463, 656, 943, 930, 649, 639, 996, 831, 471, 533, 521, 995, 724, 617, 512, 693, 443, 487, 616, 488, 439, 778, 936, 850, 981, 423, 982, 458, 401, 739, 472, 400, 931, 951, 930, 580, 589, 861, 410, 596, 930, 531, 591, 654, 685};
    vector<int> packages = {280, 254, 1, 119, 94, 352, 319, 90, 298, 177, 371, 76, 28, 249, 159, 69, 169, 313, 317, 63, 156, 394, 22, 159, 116, 260, 362, 39, 46, 82, 340};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27689;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> containers = {488, 977, 816, 814, 475, 567, 515, 952, 854, 666, 745, 499, 734, 597, 747, 477, 520, 931, 751, 931, 980, 540, 930, 890, 876, 524, 730, 743, 911, 759, 831, 935, 735, 646, 685, 746, 813, 736, 698, 602, 938, 979, 702, 607, 511, 448, 620, 632, 915, 907};
    vector<int> packages = {314, 364, 111, 262, 323, 33, 117, 243, 40, 370, 244, 291, 148, 85, 32, 224, 305, 368, 117, 147, 394, 51, 381, 139, 357, 358, 113, 209, 248, 228, 17};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29992;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> containers = {750, 531, 414, 777, 851, 873, 865, 836, 473, 862, 579, 978, 730, 594, 528, 883, 892, 427, 643, 886, 464, 404, 795, 868, 910, 816, 590, 434, 403, 892, 465, 754, 422, 479, 466, 873, 952, 931, 708, 962, 793, 823, 875, 522, 954, 402, 942, 845, 966, 584};
    vector<int> packages = {252, 326, 372, 22, 353, 332, 101, 92, 52, 379, 11, 188, 322, 121, 52, 239, 248, 378, 197, 282, 7, 119, 19, 381, 152, 390, 26, 70, 4, 367, 37};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 29775;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> containers = {683, 551, 475, 744, 921, 445, 556, 880, 449, 973, 731, 455, 541, 539, 476, 713, 821, 985, 816, 681, 855, 710, 965, 535, 663, 537, 754, 493, 554, 875, 444, 774, 962, 455, 517, 882, 501, 610, 762, 550, 582, 428, 541, 659, 567, 617, 973, 924, 602, 788};
    vector<int> packages = {83, 196, 192, 7, 148, 132, 273, 77, 140, 189, 325, 137, 312, 15, 94, 263, 205, 293, 93, 185, 337, 229, 366, 63, 48, 20, 224, 285, 100, 399, 240};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27844;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> containers = {10, 10};
    vector<int> packages = {7, 3, 7, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> containers = {5, 6, 7};
    vector<int> packages = {5, 5, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> containers = {3, 4, 5, 6};
    vector<int> packages = {3, 3, 3, 3, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> containers = {10, 10, 10};
    vector<int> packages = {1, 1, 1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> containers = {2, 3, 5};
    vector<int> packages = {3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> containers = {100, 200, 300, 400};
    vector<int> packages = {1, 200, 251};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 548;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> containers = {12, 13, 12, 111, 111};
    vector<int> packages = {34, 34};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> containers = {1, 1, 1, 10};
    vector<int> packages = {4, 4};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> containers = {3, 3};
    vector<int> packages = {2};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> containers = {5, 3, 2};
    vector<int> packages = {2, 3, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> containers = {10, 10, 2};
    vector<int> packages = {1, 1, 8, 9};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
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
    vector<int> containers = {100, 100, 100};
    vector<int> packages = {1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> containers = {1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> packages = {999, 999, 999, 999, 999, 999, 999};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> containers = {5, 5, 5};
    vector<int> packages = {5, 5, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
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
    vector<int> containers = {10};
    vector<int> packages = {5, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> containers = {5};
    vector<int> packages = {2, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> containers = {10, 10};
    vector<int> packages = {1, 1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> containers = {20, 10, 10};
    vector<int> packages = {10, 10, 10};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> containers = {2};
    vector<int> packages = {1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> containers = {4, 5};
    vector<int> packages = {4, 2, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> containers = {100, 100, 100, 100, 100, 199};
    vector<int> packages = {1, 1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 697;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> containers = {4, 4, 4};
    vector<int> packages = {1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> containers = {2, 2};
    vector<int> packages = {1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> containers = {1, 1, 5, 5, 10};
    vector<int> packages = {5, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> containers = {2, 3, 5};
    vector<int> packages = {1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
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
    vector<int> containers = {10};
    vector<int> packages = {2, 3, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> containers = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> packages = {1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> containers = {50, 100};
    vector<int> packages = {10, 10, 10, 10, 10, 10};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> containers = {3, 4, 5};
    vector<int> packages = {4, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
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
    vector<int> containers = {10};
    vector<int> packages = {1, 1, 1};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> containers = {1, 1, 1, 15};
    vector<int> packages = {5, 5, 5};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> containers = {2, 2, 2, 2, 3};
    vector<int> packages = {3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> containers = {2, 3};
    vector<int> packages = {1, 1, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> containers = {3, 3, 3, 3};
    vector<int> packages = {2, 2};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> containers = {3, 5, 5};
    vector<int> packages = {5, 3};
    Containers* pObj = new Containers();
    clock_t start = clock();
    int result = pObj->wastedSpace(containers, packages);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22659060&rd=10786&pm=8186
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
 
 
#define forV(var, vec) for(int var=0;var<vec.size();var++)
 
 
using namespace std;
 
class Containers {
public:
  int wastedSpace(vector <int>, vector <int>);
};
 
int Containers::wastedSpace(vector <int> c, vector <int> p) {
  int s =0;
  forV(i,c){s += c[i];}
  forV(i,p){s -= p[i];}
  return s;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/