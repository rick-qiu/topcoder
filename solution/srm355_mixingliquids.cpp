/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7886
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

class MixingLiquids {
public:
    double howMuch(vector<int> percent, vector<int> amount, int need);
};

double MixingLiquids::howMuch(vector<int> percent, vector<int> amount, int need) {
    double ret;
    return ret;
}


int test0() {
    vector<int> percent = {0, 100};
    vector<int> amount = {20, 30};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> percent = {0, 100};
    vector<int> amount = {20, 30};
    int need = 60;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> percent = {90, 70, 80};
    vector<int> amount = {10, 10, 10};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> percent = {30, 80, 60};
    vector<int> amount = {40, 10, 15};
    int need = 57;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 35.18518518518519;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> percent = {27, 72, 40, 2};
    vector<int> amount = {117, 606, 421, 523};
    int need = 28;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1257.8863636363637;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> percent = {22, 82, 21, 14};
    vector<int> amount = {172, 296, 479, 242};
    int need = 28;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1036.9444444444443;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> percent = {40, 98, 28, 50};
    vector<int> amount = {985, 94, 853, 842};
    int need = 28;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 853.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> percent = {70, 18, 22, 81};
    vector<int> amount = {64, 27, 403, 579};
    int need = 28;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 494.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> percent = {44, 81, 53, 3};
    vector<int> amount = {589, 332, 744, 176};
    int need = 28;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 451.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> percent = {71, 21, 13, 27, 91, 75, 59, 84, 34, 81};
    vector<int> amount = {1, 3, 8, 8, 2, 2, 5, 10, 8, 9};
    int need = 90;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3333333333333335;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> percent = {8, 9, 11, 87, 36, 99, 0, 53, 51, 67};
    vector<int> amount = {8, 6, 5, 10, 4, 9, 8, 10, 4, 6};
    int need = 90;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 21.217391304347828;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> percent = {8, 60, 21, 1, 32, 36, 85, 69, 90, 75};
    vector<int> amount = {7, 5, 7, 2, 7, 10, 8, 1, 8, 10};
    int need = 90;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> percent = {43, 83, 8, 13, 46, 49, 87, 93, 28, 93};
    vector<int> amount = {2, 9, 10, 6, 7, 10, 10, 9, 3, 1};
    int need = 90;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> percent = {12, 99, 52, 10, 11, 94, 72, 12, 89, 58};
    vector<int> amount = {8, 2, 7, 7, 1, 10, 9, 9, 1, 4};
    int need = 90;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 16.166666666666668;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> percent = {79, 54, 82, 33, 64, 1, 16, 57, 96, 7, 4, 73, 94, 70, 70, 5, 16, 43, 52, 53};
    vector<int> amount = {36, 70, 28, 53, 81, 80, 38, 92, 64, 42, 26, 28, 46, 88, 28, 48, 58, 90, 85, 27};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1073.3877551020407;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> percent = {56, 69, 2, 54, 61, 60, 76, 43, 63, 84, 86, 91, 83, 71, 56, 53, 12, 52, 2, 29};
    vector<int> amount = {67, 31, 89, 18, 100, 2, 51, 38, 69, 22, 13, 72, 90, 59, 35, 58, 51, 17, 22, 25};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 792.4242424242424;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> percent = {31, 14, 31, 15, 19, 20, 33, 31, 12, 54, 20, 14, 78, 44, 84, 59, 36, 3, 32, 91};
    vector<int> amount = {3, 2, 24, 72, 67, 10, 100, 9, 30, 74, 16, 32, 27, 55, 18, 21, 43, 11, 62, 19};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 357.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> percent = {74, 29, 31, 17, 50, 59, 91, 63, 19, 5, 20, 87, 22, 10, 37, 84, 19, 37, 89, 60};
    vector<int> amount = {48, 84, 100, 82, 12, 100, 48, 73, 1, 66, 1, 67, 68, 4, 9, 9, 23, 20, 29, 70};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 848.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> percent = {0, 42, 90, 83, 96, 86, 92, 25, 93, 89, 7, 81, 22, 65, 82, 88, 8, 8, 67, 74};
    vector<int> amount = {80, 97, 4, 29, 33, 9, 45, 97, 79, 43, 6, 70, 77, 99, 99, 71, 80, 3, 51, 60};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 927.7894736842105;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> percent = {90, 50, 100, 90, 50, 20, 90, 70, 60, 30, 20, 90, 70, 0, 100, 30, 0, 90, 100, 10, 30, 60, 60, 10, 60, 80, 50, 70, 100, 20};
    vector<int> amount = {750, 758, 48, 776, 929, 600, 981, 677, 43, 363, 224, 748, 629, 109, 418, 415, 325, 737, 883, 775, 906, 297, 848, 137, 636, 138, 527, 290, 118, 197};
    int need = 17;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 3190.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> percent = {10, 60, 90, 0, 30, 60, 70, 90, 80, 30, 70, 50, 0, 10, 70, 70, 70, 10, 50, 70, 100, 100, 40, 80, 90, 60, 40, 50, 70, 90};
    vector<int> amount = {15, 470, 390, 369, 411, 290, 73, 316, 493, 463, 9, 81, 764, 304, 248, 513, 784, 56, 772, 956, 147, 558, 587, 718, 39, 594, 974, 84, 428, 287};
    int need = 17;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2839.5652173913045;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> percent = {40, 0, 70, 10, 50, 80, 20, 50, 50, 50, 50, 40, 50, 70, 20, 80, 90, 20, 50, 100, 10, 30, 10, 70, 30, 40, 60, 20, 10, 60};
    vector<int> amount = {165, 254, 964, 647, 239, 607, 726, 650, 446, 973, 871, 79, 71, 674, 488, 550, 939, 451, 192, 112, 516, 221, 420, 969, 92, 113, 575, 910, 658, 697};
    int need = 17;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 5740.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> percent = {60, 90, 30, 20, 20, 40, 70, 40, 10, 30, 60, 10, 40, 20, 20, 40, 90, 60, 90, 30, 60, 90, 50, 40, 100, 100, 60, 30, 40, 60};
    vector<int> amount = {232, 398, 966, 130, 575, 495, 394, 90, 782, 284, 561, 363, 701, 336, 400, 288, 350, 233, 277, 763, 93, 344, 282, 361, 175, 391, 377, 3, 893, 754};
    int need = 17;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2870.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> percent = {40, 70, 90, 70, 90, 0, 60, 90, 40, 70, 40, 90, 90, 100, 10, 60, 60, 60, 10, 0, 0, 90, 50, 40, 0, 100, 50, 20, 30, 80};
    vector<int> amount = {215, 961, 392, 672, 306, 238, 156, 682, 669, 465, 350, 216, 681, 959, 256, 912, 131, 556, 386, 1, 539, 241, 888, 585, 456, 964, 464, 500, 918, 637};
    int need = 17;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 3817.391304347826;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> percent = {31, 28, 39, 26, 50, 19, 99, 8, 34, 47, 96, 59, 67, 19, 95, 3, 97, 22, 95, 40, 54, 0, 95, 26, 59, 52, 92, 54, 3, 27, 85, 3, 80, 16, 81, 24, 8, 11, 79, 72, 52, 10, 97, 24, 78, 11, 50, 23, 89};
    vector<int> amount = {2, 2, 5, 10, 4, 7, 9, 10, 3, 4, 10, 7, 8, 6, 10, 7, 5, 7, 9, 3, 6, 6, 9, 6, 8, 8, 9, 6, 4, 7, 2, 8, 10, 1, 3, 6, 1, 3, 3, 10, 7, 5, 7, 7, 10, 4, 5, 5, 4};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 199.57777777777778;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> percent = {81, 42, 66, 80, 45, 3, 69, 51, 39, 40, 53, 25, 3, 78, 48, 40, 93, 77, 31, 36, 84, 64, 30, 49, 52, 66, 49, 92, 76, 2, 78, 73, 91, 49, 100, 20, 1, 98, 31, 92, 51, 36, 51, 0, 100, 57, 32, 77, 44};
    vector<int> amount = {9, 10, 6, 3, 1, 10, 2, 8, 2, 8, 6, 4, 1, 4, 10, 7, 2, 9, 9, 8, 5, 7, 1, 8, 6, 4, 3, 6, 1, 3, 10, 1, 4, 10, 9, 9, 3, 9, 9, 1, 10, 6, 10, 5, 5, 4, 7, 6, 10};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 145.22222222222223;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> percent = {20, 38, 94, 72, 45, 42, 82, 75, 3, 95, 23, 92, 75, 21, 90, 2, 32, 54, 96, 50, 70, 11, 5, 33, 69, 76, 93, 85, 66, 61, 83, 87, 32, 54, 26, 36, 81, 32, 40, 87, 62, 59, 93, 45, 90, 23, 51, 48, 49};
    vector<int> amount = {9, 7, 1, 1, 6, 5, 7, 1, 2, 10, 4, 10, 6, 6, 7, 2, 8, 8, 9, 9, 7, 10, 3, 4, 8, 7, 7, 3, 4, 1, 1, 3, 8, 2, 1, 7, 10, 6, 2, 2, 10, 1, 6, 10, 1, 10, 7, 4, 6};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 138.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> percent = {61, 53, 86, 35, 45, 26, 35, 96, 100, 43, 0, 17, 49, 3, 23, 81, 95, 74, 88, 27, 1, 10, 71, 72, 42, 56, 38, 81, 93, 50, 44, 13, 39, 61, 96, 79, 56, 29, 91, 32, 68, 71, 44, 37, 7, 33, 24, 58, 75};
    vector<int> amount = {4, 8, 7, 7, 8, 10, 10, 10, 6, 3, 5, 3, 4, 2, 1, 4, 4, 3, 8, 9, 1, 7, 7, 9, 1, 6, 5, 3, 6, 7, 9, 6, 8, 1, 3, 10, 9, 4, 10, 4, 8, 7, 8, 1, 9, 7, 1, 2, 3};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 157.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> percent = {69, 84, 23, 83, 43, 17, 59, 62, 91, 63, 2, 8, 86, 86, 84, 71, 24, 13, 15, 12, 49, 62, 19, 20, 33, 58, 19, 50, 16, 52, 69, 76, 7, 6, 34, 43, 75, 42, 16, 97, 25, 68, 89, 13, 15, 44, 6, 64, 17};
    vector<int> amount = {5, 6, 6, 6, 5, 5, 5, 4, 6, 4, 3, 1, 1, 5, 5, 2, 1, 9, 7, 10, 4, 4, 7, 4, 2, 9, 5, 3, 7, 5, 3, 4, 9, 2, 8, 8, 9, 3, 10, 1, 2, 10, 7, 6, 9, 1, 2, 3, 2};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 196.52380952380952;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> percent = {74, 76, 12, 19, 40, 95, 49, 74, 87, 67, 15, 81, 5, 8, 71, 20, 18, 16, 88, 7, 72, 59, 85, 74, 99, 24, 79, 65, 69, 25, 49, 69, 20, 53, 39, 80, 59, 72, 73, 56, 98, 65, 32, 71, 11, 33, 91, 16, 31, 43};
    vector<int> amount = {523, 35, 912, 226, 696, 468, 808, 591, 28, 58, 542, 139, 829, 84, 456, 35, 861, 988, 203, 637, 568, 830, 112, 370, 83, 815, 193, 286, 684, 343, 290, 93, 638, 537, 290, 870, 667, 664, 337, 425, 2, 202, 322, 850, 344, 758, 288, 565, 552, 175};
    int need = 66;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 13051.545454545454;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> percent = {100, 25, 53, 9, 48, 41, 99, 37, 37, 67, 24, 1, 90, 99, 57, 10, 43, 39, 58, 58, 54, 64, 32, 14, 40, 48, 1, 100, 79, 73, 1, 30, 53, 0, 70, 33, 80, 3, 68, 33, 19, 62, 76, 75, 11, 93, 52, 78, 40, 46};
    vector<int> amount = {866, 410, 133, 760, 520, 616, 532, 487, 869, 299, 141, 988, 629, 511, 865, 408, 446, 132, 618, 657, 928, 834, 367, 770, 727, 908, 167, 229, 181, 183, 339, 586, 178, 977, 974, 983, 902, 228, 782, 895, 995, 58, 466, 29, 133, 464, 563, 344, 475, 109};
    int need = 66;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 16122.407407407407;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> percent = {7, 32, 36, 29, 69, 34, 44, 59, 2, 45, 70, 85, 78, 68, 73, 38, 27, 77, 55, 87, 74, 82, 63, 95, 38, 33, 42, 63, 18, 41, 91, 19, 61, 71, 69, 54, 78, 92, 100, 64, 20, 73, 42, 77, 35, 14, 40, 65, 56, 46};
    vector<int> amount = {229, 706, 625, 194, 816, 79, 857, 461, 153, 341, 598, 274, 556, 871, 950, 271, 138, 840, 449, 684, 201, 654, 370, 126, 225, 17, 436, 144, 459, 946, 759, 185, 746, 871, 458, 914, 387, 291, 304, 863, 358, 568, 45, 411, 796, 678, 560, 998, 144, 98};
    int need = 66;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 19487.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> percent = {85, 73, 41, 67, 23, 53, 13, 75, 96, 16, 61, 22, 1, 62, 50, 5, 5, 29, 27, 35, 57, 15, 86, 32, 53, 63, 26, 21, 85, 59, 21, 20, 43, 26, 74, 74, 32, 77, 3, 69, 90, 18, 50, 30, 51, 26, 59, 41, 1, 73};
    vector<int> amount = {931, 323, 996, 562, 848, 148, 990, 721, 807, 14, 602, 703, 292, 135, 135, 862, 294, 653, 562, 161, 572, 946, 32, 215, 42, 48, 159, 536, 611, 884, 234, 76, 741, 950, 572, 857, 154, 164, 809, 979, 771, 675, 98, 996, 356, 664, 743, 539, 213, 193};
    int need = 66;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 13938.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> percent = {40, 7, 4, 36, 32, 5, 61, 24, 29, 8, 42, 91, 84, 8, 57, 32, 84, 77, 95, 1, 90, 49, 42, 1, 83, 13, 46, 40, 0, 1, 61, 30, 54, 94, 53, 57, 40, 7, 68, 35, 100, 9, 50, 33, 82, 70, 14, 10, 25, 23};
    vector<int> amount = {284, 854, 605, 734, 270, 586, 446, 11, 285, 39, 422, 517, 842, 974, 841, 58, 735, 116, 498, 348, 899, 527, 720, 316, 397, 749, 219, 472, 30, 945, 694, 311, 114, 344, 99, 281, 277, 645, 525, 489, 910, 794, 719, 412, 241, 457, 823, 978, 127, 428};
    int need = 66;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 13751.870967741936;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> percent = {0, 0, 100, 100, 100, 100, 100, 100, 100, 0, 0, 0, 100, 100, 0, 0, 100, 100, 100, 100, 100, 0, 0, 0, 0, 100, 100, 100, 100, 0, 100, 0, 100, 0, 100, 100, 0, 0, 100, 100, 100, 100, 100, 0, 0};
    vector<int> amount = {911, 58, 965, 962, 128, 447, 661, 627, 710, 391, 909, 944, 849, 23, 555, 214, 496, 818, 978, 561, 229, 593, 131, 323, 949, 386, 55, 748, 255, 676, 202, 89, 234, 566, 343, 183, 681, 877, 831, 502, 920, 100, 788, 680, 221};
    int need = 66;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 21213.636363636364;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> percent = {0, 100, 100, 0, 0, 100, 0, 0, 0, 0, 100, 0, 100, 100, 0, 0, 100, 100, 100, 100, 100, 100, 100, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 100, 100, 100, 100, 0, 0, 100, 0, 0, 100, 100, 100};
    vector<int> amount = {129, 485, 344, 857, 670, 2, 383, 778, 14, 919, 671, 55, 603, 391, 502, 600, 904, 351, 718, 471, 548, 876, 786, 599, 320, 745, 943, 286, 182, 800, 725, 453, 802, 550, 894, 492, 794, 921, 155, 313, 983, 595, 676, 175, 916};
    int need = 66;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 19550.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> percent = {11, 37, 17, 36, 32, 97, 69, 96, 4, 29, 51, 18, 74, 43, 63, 40, 65, 96, 8, 79, 69, 19, 51, 18, 99, 52, 40, 68, 71, 77, 14, 25, 97, 56, 89, 30, 44, 8, 30, 73, 100};
    vector<int> amount = {646, 729, 139, 327, 171, 238, 165, 229, 152, 99, 40, 552, 96, 607, 384, 692, 731, 416, 208, 821, 83, 536, 752, 411, 19, 691, 94, 309, 968, 184, 447, 927, 538, 910, 533, 533, 665, 526, 207, 935, 977};
    int need = 42;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 14973.108108108108;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> percent = {88, 68, 48, 66, 95, 91, 4, 79, 76, 97, 11, 44, 41, 82, 74, 62, 2, 36, 98, 31, 37, 17, 5, 7, 100, 74, 54, 49, 20, 85, 65, 98, 59, 83, 49, 3, 84, 89, 7, 34, 2, 47, 27, 75, 81, 48, 35};
    vector<int> amount = {654, 949, 296, 616, 540, 2, 509, 975, 972, 651, 801, 964, 151, 239, 783, 11, 691, 678, 476, 274, 475, 115, 817, 511, 964, 107, 590, 782, 291, 157, 55, 155, 785, 17, 736, 33, 105, 203, 810, 11, 198, 440, 605, 617, 23, 133, 310};
    int need = 55;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 20333.450980392157;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> percent = {45, 83, 90, 90, 97, 90, 56, 18, 57, 6, 46, 22, 38, 2, 57, 92, 22, 78, 39, 19, 16, 49, 3, 61, 3, 78, 55, 2, 82, 99, 41, 51, 33, 20, 53, 37, 31, 36, 57, 9, 84, 70, 8, 67, 14, 29, 52, 39, 61, 54};
    vector<int> amount = {789, 85, 24, 828, 897, 497, 204, 342, 848, 687, 987, 480, 744, 509, 464, 805, 482, 908, 592, 364, 24, 231, 939, 812, 46, 539, 202, 806, 810, 767, 448, 264, 989, 171, 972, 486, 545, 410, 75, 97, 866, 9, 759, 1, 984, 975, 484, 532, 945, 373};
    int need = 74;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 12635.869565217392;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> percent = {47, 25, 79, 48, 47, 28, 58, 66, 7, 28, 76, 79, 41, 71, 6, 90, 16, 62, 88, 83, 79, 2, 2, 98, 91, 42, 46, 70, 50, 22, 11, 27, 49, 61, 50, 79, 35, 5, 85, 6, 34, 90, 10, 58, 5, 48, 44, 5, 14, 67};
    vector<int> amount = {127, 328, 501, 535, 969, 851, 829, 342, 245, 886, 835, 871, 669, 130, 103, 47, 9, 954, 822, 469, 424, 434, 650, 267, 556, 504, 621, 196, 648, 685, 501, 390, 298, 298, 262, 991, 315, 933, 389, 346, 475, 427, 273, 953, 663, 493, 594, 513, 293, 565};
    int need = 96;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 373.8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> percent = {78, 40, 94, 56, 94, 13, 58, 59, 43, 59, 32, 56, 83, 12, 15, 36, 60, 35, 66, 5, 1, 49, 83, 85, 1, 72, 9, 59, 88, 91, 90, 36, 16, 21, 97, 34, 78, 83, 23, 35, 20, 84, 14, 98};
    vector<int> amount = {899, 788, 664, 498, 959, 887, 547, 437, 272, 40, 375, 123, 788, 422, 534, 970, 59, 121, 21, 605, 773, 275, 946, 106, 606, 622, 574, 236, 772, 522, 370, 717, 124, 61, 771, 25, 490, 658, 151, 471, 455, 701, 942, 81};
    int need = 99;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> percent = {26, 41, 36, 96, 39, 67, 14, 43, 4, 64, 43, 57, 43, 78, 81, 72, 13, 1, 78, 87, 88, 46, 95, 78, 38, 61, 98, 92, 37, 32, 1, 53, 62, 93, 92, 91, 55, 2, 56, 82, 77, 10, 32, 2, 23, 76, 77, 98};
    vector<int> amount = {931, 884, 984, 90, 620, 107, 770, 768, 667, 147, 542, 928, 897, 52, 101, 702, 711, 472, 608, 545, 267, 691, 470, 589, 343, 292, 204, 475, 111, 539, 452, 984, 729, 43, 953, 877, 28, 935, 503, 147, 35, 230, 349, 148, 833, 560, 900, 847};
    int need = 40;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 19652.526315789473;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> percent = {25, 45, 39, 54, 64, 72, 24, 73, 45, 9, 4, 29, 45, 44, 43, 63, 95, 98, 5, 34, 76, 67, 29, 46, 96, 1, 8, 5, 68, 80, 26, 100, 43, 56, 85, 97, 75, 29, 13, 17, 61, 87, 7, 0, 38, 44};
    vector<int> amount = {672, 270, 690, 237, 722, 401, 535, 724, 932, 260, 401, 885, 406, 351, 430, 335, 11, 684, 660, 241, 976, 634, 381, 372, 922, 662, 277, 102, 362, 409, 176, 51, 553, 287, 191, 643, 366, 76, 313, 73, 508, 142, 331, 800, 830, 920};
    int need = 11;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 5562.388888888889;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> percent = {48, 35, 33, 41, 57, 94, 36, 66, 54, 50, 59, 58, 41, 98, 37, 81, 60, 9, 67, 57, 45, 14, 63, 15, 13, 13, 1, 83, 4, 1, 97, 69, 46, 13, 22, 45, 78, 55, 94, 97, 95, 93, 87, 30, 6, 76, 24, 12};
    vector<int> amount = {293, 518, 874, 734, 682, 855, 795, 159, 622, 255, 1, 705, 895, 649, 398, 89, 250, 484, 778, 151, 423, 39, 709, 915, 775, 815, 179, 921, 503, 668, 359, 751, 197, 2, 931, 860, 879, 739, 788, 377, 641, 479, 200, 433, 381, 693, 280, 761};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 17357.030303030304;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> percent = {7, 10, 66, 9, 64, 36, 48, 87, 27, 39, 3, 93, 36, 30, 86, 87, 52, 88, 42, 22, 93, 88, 36, 62, 5, 14, 99, 33, 8, 42, 23, 53, 6, 21, 7, 59, 38, 8, 77, 1, 44, 55, 18, 47, 83, 19, 77, 11, 66, 19};
    vector<int> amount = {585, 560, 130, 279, 206, 68, 260, 214, 75, 139, 299, 307, 944, 693, 452, 213, 103, 934, 117, 377, 701, 986, 98, 124, 8, 833, 204, 367, 24, 634, 274, 522, 847, 681, 801, 987, 795, 626, 381, 38, 641, 941, 720, 596, 137, 322, 135, 285, 582, 748};
    int need = 97;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 306.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> percent = {23, 18, 56, 21, 56, 11, 18, 31, 56, 30, 80, 84, 68, 80, 65, 66, 31, 4, 12, 0, 13, 77, 86, 31, 45, 83, 23, 1, 90, 50, 83, 67, 98, 43, 86, 74, 75, 73, 78, 14};
    vector<int> amount = {840, 173, 888, 611, 983, 50, 788, 795, 46, 456, 210, 721, 659, 687, 108, 164, 725, 213, 271, 814, 518, 192, 98, 953, 274, 904, 22, 859, 134, 631, 637, 291, 252, 482, 692, 155, 212, 550, 818, 438};
    int need = 15;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 6601.8125;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> percent = {35, 41, 77, 41, 85, 37, 61, 49, 59, 43, 79, 55, 75, 43, 51, 69, 61, 83, 43, 55, 45, 47, 59, 79, 45, 37, 53, 53, 63, 81, 51, 85, 67, 69, 35, 81, 69, 47, 77, 53, 77, 71, 79, 77, 63, 43, 41};
    vector<int> amount = {426, 277, 273, 929, 404, 185, 90, 507, 250, 646, 635, 310, 638, 905, 658, 813, 756, 596, 560, 670, 40, 913, 312, 951, 732, 541, 615, 859, 729, 580, 467, 228, 194, 921, 550, 87, 814, 108, 722, 557, 949, 131, 925, 758, 279, 292, 116};
    int need = 35;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 976.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> percent = {77, 85, 35, 37, 55, 63, 35, 63, 71, 81, 61, 61, 73, 51, 37, 77, 67, 81, 79, 83, 83, 67, 73, 45, 69, 41, 53, 71, 71, 79, 81, 63, 85, 73, 57, 39, 53, 61, 69, 57, 75, 61, 61, 67, 45, 43, 87};
    vector<int> amount = {77, 242, 214, 928, 289, 315, 53, 22, 255, 561, 501, 464, 699, 14, 404, 671, 966, 31, 322, 746, 182, 257, 681, 430, 675, 596, 150, 837, 605, 73, 376, 480, 433, 181, 638, 432, 459, 150, 851, 70, 939, 226, 971, 312, 554, 189, 805};
    int need = 35;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 267.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> percent = {59, 81, 39, 75, 71, 57, 83, 87, 77, 35, 79, 55, 57, 41, 75, 57, 49, 59, 49, 39, 35, 35, 43, 45, 85, 83, 61, 77, 77, 49, 85, 63, 51, 39, 83, 63, 57, 43, 71, 53, 59, 85, 49, 85, 75, 39, 43};
    vector<int> amount = {101, 851, 297, 248, 853, 268, 540, 432, 651, 68, 928, 119, 157, 772, 228, 766, 768, 920, 717, 404, 390, 805, 377, 650, 545, 538, 272, 87, 191, 937, 411, 864, 182, 444, 575, 708, 950, 962, 952, 840, 908, 217, 528, 150, 195, 491, 855};
    int need = 35;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1263.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> percent = {3, 38, 65, 20, 3, 10, 58, 1, 54, 44, 0, 13, 33, 62, 51, 37, 19, 7, 37, 28, 53, 41};
    vector<int> amount = {61, 82, 63, 34, 70, 10, 59, 94, 71, 39, 45, 15, 68, 8, 35, 3, 68, 69, 89, 26, 94, 94};
    int need = 67;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> percent = {56, 46, 12, 43, 5, 12, 21, 30, 43, 67, 37, 21, 41, 62, 42, 19, 63, 29, 57, 16, 52, 43};
    vector<int> amount = {81, 3, 79, 100, 23, 16, 75, 79, 12, 94, 70, 37, 41, 89, 4, 66, 66, 85, 56, 90, 46, 18};
    int need = 67;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 94.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> percent = {43, 34, 51, 31, 27, 60, 9, 6, 11, 67, 17, 50, 59, 59, 6, 10, 55, 34, 40, 47, 56, 25};
    vector<int> amount = {58, 81, 11, 85, 43, 37, 17, 98, 22, 73, 63, 75, 71, 25, 40, 19, 77, 65, 29, 54, 14, 57};
    int need = 67;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 73.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> percent = {34, 6, 14, 85, 50, 16, 21, 40, 60, 4, 7, 79, 36, 25, 88, 42, 92, 59, 75, 38, 96, 44, 52, 61, 71, 94, 44, 42, 44, 44, 27, 8, 9, 2, 40, 17, 93, 34, 13, 57, 82, 35, 87, 42, 21, 61, 25, 5, 17, 41};
    vector<int> amount = {3, 5, 1, 10, 2, 10, 9, 5, 5, 1, 10, 8, 2, 4, 1, 1, 4, 4, 6, 6, 4, 2, 7, 6, 8, 5, 9, 9, 5, 5, 5, 10, 8, 3, 1, 6, 2, 1, 9, 2, 5, 1, 6, 2, 8, 7, 2, 7, 3, 5};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> percent = {47, 63, 54, 74, 97, 0, 98, 38, 59, 91, 43, 2, 86, 3, 40, 62, 76, 92, 39, 95, 60, 86, 87, 4, 19, 37, 90, 4, 90, 34, 39, 17, 4, 92, 73, 34, 85, 88, 42, 29, 0, 70, 44, 58, 88, 14, 91, 27, 3, 49};
    vector<int> amount = {1, 2, 5, 2, 10, 6, 6, 6, 7, 4, 5, 9, 8, 9, 3, 7, 7, 9, 8, 2, 5, 4, 4, 7, 2, 10, 1, 8, 7, 6, 7, 1, 5, 7, 8, 6, 4, 4, 6, 1, 4, 1, 4, 1, 6, 8, 8, 10, 10, 4};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> percent = {51, 62, 26, 46, 73, 93, 39, 100, 38, 78, 44, 81, 84, 98, 71, 56, 81, 33, 19, 44, 31, 44, 39, 7, 89, 38, 13, 81, 32, 71, 32, 34, 16, 64, 37, 18, 71, 88, 0, 70, 3, 87, 5, 10, 5, 30, 15, 68, 98, 9};
    vector<int> amount = {7, 10, 5, 3, 7, 7, 10, 1, 4, 9, 7, 5, 6, 5, 10, 1, 9, 6, 2, 9, 1, 7, 7, 5, 4, 6, 4, 5, 8, 3, 6, 7, 10, 8, 2, 4, 6, 4, 6, 9, 3, 3, 1, 2, 5, 5, 4, 7, 4, 1};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> percent = {93, 28, 60, 95, 72, 88, 21, 88, 75, 14, 22, 100, 75, 50, 66, 91, 36, 79, 81, 73, 6, 61, 54, 9, 98, 85, 57, 36, 92, 7, 31, 64, 8, 44, 84, 0, 38, 20, 80, 56, 22, 29, 71};
    vector<int> amount = {361, 219, 782, 133, 457, 229, 703, 942, 83, 202, 993, 235, 435, 414, 475, 868, 670, 926, 225, 757, 347, 220, 575, 850, 708, 400, 315, 323, 692, 774, 580, 831, 535, 756, 519, 370, 823, 770, 830, 824, 939, 681, 513};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 235.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> percent = {60, 19, 76, 27, 35, 83, 22, 92, 55, 7, 84, 31, 19, 0, 21, 2, 25, 94, 16, 59, 36, 30, 30, 73, 82, 18, 71, 72, 41, 51, 70, 43, 55, 38, 100, 99, 25, 14, 85, 8, 47, 33, 11};
    vector<int> amount = {305, 913, 325, 164, 741, 345, 937, 922, 56, 454, 545, 333, 379, 866, 747, 980, 210, 160, 672, 223, 97, 824, 354, 209, 385, 495, 422, 720, 161, 577, 505, 377, 766, 969, 668, 78, 997, 189, 498, 761, 406, 260, 535};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 668.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> percent = {87, 16, 100, 99, 81, 14, 75, 50, 69, 16, 11, 2, 8, 84, 63, 87, 46, 55, 69, 89, 80, 3, 41, 98, 88, 7, 52, 78, 58, 23, 29, 98, 78, 53, 87, 93, 18, 47, 46, 9, 25, 36, 70};
    vector<int> amount = {337, 299, 884, 175, 867, 807, 744, 637, 530, 443, 406, 571, 237, 56, 554, 901, 14, 176, 626, 35, 880, 895, 743, 924, 689, 834, 98, 301, 655, 137, 273, 890, 981, 678, 649, 241, 301, 716, 483, 420, 572, 378, 465};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 884.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> percent = {57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57};
    vector<int> amount = {452, 514, 696, 751, 568, 969, 175, 540, 526, 588, 411, 112, 670, 279, 449, 38, 956, 91, 875, 633, 308, 296, 816, 520, 558, 202, 846, 867, 809, 190, 818, 301, 281, 988, 76, 306, 130, 92, 502, 296, 68, 411, 603, 215, 359};
    int need = 57;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 21151.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> percent = {57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57};
    vector<int> amount = {741, 90, 322, 694, 777, 521, 110, 518, 722, 420, 104, 997, 634, 485, 225, 821, 591, 675, 890, 216, 552, 717, 794, 867, 278, 782, 869, 829, 133, 48, 572, 838, 546, 515, 809, 914, 396, 789, 705, 190, 612, 880, 138, 479, 823, 25};
    int need = 58;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> percent = {57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57};
    vector<int> amount = {308, 847, 808, 860, 218, 73, 456, 91, 824, 450, 392, 694, 379, 432, 139, 746, 86, 548, 399, 876, 553, 873, 770, 444, 290, 748, 102, 61, 869, 132, 495, 593, 381, 672, 737, 470, 827, 774, 220, 357, 771, 304, 362, 95, 588, 102, 149};
    int need = 56;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> percent = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {88, 118, 817, 203, 534, 531, 467, 476, 809, 976, 769, 488, 290, 891, 955, 602, 597, 812, 864, 569, 769, 469, 940, 300, 788, 596, 396, 835, 345, 414, 550, 346, 979, 947, 884, 535, 969, 382, 55, 137, 274, 212, 237, 865, 80};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 25160.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> percent = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> amount = {585, 749, 730, 831, 280, 615, 305, 140, 962, 526, 831, 975, 163, 607, 804, 547, 369, 185, 940, 571, 22, 725, 619, 773, 843, 774, 154, 976, 85, 711, 625, 647, 490, 305, 636, 949, 250, 308, 65, 656, 879, 586, 878, 727, 823};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 26221.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> percent = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> amount = {345, 676, 110, 255, 639, 872, 319, 951, 198, 142, 89, 962, 239, 470, 194, 540, 760, 273, 694, 28, 400, 899, 935, 593, 887, 720, 444, 127, 729, 648, 804, 969, 201, 188, 514, 6, 96, 560, 544, 573, 93, 297, 21, 874, 571};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> percent = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> amount = {183, 201, 153, 656, 209, 166, 880, 274, 277, 462, 295, 842, 439, 193, 104, 362, 862, 693, 384, 632, 244, 230, 214, 643, 372, 254, 129, 50, 772, 659, 972, 90, 186, 21, 227, 686, 553, 854, 245, 150, 827, 586, 601, 210, 381};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> percent = {98, 86, 51, 42, 21, 69, 36, 69, 13, 80, 11, 50, 91, 13, 60, 92, 4, 91, 85, 92, 10, 64, 23, 6, 98, 26, 27, 96, 33, 97, 36, 31, 45, 23, 92, 66, 92, 35, 10, 34, 55, 6, 66, 6, 37, 54, 20, 76, 29, 83};
    vector<int> amount = {9, 9, 4, 10, 8, 2, 2, 5, 8, 3, 6, 1000, 9, 7, 10, 8, 1, 7, 1, 8, 3, 9, 5, 8, 3, 3, 4, 6, 3, 8, 4, 7, 10, 6, 7, 3, 3, 9, 5, 1, 4, 5, 8, 7, 8, 7, 7, 9, 10, 6};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1281.5744680851064;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> percent = {18, 75, 76, 3, 8, 42, 80, 37, 73, 86, 94, 21, 76, 97, 12, 0, 46, 57, 97, 0, 7, 74, 5, 86, 67, 89, 3, 44, 16, 44, 50, 53, 78, 82, 48, 94, 78, 85, 20, 42, 5, 8, 46, 62, 41, 4, 23, 58, 12, 3};
    vector<int> amount = {3, 3, 4, 5, 2, 5, 1, 10, 3, 1, 1, 8, 8, 7, 6, 1, 2, 4, 7, 7, 1, 1, 4, 7, 3, 2, 2, 3, 9, 10, 1000, 6, 8, 7, 4, 2, 6, 5, 9, 1, 9, 9, 2, 9, 3, 1, 2, 5, 3, 4};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1205.108695652174;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> percent = {92, 94, 89, 100, 7, 73, 74, 37, 54, 10, 40, 50, 80, 72, 31, 52, 31, 82, 16, 18, 5, 29, 19, 11, 54, 15, 23, 54, 44, 15, 22, 61, 49, 88, 85, 88, 51, 52, 97, 15, 90, 45, 67, 11, 36, 42, 64, 79, 19, 37};
    vector<int> amount = {4, 8, 2, 2, 10, 9, 1, 8, 10, 1, 4, 1000, 5, 10, 5, 2, 5, 7, 6, 2, 5, 8, 7, 9, 4, 1, 7, 2, 9, 2, 1, 5, 9, 3, 7, 6, 1, 2, 4, 9, 4, 6, 9, 1, 2, 7, 2, 5, 6, 5};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1244.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> percent = {80, 38, 82, 67, 0, 90, 13, 87, 38, 22, 92, 15, 2, 10, 29, 4, 35, 35, 0, 71, 58, 36, 50, 47, 15, 14, 90, 56, 89, 52, 3, 62, 73, 59, 56, 88, 91, 97, 18, 29, 20, 56, 89, 0, 1, 97, 62, 30, 29, 94};
    vector<int> amount = {6, 3, 9, 2, 2, 7, 4, 10, 5, 2, 1, 4, 1, 5, 6, 4, 1, 4, 6, 9, 3, 3, 1000, 8, 2, 2, 8, 5, 3, 7, 4, 8, 8, 2, 1, 7, 2, 2, 1, 10, 9, 9, 1, 3, 1, 9, 4, 2, 5, 1};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1210.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> percent = {78, 84, 16, 27, 2, 3, 92, 44, 3, 91, 85, 72, 32, 24, 95, 62, 43, 64, 69, 64, 80, 83, 23, 1, 50, 67, 43, 44, 28, 12, 44, 80, 60, 74, 5, 70, 13, 36, 95, 23, 100, 32, 74, 87, 33, 44, 12, 15, 97, 21};
    vector<int> amount = {9, 5, 9, 2, 6, 4, 5, 2, 3, 7, 7, 1, 10, 2, 4, 1, 6, 1, 8, 8, 4, 7, 5, 3, 1000, 10, 3, 5, 8, 7, 4, 3, 7, 7, 2, 5, 8, 9, 8, 1, 4, 10, 3, 8, 2, 7, 2, 6, 9, 2};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1242.888888888889;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> percent = {78, 88, 85, 42, 8, 71, 0, 37, 91, 90, 13, 56, 72, 2, 83, 80, 84, 11, 97, 28, 40, 71, 77, 85, 63, 21, 65, 34, 17, 29, 36, 74, 89, 85, 51, 12, 20, 57, 99, 49, 58, 20, 26, 0, 55, 97, 77, 62, 55, 56};
    vector<int> amount = {8, 6, 2, 7, 8, 4, 3, 3, 5, 3, 4, 8, 8, 4, 6, 6, 7, 2, 1, 10, 1000, 3, 7, 7, 3, 5, 9, 6, 6, 9, 1, 9, 4, 3, 8, 5, 1, 2, 8, 4, 5, 1, 6, 3, 6, 8, 10, 2, 8, 5};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 225.57142857142858;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> percent = {100, 49, 2, 49, 98, 11, 49, 83, 7, 14, 56, 15, 83, 68, 82, 44, 38, 20, 7, 97, 5, 44, 5, 84, 58, 97, 65, 49, 67, 32, 84, 96, 27, 54, 39, 53, 38, 50, 6, 96, 20, 43, 28, 98, 40, 96, 12, 46, 95, 42};
    vector<int> amount = {6, 9, 2, 10, 5, 8, 5, 7, 2, 7, 5, 7, 5, 5, 10, 7, 2, 9, 10, 10, 8, 9, 2, 9, 4, 8, 5, 4, 7, 8, 6, 4, 6, 8, 8, 10, 1, 7, 5, 3, 1, 7, 5, 6, 1000, 4, 5, 7, 5, 3};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 305.28571428571433;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> percent = {35, 92, 81, 53, 2, 50, 75, 23, 23, 82, 60, 61, 14, 72, 15, 11, 33, 45, 56, 66, 51, 35, 32, 96, 46, 36, 94, 44, 0, 20, 19, 27, 11, 16, 70, 76, 60, 75, 93, 65, 60, 82, 60, 75, 7, 36, 13, 91, 27, 23};
    vector<int> amount = {931, 996, 923, 967, 997, 994, 904, 939, 907, 953, 969, 974, 966, 998, 967, 994, 922, 941, 914, 940, 943, 963, 942, 916, 997, 959, 957, 913, 972, 977, 922, 957, 981, 915, 943, 1000, 1, 950, 938, 931, 980, 972, 928, 907, 920, 944, 915, 938, 946, 970};
    int need = 60;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 34078.48648648649;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> percent = {83, 11, 53, 68, 47, 89, 15, 56, 23, 0, 0, 43, 22, 67, 46, 82, 1, 50, 79, 84, 95, 27, 19, 95, 14, 85, 31, 47, 58, 4, 4, 44, 78, 14, 6, 98, 86, 43, 78, 17, 89, 94, 21, 75, 37, 17, 60, 58, 41, 5};
    vector<int> amount = {996, 970, 921, 950, 972, 950, 924, 989, 928, 932, 969, 901, 996, 902, 943, 948, 926, 977, 918, 925, 936, 964, 920, 929, 943, 972, 911, 949, 991, 957, 904, 905, 941, 951, 934, 911, 914, 979, 954, 985, 939, 944, 951, 985, 953, 996, 1, 999, 927, 923};
    int need = 60;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 34730.88372093023;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> percent = {69, 71, 27, 95, 3, 10, 71, 78, 17, 12, 55, 32, 8, 54, 95, 41, 99, 89, 29, 26, 70, 44, 89, 29, 0, 13, 12, 14, 20, 70, 49, 83, 8, 64, 86, 70, 49, 51, 93, 64, 88, 53, 72, 51, 89, 60, 27, 24, 21, 79};
    vector<int> amount = {920, 981, 956, 988, 968, 912, 977, 971, 965, 939, 953, 952, 941, 993, 967, 901, 981, 997, 963, 997, 975, 947, 904, 907, 927, 955, 941, 942, 941, 988, 927, 974, 951, 923, 964, 36, 952, 938, 904, 984, 930, 965, 987, 956, 965, 960, 947, 957, 965, 933};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 30832.108108108107;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> percent = {82, 18, 52, 74, 36, 60, 29, 47, 5, 37, 70, 38, 91, 66, 71, 73, 2, 25, 12, 70, 20, 89, 13, 70, 65, 56, 41, 54, 7, 87, 75, 26, 27, 40, 65, 55, 38, 21, 74, 12, 91, 5, 69, 59, 58, 92, 22, 12, 89, 45};
    vector<int> amount = {984, 998, 929, 966, 970, 961, 978, 909, 937, 938, 36, 929, 1000, 937, 995, 959, 988, 994, 970, 983, 952, 946, 988, 961, 900, 945, 968, 966, 929, 987, 986, 996, 973, 935, 976, 957, 985, 939, 968, 924, 950, 906, 947, 996, 940, 981, 987, 902, 940, 937};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 31139.96875;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> percent = {96, 31, 32, 86, 47, 15, 61, 59, 9, 81, 19, 80, 72, 76, 30, 86, 54, 48, 45, 66, 61, 50, 40, 6, 8, 4, 31, 17, 33, 100, 32, 85, 76, 10, 68, 0, 4, 82, 62, 8, 45, 47, 88, 53, 90, 70, 49, 71, 29, 6};
    vector<int> amount = {8, 2, 5, 9, 9, 1, 3, 9, 8, 3, 7, 3, 2, 1, 1000, 7, 1, 9, 3, 1, 2, 1000, 8, 8, 3, 9, 2, 6, 4, 10, 1, 3, 4, 8, 1, 3, 9, 6, 9, 8, 4, 1, 4, 7, 6, 6, 9, 5, 3, 10};
    int need = 40;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2218.5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> percent = {95, 71, 50, 21, 65, 77, 13, 97, 30, 89, 81, 9, 44, 56, 5, 30, 83, 41, 11, 62, 87, 55, 41, 5, 77, 98, 84, 3, 55, 23, 45, 63, 60, 78, 69, 25, 79, 38, 85, 99, 50, 83, 92, 13, 79, 18, 48, 19, 37, 63};
    vector<int> amount = {7, 8, 4, 2, 10, 9, 2, 3, 1000, 6, 1, 8, 10, 7, 7, 4, 1, 5, 3, 10, 9, 3, 7, 4, 3, 8, 9, 4, 4, 8, 10, 6, 2, 5, 3, 10, 2, 1, 3, 5, 1000, 2, 6, 7, 2, 4, 6, 5, 9, 8};
    int need = 40;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2184.324324324324;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> percent = {35, 62, 4, 30, 38, 32, 50, 0, 86, 66, 36, 32, 87, 53, 32, 76, 57, 92, 56, 91, 46, 62, 58, 90, 74, 58, 85, 96, 20, 11, 6, 91, 13, 98, 23, 61, 36, 16, 69, 20, 10, 58, 66, 6, 0, 91, 17, 41, 66, 6};
    vector<int> amount = {9, 3, 6, 1000, 10, 6, 1000, 10, 4, 10, 9, 3, 2, 8, 10, 10, 1, 5, 3, 10, 5, 7, 10, 8, 8, 5, 1, 3, 5, 5, 4, 4, 5, 6, 8, 7, 8, 3, 7, 10, 9, 2, 5, 10, 6, 3, 3, 4, 10, 10};
    int need = 40;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2269.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> percent = {42, 19, 27, 6, 79, 65, 32, 39, 52, 36, 55, 70, 66, 12, 50, 8, 52, 67, 79, 69, 97, 57, 86, 44, 33, 4, 87, 30, 88, 64, 58, 36, 83, 8, 68, 24, 39, 43, 3, 8, 72, 30, 51, 40, 24, 41, 36, 35, 87, 78};
    vector<int> amount = {4, 8, 10, 7, 4, 1, 3, 5, 6, 3, 9, 7, 7, 8, 1000, 8, 3, 5, 7, 7, 8, 8, 2, 5, 3, 6, 6, 1000, 5, 6, 10, 2, 9, 10, 10, 4, 8, 3, 2, 6, 7, 8, 2, 10, 9, 6, 2, 5, 7, 5};
    int need = 40;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2238.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> percent = {43, 49, 70, 87, 93, 8, 33, 99, 98, 11, 23, 46, 12, 14, 37, 9, 38, 94, 56, 70, 6, 50, 30, 41, 3, 49, 100, 57, 61, 97, 18, 14, 60, 58, 86, 2, 12, 66, 88, 47, 2, 53, 5, 4, 77, 64, 10, 87, 70, 68};
    vector<int> amount = {9, 1, 6, 4, 9, 1, 7, 9, 3, 7, 6, 2, 3, 8, 4, 3, 4, 8, 6, 3, 6, 1000, 1000, 3, 2, 5, 10, 2, 10, 7, 1, 2, 5, 4, 10, 5, 1, 1, 7, 7, 1, 3, 8, 5, 10, 8, 7, 3, 7, 6};
    int need = 40;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2181.978260869565;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> percent = {19, 97, 42, 75, 61, 72, 23, 89, 43, 6, 30, 9, 20, 61, 20, 52, 24, 24, 99, 11, 87, 81, 74, 11, 29, 52, 86, 63, 71, 20, 44, 7, 9, 37, 1, 36, 56, 13, 8, 11, 67, 45, 62, 87, 44, 60, 30, 61, 75, 4};
    vector<int> amount = {5, 4, 1, 4, 1, 1000, 1000, 5, 9, 1, 6, 9, 8, 9, 5, 5, 1, 8, 3, 4, 1, 4, 5, 7, 2, 9, 7, 8, 2, 7, 8, 3, 7, 1, 1, 1, 8, 8, 9, 10, 2, 3, 10, 1, 3, 7, 6, 3, 9, 7};
    int need = 41;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1840.0645161290322;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> percent = {86, 58, 31, 60, 72, 21, 1, 33, 37, 72, 53, 70, 99, 46, 60, 53, 42, 68, 39, 54, 51, 67, 10, 98, 47, 95, 21, 6, 76, 9, 49, 92, 73, 23, 92, 87, 64, 75, 53, 71, 72, 40, 65, 1, 55, 99, 67, 15, 52, 40};
    vector<int> amount = {9, 8, 2, 3, 8, 10, 3, 8, 1, 1000, 1, 1, 5, 9, 5, 2, 1, 7, 3, 10, 9, 1, 3, 1, 7, 3, 4, 5, 9, 3, 3, 9, 2, 1000, 4, 8, 9, 5, 8, 6, 6, 10, 3, 5, 10, 1, 5, 6, 2, 10};
    int need = 41;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1747.0967741935483;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> percent = {77};
    vector<int> amount = {84};
    int need = 77;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 84.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> percent = {77};
    vector<int> amount = {959};
    int need = 47;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> percent = {0};
    vector<int> amount = {45};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 45.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> percent = {100};
    vector<int> amount = {774};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> percent = {0};
    vector<int> amount = {558};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> percent = {100};
    vector<int> amount = {422};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 422.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> percent = {44, 96};
    vector<int> amount = {7, 563};
    int need = 39;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> percent = {82, 21};
    vector<int> amount = {336, 725};
    int need = 39;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1028.4883720930234;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> percent = {10, 89};
    vector<int> amount = {466, 262};
    int need = 39;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 713.7241379310344;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> percent = {39, 39};
    vector<int> amount = {283, 55};
    int need = 39;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 338.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> percent = {96, 63, 39};
    vector<int> amount = {701, 619, 633};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1168.6153846153848;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> percent = {7, 53, 0};
    vector<int> amount = {539, 355, 580};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 379.7674418604651;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> percent = {44, 91, 32};
    vector<int> amount = {711, 431, 641};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1737.4634146341464;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> percent = {50, 50, 50};
    vector<int> amount = {395, 971, 964};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2330.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> percent = {69, 44, 14, 81};
    vector<int> amount = {908, 516, 434, 138};
    int need = 82;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> percent = {48, 55, 34, 89};
    vector<int> amount = {42, 703, 691, 282};
    int need = 82;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 355.1111111111111;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> percent = {84, 24, 54, 31};
    vector<int> amount = {80, 425, 514, 255};
    int need = 82;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 85.71428571428571;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> percent = {89, 69, 89, 34};
    vector<int> amount = {412, 625, 927, 26};
    int need = 82;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1990.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> percent = {31, 74, 58, 54, 65};
    vector<int> amount = {761, 644, 85, 624, 773};
    int need = 56;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2824.84;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> percent = {99, 58, 76, 13, 7};
    vector<int> amount = {452, 204, 893, 993, 171};
    int need = 56;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2425.8372093023254;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> percent = {11, 56, 84, 73, 19};
    vector<int> amount = {915, 878, 992, 238, 664};
    int need = 56;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2933.2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> percent = {54, 91, 49, 34, 55};
    vector<int> amount = {144, 231, 871, 65, 270};
    int need = 56;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1581.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> percent = {30, 80, 60};
    vector<int> amount = {40, 10, 15};
    int need = 57;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 35.18518518518519;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> percent = {25, 85, 29, 100, 3, 72, 0, 71, 39, 73, 14, 13, 8, 63, 85, 73, 74, 81, 84, 50, 96, 1, 70, 59, 67, 91, 23, 28, 53, 58, 88, 39, 17, 80, 97, 16, 77, 5, 2, 26, 79, 51, 40, 25, 74, 31, 93, 50, 91, 1};
    vector<int> amount = {70, 6, 29, 23, 5, 702, 93, 95, 53, 7, 71, 1000, 23, 66, 15, 80, 21, 12, 92, 45, 68, 74, 900, 51, 90, 99, 22, 59, 75, 6, 29, 40, 46, 39, 13, 46, 40, 89, 22, 80, 93, 100, 95, 51, 20, 72, 74, 39, 74, 52};
    int need = 57;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 4269.613636363636;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> percent = {30, 80, 60, 22};
    vector<int> amount = {40, 10, 15, 33};
    int need = 57;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 35.18518518518519;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> percent = {0, 4, 6, 10, 11, 7, 8, 12, 15, 19, 20, 22, 23, 25, 30, 35, 36, 38, 40, 41, 42, 45, 46, 48, 50, 51, 57, 58, 59, 60, 62, 63, 64, 65, 66, 70, 71, 72, 75, 78, 80, 85, 82, 84, 90, 95, 91, 92, 93, 100};
    vector<int> amount = {100, 1000, 50, 123, 548, 469, 975, 422, 432, 153, 654, 789, 952, 102, 35, 67, 846, 95, 67, 94, 420, 500, 430, 411, 432, 421, 486, 971, 514, 846, 832, 418, 872, 813, 877, 715, 766, 358, 715, 102, 165, 432, 563, 422, 411, 418, 485, 568, 620, 622};
    int need = 52;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 24443.1875;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> percent = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<int> amount = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    int need = 14;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 243.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> percent = {30, 0};
    vector<int> amount = {20, 5};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> percent = {23, 45, 76, 89, 90, 43};
    vector<int> amount = {234, 546, 999, 8, 76, 1000};
    int need = 34;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 520.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> percent = {41, 85, 72, 38, 80, 69, 65, 68, 96, 22, 49, 67, 51, 61, 63, 87, 66, 24, 80, 83, 71, 60, 64, 52, 90, 60, 49, 31, 23, 99, 94, 11, 25, 24, 51, 15, 13, 39, 67, 97, 19, 76, 12, 33, 99, 18, 92, 35, 74, 0};
    vector<int> amount = {522, 617, 630, 725, 17, 847, 715, 732, 502, 778, 304, 32, 168, 841, 288, 76, 31, 934, 245, 626, 419, 782, 875, 723, 346, 335, 992, 70, 369, 545, 610, 611, 60, 935, 738, 829, 962, 369, 918, 282, 928, 407, 602, 312, 532, 517, 102, 80, 907, 525};
    int need = 72;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 15317.91304347826;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> percent = {0, 7, 8, 35, 36, 99, 87, 55, 54, 95, 0, 7, 8, 35, 36, 99, 87, 55, 54, 95, 0, 7, 8, 35, 36, 99, 87, 55, 54, 95, 0, 7, 8, 35, 36, 99, 87, 55, 54, 95, 0, 7, 8, 35, 36, 99, 87, 55, 54, 95};
    vector<int> amount = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int need = 49;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 48571.42857142857;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> percent = {84, 64, 95, 25, 28, 5, 77, 13, 72, 4, 59, 0, 43, 32, 34, 76, 66, 16, 75, 49, 18, 25, 18, 84, 36, 85, 1, 88, 28, 69, 68, 12, 81, 70, 0, 16, 24, 63, 2, 74, 74, 89, 9, 24, 46, 7, 4, 37, 18, 80};
    vector<int> amount = {458, 261, 694, 481, 249, 248, 588, 431, 705, 592, 61, 752, 540, 668, 563, 55, 794, 941, 829, 614, 132, 53, 608, 137, 128, 626, 693, 353, 632, 189, 291, 885, 758, 126, 815, 548, 171, 859, 57, 501, 361, 121, 608, 587, 701, 938, 169, 531, 865, 103};
    int need = 52;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 18000.666666666668;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> percent = {23, 54, 5, 75, 54, 42, 6, 4, 75, 5, 7, 35, 78, 35, 8, 35, 8, 35, 8, 35, 7, 47, 94, 8, 53, 99, 45, 6, 7, 1, 35, 8, 35, 7, 47, 94, 8, 53, 99, 45};
    vector<int> amount = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    int need = 47;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 634.2564102564103;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> percent = {50, 50, 50};
    vector<int> amount = {395, 971, 964};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2330.0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> percent = {0, 100, 2};
    vector<int> amount = {100, 100, 100};
    int need = 1;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> percent = {2, 78, 92, 5, 18, 0};
    vector<int> amount = {6, 10, 15, 40, 52, 1};
    int need = 20;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 112.5;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> percent = {10, 100, 20, 30, 30, 1};
    vector<int> amount = {100, 10, 200, 1000, 1, 10};
    int need = 55;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 28.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> percent = {100, 80, 7, 80, 43, 63, 47, 42, 69, 84, 13, 51, 83, 54, 44, 90, 100, 59, 63, 68, 10, 9, 6, 34, 93, 86, 83, 65, 54, 17, 32, 84, 53, 75, 40, 56, 7, 13, 42, 57, 39, 10, 70, 54, 3, 86, 14, 71, 5, 16};
    vector<int> amount = {397, 735, 346, 838, 257, 873, 365, 156, 340, 472, 544, 589, 442, 158, 954, 528, 612, 941, 112, 184, 582, 847, 9, 801, 526, 694, 295, 628, 329, 486, 303, 265, 480, 586, 371, 548, 124, 508, 661, 907, 869, 889, 703, 799, 729, 852, 105, 698, 939, 802};
    int need = 96;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1944.6666666666665;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> percent = {50, 100};
    vector<int> amount = {100, 200};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> percent = {67, 35, 26, 37, 78, 21, 20, 44, 33, 55, 93, 30, 93, 45, 35, 33, 99, 31, 17, 36, 21, 5, 20, 13, 38, 62, 83, 40, 93, 13, 31, 34, 0, 53, 77, 19, 78, 70, 78, 15, 52, 32, 11, 9, 57, 97, 95};
    vector<int> amount = {122, 324, 117, 337, 714, 930, 484, 434, 894, 189, 91, 664, 39, 265, 128, 128, 320, 391, 553, 869, 619, 816, 971, 439, 934, 181, 648, 303, 609, 219, 110, 127, 990, 946, 70, 229, 362, 756, 641, 727, 250, 72, 70, 175, 445, 471, 452};
    int need = 48;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 17816.39393939394;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> percent = {0, 10, 30};
    vector<int> amount = {100, 100, 100};
    int need = 30;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> percent = {0, 50, 51, 100};
    vector<int> amount = {10, 10, 100, 10};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 128.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> percent = {10, 20, 100};
    vector<int> amount = {1, 1, 100};
    int need = 11;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1111111111111112;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> percent = {83, 42, 10, 22, 21, 32, 30, 79, 76, 30, 50, 23, 32, 83, 71, 31, 69, 2, 99, 51, 31, 37, 64, 72, 87, 91, 83, 99, 62, 41, 95, 22, 75, 61, 11, 37, 83, 94, 26, 27, 78, 12, 95, 58, 1, 7, 76, 9, 38, 98};
    vector<int> amount = {135, 170, 903, 83, 945, 88, 970, 513, 563, 181, 603, 769, 984, 240, 106, 892, 916, 951, 300, 267, 118, 212, 791, 684, 477, 165, 88, 939, 578, 19, 410, 626, 919, 446, 31, 939, 822, 470, 819, 581, 797, 245, 879, 14, 352, 955, 236, 360, 760, 986};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 25502.326530612245;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> percent = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 5};
    vector<int> amount = {395, 971, 964, 543, 243, 432, 43, 245, 765, 343, 876, 454, 34, 654, 453};
    int need = 13;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1242.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> percent = {40, 50, 60};
    vector<int> amount = {1, 1, 1};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> percent = {0, 60, 40};
    vector<int> amount = {1, 1, 1};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> percent = {60, 40, 40};
    vector<int> amount = {30, 20, 20};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> percent = {0, 40, 100, 50, 50, 50, 50, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 60};
    vector<int> amount = {1000, 20, 100, 1000, 1000, 800, 1000, 100, 100, 100, 100, 100, 100, 100, 100, 50, 50, 1, 4, 1, 35};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 5852.0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> percent = {23, 65, 12, 8, 9, 34, 0, 98, 34, 65, 98, 99, 100, 54, 81, 25, 93, 26, 45, 1, 23, 65, 12, 8, 9, 34, 0, 98, 34, 65, 98, 99, 100, 54, 81, 25, 93, 26, 45, 93, 26, 45, 1, 23, 65, 12, 8, 9, 34};
    vector<int> amount = {230, 605, 102, 80, 90, 340, 30, 908, 34, 650, 98, 99, 1000, 54, 81, 25, 93, 206, 45, 1, 23, 65, 102, 8, 9, 34, 30, 98, 304, 65, 98, 909, 100, 54, 81, 25, 93, 26, 45, 93, 26, 45, 10, 203, 65, 102, 8, 9, 34};
    int need = 86;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 5533.038461538462;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> percent = {48, 67, 1, 8, 89, 62, 83};
    vector<int> amount = {432, 512, 238, 529, 535, 56, 498};
    int need = 69;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2150.7704918032787;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> percent = {10, 20};
    vector<int> amount = {10, 10};
    int need = 20;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> percent = {10, 10, 10, 10, 10, 20, 20, 50, 50, 50, 50, 50};
    vector<int> amount = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int need = 30;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> percent = {0, 1, 2, 100};
    vector<int> amount = {1, 1, 1, 1};
    int need = 90;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1136363636363635;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> percent = {100, 20, 10};
    vector<int> amount = {10, 2, 100};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 23.0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> percent = {1, 51, 49};
    vector<int> amount = {1, 1, 1};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> percent = {10, 20, 30, 40, 50};
    vector<int> amount = {100, 200, 300, 400, 500};
    int need = 51;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> percent = {48, 49, 51};
    vector<int> amount = {1, 1, 1};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> percent = {40, 50, 55, 60, 70};
    vector<int> amount = {10, 30, 30, 40, 50};
    int need = 57;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 134.6153846153846;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> percent = {39, 83, 68, 44, 40, 84, 74, 84, 85, 70, 70, 28, 26, 93, 22, 55, 81, 39, 31, 26, 88, 61, 81, 4, 40, 9, 66, 46, 25, 93, 1, 99, 83, 41, 90, 80, 97, 92, 91, 89, 22, 17, 90, 82, 44, 26, 59, 75, 3, 22};
    vector<int> amount = {816, 879, 944, 819, 808, 907, 864, 996, 820, 908, 897, 907, 990, 969, 953, 906, 913, 939, 968, 874, 937, 927, 909, 957, 945, 842, 810, 909, 941, 886, 985, 972, 868, 949, 807, 891, 955, 987, 896, 871, 814, 848, 947, 992, 919, 958, 847, 916, 828, 937};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 37673.07692307692;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> percent = {10, 40, 30};
    vector<int> amount = {10, 1000, 1000};
    int need = 20;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> percent = {50, 50, 50, 50, 50, 75};
    vector<int> amount = {100, 100, 100, 100, 100, 100};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 500.0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> percent = {40, 50, 90, 60};
    vector<int> amount = {1, 1, 1, 1};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> percent = {30, 80, 60, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 31, 33, 35, 39, 60, 66, 71, 72, 73, 74, 75, 76};
    vector<int> amount = {40, 15, 5, 9, 8, 7, 4, 7, 6, 8, 9, 7, 6, 5, 6, 6, 13, 16, 34, 6, 8, 5, 6, 9, 9};
    int need = 57;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 172.59259259259258;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> percent = {60, 40, 99};
    vector<int> amount = {50, 50, 20};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> percent = {41, 67, 34, 0, 69, 24, 78, 58, 62, 64, 5, 45, 81, 27, 61, 91, 95, 42, 27, 36, 91, 4, 2, 53, 92, 82, 21, 16, 18, 95, 47, 26, 71, 38, 69, 12, 67, 99, 35, 94, 3, 11, 22, 33, 73, 64, 41, 11, 53, 68};
    vector<int> amount = {47, 44, 62, 57, 37, 59, 23, 41, 29, 78, 16, 35, 90, 42, 88, 6, 40, 42, 64, 48, 46, 5, 90, 29, 70, 50, 6, 1, 93, 48, 29, 23, 84, 54, 56, 40, 66, 76, 31, 8, 44, 39, 26, 23, 37, 38, 18, 82, 29, 41};
    int need = 33;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 1462.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> percent = {0, 10, 30};
    vector<int> amount = {100, 100, 100};
    int need = 5;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> percent = {100, 0, 25};
    vector<int> amount = {10, 10, 100};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> percent = {1, 3, 4};
    vector<int> amount = {1, 1, 1};
    int need = 2;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> percent = {0, 100};
    vector<int> amount = {100, 200};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> percent = {0, 0, 10, 100};
    vector<int> amount = {1, 1, 1, 1};
    int need = 0;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> percent = {20, 40, 90};
    vector<int> amount = {100, 100, 100};
    int need = 30;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> percent = {50, 100};
    vector<int> amount = {10, 10};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> percent = {100, 20, 30, 40, 50, 100, 10};
    vector<int> amount = {20, 40, 50, 64, 78, 60, 60};
    int need = 18;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 133.33333333333331;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> percent = {100};
    vector<int> amount = {100};
    int need = 100;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> percent = {0, 75, 100};
    vector<int> amount = {10, 20, 10};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> percent = {45, 23, 53, 75, 23, 45, 75, 34, 23, 56, 90, 12, 43, 54, 66, 45, 23, 34, 56, 67, 10, 29, 39, 48, 57, 65, 75, 99, 12, 11, 12, 23, 56, 34, 45, 39, 84, 75, 76, 97, 94, 83, 75, 57, 56, 48, 48, 48, 47, 49};
    vector<int> amount = {324, 234, 543, 235, 642, 453, 765, 234, 346, 655, 120, 239, 438, 547, 348, 324, 983, 348, 953, 823, 458, 237, 348, 435, 359, 568, 123, 102, 129, 484, 492, 239, 345, 549, 283, 934, 943, 853, 465, 383, 539, 273, 291, 128, 354, 385, 388, 328, 294, 856};
    int need = 70;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 10491.35294117647;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> percent = {0, 20, 30, 50, 70, 80};
    vector<int> amount = {1000, 10, 10, 10, 10, 10};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> percent = {40, 60, 80};
    vector<int> amount = {60, 60, 20};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 120.0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> percent = {49, 100, 51};
    vector<int> amount = {100, 1, 100};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> percent = {40, 60, 0};
    vector<int> amount = {1, 1, 1};
    int need = 50;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> percent = {5, 3, 11, 41, 37, 62, 54, 13, 81, 74, 93, 59, 77, 45, 54, 83, 11, 21, 0};
    vector<int> amount = {520, 413, 714, 52, 417, 863, 954, 321, 1000, 69, 741, 313, 124, 269, 862, 470, 13, 17, 65};
    int need = 23;
    MixingLiquids* pObj = new MixingLiquids();
    clock_t start = clock();
    double result = pObj->howMuch(percent, amount, need);
    clock_t end = clock();
    delete pObj;
    double expected = 3394.258064516129;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=10712&pm=7886
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
 
pair<int,int> makepair(int x,int y) 
{ 
  pair<int,int> p; 
  p.first=x; 
  p.second=y; 
  return p; 
} 
 
class MixingLiquids 
{ 
public: 
double howMuch(vector <int> percent, vector <int> amount, int need) 
{ 
  int i,j,n,fu,zheng,cha; 
  double tot; 
  vector<pair<int,int> > a; 
  n=percent.size(); 
  tot=0; 
  for (i=0;i<n;i++) 
  { 
    a.push_back(makepair(percent[i],amount[i])); 
    tot+=amount[i]; 
  } 
  sort(a.begin(),a.end()); 
  fu=0;zheng=0; 
  for (i=0;i<n;i++) 
    if (percent[i]>need) 
    { 
      zheng+=amount[i]*(percent[i]-need); 
    } 
    else 
    { 
      fu+=amount[i]*(need-percent[i]); 
    } 
  if (zheng==fu) return tot; 
  if (zheng>fu) 
  { 
    cha=zheng-fu; 
    reverse(a.begin(),a.end()); 
    for (i=0;i<a.size();i++) 
    { 
      if (a[i].second*(a[i].first-need)<cha) 
      { 
        tot-=a[i].second; 
        cha-=a[i].second*(a[i].first-need); 
      } 
      else 
      { 
        tot-=(double)cha/(a[i].first-need); 
        break; 
      } 
    } 
  } 
  else 
  { 
    cha=fu-zheng; 
    for (i=0;i<a.size();i++) 
    { 
      if (a[i].second*(need-a[i].first)<cha) 
      { 
        tot-=a[i].second; 
        cha-=a[i].second*(need-a[i].first); 
      } 
      else 
      { 
        tot-=(double)cha/(need-a[i].first); 
        break; 
      } 
    } 
  } 
  return tot; 
} 
};

********************************************************************************
*******************************************************************************/