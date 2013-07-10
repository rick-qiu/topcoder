/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1962
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

class PassingGrade {
public:
    int pointsNeeded(vector<int> pointsEarned, vector<int> pointsPossible, int finalExam);
};

int PassingGrade::pointsNeeded(vector<int> pointsEarned, vector<int> pointsPossible, int finalExam) {
    int ret;
    return ret;
}


int test0() {
    vector<int> pointsEarned = {55, 77, 82, 60};
    vector<int> pointsPossible = {100, 100, 100, 100};
    int finalExam = 300;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> pointsEarned = {1, 2, 3, 4};
    vector<int> pointsPossible = {2, 3, 4, 5};
    int finalExam = 7;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> pointsEarned = {1, 2, 2, 1};
    vector<int> pointsPossible = {9, 9, 9, 9};
    int finalExam = 9;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> pointsEarned = {7, 8, 7, 6};
    vector<int> pointsPossible = {8, 8, 8, 8};
    int finalExam = 9;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> pointsEarned = {17, 23, 50, 200, 19, 56, 83, 91, 77, 9, 0};
    vector<int> pointsPossible = {20, 30, 50, 250, 20, 70, 100, 100, 100, 10, 10};
    int finalExam = 400;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> pointsEarned = {0, 0, 0, 0, 0, 0, 0};
    vector<int> pointsPossible = {1, 1, 1, 1, 1, 1, 1};
    int finalExam = 3000;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1955;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pointsEarned = {1000, 1000, 1000, 1000};
    vector<int> pointsPossible = {1000, 1000, 1000, 1000};
    int finalExam = 3000;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 550;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> pointsEarned = {495};
    vector<int> pointsPossible = {513};
    int finalExam = 1678;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pointsEarned = {239, 656};
    vector<int> pointsPossible = {356, 704};
    int finalExam = 1618;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 846;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pointsEarned = {156, 82, 91};
    vector<int> pointsPossible = {407, 929, 98};
    int finalExam = 1817;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1785;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pointsEarned = {299, 519, 253, 56};
    vector<int> pointsPossible = {536, 596, 306, 437};
    int finalExam = 69;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pointsEarned = {842, 144, 400, 277, 620};
    vector<int> pointsPossible = {868, 201, 889, 282, 740};
    int finalExam = 1220;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 447;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> pointsEarned = {911, 2, 571, 749, 687, 48};
    vector<int> pointsPossible = {913, 376, 914, 998, 702, 710};
    int finalExam = 992;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 676;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> pointsEarned = {108, 282, 539, 359, 542, 637, 716};
    vector<int> pointsPossible = {621, 605, 696, 464, 883, 708, 927};
    int finalExam = 2296;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1497;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pointsEarned = {27, 51, 74, 14, 62, 318, 284, 64};
    vector<int> pointsPossible = {36, 425, 815, 167, 985, 496, 371, 80};
    int finalExam = 2458;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pointsEarned = {12, 221, 49, 620, 494, 256, 525, 547, 718};
    vector<int> pointsPossible = {611, 297, 208, 981, 787, 379, 622, 749, 910};
    int finalExam = 372;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
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
    vector<int> pointsEarned = {2, 692, 83, 231, 922, 237, 574, 84, 72, 701};
    vector<int> pointsPossible = {4, 877, 114, 251, 938, 279, 760, 667, 541, 781};
    int finalExam = 2429;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1369;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pointsEarned = {131, 372, 541, 343, 178, 957, 208, 19, 384, 666, 437};
    vector<int> pointsPossible = {167, 574, 622, 454, 530, 965, 284, 214, 519, 789, 527};
    int finalExam = 2373;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 976;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pointsEarned = {382, 710, 805, 615, 377, 255, 256, 30, 70, 316, 372, 173};
    vector<int> pointsPossible = {999, 947, 839, 689, 491, 758, 652, 156, 123, 731, 455, 526};
    int finalExam = 2517;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 2063;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pointsEarned = {366, 176, 95, 403, 9, 9, 21, 701, 388, 29, 422, 473, 444};
    vector<int> pointsPossible = {976, 276, 296, 516, 33, 30, 596, 786, 716, 30, 620, 784, 793};
    int finalExam = 670;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pointsEarned = {408, 800, 5, 306, 2, 703, 311, 163, 760, 742, 640, 574, 301, 565};
    vector<int> pointsPossible = {949, 936, 7, 404, 191, 899, 964, 393, 914, 805, 706, 619, 529, 734};
    int finalExam = 2946;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1518;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> pointsEarned = {26, 530, 60, 18, 547, 53, 529, 671, 90, 140, 208, 19, 329, 242, 233};
    vector<int> pointsPossible = {87, 648, 609, 65, 554, 150, 736, 837, 368, 147, 223, 438, 475, 893, 349};
    int finalExam = 513;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pointsEarned = {82, 148, 470, 33, 453, 305, 526, 812, 203, 306, 399, 319, 16, 525, 18, 683};
    vector<int> pointsPossible = {94, 498, 537, 639, 682, 880, 658, 908, 295, 321, 416, 739, 40, 754, 19, 744};
    int finalExam = 2064;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1390;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> pointsEarned = {316, 606, 224, 16, 172, 10, 309, 36, 734, 182, 24, 326, 228, 28, 540, 323, 217};
    vector<int> pointsPossible = {486, 909, 228, 71, 280, 615, 582, 39, 988, 271, 590, 539, 294, 654, 624, 479, 315};
    int finalExam = 64;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pointsEarned = {619, 85, 356, 482, 359, 210, 426, 804, 789, 87, 163, 21, 447, 236, 755, 230, 350, 626};
    vector<int> pointsPossible = {863, 100, 368, 506, 701, 233, 559, 925, 832, 155, 165, 42, 721, 285, 976, 363, 941, 789};
    int finalExam = 1175;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pointsEarned = {412, 138, 146, 128, 494, 57, 189, 890, 383, 471, 77, 5, 278, 39, 251, 324, 33, 193, 355};
    vector<int> pointsPossible = {619, 168, 217, 325, 632, 531, 300, 925, 402, 792, 326, 337, 543, 60, 818, 399, 383, 222, 384};
    int finalExam = 1090;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pointsEarned = {1, 649, 369, 878, 480, 870, 12, 590, 296, 553, 286, 800, 472, 302, 793, 104, 558, 967, 38, 572};
    vector<int> pointsPossible = {10, 993, 476, 966, 794, 984, 35, 598, 531, 573, 306, 867, 500, 410, 840, 294, 654, 987, 413, 947};
    int finalExam = 130;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pointsEarned = {146, 82, 43, 916, 151, 486, 541, 68, 119, 244, 109, 22, 372, 171, 348, 811, 216, 491, 95, 326};
    vector<int> pointsPossible = {176, 91, 389, 988, 430, 614, 541, 708, 190, 285, 630, 881, 565, 264, 537, 820, 287, 692, 124, 410};
    int finalExam = 2969;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 2428;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pointsEarned = {353, 88, 5, 493, 324, 14, 123, 133, 274, 44, 587, 275, 760, 605, 153, 451, 18, 938, 335, 133};
    vector<int> pointsPossible = {421, 88, 9, 581, 407, 46, 123, 403, 319, 105, 696, 434, 871, 785, 225, 586, 107, 948, 556, 775};
    int finalExam = 1986;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 701;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pointsEarned = {134, 328, 33, 211, 149, 767, 394, 445, 335, 527, 216, 570, 421, 214, 124, 140, 146, 785, 229, 478};
    vector<int> pointsPossible = {569, 403, 134, 410, 224, 912, 632, 561, 455, 683, 278, 725, 478, 358, 197, 551, 178, 914, 698, 657};
    int finalExam = 2995;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1812;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pointsEarned = {78, 138, 317, 64, 130, 73, 435, 129, 362, 82, 11, 180, 373, 228, 112, 744, 187, 20, 744, 685};
    vector<int> pointsPossible = {123, 766, 425, 106, 518, 121, 704, 161, 404, 115, 99, 878, 592, 592, 172, 778, 540, 30, 866, 897};
    int finalExam = 486;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> pointsEarned = {188, 12, 158, 502, 621, 793, 12, 28, 201, 95, 887, 556, 545, 55, 439, 462, 224, 372, 239, 1};
    vector<int> pointsPossible = {769, 236, 237, 792, 987, 991, 42, 39, 411, 205, 963, 867, 560, 61, 500, 628, 656, 494, 565, 17};
    int finalExam = 927;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 726;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pointsEarned = {138, 226, 370, 70, 401, 345, 238, 752, 681, 633, 633, 104, 76, 300, 314, 25, 64, 240, 78, 393};
    vector<int> pointsPossible = {260, 317, 572, 225, 587, 366, 248, 808, 838, 895, 892, 357, 77, 368, 495, 163, 165, 368, 411, 431};
    int finalExam = 2673;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1405;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> pointsEarned = {407, 8, 61, 89, 351, 76, 399, 139, 79, 83, 57, 343, 231, 522, 706, 19, 361, 0, 575, 266};
    vector<int> pointsPossible = {607, 157, 64, 794, 575, 85, 717, 140, 480, 122, 251, 557, 344, 675, 939, 718, 629, 111, 719, 285};
    int finalExam = 691;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pointsEarned = {564, 213, 659, 95, 196, 67, 54, 65, 513, 125, 463, 503, 535, 73, 195, 520, 37, 403, 548, 2};
    vector<int> pointsPossible = {864, 450, 806, 384, 283, 179, 100, 509, 726, 138, 604, 520, 758, 121, 299, 525, 172, 853, 722, 4};
    int finalExam = 407;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 296;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pointsEarned = {521, 46, 514, 474, 327, 399, 7, 216, 6, 106, 558, 12, 415, 599, 546, 473, 117, 209, 74, 487};
    vector<int> pointsPossible = {932, 319, 732, 912, 413, 422, 62, 335, 16, 296, 673, 19, 585, 642, 814, 772, 697, 229, 292, 558};
    int finalExam = 512;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> pointsEarned = {147, 56, 535, 30, 128, 98, 605, 12, 509, 743, 229, 677, 679, 331, 337, 182, 310, 38, 321, 103};
    vector<int> pointsPossible = {182, 90, 899, 124, 167, 101, 859, 19, 544, 829, 243, 848, 768, 368, 454, 205, 375, 371, 382, 635};
    int finalExam = 2269;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 906;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pointsEarned = {650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650};
    vector<int> pointsPossible = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 998};
    int finalExam = 3000;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1949;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pointsEarned = {650};
    vector<int> pointsPossible = {700};
    int finalExam = 300;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> pointsEarned = {650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650, 650};
    vector<int> pointsPossible = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 993};
    int finalExam = 3000;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1946;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> pointsEarned = {600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600};
    vector<int> pointsPossible = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int finalExam = 2999;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 2950;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> pointsEarned = {600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600};
    vector<int> pointsPossible = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 901};
    int finalExam = 3000;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 2886;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> pointsEarned = {200, 350};
    vector<int> pointsPossible = {200, 700};
    int finalExam = 101;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> pointsEarned = {1, 2, 2, 1};
    vector<int> pointsPossible = {9, 9, 9, 9};
    int finalExam = 9;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> pointsEarned = {0};
    vector<int> pointsPossible = {1};
    int finalExam = 4;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> pointsEarned = {1};
    vector<int> pointsPossible = {1};
    int finalExam = 3000;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 1950;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> pointsEarned = {400};
    vector<int> pointsPossible = {700};
    int finalExam = 300;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> pointsEarned = {6};
    vector<int> pointsPossible = {9};
    int finalExam = 2;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> pointsEarned = {99, 99};
    vector<int> pointsPossible = {100, 100};
    int finalExam = 100;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> pointsEarned = {100, 100, 100, 100};
    vector<int> pointsPossible = {100, 100, 100, 100};
    int finalExam = 100;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> pointsEarned = {100};
    vector<int> pointsPossible = {100};
    int finalExam = 10;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> pointsEarned = {7, 8, 7, 6};
    vector<int> pointsPossible = {8, 8, 8, 8};
    int finalExam = 9;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> pointsEarned = {1, 2, 3, 4};
    vector<int> pointsPossible = {2, 3, 4, 5};
    int finalExam = 7;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> pointsEarned = {100};
    vector<int> pointsPossible = {100};
    int finalExam = 1;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> pointsEarned = {10, 5};
    vector<int> pointsPossible = {12, 7};
    int finalExam = 6;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
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
    vector<int> pointsEarned = {2};
    vector<int> pointsPossible = {3};
    int finalExam = 4;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
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
    vector<int> pointsEarned = {452};
    vector<int> pointsPossible = {700};
    int finalExam = 302;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> pointsEarned = {0};
    vector<int> pointsPossible = {35};
    int finalExam = 65;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> pointsEarned = {50};
    vector<int> pointsPossible = {50};
    int finalExam = 55;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> pointsEarned = {600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600};
    vector<int> pointsPossible = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 901};
    int finalExam = 3000;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 2886;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> pointsEarned = {1, 2, 3, 4};
    vector<int> pointsPossible = {2, 3, 4, 5};
    int finalExam = 8;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> pointsEarned = {4};
    vector<int> pointsPossible = {6};
    int finalExam = 10;
    PassingGrade* pObj = new PassingGrade();
    clock_t start = clock();
    int result = pObj->pointsNeeded(pointsEarned, pointsPossible, finalExam);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=294677&rd=4745&pm=1962
********************************************************************************
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <numeric>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <iterator>
#include <functional>
#include <sstream>
 
#define ALL(C) (C).begin(), (C).end()
#define forIt(I, C) for ( typeof((C).begin()) I=(C).begin(); I!=(C).end(); ++I)
#define forN(I, C) for (int I=0; I<(C); ++(I) )
#define forEach(I, C) forN(I, int((C).size()))
 
using namespace std;
 
typedef vector<string> VS;  
typedef vector<vector<string> > VVS;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
 
typedef string::iterator SIT;
typedef vector<string>::iterator VSIT;
typedef vector<int>::iterator VIIT;
 
class PassingGrade {
  public:
  
  int pointsNeeded(vector <int> pointsEarned, vector <int> pointsPossible, int finalExam) 
  {
    int ret=0;
    int totalpoints = accumulate(pointsPossible.begin(), pointsPossible.end(), 0) + finalExam;
    int totalpe = accumulate(pointsEarned.begin(), pointsEarned.end(), 0);
    for (int i=0; i<=finalExam; ++i) {
      if (((float)totalpe / (float)totalpoints)*100 >= 65.0) return ret;
      ++totalpe;
      ++ret;
    }
    
    return -1;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/