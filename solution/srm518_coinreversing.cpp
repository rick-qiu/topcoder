/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11473
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

class CoinReversing {
public:
    double expectedHeads(int N, vector<int> a);
};

double CoinReversing::expectedHeads(int N, vector<int> a) {
    double ret;
    return ret;
}


int test0() {
    int N = 3;
    vector<int> a = {2, 2};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6666666666666667;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 10;
    vector<int> a = {10, 10, 10};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 10;
    vector<int> a = {2, 7, 1, 8, 2, 8};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 4.792639999999999;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 1000;
    vector<int> a = {916, 153, 357, 729, 183, 848, 61, 672, 295, 936};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 498.1980774932278;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 50;
    vector<int> a = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 50;
    vector<int> a = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 50;
    vector<int> a = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 49, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 49.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 1000;
    vector<int> a = {1, 999};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.998000000000002;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 999;
    vector<int> a = {333, 333, 333};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 518.0000000000001;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1000;
    vector<int> a = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 1000;
    vector<int> a = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 1000;
    vector<int> a = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 952.3734090020178;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 1000;
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 952.3734090020166;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 1;
    vector<int> a = {1};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 1;
    vector<int> a = {1, 1};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 997;
    vector<int> a = {997, 996, 996, 996, 505, 635, 899, 747, 830, 506, 243, 69, 789, 389, 567, 316, 11, 511, 630, 299, 241, 320, 982, 705, 657, 534, 181, 27, 659, 658, 196, 674, 307, 843, 318, 798, 466, 350, 577, 294, 859, 333, 476, 520, 664, 828, 691, 291, 131, 331};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 498.5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 1000;
    vector<int> a = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 500.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 61;
    vector<int> a = {37, 38, 41, 20, 53, 9, 17, 22, 33, 8, 51, 43, 22, 13, 14, 2, 43};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 30.500006705198714;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 841;
    vector<int> a = {241, 107, 81, 747, 171, 673, 40, 203};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 434.48971336022606;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 780;
    vector<int> a = {438, 697, 191, 671, 171, 362, 52, 3, 286, 445, 723, 332, 753, 510, 101, 200, 400, 78, 104, 327, 270, 561, 734, 544, 301, 493, 268, 705, 279, 236, 569, 347, 117, 325, 735, 386, 472, 180};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 390.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 293;
    vector<int> a = {167, 125, 4, 106, 123, 68, 233, 244, 185, 272, 279, 279, 277, 26, 25, 40, 278, 123, 82, 254, 26, 287, 163, 202, 195, 89, 251};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 146.49999967742565;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 872;
    vector<int> a = {237, 132, 247, 382, 582, 54, 19, 450, 551, 794, 704, 423, 689, 202, 724, 12, 613, 160, 366, 396, 38, 603, 109};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 435.99999994709447;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 700;
    vector<int> a = {372, 188, 103, 579, 546, 434, 566, 495, 513, 270, 168, 149, 409, 625, 604, 446, 614, 111, 474, 494, 257, 499, 420, 606, 161, 351, 538, 6, 217, 635, 414, 73, 506, 274, 215};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 350.0000000000002;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 569;
    vector<int> a = {502, 233, 188, 234, 483, 370, 190, 367, 533, 19, 52, 511, 153, 111, 59, 472, 285, 205, 465, 437, 278, 448, 32, 374, 456, 237, 19, 55, 210};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 284.4999999999546;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 811;
    vector<int> a = {121, 364, 551, 234, 755, 291, 599, 519, 595, 747, 73, 569, 758, 315, 40, 106, 781, 809, 17, 638, 431, 60, 327, 549, 91, 72, 794, 504, 414, 481, 547, 568, 21, 81, 300, 515, 183, 116, 224, 775, 640, 295, 411, 532, 125, 64, 751, 141, 311};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 405.5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 484;
    vector<int> a = {187, 212, 268, 224, 340, 132, 390, 105, 33, 327, 265, 363, 36, 26, 254};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 241.99999811419684;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 215;
    vector<int> a = {193, 144, 160, 59, 75, 163, 74, 199, 24};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 107.29430628220605;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 917;
    vector<int> a = {632, 857, 396, 799, 915, 388, 882, 564, 441, 484, 528, 595, 42, 835, 475, 773, 23, 354, 542, 589, 646, 656, 279, 776, 817, 755, 231, 533, 47, 914};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 458.49999999998283;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 323;
    vector<int> a = {265, 285, 26, 244, 174, 57, 54, 25, 67, 170, 229, 96, 19, 262, 269, 235, 299, 39, 165};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 161.4999883843944;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 549;
    vector<int> a = {104, 182, 508, 301, 106, 277, 396, 70, 14, 514, 408};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 274.50350251014817;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 900;
    vector<int> a = {423, 251, 299, 153, 636, 374, 535, 717, 118, 768, 393, 41, 399, 243, 243, 697, 433, 153, 249, 25, 174, 855, 848, 845, 857, 600, 409, 697, 874, 410, 120, 250, 299, 883, 31, 391, 864, 767, 346, 256, 2, 652, 256, 72, 812};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 450.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 982;
    vector<int> a = {357, 454, 173, 513, 403, 234, 410, 563, 265, 91, 428, 307};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 491.0000119900232;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 891;
    vector<int> a = {806, 225, 882};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 620.324660748903;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 489;
    vector<int> a = {324, 371, 316, 294, 29, 421, 218, 337, 455, 197, 106, 180, 198, 431, 234, 259, 206, 170, 77, 154, 10, 77, 298, 280, 442, 420, 308, 198, 216, 371, 451, 37, 233, 112, 471, 456, 288, 85, 448, 178, 20, 147, 259, 385, 81, 103, 3};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 244.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 285;
    vector<int> a = {261, 255, 151, 2, 25, 73, 233, 89, 268, 243, 62, 116, 197, 230, 267, 207, 280, 101, 165, 152, 151, 94, 267, 62, 195, 25, 248, 203, 155, 1, 85, 54, 65, 92, 137, 244};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 142.50000000000105;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 738;
    vector<int> a = {616, 51, 380, 418, 711, 44, 302, 733, 451, 314, 458, 366, 101, 485, 678, 734, 573, 296, 613, 595, 2, 170, 137, 288, 225, 575};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 369.00000000108105;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 758;
    vector<int> a = {152, 10, 644, 54, 593, 586, 13, 698, 472, 469, 460, 741, 659, 269, 118, 641, 5, 144, 54, 501, 448, 450, 687, 675, 414, 267, 136, 521, 397, 414, 129, 324, 61, 27, 468, 298, 715, 546, 289, 543, 79, 566, 404};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 379.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 651;
    vector<int> a = {539, 211, 214, 228, 552, 490, 558, 570};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 324.0460086323926;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 281;
    vector<int> a = {86, 51, 81, 149, 141, 244, 265, 31, 100, 229, 182, 217, 90, 239, 173, 280, 110, 199, 152, 60, 224, 56, 40, 216, 106, 102, 233, 82, 173, 230, 74, 89, 81, 43, 50};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 140.49999999999986;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 278;
    vector<int> a = {96, 72, 166, 107, 156, 34, 186, 27, 106};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 138.99446131534035;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 515;
    vector<int> a = {439, 375, 270, 493, 296, 255, 162, 194, 263, 187, 379, 409, 137, 424, 304, 330, 87, 76, 513, 56, 16, 173, 168, 181, 157, 515, 233, 261, 169, 170, 357, 256, 409, 188, 4, 509, 493, 9, 88};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 257.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 896;
    vector<int> a = {5, 367, 719, 238, 681, 346, 668, 507, 418, 565, 61, 411, 508, 864, 631, 294, 738, 505, 566, 515, 197, 347, 755, 405, 373, 475, 642, 316};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 447.9999999999999;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 540;
    vector<int> a = {487, 289, 76, 366, 432, 295, 128, 386, 286, 161, 392, 336, 405, 31, 115, 492, 150, 163, 364, 401, 204, 382, 127, 82, 173, 207, 504, 121, 131, 103, 152, 273, 205};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 270.0000000000004;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 737;
    vector<int> a = {154, 308, 43, 67, 602, 71, 553, 722, 75, 14, 377, 570, 550, 673, 604, 506, 572, 534, 470, 580, 325, 445, 60, 261, 172, 292, 304, 132, 108, 62, 172, 183, 336, 272, 33, 83, 526, 457, 32, 32, 137, 490, 505, 332, 710, 134, 107, 326, 42};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 368.5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 760;
    vector<int> a = {284, 489, 39, 56, 29, 238, 230, 716, 31, 244};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 380.83432466596696;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 701;
    vector<int> a = {368, 255, 260, 18, 677, 487, 477};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 350.6529184466516;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 851;
    vector<int> a = {677, 111, 606, 488, 149, 200, 646, 464, 510, 231, 600, 453, 513, 43, 650, 695, 815, 158, 471, 273, 457, 735, 441, 357, 410, 178, 669, 168, 732, 244, 428, 711, 512, 675};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 425.5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 990;
    vector<int> a = {892, 937, 23, 537, 412, 951, 315, 634, 501, 725, 620, 908, 908, 603, 964, 903, 405, 349, 836, 318, 474, 407, 938, 350, 54, 882, 465, 830, 50, 84, 866, 240, 28, 490, 665, 104, 471, 769, 979, 309, 210, 478, 210, 844, 666, 362, 910, 701, 917, 210};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 495.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 921;
    vector<int> a = {82, 146, 779, 529, 273, 859, 160, 181, 390, 799, 19, 867, 455, 385, 905, 621, 459, 714, 76, 148, 382, 556, 715, 74, 762, 553, 836, 588, 300, 768, 743, 103, 35, 612, 182, 897, 137, 238, 565, 691, 244, 901, 779, 882, 296, 156, 681, 898};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 460.5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 972;
    vector<int> a = {72, 322, 775, 829, 803, 668, 179, 903, 202, 897, 822, 965, 635, 635, 192, 773, 129, 812, 693, 163, 530, 425, 665, 682, 938, 878, 628, 717, 964, 287, 247, 443, 179, 775, 892, 848, 58, 580, 750, 339, 529, 947, 268, 291, 323, 643, 232, 912};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 486.0000000000002;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 941;
    vector<int> a = {251, 337, 21, 388, 403, 381, 243, 407, 478, 265, 172, 529, 915, 409, 449, 105, 837, 305, 186, 366, 914, 104, 886, 580, 405, 829, 11, 712, 470, 848, 210, 857, 927, 334, 310, 557, 2, 477, 859, 509, 90, 179, 634, 222, 114, 275, 276, 593, 508, 555};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 470.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 934;
    vector<int> a = {619, 771, 868, 389, 301, 721, 130, 891, 81, 38, 693, 76, 554, 738, 79, 445, 230, 484, 52, 65, 199, 762, 444, 322, 263, 72, 317, 223, 851, 283, 520, 664, 157, 860, 72, 453, 797, 450, 634, 923, 315, 51, 822, 155, 644, 796, 693, 782, 410, 781};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 467.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 965;
    vector<int> a = {126, 2, 398, 807, 42, 947, 356, 465, 73, 138, 623, 264, 8, 773, 72, 721, 566, 287, 122, 381, 562, 30, 332, 6, 642, 952, 961, 19, 174, 742, 672, 706, 954, 769, 115, 592, 726, 792, 745, 956, 746, 783, 393, 78, 867, 748, 488, 910, 347, 155};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 482.5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 930;
    vector<int> a = {4, 80, 65, 249, 85, 808, 803, 835, 809, 405, 480, 810, 917, 343, 148, 115, 63, 733, 330, 508, 752, 49, 871, 514, 679, 28, 442, 237, 518, 106, 872, 822, 193, 206, 326, 331, 610, 603, 571, 599, 350, 496, 740, 197, 833, 571, 133, 644, 834};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 465.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 914;
    vector<int> a = {232, 896, 797, 702, 809, 527, 102, 535, 469, 252, 509, 172, 548, 784, 630, 627, 592, 582, 624, 628, 67, 737, 835, 495, 395, 323, 862, 775, 839, 733, 560, 537, 246, 262, 782, 717, 113, 704, 562, 611, 296, 743, 724, 21, 855, 260, 272, 694};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 457.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 993;
    vector<int> a = {298, 255, 256, 720, 272, 8, 641, 772, 804, 382, 659, 602, 61, 781, 186, 314, 28, 801, 986, 674, 71, 896, 570, 586, 12, 514, 670, 47, 427, 897, 835, 615, 640, 775, 34, 48, 733, 430, 839, 486, 214, 318, 613, 179, 1, 890, 543, 466, 390, 47};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 496.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 968;
    vector<int> a = {186, 181, 212, 13, 565, 70, 451, 206, 659, 859, 11, 871, 284, 358, 41, 196, 151, 408, 845, 314, 943, 39, 103, 187, 26, 910, 515, 273, 687, 500, 791, 860, 332, 334, 694, 467, 884, 963, 937, 527, 625, 816, 583, 650, 444, 307, 26, 495};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 484.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 994;
    vector<int> a = {274, 544, 147, 299, 708, 163, 2, 943, 796, 163, 577, 743, 808, 337, 245, 512, 650, 92, 549, 39, 132, 315, 459, 436, 666, 717, 203, 375, 155, 927, 941, 467, 333, 222, 584, 589, 423, 278, 620, 363, 932, 33, 964, 391, 895, 482, 991};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 497.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 992;
    vector<int> a = {984, 678, 39, 467, 357, 5, 202, 6, 763, 288, 339, 69, 42, 497, 161, 659, 817, 436, 340, 717, 225, 129, 507, 4, 243, 858, 661, 849, 113, 300, 393, 974, 448, 646, 961, 880, 235, 540, 288, 84, 911, 665, 302, 182, 237, 795, 51, 350, 411};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 496.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 908;
    vector<int> a = {217, 758, 26, 652, 258, 4, 438, 369, 378, 551, 688, 181, 843, 274, 418, 437, 150, 341, 435, 606, 108, 213, 202, 150, 677, 293, 562, 199, 582, 695, 678, 799, 830, 494, 755, 556, 598, 97, 219, 529, 623, 102, 562, 580, 824, 454, 841, 27, 127, 116};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 454.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 916;
    vector<int> a = {260, 330, 524, 114, 370, 815, 222, 315, 851, 596, 122, 206, 462, 317, 727, 861, 5, 703, 717, 488, 295, 131, 639, 591, 305, 402, 624, 518, 37, 394, 55, 713, 347, 911, 57, 746, 567, 150, 906, 128, 548, 96, 687, 642, 676, 274, 737};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 458.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 978;
    vector<int> a = {917, 263, 464, 383, 316, 964, 351, 45, 626, 701, 335, 302, 8, 911, 797, 97, 648, 9, 903, 694, 571, 154, 513, 709, 140, 21, 87, 224, 549, 513, 850, 59, 530, 149, 589, 972, 348, 174, 657, 637, 359, 884, 175, 250, 909, 178, 599, 281, 83};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 489.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 997;
    vector<int> a = {809, 138, 860, 6, 105, 636, 990, 881, 66, 606, 892, 18, 825, 213, 283, 250, 371, 674, 116, 94, 547, 392, 172, 302, 45, 824, 517, 217, 600, 143, 311, 43, 174, 491, 348, 476, 579, 415, 72, 593, 452, 681, 450, 35, 607, 505, 851, 354, 878};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 498.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 935;
    vector<int> a = {467, 819, 872, 477, 900, 477, 48, 892, 169, 857, 57, 656, 236, 871, 196, 812, 383, 893, 857, 103, 892, 782, 120, 205, 240, 662, 896, 430, 236, 375, 841, 235, 192, 64, 645, 760, 625, 144, 888, 141, 266, 694, 319, 606, 162, 493, 619};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 467.5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 911;
    vector<int> a = {350, 367, 99, 322, 414, 155, 157, 301, 691, 579, 656, 456, 906, 409, 716, 650, 666, 670, 828, 886, 643, 745, 618, 255, 834, 392, 173, 102, 548, 694, 734, 777, 399, 650, 894, 858, 11, 606, 288, 824, 555, 83, 790, 29, 451, 814, 598};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 455.5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 958;
    vector<int> a = {490, 812, 123, 256, 587, 828, 436, 210, 716, 776, 173, 544, 293, 746, 341, 887, 69, 749, 546, 577, 380, 328, 611, 917, 731, 294, 224, 679, 389, 175, 461, 454, 344, 107, 500, 236, 324, 756, 64, 540, 812, 71, 376, 550, 452, 622, 757};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 479.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 974;
    vector<int> a = {324, 887, 183, 832, 394, 170, 855, 428, 379, 379, 430, 571, 943, 181, 596, 915, 52, 931, 849, 658, 103, 845, 599, 807, 278, 936, 505, 799, 792, 499, 92, 168, 786, 659, 633, 394, 636, 757, 489, 182, 232, 208, 93, 903, 956, 36, 71};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 487.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 909;
    vector<int> a = {762, 402, 493, 797, 381, 342, 237, 166, 27, 87, 819, 611, 539, 883, 432, 112, 67, 489, 608, 142, 400, 144, 902, 195, 5, 483, 829, 230, 411, 504, 634, 744, 101, 655, 269, 666, 511, 730, 646, 624, 198, 231, 853, 22, 48, 889, 413, 345, 118};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 454.5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 920;
    vector<int> a = {573, 91, 823, 632, 196, 289, 650, 548, 645, 776, 731, 209, 909, 496, 137, 828, 699, 577, 235, 244, 822, 345, 312, 789, 233, 19, 687, 341, 581, 771, 889, 324, 312, 548, 158, 139, 699, 333, 609, 733, 373, 395, 793, 118, 882, 249, 541, 133};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 460.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 904;
    vector<int> a = {887, 575, 697, 564, 802, 517, 627, 286, 243, 786, 9, 496, 33, 699, 182, 86, 847, 720, 815, 614, 629, 765, 797, 400, 338, 199, 615, 632, 205, 753, 892, 18, 788, 708, 735, 218, 839, 625, 235, 776, 465, 153, 894, 822, 76, 444, 79};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 452.0000000000002;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 911;
    vector<int> a = {428, 510, 484, 459, 335, 119, 332, 127, 566, 388, 454, 267, 232, 590, 679, 730, 638, 277, 783, 870, 882, 631, 889, 857, 148, 475, 145, 180, 182, 650, 182, 560, 805, 482, 247, 122, 483, 552, 88, 566, 545, 802, 474, 351, 857, 355, 275, 583, 726};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 455.5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 907;
    vector<int> a = {763, 717, 838, 217, 182, 849, 150, 651, 362, 706, 889, 368, 236, 727, 16, 895, 159, 729, 850, 692, 9, 646, 581, 19, 426, 642, 545, 244, 721, 37, 268, 18, 836, 723, 837, 474, 723, 242, 680, 754, 499, 228, 808, 571, 359, 743, 447};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 453.5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 993;
    vector<int> a = {651, 590, 479, 92, 608, 921, 524, 772, 28, 820, 343, 639, 55, 961, 985, 653, 421, 652, 502, 402, 978, 87, 441, 181, 140, 573, 795, 70, 963, 128, 917, 126, 64, 980, 196, 748, 610, 881, 835, 462, 88, 504, 875, 163, 397, 68, 960, 59, 509, 62};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 496.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 957;
    vector<int> a = {14, 442, 815, 952, 549, 537, 268, 333, 650, 504, 417, 756, 277, 620, 602, 623, 750, 607, 810, 275, 144, 458, 477, 234, 854, 409, 253, 32, 822, 421, 850, 197, 911, 280, 399, 221, 620, 705, 530, 399, 250, 167, 457, 377, 459, 40, 606, 98, 323};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 478.5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 964;
    vector<int> a = {933, 385, 391, 97, 335, 382, 210, 711, 360, 490, 54, 118, 62, 855, 77, 331, 447, 95, 494, 323, 319, 531, 876, 92, 126, 283, 892, 1, 809, 97, 45, 689, 712, 28, 893, 622, 409, 854, 610, 203, 274, 252, 586, 94, 76, 940, 615, 708};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 482.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 952;
    vector<int> a = {890, 607, 329, 275, 596, 687, 881, 63, 839, 895, 720, 806, 734, 767, 487, 230, 491, 19, 66, 330, 347, 231, 283, 505, 912, 600, 570, 493, 202, 276, 66, 755, 128, 764, 387, 707, 504, 450, 856, 186, 89, 114, 357, 903, 25, 686, 657};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 476.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 914;
    vector<int> a = {95, 639, 819, 901, 735, 306, 43, 207, 776, 726, 1, 150, 778, 224, 524, 696, 206, 326, 511, 39, 601, 908, 869, 749, 300, 359, 547, 9, 271, 545, 55, 342, 677, 257, 59, 483, 834, 487, 608, 665, 691, 428, 782, 321, 789, 362, 272};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 457.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 6;
    vector<int> a = {2, 3, 1, 5, 3, 4, 2, 1, 1, 3, 5, 6, 4, 1, 1, 4, 5};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 2;
    vector<int> a = {1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 9;
    vector<int> a = {7, 1, 1, 8, 4, 3, 2, 9, 2, 1, 1, 1, 8};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 4.504920621369195;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 6;
    vector<int> a = {1, 5, 1, 6, 2, 5, 1, 5, 5, 3, 4, 6, 1, 3, 5, 4, 2, 1, 3, 4, 4, 2, 5, 5, 6, 5};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 3;
    vector<int> a = {1, 3, 1, 3, 3, 1, 1, 1, 1, 2, 3};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4993141289437584;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 81;
    vector<int> a = {29, 10, 45, 30, 65, 27, 59, 75, 22, 76, 69, 21, 35, 43, 22, 7, 39, 46, 8, 12, 58, 80, 52, 42, 40, 80, 72, 39, 72, 79, 19, 16, 55, 51, 15, 45, 80, 27, 35, 13, 73, 40, 5, 76, 69};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 40.5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 37;
    vector<int> a = {36, 5, 21, 14, 11, 35, 8, 36, 32, 31, 37, 31, 31, 26, 19, 3, 3, 7, 15, 36, 20, 13, 37, 27, 22, 4, 17, 18, 12, 25, 28, 16, 28, 27, 37, 11, 19, 8, 2, 26, 7, 1, 36, 9, 9, 3};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 18.5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 50;
    vector<int> a = {24, 44, 11};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 24.5744;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 52;
    vector<int> a = {15, 41, 52, 5, 40, 50, 10, 18, 23, 21, 14, 12, 22, 12, 10, 32, 46, 21, 48, 37, 19, 29, 2, 46, 4, 5, 49};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 25.99999997789837;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 53;
    vector<int> a = {23, 42, 6, 16, 5};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 25.990906131071103;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 492;
    vector<int> a = {329, 333, 62, 344, 412, 50, 470, 75, 372, 47, 31, 428, 472, 96, 225, 239, 300, 409, 135, 273, 219, 438, 276, 315, 98, 382, 270, 347, 43, 29, 179, 47, 105, 233, 164, 372, 203, 167, 95, 70};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 246.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 813;
    vector<int> a = {591, 710, 520};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 368.0381803080023;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 491;
    vector<int> a = {471, 55, 52, 182, 231, 203, 157, 225, 392, 54};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 245.50511085099893;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 761;
    vector<int> a = {667};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 94.00000000000001;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 126;
    vector<int> a = {60, 9, 101, 81, 66, 112, 29, 111, 65, 97, 104, 27, 112, 120, 54, 72, 51, 73, 6, 114, 61, 121, 111, 40, 63, 103, 6, 49, 92, 90, 125, 30, 93, 5, 117, 55, 105, 1, 8, 26, 55, 104, 50, 94, 11, 1, 70, 118, 107, 43};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 63.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 945;
    vector<int> a = {459, 803, 892, 264};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 476.19945559034903;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 951;
    vector<int> a = {279, 594};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 426.52996845425866;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 955;
    vector<int> a = {437, 673, 61};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 463.0366119349799;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 978;
    vector<int> a = {769, 526};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 510.18609406952964;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 901;
    vector<int> a = {73, 264, 889, 747};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 550.6165099090914;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 1000;
    vector<int> a = {364, 461, 114, 650, 418};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 499.59708270080006;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 962;
    vector<int> a = {102, 219};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 687.4407484407484;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 967;
    vector<int> a = {556};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 411.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 936;
    vector<int> a = {503, 858, 904, 556};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 473.1093335281369;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 1000;
    vector<int> a = {684, 339, 960, 699};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 478.3057523200001;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 1000;
    vector<int> a = {39, 122, 943, 144, 136, 187, 870, 868, 117, 812, 898, 927, 120, 976, 843, 845, 60, 25, 974, 913, 915, 984, 116, 837, 220, 781, 963, 869, 768, 947, 120, 828, 903, 150, 756, 84, 85, 759, 985, 973, 940, 52, 12, 184, 95, 77, 18, 944, 969, 55};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 500.0019183740174;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 999;
    vector<int> a = {958, 885, 64, 939, 198, 132, 132, 137, 867, 42, 128, 74, 837, 2, 86, 979, 928, 925, 975, 170, 956, 129, 186, 182, 996, 86, 855, 62, 145, 832, 84, 90, 28, 866, 75, 910, 136, 994, 152, 846, 130, 62, 200, 57, 891, 130, 885, 856, 57, 115};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 499.50379969679045;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 1000;
    vector<int> a = {36, 13, 56, 62, 963, 932, 987, 951, 945, 100, 981, 39, 63, 89, 79, 7, 94, 977, 954, 57, 978, 938, 24, 933, 57, 25, 36, 986, 86, 17, 953, 10, 968, 29, 909, 19, 97, 42, 982, 82, 40, 946, 945, 977, 919, 45, 23, 1000, 66, 21};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 496.242529051689;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 1000;
    vector<int> a = {916, 153, 357, 729, 183, 848, 61, 672, 295, 936};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 498.1980774932278;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 1000;
    vector<int> a = {500, 100, 1000, 20, 1, 25, 35, 36, 258, 569, 365, 145, 654, 258, 13, 35, 475, 145, 145, 258, 369, 654, 687, 486, 256, 354, 159, 357, 753, 687, 123, 321, 258, 951, 159, 357, 369, 444, 777, 412, 142};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 500.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 10;
    vector<int> a = {10, 10, 9, 8, 6, 1, 1, 10, 10};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6928;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 1000;
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 954.1883456311589;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 10;
    vector<int> a = {2, 7, 1, 8, 2, 8};
    CoinReversing* pObj = new CoinReversing();
    clock_t start = clock();
    double result = pObj->expectedHeads(N, a);
    clock_t end = clock();
    delete pObj;
    double expected = 4.792639999999999;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22899832&rd=14543&pm=11473
********************************************************************************
#line 2 "CoinReversing.cpp"
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
 
using namespace std;
class CoinReversing {
    public:
    double expectedHeads(int N, vector <int> a) {
        double head = N;
        double tail = 0;
        double tmphead;
        int i;
        for(i=0;i<a.size();i++){
            tmphead = head;
            head = head - head * a[i] / N + tail * a[i] /N;
            tail = tail - tail * a[i] / N + tmphead * a[i]/N;
        }
        return head;
    }
 
 
    
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/