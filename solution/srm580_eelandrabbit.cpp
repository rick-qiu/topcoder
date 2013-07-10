/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12575
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

class EelAndRabbit {
public:
    int getmax(vector<int> l, vector<int> t);
};

int EelAndRabbit::getmax(vector<int> l, vector<int> t) {
    int ret;
    return ret;
}


int test0() {
    vector<int> l = {2, 4, 3, 2, 2, 1, 10};
    vector<int> t = {2, 6, 3, 7, 0, 2, 0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> l = {1, 1, 1};
    vector<int> t = {2, 0, 4};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> l = {1};
    vector<int> t = {1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> l = {50, 51, 8, 41, 53, 34, 67, 59, 42, 64, 52, 20, 39, 71, 17, 59, 32, 65, 9, 49, 20, 72, 70};
    vector<int> t = {40, 52, 32, 0, 61, 55, 59, 42, 55, 61, 55, 23, 35, 22, 11, 22, 52, 65, 5, 28, 56, 6, 15};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> l = {314, 430, 907, 346, 449, 405, 841, 50, 407, 9, 649, 420, 577, 67, 917, 152, 588, 674, 514, 433, 504, 233, 797, 771, 413, 898, 246, 834, 424, 497, 799, 918, 169, 777, 208, 378, 606, 225, 139, 855, 258, 10, 528, 542, 67, 533, 162, 54, 266, 310};
    vector<int> t = {363, 533, 470, 417, 490, 735, 729, 564, 251, 726, 650, 761, 707, 134, 541, 542, 82, 61, 467, 552, 132, 58, 107, 761, 555, 801, 367, 656, 418, 561, 373, 539, 582, 198, 603, 805, 275, 184, 100, 292, 242, 585, 385, 769, 283, 102, 748, 268, 789, 192};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> l = {314, 38, 207, 267, 141, 161, 188, 168, 237, 305, 96, 193, 213, 262, 111, 18, 110, 275, 278, 13, 241, 207, 194, 283, 280, 48, 299, 46};
    vector<int> t = {138, 116, 220, 358, 34, 254, 160, 109, 120, 324, 137, 106, 189, 168, 270, 263, 100, 226, 247, 137, 100, 218, 232, 126, 305, 225, 170, 91};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> l = {50, 38, 3, 43, 7, 7, 81, 22, 93, 59, 51, 39, 84, 29, 17, 15, 32, 84, 8, 46, 92, 86, 6, 6, 90, 22, 40, 15, 28, 79};
    vector<int> t = {64, 63, 42, 74, 44, 77, 73, 52, 22, 41, 38, 39, 18, 23, 90, 40, 38, 25, 27, 84, 48, 49, 25, 46, 39, 30, 54, 35, 18, 26};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> l = {24, 40, 28, 53, 22, 46, 35, 15, 57, 23, 70, 19, 71, 29, 41, 1, 18, 8, 52, 19, 4, 39, 28, 23, 9, 8, 17, 3, 64, 7, 61, 34, 71, 41, 70, 12, 42, 60, 37, 72};
    vector<int> t = {232, 170, 42, 7, 282, 173, 57, 75, 96, 10, 276, 225, 222, 13, 151, 280, 126, 81, 263, 183, 42, 53, 286, 184, 315, 184, 186, 197, 86, 82, 74, 297, 315, 253, 240, 77, 63, 234, 153, 316};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> l = {132, 211, 527, 26, 634, 486, 326, 205, 223, 561, 675, 129, 214, 226, 612, 373, 665, 61, 122, 301, 279, 361, 188, 519, 188, 304, 346, 33, 85, 528, 360, 301, 152};
    vector<int> t = {28, 834, 154, 156, 119, 466, 64, 216, 148, 512, 501, 490, 578, 211, 810, 625, 10, 538, 63, 473, 786, 409, 262, 664, 52, 377, 331, 596, 753, 610, 656, 63, 589};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> l = {440, 63, 240, 221, 17, 128, 475, 301, 496, 572, 809, 696, 527, 777, 772, 446, 563, 305, 13, 305, 688, 644, 727, 196, 250, 390, 626, 687, 156, 632, 232, 355, 674, 221, 136, 494, 385, 313, 152, 417, 532, 250, 375, 105, 308};
    vector<int> t = {6, 5, 10, 15, 10, 0, 11, 9, 8, 1, 10, 3, 9, 2, 7, 2, 11, 6, 7, 12, 8, 8, 0, 12, 4, 3, 2, 1, 13, 2, 2, 9, 13, 17, 16, 2, 4, 1, 17, 11, 7, 7, 15, 12, 16};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> l = {909, 17, 692, 363, 519, 646};
    vector<int> t = {420, 171, 40, 391, 273, 495};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> l = {27, 22, 6};
    vector<int> t = {103, 256, 17};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> l = {338, 695, 369, 327, 445, 148, 356, 246, 530, 755, 209, 312, 568, 130, 300, 459, 587, 194, 104, 437, 659, 406, 297, 398, 54, 94, 744, 19, 770, 388, 407, 287, 160, 440, 485, 700, 541, 48, 485, 727};
    vector<int> t = {148, 258, 414, 236, 116, 325, 168, 70, 353, 230, 421, 373, 21, 97, 211, 32, 293, 279, 439, 323, 276, 23, 344, 214, 82, 113, 24, 43, 345, 360, 264, 258, 274, 391, 69, 165, 90, 190, 395, 170};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> l = {9, 39, 78, 27, 13, 69, 17};
    vector<int> t = {444, 845, 329, 619, 392, 464, 246};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> l = {2, 6, 21, 15, 21, 25, 8, 22, 25, 19, 18, 21, 17, 4, 25};
    vector<int> t = {8, 780, 931, 77, 733, 230, 250, 342, 494, 100, 124, 841, 297, 410, 362};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> l = {3, 6, 8, 5, 2, 13, 4, 6, 7, 12, 10, 7, 3, 17, 13, 17, 18, 17, 15, 13, 7, 14, 4, 16};
    vector<int> t = {231, 60, 70, 142, 61, 220, 281, 271, 253, 127, 154, 115, 95, 191, 184, 181, 165, 133, 188, 297, 276, 68, 106, 156};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> l = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> t = {537, 393, 38, 523, 541, 63, 212, 420, 304, 412, 525, 163, 124, 450, 37, 408, 550, 66, 521, 365, 476, 154, 400, 518, 496, 480, 50, 199, 436, 348};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> l = {23, 45, 3, 30, 52, 16, 28, 56, 5, 57, 39, 22, 12, 10, 31, 44, 34, 8, 55, 67, 28, 18, 48, 63, 5, 26, 64, 47, 18, 33, 60, 12, 16, 55, 58, 10};
    vector<int> t = {406, 230, 96, 530, 178, 139, 430, 30, 161, 42, 525, 602, 73, 325, 198, 220, 544, 17, 273, 499, 123, 298, 330, 587, 627, 162, 651, 333, 634, 175, 588, 24, 519, 370, 189, 295};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> l = {2, 5, 1, 11, 4, 9, 3, 8, 11, 3, 13, 3, 13, 1};
    vector<int> t = {810, 739, 260, 875, 653, 387, 263, 57, 31, 569, 508, 786, 297, 16};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> l = {2, 24, 7, 32, 11, 35, 38, 39, 39, 2, 27, 35, 25, 17, 17, 20, 26, 27, 13, 31, 28, 33, 33, 18, 24, 39, 28, 9, 27};
    vector<int> t = {379, 270, 534, 407, 400, 301, 252, 33, 61, 529, 192, 131, 58, 142, 7, 259, 188, 325, 458, 323, 553, 481, 380, 488, 419, 195, 404, 478, 95};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> l = {10, 43, 29, 24, 19, 40, 24, 25, 5, 32, 1, 35, 30, 17, 37, 19, 47, 25, 17, 39, 31, 37, 6, 34, 37, 7, 33, 32, 15, 5, 39, 16, 26, 31, 28, 15, 21, 36, 27, 43, 40, 25, 40, 23, 32, 46, 28, 5, 22};
    vector<int> t = {83, 247, 108, 43, 80, 86, 38, 114, 132, 8, 17, 157, 51, 11, 230, 246, 210, 17, 2, 239, 49, 178, 14, 61, 187, 185, 43, 146, 137, 107, 112, 54, 26, 239, 116, 85, 86, 168, 31, 42, 198, 128, 232, 29, 201, 152, 17, 45, 70};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
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
    vector<int> l = {49, 43, 3, 27, 23, 61, 31, 8, 52, 41, 51, 1, 8, 59, 1, 59, 27, 9, 12, 30, 17, 36, 31, 41, 45, 38, 37, 61, 26, 29, 33, 5, 38, 57, 37, 41, 12, 9, 17, 42, 50, 4, 51, 50};
    vector<int> t = {0, 13, 11, 7, 13, 4, 1, 9, 0, 6, 12, 10, 15, 9, 8, 7, 15, 11, 0, 5, 6, 7, 12, 10, 8, 9, 1, 12, 7, 5, 5, 13, 5, 14, 14, 14, 9, 10, 4, 15, 5, 12, 12, 3};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> l = {5, 42, 50, 3, 4};
    vector<int> t = {214, 146, 110, 61, 156};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> l = {347};
    vector<int> t = {35};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> l = {368, 114};
    vector<int> t = {523, 534};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> l = {211, 361, 224};
    vector<int> t = {377, 149, 83};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> l = {105, 167, 67, 289};
    vector<int> t = {411, 85, 179, 499};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> l = {2, 9, 11, 30, 26};
    vector<int> t = {415, 42, 223, 564, 439};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> l = {12, 12, 12, 12, 5, 1};
    vector<int> t = {281, 117, 570, 348, 367, 518};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> l = {60, 103, 53, 32, 51, 64, 59};
    vector<int> t = {49, 21, 9, 64, 5, 48, 21};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> l = {319, 193, 96, 21, 135, 93, 52, 148};
    vector<int> t = {119, 82, 144, 155, 197, 134, 192, 9};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> l = {187, 232, 34, 77, 120, 121, 294, 302, 156};
    vector<int> t = {367, 65, 226, 240, 473, 462, 420, 504, 480};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> l = {43, 44, 5, 54, 47, 32, 6, 18, 15, 43};
    vector<int> t = {814, 56, 42, 254, 414, 311, 499, 783, 147, 657};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> l = {802, 37, 73, 532, 387, 284, 712, 950, 987, 646, 463, 310, 291, 324, 609, 817, 743, 156, 800, 818, 652, 73, 546, 583, 699, 175, 488, 399, 232, 655, 952, 254, 219, 780, 16, 459, 889, 498, 90, 407, 96, 409, 443, 523, 397, 506, 448, 510, 375, 587};
    vector<int> t = {592, 128, 551, 80, 338, 342, 597, 861, 374, 618, 628, 173, 176, 837, 130, 46, 445, 602, 170, 616, 329, 338, 327, 38, 583, 678, 157, 650, 560, 879, 920, 732, 683, 446, 399, 535, 260, 470, 451, 824, 72, 778, 740, 233, 450, 645, 966, 998, 260, 601};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> l = {965, 688, 722, 235, 45, 500, 391, 736, 273, 227, 719, 174, 435, 308, 292, 676, 373, 917, 543, 911, 211, 488, 455, 196, 934, 591, 521, 239, 690, 862, 670, 59, 695, 328, 124, 887, 198, 439, 536, 416, 219, 104, 238, 228, 894, 197, 283, 423, 895, 286};
    vector<int> t = {988, 463, 632, 358, 913, 776, 814, 753, 277, 420, 716, 912, 614, 804, 987, 549, 453, 400, 751, 446, 993, 687, 912, 895, 287, 450, 621, 757, 514, 37, 96, 951, 877, 876, 189, 990, 689, 973, 982, 738, 36, 697, 304, 565, 67, 914, 910, 706, 133, 6};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> l = {928, 167, 141, 308, 14, 824, 602, 580, 690, 421, 229, 970, 615, 539, 762, 553, 443, 26, 738, 120, 403, 881, 797, 934, 903, 671, 286, 114, 594, 353, 85, 886, 978, 587, 585, 661, 559, 120, 892, 861, 189, 680, 873, 238, 321, 468, 287, 681, 622, 281};
    vector<int> t = {607, 500, 934, 593, 317, 847, 739, 52, 0, 347, 233, 990, 548, 89, 364, 737, 80, 471, 932, 408, 978, 444, 413, 790, 527, 931, 93, 665, 349, 996, 747, 697, 408, 83, 875, 675, 30, 34, 407, 868, 539, 292, 680, 661, 222, 890, 925, 352, 343, 173};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> l = {421, 510, 765, 250, 179, 99, 665, 723, 346, 817, 565, 497, 511, 562, 57, 194, 903, 28, 557, 193, 678, 486, 197, 853, 438, 763, 872, 971, 241, 367, 422, 456, 262, 466, 619, 422, 927, 503, 350, 195, 728, 835, 546, 119, 329, 440, 40, 432, 777, 583};
    vector<int> t = {969, 88, 273, 53, 667, 363, 298, 122, 912, 883, 131, 593, 468, 511, 359, 924, 867, 286, 360, 34, 62, 251, 631, 356, 580, 906, 923, 117, 928, 988, 3, 100, 785, 453, 157, 540, 149, 602, 34, 623, 456, 681, 404, 663, 738, 402, 566, 741, 328, 625};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> l = {380, 212, 916, 160, 367, 724, 234, 913, 424, 535, 976, 39, 843, 904, 626, 336, 200, 89, 687, 85, 533, 748, 657, 936, 607, 586, 148, 624, 238, 796, 582, 593, 67, 318, 898, 267, 60, 629, 90, 974, 875, 258, 729, 661, 983, 774, 833, 264, 9, 551};
    vector<int> t = {31, 101, 270, 127, 962, 673, 472, 717, 916, 268, 400, 991, 726, 100, 179, 533, 636, 185, 27, 412, 291, 463, 392, 279, 333, 855, 370, 643, 187, 53, 461, 815, 212, 926, 35, 80, 374, 547, 259, 538, 890, 827, 76, 617, 660, 170, 792, 445, 697, 630};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> l = {8, 2, 1, 10, 8, 6, 3, 1, 2, 5};
    vector<int> t = {17, 27, 26, 11, 1, 27, 23, 12, 11, 13};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> l = {925860128, 352368525, 44902106, 860136733, 471569488, 139173200, 376482278, 463384991, 546870708, 625674455, 556427037, 591760935, 468854534, 455004214, 523333786, 230141605, 52231465, 103657267, 15081092, 502651897, 420460974, 937293703, 135014018, 693974683, 1000000000, 867250346, 641790292, 655972113, 932141290, 360889250, 518975058, 725606408, 316842192, 818357724, 708072309, 966080205, 776030859, 434747924, 688443645, 88292749, 107668054, 809869761, 408399458, 207422940, 745058701, 802273571, 358594999, 786743954, 822666157, 478381787};
    vector<int> t = {925860128, 352368525, 44902106, 860136733, 471569488, 139173200, 376482278, 463384991, 546870708, 625674455, 556427037, 591760935, 468854534, 455004214, 523333786, 230141605, 52231465, 103657267, 15081092, 502651897, 420460974, 937293703, 135014018, 693974683, 1000000000, 867250346, 641790292, 655972113, 932141290, 360889250, 518975058, 725606408, 316842192, 818357724, 708072309, 966080205, 776030859, 434747924, 688443645, 88292749, 107668054, 809869761, 408399458, 207422940, 745058701, 802273571, 358594999, 786743954, 822666157, 478381787};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> l = {2, 4, 3, 2, 2, 1, 10};
    vector<int> t = {2, 6, 3, 7, 0, 2, 0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> l = {8, 2, 1, 10, 8, 6, 3, 1, 2, 5};
    vector<int> t = {17, 27, 26, 11, 1, 27, 23, 12, 11, 13};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> l = {200000000, 400000000, 300000000, 200000000, 200000000, 100000000, 1000000000};
    vector<int> t = {200000000, 600000000, 300000000, 700000000, 0, 200000000, 0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> l = {8, 2, 1, 10, 8, 6, 3, 1, 2, 5, 1000000000};
    vector<int> t = {17, 27, 26, 11, 1, 27, 23, 12, 11, 13, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> l = {3, 4, 5, 6, 2, 3, 4, 8, 7, 6, 5, 4, 5, 6, 7, 3, 4, 2, 3, 4, 5, 5, 6, 6, 3, 4, 6, 8, 7, 6, 2, 1, 4, 3, 6, 7};
    vector<int> t = {1, 2, 0, 0, 1, 2, 3, 0, 0, 1, 2, 3, 4, 5, 4, 3, 2, 1, 1, 3, 2, 3, 4, 4, 5, 2, 5, 4, 3, 3, 3, 3, 3, 3, 1, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> l = {569548986, 215764589, 880641848, 874970314, 446064255, 77814905, 714504435, 414906607, 526301749, 13136570, 327998474, 342691264, 189861235, 956251263, 46012190, 852925377, 962720333, 746289311, 342179100, 631482675, 792426960, 87665299, 856420154, 249037438, 158051303, 654713206, 252742855, 417108801, 90835007, 336611364, 635683956, 812182690, 339970821, 300138076, 888202835, 492389416, 966836661, 729213478, 10420738, 10791478, 830200593, 123424221, 50289889, 597694501, 513997358, 304991453, 590622334, 34503677, 161894056, 169422537};
    vector<int> t = {311235344, 239313357, 440048504, 588558884, 338663599, 408456151, 396655486, 2788683, 22944598, 467861995, 345837908, 44234513, 382369865, 46930527, 160493858, 271817716, 279621058, 527049522, 442974087, 847227192, 816031730, 467297001, 873039797, 927727688, 500698241, 118364707, 911064484, 831614069, 82306379, 582624695, 272124758, 242280810, 406974616, 491348526, 257352374, 401183052, 258958824, 443965436, 569416650, 804553674, 779313232, 995036094, 886411574, 716422494, 624342624, 951791508, 110484543, 82622902, 394149547, 367668179};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> l = {999999999, 954764112, 698299234, 529669741, 969010229, 723519536, 270009622, 90456081, 320654596, 90465823, 973556430, 827897724, 618755284, 261043034, 38008523, 672562800, 292327773, 425827617, 921906343, 335124765, 825416868, 928355021, 236334831, 455096393, 581502934, 732375411, 305852197, 690720293, 929444194, 42797695, 639814529, 425411488, 519100442, 329710726, 443462315, 875754712, 468255192, 882787399, 452635213, 140260848, 65877756, 844545154, 381437458, 56706159, 672763068, 594609711, 933970330, 470890997, 64204558, 189972796};
    vector<int> t = {999999999, 126104866, 455118254, 199740762, 817269745, 804954102, 756281769, 46448211, 846099037, 88808462, 686382376, 122395895, 199484684, 19921030, 791567133, 769319210, 866301373, 325482879, 255173234, 805327608, 300524169, 318923712, 578595375, 318167795, 8339294, 330761256, 524576604, 442946936, 513421013, 684472209, 263948237, 338439546, 493180937, 490708912, 142848565, 81732392, 956415301, 66796346, 392132153, 586246305, 295646874, 90511669, 472929928, 630497925, 234939278, 94681414, 485669600, 690558968, 585410720, 783977077};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> l = {1, 1000000000, 1000000000, 1000000000};
    vector<int> t = {1, 1000000000, 1000000000, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> l = {1, 1};
    vector<int> t = {1000000000, 100000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> l = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> t = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> l = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> t = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> l = {1};
    vector<int> t = {1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> l = {820220465, 196353264, 876903636, 82576392, 308912842, 401610673, 531721693, 197527930, 432813792, 12281275, 768531924, 995943367, 603152014, 745357730, 540703465, 438206722, 985686805, 812311296, 423141427, 725092115, 663299036, 887109728, 151379947, 47102809, 508972255, 916421326, 169117837, 57979367, 185437495, 417945864, 920301887, 547311353, 249981327, 666050417, 65452949, 71470173, 814569807, 980169424, 202270138, 583386905, 242099089, 268193490, 402929587, 610762857, 116457309, 161116779, 562359802, 41961753, 763715509, 434473449};
    vector<int> t = {984642836, 222253498, 873769516, 908129167, 841665269, 303591456, 416003511, 989264022, 338991484, 476496197, 21160759, 573204645, 631811078, 569074843, 913195743, 902898995, 381894114, 834743685, 465502983, 508736279, 613170495, 759573508, 366702820, 919081514, 961209111, 923158713, 742750660, 491047288, 579922061, 573128008, 805883061, 487410655, 602611266, 262075808, 479363588, 885412403, 270062329, 538261608, 73491502, 5483492, 962174508, 416649247, 582383415, 499804978, 198543885, 121472154, 413464687, 598813874, 455715850, 552897178};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> l = {1000000000, 370023821, 306189160, 216710087, 290657769, 895878937, 411023291, 788121820, 241541581, 729111622, 789415902, 287674069, 64352957, 902157623, 676950081, 925418750, 820625540, 479129372, 439939774, 59550316, 841208468, 205280555, 342382244, 98055959, 575318267, 288250723, 360828919, 471104127, 544561321, 223512017, 857380342, 552429122, 74080078, 288719300, 258337660, 767712978, 95228212, 376846851, 926809888, 552521244, 643091530, 607349183, 347827728, 603151721, 982377205, 402258691, 353830528, 692325005, 279376310, 55721483};
    vector<int> t = {0, 782432383, 649331904, 130186751, 57334555, 482971684, 438027567, 242369655, 300793107, 219765137, 216235428, 259120876, 322443175, 165278611, 725483819, 225876150, 495487620, 384743801, 114264426, 616859016, 107249474, 542908612, 609119371, 126439239, 649609243, 940456761, 752696065, 838071763, 325546253, 506226811, 806099430, 783922481, 630825425, 431331532, 100780560, 42802127, 95403709, 716722897, 307216028, 323702369, 368982196, 320677464, 933818456, 273305876, 161196488, 3115038, 897265171, 634328615, 520888356, 821456648};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> l = {999999999, 999999999, 555555444, 1, 3, 5, 4};
    vector<int> t = {555777888, 777777888, 777777777, 777777777, 777777777, 777, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> l = {5, 11, 6, 10, 12, 8};
    vector<int> t = {0, 1, 4, 7, 8, 15};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> l = {1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> t = {1000000000, 1000000000, 1000000000, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> l = {8, 2, 1, 10, 8, 6, 3, 1, 2, 5};
    vector<int> t = {17, 27, 26, 11, 1, 27, 23, 12, 11, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> l = {1, 1};
    vector<int> t = {1, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> l = {1, 2, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    vector<int> t = {100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> l = {1, 1, 1, 1, 1, 1};
    vector<int> t = {1, 2, 2, 3, 3, 4};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
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
    vector<int> l = {8, 2, 1, 10, 8, 6, 3, 1, 2, 1000000000};
    vector<int> t = {17, 27, 26, 11, 1, 27, 23, 12, 11, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> l = {670424378, 192302473, 88932160, 970426676, 970043921, 615828216, 303486174, 130600728, 333271477, 818746125, 789865151, 576251406, 109196699, 79540792, 639992621, 29897492, 604292191, 789507530, 705677736, 510827286, 118554283, 698685594, 540256729, 967352929, 542568526, 320762207, 985747950, 12193263, 814384304, 253281549, 540847679, 792530035, 975359441, 581337462, 911273190, 517918292, 227877222, 139174182, 821739862, 577675105, 20928798, 286030330, 207462869, 536739188, 146332123, 291496886, 187479961, 807658044, 135767545, 801057039};
    vector<int> t = {198463789, 948011969, 754094738, 880370895, 599260207, 145338164, 706933788, 484939523, 923419286, 337346049, 441079334, 21123970, 677884151, 221924516, 993640991, 438516649, 872526036, 940712684, 780225010, 186624942, 345453962, 97196832, 950969055, 53780612, 583903192, 241049688, 778516431, 519817428, 210862651, 121172233, 957804709, 346889410, 952659974, 830369891, 41801741, 669844238, 128639114, 273177422, 639812734, 107825815, 716164383, 660597149, 107038673, 625232111, 418175890, 915283870, 543706754, 949310477, 107723585, 139657774};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> l = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    vector<int> t = {560000000, 780000000, 980000000, 575000000, 1, 2, 3, 312428343, 1000000000, 238432922};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> l = {8, 2, 3, 2, 2, 2};
    vector<int> t = {0, 0, 1, 3, 3, 5};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> l = {8, 1000000000, 1, 10, 8, 6, 3, 1, 2, 5};
    vector<int> t = {17, 27, 26, 1000000000, 1, 27, 23, 12, 11, 13};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> l = {2, 2};
    vector<int> t = {999999999, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> l = {1, 10, 100, 1000, 1000, 10000, 100000};
    vector<int> t = {1000000000, 100000000, 999999999, 888888888, 555555, 222222, 444444444};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
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
    vector<int> l = {1000000000, 32423, 234230, 1000000000, 132423, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 23, 1000000000, 1, 324, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1234000, 1000000000, 232234, 1000000000, 102342300, 1000000000};
    vector<int> t = {0, 1, 2, 1, 3, 3, 23, 12, 312, 3, 1, 21, 32423, 3, 12, 324, 423, 21, 3, 12, 423423, 3, 12, 3, 4234, 12, 3, 12, 432, 3, 12, 3, 12, 12, 3, 12, 312, 12, 3, 423, 12, 3, 12, 12, 3, 12312, 3, 232, 12, 123};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> l = {1, 3, 3, 3, 3, 1};
    vector<int> t = {1, 1, 1, 3, 3, 5};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> l = {1, 1, 1, 1};
    vector<int> t = {1, 5, 10, 15};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> l = {1000000000};
    vector<int> t = {1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> l = {800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000};
    vector<int> t = {41000, 467000, 334000, 500000, 169000, 724000, 478000, 358000, 962000, 464000, 705000, 145000, 281000, 827000, 961000, 491000, 995000, 942000, 827000, 436000, 391000, 604000, 902000, 153000, 292000, 382000, 421000, 716000, 718000, 895000, 447000, 726000, 771000, 538000, 869000, 912000, 667000, 299000, 35000, 894000, 703000, 811000, 322000, 333000, 673000, 664000, 141000, 711000, 253000, 868000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> l = {567209, 506991, 329053, 852706, 867953, 961444, 232850, 644257, 825236, 897322, 545094, 526131, 341449, 368894, 271970, 106583};
    vector<int> t = {282701, 518594, 317332, 36594, 306273, 500091, 727441, 401290, 297225, 661844, 770189, 204108, 184719, 401369, 525252, 78727};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> l = {1000000000};
    vector<int> t = {1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> l = {1000000000, 1000000000, 1000000000};
    vector<int> t = {1000000000, 1000000000, 500000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
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
    vector<int> l = {1, 1000000000, 2, 5, 100000000, 5, 1000000000};
    vector<int> t = {4551, 1000000000, 245656, 546645, 100000000, 50000, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> l = {100};
    vector<int> t = {100};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> l = {100000000, 800000000, 1};
    vector<int> t = {1000000000, 1000000000, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> l = {3, 3, 3, 3, 1, 1};
    vector<int> t = {0, 2, 0, 2, 0, 4};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> l = {2, 3, 3, 3, 3, 2};
    vector<int> t = {1, 2, 2, 4, 4, 6};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> l = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> t = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> l = {2, 2, 2, 2, 2, 2};
    vector<int> t = {1, 3, 3, 5, 5, 7};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> l = {2, 400000000, 400000000, 400000000, 400000000, 400000001, 10};
    vector<int> t = {500000000, 500000000, 500000000, 500000000, 500000000, 500000000, 500000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> l = {3, 3, 1, 3, 3, 1};
    vector<int> t = {0, 0, 0, 2, 2, 4};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> l = {1};
    vector<int> t = {0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
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
    vector<int> l = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> t = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> l = {1, 1, 3, 3, 3, 3};
    vector<int> t = {1, 4, 7, 7, 7, 7};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> l = {1, 1, 1, 1, 1, 1};
    vector<int> t = {1, 1, 1, 1, 1, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> l = {100, 100, 100};
    vector<int> t = {51, 52, 53};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> l = {1, 5, 5, 3, 3, 1};
    vector<int> t = {0, 0, 0, 5, 5, 7};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> l = {2, 2, 3, 3, 2};
    vector<int> t = {1, 3, 4, 5, 7};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> l = {1, 1, 2, 2, 2, 2, 2, 2, 1, 1};
    vector<int> t = {1, 1, 2, 2, 2, 3, 3, 3, 5, 5};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> l = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> t = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> l = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> t = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> l = {100000000};
    vector<int> t = {100000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> l = {2, 2, 9, 9, 2, 10, 10, 2, 2};
    vector<int> t = {1, 1, 1, 1, 4, 5, 5, 13, 13};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> l = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> t = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> l = {1, 2, 2, 2, 2, 1};
    vector<int> t = {0, 1, 1, 3, 3, 5};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> l = {500000000, 500000001, 500000002, 500000003, 500000004, 500000005, 500000006, 500000007, 500000008, 500000009, 500000010, 500000011, 500000012, 500000013, 500000014, 500000015, 500000016, 500000017, 500000018, 500000019, 500000020, 500000021, 500000022, 500000023, 500000024, 500000025, 500000026, 500000027, 500000028, 500000029, 500000030, 500000031, 500000032, 500000033, 500000034, 500000035, 500000036, 500000037, 500000038, 500000039, 500000040, 500000041, 500000042, 500000043, 500000044, 500000045, 500000046, 500000047, 500000048, 500000049};
    vector<int> t = {999999000, 999999001, 999999002, 999999003, 999999004, 999999005, 999999006, 999999007, 999999008, 999999009, 999999010, 999999011, 999999012, 999999013, 999999014, 999999015, 999999016, 999999017, 999999018, 999999019, 999999020, 999999021, 999999022, 999999023, 999999024, 999999025, 999999026, 999999027, 999999028, 999999029, 999999030, 999999031, 999999032, 999999033, 999999034, 999999035, 999999036, 999999037, 999999038, 999999039, 999999040, 999999041, 999999042, 999999043, 999999044, 999999045, 999999046, 999999047, 999999048, 999999049};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> l = {10, 10, 10, 7, 7, 10};
    vector<int> t = {0, 5, 5, 13, 13, 18};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> l = {2, 2, 2, 2, 2, 2};
    vector<int> t = {1, 2, 2, 4, 4, 5};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> l = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> t = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> l = {687550996, 338750699, 604867073, 600220644, 98903832, 441490773, 486576557, 889634912, 182342179, 911893884, 783230330, 221127368, 533045516, 544976741, 178814066, 586042693, 923644432, 177194157, 812119359, 778302144, 296275787, 869674408, 817354080, 978259510, 5110645, 756556284, 86976628, 64750822, 897697092, 694671124, 17654015, 473801002, 890779021, 608450670, 654854982, 365595665, 760347142, 92731564, 257114085, 668011586, 900354186, 429095467, 139973806, 177241927, 83199721, 264900819, 950506268, 752438740, 279088355, 913999722};
    vector<int> t = {261735654, 661528371, 816541153, 181555021, 913172414, 101678681, 57948970, 941895457, 654093410, 822225454, 142240600, 770452974, 493214802, 73628093, 421027439, 371446669, 833574810, 44714096, 215739744, 366735532, 903867609, 314741973, 877305022, 558931261, 736022045, 41015470, 200924650, 908501540, 811230553, 362097003, 838208797, 862811282, 844270439, 465015441, 591695815, 986670776, 275333345, 650398082, 466149843, 429720457, 933518694, 838028418, 838477896, 859081767, 559469561, 602981519, 88018953, 16557402, 936943946, 585506116};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 14, 39, 10, 19, 1, 1, 1, 15, 1000, 19, 21, 17, 18, 36, 38, 1, 14, 36, 37, 1000, 14555, 13, 17, 17};
    vector<int> t = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 100000000, 100000001, 100000002, 15, 25, 42, 36, 10, 37, 29, 19, 17, 1, 29, 37, 39, 1000000, 136, 39, 1777, 35, 39, 1, 6};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> l = {1, 1, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1};
    vector<int> t = {1, 1, 1, 1, 1, 1, 4, 4, 4, 7, 7, 7};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> l = {12, 23, 1000000000};
    vector<int> t = {12, 23, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> l = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> t = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> l = {10, 10, 10, 10};
    vector<int> t = {12, 5, 20, 0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> l = {1, 1, 5, 5};
    vector<int> t = {6, 1, 1, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> l = {5, 5, 5, 5, 5, 5, 1, 1, 1, 1};
    vector<int> t = {0, 0, 0, 5, 5, 5, 1, 1, 7, 7};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> l = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> t = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> l = {2, 4, 4, 2, 4};
    vector<int> t = {1, 4, 1, 6, 4};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> l = {6807, 5249, 73, 3658, 8930, 1272, 7544, 878, 7923, 7709, 4440, 8165, 4492, 3042, 7987, 2503, 2327, 1729, 8840, 2612, 4303, 3169, 7709, 7157, 9560, 933, 3099, 278, 1816, 5335, 9097, 7826, 3512, 9267, 3810, 7633, 979, 9149, 6579, 8821, 1967, 672, 1393, 9336, 5485, 1745, 5228, 4091, 194, 6357};
    vector<int> t = {5001, 1153, 6708, 7944, 5668, 1490, 8124, 2196, 9530, 903, 7722, 4666, 8549, 8024, 7801, 6853, 977, 7408, 8228, 4933, 298, 8981, 8635, 8013, 3865, 9814, 9063, 4536, 9425, 1669, 4115, 94, 5629, 6501, 6517, 4195, 105, 404, 9451, 4298, 2188, 1123, 9505, 6882, 6752, 1566, 6716, 337, 4438, 3144};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> l = {1, 1, 1, 1};
    vector<int> t = {2, 3, 1, 0};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> l = {3, 6, 5, 5, 6, 3};
    vector<int> t = {10, 6, 5, 6, 2, 1};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> l = {10, 1, 3, 1, 3, 1};
    vector<int> t = {0, 1, 3, 4, 7, 8};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> l = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> t = {0, 4, 4, 4, 4, 8, 8, 8, 8, 12};
    EelAndRabbit* pObj = new EelAndRabbit();
    clock_t start = clock();
    int result = pObj->getmax(l, t);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=15500&pm=12575
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define rep(i,n) FOR(i,1,(n)) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define C(a) memset((a),0,sizeof(a)) 
#define ll long long 
#define all(c) (c).begin(), (c).end() 
#define SORT(c) sort(all(c)) 
#define VI vector<int> 
class EelAndRabbit  
  { 
    public: 
       int getmax( vector <int> l, vector <int> t ) 
    { 
      VI cool; 
      rept(i, L(t)) { 
        cool.pb(t[i]); 
        cool.pb(t[i] + l[i]); 
      } 
      SORT(cool); 
      cool.resize(unique(all(cool)) - cool.begin()); 
      int ans = 0; 
      rept(i, L(cool)) { 
        rept(j, i + 1) { 
          int cur = 0; 
          rept(z, L(t)) { 
            if (cool[i] >= t[z] && cool[i] <= t[z] + l[z]) ++cur; else 
            if (cool[j] >= t[z] && cool[j] <= t[z] + l[z]) ++cur; 
          } 
          ans = max(ans, cur); 
        } 
      } 
      return ans; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/