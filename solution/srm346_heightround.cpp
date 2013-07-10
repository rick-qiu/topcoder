/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7682
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

class HeightRound {
public:
    vector<int> getBestRound(vector<int> heights);
};

vector<int> HeightRound::getBestRound(vector<int> heights) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> heights = {1, 2, 3, 4};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heights = {1000, 500, 1};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 500, 1000};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> heights = {1, 3, 4, 5, 7};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5, 7, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> heights = {1000, 456, 65, 24, 62, 523, 45, 234, 653, 453, 523, 51, 5, 134, 13, 453, 45, 354, 134, 312, 523, 923, 452, 345, 845, 234, 523, 523, 45, 235, 234, 523, 452, 345, 9, 75, 4, 345, 31, 123, 54, 5, 54, 54, 543, 25, 45, 4, 999, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 5, 5, 9, 13, 24, 25, 31, 45, 45, 45, 45, 51, 54, 54, 54, 62, 65, 75, 123, 134, 134, 234, 234, 234, 312, 345, 345, 345, 354, 452, 452, 453, 453, 456, 523, 523, 523, 523, 523, 543, 845, 999, 1000, 1000, 923, 653, 523, 235};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heights = {900, 1000, 5, 900};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 900, 1000, 900};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 6, 8, 10, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heights = {1, 3, 5, 4, 3};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 3};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> heights = {7, 43, 3, 6, 32, 2, 42, 23, 1, 30};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 6, 7, 30, 32, 42, 43, 23};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heights = {136, 369, 386, 461, 524, 582, 730, 817, 877, 884};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {136, 369, 461, 524, 730, 877, 884, 817, 582, 386};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> heights = {5, 6, 7, 7};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 7, 7};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heights = {1, 3, 7, 8};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 8, 7};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> heights = {11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 17, 16, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 25, 26};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heights = {1000, 1000, 1, 1, 1000, 1, 1, 1000, 1000, 1};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1000, 1000, 1000, 1000, 1000};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heights = {127, 139, 360, 952, 602, 389, 19, 636, 767, 985, 257, 238, 559, 650, 980, 131, 973, 593, 177, 120, 49, 97, 266, 43, 411, 679, 221, 978, 72, 172, 159, 10, 577, 204, 301, 386, 816, 829, 675, 216, 102, 287, 245, 154, 259, 262, 887, 791, 168, 252};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 19, 43, 49, 72, 97, 102, 120, 127, 131, 139, 154, 159, 168, 172, 204, 216, 221, 238, 245, 252, 257, 259, 262, 266, 287, 360, 386, 389, 559, 593, 602, 636, 650, 675, 767, 791, 816, 887, 952, 973, 978, 980, 985, 829, 679, 577, 411, 301, 177};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heights = {589, 564, 999, 993, 48, 539, 574, 702, 458, 611, 855, 981, 981, 245, 393, 846, 405, 734, 322, 590, 52, 748, 899, 833, 314, 500, 351, 491, 980, 584, 244, 750, 472, 324, 446, 456, 398};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 52, 245, 314, 322, 324, 351, 393, 398, 446, 456, 458, 472, 491, 500, 539, 564, 574, 584, 589, 611, 702, 734, 748, 833, 846, 855, 980, 981, 981, 993, 999, 899, 750, 590, 405, 244};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> heights = {424, 238, 893, 949, 189, 639, 451, 373, 174, 570, 48, 963, 586, 378, 205, 564, 802, 747, 108, 817, 152, 909, 353, 119, 178, 906, 670, 583, 650, 629, 109, 436, 735, 116, 821, 354, 147, 880, 633, 198, 750, 489, 432, 565, 547, 668, 412};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 108, 109, 116, 119, 147, 152, 174, 178, 198, 205, 353, 354, 373, 412, 424, 432, 436, 451, 547, 564, 565, 570, 583, 586, 629, 639, 650, 668, 670, 735, 747, 802, 817, 821, 880, 906, 909, 949, 963, 893, 750, 633, 489, 378, 238, 189};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> heights = {688, 512, 187, 997, 199, 619, 294, 360, 918, 245, 830, 296, 682, 155, 570, 142, 653, 430, 825, 531, 280, 114, 125, 400, 415, 911, 997, 532, 192, 745, 468, 609, 109, 875, 186, 895, 112, 596, 42, 566, 820, 387, 200, 458, 269, 248, 988, 289, 738};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 109, 112, 114, 142, 155, 186, 187, 192, 199, 245, 248, 269, 280, 294, 296, 387, 400, 415, 458, 468, 531, 532, 566, 570, 609, 619, 653, 688, 738, 820, 825, 875, 895, 911, 988, 997, 997, 918, 830, 745, 682, 596, 512, 430, 360, 289, 200, 125};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heights = {853, 747, 880, 639, 109, 596, 396, 405, 801, 657, 720, 768, 463, 72, 674, 807, 700, 330, 940, 242, 917, 449, 513, 912, 774, 224, 989, 143, 10, 301};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 72, 109, 224, 301, 396, 405, 449, 513, 639, 657, 674, 700, 747, 768, 774, 801, 807, 880, 912, 917, 989, 940, 853, 720, 596, 463, 330, 242, 143};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heights = {902, 177, 898, 794, 741, 384, 47, 160, 375, 15, 833, 995, 637, 729, 521, 128, 103, 567, 575, 229, 146, 867, 7, 742, 209, 774, 199, 175, 464, 972, 308, 976, 457, 250, 301};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 15, 47, 103, 128, 146, 175, 177, 199, 209, 229, 250, 301, 375, 384, 464, 521, 567, 637, 741, 742, 774, 794, 833, 898, 902, 972, 976, 995, 867, 729, 575, 457, 308, 160};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> heights = {744, 222, 294, 716, 701, 690, 349, 450, 669, 152, 502, 27, 576, 795, 328, 228, 286, 507, 550, 801, 590, 163, 516, 933, 376, 331, 538, 865, 655, 623, 329, 277, 191, 243, 134, 456, 73, 799, 764, 364, 421, 138, 842, 882, 513, 511, 636, 355, 860, 51};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 51, 134, 138, 163, 191, 222, 243, 277, 286, 328, 329, 331, 349, 355, 364, 421, 450, 502, 507, 511, 513, 516, 550, 576, 623, 636, 655, 690, 701, 716, 764, 795, 799, 842, 860, 865, 933, 882, 801, 744, 669, 590, 538, 456, 376, 294, 228, 152, 73};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> heights = {924, 638, 121, 339, 181, 869, 731, 444, 681, 975, 544, 847, 176, 354, 597, 186, 783, 797, 328, 866, 431, 754, 552, 480, 503, 634, 660, 372, 208, 376, 760, 485};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {121, 176, 181, 186, 328, 354, 372, 376, 431, 444, 485, 503, 544, 552, 634, 638, 660, 681, 754, 760, 783, 797, 847, 866, 924, 975, 869, 731, 597, 480, 339, 208};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> heights = {285, 694, 957, 900, 786, 282, 837, 499, 883, 816, 512, 104, 652, 234, 591, 978, 401, 573, 992, 29, 15, 219, 803, 476, 923, 674, 116, 80, 549, 799, 596, 79, 438, 855, 833, 742, 545, 440, 43, 342, 771, 126, 331, 240, 844};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 29, 43, 79, 80, 104, 126, 234, 240, 282, 331, 401, 438, 476, 499, 512, 549, 573, 591, 596, 674, 694, 771, 786, 799, 803, 816, 833, 837, 855, 883, 900, 957, 978, 992, 923, 844, 742, 652, 545, 440, 342, 285, 219, 116};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> heights = {639, 894, 120, 872, 55, 479, 218, 75, 367, 487, 386, 250, 54, 262, 261, 685, 975, 681, 352, 274, 224, 780, 336, 148, 926, 324, 734, 458, 274, 339, 616, 997, 767, 586, 170, 422, 772, 428, 666, 600, 541, 538, 834, 266, 350, 815, 511, 499, 885};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54, 55, 75, 148, 218, 224, 261, 262, 266, 274, 274, 336, 339, 350, 352, 367, 422, 428, 479, 487, 499, 511, 541, 586, 600, 639, 666, 681, 734, 772, 780, 815, 872, 885, 926, 997, 975, 894, 834, 767, 685, 616, 538, 458, 386, 324, 250, 170, 120};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> heights = {780, 211, 8, 930, 151, 814, 776, 607, 698, 327, 977, 343, 47, 676, 620, 101, 190, 620, 734, 158, 409, 860, 322, 144, 194, 229, 758, 207, 957, 638, 982, 958, 487, 848, 239, 298, 9, 202, 758, 634, 932, 194, 194, 991, 244, 50};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9, 47, 50, 101, 144, 151, 158, 190, 194, 194, 194, 207, 211, 229, 239, 244, 298, 322, 327, 409, 607, 620, 620, 634, 638, 698, 734, 758, 758, 776, 780, 814, 848, 930, 932, 957, 958, 977, 982, 991, 860, 676, 487, 343, 202};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> heights = {40, 105, 18, 787, 373, 606};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 40, 105, 606, 787, 373};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> heights = {468, 63, 882, 696, 546, 677, 97, 344, 56, 6, 964, 358, 165, 105, 22, 917, 131, 29, 992, 546, 561, 302, 420, 828, 312, 956, 978, 54, 169, 467, 851, 317, 947, 801, 104, 123, 356, 85, 261, 340, 427, 233, 101, 897, 726, 558, 423, 172, 919, 983};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 22, 29, 54, 56, 63, 85, 97, 101, 104, 105, 123, 165, 169, 172, 233, 302, 312, 317, 340, 344, 356, 420, 423, 427, 467, 546, 546, 558, 677, 726, 801, 851, 882, 897, 917, 919, 947, 964, 978, 983, 992, 956, 828, 696, 561, 468, 358, 261, 131};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> heights = {363, 8, 197, 997, 989, 137, 82, 87, 948, 152, 947, 4, 114, 116, 224, 188, 985, 353, 960, 981, 943, 126, 107, 160, 360, 338, 299, 183, 300, 1000, 993, 128, 322, 130, 248, 44, 2, 996, 962, 368, 235, 116, 982, 940, 303, 998, 989, 967, 984, 953};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 44, 82, 87, 107, 114, 116, 116, 126, 128, 130, 137, 152, 160, 183, 188, 197, 224, 235, 248, 299, 300, 303, 322, 338, 353, 360, 363, 940, 947, 948, 953, 960, 962, 967, 981, 982, 984, 985, 989, 989, 993, 996, 997, 998, 1000, 943, 368};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> heights = {892, 979, 996, 87, 65, 23, 961, 926, 852, 866, 237, 130, 852, 831, 859, 958, 4, 61, 973, 835, 146, 994, 926, 239, 32, 918, 34, 937, 846, 196, 920, 960, 842, 964, 231, 79, 830, 952, 855, 99, 945, 877, 914, 860};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 23, 32, 34, 61, 65, 79, 87, 99, 130, 146, 196, 231, 237, 830, 835, 842, 846, 852, 852, 855, 859, 860, 866, 877, 892, 914, 918, 920, 926, 926, 937, 945, 952, 958, 960, 961, 964, 973, 979, 994, 996, 831, 239};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> heights = {3, 42, 20, 992, 39, 33, 23, 19, 42, 13, 31, 22, 14, 25, 31};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 13, 14, 19, 20, 22, 23, 25, 31, 31, 33, 39, 42, 992, 42};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heights = {971, 11, 3, 15, 910, 2, 867, 10, 9, 901, 3, 982, 4, 2, 6, 9, 6, 8, 11, 6, 11, 892, 944, 851, 890, 10, 940, 3, 989, 872, 923, 964, 13, 8, 10, 11, 930, 868, 902, 953, 11, 4, 964, 863, 952, 10, 2, 921, 2};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 3, 3, 3, 4, 4, 6, 6, 6, 8, 8, 9, 9, 10, 10, 10, 10, 11, 11, 11, 11, 11, 13, 851, 867, 868, 872, 890, 892, 901, 902, 910, 921, 923, 930, 940, 944, 952, 953, 964, 964, 971, 982, 989, 863, 15};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> heights = {128, 808, 178, 383, 590, 722, 785, 431, 296, 294, 674, 982, 946, 786, 776, 669, 75, 972, 806, 208, 138, 641, 625, 420, 690, 206, 922, 797, 611, 805, 630, 387, 297, 269, 78, 782, 916, 65, 887, 798};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65, 75, 78, 128, 138, 178, 206, 269, 294, 296, 297, 383, 420, 590, 625, 630, 641, 669, 674, 690, 722, 776, 782, 785, 797, 798, 805, 806, 808, 887, 916, 922, 972, 982, 946, 786, 611, 431, 387, 208};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heights = {996, 968, 434, 674, 305, 354, 233, 958, 371, 680, 967, 78, 569, 266, 93, 315, 243, 99, 369, 335, 331, 601, 192, 999, 364, 685, 216, 442, 999, 649, 374, 962, 629, 263, 38, 277};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 78, 93, 99, 192, 216, 233, 243, 263, 266, 277, 305, 331, 335, 354, 364, 369, 371, 374, 434, 442, 601, 629, 649, 674, 680, 958, 967, 968, 996, 999, 999, 962, 685, 569, 315};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> heights = {294, 861, 711, 959, 315, 122, 933, 879, 831, 781, 671, 781, 545, 975, 578, 684, 972, 288, 589, 536, 396, 882, 860, 990, 657, 81, 439, 494, 767, 127, 565, 717, 521, 335, 897, 999, 572, 707, 600, 709, 481, 658, 312, 697, 856, 310, 286, 481, 643, 746};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 122, 286, 294, 310, 312, 315, 335, 396, 481, 481, 494, 521, 536, 545, 565, 572, 578, 589, 643, 657, 658, 671, 684, 697, 707, 709, 711, 717, 767, 781, 781, 831, 856, 860, 861, 879, 882, 933, 959, 972, 975, 990, 999, 897, 746, 600, 439, 288, 127};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> heights = {48, 96, 4, 11, 76, 72, 27, 37, 913, 58, 32, 689, 923, 67, 17, 5, 32};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 11, 17, 27, 32, 32, 37, 48, 58, 67, 72, 76, 96, 913, 923, 689};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heights = {7, 5, 4, 6, 908, 8, 839, 649, 634, 757, 722, 12, 744, 8, 807, 3, 763, 8, 891, 9, 974, 6, 707, 2, 814, 641, 695, 770, 6};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 6, 6, 7, 8, 8, 8, 9, 634, 649, 695, 707, 722, 744, 757, 763, 770, 807, 814, 839, 891, 908, 974, 641, 12};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heights = {125, 966, 273, 506, 349, 802, 356, 4, 66, 782, 766, 54, 918, 766, 416, 714, 83, 509, 603, 766, 765, 119, 444, 620, 987, 784, 885, 736, 79, 648, 854, 328, 642, 216, 15, 374, 43, 842, 314, 831, 458, 750, 711, 841, 833, 839, 695, 233, 7};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 15, 43, 54, 66, 79, 119, 216, 273, 314, 349, 356, 374, 444, 458, 506, 603, 642, 648, 695, 711, 736, 750, 765, 766, 766, 766, 782, 784, 831, 833, 839, 841, 842, 854, 918, 966, 987, 885, 802, 714, 620, 509, 416, 328, 233, 125, 83};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heights = {974, 943, 984, 935, 32, 922, 36, 942, 928, 10, 930, 47, 971, 994, 980, 46, 978, 948, 913, 995, 47, 955, 932, 990, 961, 920, 927, 966, 960};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 32, 36, 46, 47, 913, 922, 927, 928, 930, 932, 935, 942, 943, 948, 955, 960, 961, 966, 971, 974, 978, 980, 984, 990, 994, 995, 920, 47};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heights = {24, 546, 27, 64, 28, 34, 79, 21, 77, 67, 626, 9, 67, 58, 60, 45, 62, 19, 44, 17, 32, 1, 63, 40, 909, 79, 61};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 17, 19, 21, 24, 27, 28, 32, 34, 40, 44, 45, 58, 60, 61, 62, 63, 64, 67, 67, 77, 79, 79, 626, 909, 546};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heights = {427, 874, 310, 564, 603, 972, 894, 592, 34, 980, 284, 543, 433, 311, 923, 199, 154, 194, 894, 894, 308, 403, 926, 396, 671, 277, 894, 958, 296, 916, 10, 436, 662, 161, 920, 195, 362, 125, 894, 210, 74, 677, 930, 438, 962, 905, 918, 304, 462, 877};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 34, 74, 125, 154, 161, 194, 195, 199, 277, 284, 296, 304, 308, 310, 311, 362, 396, 427, 433, 436, 438, 462, 543, 564, 592, 662, 671, 874, 894, 894, 894, 894, 894, 905, 916, 918, 920, 923, 926, 930, 958, 962, 972, 980, 877, 677, 603, 403, 210};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heights = {998, 1, 1000, 1, 998, 999, 1000, 999, 999, 1000, 998, 998, 1, 1000, 999, 1, 998, 998, 1000, 1, 999, 999, 998, 1, 998, 1000, 999, 998, 1000, 1, 1, 1, 999, 1, 998, 998, 998, 1000, 999, 998, 1, 998, 999, 999, 1, 1000, 1000, 1000, 999, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 998, 998, 998, 998, 998, 998, 998, 998, 998, 998, 998, 998, 998, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 998};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> heights = {11, 985, 4, 11, 4, 2, 8, 7, 1, 11, 983, 10, 9, 5, 992, 11, 6, 9, 9, 1, 5, 994, 988, 989, 7, 3, 4, 995};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 3, 4, 4, 4, 5, 5, 6, 7, 7, 8, 9, 9, 9, 10, 11, 11, 11, 983, 988, 989, 992, 994, 995, 985, 11};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heights = {995, 997, 13, 11, 13, 993, 13, 4, 995, 995, 4, 994, 1000, 10, 997, 998, 994, 5, 997, 995, 1000, 997, 11, 10, 996, 14, 998, 1000, 993, 14, 14, 997, 994, 1000, 9, 994, 7, 12, 7, 1000, 1000, 993, 999, 4, 994, 998, 996};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 5, 7, 7, 9, 10, 10, 11, 11, 12, 13, 13, 13, 14, 14, 993, 993, 994, 994, 994, 994, 994, 995, 995, 995, 995, 996, 996, 997, 997, 997, 997, 997, 998, 998, 998, 999, 1000, 1000, 1000, 1000, 1000, 1000, 993, 14};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heights = {397, 56, 305, 341, 50, 213, 383, 200, 9, 246, 228, 413, 175, 237, 62, 160, 70, 421, 388, 431, 321, 314, 141, 400, 311, 336, 61, 418, 161, 358, 316, 406, 213, 259, 28, 130, 406, 121, 166, 374, 408, 229, 372, 79, 323, 22, 198, 16, 134, 178};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 16, 22, 28, 50, 56, 61, 70, 79, 130, 134, 141, 160, 161, 166, 175, 198, 200, 213, 213, 228, 229, 246, 305, 311, 314, 321, 323, 336, 341, 358, 372, 383, 388, 397, 400, 406, 406, 408, 413, 418, 421, 431, 374, 316, 259, 237, 178, 121, 62};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> heights = {597, 602, 588, 581, 588, 565, 598, 576, 600, 575, 566, 595, 602, 586, 578, 588, 603, 565, 593, 597, 565, 579, 603, 583, 564, 609, 592, 579, 593, 592, 581, 580, 618, 587, 616, 611, 568, 566, 577, 572, 599, 619, 569};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {564, 565, 565, 565, 566, 566, 568, 569, 575, 576, 577, 578, 579, 579, 581, 581, 583, 586, 587, 588, 588, 592, 592, 593, 593, 597, 597, 598, 599, 600, 602, 602, 603, 609, 616, 618, 619, 611, 603, 595, 588, 580, 572};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heights = {336, 452, 364, 439, 432, 338, 305, 367, 417, 379, 345, 425, 291, 416, 441};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {291, 305, 336, 345, 364, 367, 416, 417, 432, 439, 441, 452, 425, 379, 338};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> heights = {496, 485, 588, 581, 557, 554, 409, 534, 432, 576, 425, 422, 511, 425, 542, 412, 463, 382, 537, 505, 403, 586, 439, 538, 574, 583, 509, 373, 481, 380, 430, 573, 552, 388, 557, 537, 437, 564, 567, 442, 551, 513, 400, 473, 491, 516, 390, 589, 496};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {373, 380, 382, 388, 390, 400, 409, 412, 422, 425, 425, 430, 437, 439, 442, 473, 481, 485, 496, 496, 505, 509, 511, 513, 534, 537, 537, 538, 551, 552, 554, 557, 557, 564, 567, 574, 576, 581, 583, 586, 588, 589, 573, 542, 516, 491, 463, 432, 403};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> heights = {313, 588, 434, 374, 431, 458, 373, 340, 368, 526};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {313, 340, 368, 373, 374, 431, 458, 588, 526, 434};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heights = {378, 508, 377, 215, 400, 492, 418, 454};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {215, 377, 400, 418, 454, 492, 508, 378};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heights = {300, 365, 868, 513, 201, 334, 897, 833, 901, 482, 667, 714, 97, 547, 671, 712, 305, 130, 283, 648, 136, 262, 799, 750, 532, 658, 262, 304, 293, 652, 177, 439, 852, 602, 773, 544, 874, 879, 805, 332, 447, 656, 490, 862, 471, 945, 319, 121, 337, 922};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 121, 130, 136, 201, 262, 283, 293, 300, 304, 305, 319, 332, 334, 365, 447, 471, 482, 490, 513, 544, 547, 648, 652, 656, 658, 667, 712, 714, 750, 799, 805, 833, 852, 862, 868, 879, 897, 901, 922, 945, 874, 773, 671, 602, 532, 439, 337, 262, 177};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heights = {369, 311, 325, 340, 339, 370, 308, 429, 295, 288, 293, 405, 282, 318, 347, 364, 308, 289, 372};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {282, 288, 289, 293, 295, 308, 308, 311, 318, 325, 340, 347, 364, 369, 370, 405, 429, 372, 339};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heights = {338, 226, 738, 763, 331, 232, 574, 296, 837, 524, 460, 291, 567, 374, 246};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {226, 232, 246, 291, 296, 331, 338, 460, 567, 738, 837, 763, 574, 524, 374};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heights = {535, 527, 530, 541, 514, 540, 527, 514, 508, 526, 519, 530, 531, 536, 515, 529, 540, 521, 530, 520, 516, 512, 531, 517, 514, 520, 523, 514, 536, 540, 527, 513, 515, 516, 521, 517, 525, 539, 533, 529, 517, 520, 534, 527, 531, 540, 518, 534, 507};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {507, 508, 513, 514, 514, 514, 514, 515, 515, 516, 516, 517, 517, 518, 519, 520, 520, 520, 521, 523, 525, 527, 527, 527, 527, 529, 529, 530, 530, 530, 531, 531, 533, 534, 534, 535, 536, 539, 540, 540, 540, 540, 541, 536, 531, 526, 521, 517, 512};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heights = {495, 107, 380, 353, 495, 529, 333, 212, 238, 214, 88, 412, 533, 269, 447, 372, 536, 395, 234, 184, 159, 497, 152, 183, 422, 112, 318, 468, 321, 454, 464, 76, 527};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 88, 107, 112, 159, 183, 184, 212, 234, 238, 318, 321, 353, 372, 380, 395, 422, 447, 454, 464, 495, 495, 497, 527, 529, 533, 536, 468, 412, 333, 269, 214, 152};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heights = {815, 643, 735, 666, 658, 790, 636, 755, 552, 702, 663, 809, 727, 706, 811, 745, 752, 866, 802, 582, 741, 871, 532, 610, 826, 674, 637, 587, 692, 831, 848, 707, 646, 562, 718, 750, 545, 548, 518, 547};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {518, 532, 545, 547, 548, 552, 582, 587, 636, 637, 643, 646, 663, 666, 674, 692, 702, 706, 718, 727, 735, 741, 745, 750, 752, 790, 809, 811, 815, 826, 831, 866, 871, 848, 802, 755, 707, 658, 610, 562};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heights = {735, 608, 694, 834, 802, 602, 796, 938, 698, 581, 602, 657, 828, 740, 502, 642, 541, 585, 648, 866, 864, 761, 710, 516, 546, 763, 774, 764, 557, 960, 608, 835, 624, 761, 916, 810, 771, 799, 729, 947, 789, 946, 546, 734, 712, 859, 612, 635, 739, 900};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {502, 516, 541, 546, 557, 581, 602, 602, 608, 608, 612, 624, 642, 648, 694, 710, 712, 729, 734, 735, 739, 761, 761, 763, 764, 771, 774, 796, 799, 802, 810, 828, 834, 859, 864, 900, 938, 946, 947, 960, 916, 866, 835, 789, 740, 698, 657, 635, 585, 546};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heights = {173, 462, 241, 271, 112, 372, 213, 21, 183, 265, 343, 65, 2, 403, 321, 131, 383, 152, 82, 395, 94, 43, 471, 301, 254, 493, 161, 485, 223, 292, 313, 52, 352, 31, 415, 104, 425, 434, 443, 75, 14, 192, 365, 125, 334, 202, 144, 232, 454, 282};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 14, 31, 52, 75, 94, 112, 131, 152, 173, 192, 213, 232, 254, 271, 292, 313, 334, 352, 372, 395, 415, 434, 454, 471, 493, 485, 462, 443, 425, 403, 383, 365, 343, 321, 301, 282, 265, 241, 223, 202, 183, 161, 144, 125, 104, 82, 65, 43, 21};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heights = {370, 794, 553, 612, 5, 65, 310, 187, 489, 430, 124, 674, 733, 245};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 65, 187, 310, 430, 553, 674, 794, 733, 612, 489, 370, 245, 124};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heights = {398, 279, 45, 464, 124, 5, 60, 178, 431, 167, 344, 474, 79, 14, 102, 157, 135, 441, 389, 353, 268, 321, 222, 93, 365, 409, 69, 203, 311, 37, 331, 257, 300, 455, 420, 243, 232, 291, 191, 113, 24, 212, 144, 379};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 14, 37, 60, 79, 102, 124, 144, 167, 191, 212, 232, 257, 279, 300, 321, 344, 365, 389, 409, 431, 455, 474, 464, 441, 420, 398, 379, 353, 331, 311, 291, 268, 243, 222, 203, 178, 157, 135, 113, 93, 69, 45, 24};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heights = {762, 283, 861, 663, 845, 504, 364, 265, 443, 481, 165, 723, 85, 301, 782, 404, 602, 882, 185, 2, 801, 141, 685, 204, 521, 342, 65, 923, 645, 245, 545, 821, 564, 582, 223, 124, 625, 44, 462, 425, 383, 741, 944, 902, 325, 965, 102, 21, 702};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 21, 65, 102, 141, 185, 223, 265, 301, 342, 383, 425, 462, 504, 545, 582, 625, 663, 702, 741, 782, 821, 861, 902, 944, 965, 923, 882, 845, 801, 762, 723, 685, 645, 602, 564, 521, 481, 443, 404, 364, 325, 283, 245, 204, 165, 124, 85, 44};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heights = {848, 456, 326, 66, 394, 200, 911, 718, 655, 587, 783, 264, 135, 5, 525};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 66, 200, 326, 456, 587, 718, 848, 911, 783, 655, 525, 394, 264, 135};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heights = {145, 379, 668, 400, 631, 346, 328, 38, 705, 272, 199, 649, 578, 614, 2, 255, 473, 77, 687, 311, 163, 291, 127, 739, 563, 491, 363, 451, 435, 416, 20, 112, 721, 508, 236, 185, 91, 220, 542, 55, 526, 599};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 20, 55, 91, 127, 163, 199, 236, 272, 311, 346, 379, 416, 451, 491, 526, 563, 599, 631, 668, 705, 739, 721, 687, 649, 614, 578, 542, 508, 473, 435, 400, 363, 328, 291, 255, 220, 185, 145, 112, 77, 38};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heights = {254, 355, 400, 518, 124, 423, 542, 463, 224, 345, 290, 486, 452, 365, 529, 244, 390, 147, 379, 309, 212, 111, 178, 431, 14, 331, 496, 26, 188, 93, 71, 199, 136, 157, 276, 45, 321, 78, 4, 441, 232, 268, 511, 302, 35, 102, 476, 408, 58, 169};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 14, 35, 58, 78, 102, 124, 147, 169, 188, 212, 232, 254, 276, 302, 321, 345, 365, 390, 408, 431, 452, 476, 496, 518, 542, 529, 511, 486, 463, 441, 423, 400, 379, 355, 331, 309, 290, 268, 244, 224, 199, 178, 157, 136, 111, 93, 71, 45, 26};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heights = {3, 348, 119, 234, 461};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 119, 348, 461, 234};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heights = {42, 170, 145, 27, 186, 225, 158, 289, 264, 236, 303, 120, 94, 69, 55, 212, 252, 105, 198, 133, 316, 83, 276, 5, 14};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 14, 42, 69, 94, 120, 145, 170, 198, 225, 252, 276, 303, 316, 289, 264, 236, 212, 186, 158, 133, 105, 83, 55, 27};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heights = {405, 113, 612, 546, 515, 373, 452, 771, 468, 98, 420, 309, 660, 740, 721, 292, 484, 261, 276, 339, 65, 148, 85, 644, 561, 181, 163, 533, 212, 33, 594, 674, 52, 386, 324, 195, 228, 705, 20, 627, 436, 1, 501, 577, 690, 245, 753, 355, 131};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 20, 52, 85, 113, 148, 181, 212, 245, 276, 309, 339, 373, 405, 436, 468, 501, 533, 561, 594, 627, 660, 690, 721, 753, 771, 740, 705, 674, 644, 612, 577, 546, 515, 484, 452, 420, 386, 355, 324, 292, 261, 228, 195, 163, 131, 98, 65, 33};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heights = {485, 354, 27, 91, 596, 137, 221, 401, 463, 662, 817, 554, 532, 378, 795, 243, 202, 751, 334, 419, 683, 287, 5, 269, 155, 508, 445, 619, 728, 70, 772, 178, 313, 643, 115, 576, 709, 46};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 27, 70, 115, 155, 202, 243, 287, 334, 378, 419, 463, 508, 554, 596, 643, 683, 728, 772, 817, 795, 751, 709, 662, 619, 576, 532, 485, 445, 401, 354, 313, 269, 221, 178, 137, 91, 46};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heights = {118, 134, 233, 287, 98, 366, 157, 40, 174, 252, 192, 305, 22, 3, 327, 211, 60, 345, 384, 77, 268};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 22, 60, 98, 134, 174, 211, 252, 287, 327, 366, 384, 345, 305, 268, 233, 192, 157, 118, 77, 40};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heights = {444, 44, 333, 493, 195, 261, 252, 274, 184, 405, 314, 391, 175, 83, 205, 34, 473, 22, 382, 102, 95, 303, 135, 212, 361, 341, 452, 113, 285, 325, 143, 292, 75, 5, 484, 352, 431, 121, 465, 241, 164, 375, 61, 413, 14, 422, 54, 232, 222, 155};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 14, 34, 54, 75, 95, 113, 135, 155, 175, 195, 212, 232, 252, 274, 292, 314, 333, 352, 375, 391, 413, 431, 452, 473, 493, 484, 465, 444, 422, 405, 382, 361, 341, 325, 303, 285, 261, 241, 222, 205, 184, 164, 143, 121, 102, 83, 61, 44, 22};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heights = {289, 111, 92, 399, 266, 445, 509, 289, 313, 533, 25, 5, 137, 68, 334, 137, 245, 466, 487, 245, 266, 353, 157, 202, 334, 313, 179, 111, 223, 5, 466, 487, 353, 202, 92, 423, 157, 223, 25, 379, 399, 49, 445, 49, 509, 423, 379, 68, 179, 533};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 25, 49, 68, 92, 111, 137, 157, 179, 202, 223, 245, 266, 289, 313, 334, 353, 379, 399, 423, 445, 466, 487, 509, 533, 533, 509, 487, 466, 445, 423, 399, 379, 353, 334, 313, 289, 266, 245, 223, 202, 179, 157, 137, 111, 92, 68, 49, 25};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heights = {229, 485, 290, 1, 129, 34, 129, 290, 321, 485, 450, 385, 418, 34, 65, 418, 197, 356, 197, 356, 259, 385, 321, 163, 101, 450, 163, 65, 259, 101, 229, 1};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 34, 65, 101, 129, 163, 197, 229, 259, 290, 321, 356, 385, 418, 450, 485, 485, 450, 418, 385, 356, 321, 290, 259, 229, 197, 163, 129, 101, 65, 34};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heights = {43, 43, 81, 33, 12, 81, 33, 92, 64, 22, 51, 64, 22, 105, 71, 12, 71, 4, 51, 92, 105, 4};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 12, 22, 33, 43, 51, 64, 71, 81, 92, 105, 105, 92, 81, 71, 64, 51, 43, 33, 22, 12};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heights = {257, 203, 165, 20, 257, 20, 398, 203, 275, 165, 131, 56, 111, 111, 37, 364, 289, 148, 417, 92, 131, 383, 236, 56, 345, 159, 92, 325, 5, 219, 181, 310, 275, 310, 73, 289, 5, 417, 148, 383, 364, 236, 345, 37, 73, 181, 219, 325, 398};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 20, 37, 56, 73, 92, 111, 131, 148, 159, 165, 181, 203, 219, 236, 257, 275, 289, 310, 325, 345, 364, 383, 398, 417, 417, 398, 383, 364, 345, 325, 310, 289, 275, 257, 236, 219, 203, 181, 165, 148, 131, 111, 92, 73, 56, 37, 20};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heights = {344, 118, 192, 344, 306, 229, 1, 268, 154, 43, 77, 1, 268, 939, 229, 77, 192, 118, 43, 154, 306};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 43, 43, 77, 77, 118, 118, 154, 154, 192, 192, 229, 229, 268, 268, 306, 306, 344, 939, 344};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heights = {53, 82, 123, 22, 44, 115, 123, 102, 71, 91, 32, 71, 32, 3, 62, 13, 44, 22, 115, 13, 102, 134, 134, 62, 3, 91, 53, 82};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 13, 22, 32, 44, 53, 62, 71, 82, 91, 102, 115, 123, 134, 134, 123, 115, 102, 91, 82, 71, 62, 53, 44, 32, 22, 13};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heights = {200, 41, 218, 157, 41, 31, 13, 212, 67, 94, 200, 127, 82, 110, 31, 218, 122, 172, 2, 122, 212, 164, 50, 183, 94, 23, 102, 172, 76, 76, 127, 102, 13, 57, 164, 138, 2, 57, 190, 82, 183, 67, 190, 138, 50, 23, 149, 157, 149, 110};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 13, 23, 31, 41, 50, 57, 67, 76, 82, 94, 102, 110, 122, 127, 138, 149, 157, 164, 172, 183, 190, 200, 212, 218, 218, 212, 200, 190, 183, 172, 164, 157, 149, 138, 127, 122, 110, 102, 94, 82, 76, 67, 57, 50, 41, 31, 23, 13};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heights = {14, 35, 892, 35, 2, 14, 2, 24, 24};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 14, 14, 24, 24, 35, 892, 35};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heights = {362, 122, 243, 337, 97, 194, 122, 5, 385, 75, 194, 26, 290, 337, 459, 243, 147, 459, 217, 433, 172, 147, 75, 5, 265, 316, 97, 172, 51, 290, 51, 433, 217, 362, 411, 26, 265, 385, 411, 316};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 26, 51, 75, 97, 122, 147, 172, 194, 217, 243, 265, 290, 316, 337, 362, 385, 411, 433, 459, 459, 433, 411, 385, 362, 337, 316, 290, 265, 243, 217, 194, 172, 147, 122, 97, 75, 51, 26};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heights = {141, 141, 282, 200, 282, 508, 310, 326, 61, 75, 169, 99, 17, 253, 253, 75, 113, 17, 213, 225, 61, 187, 200, 157, 213, 89, 225, 239, 295, 128, 47, 33, 113, 187, 89, 2, 310, 169, 267, 33, 47, 128, 295, 239, 99, 267, 326, 157, 2};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 17, 17, 33, 33, 47, 47, 61, 61, 75, 75, 89, 89, 99, 99, 113, 113, 128, 128, 141, 141, 157, 157, 169, 187, 187, 200, 200, 213, 213, 225, 225, 239, 239, 253, 253, 267, 267, 282, 282, 295, 295, 310, 310, 326, 508, 326, 169};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heights = {205, 243, 3, 83, 41, 165, 123, 323, 205, 243, 41, 285, 83, 363, 3, 323, 165, 363, 123, 285};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 41, 83, 123, 165, 205, 243, 285, 323, 363, 363, 323, 285, 243, 205, 165, 123, 83, 41};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heights = {71, 164, 51, 51, 141, 3, 123, 164, 3, 83, 22, 41, 13, 93, 135, 123, 153, 104, 34, 65, 83, 93, 114, 65, 34, 104, 22, 114, 172, 71, 41, 135, 172, 13, 153, 141};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 13, 22, 34, 41, 51, 65, 71, 83, 93, 104, 114, 123, 135, 141, 153, 164, 172, 172, 164, 153, 141, 135, 123, 114, 104, 93, 83, 71, 65, 51, 41, 34, 22, 13};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heights = {268, 174, 252, 252, 365, 229, 402, 214, 97, 59, 137, 59, 307, 346, 328, 289, 5, 119, 81, 21, 365, 268, 137, 383, 442, 383, 229, 5, 81, 289, 402, 39, 39, 195, 458, 421, 346, 214, 174, 421, 97, 156, 156, 195, 307, 328, 21, 458, 442, 119};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 21, 39, 59, 81, 97, 119, 137, 156, 174, 195, 214, 229, 252, 268, 289, 307, 328, 346, 365, 383, 402, 421, 442, 458, 458, 442, 421, 402, 383, 365, 346, 328, 307, 289, 268, 252, 229, 214, 195, 174, 156, 137, 119, 97, 81, 59, 39, 21};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> heights = {958, 321, 931, 161, 114, 594, 725, 295, 164, 186, 958, 186, 931, 163, 560, 164, 931, 594, 307, 114, 114, 499, 725, 779, 627, 163, 321, 849, 958, 627, 499, 853, 499, 623, 307, 853, 627, 307, 114, 161, 161, 321, 725, 931, 594, 627, 560, 958, 853, 560};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {114, 114, 114, 114, 161, 161, 161, 163, 163, 164, 164, 186, 295, 307, 307, 307, 321, 321, 499, 499, 560, 560, 560, 594, 594, 594, 623, 627, 627, 627, 725, 725, 725, 849, 853, 853, 853, 931, 931, 931, 958, 958, 958, 958, 931, 779, 627, 499, 321, 186};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> heights = {717, 149, 149, 673, 673, 673, 673, 717, 717, 717, 149, 149};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {149, 149, 149, 149, 673, 673, 673, 717, 717, 717, 717, 673};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> heights = {674, 331, 332, 595, 609, 609, 300, 595, 442, 719, 442, 719, 497, 442, 300, 719, 74, 442, 719, 595, 989};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {74, 300, 300, 331, 442, 442, 442, 442, 497, 595, 595, 609, 609, 674, 719, 719, 719, 989, 719, 595, 332};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> heights = {123, 809, 855, 855, 734, 458, 878, 584, 449, 433, 937, 855, 518, 882, 734, 809, 227, 734, 359, 636, 878, 809, 359, 228, 22, 123, 855, 22, 449, 809, 878, 878, 123, 22, 882, 222, 882, 366, 222, 433, 882, 636, 227, 458, 359, 222, 734, 636, 359};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 22, 22, 123, 123, 222, 222, 222, 227, 227, 359, 359, 359, 366, 433, 433, 449, 449, 458, 518, 636, 636, 734, 734, 734, 809, 809, 809, 809, 855, 855, 855, 878, 878, 878, 878, 882, 882, 882, 882, 937, 855, 734, 636, 584, 458, 359, 228, 123};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> heights = {363, 500, 524, 32, 524, 32, 500, 725, 666, 996, 638, 110, 363, 524, 363, 500, 512, 775, 735, 110, 608, 638, 110, 666, 500, 638, 363, 255, 110, 512, 512, 608, 735, 512, 666, 996, 255, 255, 996};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 32, 110, 110, 110, 110, 255, 255, 363, 363, 363, 363, 500, 500, 500, 500, 512, 512, 512, 524, 524, 524, 608, 608, 638, 638, 638, 666, 666, 666, 725, 735, 775, 996, 996, 996, 735, 512, 255};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> heights = {960, 389, 389, 618, 618, 966, 389, 389, 618, 618, 960};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {389, 389, 389, 389, 618, 618, 618, 960, 966, 960, 618};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> heights = {724, 182, 486, 486, 859, 413, 442, 182, 182, 859, 900, 313, 892, 486, 565, 204, 398, 859, 996, 674, 444, 398, 996, 398, 204, 996, 724, 442, 204, 243, 442, 243, 442, 844, 844, 892, 413, 231, 892, 204, 724, 413, 398, 996, 243, 844, 313, 724, 892, 565};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {182, 182, 182, 204, 204, 204, 204, 231, 243, 243, 243, 313, 398, 398, 398, 398, 413, 413, 413, 442, 442, 442, 442, 486, 486, 486, 565, 674, 724, 724, 724, 844, 844, 844, 859, 859, 892, 892, 892, 892, 900, 996, 996, 996, 996, 859, 724, 565, 444, 313};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> heights = {427, 242, 17, 8, 17, 242, 242, 615, 427, 242, 819, 615, 17, 17, 427, 171, 427, 615};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 17, 17, 17, 17, 242, 242, 242, 427, 427, 427, 615, 615, 819, 615, 427, 242, 171};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> heights = {952, 848, 952, 848, 952, 848, 386, 386, 265, 848};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {265, 386, 848, 848, 848, 952, 952, 952, 848, 386};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> heights = {249, 735, 249, 613, 502, 324, 138, 654, 986, 324, 735, 713, 163, 946, 699, 649, 735, 699, 735, 249, 699, 986, 98, 651, 651, 129, 946, 613, 654, 654, 117, 249, 528, 574, 651, 138, 126, 801, 801, 324, 129, 98, 528, 163, 649, 129, 654, 986, 946};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 98, 117, 126, 129, 129, 129, 138, 138, 163, 163, 249, 249, 249, 324, 324, 502, 528, 574, 613, 613, 649, 649, 651, 651, 651, 654, 654, 654, 654, 699, 699, 699, 735, 735, 735, 735, 801, 946, 946, 946, 986, 986, 986, 801, 713, 528, 324, 249};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> heights = {504, 496, 570, 504, 957, 389, 376, 957, 968, 968, 504, 957, 924, 570, 376, 570, 924, 570, 968, 369, 968, 504};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {369, 376, 376, 389, 496, 504, 504, 504, 504, 570, 570, 570, 924, 957, 957, 957, 968, 968, 968, 968, 924, 570};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> heights = {240, 404, 69, 537, 541, 638, 638, 927, 404, 404, 541, 638, 927, 404, 746, 852, 537, 126, 927, 541, 927};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69, 126, 404, 404, 404, 537, 537, 541, 541, 541, 638, 638, 746, 927, 927, 927, 927, 852, 638, 404, 240};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> heights = {642, 868, 497, 543, 851, 497, 855, 451, 703, 851, 329, 497, 911, 381, 329, 93, 398, 911, 34, 630, 618, 641, 186, 186, 868, 451, 855, 848, 911, 868, 186, 186, 497, 868, 725, 381, 299, 703, 538, 725, 851, 543, 725, 703, 642, 641, 618, 855, 642, 543};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 93, 186, 186, 186, 299, 329, 381, 381, 398, 451, 497, 497, 497, 497, 538, 543, 543, 618, 618, 630, 641, 641, 642, 642, 703, 703, 703, 725, 725, 848, 851, 851, 851, 855, 855, 855, 868, 868, 868, 911, 911, 911, 868, 725, 642, 543, 451, 329, 186};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 10, 20, 30, 30, 30, 100, 101, 101, 100, 102, 102, 103, 104, 105, 106, 107, 108, 109, 110, 130, 150, 170, 190, 240, 200, 290, 300, 301, 302, 400, 400, 400, 350, 400};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 10, 20, 30, 30, 100, 100, 101, 101, 102, 102, 103, 104, 105, 106, 107, 108, 109, 130, 150, 170, 190, 240, 300, 301, 302, 400, 400, 400, 400, 350, 290, 200, 110, 30};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> heights = {122, 600, 183, 50, 77, 308, 521, 476, 752, 841, 540, 719, 966, 89, 329, 354, 136, 730, 374, 49, 546, 870, 549, 837, 834, 986, 166, 520, 281, 472, 621, 786, 444, 772, 145, 158, 898, 449, 65, 51, 992, 896, 259, 58, 429, 677, 457, 254, 890, 644};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 50, 51, 58, 65, 77, 89, 122, 145, 158, 166, 254, 281, 308, 354, 429, 444, 449, 472, 476, 520, 521, 546, 549, 600, 644, 719, 730, 772, 786, 834, 841, 870, 890, 896, 966, 992, 986, 898, 837, 752, 677, 621, 540, 457, 374, 329, 259, 183, 136};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> heights = {7, 10, 11, 12, 13, 32, 1, 65, 23, 65, 32, 777, 222, 543, 232, 12, 322, 176, 177, 178, 321, 326, 987, 986, 985, 2, 2, 2, 3, 1, 1, 22, 33, 99, 321, 432, 564, 333, 66, 555, 999, 123, 321, 220, 565};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 2, 3, 7, 10, 11, 12, 12, 13, 22, 23, 32, 32, 33, 65, 65, 66, 99, 123, 176, 177, 178, 220, 222, 232, 321, 321, 321, 322, 326, 432, 543, 555, 564, 777, 986, 987, 999, 985, 565, 333};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> heights = {20, 20, 20, 20, 140, 160, 200, 200, 200, 220, 220, 220, 220, 240, 240, 240, 300, 320, 320, 380, 380, 380, 380, 400, 400, 440, 440, 440, 440, 560, 580, 660, 660, 680, 680, 680, 700, 700, 760, 760, 760, 760, 840, 840, 880, 900, 920, 980, 980, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 20, 20, 20, 140, 200, 200, 200, 220, 220, 220, 220, 240, 240, 240, 320, 320, 380, 380, 380, 380, 400, 400, 440, 440, 440, 560, 660, 660, 680, 680, 680, 700, 760, 760, 760, 760, 840, 880, 900, 920, 980, 1000, 980, 840, 700, 580, 440, 300, 160};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> heights = {1, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 1, 100};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 100, 46};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> heights = {5, 13, 19, 37, 51, 46, 24, 14};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 13, 14, 19, 37, 51, 46, 24};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 50};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 50, 7};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> heights = {335, 383, 492, 777, 886, 915, 793, 649, 386};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {335, 383, 386, 649, 793, 886, 915, 777, 492};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> heights = {1, 2, 3, 5, 9, 10, 11, 12, 13, 14};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 9, 10, 12, 13, 14, 11, 5};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> heights = {1, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 990, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 991};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> heights = {1, 3, 4, 5, 7, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 7, 10, 5};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 981, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 982, 30};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> heights = {68, 15, 25, 35, 69, 36, 1, 2, 3, 60, 4, 5, 48, 58, 67, 37, 38, 59};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 25, 36, 37, 38, 58, 59, 60, 67, 69, 68, 48, 35, 15};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> heights = {1, 1, 8, 7};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 7, 8};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> heights = {475, 506, 218, 586, 143, 237, 489, 564, 337, 410, 616, 940, 272, 31, 996, 591, 488, 204, 10, 487, 165, 869, 818, 572, 186, 694, 383, 749, 304, 945, 738, 952, 333, 563, 411, 849, 516, 532, 68, 607, 138, 325, 281, 730, 580, 460, 927, 417, 722, 747};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 31, 138, 143, 186, 204, 218, 237, 281, 304, 325, 333, 383, 410, 411, 460, 475, 487, 488, 489, 506, 532, 563, 564, 572, 580, 586, 591, 607, 694, 730, 738, 747, 749, 849, 927, 940, 945, 996, 952, 869, 818, 722, 616, 516, 417, 337, 272, 165, 68};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 49, 47, 45, 43, 41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> heights = {1, 200, 500, 500, 500, 600};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 200, 500, 500, 600, 500};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> heights = {1, 2, 2, 2, 3, 5};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 5, 3};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> heights = {1, 2, 3, 4, 4, 7};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 7, 4};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> heights = {42, 468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 1000, 668, 300, 36, 895, 704, 812, 323, 334, 674, 665, 142, 712, 254};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 42, 142, 146, 170, 282, 293, 300, 323, 334, 335, 383, 392, 422, 437, 448, 465, 468, 492, 501, 539, 665, 668, 674, 704, 706, 712, 717, 719, 725, 772, 812, 828, 870, 895, 896, 903, 962, 963, 996, 1000, 943, 828, 727, 605, 479, 359, 254, 154};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> heights = {1, 1, 1, 2};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> heights = {1, 1, 1, 1, 3, 3, 3, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 8, 9};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 8, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> heights = {1, 100, 101, 102, 103, 104, 105, 106, 107};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 102, 103, 104, 105, 106, 107, 101};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> heights = {4, 16, 5, 7, 108, 2, 17};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 7, 16, 108, 17};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> heights = {1, 1, 1, 100, 1, 1, 1};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 100};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> heights = {1, 2, 3, 5, 6, 7, 8, 9, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5, 7, 8, 10, 9, 6, 3};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> heights = {1, 3, 7, 9, 15, 16, 17};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 7, 15, 16, 17, 9};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> heights = {1, 2, 2, 2, 3, 4, 191, 293, 456, 659, 654, 345, 345, 332, 23, 123, 123, 439, 432, 321, 123, 321, 832, 32, 3, 999};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 3, 3, 4, 23, 32, 123, 123, 123, 191, 293, 321, 321, 345, 345, 432, 439, 456, 654, 832, 999, 659, 332};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> heights = {1, 2, 3, 4, 7, 8, 9, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 7, 9, 10, 8, 4};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> heights = {1, 2, 3, 3, 2, 3, 2, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 3, 3, 8, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 15, 9, 3};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> heights = {1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 1000, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 1000, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 1000, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1000, 1000, 1000, 1000, 3};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 49, 47, 45, 43, 41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> heights = {1, 2, 3, 4, 5, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 10, 5};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> heights = {1, 1, 3, 4, 5, 7};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 5, 7, 4};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> heights = {863, 352, 670, 981, 946, 514, 258, 476, 36, 950, 550, 47, 606, 317, 404, 784, 427, 577, 675, 167, 389, 2, 103, 343, 993, 638, 437, 266, 334, 454, 533, 848, 3, 279, 561, 460, 481, 718, 581, 895, 759, 832, 920, 585, 629, 217, 170, 300, 60, 747};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 36, 47, 60, 167, 217, 258, 279, 300, 317, 334, 343, 389, 404, 427, 437, 460, 476, 481, 514, 533, 550, 577, 581, 585, 606, 629, 670, 675, 747, 759, 832, 848, 895, 920, 946, 981, 993, 950, 863, 784, 718, 638, 561, 454, 352, 266, 170, 103};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> heights = {1, 2, 2, 3, 3, 4};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> heights = {585, 165, 796, 126, 829, 406, 478, 414, 73, 405, 960, 801, 444, 733, 535, 77, 967, 217, 76, 950, 219, 326, 119, 285, 637, 486, 402, 589, 329, 670, 269, 113, 982, 771, 501, 617, 625, 864, 603, 375, 75, 890, 410, 525, 447, 8, 505, 538, 919, 981};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 73, 75, 76, 113, 119, 126, 217, 269, 326, 329, 402, 405, 406, 410, 414, 444, 478, 486, 501, 505, 525, 535, 585, 589, 603, 617, 625, 670, 771, 796, 801, 864, 890, 950, 960, 967, 981, 982, 919, 829, 733, 637, 538, 447, 375, 285, 219, 165, 77};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> heights = {59, 85, 91, 133, 138, 142, 237, 246, 367, 414, 442, 442, 444, 448, 468, 508, 521, 539, 545, 552, 577, 595, 630, 635, 651, 675, 698, 719, 772, 790, 790, 799, 813, 817, 824, 848, 853, 865, 874, 878, 886, 910, 927, 928, 934, 936, 950, 954, 957, 991};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59, 85, 91, 133, 138, 237, 367, 442, 442, 444, 448, 468, 508, 521, 539, 545, 552, 595, 630, 635, 651, 675, 698, 772, 790, 790, 799, 813, 817, 824, 848, 853, 865, 874, 878, 910, 927, 928, 934, 936, 950, 954, 957, 991, 886, 719, 577, 414, 246, 142};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 6, 8, 10, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> heights = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 13, 14, 15, 19, 42, 1000, 500, 999, 999};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 13, 14, 15, 19, 42, 999, 999, 1000, 500};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 101, 102, 103, 104, 105, 106, 107, 108, 109, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 301, 303, 304, 305, 306, 307, 308, 309, 501, 503, 504, 505, 506, 507, 508, 509, 510, 502, 310, 302, 110};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> heights = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 530};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20, 30, 40, 50, 70, 80, 90, 100, 120, 130, 140, 150, 170, 180, 190, 200, 220, 230, 240, 250, 270, 280, 290, 300, 320, 330, 340, 350, 370, 380, 390, 400, 420, 430, 440, 450, 470, 480, 530, 490, 460, 410, 360, 310, 260, 210, 160, 110, 60};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> heights = {1000, 999, 56, 34, 564, 354, 345, 756, 53, 654, 534, 754, 534, 53, 123, 12, 43, 53, 5, 65, 354, 24, 1, 1, 1, 1, 234, 534, 7, 3, 8, 3, 8, 3, 7, 5, 76, 5, 6, 7, 3, 76};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 6, 7, 7, 7, 8, 8, 12, 24, 34, 43, 53, 53, 53, 56, 65, 76, 76, 123, 345, 354, 534, 534, 534, 654, 754, 999, 1000, 756, 564, 354, 234};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> heights = {437, 417, 122, 474, 451, 353, 209, 347, 832, 51, 95, 680, 746, 515, 102, 612, 918, 768, 209, 926, 56, 469, 784, 159, 663, 25, 785, 802, 740, 161, 45, 997, 263, 285, 508, 667, 94, 167, 893, 467, 540, 183, 278, 76, 57, 876, 237, 903, 347, 814};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 45, 51, 56, 57, 76, 94, 95, 102, 159, 161, 167, 183, 209, 209, 263, 278, 285, 347, 347, 417, 437, 451, 467, 469, 508, 515, 612, 667, 680, 740, 746, 768, 784, 802, 814, 832, 876, 893, 918, 926, 997, 903, 785, 663, 540, 474, 353, 237, 122};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> heights = {40, 1, 1, 3};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 40};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> heights = {6, 227, 529, 728, 467, 10, 406, 426, 840, 616, 952, 949, 900, 26, 349, 586, 388, 117, 944, 222, 623, 147, 640, 992, 342, 570, 916, 372, 932, 556, 269, 740, 344, 558, 161, 972, 54, 2, 528, 462, 224, 752, 336, 137, 826, 704, 152, 452, 220, 298};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 10, 26, 117, 147, 152, 161, 220, 222, 224, 269, 336, 342, 344, 349, 372, 406, 426, 452, 462, 528, 529, 556, 570, 586, 616, 623, 704, 740, 826, 900, 932, 944, 949, 952, 972, 992, 916, 840, 752, 728, 640, 558, 467, 388, 298, 227, 137, 54};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> heights = {1, 933, 743, 262, 529, 700, 508, 752, 256, 256, 119, 711, 351, 843, 705, 108, 393, 330, 366, 169, 932, 917, 847, 972, 868, 980, 223, 549, 592, 164, 169, 551, 427, 190, 624, 635, 920, 944, 310, 862, 484, 363, 301, 710, 236, 876, 431, 929, 397, 675};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 108, 164, 169, 169, 190, 223, 256, 256, 262, 301, 310, 330, 363, 366, 393, 397, 427, 484, 508, 529, 551, 592, 624, 675, 700, 705, 710, 711, 743, 843, 847, 862, 876, 917, 920, 929, 932, 933, 944, 972, 980, 868, 752, 635, 549, 431, 351, 236, 119};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> heights = {1, 2, 2, 9, 9, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 9, 10, 9, 2};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> heights = {1, 1, 1, 1, 999, 999, 999, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 999, 999, 1000, 999};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> heights = {1, 8, 9, 10, 11, 12, 13};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 10, 11, 12, 13, 9};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> heights = {1, 50, 25, 70, 130};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 25, 50, 130, 70};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> heights = {377, 808, 182, 502, 372, 675, 557, 909, 894, 657, 167, 770, 142, 719, 254, 275, 301, 744, 888, 641, 76, 7, 70, 999, 87, 247, 839, 790, 690, 971, 863, 325, 576, 220, 236, 302, 846, 810, 718, 432, 149, 213, 472, 131, 316, 614, 587, 22, 116, 592};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 22, 70, 76, 116, 131, 142, 149, 167, 213, 220, 236, 247, 254, 301, 302, 316, 372, 432, 502, 576, 587, 592, 614, 657, 675, 690, 718, 744, 770, 790, 808, 839, 846, 863, 888, 909, 999, 971, 894, 810, 719, 641, 557, 472, 377, 325, 275, 182, 87};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> heights = {3, 5, 4, 7, 9, 8, 8, 7};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 7, 7, 8, 9, 8, 5};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> heights = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4, 5, 6, 12, 12, 13, 17, 19, 22, 23, 25, 27, 28, 28, 34, 35, 36, 37, 39, 42, 42, 43, 46, 48, 54, 54, 59, 62, 63, 65, 65, 68, 68, 70, 70, 72, 74, 79, 82, 83, 92, 92, 93, 95, 96, 96, 1000, 100};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> heights = {123, 423, 423, 567, 424, 678, 432, 765, 325, 642, 567, 325, 756, 325, 123, 564, 755, 785, 465, 412, 654, 245, 12, 34, 56, 85, 46, 76, 356, 735, 785, 357, 421, 567, 357, 467, 223, 678, 436, 743, 567, 214, 664, 357, 312, 356, 367, 235, 1};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12, 34, 46, 56, 76, 123, 214, 235, 245, 325, 325, 325, 356, 356, 357, 357, 357, 367, 421, 423, 423, 424, 432, 436, 465, 564, 567, 567, 567, 642, 654, 678, 678, 735, 743, 755, 765, 785, 785, 756, 664, 567, 467, 412, 312, 223, 123, 85};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> heights = {1, 2, 3, 4};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> heights = {1, 2, 3, 4, 5, 100};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 100, 5};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> heights = {1, 2, 4, 8, 16, 32, 33};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 8, 32, 33, 16};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 19, 17, 15, 13, 11, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> heights = {457, 458, 465, 484, 521, 582, 673, 800, 69, 286, 557, 888, 385, 854, 501, 232, 53, 870, 889, 116, 357, 718, 305, 24, 781, 782, 33, 340, 809, 546};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 33, 53, 69, 232, 305, 340, 357, 457, 458, 465, 484, 501, 521, 557, 582, 718, 781, 782, 800, 854, 870, 888, 889, 809, 673, 546, 385, 286, 116};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> heights = {3, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 4, 4, 4, 4, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 3};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> heights = {41, 467, 634, 265, 191, 157, 114, 293, 269, 244, 575, 285, 281, 167, 991, 491, 299, 119, 487, 546, 291, 604, 302, 153, 292, 182, 121, 116, 718, 195, 447, 726, 171, 138, 169, 112, 267, 269, 135, 989, 287, 231, 322, 333, 173, 464, 141, 711, 253, 668};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 112, 114, 116, 119, 121, 135, 138, 141, 153, 157, 167, 169, 171, 173, 182, 191, 195, 231, 244, 253, 265, 267, 269, 269, 281, 285, 287, 291, 292, 293, 299, 322, 333, 447, 464, 467, 487, 491, 575, 604, 634, 668, 711, 718, 989, 991, 726, 546, 302};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> heights = {636, 42, 810, 125, 932, 933, 884, 977, 898, 444, 80, 838, 877, 898, 366, 270, 316, 96, 694, 335, 592};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 80, 96, 270, 316, 366, 592, 694, 810, 877, 884, 898, 898, 932, 933, 977, 838, 636, 444, 335, 125};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> heights = {1, 1, 2, 2, 3, 3, 5};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 3, 5, 3};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> heights = {2, 2, 4, 5, 3};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 3, 5, 4};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> heights = {1, 2, 3, 5, 10};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 10, 5};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> heights = {19, 12, 15, 21, 35, 64, 12, 11, 77, 22, 11, 11, 11, 11, 11, 1000, 245, 62, 64, 743, 73, 624, 74, 347, 347, 347, 347, 347, 347, 347, 743, 743, 743, 84, 2};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 11, 11, 11, 11, 11, 11, 12, 12, 15, 19, 21, 22, 35, 62, 64, 64, 73, 74, 77, 84, 245, 347, 347, 347, 347, 347, 347, 624, 743, 743, 743, 1000, 743, 347};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> heights = {1, 1, 1, 1, 10, 20, 30, 40, 50, 51, 52};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 10, 30, 50, 51, 52, 40, 20};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 2, 4, 6, 5, 3};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> heights = {41, 521, 352, 578, 226, 769, 511, 445, 43, 536, 720, 229, 350, 875, 988, 491, 4, 975, 839, 451, 487, 646, 911, 153, 292, 418, 472, 770, 775, 952, 462, 789, 813, 571, 872, 969, 742, 377, 86, 921, 787, 8, 80, 415, 423, 724, 676, 186, 732, 886};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 41, 43, 80, 153, 226, 229, 350, 352, 415, 418, 423, 445, 451, 462, 472, 487, 511, 521, 536, 571, 646, 720, 724, 732, 742, 769, 770, 775, 787, 813, 839, 872, 875, 911, 921, 952, 969, 975, 988, 886, 789, 676, 578, 491, 377, 292, 186, 86};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 19, 17, 15, 13, 11, 9, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> heights = {792, 852, 263, 577, 375, 289, 701, 254, 278, 849, 922, 595, 693, 171, 322, 277, 279, 697, 577, 827, 75, 421, 360, 841, 49, 794, 787, 948, 310, 12, 791, 353, 309, 170, 839, 96, 547, 19, 656, 372, 609, 313, 884, 520, 562, 975, 852, 549, 7, 563};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 12, 19, 49, 75, 170, 254, 263, 277, 278, 279, 289, 309, 310, 322, 353, 360, 372, 375, 520, 547, 549, 562, 577, 577, 595, 609, 656, 693, 697, 787, 791, 792, 794, 827, 839, 849, 852, 852, 884, 922, 948, 975, 841, 701, 563, 421, 313, 171, 96};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> heights = {1, 12, 12, 5, 5, 20, 20, 16, 16, 10, 10, 2, 2, 15, 15, 23, 23, 6, 6, 18, 18, 8, 8, 14, 14, 9, 9, 19, 19, 11, 11, 22, 22, 3, 3, 25, 4, 4, 24, 24, 7, 7, 21, 21, 17, 17, 13, 13};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 999, 1000};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 999, 1000, 48};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> heights = {9, 5, 3, 2, 1};
    HeightRound* pObj = new HeightRound();
    clock_t start = clock();
    vector<int> result = pObj->getBestRound(heights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 9, 5};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10670&pm=7682
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
class HeightRound 
{ 
// Global 
 
// Functions 
public: 
  vector <int> getBestRound(vector <int> h) 
  { 
    vector <int> res; 
    int n = h.size(); 
    int mx = 0; 
    sort(all(h)); 
    for (int i = 2; i < n; i += 2) 
      mx = max(mx, h[i] - h[i - 2]); 
    for (int i = 3; i < n; i += 2) 
      mx = max(mx, h[i] - h[i - 2]); 
    int c = h[0] + mx; 
    vb w(n); 
    for (int i = 0; i < n; ++i) 
    { 
      if (h[i] > c) 
      { 
        res.push_back(h[i - 1]); 
        c = h[i - 1] + mx; 
        w[i - 1] = true; 
      } 
    } 
    for (int i = n - 1; i >= 0; --i) 
    { 
      if (!w[i]) 
        res.push_back(h[i]); 
    } 
    reverse(all(res)); 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/