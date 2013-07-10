/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12296
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

class TomekPhone {
public:
    int minKeystrokes(vector<int> frequencies, vector<int> keySizes);
};

int TomekPhone::minKeystrokes(vector<int> frequencies, vector<int> keySizes) {
    int ret;
    return ret;
}


int test0() {
    vector<int> frequencies = {7, 3, 4, 1};
    vector<int> keySizes = {2, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> frequencies = {13, 7, 4, 20};
    vector<int> keySizes = {2, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> frequencies = {11, 23, 4, 50, 1000, 7, 18};
    vector<int> keySizes = {3, 1, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1164;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> frequencies = {100, 1000, 1, 10};
    vector<int> keySizes = {50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1234;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> frequencies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> keySizes = {10, 10, 10, 10, 10, 10, 10, 10};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3353;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> frequencies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> keySizes = {50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 22100;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> frequencies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> keySizes = {49};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> frequencies = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> keySizes = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 50000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> frequencies = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> keySizes = {50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1275000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> frequencies = {437, 481, 922, 614, 954, 437, 916, 627, 387, 746, 791, 644, 989, 477, 340, 405, 374, 712, 685, 418, 741, 946, 841, 866, 391, 731, 521, 677, 275, 283, 258, 997, 258, 182, 533, 323, 400, 140, 500, 422, 325, 588, 959, 596, 485};
    vector<int> keySizes = {44, 34, 1, 10, 26, 43, 45, 36, 12, 39, 20, 11, 23, 46, 32, 22, 29, 25, 29, 37, 17, 35, 15, 37, 6, 30, 22, 32, 13, 1, 4, 10, 18, 38, 35, 45, 48, 31, 24, 45, 30, 3, 9, 43, 29, 16};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25594;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> frequencies = {315, 946, 130, 958, 450, 987, 392, 714, 165, 115, 385, 689, 596, 37, 338, 183, 998, 428, 284, 668, 546, 187, 993, 112, 55, 780, 780, 882, 727, 863, 541, 381, 363, 154, 234, 502, 112, 439, 430, 867, 450, 467, 914, 632, 485, 948};
    vector<int> keySizes = {8, 9, 1, 7, 3, 3, 6, 9, 4, 6, 3, 7, 4, 2, 6, 6, 10, 1, 10, 9, 10, 9, 9, 2, 10, 6, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 27992;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> frequencies = {750, 302, 504, 130, 862, 492, 38, 584, 413, 335, 936, 100, 760, 218, 662, 217, 871, 324, 900, 582, 396, 406, 435, 747, 417, 590, 894, 799, 517, 816, 260, 409, 488, 813, 669, 642, 376, 279, 909, 550, 932, 901, 177, 363, 62, 936, 763, 9, 80};
    vector<int> keySizes = {32, 32, 41, 36};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 122120;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> frequencies = {890, 883, 1, 811, 507, 438, 364, 744};
    vector<int> keySizes = {2, 2, 3, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 5948;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> frequencies = {60, 862, 581, 606, 714, 465, 519, 869, 255, 379, 184, 873, 105, 5, 435, 45, 250, 306, 669, 352, 474, 421, 492, 529, 936, 649, 559, 284, 533, 581, 20, 337, 320, 90, 985, 716, 830, 651, 34, 691, 381, 539, 989, 296, 256, 151, 504};
    vector<int> keySizes = {19, 19, 32, 16, 14, 47, 25, 7, 32, 41, 49, 36, 34, 10, 8, 32, 24, 32, 45, 40, 2, 3, 37, 43, 7, 50, 44, 24, 33, 32, 2, 2, 7, 43, 9, 46, 5, 29, 19, 42, 25, 34, 25, 14, 39, 8};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 21787;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> frequencies = {636, 357, 825, 279, 890, 932, 461, 235, 402, 906, 171, 393, 236, 896, 712, 269, 953, 675, 818, 610, 761, 443, 96, 23, 880, 410, 302, 788, 973, 988, 893, 423, 61, 443, 829, 905, 956, 369, 299, 716, 70, 229, 690, 665, 603, 262, 96, 529};
    vector<int> keySizes = {1, 9, 7, 9, 6, 1, 6, 5, 8, 5, 3, 3, 9, 5, 3, 1, 10, 9, 10, 10, 4, 4, 10};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 34165;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> frequencies = {336, 15, 884, 582, 182, 170, 897, 22, 734, 527, 434, 434, 252, 656, 132, 40, 7, 946, 10, 794, 513, 316, 664, 56, 471, 767, 468, 45, 865, 281, 381, 355, 994, 41, 810, 469, 726, 966, 773, 102, 943, 801, 965, 593, 572, 907};
    vector<int> keySizes = {3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> frequencies = {479, 844, 209, 934, 100, 591, 162, 959, 856};
    vector<int> keySizes = {1, 5, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> frequencies = {57, 793, 138, 444, 840, 532, 991, 946, 743, 662, 72, 768, 953, 61, 843, 221, 830, 167, 885, 347, 471, 363, 826, 181, 729, 870, 894, 231, 875, 899, 930, 98, 212, 26, 696, 256, 175, 422, 55, 730, 392, 63, 790, 556, 953, 602};
    vector<int> keySizes = {20, 32, 46, 12, 12, 36, 11, 10, 19, 44, 14, 42, 26, 32, 44, 9, 2, 39, 19, 36, 42, 31, 34, 7, 32, 15, 39, 27, 15, 4, 43, 29, 46, 9, 11, 40, 12, 8, 34, 26, 33, 46, 43, 4, 30, 28, 37, 25};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24588;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> frequencies = {249, 357, 897, 254, 499, 397, 61, 871, 740, 456, 250, 254, 629, 186, 564, 555, 268, 89, 101, 505, 264, 902, 332, 719, 648, 567, 984, 19, 713, 434, 244, 898, 147, 991, 443, 451, 91, 927, 732, 402, 593, 587, 126, 904, 347, 79, 47, 741, 988, 197};
    vector<int> keySizes = {9, 4, 1, 8, 1, 6, 6, 1, 1, 6, 8, 3, 3, 1, 2, 8, 6, 6, 2, 9, 4, 10, 5, 1, 8, 4, 7, 10, 9, 2, 4, 7, 9, 6, 10, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25585;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> frequencies = {671, 721, 888, 433, 77, 547, 369, 715, 896, 338, 495, 997, 779, 560, 249, 104, 808, 78, 232, 141, 308, 622, 60, 796, 196, 470, 751, 547, 198, 567, 53, 42, 932, 189, 758, 50, 620, 674, 600, 819, 194, 353, 577, 490, 235, 281, 167, 336, 150};
    vector<int> keySizes = {36, 37, 16, 40};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 99088;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> frequencies = {857, 82, 565, 908, 474, 13, 965};
    vector<int> keySizes = {4, 2, 3, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 4433;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> frequencies = {221, 601, 186, 753, 83, 845, 191, 93, 228, 221, 238, 532, 575, 20, 895, 732, 581, 136, 823, 925, 498, 593, 814, 601, 276, 639, 894, 8, 225, 828, 836, 957, 90, 290, 133, 978, 232, 150, 861, 266, 585, 614, 557, 860, 858, 421, 35, 721, 109, 183};
    vector<int> keySizes = {42, 5, 25, 37, 41, 10, 19, 1, 31, 3, 42, 48, 48, 11, 35, 18, 18, 38, 48, 7, 6, 47, 12, 46, 38, 9, 17, 12, 28, 16, 2, 48, 42, 35, 39, 35, 32, 9, 1, 39, 49, 26, 21, 42, 3, 31};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24137;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> frequencies = {719, 916, 19, 347, 404, 419, 685, 179, 745, 691, 979, 783, 389, 566, 156, 545, 956, 41, 966, 706, 390, 401, 623, 752, 754, 667, 66, 398, 594, 46, 577, 286, 189, 128, 763, 575, 756, 591, 606, 719, 21, 125, 155, 929, 638, 184, 324, 806};
    vector<int> keySizes = {8, 2, 7, 1, 1, 4, 9, 4, 9, 8, 10, 2, 8, 6, 5, 2, 1, 8, 10, 3, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 33146;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> frequencies = {679, 165, 183, 386, 122, 126, 944, 102, 191, 1000, 710, 589, 239, 648, 18, 724, 302, 963, 461, 117, 155, 557, 397, 800, 135, 252, 599, 58, 427, 215, 660, 903, 27, 933, 546, 277, 301, 889, 540, 724, 314, 805, 544, 486, 980, 343};
    vector<int> keySizes = {46, 4, 42};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 137010;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> frequencies = {564, 326, 432, 231, 976, 604, 173, 815, 221, 679, 336, 501, 536, 380, 135, 875, 459, 708, 383, 769, 657, 195, 475, 650, 496, 751, 464, 557, 187, 879};
    vector<int> keySizes = {3, 3, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> frequencies = {850, 333, 237, 205, 707, 626, 916, 842, 226, 281, 233, 327, 991, 202, 151, 602, 668, 369, 692, 208, 66, 423, 976, 775, 205, 782, 365, 558, 123, 702, 637, 994, 452, 391, 881, 981, 145, 747, 102, 7, 304, 208, 808, 72, 389, 915, 206};
    vector<int> keySizes = {20, 24, 48, 44, 3, 39, 6, 47, 3, 10, 46, 42, 27, 13, 46, 23, 41, 26, 40, 2, 20, 14, 22, 36, 5, 29, 10, 5, 20, 27, 17, 2, 29, 42, 8, 45, 38, 27, 32, 27, 39, 39, 41, 8, 19, 29, 6, 23, 36};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 22880;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> frequencies = {748, 694, 264, 278, 993, 717, 149, 870, 355, 972, 246, 962, 239, 397, 706, 465, 880, 689, 355, 339, 20, 574, 416, 646, 301, 573, 752, 814, 781, 536, 128, 368, 414, 54, 467, 470, 918, 563, 519, 117, 316, 449, 816, 792, 24, 727, 40, 323, 468};
    vector<int> keySizes = {5, 2, 5, 5, 7, 3, 3, 7, 8, 10, 2, 3, 10, 2, 10, 2, 1, 5, 10, 3, 8, 1, 10, 7, 6, 7, 10, 1, 8, 2, 6, 8, 6, 4, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 27203;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> frequencies = {197, 349, 87, 922, 127, 928, 669, 55, 326, 254, 451, 877, 776, 857, 310, 925, 179, 918, 555, 16, 808, 264, 883, 303, 29, 856, 487, 194, 882, 399, 47, 308, 882, 802, 310, 627, 686, 340, 557, 457, 936, 34, 155, 643, 412, 839, 671, 115, 343};
    vector<int> keySizes = {16, 12};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> frequencies = {853, 13, 993, 782, 45, 149, 413, 99, 225, 484, 367, 648, 306, 728, 134, 150, 605, 854, 437, 782, 549, 135, 987, 735, 94, 644, 118};
    vector<int> keySizes = {4, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> frequencies = {835, 970, 994, 22, 333, 1000, 66, 495, 696, 291, 543, 427, 66, 564, 319, 824, 771, 784, 11, 617, 426, 232, 171, 465, 772, 644, 236, 574, 283, 404, 951, 863, 392, 417, 211, 10, 363, 245, 291, 621, 523, 466, 339, 912, 751, 941, 904, 680, 144, 859};
    vector<int> keySizes = {33, 32, 6, 6, 28, 4, 23, 31, 23, 36, 33, 8, 47, 13, 20, 12, 38, 32, 8, 32, 15, 41, 19, 4, 24, 37, 21, 15, 15, 18, 25, 32, 4, 13, 13, 47, 35, 14, 36, 40, 30, 50, 50, 8, 40};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25893;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> frequencies = {996, 687, 346, 560, 173, 402, 937, 828, 448, 449, 373, 33, 93, 917, 75, 239, 17, 390, 774, 312, 798, 239, 523, 361, 539, 218, 494, 983, 210, 678, 839, 581, 126, 931, 131, 877, 987, 465, 150, 923, 670, 719, 398, 369, 803, 978, 243, 642, 532, 458};
    vector<int> keySizes = {1, 9, 1, 3, 4, 4, 9, 6, 5, 1, 1, 3, 8, 7, 2, 4, 2, 8, 7, 9, 5, 7, 2, 7, 7, 8, 5, 4, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 30812;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> frequencies = {611, 383, 271, 958, 430, 886, 222, 266, 734, 541, 422, 104, 598, 171, 393, 537, 228, 451, 7, 20, 930, 700, 956, 677, 603, 232, 993, 538, 908, 461, 750, 699, 329, 887, 101, 593, 261, 404, 561, 836, 579, 950, 343, 431, 661, 187, 328, 735, 950};
    vector<int> keySizes = {15};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> frequencies = {736, 968, 459, 704, 639, 146, 356, 441, 876, 372, 865, 161, 117, 579, 514, 621, 176, 882};
    vector<int> keySizes = {1, 3, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> frequencies = {194, 17, 817, 994, 538, 178, 70, 998, 23, 486, 353, 425, 187, 832, 165, 794, 391, 346, 242, 614, 891, 989, 856, 112, 107, 509, 668, 113, 630, 438, 950, 112, 392, 464, 514, 113, 270, 243, 780, 37, 605, 862, 434, 534, 372, 741, 423, 989};
    vector<int> keySizes = {40, 3, 22, 25, 15, 6, 22, 7, 32, 34, 27, 8, 46, 19, 19, 28, 45, 49, 1, 48, 27, 12, 40, 38, 20, 48, 9, 19, 35, 3, 4, 20, 22, 45, 30, 3, 1, 25, 47, 38, 37, 33, 29, 21, 2, 37, 30, 47, 4, 50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 22812;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> frequencies = {778, 90, 290, 339, 172, 220, 824, 933, 817, 915, 706, 611, 648, 121, 131, 59, 207, 456, 451, 282, 720, 899, 148, 551, 545, 271, 436, 521, 134, 591, 990, 481, 444, 67, 406, 267, 363, 962, 867, 927, 577, 937, 38, 896, 54, 430, 97, 649, 907, 119};
    vector<int> keySizes = {10, 7, 3, 9, 9, 3, 3, 1, 6, 9, 5, 7, 9, 7, 4, 5, 4, 4, 6, 9, 9, 6, 9, 6, 2, 6, 5, 7, 10, 10, 3, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 27111;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> frequencies = {442, 944, 214, 222, 651, 758, 963, 52, 649, 918, 326, 590, 55, 395, 26, 654, 170, 882, 95, 724, 426, 628, 57, 375, 112, 425, 399, 113, 556, 65, 337, 718, 299, 162, 279, 210, 575, 659, 850, 616, 306, 720, 103, 961, 804};
    vector<int> keySizes = {45, 19, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 126591;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> frequencies = {425, 227, 891, 952, 340, 437, 869, 960, 974, 111, 337, 371, 621, 497, 967, 812, 291, 690, 92, 703, 884, 73, 343};
    vector<int> keySizes = {1, 5, 2, 3, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> frequencies = {872, 888, 200, 567, 529, 145, 56, 57, 341, 236, 993, 234, 618, 889, 731, 390, 818, 90, 546, 527, 191, 420, 586, 666, 269, 706, 532, 282, 734, 310, 351, 732, 734, 46, 820, 279, 243, 657, 911, 590, 198, 336, 150, 374, 842, 722, 943, 570, 678};
    vector<int> keySizes = {19, 26, 14, 47, 25, 27, 45, 22, 36, 46, 15, 32, 46, 15, 45, 1, 46, 2, 39, 46, 2, 9, 11, 4, 43, 18, 22, 20, 36, 19, 46, 22, 8, 6, 20, 11, 45, 38, 7, 26, 32, 16, 1, 30, 49, 40, 39, 21};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24645;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> frequencies = {625, 123, 706, 574, 10, 987, 605, 952, 380, 756, 844, 501, 155, 861, 138, 834, 369, 934, 225, 243, 417, 76, 50, 499, 729, 465, 361, 227, 919, 677, 168, 675, 880, 681, 473, 998, 535, 581, 361, 154, 146, 786, 615, 343, 212, 800, 617, 53, 962, 766};
    vector<int> keySizes = {10, 6, 5, 5, 6, 1, 1, 4, 1, 6, 9, 6, 1, 7, 8, 6, 5, 2, 2, 6, 7, 7, 6, 10, 5, 5, 6, 7, 10, 8, 7, 3, 10, 4, 7, 2, 2, 2, 9};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 27333;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> frequencies = {813, 808, 57, 567, 389, 481, 582, 508, 853, 915, 635, 504, 490, 416, 4, 131, 95, 194, 644, 623, 943, 639, 974, 34, 287, 18, 900, 275, 153, 313, 131, 822, 485, 322, 430, 752, 355, 223, 454, 815, 121, 179, 462, 803, 972, 668};
    vector<int> keySizes = {30, 6, 4, 17};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 110603;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> frequencies = {171, 126, 292, 583, 183, 871, 950, 604, 6, 805, 880, 645, 236, 538, 550, 985, 38, 458, 915, 755, 535, 120, 500, 764, 432, 670, 509};
    vector<int> keySizes = {2, 5, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> frequencies = {922, 934, 235, 185, 752, 14, 143, 268, 706, 207, 480, 187, 592, 446, 496, 663, 548, 795, 468, 713, 770, 837, 171, 250, 261, 610, 338, 532, 419, 255, 772, 443, 306, 328, 469, 790, 797, 359, 559, 726, 263, 390, 603, 739, 435, 439, 172, 143, 489};
    vector<int> keySizes = {17, 14, 14, 37, 3, 16, 13, 33, 15, 3, 32, 48, 11, 23, 11, 50, 26, 17, 40, 20, 28, 44, 45, 36, 43, 29, 42, 3, 40, 8, 14, 24, 43, 47, 44, 1, 43, 17, 25, 14, 16, 34, 38, 27, 44, 48, 9, 28};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 23433;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> frequencies = {418, 102, 569, 701, 226, 551, 562, 198, 849, 484, 264, 998, 733, 776, 136, 128, 272, 640, 229, 772, 943, 502, 138, 654, 119, 638, 781, 948, 612, 959, 207, 884, 593, 718, 69, 627, 198, 391, 320, 324, 456, 599, 303, 626, 365, 143, 42, 682, 873, 456};
    vector<int> keySizes = {10, 4, 3, 5, 9, 7, 10, 8, 2, 5, 9, 7, 7, 2, 7, 3, 5, 10, 8, 7, 7, 7, 1, 1, 9, 3, 4, 5, 9, 3, 6, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 28196;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> frequencies = {48, 291, 982, 521, 618, 750, 862, 861, 348, 839, 920, 567, 458, 242, 708, 696, 140, 521, 422, 196, 79, 442, 349, 770, 858, 162, 409, 942, 499, 387, 676, 310, 74, 667, 438, 680, 849, 394, 9, 868, 498, 520, 199, 424, 547, 989};
    vector<int> keySizes = {48, 9};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 254257;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> frequencies = {559, 813, 27, 92, 837, 988, 665, 373, 936, 858, 353, 495, 175, 9, 259, 53, 838, 596, 879, 357, 762, 698, 2, 412, 556, 770, 430};
    vector<int> keySizes = {5, 4, 1, 2, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> frequencies = {530, 625, 968, 639, 5, 691, 555, 214, 290, 780, 179, 585, 486, 822, 799, 670, 100, 575, 96, 407, 324, 408, 694, 765, 842, 768, 144, 517, 357, 355, 654, 899, 878, 112, 724, 629, 12, 264, 280, 509, 86, 958, 493, 666, 763, 871, 492, 647};
    vector<int> keySizes = {29, 47, 24, 8, 3, 50, 5, 37, 4, 46, 46, 2, 27, 44, 5, 24, 20, 32, 45, 34, 11, 15, 5, 20, 18, 39, 34, 26, 48, 50, 14, 49, 49, 42, 23, 29, 30, 10, 33, 49, 48, 4, 43, 13, 19, 42};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25144;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> frequencies = {457, 134, 234, 666, 886, 787, 36, 321, 779, 175, 886, 989, 566, 419, 439, 350, 627, 832, 202, 704, 424, 655, 79, 839, 338, 147, 627, 49, 192, 831, 797, 670, 663, 191, 200, 186, 992, 285, 503, 620, 992, 321, 420, 821, 606, 721, 708, 152, 220, 518};
    vector<int> keySizes = {1, 4, 1, 7, 4, 8, 2, 10, 1, 6, 3, 5, 4, 10, 10, 5, 7, 6, 7, 3, 2, 1, 10, 4, 7};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 32028;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> frequencies = {629, 295, 826, 507, 93, 427, 147, 484, 577, 64, 525, 251, 146, 308, 543, 635, 432, 708, 346, 565, 107, 509, 589, 600, 680, 554, 858, 942, 875, 608, 178, 110, 203, 983, 498, 196, 100, 602, 227, 826, 901, 884, 356, 774, 567, 926, 443};
    vector<int> keySizes = {5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> frequencies = {802, 649, 271, 291, 480, 776, 771, 135, 254, 735, 425, 976, 146, 906, 894, 740, 106, 513, 256, 975, 289, 751};
    vector<int> keySizes = {4, 5, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> frequencies = {873, 463, 115, 682, 126, 497, 751, 405, 551, 292, 176, 179, 245, 314, 71, 657, 764, 7, 186, 197, 320, 477, 898, 392, 508, 620, 367, 722, 905, 494, 641, 816, 668, 2, 527, 652, 914, 856, 928, 851, 591, 961, 827, 209, 786};
    vector<int> keySizes = {1, 14, 41, 4, 25, 21, 6, 13, 31, 28, 49, 50, 10, 31, 13, 42, 30, 9, 7, 20, 13, 40, 11, 11, 9, 33, 36, 18, 38, 42, 8, 17, 36, 50, 44, 49, 35, 29, 12, 41, 28, 50, 21, 23, 23, 19, 2, 34, 19};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 23483;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> frequencies = {386, 675, 577, 638, 415, 206, 569, 457, 19, 757, 187, 145, 145, 396, 950, 669, 987, 622, 828, 346, 148, 314, 682, 451, 869, 888, 665, 500, 992, 179, 449, 819, 78, 978, 902, 759, 682, 227, 328, 1, 912, 580, 884, 113, 598, 2, 56, 57, 320};
    vector<int> keySizes = {8, 9, 2, 6, 1, 9, 8, 6, 8, 5, 3, 8, 3, 2, 3, 10, 5, 1, 1, 6, 4, 4, 7, 8, 6, 5, 3, 4, 4, 9, 8, 10, 5, 1, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25970;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> frequencies = {415, 379, 881, 534, 121, 490, 112, 449, 207, 412, 876, 777, 625, 801, 994, 346, 576, 619, 546, 345, 855, 59, 329, 212, 547, 993, 451, 778, 786, 186, 728, 976, 365, 574, 905, 458, 301, 116, 41, 850, 123, 135, 346, 411, 122};
    vector<int> keySizes = {41};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> frequencies = {147, 304, 832, 143, 184, 760, 86, 924, 989, 876, 764, 901, 488, 92, 250, 240, 499, 692};
    vector<int> keySizes = {1, 1, 5, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> frequencies = {857, 332, 206, 121, 98, 744, 63, 643, 417, 30, 410, 907, 961, 653, 634, 430, 288, 415, 14, 93, 96, 448, 884, 677, 843, 851, 407, 824, 472, 213, 39, 324, 74, 798, 639, 33, 304, 545, 675, 244, 135, 586, 825, 678, 249, 713, 590, 117};
    vector<int> keySizes = {34, 24, 37, 21, 28, 15, 12, 33, 23, 8, 10, 49, 23, 21, 43, 20, 43, 15, 39, 12, 14, 11, 1, 16, 42, 9, 20, 34, 5, 24, 48, 42, 33, 1, 35, 21, 2, 24, 9, 50, 9, 14, 45, 37, 35};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 21676;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> frequencies = {897, 832, 709, 224, 697, 710, 647, 690, 265, 274, 134, 11, 948, 725, 181, 400, 455, 136, 969, 162, 882, 812, 947, 343, 500, 204, 182, 5, 405, 224, 752, 240, 344, 183, 333, 856, 594, 402, 731, 89, 127, 156, 408, 311, 443, 684};
    vector<int> keySizes = {10, 1, 4, 9, 9, 6, 10, 10, 4, 5, 5, 7, 8, 10, 6, 10, 3, 5, 8, 2, 1, 7, 8, 6, 2, 8, 7, 2, 10};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24020;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> frequencies = {440, 312, 594, 292, 593, 898, 300, 941, 62, 973, 294, 300, 823, 77, 973, 230, 226, 883, 4, 499, 415, 64, 362, 749, 976, 812, 359, 547, 826, 775, 683, 450, 947, 55, 79, 683, 409, 260, 629, 632, 668, 536, 14, 227, 905, 267};
    vector<int> keySizes = {37};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> frequencies = {548, 60, 253, 923, 45, 760, 357, 812, 730, 830, 805};
    vector<int> keySizes = {5, 2, 2, 3, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 8161;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> frequencies = {937, 140, 591, 747, 411, 403, 153, 402, 900, 873, 378, 820, 680, 339, 50, 963, 781, 764, 96, 529, 516, 137, 262, 814, 381, 524, 624, 680, 267, 668, 787, 579, 963, 977, 886, 941, 267, 694, 733, 403, 61, 467, 987, 650, 748, 967};
    vector<int> keySizes = {17, 32, 10, 17, 39, 15, 14, 2, 3, 35, 16, 45, 42, 10, 37, 45, 14, 10, 7, 25, 19, 14, 36, 14, 18, 39, 30, 49, 34, 26, 11, 28, 36, 45, 29, 19, 20, 7, 26, 42, 49, 42, 4, 5, 36, 26, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 26940;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> frequencies = {45, 637, 276, 927, 653, 623, 170, 952, 700, 802, 416, 352, 950, 446, 941, 553, 68, 676, 521, 22, 571, 66, 110, 783, 520, 710, 864, 586, 897, 721, 55, 624, 519, 988, 731, 817, 459, 103, 332, 132, 833, 695, 252, 225, 394, 310, 623};
    vector<int> keySizes = {10, 6, 7, 2, 4, 10, 5, 4, 10, 1, 8, 9, 2, 10, 6, 6, 3, 10, 2, 3, 7, 8, 9, 4, 2, 8};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29922;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> frequencies = {843, 724, 280, 327, 353, 621, 786, 9, 872, 782, 911, 569, 949, 478, 336, 269, 532, 337, 250, 341, 933, 424, 822, 700, 573, 658, 79, 660, 64, 153, 320, 127, 125, 275, 395, 464, 278, 368, 301, 10, 411, 9, 336, 557, 503, 696, 716, 802, 162};
    vector<int> keySizes = {36, 50, 47, 9};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 103999;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> frequencies = {812, 150, 429, 50, 576, 168};
    vector<int> keySizes = {5, 4, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2553;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> frequencies = {352, 672, 498, 822, 277, 66, 924, 226, 270, 818, 406, 141, 923, 673, 66, 226, 893, 483, 785, 976, 817, 591, 418, 545, 222, 435, 584, 158, 771, 545, 598, 284, 470, 496, 581, 389, 536, 627, 782, 407, 169, 719, 47, 451, 288};
    vector<int> keySizes = {50, 1, 47, 9, 25, 20, 23, 34, 17, 9, 8, 41, 10, 42, 1, 19, 44, 7, 16, 40, 43, 22, 6, 37, 14, 31, 40, 44, 50, 37, 33, 16, 49, 23, 25, 2, 8, 44, 50, 33, 45, 1, 49, 47, 33, 11, 45, 44};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 22427;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> frequencies = {347, 492, 121, 243, 672, 709, 769, 296, 147, 310, 660, 146, 357, 747, 200, 971, 865, 741, 60, 546, 525, 129, 135, 598, 836, 576, 901, 912, 349, 111, 193, 780, 442, 798, 864, 354, 766, 327, 516, 253, 92, 465, 820, 280, 645, 813, 950, 641, 251, 621};
    vector<int> keySizes = {6, 9, 7, 8, 4, 4, 9, 9, 3, 1, 6, 7, 5, 8, 6, 5, 9, 4, 10, 5, 6, 7, 5, 3, 4, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 31442;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> frequencies = {162, 728, 51, 145, 279, 471, 761, 636, 577, 833, 1000, 513, 146, 230, 661, 296, 143, 430, 308, 522, 508, 166, 359, 306, 346, 50, 499, 189, 291, 937, 224, 169, 745, 571, 569, 970, 260, 885, 351, 49, 862, 321, 723, 734, 43, 378, 364};
    vector<int> keySizes = {21, 50, 39, 25, 27};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 74513;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> frequencies = {940, 65, 846, 948, 719, 228, 183, 328, 157, 403, 217, 41, 931, 299, 521, 313, 83};
    vector<int> keySizes = {2, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> frequencies = {340, 32, 561, 316, 102, 102, 912, 905, 63, 726, 908, 759, 315, 239, 195, 885, 934, 630, 399, 903, 861, 284, 679, 92, 81, 620, 799, 929, 703, 948, 779, 153, 76, 34, 867, 622, 967, 510, 759, 195, 119, 215, 350, 65, 694, 264};
    vector<int> keySizes = {9, 33, 8, 30, 29, 8, 3, 48, 5, 31, 9, 26, 24, 21, 7, 20, 15, 17, 39, 14, 25, 19, 40, 45, 1, 46, 12, 21, 22, 49, 13, 8, 24, 31, 38, 14, 5, 3, 46, 10, 49, 13, 44, 42, 46, 20, 39, 37, 25};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 22891;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> frequencies = {426, 366, 861, 208, 95, 867, 354, 915, 420, 95, 812, 872, 657, 883, 503, 861, 393, 272, 927, 351, 936, 254, 45, 440, 41, 200, 793, 273, 597, 736, 698, 199, 783, 332, 707, 910, 957, 729, 754, 697, 258, 346, 944, 897, 321, 163, 535, 825, 37};
    vector<int> keySizes = {1, 1, 4, 1, 3, 4, 6, 2, 2, 6, 3, 5, 1, 8, 8, 3, 1, 3, 3, 9, 9, 3, 3, 5, 2, 5, 5, 7, 7, 8, 5, 6};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 30035;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> frequencies = {528, 759, 454, 208, 364, 784, 610, 576, 899, 484, 808, 836, 674, 979, 937, 983, 96, 811, 224, 755, 475, 98, 752, 466, 141, 212, 81, 452, 928, 935, 940, 728, 748, 638, 964, 765, 769, 650, 812, 190, 898, 554, 814, 827, 689, 153};
    vector<int> keySizes = {28, 21, 38};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 178192;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> frequencies = {300, 811, 436, 990, 21, 631, 443, 852, 568, 742, 286, 451, 470, 827, 897, 210, 308, 355, 248, 259, 643, 502, 896, 168, 238, 817, 566};
    vector<int> keySizes = {3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> frequencies = {133, 969, 765, 185, 40, 992, 686, 377, 265, 540, 64, 984, 150, 309, 231, 808, 64, 294, 755, 73, 595, 703, 315, 408, 147, 825, 133, 641, 601, 26, 715, 637, 212, 263, 238, 803, 562, 56, 574, 230, 821, 968, 664, 974, 913, 667, 115, 365, 841};
    vector<int> keySizes = {36, 1, 42, 33, 25, 49, 37, 50, 20, 38, 12, 4, 30, 3, 25, 5, 39, 37, 44, 6, 19, 25, 45, 30, 2, 28, 24, 7, 36, 12, 48, 14, 13, 27, 5, 4, 9, 20, 21, 24, 30, 11, 21, 12, 20, 39};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 23818;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> frequencies = {197, 998, 114, 469, 28, 281, 446, 24, 703, 690, 694, 429, 982, 111, 572, 641, 38, 281, 43, 379, 900, 249, 778, 376, 359, 400, 348, 573, 768, 428, 549, 97, 880, 964, 694, 46, 750, 424, 942, 433, 399, 796, 148, 649, 966, 976};
    vector<int> keySizes = {6, 5, 8, 3, 2, 9, 1, 5, 7, 3, 1, 9, 8, 4, 4, 10, 7, 3, 8, 6, 4, 1, 10, 5, 10, 10, 10, 1, 4, 10, 6, 3, 1, 10, 7, 7, 4, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 23513;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> frequencies = {576, 365, 87, 790, 867, 934, 113, 951, 885, 199, 479, 615, 526, 829, 504, 460, 906, 17, 883, 22, 103, 3, 162, 723, 132, 785, 10, 589, 444, 932, 973, 687, 763, 639, 614, 999, 767, 42, 50, 547, 208, 960, 518, 914, 911, 783, 881, 119};
    vector<int> keySizes = {19, 31};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 220701;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> frequencies = {269, 672, 417, 650, 529, 41, 640, 890, 352, 724, 27, 280, 707, 156, 784, 688};
    vector<int> keySizes = {3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> frequencies = {485, 79, 742, 330, 427, 797, 415, 385, 543, 95, 722, 121, 509, 576, 746, 706, 405, 703, 205, 387, 216, 546, 184, 711, 570, 498, 26, 417, 359, 33, 152, 983, 921, 919, 434, 829, 716, 738, 26, 956, 811, 511, 234, 164, 589, 282, 946, 956, 800, 486};
    vector<int> keySizes = {11, 31, 13, 45, 1, 39, 39, 35, 19, 6, 32, 7, 31, 32, 44, 19, 2, 34, 9, 23, 3, 46, 44, 4, 32, 43, 19, 6, 12, 28, 45, 36, 9, 12, 42, 25, 6, 47, 32, 25, 23, 46, 35, 28, 32};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25650;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> frequencies = {22, 9, 197, 912, 800, 951, 516, 595, 497, 803, 880, 163, 29, 931, 482, 156, 492, 422, 588, 136, 301, 896, 654, 518, 857, 781, 323, 957, 521, 741, 531, 927, 702, 385, 325, 934, 27, 492, 33, 791, 565, 404, 247, 919, 427, 165, 553, 494, 231, 189};
    vector<int> keySizes = {7, 8, 10, 2, 4, 10, 6, 9, 8, 5, 6, 9, 2, 5, 5, 1, 9, 10, 2, 7, 8, 5, 6, 5, 8, 3, 6, 5, 3, 4, 9, 6, 5, 6, 8, 2, 6};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 27075;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> frequencies = {208, 288, 932, 934, 388, 752, 681, 203, 335, 725, 203, 127, 924, 670, 53, 435, 367, 619, 366, 334, 228, 463, 87, 5, 845, 978, 23, 300, 429, 870, 855, 689, 490, 429, 321, 105, 840, 136, 940, 191, 925, 900, 109, 676, 112, 136, 737, 48, 430};
    vector<int> keySizes = {48};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> frequencies = {286, 962, 73, 286, 911};
    vector<int> keySizes = {4, 3, 3, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 2591;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> frequencies = {585, 1000, 91, 355, 930, 48, 341, 784, 500, 908, 894, 291, 779, 865, 745, 535, 217, 983, 477, 103, 747, 738, 678, 184, 29, 11, 487, 986, 847, 945, 461, 549, 641, 280, 497, 324, 425, 683, 263, 521, 264, 296, 265, 790, 423, 341, 240};
    vector<int> keySizes = {23, 48, 20, 22, 9, 24, 39, 15, 47, 6, 26, 20, 26, 30, 4, 36, 21, 13, 24, 24, 28, 6, 37, 20, 14, 39, 42, 9, 19, 43, 8, 29, 36, 29, 20, 35, 19, 44, 23, 42, 5, 31, 16, 48, 13, 30, 19, 24, 35, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24346;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> frequencies = {576, 51, 550, 110, 175, 616, 369, 98, 58, 622, 296, 543, 874, 973, 470, 925, 31, 122, 935, 804, 244, 891, 289, 528, 441, 707, 782, 96, 157, 119, 753, 492, 953, 129, 507, 927, 584, 509, 778, 736, 540, 475, 751, 414, 592, 624, 569, 713};
    vector<int> keySizes = {2, 5, 7, 1, 3, 4, 1, 5, 7, 4, 10, 8, 4, 7, 2, 10, 8, 3, 2, 10, 5, 4, 4, 4, 7, 3, 8, 6, 1, 5, 1, 7, 8};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 26842;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> frequencies = {336, 830, 336, 673, 349, 460, 394, 774, 358, 408, 315, 336, 831, 316, 514, 223, 276, 289, 785, 586, 73, 224, 97, 471, 270, 353, 441, 300, 571, 829, 474, 639, 732, 175, 898, 947, 629, 923, 485, 122, 706, 108, 866, 540, 639, 533, 243, 685, 131};
    vector<int> keySizes = {12, 50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 249908;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> frequencies = {848, 637, 962, 576, 424};
    vector<int> keySizes = {3, 2, 4, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3871;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> frequencies = {922, 328, 767, 525, 879, 873, 244, 954, 135, 972, 687, 837, 334, 824, 470, 451, 885, 771, 726, 646, 421, 954, 837, 550, 591, 330, 495, 296, 158, 757, 544, 484, 643, 801, 887, 575, 895, 180, 960, 524, 451, 241, 434, 172, 640, 814, 673};
    vector<int> keySizes = {21, 40, 34, 9, 47, 18, 9, 1, 24, 17, 30, 39, 1, 36, 25, 37, 38, 8, 32, 25, 46, 24, 34, 27, 22, 7, 15, 45, 27, 16, 45, 47, 25, 5, 46, 33, 47, 21, 39, 45, 39, 10, 4, 45, 6, 21, 33, 14};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 28537;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> frequencies = {278, 124, 223, 275, 773, 705, 991, 484, 774, 834, 684, 881, 765, 931, 53, 412, 506, 817, 741, 316, 966, 531, 492, 113, 642, 511, 54, 572, 660, 79, 896, 183, 940, 479, 505, 278, 879, 639, 693, 478, 187, 488, 493, 920, 799};
    vector<int> keySizes = {2, 4, 10, 8, 5, 7, 7, 4, 4, 9, 4, 6, 4, 7, 2, 4, 5, 9, 2, 2, 3, 6, 5, 10, 6, 5, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 30040;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> frequencies = {965, 424, 204, 363, 592, 426, 694, 712, 29, 960, 429, 362, 374, 606, 857, 371, 133, 445, 905, 938, 385, 457, 638, 445, 842, 549, 424, 800, 251, 150, 440, 861, 55, 964, 716, 326, 377, 467, 918, 367, 228, 394, 252, 53, 848, 297, 908};
    vector<int> keySizes = {50, 28};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 211439;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> frequencies = {178, 36, 913, 485, 1, 679, 432, 627, 528, 689, 914, 426, 110, 237, 580, 525, 664, 605, 664, 729, 907, 106};
    vector<int> keySizes = {2, 4, 3, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> frequencies = {450, 471, 496, 289, 966, 338, 264, 361, 2, 703, 80, 591, 394, 900, 723, 66, 1, 931, 52, 466, 871, 456, 424, 323, 991, 175, 701, 505, 940, 273, 734, 524, 256, 100, 869, 576, 676, 968, 120, 182, 867, 765, 810, 655, 117, 728, 32};
    vector<int> keySizes = {37, 15, 31, 31, 43, 7, 10, 23, 7, 12, 43, 20, 6, 8, 4, 29, 22, 28, 47, 24, 17, 2, 11, 38, 37, 47, 45, 24, 8, 27, 29, 8, 11, 13, 15, 15, 38, 43, 4, 18, 5, 10, 38, 9, 30, 13};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 23183;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> frequencies = {860, 641, 350, 651, 721, 260, 470, 517, 336, 490, 485, 694, 440, 647, 509, 325, 641, 630, 786, 964, 31, 152, 786, 121, 72, 250, 755, 402, 32, 569, 576, 700, 486, 702, 245, 422, 915, 986, 865, 734, 993, 315, 839, 677, 603, 212, 124, 69};
    vector<int> keySizes = {6, 9, 2, 10, 1, 6, 8, 10, 7, 2, 6, 10, 3, 1, 4, 5, 5, 4, 5, 9, 8, 2, 8, 9, 10, 5, 4, 3, 1, 5, 1, 1, 8, 1, 6, 2, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 26618;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> frequencies = {545, 904, 425, 80, 607, 264, 299, 872, 115, 889, 669, 64, 358, 768, 705, 482, 224, 386, 35, 755, 30, 487, 761, 529, 510, 39, 879, 184, 788, 656, 496, 443, 428, 793, 370, 263, 892, 49, 442, 670, 905, 241, 670, 22, 675, 230, 10, 185};
    vector<int> keySizes = {24};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> frequencies = {456, 353, 754, 302, 674, 283, 970, 837, 249, 739, 20, 60, 789, 47, 797, 6, 688, 524, 926, 991};
    vector<int> keySizes = {2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> frequencies = {670, 455, 404, 407, 273, 313, 191, 778, 263, 344, 864, 782, 768, 673, 10, 718, 199, 584, 949, 983, 326, 30, 892, 470, 397, 615, 472, 937, 498, 889, 116, 358, 512, 945, 57, 584, 503, 667, 788, 945, 492, 574, 702, 291, 593};
    vector<int> keySizes = {28, 44, 45, 6, 5, 35, 23, 43, 35, 26, 2, 35, 1, 46, 14, 27, 25, 43, 10, 24, 41, 27, 9, 18, 11, 30, 43, 12, 32, 16, 34, 28, 8, 14, 33, 3, 28, 26, 4, 7, 11, 25, 38, 50, 49, 25};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24281;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> frequencies = {821, 491, 618, 750, 430, 213, 506, 829, 310, 771, 148, 127, 707, 984, 311, 40, 295, 129, 986, 155, 339, 353, 314, 347, 447, 670, 57, 591, 153, 397, 621, 527, 998, 370, 534, 677, 310, 421, 302, 983, 484, 440, 210, 61, 487, 604, 450, 304};
    vector<int> keySizes = {2, 9, 4, 2, 4, 8, 7, 10, 4, 5, 9, 10, 3, 3, 8, 9, 1, 10, 1, 4, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 30375;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> frequencies = {822, 233, 711, 569, 144, 284, 892, 947, 977, 263, 338, 546, 468, 886, 114, 833, 798, 741, 253, 89, 903, 822, 367, 284, 961, 853, 655, 255, 189, 420, 559, 943, 272, 70, 850, 355, 515, 831, 780, 721, 2, 863, 630, 187, 777, 448};
    vector<int> keySizes = {15};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> frequencies = {891, 177, 722, 384, 588, 345, 317, 781, 771, 64, 67, 370, 977, 906, 541, 656, 354, 859, 172, 219, 657};
    vector<int> keySizes = {5, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> frequencies = {939, 227, 852, 236, 525, 912, 96, 418, 59, 634, 127, 727, 852, 697, 254, 646, 563, 642, 939, 994, 85, 256, 97, 769, 523, 923, 279, 408, 729, 753, 211, 76, 559, 94, 231, 445, 966, 586, 474, 836, 389, 676, 583, 479, 815, 943, 542, 638, 132};
    vector<int> keySizes = {15, 49, 34, 17, 23, 20, 27, 45, 20, 4, 7, 3, 30, 46, 9, 47, 20, 25, 31, 13, 16, 11, 44, 3, 18, 40, 32, 14, 13, 13, 3, 5, 34, 29, 4, 11, 42, 13, 10, 45, 2, 42, 2, 42, 48, 31, 48, 38, 41};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25836;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> frequencies = {680, 38, 2, 27, 213, 554, 696, 963, 162, 48, 312, 521, 791, 548, 227, 853, 439, 422, 854, 547, 139, 22, 375, 367, 74, 901, 214, 211, 252, 541, 78, 432, 691, 872, 859, 791, 888, 102, 658, 16, 950, 332, 434, 620, 195, 5, 337, 241, 753};
    vector<int> keySizes = {7, 5, 6, 4, 7, 5, 6, 7, 9, 2, 4, 9, 2, 10, 1, 1, 3, 8, 5, 10, 10, 2, 7, 7, 4, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 24861;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> frequencies = {484, 686, 592, 975, 857, 651, 47, 818, 890, 191, 585, 685, 447, 162, 431, 135, 387, 595, 316, 756, 240, 595, 329, 271, 658, 960, 875, 621, 366, 499, 568, 590, 499, 574, 767, 557, 604, 990, 530, 252, 642, 881, 423, 327, 942};
    vector<int> keySizes = {12, 19, 11, 33, 24};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 98961;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> frequencies = {552, 955, 443, 113, 18, 460, 3, 936, 904, 613, 99, 826, 78, 749, 612, 808, 880};
    vector<int> keySizes = {5, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> frequencies = {184, 574, 972, 690, 464, 681, 764, 30, 401, 939, 669, 572, 156, 611, 500, 131, 705, 561, 980, 386, 530, 52, 853, 151, 212, 280, 1000, 316, 32, 180, 966, 851, 378, 986, 701, 384, 802, 946, 781, 747, 164, 449, 545, 863, 204, 841, 705, 818, 151, 193};
    vector<int> keySizes = {17, 17, 43, 13, 4, 29, 25, 22, 5, 22, 42, 30, 22, 14, 24, 7, 29, 3, 29, 38, 12, 19, 45, 45, 28, 25, 40, 34, 43, 46, 33, 6, 23, 9, 41, 36, 37, 10, 13, 23, 20, 29, 28, 17, 46, 30, 2, 30};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 27113;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> frequencies = {907, 522, 918, 709, 599, 818, 952, 31, 543, 492, 406, 520, 839, 749, 49, 672, 271, 942, 656, 823, 505, 937, 978, 332, 722, 974, 290, 867, 940, 627, 653, 475, 423, 867, 335, 64, 560, 648, 685, 338, 649, 201, 338, 773, 532, 652, 455, 588};
    vector<int> keySizes = {7, 8, 8, 6, 8, 5, 5, 6, 9, 2, 2, 4, 2, 2, 3, 5, 10, 4, 5, 4, 6, 8, 6, 4, 3, 5, 2, 8, 3, 1, 2, 5, 6, 5, 3, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 31904;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> frequencies = {741, 888, 581, 701, 103, 351, 926, 465, 940, 184, 399, 11, 589, 266, 65, 863, 435, 953, 856, 10, 78, 177, 204, 924, 802, 765, 685, 534, 25, 9, 206, 843, 998, 228, 577, 55, 775, 455, 647, 500, 797, 359, 877, 639, 111, 206, 725};
    vector<int> keySizes = {14, 14, 42, 47, 27};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 82533;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> frequencies = {798, 565, 798, 812, 100, 757, 588, 280, 355, 895, 40, 711, 690, 480, 572, 946, 213, 473};
    vector<int> keySizes = {3, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> frequencies = {256, 505, 395, 785, 267, 448, 378, 188, 306, 536, 566, 361, 538, 19, 988, 984, 154, 646, 599, 269, 643, 254, 581, 939, 127, 648, 635, 29, 751, 609, 608, 71, 99, 218, 53, 883, 370, 33, 457, 190, 51, 871, 501, 605, 355, 575, 680, 262, 328, 335};
    vector<int> keySizes = {46, 10, 33, 12, 40, 5, 4, 2, 17, 32, 29, 7, 26, 31, 5, 29, 39, 50, 11, 4, 12, 19, 32, 24, 47, 43, 11, 5, 29, 36, 43, 28, 30, 17, 34, 13, 16, 43, 27, 21, 12, 35, 4, 2, 45, 3, 24, 40};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 21997;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> frequencies = {568, 492, 741, 758, 673, 323, 679, 469, 374, 969, 932, 784, 172, 715, 993, 524, 279, 566, 35, 323, 660, 431, 544, 121, 45, 487, 804, 698, 195, 8, 116, 756, 60, 968, 265, 66, 846, 612, 808, 723, 93, 222, 265, 271, 966, 921, 240, 7, 880};
    vector<int> keySizes = {10, 5, 2, 5, 2, 4, 6, 3, 4, 3, 4, 7, 2, 4, 10, 7, 3, 3, 9, 3, 9, 3, 6, 2, 1, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29314;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> frequencies = {597, 1000, 401, 128, 803, 796, 441, 645, 947, 119, 319, 233, 54, 699, 571, 922, 12, 344, 106, 412, 947, 453, 541, 429, 799, 446, 414, 27, 465, 613, 483, 488, 338, 330, 571, 300, 17, 708, 759, 22, 85, 189, 112, 591, 975, 492, 888, 18, 649, 675};
    vector<int> keySizes = {12};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> frequencies = {994, 557, 578, 81, 139, 46, 145, 667, 463, 172, 455, 250, 346, 337, 845, 92, 605, 815, 727, 650, 775, 54, 919, 702, 831, 385};
    vector<int> keySizes = {1, 5, 2, 3, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> frequencies = {286, 749, 678, 204, 118, 411, 747, 887, 130, 946, 712, 282, 719, 506, 621, 946, 916, 432, 435, 370, 147, 886, 39, 197, 666, 809, 734, 945, 637, 390, 118, 726, 797, 305, 182, 276, 728, 153, 316, 544, 390, 222, 820, 277, 189};
    vector<int> keySizes = {37, 2, 48, 46, 39, 18, 7, 23, 5, 45, 23, 43, 28, 11, 48, 38, 42, 26, 47, 5, 6, 37, 18, 26, 31, 30, 34, 49, 15, 2, 2, 23, 38, 8, 21, 11, 5, 2, 28, 50, 49, 21, 43, 30, 23, 27, 45, 21, 44};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 22588;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> frequencies = {514, 735, 544, 735, 385, 17, 417, 311, 319, 643, 380, 784, 434, 825, 738, 20, 22, 382, 446, 261, 535, 671, 883, 589, 106, 287, 547, 706, 800, 23, 69, 887, 806, 197, 515, 183, 442, 645, 644, 708, 914, 459, 581, 790, 370, 264, 988, 938};
    vector<int> keySizes = {3, 1, 4, 6, 1, 7, 3, 2, 5, 2, 7, 10, 4, 7, 1, 3, 8, 9, 6, 4, 10, 6, 1, 7, 9, 2, 8, 9, 7, 9, 3, 1, 4, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 26908;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> frequencies = {353, 844, 814, 878, 565, 64, 520, 870, 595, 674, 189, 659, 351, 662, 239, 616, 147, 950, 592, 249, 733, 147, 147, 588, 221, 117, 834, 838, 25, 507, 206, 587, 146, 64, 382, 449, 962, 509, 975, 434, 177, 620, 94, 435, 569, 918, 317, 238, 864, 129};
    vector<int> keySizes = {35, 49, 28, 33};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 111474;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> frequencies = {770, 114, 286, 615, 276, 411, 89, 815, 498, 566, 801, 72, 227, 859, 35, 115, 602, 474, 560, 617, 228, 200, 981, 176, 878, 877, 841, 943, 817, 439};
    vector<int> keySizes = {4, 5, 3, 5};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> frequencies = {7, 3, 4, 1};
    vector<int> keySizes = {2, 2};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> frequencies = {13, 7, 4, 20};
    vector<int> keySizes = {2, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> frequencies = {11, 23, 4, 50, 1000, 7, 18};
    vector<int> keySizes = {3, 1, 4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1164;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> frequencies = {999, 999, 999, 999, 999, 999, 566, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 545, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    vector<int> keySizes = {1, 1, 1, 1, 1, 1, 1, 50, 2, 2, 2, 2, 2, 2, 50, 50, 49, 49, 1, 1, 1, 50, 50, 50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 52754;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> frequencies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> keySizes = {10, 10, 10, 10, 10, 10, 10, 10};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3353;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> frequencies = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> keySizes = {1, 2, 2, 2, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> frequencies = {1, 1, 1};
    vector<int> keySizes = {1, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> frequencies = {9, 8, 7, 6, 5, 4, 3, 2, 1, 9, 8, 7, 6, 5, 4, 3, 2, 1, 9, 8, 7, 6, 5, 4, 3, 2, 1, 23, 31};
    vector<int> keySizes = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> frequencies = {4, 3, 2, 1};
    vector<int> keySizes = {1, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> frequencies = {1, 2, 3, 4, 5, 6, 7};
    vector<int> keySizes = {3, 3, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> frequencies = {100, 1000, 1, 10};
    vector<int> keySizes = {50};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1234;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> frequencies = {5, 9, 2};
    vector<int> keySizes = {2, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> frequencies = {7, 3, 4, 1};
    vector<int> keySizes = {3, 1};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> frequencies = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    vector<int> keySizes = {2, 2, 2, 20};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> frequencies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> keySizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 50, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1501;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> frequencies = {1000};
    vector<int> keySizes = {4};
    TomekPhone* pObj = new TomekPhone();
    clock_t start = clock();
    int result = pObj->minKeystrokes(frequencies, keySizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22709180&rd=15182&pm=12296
********************************************************************************
#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <string>
#include <map>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <bitset>
#include <queue>
#include <sstream>
 
using namespace std;
 
#define mp make_pair
#define pb push_back
#define rep(i,n) for(int i = 0; i < n; i++)
#define re return
#define fi first
#define se second
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define y0 y3487465
#define y1 y8687969
 
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<string> vs;
typedef vector<vi> vvi;
 
template<class T> T abs(T x) {
  re x > 0 ? x : -x;
}
 
class TomekPhone {
public:
  int minKeystrokes(vector <int>, vector <int>);
};
 
int TomekPhone::minKeystrokes(vector <int> x, vector <int> y) {
  vi w;
  for (int i = 0; i < sz (y); i++)
    for (int j = 0; j < y[i]; j++)
      w.pb (j + 1);
  sort (all (w));
  sort (all (x));  
  reverse (all (x));
  if (sz (x) > sz (w)) re -1;
  int ans = 0;
  for (int i = 0; i < sz (x); i++) ans += x[i] * w[i];
  re ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/