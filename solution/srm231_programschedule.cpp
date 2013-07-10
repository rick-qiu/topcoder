/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3945
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

class ProgramSchedule {
public:
    int schedule(vector<int> A, vector<int> B);
};

int ProgramSchedule::schedule(vector<int> A, vector<int> B) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {2, 2, 4, 2};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {3, 1, 2};
    vector<int> B = {4, 3, 9};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {1000};
    vector<int> B = {1000};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {654, 13, 89, 651, 67, 3, 21, 654, 312};
    vector<int> B = {56, 3, 56, 651, 897, 32, 654, 897, 321};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2504;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {56, 3, 56, 651, 897, 32, 654, 897, 321};
    vector<int> B = {654, 13, 89, 651, 67, 3, 21, 654, 312};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3570;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {114, 46, 94, 67, 7, 145, 23, 91, 81, 7, 59, 47, 129, 64, 25, 30, 146, 55, 78, 102, 109, 125, 124, 23, 32, 134, 131, 129, 95, 97, 18, 71, 137, 68, 30, 105, 27, 122, 60, 128, 6, 81, 81, 95, 66, 108, 54, 12, 120, 94};
    vector<int> B = {371, 15, 470, 696, 87, 205, 647, 171, 292, 712, 398, 368, 756, 355, 226, 585, 762, 849, 119, 176, 481, 480, 604, 511, 730, 97, 187, 198, 350, 802, 125, 10, 290, 383, 547, 163, 142, 465, 514, 534, 464, 299, 16, 162, 117, 309, 21, 184, 686, 46};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3902;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {292, 109, 142, 115, 93, 186, 178, 73, 296, 31, 232, 268, 276, 234, 30, 282, 84, 229, 221, 107, 6, 195, 70, 35, 45, 92, 197, 25, 66, 289, 1, 34, 289, 126, 300, 95, 25, 82, 300, 227, 187, 4, 184, 85, 224, 147, 45, 188, 76, 233};
    vector<int> B = {54, 204, 296, 62, 156, 241, 302, 10, 298, 278, 279, 295, 150, 65, 157, 93, 265, 234, 217, 202, 258, 244, 57, 247, 218, 267, 144, 53, 290, 214, 71, 179, 296, 153, 49, 160, 25, 299, 189, 119, 64, 206, 68, 236, 236, 176, 66, 305, 176, 125};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7360;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {22, 157, 24, 136, 21, 19, 154, 106, 129, 175, 41, 39, 66, 85, 158, 197, 119, 169, 84, 27, 86, 175, 188, 17, 237, 32, 86, 160, 164, 248, 188, 149, 180, 12, 222, 23, 186, 105, 118, 202, 135, 28, 121, 146, 197, 92, 196, 91, 115, 197};
    vector<int> B = {75, 1, 161, 32, 146, 188, 252, 128, 63, 133, 308, 25, 188, 89, 131, 168, 69, 107, 312, 292, 48, 159, 208, 222, 86, 8, 268, 32, 340, 54, 63, 251, 91, 31, 45, 326, 58, 161, 322, 340, 273, 298, 208, 282, 96, 255, 164, 322, 210, 325};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 6025;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {268, 412, 281, 270, 376, 186, 348, 381, 17, 360, 20, 444, 306, 247, 419, 381, 82, 422, 286, 384, 209, 52, 381, 14, 1, 480, 113, 418, 190, 381, 307, 113, 12, 289, 261, 282, 109, 268, 167, 89, 123, 22, 361, 453, 120, 49, 408, 169, 255, 494};
    vector<int> B = {550, 496, 13, 494, 537, 41, 308, 152, 262, 322, 85, 334, 501, 188, 489, 132, 246, 4, 243, 590, 446, 416, 166, 213, 220, 189, 329, 560, 390, 269, 556, 8, 89, 298, 261, 208, 444, 366, 454, 123, 73, 551, 10, 511, 170, 338, 366, 218, 339, 17};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 12484;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {249, 908, 750, 529, 148, 767, 679, 620, 789, 279, 3, 228, 891, 389, 767, 93, 255, 212, 132, 114, 428, 13, 383, 96, 361, 210, 142, 917, 323, 282, 933, 752, 106, 569, 668, 795, 944, 868, 362, 750, 703, 308, 870, 336, 408, 463, 589, 364, 952, 483};
    vector<int> B = {139, 61, 96, 129, 114, 84, 25, 70, 101, 124, 33, 67, 57, 123, 124, 99, 92, 33, 35, 1, 53, 46, 108, 10, 19, 118, 83, 107, 131, 57, 23, 13, 69, 77, 107, 76, 83, 94, 134, 69, 142, 13, 139, 127, 5, 82, 33, 130, 71, 77};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 24181;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {834, 369, 184, 262, 822, 70, 850, 839, 500, 164, 359, 84, 811, 409, 903, 238, 738, 665, 652, 312, 914, 380, 766, 461, 44, 66, 535, 720, 309, 649, 197, 196, 233, 561, 411, 159, 725, 272, 212, 634, 551, 584, 301, 185, 107, 280, 68, 152, 437, 516};
    vector<int> B = {424, 662, 234, 180, 647, 8, 462, 452, 479, 88, 522, 288, 469, 315, 164, 109, 403, 391, 507, 289, 130, 566, 385, 64, 359, 204, 558, 450, 318, 289, 223, 52, 598, 558, 261, 34, 304, 643, 431, 481, 596, 50, 19, 659, 334, 540, 313, 296, 556, 444};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 21698;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {101, 30, 12, 57, 134, 82, 157, 4, 46, 77, 94, 44, 101, 114, 87, 69, 105, 112, 3, 156, 69, 97, 16, 9, 6, 19, 23, 77, 62, 57, 81, 83, 64, 97, 9, 130, 150, 87, 113, 116, 26, 26, 112, 85, 21, 71, 138, 116, 141, 95};
    vector<int> B = {68, 103, 81, 83, 64, 103, 55, 50, 104, 82, 81, 34, 1, 10, 39, 74, 81, 62, 110, 1, 64, 107, 119, 53, 2, 53, 100, 38, 35, 14, 112, 11, 2, 87, 57, 31, 45, 102, 30, 70, 102, 105, 6, 23, 20, 17, 36, 100, 101, 32};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3782;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {21, 117, 63, 233, 95, 59, 142, 176, 15, 136, 81, 152, 244, 218, 30, 253, 114, 280, 261, 285, 70, 207, 133, 38, 32, 54, 330, 172, 311, 63, 329, 177, 209, 102, 134, 199, 328, 47, 180, 305, 103, 100, 171, 241, 157, 230, 293, 251, 24, 313};
    vector<int> B = {620, 183, 13, 350, 14, 11, 197, 103, 436, 465, 168, 630, 145, 796, 120, 774, 591, 122, 3, 347, 553, 732, 105, 442, 634, 20, 125, 205, 165, 803, 774, 244, 168, 783, 102, 812, 360, 413, 242, 740, 142, 478, 593, 393, 23, 138, 254, 140, 366, 504};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 8281;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {119, 87, 107, 32, 35, 77, 31, 26, 98, 46, 115, 41, 119, 115, 80, 120, 126, 12, 35, 116, 37, 111, 43, 112, 71, 108, 32, 7, 109, 91, 128, 34, 117, 111, 115, 6, 90, 60, 62, 31, 97, 6, 12, 22, 56, 117, 95, 81, 52, 37};
    vector<int> B = {371, 186, 87, 49, 270, 17, 357, 29, 21, 298, 240, 376, 320, 91, 266, 78, 69, 379, 68, 239, 390, 114, 118, 340, 17, 397, 294, 29, 277, 23, 21, 77, 259, 206, 33, 297, 40, 73, 65, 62, 296, 280, 255, 67, 222, 217, 163, 360, 161, 318};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3604;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {25, 364, 127, 108, 78, 296, 291, 184, 346, 143, 166, 153, 277, 323, 182, 285, 77, 116, 241, 357, 243, 214, 32, 266, 226, 221, 290, 235, 45, 68, 49, 33, 147, 302, 51, 3, 17, 52, 352, 309, 197, 316, 58, 283, 59, 346, 93, 188, 358, 113};
    vector<int> B = {690, 908, 594, 103, 93, 430, 5, 221, 375, 51, 37, 769, 322, 416, 758, 516, 366, 582, 370, 652, 663, 472, 352, 824, 906, 903, 806, 17, 808, 315, 885, 720, 4, 177, 451, 678, 294, 268, 503, 907, 530, 249, 860, 646, 770, 323, 152, 854, 720, 559};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 9309;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {195, 152, 237, 104, 308, 282, 148, 193, 342, 61, 305, 174, 21, 215, 276, 181, 346, 161, 199, 133, 353, 31, 35, 125, 182, 14, 248, 33, 4, 269, 329, 270, 97, 278, 219, 79, 370, 278, 304, 368, 190, 56, 171, 336, 137, 120, 58, 140, 104, 178};
    vector<int> B = {175, 31, 153, 227, 404, 68, 304, 80, 378, 363, 51, 54, 369, 145, 234, 197, 313, 437, 235, 231, 221, 112, 171, 148, 171, 342, 224, 5, 67, 296, 100, 315, 403, 131, 154, 195, 166, 334, 151, 371, 111, 72, 345, 164, 324, 176, 381, 287, 1, 189};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 9410;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {64, 44, 34, 3, 89, 8, 101, 37, 1, 14, 56, 74, 104, 64, 46, 34, 83, 98, 77, 96, 95, 22, 64, 66, 49, 85, 81, 10, 69, 26, 37, 65, 84, 68, 71, 103, 13, 63, 87, 72, 84, 61, 102, 17, 84, 13, 48, 86, 96, 14};
    vector<int> B = {49, 14, 10, 19, 71, 3, 17, 19, 37, 17, 27, 16, 28, 73, 82, 73, 43, 64, 48, 4, 35, 63, 38, 57, 51, 59, 82, 47, 60, 52, 15, 65, 87, 60, 7, 69, 27, 45, 43, 41, 34, 55, 35, 18, 83, 14, 24, 10, 82, 12};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2965;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {101, 187, 288, 273, 112, 175, 162, 293, 215, 341, 193, 255, 170, 297, 268, 73, 339, 210, 25, 7, 206, 180, 69, 57, 309, 214, 201, 282, 215, 351, 197, 54, 261, 218, 251, 184, 73, 344, 27, 272, 35, 244, 183, 244, 321, 113, 178, 174, 202, 240};
    vector<int> B = {174, 10, 56, 200, 235, 296, 141, 140, 112, 56, 293, 18, 121, 104, 265, 47, 251, 47, 168, 130, 283, 106, 19, 317, 338, 28, 103, 271, 39, 37, 362, 372, 206, 179, 136, 298, 223, 344, 357, 201, 237, 166, 51, 95, 316, 283, 11, 148, 35, 369};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 9893;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {705, 276, 245, 286, 689, 135, 521, 303, 666, 670, 353, 315, 457, 309, 713, 426, 90, 145, 345, 52, 277, 494, 88, 66, 65, 204, 157, 85, 216, 395, 569, 256, 246, 611, 356, 312, 214, 414, 26, 397, 707, 169, 570, 656, 704, 533, 43, 156, 198, 668};
    vector<int> B = {1, 216, 167, 702, 491, 731, 165, 559, 745, 599, 277, 6, 218, 660, 804, 606, 450, 411, 650, 146, 1, 763, 751, 299, 645, 701, 195, 544, 70, 268, 691, 563, 263, 508, 800, 228, 301, 798, 161, 141, 159, 765, 56, 72, 285, 640, 562, 616, 445, 60};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 17554;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {507, 231, 378, 50, 466, 285, 471, 464, 104, 117, 413, 15, 328, 555, 91, 518, 42, 30, 76, 552, 139, 338, 316, 27, 484, 422, 9, 158, 383, 69, 405, 162, 50, 84, 366, 330, 288, 391, 467, 392, 248, 515, 268, 80, 48, 259, 191, 310, 34, 427};
    vector<int> B = {40, 32, 38, 31, 49, 41, 68, 101, 99, 80, 70, 102, 23, 16, 49, 71, 92, 37, 62, 102, 83, 82, 97, 53, 84, 40, 107, 14, 53, 12, 91, 74, 69, 35, 81, 13, 67, 64, 73, 86, 43, 27, 61, 106, 87, 10, 11, 77, 43, 85};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 13363;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {488, 328, 389, 309, 481, 733, 680, 627, 520, 505, 780, 472, 481, 414, 212, 640, 677, 193, 24, 171, 115, 590, 37, 553, 494, 431, 364, 376, 347, 667, 611, 803, 31, 821, 692, 750, 778, 255, 513, 495, 183, 443, 614, 644, 699, 266, 690, 422, 62, 505};
    vector<int> B = {57, 224, 228, 187, 160, 59, 203, 174, 221, 47, 64, 198, 34, 108, 62, 70, 16, 108, 46, 60, 98, 127, 75, 126, 114, 70, 30, 120, 162, 224, 194, 174, 59, 207, 210, 227, 225, 38, 124, 123, 182, 148, 13, 58, 177, 135, 54, 87, 221, 112};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 23388;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {45, 141, 49, 174, 114, 11, 35, 15, 6, 142, 164, 63, 170, 81, 24, 121, 125, 129, 32, 44, 19, 114, 105, 63, 204, 61, 149, 9, 108, 1, 39, 38, 182, 88, 73, 163, 70, 234, 123, 213, 133, 169, 184, 231, 220, 133, 176, 67, 112, 191};
    vector<int> B = {148, 198, 237, 110, 173, 186, 221, 149, 131, 200, 191, 207, 72, 149, 26, 231, 155, 126, 100, 191, 200, 189, 189, 9, 139, 65, 60, 108, 106, 196, 87, 212, 144, 156, 217, 196, 170, 153, 56, 71, 132, 40, 164, 135, 228, 24, 196, 111, 36, 20};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 5366;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {208, 543, 429, 849, 785, 420, 88, 446, 828, 446, 574, 314, 296, 309, 706, 684, 607, 215, 670, 741, 590, 883, 445, 352, 22, 247, 207, 658, 385, 569, 109, 588, 135, 594, 813, 680, 519, 308, 481, 768, 835, 514, 598, 134, 174, 765, 872, 821, 712, 492};
    vector<int> B = {546, 209, 25, 752, 452, 333, 695, 313, 113, 762, 271, 253, 256, 109, 200, 399, 700, 124, 740, 481, 277, 92, 188, 422, 232, 104, 344, 419, 293, 625, 734, 613, 97, 465, 747, 627, 186, 408, 481, 26, 177, 712, 413, 589, 467, 529, 88, 742, 21, 700};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 25449;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {735, 727, 677, 664, 802, 518, 404, 233, 561, 567, 403, 450, 9, 828, 13, 375, 760, 290, 778, 774, 630, 814, 164, 815, 597, 727, 121, 208, 806, 810, 39, 265, 820, 241, 68, 778, 626, 597, 181, 617, 133, 37, 611, 483, 137, 576, 359, 370, 818, 195};
    vector<int> B = {341, 125, 60, 326, 661, 899, 618, 410, 701, 932, 264, 698, 399, 911, 259, 460, 663, 910, 468, 186, 465, 829, 890, 191, 249, 398, 795, 393, 892, 631, 189, 210, 727, 50, 177, 605, 336, 922, 884, 98, 836, 610, 398, 42, 300, 124, 817, 835, 102, 322};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 24253;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {856, 326, 529, 638, 678, 517, 200, 443, 675, 783, 829, 601, 681, 264, 284, 76, 121, 933, 242, 43, 389, 668, 449, 758, 335, 820, 448, 688, 829, 208, 376, 603, 86, 296, 62, 90, 35, 151, 813, 163, 661, 414, 291, 659, 380, 667, 80, 912, 278, 88};
    vector<int> B = {339, 634, 515, 452, 683, 535, 433, 152, 323, 464, 448, 576, 452, 55, 66, 676, 468, 537, 552, 102, 17, 620, 234, 378, 600, 688, 524, 18, 298, 515, 385, 72, 200, 52, 54, 567, 215, 588, 519, 173, 222, 16, 696, 80, 230, 702, 21, 356, 350, 151};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 22432;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {372, 15, 142, 35, 599, 790, 481, 701, 672, 948, 832, 183, 831, 320, 813, 46, 241, 128, 834, 990, 281, 493, 589, 337, 760, 474, 210, 568, 492, 412, 19, 681, 159, 469, 914, 604, 943, 751, 936, 127, 928, 783, 167, 838, 580, 393, 118, 673, 783, 309};
    vector<int> B = {497, 274, 512, 609, 267, 252, 497, 218, 423, 700, 697, 206, 228, 24, 417, 452, 435, 440, 77, 292, 467, 160, 586, 437, 455, 505, 389, 414, 226, 76, 101, 234, 305, 42, 152, 244, 673, 594, 9, 197, 484, 457, 24, 533, 334, 133, 575, 33, 405, 394};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 25773;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {444, 311, 443, 428, 409, 192, 417, 465, 363, 301, 30, 198, 152, 233, 66, 424, 311, 171, 163, 4, 176, 383, 30, 424, 253, 416, 278, 402, 226, 193, 39, 123, 176, 133, 223, 401, 103, 442, 448, 203, 132, 110, 182, 372, 294, 330, 84, 129, 261, 300};
    vector<int> B = {413, 346, 266, 475, 9, 145, 259, 479, 313, 269, 115, 15, 260, 291, 61, 349, 46, 127, 92, 36, 190, 188, 90, 156, 354, 136, 150, 457, 296, 43, 260, 357, 364, 178, 12, 379, 257, 57, 359, 426, 43, 354, 177, 451, 245, 364, 481, 331, 413, 183};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 12800;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {101, 92, 288, 211, 353, 94, 63, 275, 232, 69, 385, 39, 372, 384, 43, 143, 163, 367, 122, 334, 93, 177, 394, 58, 45, 203, 327, 376, 401, 258, 369, 27, 379, 358, 294, 327, 230, 286, 99, 367, 298, 175, 255, 340, 109, 264, 18, 237, 239, 41};
    vector<int> B = {399, 481, 556, 708, 203, 394, 22, 125, 403, 491, 75, 503, 26, 69, 544, 56, 635, 354, 338, 435, 440, 552, 600, 186, 86, 722, 659, 232, 589, 357, 361, 731, 559, 758, 315, 86, 226, 247, 689, 54, 157, 47, 172, 295, 268, 428, 548, 130, 572, 144};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 11196;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {729, 275, 829, 424, 782, 576, 910, 189, 578, 769, 713, 725, 77, 39, 374, 79, 790, 403, 106, 210, 7, 287, 334, 794, 150, 543, 275, 265, 311, 297, 260, 751, 277, 791, 508, 17, 174, 494, 412, 298, 212, 196, 393, 521, 672, 501, 83, 762, 244, 805};
    vector<int> B = {548, 429, 369, 384, 491, 355, 181, 180, 72, 558, 152, 389, 3, 104, 628, 296, 170, 234, 439, 630, 24, 140, 588, 33, 446, 308, 109, 575, 133, 344, 248, 508, 500, 241, 644, 196, 432, 209, 630, 217, 28, 598, 436, 643, 639, 468, 621, 136, 46, 405};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 21214;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {440, 505, 154, 57, 588, 327, 94, 18, 360, 686, 413, 133, 417, 69, 794, 577, 588, 7, 353, 635, 238, 44, 802, 93, 438, 278, 703, 122, 25, 788, 462, 331, 824, 350, 452, 784, 83, 585, 696, 739, 834, 409, 658, 32, 291, 144, 306, 15, 638, 683};
    vector<int> B = {63, 136, 117, 121, 86, 47, 59, 71, 129, 170, 6, 150, 171, 106, 99, 9, 59, 174, 64, 29, 54, 50, 148, 175, 18, 16, 79, 17, 127, 133, 170, 178, 173, 161, 37, 50, 32, 26, 33, 132, 107, 14, 10, 59, 14, 15, 26, 98, 150, 128};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 20068;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {373, 750, 517, 718, 452, 224, 310, 786, 371, 258, 42, 724, 328, 696, 336, 721, 138, 521, 300, 32, 207, 213, 494, 780, 59, 26, 341, 33, 406, 628, 709, 543, 706, 284, 2, 333, 582, 216, 534, 618, 354, 742, 221, 702, 32, 508, 765, 719, 427, 107};
    vector<int> B = {26, 634, 46, 327, 129, 431, 626, 360, 441, 485, 196, 594, 398, 412, 30, 155, 412, 345, 622, 490, 361, 255, 452, 536, 508, 439, 637, 348, 645, 569, 211, 466, 603, 512, 242, 491, 577, 121, 61, 472, 571, 351, 314, 274, 13, 135, 25, 529, 391, 25};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 20901;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {201, 87, 484, 415, 149, 430, 307, 246, 276, 226, 490, 449, 443, 86, 452, 520, 225, 190, 83, 113, 127, 413, 401, 484, 497, 483, 375, 135, 110, 422, 122, 468, 486, 462, 469, 447, 119, 35, 346, 277, 277, 114, 139, 23, 54, 229, 139, 3, 206, 342};
    vector<int> B = {250, 560, 196, 92, 420, 173, 564, 523, 581, 246, 406, 450, 187, 109, 438, 313, 507, 317, 523, 340, 263, 279, 230, 47, 229, 346, 474, 324, 566, 463, 365, 244, 585, 395, 256, 269, 171, 223, 355, 252, 398, 239, 503, 180, 298, 107, 265, 431, 512, 102};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 14123;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {197, 223, 212, 63, 122, 45, 35, 36, 236, 186, 42, 130, 219, 29, 171, 78, 38, 176, 235, 222, 75, 74, 165, 195, 167, 84, 60, 172, 32, 236, 21, 108, 127, 106, 173, 157, 198, 198, 151, 200, 223, 107, 114, 157, 199, 202, 74, 198, 199, 46};
    vector<int> B = {374, 211, 154, 245, 100, 222, 554, 403, 566, 53, 443, 590, 191, 368, 589, 360, 53, 239, 282, 444, 253, 605, 327, 142, 207, 326, 358, 219, 489, 279, 357, 559, 318, 123, 239, 418, 285, 388, 577, 195, 536, 72, 121, 252, 139, 532, 383, 551, 496, 499};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 6966;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {133, 43, 92, 169, 5, 113, 222, 76, 148, 201, 73, 147, 213, 43, 78, 281, 278, 125, 56, 228, 291, 356, 119, 32, 264, 138, 326, 64, 64, 335, 313, 191, 141, 166, 264, 206, 215, 35, 143, 157, 40, 173, 25, 81, 206, 44, 203, 108, 192, 318};
    vector<int> B = {114, 40, 340, 156, 252, 31, 143, 338, 168, 75, 289, 340, 259, 232, 1, 296, 161, 201, 267, 166, 83, 48, 5, 234, 75, 349, 247, 75, 83, 269, 250, 262, 22, 48, 181, 108, 371, 322, 50, 2, 297, 68, 78, 174, 319, 291, 120, 364, 98, 64};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7935;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {808, 283, 225, 775, 658, 244, 850, 388, 460, 23, 658, 713, 526, 278, 557, 399, 162, 465, 645, 656, 112, 221, 567, 753, 225, 571, 133, 307, 78, 520, 246, 56, 419, 332, 179, 143, 770, 98, 231, 818, 720, 253, 297, 470, 308, 347, 466, 836, 207, 502};
    vector<int> B = {481, 133, 123, 10, 126, 188, 402, 157, 177, 356, 318, 357, 286, 163, 14, 236, 17, 441, 35, 320, 341, 248, 135, 157, 71, 175, 437, 154, 369, 299, 373, 237, 437, 318, 94, 19, 414, 134, 156, 416, 26, 283, 19, 135, 353, 376, 302, 287, 379, 261};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 20968;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {351, 259, 354, 358, 166, 424, 462, 351, 360, 290, 4, 451, 426, 107, 123, 9, 135, 109, 405, 407, 60, 369, 273, 119, 369, 8, 440, 271, 419, 63, 288, 121, 443, 186, 142, 412, 149, 150, 382, 356, 253, 302, 62, 228, 255, 449, 395, 462, 299, 229};
    vector<int> B = {18, 11, 20, 13, 2, 5, 9, 12, 20, 12, 12, 15, 3, 4, 15, 15, 11, 18, 4, 13, 17, 13, 7, 17, 17, 6, 12, 20, 3, 3, 15, 6, 6, 12, 4, 16, 8, 6, 14, 20, 16, 19, 8, 3, 13, 18, 18, 12, 15, 3};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 13507;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {505, 607, 347, 5, 263, 299, 238, 290, 247, 226, 343, 314, 345, 352, 559, 79, 14, 438, 152, 340, 298, 157, 128, 28, 535, 414, 308, 353, 239, 123, 428, 21, 99, 267, 356, 549, 444, 159, 52, 211, 562, 112, 253, 557, 135, 161, 610, 274, 211, 541};
    vector<int> B = {73, 48, 7, 78, 65, 91, 25, 19, 25, 12, 35, 55, 81, 84, 77, 83, 25, 80, 7, 93, 36, 49, 48, 90, 33, 56, 18, 12, 21, 53, 58, 4, 27, 9, 76, 30, 66, 58, 5, 89, 7, 80, 54, 62, 74, 68, 17, 47, 51, 56};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 14552;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {63, 449, 445, 73, 159, 438, 84, 327, 149, 250, 469, 429, 488, 475, 313, 402, 322, 363, 101, 24, 276, 14, 537, 266, 536, 89, 163, 461, 11, 338, 585, 183, 613, 94, 546, 436, 478, 197, 583, 80, 447, 362, 611, 7, 122, 534, 563, 335, 431, 549};
    vector<int> B = {490, 86, 333, 163, 278, 407, 404, 482, 43, 214, 453, 173, 447, 99, 327, 205, 309, 28, 490, 527, 200, 392, 260, 123, 476, 115, 380, 85, 255, 330, 58, 271, 325, 356, 422, 412, 68, 197, 336, 300, 426, 140, 132, 457, 458, 357, 391, 19, 351, 401};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 16289;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {551, 321, 299, 216, 393, 446, 33, 87, 355, 287, 36, 340, 435, 43, 413, 484, 411, 593, 210, 446, 302, 273, 122, 391, 106, 463, 175, 437, 344, 24, 357, 350, 499, 15, 331, 397, 187, 107, 47, 371, 340, 202, 565, 105, 248, 225, 448, 434, 42, 265};
    vector<int> B = {415, 275, 27, 288, 113, 441, 258, 155, 361, 328, 225, 53, 193, 445, 79, 402, 289, 78, 228, 352, 240, 373, 11, 131, 26, 241, 181, 142, 248, 234, 355, 203, 46, 329, 403, 447, 189, 74, 331, 381, 305, 167, 396, 149, 460, 186, 14, 153, 449, 430};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 14582;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {204, 213, 275, 107, 39, 264, 148, 230, 9, 154, 14, 57, 179, 200, 40, 102, 205, 85, 18, 156, 184, 213, 139, 131, 121, 213, 115, 252, 199, 62, 49, 3, 241, 169, 154, 221, 87, 156, 47, 179, 227, 139, 153, 257, 203, 25, 188, 184, 175, 125};
    vector<int> B = {739, 201, 566, 373, 517, 326, 299, 724, 811, 51, 141, 399, 422, 616, 487, 414, 611, 162, 767, 158, 651, 263, 694, 182, 200, 717, 743, 709, 245, 271, 781, 112, 274, 596, 404, 706, 771, 198, 165, 758, 135, 98, 638, 708, 434, 548, 74, 389, 287, 57};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7361;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {76, 132, 9, 33, 2, 139, 15, 107, 18, 16, 77, 83, 126, 18, 84, 84, 106, 69, 65, 79, 106, 90, 62, 54, 51, 6, 96, 136, 118, 23, 68, 147, 53, 74, 7, 113, 58, 138, 23, 83, 93, 109, 64, 24, 58, 13, 128, 47, 106, 108};
    vector<int> B = {28, 24, 14, 5, 35, 21, 11, 8, 29, 3, 36, 3, 34, 30, 9, 34, 22, 32, 27, 25, 32, 22, 30, 7, 23, 16, 14, 21, 27, 14, 11, 16, 16, 28, 5, 14, 33, 11, 15, 6, 27, 14, 37, 11, 3, 33, 29, 12, 13, 22};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3597;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {631, 628, 91, 24, 577, 358, 322, 458, 491, 466, 159, 157, 470, 401, 607, 542, 104, 570, 478, 440, 274, 451, 307, 366, 628, 107, 378, 522, 391, 338, 470, 203, 505, 245, 454, 650, 346, 508, 169, 579, 120, 402, 67, 172, 447, 80, 113, 571, 490, 98};
    vector<int> B = {35, 63, 11, 20, 22, 91, 53, 76, 58, 80, 88, 104, 63, 59, 59, 73, 64, 81, 106, 97, 108, 75, 29, 47, 50, 69, 63, 114, 4, 45, 68, 25, 56, 114, 26, 10, 102, 12, 54, 10, 38, 23, 41, 114, 102, 57, 85, 60, 80, 104};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 18429;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {47, 94, 315, 398, 396, 227, 198, 349, 348, 349, 193, 191, 109, 35, 50, 360, 336, 123, 358, 197, 8, 278, 306, 391, 104, 251, 9, 392, 78, 63, 76, 249, 360, 35, 115, 194, 266, 325, 24, 398, 131, 347, 42, 380, 95, 134, 243, 364, 332, 65};
    vector<int> B = {759, 422, 556, 384, 388, 301, 18, 487, 191, 361, 104, 643, 55, 107, 719, 474, 250, 657, 179, 650, 632, 449, 513, 15, 134, 578, 245, 49, 126, 310, 17, 13, 131, 440, 553, 189, 482, 142, 155, 167, 660, 395, 157, 351, 736, 132, 175, 314, 541, 748};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 10741;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {268, 21, 227, 35, 305, 290, 179, 56, 260, 302, 194, 246, 128, 262, 301, 137, 89, 303, 230, 115, 199, 280, 266, 60, 186, 288, 324, 114, 215, 265, 1, 31, 126, 211, 5, 85, 301, 115, 312, 157, 212, 136, 100, 108, 75, 219, 331, 98, 11, 279};
    vector<int> B = {137, 214, 112, 64, 165, 68, 154, 76, 214, 138, 113, 47, 30, 49, 138, 99, 189, 35, 122, 41, 99, 83, 53, 39, 165, 108, 209, 21, 185, 31, 36, 206, 73, 77, 112, 195, 93, 151, 149, 173, 33, 133, 155, 42, 81, 175, 7, 156, 180, 201};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 9065;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {9, 49, 43, 33, 40, 40, 18, 36, 20, 43, 11, 32, 24, 40, 22, 28, 36, 31, 2, 12, 50, 49, 43, 50, 29, 27, 41, 25, 50, 35, 40, 36, 12, 25, 9, 17, 52, 39, 27, 32, 32, 31, 33, 30, 20, 24, 37, 24, 52, 17};
    vector<int> B = {130, 76, 214, 3, 212, 161, 103, 97, 150, 242, 149, 33, 211, 244, 237, 154, 220, 56, 133, 21, 33, 197, 111, 260, 237, 128, 64, 208, 128, 49, 170, 14, 247, 245, 53, 112, 86, 228, 261, 180, 237, 111, 61, 179, 264, 248, 169, 216, 24, 181};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1560;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {82, 251, 178, 225, 120, 257, 106, 213, 477, 13, 310, 398, 205, 483, 74, 220, 131, 312, 32, 468, 23, 225, 107, 137, 351, 450, 166, 154, 151, 306, 475, 63, 71, 215, 115, 393, 403, 435, 482, 17, 122, 422, 327, 345, 138, 400, 486, 290, 323, 432};
    vector<int> B = {330, 28, 120, 272, 128, 296, 162, 311, 282, 72, 158, 210, 336, 236, 350, 308, 232, 86, 336, 199, 15, 6, 204, 361, 103, 221, 217, 229, 165, 107, 19, 351, 132, 244, 23, 248, 136, 76, 275, 219, 44, 79, 330, 265, 180, 33, 328, 165, 84, 215};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 12585;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {330, 243, 62, 290, 408, 123, 206, 261, 168, 20, 297, 35, 390, 81, 326, 60, 108, 291, 224, 298, 170, 257, 56, 144, 365, 164, 221, 68, 329, 327, 208, 72, 134, 78, 317, 229, 424, 102, 105, 154, 267, 279, 102, 296, 110, 319, 377, 16, 302, 380};
    vector<int> B = {423, 364, 569, 452, 65, 491, 285, 135, 486, 12, 128, 478, 260, 546, 499, 25, 102, 228, 346, 333, 497, 211, 100, 176, 92, 452, 504, 549, 356, 459, 148, 271, 351, 534, 84, 541, 139, 294, 219, 44, 51, 451, 72, 291, 458, 394, 496, 238, 174, 130};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 10605;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {781, 578, 538, 79, 226, 721, 202, 7, 395, 414, 698, 131, 157, 41, 910, 554, 612, 735, 434, 718, 149, 89, 615, 227, 935, 778, 165, 711, 299, 532, 593, 78, 399, 170, 450, 138, 333, 476, 702, 210, 270, 396, 738, 463, 456, 42, 320, 506, 455, 286};
    vector<int> B = {77, 19, 82, 71, 13, 84, 12, 14, 41, 65, 30, 44, 31, 86, 21, 77, 82, 53, 19, 4, 43, 27, 32, 37, 32, 28, 1, 87, 47, 46, 28, 29, 72, 50, 73, 86, 87, 80, 69, 61, 55, 27, 35, 51, 79, 49, 10, 87, 51, 47};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 20913;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {374, 155, 626, 369, 548, 402, 404, 307, 40, 129, 371, 150, 531, 377, 237, 424, 24, 514, 446, 392, 294, 356, 29, 329, 612, 4, 454, 566, 143, 531, 263, 103, 544, 106, 181, 153, 155, 576, 334, 263, 593, 116, 344, 114, 254, 98, 217, 37, 410, 505};
    vector<int> B = {13, 112, 126, 35, 18, 19, 56, 47, 21, 32, 48, 13, 15, 60, 95, 47, 44, 120, 63, 81, 124, 62, 65, 13, 66, 64, 73, 7, 34, 97, 31, 74, 54, 41, 42, 94, 41, 23, 31, 35, 55, 122, 100, 102, 119, 56, 29, 42, 84, 25};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 15511;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {151, 84, 113, 47, 219, 3, 188, 124, 128, 45, 10, 96, 24, 83, 34, 147, 118, 169, 93, 88, 82, 110, 17, 109, 186, 7, 37, 127, 28, 215, 107, 101, 219, 88, 86, 93, 101, 88, 141, 10, 68, 27, 211, 176, 139, 186, 218, 48, 14, 198};
    vector<int> B = {503, 618, 304, 163, 72, 132, 737, 657, 87, 35, 65, 537, 318, 708, 113, 481, 299, 488, 231, 718, 163, 651, 39, 407, 46, 10, 277, 635, 278, 164, 810, 48, 434, 385, 278, 325, 677, 271, 740, 756, 420, 103, 498, 273, 86, 220, 399, 624, 809, 792};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 5229;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {887, 493, 697, 125, 459, 700, 235, 508, 135, 124, 408, 578, 487, 688, 82, 755, 711, 564, 723, 397, 207, 777, 449, 929, 248, 786, 908, 927, 256, 816, 812, 732, 633, 811, 441, 24, 737, 502, 522, 143, 680, 324, 762, 913, 446, 760, 586, 370, 294, 168};
    vector<int> B = {183, 7, 92, 21, 65, 61, 111, 195, 14, 136, 204, 99, 230, 38, 98, 57, 194, 6, 54, 104, 62, 183, 32, 32, 154, 69, 101, 83, 162, 44, 132, 109, 167, 2, 3, 135, 109, 147, 67, 229, 103, 161, 75, 8, 114, 212, 114, 184, 45, 133};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 26721;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {13, 23, 104, 105, 32, 72, 72, 57, 3, 51, 100, 75, 45, 42, 45, 22, 13, 107, 40, 100, 23, 29, 42, 78, 96, 59, 32, 90, 68, 90, 16, 60, 78, 4, 12, 98, 6, 28, 64, 87, 3, 78, 17, 104, 69, 94, 20, 41, 83, 98};
    vector<int> B = {341, 164, 40, 288, 4, 49, 259, 317, 19, 62, 243, 340, 21, 19, 224, 64, 122, 327, 233, 192, 252, 117, 327, 221, 257, 309, 14, 133, 329, 298, 228, 193, 119, 277, 90, 47, 325, 61, 8, 213, 312, 24, 20, 243, 218, 147, 50, 259, 158, 330};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2792;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {143, 108, 429, 341, 381, 165, 182, 445, 313, 284, 346, 3, 178, 458, 429, 439, 32, 128, 107, 138, 124, 132, 429, 224, 447, 318, 480, 394, 468, 449, 109, 163, 26, 261, 69, 333, 459, 440, 156, 93, 64, 45, 282, 216, 150, 107, 332, 119, 387, 449};
    vector<int> B = {251, 40, 185, 255, 103, 105, 89, 62, 127, 56, 212, 66, 160, 19, 252, 126, 215, 42, 223, 7, 239, 230, 189, 66, 136, 171, 191, 29, 119, 10, 181, 11, 222, 232, 249, 240, 16, 136, 32, 232, 214, 178, 22, 167, 25, 150, 82, 239, 264, 180};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 12781;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {581, 219, 191, 395, 505, 353, 302, 303, 440, 389, 339, 55, 313, 92, 398, 58, 477, 465, 243, 408, 156, 337, 181, 491, 133, 10, 103, 536, 409, 585, 90, 174, 299, 392, 522, 272, 124, 202, 266, 325, 94, 328, 70, 143, 63, 74, 501, 522, 259, 27};
    vector<int> B = {200, 42, 123, 86, 330, 355, 23, 73, 75, 219, 65, 194, 197, 233, 246, 183, 139, 324, 121, 135, 353, 173, 278, 215, 119, 159, 51, 67, 288, 111, 135, 283, 330, 251, 349, 127, 323, 98, 353, 236, 265, 246, 353, 74, 219, 154, 6, 47, 185, 340};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 14220;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {200, 391, 461, 96, 523, 102, 159, 277, 617, 511, 115, 69, 105, 586, 234, 242, 562, 469, 232, 622, 350, 565, 506, 300, 172, 71, 583, 130, 174, 344, 115, 228, 482, 252, 414, 280, 117, 56, 599, 525, 299, 84, 196, 360, 478, 479, 489, 191, 2, 207};
    vector<int> B = {365, 85, 328, 126, 202, 312, 224, 138, 272, 230, 307, 109, 275, 69, 109, 17, 293, 163, 76, 16, 170, 235, 252, 265, 166, 123, 232, 200, 106, 77, 252, 117, 143, 69, 324, 249, 288, 281, 58, 300, 336, 120, 206, 212, 150, 350, 267, 172, 128, 86};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 15637;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {1, 2, 3, 4, 5, 6};
    vector<int> B = {3, 3, 3, 3, 3, 3};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {4, 3, 2, 1};
    vector<int> B = {7, 8, 5, 9};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {5, 1, 1, 1};
    vector<int> B = {5, 10, 10, 10};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {9, 1};
    vector<int> B = {1, 8};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {10, 5};
    vector<int> B = {100, 105};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {9, 1, 2};
    vector<int> B = {1, 8, 3};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {500, 10};
    vector<int> B = {50, 500};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 560;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {10, 5};
    vector<int> B = {1, 5};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {1};
    vector<int> B = {1};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {1000, 1};
    vector<int> B = {2, 1};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1002;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {1, 2, 3, 4, 56, 7, 8, 9, 10, 3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 1, 2, 3, 4, 5, 6};
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {3, 1, 2};
    vector<int> B = {4, 3, 9};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
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
    vector<int> A = {100, 1};
    vector<int> B = {2, 100};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {10, 30};
    vector<int> B = {30, 50};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {2, 2, 1};
    vector<int> B = {3, 3, 1};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {5, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> B = {5, 6, 3, 4, 5, 6, 7, 8, 9};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {1, 2, 3};
    vector<int> B = {1, 2, 3};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
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
    vector<int> A = {1, 1, 1, 1};
    vector<int> B = {1, 2, 3, 4};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {10, 1};
    vector<int> B = {2, 3};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 1, 1, 1000, 5, 1000, 7, 7, 8, 9, 777, 666, 555};
    vector<int> B = {5, 3, 7, 8, 5, 7, 37, 38, 3, 6, 666, 356, 56, 1000, 456, 4, 65, 756, 67, 56, 65, 34, 56, 7, 456, 66, 77, 4, 456, 56, 7, 7, 5, 65, 65, 5, 66, 77, 33, 44, 7, 7, 76, 76, 76, 752, 5, 777, 666, 555};
    ProgramSchedule* pObj = new ProgramSchedule();
    clock_t start = clock();
    int result = pObj->schedule(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 14230;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11889718&rd=6520&pm=3945
********************************************************************************
#include <string>
#include <vector>
using namespace std;
class ProgramSchedule {
  public:
  int schedule(vector <int> A, vector <int> B) {
    int i, j;
    for (i = 0; i < A.size(); i++) {
      for (j = i + 1; j < A.size(); j++) {
        if (B[i] < B[j]) {
          int tmp;
          tmp = B[i];
          B[i] = B[j];
          B[j] = tmp;
          tmp = A[i];
          A[i] = A[j];
          A[j] = tmp;
        }
      }
    }
    int max = 0;
    int sum = 0;
    for (i = 0; i < A.size(); i++) {
      sum += A[i];
      int m = B[i] + sum;
      if (m > max) max = m;
    }
    return max;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/