/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6243
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

class ContestCoordinator {
public:
    double bestAverage(vector<int> scores);
};

double ContestCoordinator::bestAverage(vector<int> scores) {
    double ret;
    return ret;
}


int test0() {
    vector<int> scores = {5, 3, 3, 10, 10, 4, 3, 10, 10, 3, 9, 5, 7, 10};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 6.666666666666667;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> scores = {9, 5, 1, 7, 7, 7, 1, 5, 3, 10, 1, 5, 5, 3, 8, 10, 5, 7, 1, 6, 5, 9, 7, 7, 8, 10, 6, 9, 9, 1, 4, 5, 10, 6, 4, 2, 8, 5, 8, 7, 10, 4, 3, 2, 3, 10, 3, 9, 4, 3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8125;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> scores = {1, 4, 1, 1, 2, 10, 6, 4, 8, 6, 6, 3, 3, 9, 2, 2, 5, 3, 4, 9, 9, 10, 9, 4, 7, 7, 4, 10, 10, 9, 9, 6, 4, 5, 3, 10, 8, 9, 9, 9, 4, 5, 1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> scores = {2, 5, 8, 2, 4, 1, 7, 4, 3, 2, 8, 5, 1, 2, 7, 1, 10};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 4.235294117647059;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> scores = {8, 6, 7, 3, 1, 4, 5, 4, 5, 5, 10, 7, 1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 5.142857142857143;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> scores = {6, 5, 10, 2, 9, 1, 8, 9};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> scores = {44, 12, 21, 6, 25, 77, 56, 77, 11, 45, 32, 68, 28, 23, 47, 4, 32, 59, 59, 95, 94, 34, 80, 46, 85, 31, 86, 39, 52, 90, 38, 40, 89, 67, 64, 84, 7, 46, 25, 95};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 50.36842105263158;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> scores = {98, 42, 16, 35, 60, 29, 60, 92, 62, 66, 62, 29, 83, 49, 81, 36, 60, 98, 58, 50, 52, 21, 90, 82, 64, 43, 42, 53, 78, 68, 53, 27, 94, 30};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 59.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> scores = {45, 85, 14, 59, 19, 86, 62, 61, 33, 67, 99, 81, 16, 97, 20, 70, 62, 78, 82, 32, 86, 61, 34, 8, 36, 79, 80, 17, 25, 22, 57, 22, 77, 35, 94, 41, 42, 7, 50, 16, 61, 68, 42, 94, 6, 29, 52, 32, 81, 88};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 54.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> scores = {44, 94, 17, 65, 30, 4, 7, 60, 85, 53, 64, 61, 60, 92, 84};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 60.333333333333336;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> scores = {22, 13, 94, 10, 66, 82, 80, 95, 3, 10, 4, 79, 20, 2, 83, 79, 75, 49, 13, 40, 43, 8, 89, 38, 62, 58, 66, 3, 40, 90};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 49.5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> scores = {80, 17, 7, 78, 42, 9, 3, 7, 32, 66, 55, 63, 31, 29, 98, 43, 98, 41, 92, 95, 19, 36};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 47.31818181818182;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> scores = {6, 41, 52, 81, 68, 87, 1, 46, 85, 34, 11, 25, 20, 62, 23, 37, 95, 35, 5, 58, 9, 57, 41, 12, 54, 96, 98, 50, 34, 6, 49, 10, 77, 97, 98, 54, 68, 38, 1, 77, 47, 82, 97, 90, 71, 66, 45, 39, 42, 78};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 51.63333333333333;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> scores = {30, 75, 86, 26, 33, 18, 61, 69, 44, 34, 89, 46, 15, 2, 66, 14, 28, 32, 58, 86, 70, 34, 14, 64, 15, 79, 67, 63, 6, 84, 7, 94, 36, 87, 96, 37, 84, 14, 49, 83, 14, 24, 40, 71, 46, 93, 40, 82, 16};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 49.42553191489362;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> scores = {69, 21, 57, 82, 48, 43, 7, 24, 91, 48, 74, 39, 60, 8, 68, 99, 17, 18, 34, 66, 12, 37, 63, 27, 44, 60, 21, 71, 11, 19, 53, 38, 37, 89, 8, 33, 74, 65, 95, 75, 83, 30, 50, 1, 79, 26, 37, 95, 23, 28};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 47.14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> scores = {43, 6, 29, 80, 96, 67, 100, 72, 3, 100, 49, 32, 80, 16, 64, 1, 49, 74, 97, 30, 67, 36, 23, 55, 10, 71, 25, 16, 85, 44, 17, 70, 24, 80, 31, 80, 77, 62, 96, 4, 70, 97, 64, 5, 14, 73, 68, 88, 29, 2};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 58.5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> scores = {26, 92, 92, 24, 44, 16, 71, 13, 68, 75, 51, 51, 92, 2, 84, 49, 4, 80, 94, 44, 61, 26, 23, 55, 74, 78, 87, 46, 30, 22, 41, 54, 44, 75, 41, 57, 50, 17, 21, 2, 10, 32, 68, 83, 20, 43, 3, 93, 11, 41};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 47.6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> scores = {56, 30, 41, 99, 92, 10, 70, 60, 30, 91, 87, 71, 31, 82, 99, 21, 58, 81, 52, 88, 44, 53, 85, 2, 57, 59, 33, 86, 8, 58, 90, 81, 63, 68, 95, 75, 5, 31, 49, 71, 68, 78, 92, 76, 59, 52};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 64.31818181818181;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> scores = {90, 22, 48, 74, 40, 91, 98, 89};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 81.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> scores = {97, 84, 28, 11, 78, 21, 89};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 78.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> scores = {759, 874, 334, 665, 963, 858, 196, 936, 644, 135, 810, 1000, 921, 741, 375, 527, 595, 659, 286, 73, 86, 432, 656, 214, 66, 112, 258, 680, 915, 879, 881, 601, 966, 69, 740, 867, 702, 90, 498, 403, 613, 508, 387, 699, 918};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 644.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> scores = {731, 168, 59, 451, 724, 851, 178, 556, 618, 859, 118, 655, 125, 179, 507, 153, 211, 408, 473, 148, 93, 455, 301, 572, 699, 492, 828, 974, 257, 861, 602, 867, 444, 8, 11, 636, 560, 683, 103, 990, 228, 835, 195, 928, 353, 966, 397, 386, 310, 276};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 469.64;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> scores = {384, 575, 43, 985, 679, 551, 923, 81, 40, 812, 315, 429, 171, 546, 25, 522, 997, 443, 695, 573, 621, 773, 372, 626, 971, 820, 328, 530, 722, 674, 692, 747, 49, 276, 249, 907, 836, 831, 393, 236, 304, 395, 955, 855, 558, 22, 194, 642, 295, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 559.5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> scores = {252, 386, 470, 727, 714, 826, 384, 673, 851, 307, 800, 96, 633, 462, 355, 664, 265, 443, 266, 668};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 516.3888888888889;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> scores = {270, 422, 582, 287, 661, 927, 491, 441, 361, 891, 654, 875, 196, 605, 84, 789, 530, 972, 312, 277, 331, 182, 1000, 107, 895, 949, 880, 283, 947, 656, 445, 467, 491, 261, 69, 206, 136};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 511.6756756756757;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> scores = {892, 1000, 980, 705, 810, 83, 988, 420, 724, 153, 126, 417, 631, 803, 962, 367, 893, 777, 622, 145, 489, 139, 724, 730, 469, 176, 495, 305, 286, 44, 686, 914, 350, 391, 912, 85, 538, 636, 625, 179, 829, 160, 676, 646, 965, 324, 321, 848, 189, 155};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 580.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> scores = {127, 107, 32, 199, 239, 458, 50, 833, 945, 59, 257, 944, 11, 887, 686, 964, 703, 968, 174, 44, 144, 633, 112, 172, 515, 650, 831, 624, 99, 425, 873, 160, 7, 350, 161, 820, 984, 134, 930, 10, 525, 258, 277, 565, 569, 432, 949, 921, 136, 154};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 442.14;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> scores = {181, 581, 366, 337, 703, 928, 47, 221, 1000, 687, 41, 443, 564, 946, 810, 727, 962, 667, 239, 584, 625, 462, 733, 560, 230, 549, 1000, 227, 566, 55, 250, 76, 947, 730, 262, 141, 261, 742, 538, 486, 636, 60, 550, 472, 420, 7, 55, 906, 26, 66};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 512.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> scores = {875, 159, 123, 307, 537, 619, 982, 547, 642, 707, 84, 335, 841, 206, 853, 551, 875, 933, 860, 436, 546, 681, 787, 390, 521, 25, 399, 750, 897, 484, 980, 621, 596, 187, 924, 875, 665, 363, 852, 44, 216, 106, 872};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 596.9047619047619;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> scores = {366, 943, 192, 443, 818, 711, 139, 101, 344, 294, 315, 51, 150, 699, 208, 437, 902};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 418.4117647058824;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> scores = {90, 336, 588, 238, 185, 239, 376, 143, 168, 502, 46, 593, 1000, 888, 388, 1000, 34, 169, 299, 661, 505, 918, 850, 666, 188, 19, 967, 689, 596, 757, 95, 107, 219, 386, 665, 864, 347, 294, 126, 638, 985, 872, 203, 928, 146, 539, 594, 354, 644, 985};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 481.78;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> scores = {820, 816, 173, 982, 942, 927, 784, 483, 292, 675, 279, 725, 121, 95, 490, 643, 568, 777, 888, 370, 480, 239, 105, 761, 896, 952, 596, 674, 900, 237, 51, 210, 207, 952, 276, 685, 266, 1000, 785, 308, 827, 579, 641, 944, 153, 495, 368, 340, 927, 844};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 618.5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> scores = {542, 351, 1000, 227, 766, 281, 1000, 139, 314, 524, 101, 671, 273, 908, 791, 561, 927, 853, 936, 509, 1000, 543, 446, 413, 952, 626, 145, 764, 594, 444, 939, 13, 72, 929, 236, 189, 291, 914, 976, 294, 227, 161, 501, 5, 161, 915, 215, 366, 627, 823};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 531.2391304347826;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> scores = {446, 144, 759, 412, 210, 949, 941, 847, 374, 199, 696, 430, 288, 441, 846, 994, 991, 432, 531, 466, 142, 101, 747, 675, 333, 203, 269, 127, 50, 755, 346, 406, 59, 300, 748, 611, 647, 110, 497, 305, 966, 1000, 186, 733, 495, 57, 783, 221, 561, 237};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 481.32;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> scores = {129, 811, 648, 148, 889, 863, 727, 34, 408, 996, 229, 611, 984, 860, 28, 806, 157, 294, 684, 743, 318, 213, 817, 491, 193, 480, 400, 396, 998, 922, 801, 977, 616, 357, 532, 321, 383, 803, 13, 249, 937, 494, 18, 765, 426, 265, 935, 204, 209, 790};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 531.5238095238095;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> scores = {55, 638, 905, 438, 114, 225, 92, 901, 364, 260, 5, 150, 348, 524, 933, 464, 156, 444, 386, 437, 955, 570, 951, 66, 974, 278, 810, 534, 262, 904, 703, 727, 904, 1000, 715, 722, 632, 197, 204, 993, 343, 64, 855, 402, 912, 503, 593, 133, 589, 312};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 513.3541666666666;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> scores = {278, 143, 212, 679, 316, 382, 35, 935, 433, 254, 329, 649, 596, 642, 184, 388, 459, 549, 502, 662, 108, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 442.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> scores = {377, 606, 404, 176, 467, 251, 508, 251, 429, 889, 926, 766, 38, 714, 182, 217, 104, 192, 473, 668, 220, 629, 718, 962, 666, 490, 416, 507, 292, 750, 1000, 303, 595, 834, 657, 191, 657, 506, 848, 526, 329, 550, 272, 64, 412, 178, 542, 321, 854, 395};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 486.44;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> scores = {9, 32, 3, 532, 31, 247, 631, 786, 604, 988, 303, 1000, 754, 461, 133, 431, 173, 245, 586, 497, 376, 800, 613, 268, 34, 113, 701, 605, 866, 599, 602, 735, 537, 701, 967, 507, 216, 897, 698, 162, 162, 552, 246, 666, 755, 976, 625, 533, 768, 357};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 556.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> scores = {392, 65, 24, 382, 954, 557};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 395.6666666666667;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> scores = {179, 540, 325, 852, 372, 344, 339, 795, 646, 44, 244, 290, 506, 121, 596, 879, 13, 663, 313, 66, 332, 748, 579, 75, 1000, 445, 882, 283, 184, 323, 488, 985, 604, 514, 240, 54, 290, 342, 576, 930, 267};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 445.5609756097561;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> scores = {891, 193, 897, 190, 250, 792, 58, 656, 460, 781, 351, 859, 251, 526, 750, 567, 17, 784, 349, 463, 731, 827, 896, 696, 109, 739, 940, 1, 358, 699, 29, 523, 886, 325, 661, 922, 541, 141, 838, 301, 181, 23, 754, 651, 434, 790, 81, 671, 809, 734};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 609.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> scores = {389, 143, 412};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 389.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> scores = {229, 452, 325, 858, 640, 847, 716, 131, 264, 1000, 408, 639, 821, 836, 821, 761, 277, 507, 842, 589, 932, 751, 971, 748, 668, 447, 367, 3, 142, 651, 101, 855, 306, 763, 323, 627, 508, 131, 575, 774, 239, 997, 161, 647, 438, 503, 632, 282, 241, 422};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 582.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> scores = {951, 461, 827, 149, 393, 471, 221, 938, 148, 786, 87, 252, 411, 70, 540, 196, 833, 924, 392, 890, 110, 872, 617, 328, 500, 326, 958, 446, 883, 872, 959, 967, 890, 46, 285, 476, 750, 1000, 394, 631, 944, 312, 380, 203, 634, 715, 302, 434, 10, 137};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 529.1428571428571;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> scores = {231, 387, 538, 641, 629, 16, 12, 546, 111, 970, 803, 76, 226, 476, 496, 797, 8, 484, 165, 207};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 431.5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> scores = {669, 808, 385, 312, 444, 358, 570, 500, 791, 490, 299, 236, 780, 686, 820, 784, 33, 49, 682, 499, 1000, 713, 856, 965, 806, 571, 963, 897, 307, 905, 947, 359, 676, 267, 1000, 941, 808, 193, 839, 882, 688, 232};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 685.6666666666666;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> scores = {499, 467, 715, 907, 513, 368, 988, 735, 435, 405, 259, 232, 88, 927, 54, 408, 175, 931, 74, 830, 859, 269, 777, 76, 401, 647, 388};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 497.2962962962963;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> scores = {20, 285, 683, 630, 611, 670, 26, 652, 560, 837, 310, 71, 789, 664, 121, 262, 643, 913, 778, 803, 1000, 1000, 657, 120, 384, 800, 329, 546, 76, 929, 87, 388, 450, 165, 90, 655, 164, 566, 67, 833, 646, 232, 615, 108, 386, 187, 978, 953, 558, 834};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 576.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> scores = {748, 459, 261, 517, 106, 191, 549, 1000, 248, 326, 574, 480, 709, 612, 913, 797, 427, 798, 355, 237, 178, 489, 416, 406, 214, 99, 452, 439, 266, 833, 763, 987, 892, 648, 391, 591, 27, 513, 867, 817, 87, 486, 550, 714, 39, 994, 41, 30, 81, 57};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 473.48;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> scores = {960, 486, 834, 182, 235, 779, 798, 892, 207, 255, 420, 772, 41, 858, 667, 75, 790, 147, 556, 35, 809, 965, 918, 800, 955, 947, 36, 181, 130, 777, 605, 411, 614, 485, 378, 370, 655, 149, 285, 939, 963, 931, 319, 933, 495, 270, 618, 22, 3, 731};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 580.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> scores = {429, 3, 716, 958, 246, 347, 880, 274, 893, 372, 604, 1000, 54, 644, 951, 887, 796, 170, 764, 454, 25, 314, 251, 506, 294, 86, 801, 607, 947};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 536.1052631578947;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> scores = {1000, 737, 329, 488, 244, 964, 878, 84, 358, 149, 713, 26, 720, 864, 390, 453, 613, 35, 252, 355, 966, 131, 653, 989, 273, 958, 974, 645, 26, 737, 488, 238, 248, 315, 63, 256, 452, 273, 593, 331, 925, 147, 224, 412, 239, 783, 595, 462, 245, 613};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 478.12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> scores = {739, 125, 187, 209, 596, 1000, 625, 999, 932, 641, 87, 383, 59, 734, 542, 982, 370, 196, 269, 358, 235, 30, 757, 11, 803, 321, 359, 869, 74, 626, 292, 637, 850, 680, 469, 171, 838, 404, 509, 439, 733, 223, 811, 318, 591, 691, 628, 343, 871, 380};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 499.92;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> scores = {119, 985, 240, 420, 658, 471, 77, 209};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 397.375;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> scores = {735, 481, 842, 174, 215, 976, 827, 996, 347, 530, 584, 391, 854, 443, 964, 1000, 719, 383, 804, 522, 774, 885, 691, 842, 704, 27, 647, 701, 735, 667, 947, 375, 821, 588, 958, 53, 410, 380, 84, 68, 828, 365, 828, 926, 55, 925, 650, 87, 358, 74};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 663.75;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> scores = {823, 120, 566, 812, 425, 582, 936, 901, 723, 867, 179, 118, 7, 757, 698, 360, 90, 964, 308, 136, 914, 913, 941, 192, 70, 169, 269, 997, 320, 442, 29, 306, 550, 996, 327, 1000, 858, 787, 414, 648, 286, 141, 798, 387, 508, 967, 564, 816, 101, 381};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 532.9615384615385;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> scores = {831, 920, 257, 219, 699, 965, 980, 148, 61, 370, 883, 511, 96, 31, 371, 49, 628, 37, 464, 5, 375, 996, 899, 611, 321, 29, 850, 961, 1000, 925, 236, 233, 993, 540, 565, 253, 279, 612, 223, 185, 1000, 950, 570, 761, 904, 617, 333, 635, 19, 980};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 552.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> scores = {229, 569, 366, 365, 778, 535, 820, 831, 617, 698, 331, 58, 1000, 470, 231, 469, 30, 955, 107, 754, 5, 900, 722, 439, 18, 914, 589, 921, 941, 569, 557, 953, 583, 696, 4, 884, 411, 623, 7, 309, 308, 588, 183, 398, 816};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 569.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> scores = {449, 648, 579, 655, 546, 311, 255, 836, 398, 401, 594, 358, 275, 128, 848, 589, 762, 53, 562, 219, 494, 704, 671, 176, 864, 733, 811, 412, 297, 785, 30, 858, 625, 758, 886, 379, 976, 723, 559, 928, 692, 368, 705, 492, 3, 41, 235, 441, 513, 320};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 552.5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> scores = {650, 371, 120, 670, 833, 517, 479, 853, 915, 489, 747, 72, 440, 193, 456, 958, 103, 447, 753, 541, 257, 266, 254, 616, 525, 100, 700, 6, 484, 779, 899, 453, 429, 220, 452, 542, 140, 190, 994, 187, 791, 574, 835, 310, 778, 631, 422, 804, 827, 53};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 509.4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> scores = {850, 976, 858, 992, 590, 687, 896, 99, 41, 54, 479, 934, 380, 45, 625, 973, 425, 760, 85, 654, 611, 785, 370, 577, 113, 694, 348, 311, 430, 479, 891};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 592.6666666666666;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> scores = {85, 115, 106, 449, 891, 187, 669, 324, 221, 535, 583, 592, 988, 1000, 122, 955, 454, 237, 400, 909, 855, 618, 715, 527, 896, 38, 824, 804, 870, 59, 985, 476, 942, 852, 770, 583, 760, 282, 772, 391, 425, 239, 9, 41, 750, 735, 319, 694, 766, 211};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 583.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> scores = {132, 671, 8, 402, 210, 1000, 704, 467, 532, 84, 568, 406, 908, 998, 217, 492, 282, 460, 178, 509, 341, 534, 550, 750, 474, 185, 738, 776, 485, 471, 275, 22, 798, 833, 725, 270, 181};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 479.7142857142857;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> scores = {1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> scores = {1, 2, 3, 4};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> scores = {1, 1, 999, 999, 1000, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 999.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> scores = {1, 13, 8, 6, 7, 9};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> scores = {10, 31, 31, 31, 130, 130, 130};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 70.6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> scores = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> scores = {10, 11, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 340.3333333333333;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> scores = {1, 1, 999, 999, 1000, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 999.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> scores = {1, 13, 8, 6, 7, 9};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> scores = {1, 2};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> scores = {1, 1, 999, 999, 3, 1000, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 999.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> scores = {1, 3, 4};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> scores = {1, 1, 100};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 34.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> scores = {5};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> scores = {1, 2, 3, 4, 6};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> scores = {1, 1, 1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> scores = {10, 10, 10, 1, 1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> scores = {1, 7, 9, 8, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 205.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> scores = {1, 5, 6};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> scores = {1, 100, 324};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 141.66666666666666;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> scores = {1, 1, 9, 10, 10};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> scores = {1, 2, 3, 5, 7};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> scores = {3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> scores = {1, 100, 101};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> scores = {1, 1, 1, 2, 2};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> scores = {1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> scores = {1, 1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> scores = {2, 2, 2, 4};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> scores = {1, 54, 7, 78, 29, 3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 28.666666666666668;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> scores = {1, 2, 3, 10, 20, 30, 100};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 23.714285714285715;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> scores = {1, 6};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> scores = {7, 8, 1, 7, 8};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 7.333333333333333;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> scores = {5, 2, 5, 1, 3, 2, 1, 10, 3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5555555555555554;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> scores = {3, 5, 3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6666666666666665;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> scores = {1, 2, 10, 10, 10};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> scores = {1, 8, 9};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> scores = {1, 3, 6, 6, 100, 101};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 36.166666666666664;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> scores = {1, 2, 2, 2, 100};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 21.4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> scores = {1, 1, 1, 2, 2, 2};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> scores = {1, 2, 99, 100, 101};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 99.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> scores = {1, 13, 8, 6, 7, 9, 8, 5, 6, 9, 3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> scores = {1, 10, 11};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> scores = {2, 5, 8, 9, 10, 11};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 8.5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> scores = {1, 2, 1000};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 334.3333333333333;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> scores = {1, 3, 3, 4};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> scores = {1, 1, 1, 1, 2, 2, 100, 100, 100, 100};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 40.8;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> scores = {1, 3, 6, 6, 100, 101, 100, 101, 1, 3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 42.2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> scores = {1, 2, 700, 701, 703, 704};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 700.5;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> scores = {1, 6, 7};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> scores = {7, 8, 10, 11, 12};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> scores = {1, 3, 3};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> scores = {4, 5};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> scores = {5, 8, 8};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> scores = {1, 2, 1};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> scores = {9, 1, 10};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> scores = {9, 1, 9};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> scores = {1, 2, 2, 5};
    ContestCoordinator* pObj = new ContestCoordinator();
    clock_t start = clock();
    double result = pObj->bestAverage(scores);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21620711&rd=9989&pm=6243
********************************************************************************
#include <vector>
#include <iostream>
# define FOR(i,x,y) for(i=x;i<y;i++)
# define si size()
using namespace std;
 
class ContestCoordinator 
{
public:
double bestAverage(vector <int> scores) 
{
int i=0,j=0;
sort(scores.begin(),scores.end());
  double avg=0.0; double max=0.0;
  FOR(i,0,scores.si)
    {
    int temp=0;                  
    int c=0;
    FOR(j,i,scores.si-i)
    {
    temp+=scores[j];
    c++;
    }
  if(c!=0)
  avg=(double)temp/c;
  if(avg>max)
  max=avg;
}
return max;
}
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/