/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10006
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

class BaronsAndCoins {
public:
    int getMaximum(vector<int> x, vector<int> y);
};

int BaronsAndCoins::getMaximum(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {15, 5, 30};
    vector<int> y = {4, 5, 6};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {10};
    vector<int> y = {10};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {1, 3, 6, 10, 15, 21};
    vector<int> y = {1, 2, 3, 4, 5, 6};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {5, 10, 15, 20, 25, 30, 35, 40, 45};
    vector<int> y = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
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
    vector<int> x = {1, 3, 6, 10, 22, 35, 50, 66};
    vector<int> y = {1, 2, 3, 1, 2, 3, 4, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {19};
    vector<int> y = {3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {907, 1282};
    vector<int> y = {23, 26};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {16, 4, 362};
    vector<int> y = {3, 1, 13};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {208, 365, 253, 950};
    vector<int> y = {9, 12, 10, 21};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {145, 175, 1515, 18, 550};
    vector<int> y = {10, 11, 33, 3, 16};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {233, 93, 13, 199, 644, 369};
    vector<int> y = {13, 8, 3, 12, 21, 16};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
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
    vector<int> x = {1837, 1348, 1173, 712, 348, 1090, 1};
    vector<int> y = {33, 28, 26, 20, 14, 25, 1};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {340, 165, 3, 3401, 77, 336, 182, 424};
    vector<int> y = {13, 9, 1, 42, 7, 15, 10, 15};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {60, 120, 1592, 91, 1117, 944, 1029, 64, 292};
    vector<int> y = {5, 9, 28, 6, 23, 21, 22, 5, 11};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {171, 264, 68, 517, 112, 487, 183, 444, 143, 4};
    vector<int> y = {10, 13, 6, 16, 8, 18, 10, 15, 9, 1};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {1459, 162, 1167, 26, 1872, 1512, 675, 538, 1598, 723, 133};
    vector<int> y = {28, 9, 25, 3, 32, 29, 19, 17, 30, 20, 8};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {505, 5956, 1395, 899, 4162, 2864, 1905, 6155, 39, 5572, 59, 510};
    vector<int> y = {16, 60, 28, 22, 50, 41, 33, 61, 4, 58, 5, 18};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {301, 528, 8598, 5768, 6886, 2323, 2743, 6405, 6205, 6416, 7774, 3883, 7603};
    vector<int> y = {12, 16, 66, 54, 59, 34, 37, 58, 56, 57, 63, 44, 62};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {240, 3796, 1785, 1091, 7203, 5856, 2856, 1571, 19, 32, 213, 772, 1593, 6289};
    vector<int> y = {11, 44, 30, 23, 61, 55, 38, 28, 3, 4, 10, 20, 28, 57};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {1445, 3071, 1985, 2623, 20, 2897, 2343, 928, 588, 2076, 93, 218, 650, 1660, 2759};
    vector<int> y = {30, 43, 35, 40, 3, 42, 38, 24, 19, 36, 7, 11, 20, 32, 41};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {152, 482, 423, 2150, 666, 1017, 36, 1674, 1481, 317, 1190, 655, 644, 73, 228, 95};
    vector<int> y = {9, 16, 15, 36, 19, 24, 4, 31, 30, 13, 27, 19, 20, 6, 11, 7};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {689, 1907, 1785, 618, 1285, 613, 2024, 5094, 1679, 551, 3060, 1155, 1737, 437, 2531, 7054, 2953};
    vector<int> y = {18, 31, 30, 17, 25, 17, 32, 52, 29, 16, 40, 24, 30, 14, 36, 61, 39};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {1859, 13, 1763, 745, 605, 680, 406, 1252, 979, 1156, 192, 1890, 4367, 2517, 4067, 1065, 677, 5382};
    vector<int> y = {34, 3, 32, 21, 19, 21, 16, 27, 24, 26, 11, 33, 50, 38, 49, 25, 20, 56};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {1755, 3541, 2314, 2314, 676, 159, 1051, 4345, 300, 2083, 302, 3905, 2444, 2827, 898, 1732, 25, 390, 301};
    vector<int> y = {32, 46, 37, 36, 19, 9, 24, 51, 13, 35, 13, 47, 37, 40, 22, 31, 3, 15, 13};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {3956, 791, 407, 873, 470, 4714, 3184, 2225, 128, 957, 163, 2742, 4215, 1836, 788, 1311, 2076, 2644, 2331, 759};
    vector<int> y = {45, 19, 13, 20, 14, 48, 40, 33, 7, 21, 8, 37, 46, 30, 19, 25, 32, 36, 34, 18};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {3463, 2801, 1404, 808, 1208, 626, 3620, 608, 1744, 51, 1063, 2397, 2538, 4020, 455, 741, 1499, 958, 2056, 807, 1294};
    vector<int> y = {46, 43, 30, 23, 28, 20, 47, 20, 34, 5, 26, 39, 41, 51, 17, 22, 31, 25, 37, 23, 29};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {133, 3506, 2474, 1904, 1197, 984, 376, 795, 2377, 725, 537, 1220, 940, 26, 161, 1925, 80, 2000, 370, 959, 895, 676};
    vector<int> y = {9, 45, 38, 34, 27, 24, 15, 22, 38, 21, 18, 27, 24, 4, 10, 34, 7, 36, 15, 24, 23, 20};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {1394, 815, 2435, 668, 428, 424, 28, 669, 535, 1343, 4024, 1798, 367, 521, 468, 2003, 535, 2484, 1251, 2047, 690, 481, 1100};
    vector<int> y = {32, 24, 42, 22, 19, 18, 5, 22, 21, 30, 53, 37, 17, 20, 20, 37, 20, 42, 29, 39, 24, 19, 28};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {68, 1862, 776, 408, 829, 2505, 26, 2242, 705, 254, 537, 4, 404, 95, 2649, 2788, 1454, 638, 517, 759, 1301, 995, 1171, 2501};
    vector<int> y = {5, 30, 19, 13, 19, 35, 3, 33, 18, 10, 15, 1, 13, 6, 36, 37, 27, 17, 15, 18, 25, 21, 23, 35};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {2127, 3954, 130, 3051, 2649, 34, 1143, 1327, 361, 2343, 1337, 594, 248, 94, 303, 2909, 415, 3199, 663, 1057, 1749, 1053, 888, 974, 4290};
    vector<int> y = {34, 47, 8, 41, 38, 4, 25, 27, 14, 36, 27, 18, 11, 7, 12, 40, 15, 42, 19, 24, 31, 24, 22, 23, 49};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {487, 83, 4219, 5364, 5, 323, 5876, 3408, 1996, 1914, 649, 2117, 7581, 1881, 6510, 357, 1886, 192, 6710, 564, 155, 38, 960, 2372, 332, 611};
    vector<int> y = {15, 6, 47, 51, 1, 12, 56, 41, 32, 31, 17, 33, 61, 31, 56, 14, 31, 10, 60, 18, 9, 4, 21, 35, 13, 17};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {716, 277, 2027, 11, 57, 41, 75, 407, 3638, 2772, 4110, 188, 1, 2135, 2032, 637, 1388, 4, 658, 1211, 346, 1800, 2045, 849, 2796, 1317, 1581};
    vector<int> y = {21, 14, 36, 2, 6, 5, 7, 17, 48, 42, 47, 12, 1, 37, 36, 20, 30, 2, 21, 28, 15, 34, 33, 23, 42, 28, 32};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {3064, 2538, 1231, 2019, 9337, 2159, 255, 181, 9598, 941, 5016, 4920, 9338, 564, 634, 3612, 300, 5246, 5852, 4511, 2913, 26, 2396, 3033, 116, 90, 1494, 8089};
    vector<int> y = {40, 36, 25, 32, 70, 33, 12, 10, 71, 22, 51, 49, 70, 17, 18, 43, 13, 52, 55, 48, 38, 4, 35, 39, 8, 7, 28, 65};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {2162, 6036, 6223, 3799, 6406, 2846, 4094, 6708, 4460, 328, 3599, 2149, 29, 7949, 2035, 3589, 6198, 2411, 3793, 2150, 7049, 4640, 7783, 8184, 3296, 6454, 5788, 6065, 7832};
    vector<int> y = {32, 55, 56, 43, 57, 37, 45, 58, 47, 12, 42, 32, 3, 64, 31, 42, 56, 34, 43, 32, 60, 48, 63, 65, 40, 57, 54, 55, 63};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {1224, 3045, 171, 642, 402, 7738, 4419, 756, 1728, 3785, 391, 3468, 869, 846, 5093, 547, 2667, 335, 899, 2688, 85, 306, 3940, 2174, 1949, 1080, 161, 1092, 1971, 1686};
    vector<int> y = {25, 41, 9, 18, 15, 67, 50, 20, 30, 46, 15, 44, 21, 21, 54, 17, 38, 13, 23, 38, 6, 13, 47, 34, 32, 24, 9, 24, 33, 30};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {1587, 93, 2201, 2297, 1203, 2, 8861, 1514, 2638, 1791, 1702, 383, 1310, 1123, 2757, 4530, 3735, 4707, 3396, 3063, 587, 2616, 872, 1629, 5220, 412, 2799, 2306, 951, 3888, 726};
    vector<int> y = {31, 7, 36, 37, 27, 1, 75, 30, 40, 33, 33, 15, 28, 26, 40, 54, 49, 55, 45, 44, 19, 41, 23, 31, 58, 15, 41, 37, 24, 50, 21};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {1866, 721, 2, 302, 1246, 1531, 1150, 210, 138, 1103, 2070, 986, 956, 2741, 1252, 105, 1255, 1751, 2847, 467, 1099, 6243, 4497, 1678, 465, 657, 37, 678, 1799, 2866, 935, 2613};
    vector<int> y = {31, 19, 1, 12, 25, 28, 24, 10, 8, 24, 33, 22, 22, 40, 25, 7, 26, 30, 38, 15, 24, 58, 48, 29, 15, 18, 4, 18, 30, 41, 22, 39};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {297, 1502, 7043, 2861, 3677, 4640, 2213, 1185, 1010, 692, 2444, 3311, 2284, 4939, 740, 8482, 8728, 3007, 4293, 764, 1949, 2575, 1717, 4621, 4791, 254, 5354, 3153, 126, 412, 1200, 840, 114};
    vector<int> y = {13, 29, 63, 40, 46, 52, 35, 26, 24, 20, 37, 43, 36, 53, 20, 71, 72, 41, 50, 21, 33, 38, 31, 52, 53, 12, 56, 42, 8, 15, 26, 22, 8};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {769, 1669, 1901, 1077, 1019, 1004, 2612, 1774, 3944, 34, 3563, 1884, 3403, 454, 1591, 4981, 5895, 704, 1360, 2001, 2241, 1347, 179, 554, 1578, 1816, 941, 3176, 905, 1379, 969, 1008, 3012, 1362};
    vector<int> y = {21, 31, 34, 25, 25, 24, 39, 32, 49, 4, 45, 33, 44, 16, 30, 53, 58, 20, 28, 34, 37, 28, 10, 18, 31, 32, 24, 42, 23, 28, 24, 24, 43, 28};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {2518, 171, 9177, 103, 4325, 1395, 2286, 2040, 3623, 3045, 1351, 6050, 5859, 2715, 432, 165, 7763, 3377, 4328, 1085, 297, 4555, 206, 204, 1919, 1460, 592, 5853, 668, 5769, 2873, 133, 2292, 6431, 479};
    vector<int> y = {34, 8, 69, 6, 45, 25, 32, 32, 41, 37, 26, 53, 52, 35, 14, 8, 63, 40, 45, 22, 11, 47, 9, 9, 31, 27, 17, 54, 17, 52, 36, 7, 32, 55, 14};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {1050, 206, 1394, 2103, 675, 3543, 843, 2269, 1435, 691, 431, 168, 3138, 3438, 174, 973, 3051, 2754, 56, 543, 611, 1622, 486, 4501, 812, 1306, 139, 1292, 283, 3333, 1693, 1789, 2035, 1244, 596, 243};
    vector<int> y = {24, 10, 27, 35, 18, 47, 21, 37, 29, 19, 15, 9, 44, 46, 9, 22, 43, 41, 5, 17, 18, 31, 16, 53, 21, 27, 8, 26, 12, 45, 32, 33, 35, 27, 18, 11};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {3852, 36, 669, 5067, 3236, 2640, 557, 478, 6145, 6750, 4914, 318, 824, 1587, 1059, 1370, 1019, 6970, 2672, 859, 621, 992, 423, 2128, 1498, 2778, 5493, 193, 7422, 716, 95, 370, 904, 1142, 1594, 250, 2163};
    vector<int> y = {47, 6, 19, 54, 43, 39, 18, 16, 60, 62, 53, 13, 21, 30, 25, 27, 24, 63, 39, 22, 19, 23, 15, 35, 28, 40, 56, 11, 65, 20, 8, 15, 22, 26, 30, 11, 35};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {1150, 360, 2083, 744, 1722, 3138, 824, 3033, 210, 936, 202, 1908, 2188, 913, 1924, 1599, 2855, 318, 4084, 238, 1108, 578, 2597, 490, 406, 1838, 856, 705, 3036, 639, 1918, 200, 1419, 250, 501, 5337, 112, 4597};
    vector<int> y = {27, 14, 34, 20, 31, 42, 21, 41, 10, 23, 10, 34, 35, 23, 34, 30, 40, 13, 48, 11, 25, 18, 38, 16, 15, 32, 22, 20, 41, 19, 34, 10, 29, 11, 16, 55, 7, 51};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {340, 1310, 830, 2955, 644, 2881, 478, 1953, 197, 125, 1900, 2319, 3227, 680, 5316, 1350, 2805, 3277, 454, 290, 1255, 3429, 1566, 2478, 2678, 1305, 95, 4366, 354, 1560, 1685, 3934, 3361, 2012, 576, 2321, 3117, 1650, 10};
    vector<int> y = {13, 26, 21, 40, 18, 40, 16, 32, 10, 8, 32, 35, 45, 19, 54, 27, 39, 42, 16, 12, 26, 43, 29, 35, 38, 28, 7, 49, 14, 29, 32, 46, 46, 35, 17, 35, 41, 30, 2};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {1647, 5355, 548, 898, 1232, 3090, 1911, 5572, 2240, 1178, 2655, 1425, 2386, 2651, 620, 4854, 2380, 1627, 6956, 4777, 1973, 1063, 1871, 2379, 4416, 1421, 5165, 3728, 431, 6882, 1144, 2115, 745, 6, 756, 894, 2108, 3616, 3610, 135};
    vector<int> y = {30, 53, 17, 22, 26, 41, 33, 53, 34, 25, 38, 28, 36, 38, 18, 50, 35, 30, 60, 49, 32, 24, 32, 35, 49, 28, 51, 45, 15, 60, 25, 34, 20, 1, 20, 22, 34, 43, 43, 8};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {871, 338, 178, 1079, 493, 617, 1723, 146, 651, 1369, 267, 950, 601, 191, 149, 521, 547, 303, 393, 252, 261, 110, 776, 334, 791, 409, 616, 432, 3466, 387, 935, 170, 1567, 114, 113, 144, 490, 754, 368, 216, 546};
    vector<int> y = {20, 13, 9, 23, 16, 17, 30, 8, 19, 28, 11, 23, 17, 9, 8, 17, 17, 12, 14, 11, 11, 7, 21, 13, 20, 14, 18, 15, 43, 14, 23, 9, 28, 7, 7, 8, 15, 19, 14, 10, 17};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {1662, 5421, 856, 5364, 3494, 220, 1217, 3705, 1952, 3342, 134, 3467, 2771, 642, 453, 1895, 2153, 1900, 501, 3263, 110, 56, 2192, 3726, 2203, 684, 206, 72, 7044, 5946, 791, 313, 4027, 2835, 572, 1728, 5430, 3587, 3425, 4670, 407, 947};
    vector<int> y = {27, 54, 19, 54, 43, 10, 24, 44, 31, 42, 7, 43, 38, 17, 14, 31, 31, 29, 15, 41, 7, 5, 33, 44, 33, 17, 9, 5, 62, 57, 19, 11, 46, 38, 16, 29, 54, 43, 40, 51, 13, 20};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {1217, 1283, 3472, 2138, 88, 1751, 5636, 2167, 2516, 1352, 6370, 3091, 669, 2661, 5065, 1123, 2523, 2657, 606, 1865, 41, 856, 2308, 561, 336, 3706, 590, 2016, 1896, 4211, 1354, 2633, 6600, 541, 657, 1251, 365, 2268, 1420, 1564, 741, 4533, 1308};
    vector<int> y = {24, 25, 42, 33, 6, 29, 55, 33, 36, 26, 58, 40, 18, 37, 52, 23, 35, 37, 17, 30, 4, 20, 34, 16, 12, 44, 17, 32, 31, 47, 26, 37, 59, 16, 18, 25, 13, 34, 26, 28, 19, 49, 25};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {239, 332, 1689, 402, 426, 306, 89, 190, 287, 317, 901, 1587, 463, 350, 1088, 1372, 260, 330, 705, 1185, 1057, 1818, 1178, 637, 519, 935, 217, 443, 243, 354, 172, 911, 115, 18, 757, 263, 493, 977, 752, 557, 1085, 116, 749, 1111};
    vector<int> y = {12, 14, 31, 15, 16, 14, 7, 11, 13, 14, 23, 30, 17, 15, 26, 28, 13, 14, 21, 27, 25, 33, 26, 20, 17, 24, 12, 16, 12, 15, 10, 23, 8, 3, 21, 13, 17, 24, 21, 19, 25, 8, 21, 25};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {982, 476, 200, 1551, 51, 1330, 181, 2479, 1887, 5, 142, 1444, 1996, 4948, 1302, 104, 2946, 1026, 258, 313, 1071, 1445, 2616, 382, 3648, 300, 507, 74, 438, 362, 2272, 3191, 501, 1213, 87, 80, 347, 637, 136, 626, 1158, 565, 1477, 265, 10};
    vector<int> y = {24, 16, 11, 31, 5, 29, 10, 39, 34, 1, 9, 30, 35, 54, 27, 8, 42, 23, 12, 14, 26, 30, 40, 15, 47, 13, 18, 6, 16, 14, 37, 44, 17, 26, 7, 7, 14, 19, 8, 19, 27, 18, 29, 12, 2};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {1518, 724, 541, 1095, 490, 190, 799, 5377, 1315, 2057, 1221, 2492, 600, 2321, 3634, 1740, 1478, 260, 1362, 2453, 1622, 3038, 3258, 1454, 548, 439, 607, 158, 3512, 824, 1125, 664, 510, 7120, 1640, 2845, 3853, 1647, 625, 4018, 4222, 2065, 2929, 2582, 889, 4494};
    vector<int> y = {31, 22, 19, 27, 18, 11, 23, 60, 29, 37, 28, 39, 20, 37, 48, 32, 31, 13, 29, 38, 32, 45, 46, 31, 19, 17, 20, 10, 45, 23, 27, 20, 18, 69, 33, 41, 47, 31, 20, 48, 49, 35, 44, 39, 23, 54};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {514, 729, 936, 1148, 2885, 16, 453, 2338, 707, 533, 2742, 4959, 2326, 1296, 1111, 3530, 876, 2845, 512, 191, 388, 875, 311, 1714, 2605, 3051, 2075, 777, 4004, 3671, 3169, 2335, 1703, 1011, 280, 1627, 1146, 1333, 6177, 1827, 2608, 4229, 966, 1414, 527, 4005, 1825};
    vector<int> y = {15, 18, 22, 23, 39, 2, 15, 35, 19, 16, 38, 52, 33, 24, 24, 41, 21, 39, 15, 9, 13, 21, 12, 30, 36, 38, 32, 20, 46, 44, 41, 34, 28, 23, 11, 29, 24, 26, 57, 31, 35, 45, 22, 27, 16, 44, 31};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {1151, 1515, 622, 2764, 1513, 618, 23, 2639, 1112, 1343, 395, 1090, 393, 2067, 2910, 61, 1670, 443, 149, 620, 690, 2306, 836, 687, 1061, 401, 3001, 1301, 709, 2682, 761, 394, 85, 1244, 1633, 974, 679, 82, 336, 171, 438, 205, 964, 3112, 1773, 497, 638, 1659};
    vector<int> y = {24, 28, 18, 38, 28, 18, 3, 38, 24, 26, 14, 24, 14, 33, 39, 5, 29, 15, 8, 18, 19, 35, 21, 19, 23, 14, 41, 26, 19, 39, 20, 14, 6, 26, 30, 22, 19, 6, 13, 9, 15, 10, 23, 40, 30, 16, 18, 29};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {2107, 3905, 1231, 3935, 761, 2229, 3070, 2364, 3305, 3316, 3156, 2490, 5730, 2760, 836, 832, 363, 3467, 176, 2870, 1522, 369, 172, 4700, 5640, 2074, 1835, 1716, 3237, 1037, 1073, 898, 4052, 1696, 688, 974, 483, 367, 2184, 765, 1312, 1292, 420, 6017, 1616, 2676, 1126, 1414, 4944};
    vector<int> y = {33, 46, 25, 46, 19, 34, 40, 35, 42, 42, 41, 36, 56, 38, 20, 23, 13, 43, 9, 39, 28, 13, 9, 51, 56, 33, 31, 33, 45, 23, 23, 24, 47, 29, 18, 22, 15, 13, 34, 19, 25, 26, 14, 58, 32, 41, 24, 27, 52};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {757, 5146, 2185, 892, 4721, 6640, 255, 1118, 2989, 4029, 1686, 4294, 1178, 3629, 6641, 16, 479, 545, 5225, 2180, 1480, 1363, 1561, 1284, 8013, 69, 3537, 862, 4822, 2838, 966, 3282, 117, 5418, 2366, 4273, 948, 3159, 1362, 2295, 3192, 2874, 2242, 2491, 90, 3791, 6737, 5783, 261, 3178};
    vector<int> y = {20, 52, 34, 23, 52, 60, 12, 26, 40, 47, 29, 48, 25, 45, 60, 3, 16, 17, 55, 34, 27, 27, 29, 28, 66, 6, 43, 21, 50, 39, 24, 41, 8, 55, 36, 48, 22, 42, 27, 34, 42, 40, 35, 37, 7, 46, 59, 56, 12, 41};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {543, 4825, 9805, 898, 2495, 9073, 5341, 3323, 6276, 9098, 4508, 2101, 343, 6516, 1087, 2899, 8246, 2561, 6139, 2272, 9002, 2661, 2630, 4935, 5898, 1176, 510, 9280, 1611, 2380, 2018, 4763, 9434, 1327, 3056, 9413, 2159, 5359, 866, 8691, 6965, 3425, 5522, 74, 3466};
    vector<int> y = {6, 19, 24, 8, 14, 23, 21, 16, 22, 26, 19, 14, 5, 22, 9, 16, 26, 14, 19, 12, 26, 15, 13, 17, 22, 10, 6, 27, 11, 12, 11, 19, 28, 9, 16, 26, 13, 20, 8, 26, 23, 15, 18, 2, 17};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {1465, 8373, 5895, 6433, 5114, 7431, 9842, 3794, 6674, 7091, 4309, 5643, 9717, 2995, 5551, 7150, 2884, 7175, 33, 922, 7101, 1208, 3244, 8508, 4848, 3760, 4753, 3223, 7087, 7801, 6470, 7440, 8116, 1179, 1491, 6735, 8480, 4379, 7616, 5059, 2492, 5351, 9194, 4282, 5897};
    vector<int> y = {10, 25, 21, 22, 20, 24, 27, 17, 22, 23, 18, 19, 26, 15, 20, 23, 15, 24, 1, 8, 23, 9, 16, 26, 19, 17, 19, 16, 23, 24, 22, 23, 25, 9, 11, 23, 25, 18, 24, 20, 14, 20, 26, 18, 21};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {7391, 1608, 9114, 396, 571, 4528, 1624, 5870, 6262, 8067, 7950, 4316, 7133, 2697, 7478, 178, 4327, 6694, 1769, 5958, 3670, 6820, 1266, 5446, 9833, 114, 5690, 8518, 3428, 7179, 3027, 7359, 3693, 972, 8341, 6326, 9685, 994, 3757, 7751, 16, 8749, 8740, 602, 3887};
    vector<int> y = {22, 11, 28, 5, 6, 20, 11, 23, 21, 24, 27, 17, 22, 15, 26, 4, 18, 21, 10, 20, 18, 22, 10, 19, 27, 3, 20, 28, 15, 22, 15, 22, 18, 9, 25, 24, 27, 8, 15, 24, 1, 28, 25, 7, 17};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
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
    vector<int> x = {8677, 5684, 2507, 956, 3790, 9489, 8698, 3833, 3361, 9704, 2205, 5017, 740, 22, 9271, 8108, 9273, 2130, 1472, 8649, 8054, 1171, 5243, 5691, 8888, 8956, 1194, 3510, 7122, 215, 8764, 5071, 9284, 2614, 8096, 2019, 5249, 1772, 9247, 8139, 9221, 909, 2127, 4476, 6894};
    vector<int> y = {30, 23, 14, 11, 19, 29, 29, 19, 18, 29, 13, 23, 10, 2, 31, 27, 31, 14, 13, 30, 29, 10, 22, 23, 27, 28, 12, 16, 26, 5, 27, 19, 31, 14, 29, 15, 22, 12, 31, 27, 27, 9, 15, 19, 22};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {108, 9757, 8103, 816, 8140, 5891, 6370, 7781, 5634, 6648, 8869, 8445, 3293, 8254, 7247, 2823, 9132, 5589, 4069, 4966, 3403, 1663, 4501, 6563, 8054, 2933, 6901, 4948, 2164, 1860, 3628, 6643, 8867, 7720, 1171, 7213, 459, 8332, 5634, 3674, 1301, 6352, 9096, 210, 1523};
    vector<int> y = {2, 28, 26, 8, 25, 21, 23, 25, 22, 23, 27, 26, 16, 26, 24, 15, 27, 22, 17, 19, 15, 10, 19, 24, 25, 15, 22, 20, 11, 12, 17, 23, 27, 25, 9, 24, 5, 26, 21, 16, 10, 21, 27, 3, 11};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {6810, 5383, 8512, 7762, 5091, 6556, 8722, 6941, 9066, 5806, 8002, 9260, 7767, 4550, 8254, 9804, 111, 4320, 8939, 8479, 7677, 9754, 3284, 7459, 273, 3691, 7112, 7166, 8929, 7031, 7724, 7560, 6278, 6058, 1159, 8086, 9214, 299, 6760, 3475, 7822, 7750, 2411, 9576, 5784, 7701};
    vector<int> y = {24, 21, 25, 24, 20, 22, 26, 23, 27, 21, 24, 28, 24, 19, 26, 27, 3, 18, 26, 25, 25, 28, 16, 24, 5, 17, 23, 23, 27, 23, 24, 24, 23, 22, 9, 25, 26, 4, 23, 16, 25, 25, 14, 28, 21, 24};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {3191, 9143, 8981, 9694, 15, 7076, 7708, 8182, 4225, 6492, 3910, 8608, 5298, 5569, 2432, 7674, 8470, 5151, 7620, 3880, 1700, 5518, 5938, 5531, 6265, 8794, 8656, 60, 1826, 3485, 7826, 4918, 6006, 4399, 6583, 9554, 4163, 9328, 6074, 3478, 9805, 7671, 3240, 7676, 367, 9024};
    vector<int> y = {17, 28, 28, 29, 1, 26, 26, 28, 20, 24, 19, 27, 22, 22, 15, 26, 27, 22, 26, 19, 12, 23, 23, 23, 24, 28, 28, 2, 13, 18, 26, 21, 23, 20, 24, 29, 20, 28, 23, 18, 29, 26, 17, 26, 5, 29};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {1541, 913, 7860, 7491, 7804, 9561, 7147, 2097, 9628, 6031, 8775, 1811, 5943, 3060, 3431, 1902, 9912, 9451, 5402, 3726, 9085, 8050, 1230, 4966, 2641, 6646, 3839, 4795, 9712, 8351, 8829, 2416, 4239, 8131, 9082, 3212, 9580, 6402, 9006, 9520, 9997, 4982, 7795, 9704, 9189, 1779};
    vector<int> y = {9, 8, 24, 23, 23, 25, 22, 12, 26, 19, 22, 11, 18, 13, 14, 10, 26, 26, 17, 14, 25, 21, 8, 19, 12, 22, 16, 16, 27, 24, 24, 13, 17, 24, 24, 15, 27, 21, 24, 23, 27, 19, 22, 28, 23, 11};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
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
    vector<int> x = {8264, 7478, 8451, 6741, 3934, 6964, 5474, 1374, 8515, 7830, 8987, 6006, 8811, 8, 1829, 4765, 3177, 7142, 2001, 5680, 695, 4021, 4881, 9785, 5731, 7169, 6483, 1406, 2232, 6079, 4985, 3101, 7932, 714, 252, 7303, 20, 6188, 8486, 9121, 7952, 6623, 4043, 4233, 6556, 9339};
    vector<int> y = {25, 25, 25, 26, 20, 23, 23, 10, 26, 27, 29, 24, 30, 1, 13, 22, 16, 23, 12, 24, 7, 20, 19, 30, 22, 23, 26, 11, 14, 22, 20, 15, 25, 8, 4, 26, 2, 25, 25, 26, 27, 25, 18, 19, 25, 29};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {4006, 9987, 112, 3914, 7865, 6758, 8299, 553, 9254, 6707, 8468, 5159, 9971, 7279, 7276, 8075, 283, 3753, 3887, 3153, 136, 6541, 7983, 5978, 4905, 6777, 4994, 1167, 7886, 6890, 6099, 3175, 7644, 8581, 7314, 7508, 5499, 2144, 5206, 414, 3158, 9270, 8662, 46, 1444, 7778};
    vector<int> y = {19, 30, 3, 19, 25, 25, 27, 5, 27, 23, 26, 21, 28, 25, 25, 27, 5, 18, 19, 17, 2, 24, 27, 23, 21, 24, 20, 10, 26, 25, 22, 17, 26, 28, 26, 26, 21, 14, 22, 4, 16, 29, 28, 2, 11, 26};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {4336, 6988, 3006, 893, 5748, 3265, 5051, 373, 7242, 9681, 7628, 2029, 6535, 8506, 4777, 5577, 8647, 4717, 8032, 554, 3704, 7141, 59, 6372, 3556, 9419, 5329, 9004, 7613, 130, 1986, 9663, 244, 1336, 1322, 7924, 4650, 6496, 8653, 8941, 3670, 263, 2648, 1371, 6826, 5385, 5970};
    vector<int> y = {17, 21, 15, 8, 21, 14, 18, 5, 23, 27, 22, 11, 20, 24, 19, 20, 26, 17, 25, 6, 15, 21, 2, 20, 15, 28, 20, 24, 22, 3, 12, 25, 4, 10, 9, 22, 17, 20, 25, 26, 16, 4, 14, 10, 23, 19, 20};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {3116, 3543, 2406, 6171, 8827, 2154, 5351, 4489, 217, 6888, 7419, 6511, 2843, 6281, 8398, 7909, 6029, 4332, 9509, 6840, 9969, 6892, 6343, 6548, 5782, 2925, 6632, 4793, 2948, 5943, 8262, 8930, 9302, 8011, 6175, 6350, 6944, 9211, 7309, 4383, 462, 3960, 3398, 3313, 9437, 8954, 5610};
    vector<int> y = {15, 16, 13, 21, 25, 12, 19, 18, 3, 23, 23, 22, 14, 21, 25, 24, 21, 18, 26, 22, 27, 22, 21, 22, 20, 14, 22, 19, 14, 21, 24, 25, 25, 24, 21, 22, 22, 26, 23, 18, 5, 17, 15, 15, 26, 25, 20};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {5964, 2217, 1734, 5737, 2702, 7409, 2937, 5842, 8518, 1223, 2951, 5649, 3768, 3274, 7385, 1634, 4411, 4648, 3835, 4597, 2833, 2916, 9423, 3362, 4622, 2907, 1672, 6192, 9460, 3470, 4328, 4756, 1612, 707, 542, 770, 6587, 6575, 8035, 9269, 6196, 3675, 1981, 9119, 2570, 6520, 2677};
    vector<int> y = {21, 13, 11, 21, 13, 24, 15, 21, 26, 9, 15, 21, 17, 16, 24, 10, 17, 19, 17, 19, 14, 15, 27, 16, 19, 15, 11, 22, 28, 15, 18, 19, 10, 7, 6, 7, 23, 22, 25, 26, 22, 17, 11, 27, 14, 22, 13};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {9179, 7635, 6230, 9996, 9742, 7253, 2017, 9013, 1290, 6512, 9650, 4939, 8496, 652, 4875, 4103, 4933, 8364, 1413, 8275, 9324, 85, 1666, 5341, 6952, 3048, 6179, 8472, 8588, 6304, 6311, 8132, 3996, 9383, 1048, 207, 9796, 5772, 472, 7550, 9501, 203, 3325, 6190, 7980, 7839, 5065};
    vector<int> y = {32, 28, 24, 27, 30, 23, 14, 29, 12, 22, 29, 21, 28, 9, 19, 20, 23, 27, 12, 27, 26, 3, 13, 24, 28, 17, 24, 28, 25, 24, 24, 27, 20, 28, 11, 5, 33, 23, 7, 26, 29, 5, 19, 24, 27, 27, 24};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
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
    vector<int> x = {3760, 6930, 8216, 563, 9598, 6978, 5869, 2197, 6262, 6926, 733, 9748, 6138, 532, 1099, 4755, 3830, 1917, 6236, 833, 3771, 6137, 6259, 9757, 8846, 9801, 5261, 4563, 8888, 2966, 3378, 4195, 9485, 7609, 9820, 5370, 394, 7489, 1172, 6581, 7575, 4369, 8371, 2748, 3349, 7084, 8788};
    vector<int> y = {17, 22, 26, 5, 28, 24, 20, 13, 21, 22, 6, 26, 21, 6, 8, 20, 17, 11, 21, 8, 17, 21, 21, 26, 27, 26, 21, 19, 27, 15, 16, 18, 28, 25, 26, 19, 5, 25, 10, 23, 23, 17, 24, 14, 17, 22, 27};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {1337, 450, 8149, 330, 467, 8470, 8580, 8639, 9933, 8776, 9305, 5525, 1062, 3531, 2953, 5845, 2527, 3652, 4741, 2111, 2475, 7172, 6250, 7600, 64, 2598, 1839, 5167, 2220, 2177, 20, 3727, 1788, 9169, 6632, 1219, 9877, 9411, 6865, 1892, 9187, 4175, 6392, 2470, 5171, 7785, 9145, 5843};
    vector<int> y = {10, 6, 26, 4, 6, 26, 27, 27, 28, 26, 28, 21, 9, 17, 15, 22, 14, 17, 20, 13, 14, 24, 23, 24, 2, 14, 12, 21, 13, 13, 1, 17, 12, 28, 23, 10, 29, 27, 24, 12, 28, 18, 22, 14, 20, 25, 28, 21};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {9246, 9, 5046, 9208, 2913, 2266, 1408, 9975, 6860, 656, 812, 1028, 838, 79, 7866, 1286, 1416, 342, 5574, 9342, 6707, 8607, 1548, 5490, 2448, 2755, 484, 185, 9910, 7844, 3514, 8138, 336, 9480, 1540, 7257, 4807, 2569, 971, 26, 237, 490, 3647, 5692, 7793, 2106, 4361, 1555};
    vector<int> y = {26, 1, 20, 27, 14, 15, 10, 27, 22, 7, 8, 9, 8, 2, 23, 10, 10, 5, 20, 25, 22, 25, 10, 21, 12, 15, 6, 4, 27, 23, 17, 26, 5, 26, 11, 23, 20, 13, 10, 1, 4, 6, 17, 20, 25, 13, 19, 10};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {2388, 2280, 1445, 3114, 269, 5591, 8349, 4557, 1023, 4614, 1526, 5979, 5526, 9814, 4144, 3282, 7593, 6685, 9349, 6690, 2872, 7374, 9857, 6790, 4643, 1736, 587, 314, 2717, 1911, 9340, 8631, 4695, 639, 407, 9727, 5566, 9078, 9657, 6942, 8130, 6929, 2815, 8689, 8016, 2481, 9538, 1191};
    vector<int> y = {13, 14, 10, 16, 4, 20, 23, 19, 8, 17, 10, 22, 20, 25, 16, 14, 22, 22, 25, 22, 13, 23, 28, 22, 17, 11, 6, 4, 14, 13, 25, 25, 20, 6, 5, 27, 20, 26, 25, 24, 23, 21, 13, 25, 25, 13, 27, 9};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {7578, 7706, 7346, 7386, 9560, 8775, 2145, 9114, 8580, 7687, 6500, 417, 2781, 8605, 563, 8256, 4612, 2718, 7335, 2840, 5538, 8971, 5454, 8874, 7678, 4796, 6950, 7258, 7874, 6235, 8888, 6673, 4838, 7582, 8994, 1439, 2066, 8984, 9751, 8871, 9217, 3405, 4552, 8133, 4996, 393, 5870, 1456};
    vector<int> y = {24, 25, 25, 24, 28, 27, 14, 28, 27, 25, 23, 7, 16, 27, 8, 26, 19, 14, 25, 14, 22, 27, 21, 26, 25, 19, 24, 24, 25, 21, 27, 23, 20, 25, 27, 10, 12, 29, 28, 27, 27, 16, 20, 25, 21, 5, 22, 12};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {2260, 9730, 190, 5923, 4637, 359, 7776, 2675, 9018, 1276, 2816, 8358, 8491, 4437, 760, 2792, 765, 7675, 8333, 3423, 1571, 466, 9756, 7225, 1273, 6695, 9843, 5573, 5095, 885, 602, 6611, 1724, 9096, 7797, 2650, 5206, 35, 5991, 2217, 7717, 223, 7468, 4225, 76, 1911, 9697, 9812};
    vector<int> y = {13, 29, 5, 22, 19, 6, 24, 14, 28, 13, 16, 27, 25, 18, 10, 16, 8, 24, 25, 16, 11, 7, 27, 23, 10, 24, 27, 22, 21, 10, 9, 22, 13, 26, 24, 15, 20, 2, 21, 14, 25, 5, 25, 18, 3, 12, 29, 27};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {2197, 7223, 605, 7218, 2917, 8353, 2179, 796, 4645, 6058, 3805, 9089, 797, 4574, 5643, 7082, 2490, 7103, 8925, 6649, 9699, 7652, 1897, 5427, 4291, 1827, 613, 6670, 2205, 1027, 9744, 8428, 3377, 6320, 7617, 5454, 7243, 8346, 2561, 126, 1378, 9730, 9024, 8944, 6751, 8284, 7816, 6611, 4106};
    vector<int> y = {14, 25, 7, 25, 12, 27, 11, 8, 20, 20, 16, 25, 8, 17, 22, 21, 11, 23, 24, 21, 26, 20, 13, 18, 18, 10, 7, 24, 11, 9, 26, 23, 14, 18, 20, 22, 25, 27, 12, 3, 8, 29, 24, 28, 22, 27, 22, 21, 16};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {5158, 5006, 2164, 4147, 9646, 181, 955, 5057, 3662, 975, 7869, 5197, 8636, 3028, 6774, 4561, 2160, 9199, 7060, 4799, 5597, 8558, 4123, 8426, 7327, 8082, 698, 3491, 1692, 1470, 411, 5880, 941, 9041, 6244, 1810, 4625, 1531, 299, 4109, 1264, 4686, 5699, 525, 1512, 3064, 2968, 9438, 204};
    vector<int> y = {19, 17, 12, 16, 25, 3, 7, 19, 15, 7, 24, 19, 25, 14, 21, 18, 11, 25, 21, 19, 20, 24, 16, 24, 22, 24, 6, 14, 10, 9, 5, 19, 7, 25, 21, 10, 18, 9, 4, 17, 9, 18, 20, 5, 9, 13, 13, 24, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {465, 1647, 1045, 7749, 8572, 1889, 3700, 3157, 8502, 5492, 240, 5001, 4800, 4859, 8140, 2243, 3737, 3533, 2878, 3324, 7474, 4866, 1444, 1964, 4056, 137, 2090, 4251, 3236, 5260, 6373, 6834, 7096, 1656, 8168, 1947, 491, 5319, 4823, 1220, 989, 5956, 4297, 613, 3205, 2370, 5285, 8078, 3142};
    vector<int> y = {5, 11, 9, 21, 27, 10, 15, 15, 23, 22, 4, 21, 19, 19, 22, 14, 15, 17, 13, 14, 23, 16, 9, 11, 17, 3, 12, 19, 13, 18, 20, 22, 23, 12, 27, 13, 6, 20, 20, 9, 8, 19, 15, 6, 14, 13, 21, 21, 15};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {2307, 1003, 5996, 3927, 5844, 9138, 6683, 977, 6074, 443, 1125, 5458, 7571, 2667, 7915, 2728, 863, 4556, 4850, 4729, 6158, 9347, 7737, 3081, 7181, 7937, 5859, 6716, 599, 570, 1312, 2624, 6995, 7729, 121, 412, 8454, 2034, 5555, 4807, 1948, 7728, 7372, 4998, 3862, 6244, 9277, 6796, 4468};
    vector<int> y = {15, 10, 20, 16, 22, 25, 21, 10, 22, 7, 10, 21, 23, 13, 25, 13, 7, 19, 20, 21, 22, 27, 23, 14, 24, 23, 22, 23, 8, 8, 11, 16, 22, 23, 2, 7, 26, 11, 21, 20, 11, 23, 24, 20, 18, 22, 25, 23, 17};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {4854, 7978, 3946, 6051, 703, 5094, 5280, 5257, 9752, 213, 2057, 2681, 5349, 5236, 7812, 2485, 9786, 5732, 8244, 3563, 4431, 7112, 2119, 9542, 2815, 1533, 6748, 9357, 9615, 3598, 726, 9830, 4801, 7513, 1700, 3461, 3589, 39, 1830, 8334, 6395, 7468, 923, 4071, 3132, 7667, 8582, 4829, 7162};
    vector<int> y = {20, 25, 18, 21, 6, 18, 20, 21, 27, 3, 11, 14, 21, 19, 24, 13, 25, 22, 26, 17, 18, 23, 12, 28, 14, 10, 22, 28, 29, 15, 6, 27, 20, 23, 10, 16, 16, 1, 11, 25, 21, 25, 7, 16, 14, 22, 27, 20, 25};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {3706, 1732, 9371, 4668, 7075, 7898, 3397, 899, 4843, 5746, 8028, 6252, 9625, 5659, 6772, 4176, 1207, 8104, 8962, 8454, 9174, 1452, 2351, 6081, 2349, 8891, 2275, 7514, 3884, 6729, 6214, 5445, 2707, 5774, 8555, 5682, 9860, 5670, 9627, 5666, 9459, 9336, 5349, 7362, 7620, 6923, 9392, 6643, 6993, 9923};
    vector<int> y = {15, 10, 26, 17, 22, 24, 15, 7, 18, 20, 24, 21, 26, 20, 22, 16, 8, 24, 23, 22, 26, 9, 12, 21, 12, 25, 12, 23, 16, 22, 21, 19, 13, 20, 25, 20, 28, 18, 27, 19, 26, 26, 19, 23, 23, 20, 26, 22, 23, 27};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {6151, 9301, 2573, 4313, 2751, 6665, 4225, 5547, 308, 116, 5131, 2947, 5592, 637, 8947, 1451, 3003, 2604, 6732, 1222, 3817, 7974, 5108, 693, 1813, 478, 2193, 3989, 6156, 3369, 6370, 878, 8896, 206, 1499, 7352, 9663, 2364, 7640, 5225, 528, 6734, 9781, 9580, 4965, 768, 9021, 7374, 4971, 5816};
    vector<int> y = {21, 26, 13, 18, 14, 22, 17, 20, 6, 4, 19, 14, 20, 7, 28, 11, 15, 12, 22, 11, 16, 24, 19, 6, 12, 6, 14, 19, 21, 15, 21, 7, 25, 3, 11, 23, 25, 13, 22, 19, 7, 22, 26, 27, 19, 9, 25, 23, 19, 20};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {8251, 5065, 8715, 8986, 9438, 7417, 5548, 9576, 7976, 4469, 8799, 7572, 3711, 7802, 9799, 6096, 3094, 3570, 7079, 7305, 8105, 1648, 6723, 4260, 7834, 9223, 8917, 8160, 117, 8863, 8899, 6882, 6705, 4062, 3121, 5046, 5621, 2650, 5551, 8064, 1428, 8333, 6826, 9519, 9544, 3817, 9610, 8544, 9017, 6716};
    vector<int> y = {27, 20, 28, 28, 29, 26, 21, 29, 27, 19, 28, 26, 18, 26, 28, 22, 16, 17, 25, 24, 25, 12, 24, 19, 26, 27, 28, 27, 3, 28, 28, 25, 23, 18, 16, 21, 21, 15, 22, 26, 11, 27, 24, 29, 29, 18, 29, 28, 28, 24};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {1060, 5120, 4729, 5219, 2026, 6510, 1194, 3294, 6502, 1415, 9768, 392, 1930, 9760, 6216, 937, 4121, 8978, 8057, 1533, 731, 7101, 5343, 8139, 5848, 3248, 5985, 3566, 7412, 1981, 7274, 8358, 886, 1946, 5082, 5284, 5210, 4804, 2339, 3844, 1110, 3000, 4905, 8262, 4947, 2145, 5291, 5567, 1395, 8407};
    vector<int> y = {9, 20, 19, 20, 12, 22, 10, 16, 22, 11, 27, 5, 12, 27, 22, 8, 19, 27, 25, 11, 7, 23, 20, 25, 21, 17, 22, 16, 24, 12, 25, 25, 8, 13, 20, 20, 20, 19, 13, 17, 9, 15, 20, 25, 20, 13, 20, 21, 11, 25};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {4919, 3047, 4068, 3909, 4768, 9750, 519, 9106, 8550, 9411, 9485, 7450, 3151, 575, 1936, 9056, 5502, 8728, 5096, 3361, 2424, 7335, 9048, 4257, 405, 3957, 4952, 1481, 2583, 3569, 5812, 8909, 5159, 6731, 4943, 4043, 3257, 3449, 8457, 9781, 4281, 3109, 4721, 1213, 5431, 779, 1187, 233, 6225, 9437};
    vector<int> y = {19, 15, 19, 17, 19, 26, 7, 26, 25, 26, 27, 25, 17, 6, 13, 25, 20, 27, 21, 17, 15, 23, 25, 19, 5, 19, 21, 12, 15, 18, 21, 26, 19, 24, 19, 19, 17, 16, 27, 26, 18, 17, 20, 11, 20, 8, 9, 4, 23, 26};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {335, 850, 14, 93, 4128, 200, 9274, 1642, 1940, 224, 1435, 21, 4829, 5970, 1063, 788, 1863, 6807, 20, 1368, 1502, 6672, 336, 796, 3477, 2975};
    vector<int> y = {21, 35, 4, 11, 75, 17, 112, 48, 52, 18, 45, 5, 81, 88, 39, 32, 51, 96, 5, 42, 46, 93, 22, 33, 69, 64};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1830, 8490, 7364, 7512, 8799, 6, 130, 550, 5197, 51, 2769, 39, 962, 3730, 1977, 390, 717, 12, 8120, 5338, 1347, 1166, 7158, 810, 5587, 3227, 8034, 200, 9595, 172, 1816, 1225, 219, 2129, 1489, 4616, 339};
    vector<int> y = {50, 109, 100, 101, 111, 2, 12, 27, 85, 8, 61, 7, 36, 71, 52, 22, 31, 3, 105, 85, 42, 39, 100, 33, 87, 66, 106, 16, 116, 14, 49, 40, 16, 54, 45, 80, 21};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {31, 9372, 8191, 414, 197, 8373, 6257, 344, 551, 4503, 2420, 615, 2396, 3675, 5123, 3807, 9723, 8537, 3373, 8355, 8, 5926, 4623, 906, 86};
    vector<int> y = {6, 107, 100, 22, 15, 104, 90, 20, 26, 74, 56, 27, 54, 69, 79, 68, 109, 105, 64, 101, 3, 85, 75, 33, 10};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {1545, 6385, 2641, 1752, 9034, 5694, 2, 756, 5829, 3851, 7573, 274, 17, 134, 5560, 9904, 247, 5166};
    vector<int> y = {46, 92, 60, 49, 109, 87, 1, 32, 88, 72, 100, 19, 4, 13, 86, 114, 18, 83};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {714, 1652, 3173, 3887, 36, 912, 75, 18, 4473, 4907, 7153, 24, 8044, 61, 1801, 626, 5919, 4590, 3486, 3804, 737, 4829, 397, 84, 1951, 6519, 11, 26, 4553, 7686};
    vector<int> y = {31, 45, 63, 70, 6, 35, 9, 4, 77, 79, 96, 5, 102, 8, 47, 29, 87, 78, 68, 71, 30, 80, 23, 10, 51, 93, 3, 5, 76, 101};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {1297, 4089, 2408, 4201, 1176, 840, 2960, 8293, 176, 3764, 553};
    vector<int> y = {39, 71, 54, 72, 37, 31, 60, 102, 14, 68, 25};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {3274, 143, 1521, 5960, 246, 5311, 53, 9922, 998, 2414, 20, 2690, 4821, 4240};
    vector<int> y = {62, 13, 42, 85, 17, 80, 8, 111, 34, 53, 5, 56, 76, 71};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {2408, 194, 1124, 1181, 79, 2672, 299, 65, 671, 586, 469, 3736, 1068, 1014, 811, 3231, 52, 3950, 432, 2945, 2157, 1361, 3428, 40, 1997, 129, 1920, 9, 2495, 1239, 2076, 4399, 4172, 1845, 30, 2853, 3632, 507, 397, 3842, 22, 628, 4631, 218, 3529};
    vector<int> y = {57, 16, 39, 40, 10, 60, 20, 9, 30, 28, 25, 71, 38, 37, 33, 66, 8, 73, 24, 63, 54, 43, 68, 7, 52, 13, 51, 3, 58, 41, 53, 77, 75, 50, 6, 62, 70, 26, 23, 72, 5, 29, 79, 17, 69};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {359, 638, 119, 4704, 1035, 6, 3580, 1946, 1091, 5200, 1872, 1728, 3794, 3171, 511, 30, 4239, 3072, 1207, 20, 2786, 12, 2880, 3373, 101, 325, 432, 4825, 5460, 395, 1658, 594, 1589, 235, 3686, 3903, 5726, 161, 2602, 84, 3476, 4353, 4948, 1522, 2177, 927};
    vector<int> y = {20, 27, 11, 77, 35, 2, 67, 49, 36, 81, 48, 46, 69, 63, 24, 5, 73, 62, 38, 4, 59, 3, 60, 65, 10, 19, 22, 78, 83, 21, 45, 26, 44, 16, 68, 70, 85, 13, 57, 9, 66, 74, 79, 43, 52, 33};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {43, 1058, 4611, 3819, 545, 2, 278, 32, 5227, 2474, 671, 2142, 180, 1417, 1171, 3303, 335, 55, 586, 4377, 15, 4262, 1230, 3205, 100, 2389, 1291, 252, 118, 9, 6029, 3712, 1004, 4038, 5100, 1620, 6309, 137, 5487, 23, 2223, 5755, 715, 853, 1690, 227, 2649};
    vector<int> y = {7, 38, 79, 72, 27, 1, 19, 6, 84, 58, 30, 54, 15, 44, 40, 67, 21, 8, 28, 77, 4, 76, 41, 66, 11, 57, 42, 18, 12, 3, 90, 71, 37, 74, 83, 47, 92, 13, 86, 5, 55, 88, 31, 34, 48, 17, 60};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {9420, 5975, 3812, 1139, 973, 4717, 24, 2100, 2, 4030, 165, 9758, 105, 2893, 5327, 772, 4599, 1943, 3705, 7371, 360, 3187, 1649, 8441, 2798, 1318, 1867, 16, 5078, 8923, 3288, 58, 680, 213, 5454, 7520, 1027, 8600, 6936, 327, 8761, 2349, 7079, 3087, 432, 6516, 3599, 5};
    vector<int> y = {111, 88, 70, 38, 35, 78, 5, 52, 1, 72, 14, 113, 11, 61, 83, 31, 77, 50, 69, 98, 21, 64, 46, 105, 60, 41, 49, 4, 81, 108, 65, 8, 29, 16, 84, 99, 36, 106, 95, 20, 107, 55, 96, 63, 23, 92, 68, 2};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {3361, 154, 248, 4599, 2, 223, 274, 1396, 331, 3155, 4843, 362, 10, 676, 1085, 3901, 1028, 1600, 55, 3467, 1205, 2141, 2310, 4720, 1331, 1978, 2954, 4479, 1746, 1822, 199, 176, 546, 3682, 1144, 1462, 973, 430, 3574, 3791, 2666, 3257, 4013, 722, 2059, 4243, 588, 869, 2396};
    vector<int> y = {66, 14, 18, 77, 1, 17, 19, 43, 21, 64, 79, 22, 3, 30, 38, 71, 37, 46, 8, 67, 40, 53, 55, 78, 42, 51, 62, 76, 48, 49, 16, 15, 27, 69, 39, 44, 36, 24, 68, 70, 59, 65, 72, 31, 52, 74, 28, 34, 56};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {1530, 1816, 6435, 1599, 1210, 440, 305, 2214, 3022, 369, 4412, 685, 194, 2558, 26, 69, 1892, 219, 1670, 1038, 5253, 45, 6849, 1, 3630, 5897, 478, 1094, 3524, 7419, 2050, 4070, 7565, 5379, 5128, 929, 1333, 2926, 83, 3318, 877, 6299, 19, 246, 336, 5636, 4528, 1397, 641, 6164};
    vector<int> y = {46, 50, 93, 47, 41, 25, 21, 55, 64, 23, 77, 31, 17, 59, 6, 10, 51, 18, 48, 38, 84, 8, 96, 1, 70, 89, 26, 39, 69, 100, 53, 74, 101, 85, 83, 36, 43, 63, 11, 67, 35, 92, 5, 19, 22, 87, 78, 44, 30, 91};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
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
    vector<int> x = {630, 3321, 3916, 4465, 91, 253, 1081, 4095, 21, 15, 1596, 990, 3240, 2775, 36, 465, 120, 3570, 78, 666, 406, 3403, 1953, 496, 1378, 351, 2278, 4851, 4656, 3160, 190, 171, 2145, 1711, 1035, 4950, 276, 153, 55, 703, 3741, 1770, 4560, 2016, 1891};
    vector<int> y = {35, 81, 88, 94, 13, 22, 46, 90, 6, 5, 56, 44, 80, 74, 8, 30, 15, 84, 12, 36, 28, 82, 62, 31, 52, 26, 67, 98, 96, 79, 19, 18, 65, 58, 45, 99, 23, 17, 10, 37, 86, 59, 95, 63, 61};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {630, 3655, 3321, 2628, 741, 66, 561, 91, 1275, 1225, 820, 21, 45, 3240, 1596, 2080, 105, 36, 861, 465, 78, 406, 2415, 3, 10, 2775, 1176, 3160, 300, 1431, 171, 3570, 1711, 1485, 276, 231, 153, 55, 780, 703, 1770, 2016, 1891, 3486, 210, 1128};
    vector<int> y = {35, 85, 81, 72, 38, 11, 33, 13, 50, 49, 40, 6, 9, 80, 56, 64, 14, 8, 41, 30, 12, 28, 69, 2, 4, 74, 48, 79, 24, 53, 18, 84, 58, 54, 23, 21, 17, 10, 39, 37, 59, 63, 61, 83, 20, 47};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {20, 28};
    vector<int> y = {3, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {554, 1322, 2029, 3265, 3704, 4650, 6372, 6988, 7613, 9004, 1336, 1986, 2648, 3006, 4777, 5748, 6826, 8032, 8647, 9681};
    vector<int> y = {6, 9, 11, 14, 15, 17, 20, 21, 22, 24, 10, 12, 14, 15, 19, 21, 23, 25, 26, 27};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {554, 1322, 2029, 3265, 3704, 4650, 6372, 6988, 7613, 1336, 1986, 2648, 3006, 4777, 5748, 6826, 8032, 8647};
    vector<int> y = {6, 9, 11, 14, 15, 17, 20, 21, 22, 10, 12, 14, 15, 19, 21, 23, 25, 26};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {8032, 8647, 9681};
    vector<int> y = {25, 26, 27};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {8647, 9681};
    vector<int> y = {26, 27};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {10000};
    vector<int> y = {1};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {100, 201, 600, 1000, 1401, 1400, 1801};
    vector<int> y = {1, 2, 4, 5, 6, 6, 7};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528, 561, 595, 630, 666, 703, 741, 780, 820, 861, 903, 946, 990, 1035, 1081, 1128, 1176, 1225, 10000};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 10000};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {9870};
    vector<int> y = {140};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {9869};
    vector<int> y = {140};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {10000};
    vector<int> y = {141};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {10000};
    vector<int> y = {10000};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528, 9983, 9984, 9985, 9986, 9987, 9988, 9989, 9990, 9991, 9992, 9993, 9994, 9995, 9996, 9997, 9998, 9999, 10000};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {42, 351, 379, 806, 847, 864, 957, 1000, 1104, 1138, 1217, 1287, 1532, 1863, 1867, 2138, 2283, 2291, 2320, 2417, 3114, 3151, 3335, 3367, 3415, 3475, 3587, 3639, 3668, 3976, 4030, 4286, 4416, 4438, 4757, 4758, 5297, 5326};
    vector<int> y = {1, 4, 5, 9, 10, 12, 12, 16, 17, 18, 18, 25, 28, 30, 31, 32, 34, 36, 38, 38, 38, 39, 41, 43, 43, 45, 46, 49, 50, 50, 52, 54, 55, 57, 57, 58, 61, 61};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {2, 50, 73, 74, 79, 81, 100, 128, 140, 145, 159, 169, 175, 178, 183, 185, 186, 189, 191, 211, 215, 225, 249, 286, 315, 325, 334, 368, 373, 380, 385, 401, 405, 406, 407, 414, 415, 430, 430, 433, 461, 474, 490, 495};
    vector<int> y = {2, 5, 6, 9, 14, 14, 18, 19, 20, 21, 25, 28, 30, 31, 32, 33, 36, 36, 38, 41, 44, 45, 45, 52, 53, 54, 54, 56, 57, 65, 66, 66, 68, 69, 71, 72, 79, 80, 83, 85, 85, 89, 93, 96};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {29, 141, 156, 215, 258, 323, 342, 359, 463, 504, 597, 647, 821, 909, 967, 1334, 1397, 1431, 1432, 1485, 1574, 1701, 1711, 1746, 1890, 1984, 2016, 2177, 2187, 2225, 2375, 2431, 2483, 2682, 2842, 2958, 2966, 3073, 3143, 3167, 3180};
    vector<int> y = {2, 8, 9, 11, 14, 18, 21, 23, 25, 28, 29, 33, 39, 42, 43, 51, 57, 59, 65, 66, 66, 70, 71, 76, 77, 77, 80, 83, 85, 90, 97, 100, 102, 103, 104, 106, 107, 107, 110, 118, 119};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {1908, 3167, 3965, 3990, 5078, 5299, 5858, 5894, 6089, 6118, 6248, 7201, 7368, 8221, 8559, 8999, 9106, 9169};
    vector<int> y = {13, 23, 28, 37, 69, 77, 83, 84, 85, 92, 99, 110, 111, 112, 118, 118, 120, 121};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {80, 91, 101, 166, 190, 226, 228, 237, 258, 370, 402, 436, 549, 550, 604, 646, 683, 825, 863, 871, 898, 905, 1041, 1047, 1065, 1077, 1084, 1090, 1119, 1130, 1134, 1137, 1196, 1252, 1324, 1326};
    vector<int> y = {1, 4, 6, 6, 6, 7, 8, 8, 9, 9, 9, 11, 11, 11, 14, 14, 17, 18, 18, 19, 21, 21, 21, 21, 21, 22, 22, 24, 24, 24, 24, 26, 26, 27, 28, 29};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {6818, 2065, 1632, 4970, 1980, 5066, 5390, 3498, 2749, 3278, 552, 4807, 6160, 7720, 6317, 4595, 2317, 4321};
    vector<int> y = {14, 5, 28, 29, 9, 9, 14, 12, 12, 12, 9, 24, 21, 16, 22, 15, 15, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {5130, 1752, 5553, 6708, 1837, 5724, 853, 3772, 4855, 1596, 6095, 4636, 5438, 5285, 1756, 4057, 2309, 783, 4468, 3860, 2364, 6310, 7427, 6628, 5204, 7483, 4228, 212, 5174, 4565};
    vector<int> y = {20, 43, 58, 41, 60, 75, 86, 78, 65, 48, 66, 32, 26, 85, 63, 31, 34, 6, 2, 45, 22, 73, 5, 86, 78, 1, 55, 1, 73, 43};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {209, 247, 603, 665, 985, 1361, 1368, 1709, 1715, 1751, 1757, 1784, 2146, 2206, 2526, 2668, 3013, 3025, 3092, 3118, 3151, 3182, 3250, 3260, 3321, 3578, 3695, 3764, 3765, 3785, 4218, 4378, 4636, 4773, 4774, 4792};
    vector<int> y = {1, 1, 1, 2, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 10, 10, 10, 11, 11, 12, 13, 14, 14, 14, 15, 15, 15, 15, 16, 16, 17, 17};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {3, 87, 50, 28, 100, 126, 91, 109, 53, 144, 39, 128, 22, 5, 21, 90, 24, 49, 43, 105};
    vector<int> y = {39, 55, 58, 4, 10, 63, 24, 46, 7, 13, 20, 56, 60, 25, 19, 32, 58, 46, 59, 59};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {139, 146, 162, 170, 217, 320, 382, 478, 480, 486, 520, 642, 704, 747, 816, 924, 1003, 1034, 1185, 1213, 1276, 1301, 1320, 1344, 1373, 1411, 1436, 1496, 1501, 1534, 1537, 1590, 1619, 1660, 1673, 1733, 1772};
    vector<int> y = {6, 7, 8, 9, 9, 11, 11, 14, 14, 16, 16, 18, 19, 19, 22, 23, 24, 25, 27, 28, 29, 31, 32, 35, 36, 37, 37, 40, 40, 41, 43, 44, 46, 50, 51, 51, 51};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {1, 31, 82, 92, 99, 110, 166, 211, 233, 234, 237, 271, 310, 313, 327, 357, 400, 447, 480, 546, 573, 618, 642, 704, 750, 797, 798, 849, 875, 881, 903, 951, 952, 981, 1002, 1014, 1025, 1139, 1159, 1176, 1227, 1272, 1273, 1374, 1380, 1588, 1597};
    vector<int> y = {1, 4, 7, 8, 13, 19, 19, 20, 21, 21, 22, 23, 25, 26, 28, 31, 33, 35, 36, 37, 40, 43, 45, 46, 46, 47, 49, 54, 56, 58, 59, 59, 62, 63, 67, 68, 69, 70, 71, 71, 72, 74, 77, 77, 77, 78, 81};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {8, 30, 95, 168, 178, 179, 455, 550, 877, 1009, 1091, 1172, 1231, 1417, 1445, 1477, 1552, 1613, 1664, 1945, 1974, 2182, 2193, 2461, 2472, 2791, 2797, 2853, 3329, 3365, 3399, 3678, 3820, 3842, 3858, 3934, 4065, 4692, 4709, 4836, 4844, 4894, 5028, 5037, 5199, 5317, 5326, 5337, 5342, 5474};
    vector<int> y = {1, 1, 2, 2, 2, 3, 4, 6, 6, 6, 8, 9, 10, 10, 11, 11, 11, 12, 12, 12, 18, 18, 18, 18, 18, 19, 20, 20, 20, 21, 21, 22, 23, 23, 23, 23, 24, 24, 25, 26, 27, 27, 27, 28, 29, 29, 29, 31, 32, 32};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {61, 67, 141, 357, 391, 397, 513, 762, 845, 976, 998, 1038, 1105, 1121, 1255, 1257, 1370, 1484, 1531, 1736, 1781, 1852, 1859, 1859, 1884, 1886, 1890};
    vector<int> y = {1, 5, 6, 13, 15, 18, 20, 22, 30, 32, 33, 36, 36, 38, 39, 40, 43, 43, 43, 46, 50, 50, 55, 56, 63, 66, 68};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {205, 379, 569, 611, 700, 955, 1056, 1121, 1465, 1555, 1604, 2462, 2810, 2816, 2864, 3433, 3550, 3589, 3612, 4102, 4193, 4236, 4361, 4539, 4658, 4815, 5026, 5273, 5469, 5519, 5851, 6303, 6524, 6560, 7159, 7258, 7566, 7599, 8241, 8351, 8353, 8448, 8725, 8828};
    vector<int> y = {1, 1, 3, 3, 4, 4, 4, 4, 6, 7, 9, 10, 15, 15, 16, 18, 18, 18, 19, 20, 21, 23, 23, 24, 25, 25, 26, 29, 30, 31, 33, 33, 34, 34, 35, 36, 36, 37, 39, 39, 39, 39, 41, 42};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {280, 340, 520, 549, 599, 635, 655, 741, 802, 919, 1120, 1171, 1198, 1240, 1452, 1455, 1486, 1599, 1610, 1668, 1782, 1898, 1967, 2145, 2268, 2351, 2483, 2502, 2601, 2624, 2662, 2837, 2840, 3327, 3731, 3812, 3885, 4548};
    vector<int> y = {2, 4, 5, 7, 11, 11, 12, 13, 13, 13, 14, 14, 17, 17, 18, 20, 21, 22, 23, 24, 25, 27, 32, 32, 33, 35, 36, 40, 41, 42, 43, 46, 47, 49, 49, 50, 51, 53};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {2512, 3872, 3580, 8475, 2315, 9904, 3017, 1603, 2881, 823, 2911, 4637, 8390, 9767, 45, 6250, 4243, 1554, 4676, 1743, 7204, 9534, 2041, 5986, 1509, 7521, 6544, 4555, 9812, 1269, 3922, 8388, 6818, 4341, 4999, 5801, 273, 7294, 7100, 3577, 6438, 8174, 1470, 9026, 2328, 5736, 8301, 3496, 6175, 5486};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {77, 394, 483, 577, 633, 788, 992, 1610, 1785, 1904, 2002, 2264, 2304, 2330, 2417, 2649, 2709, 2768, 3167, 3244, 3245, 3332, 3639, 3703, 3722, 3732, 3782, 3832, 4107, 4372, 5123, 5218, 5258, 5466, 5612, 5777, 6621, 6958, 7356, 7358, 8355, 8382, 8442, 9035, 9061, 9095, 9096, 9170, 9352, 9559};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {1033, 102, 9963, 7307, 6273, 7672, 3500, 5936, 5971, 4048, 2481, 7312, 9084, 1049, 7638, 210, 2636, 659, 3532, 4298, 4707, 939, 1412, 3521, 693, 3236, 756, 9027, 5831, 5681, 8208, 3436, 4911, 2552, 2321, 1546, 5783, 9136, 6065, 9294, 9705, 1491, 9309, 2938, 2068, 5548, 65, 5651, 9797, 8362};
    vector<int> y = {1, 3, 2, 1, 2, 2, 3, 1, 1, 3, 2, 1, 3, 2, 2, 2, 2, 1, 2, 2, 3, 3, 2, 3, 2, 2, 1, 2, 2, 2, 1, 2, 1, 3, 1, 3, 2, 3, 3, 1, 1, 2, 2, 3, 2, 3, 1, 3, 2, 1};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {7228, 1599, 3171, 5198, 3803, 8030, 5149, 4976, 2468, 9908, 3353, 9195, 9690, 493, 39, 4083, 9673, 6515, 9886, 8022, 1733, 2407, 4994, 7946, 7567, 6710, 5424, 2832, 8177, 8582, 8190, 8165, 2287, 1368, 4637, 365, 6981, 405, 3625, 1368, 3005, 2467, 9781, 4431, 8408, 3103, 9584, 9382, 6273, 9970};
    vector<int> y = {2, 1, 1, 2, 2, 3, 1, 3, 3, 2, 2, 1, 1, 4, 1, 2, 3, 2, 2, 1, 3, 2, 1, 3, 4, 3, 4, 2, 2, 2, 1, 4, 4, 3, 1, 4, 2, 2, 1, 2, 4, 4, 2, 4, 3, 4, 3, 4, 3, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {138, 436, 876, 1053, 1566, 1877, 1990, 2412, 2635, 2937, 3305, 3572, 3729, 3786, 4263, 4550, 4589, 4678, 4849, 4988, 5039, 5214, 5554, 5655, 6010, 6135, 6665, 6956, 6990, 7117, 7387, 7394, 7437, 7642, 7774, 7956, 8063, 8070, 8399, 8444, 8496, 8565, 8713, 8767, 9077, 9171, 9329, 9822, 9844, 9983};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {313, 366, 710, 716, 1188, 1236, 1241, 1390, 1391, 1520, 1560, 1569, 1690, 1705, 1746, 1874, 2045, 2067, 2823, 3187, 3719, 3748, 3815, 4478, 4686, 4821, 4828, 5459, 5581, 6124, 6415, 6877, 7031, 7241, 7282, 7421, 7448, 7809, 7823, 7948, 8196, 8293, 8432, 8529, 8665, 8816, 9003, 9287, 9616, 9992};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x = {6296, 9793, 6345, 8652, 8499, 2256, 9787, 574, 6452, 6376, 7650, 6761, 5741, 9313, 3297, 286, 1570, 8966, 1501, 609, 3002, 6323, 8014, 2999, 44, 4471, 1435, 3704, 3491, 5522, 273, 4861, 3195, 7463, 7613, 8498, 6145, 1387, 5020, 7348, 5717, 5396, 802, 1636, 1083, 9786, 607, 2258, 8325, 3192};
    vector<int> y = {2, 5, 4, 1, 3, 4, 7, 3, 2, 5, 4, 3, 6, 6, 1, 3, 1, 6, 1, 1, 7, 2, 7, 4, 6, 1, 7, 3, 6, 6, 6, 4, 7, 2, 7, 3, 2, 2, 4, 5, 1, 7, 3, 7, 3, 5, 3, 5, 6, 6};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x = {4656, 6690, 9961, 4564, 7671, 7334, 7865, 6373, 597, 3008, 1497, 2815, 4402, 2323, 1387, 7560, 9821, 2952, 6277, 2089, 3076, 9462, 9824, 7052, 6903, 2075, 2515, 1468, 1529, 7425, 4988, 7207, 1407, 1193, 487, 6543, 8158, 3795, 4612, 3364, 6544, 7267, 789, 3211, 7983, 9982, 4429, 2394, 5592, 8602};
    vector<int> y = {8, 3, 3, 3, 6, 6, 1, 8, 3, 8, 7, 5, 8, 6, 4, 6, 5, 4, 5, 2, 5, 5, 5, 3, 4, 5, 7, 7, 4, 4, 3, 7, 3, 6, 2, 4, 4, 4, 4, 7, 3, 1, 5, 5, 3, 4, 3, 8, 8, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x = {8172, 1527, 7233, 9891, 6261, 9705, 5869, 9549, 8645, 1135, 6325, 3413, 4203, 5624, 1883, 4920, 416, 733, 7181, 2475, 4581, 9777, 4867, 5710, 6359, 1360, 126, 2890, 1037, 8913, 2249, 4660, 6869, 4150, 4681, 6586, 5004, 2713, 4670, 6978, 5653, 3759, 4722, 143, 8494, 6950, 8918, 8477, 9264, 3703};
    vector<int> y = {2, 7, 2, 7, 4, 2, 4, 2, 2, 2, 4, 5, 5, 4, 1, 5, 7, 3, 4, 4, 8, 7, 8, 7, 4, 6, 6, 9, 7, 4, 7, 1, 8, 5, 3, 3, 8, 2, 2, 2, 8, 7, 4, 5, 4, 5, 8, 1, 2, 8};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x = {175, 180, 189, 416, 544, 883, 1068, 1327, 1443, 2531, 2650, 2699, 2773, 3000, 3220, 3358, 3499, 3666, 3724, 3738, 3899, 4231, 4461, 4508, 4690, 4958, 4963, 5653, 5996, 6283, 6444, 6634, 7018, 8035, 8150, 8299, 8322, 8366, 8373, 8394, 8400, 8726, 8754, 8845, 9369, 9479, 9687, 9709, 9758, 9981};
    vector<int> y = {1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x = {8671, 6510, 5739, 8379, 4872, 423, 8897, 7381, 7533, 3002, 3888, 3636, 1757, 4840, 6139, 6374, 7027, 6380, 2516, 2324, 5203, 3546, 5730, 4015, 2635, 3251, 2714, 9042, 2932, 5470, 9016, 1780, 5777, 9726, 1541, 404, 7117, 9648, 7280, 3645, 5182, 9803, 3895, 5842, 5478, 4927, 205, 9904, 5534, 1416};
    vector<int> y = {7, 8, 5, 5, 9, 12, 10, 3, 5, 7, 7, 5, 11, 11, 11, 4, 1, 5, 3, 3, 8, 2, 10, 5, 5, 9, 2, 12, 5, 6, 1, 7, 9, 1, 4, 5, 3, 4, 7, 8, 2, 4, 6, 10, 1, 5, 1, 2, 12, 12};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> x = {9, 288, 335, 342, 463, 542, 636, 661, 1120, 1152, 1569, 1649, 1704, 1728, 1754, 1837, 2142, 2327, 2686, 2722, 3156, 3262, 4195, 4207, 4244, 4481, 4569, 5075, 5231, 5658, 5806, 5925, 6292, 6662, 7121, 7134, 7265, 7748, 7876, 7908, 7946, 8004, 8084, 8565, 8858, 8899, 9220, 9269, 9853, 9859};
    vector<int> y = {1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 8, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 11, 11, 11, 11, 13, 13, 14, 14, 14};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> x = {5425, 7556, 1920, 9034, 9506, 9960, 7439, 2524, 5561, 7938, 4076, 7885, 9892, 8947, 374, 4325, 9100, 8954, 752, 3735, 1203, 6237, 8619, 7615, 183, 1694, 3376, 8450, 9215, 9272, 4229, 3891, 1306, 4128, 6005, 4138, 5125, 2214, 5354, 7964, 4307, 979, 8869, 2264, 2548, 2539, 6689, 7334, 8432, 5242};
    vector<int> y = {6, 7, 1, 16, 11, 13, 13, 6, 11, 12, 6, 12, 6, 16, 12, 16, 8, 9, 4, 1, 4, 15, 8, 9, 15, 3, 16, 1, 14, 3, 1, 3, 12, 9, 6, 5, 6, 11, 15, 5, 14, 2, 1, 14, 10, 11, 15, 1, 4, 16};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> x = {7209, 7465, 5239, 257, 9484, 307, 2803, 9823, 8361, 9452, 8336, 9452, 1507, 7149, 8004, 2204, 1169, 5541, 9301, 5557, 267, 9536, 1886, 862, 555, 3681, 9096, 6482, 7054, 7945, 4225, 730, 4912, 8892, 3672, 5782, 4883, 4195, 270, 9172, 8536, 1268, 86, 5367, 9651, 8763, 1237, 5281, 7003, 7013};
    vector<int> y = {11, 12, 13, 15, 10, 15, 5, 2, 3, 16, 11, 18, 7, 16, 10, 6, 9, 17, 13, 16, 6, 12, 17, 12, 4, 6, 18, 12, 5, 7, 2, 6, 11, 9, 15, 5, 13, 8, 8, 5, 18, 8, 17, 5, 3, 3, 3, 12, 13, 12};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> x = {114, 176, 515, 811, 1017, 1055, 1276, 1667, 1855, 2888, 2927, 4148, 4162, 4365, 4443, 4616, 4930, 4987, 5059, 5168, 5385, 5540, 5949, 6151, 6183, 6322, 6327, 6420, 6655, 6670, 6821, 6948, 6954, 6963, 7115, 7245, 7678, 7924, 7986, 8070, 8079, 8240, 8379, 8462, 8609, 8951, 9109, 9125, 9186, 9547};
    vector<int> y = {1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 10, 10, 10, 10, 10, 11, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 15, 16, 17, 18, 18, 18, 19, 19, 20, 20, 20};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> x = {8949, 5408, 4328, 2264, 7006, 555, 5607, 1502, 6737, 6622, 2401, 5480, 144, 8740, 3520, 5567, 2617, 5684, 548, 9367, 499, 1406, 9355, 4315, 495, 9306, 4842, 7524, 888, 958, 4498, 129, 4005, 2070, 3870, 7918, 7188, 9851, 3793, 3311, 9038, 3807, 5179, 5043, 8040, 3837, 2626, 7171, 3405, 1499};
    vector<int> y = {6163, 3549, 4749, 5623, 4673, 128, 8879, 2563, 1618, 2723, 2024, 6900, 6062, 7856, 1301, 8474, 8241, 9679, 8031, 8696, 2854, 4380, 1575, 5315, 9775, 6629, 1387, 6496, 1962, 8553, 894, 3737, 2732, 3433, 3300, 1593, 2074, 7673, 8930, 4411, 8827, 2895, 6242, 3390, 2279, 6467, 972, 7443, 3642, 2157};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> x = {2838, 8454, 995, 2465, 6481, 7759, 8599, 5904, 2373, 3816, 7680, 620, 173, 7818, 4080, 7383, 9776, 907, 9118, 244, 9011, 2134, 6221, 6050, 1767, 2313, 1968, 1626, 834, 4155, 8463, 6845, 5665, 8590, 2521, 194, 9041, 6916, 8578, 7120, 8192, 8512, 6473, 431, 5303, 4266, 2276, 6336, 9533, 6580};
    vector<int> y = {201, 9333, 7702, 7802, 6305, 4067, 3599, 342, 148, 2561, 6507, 3315, 8893, 724, 8004, 2543, 9411, 8968, 2330, 3039, 7887, 7911, 9710, 5652, 3144, 1641, 3884, 2474, 9441, 7838, 4819, 8817, 6867, 6151, 5059, 3093, 2598, 3684, 3504, 9767, 4289, 9149, 3562, 4707, 7631, 5350, 3527, 6712, 3746, 2987};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> x = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000};
    vector<int> y = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> x = {7585, 9165, 5796, 2126, 5829, 3406, 7478, 5414, 9073, 3405, 4960, 4801, 444, 1733, 9535, 4077, 1967, 217, 6076, 3950, 219, 8326, 1119, 5285, 2637, 486, 1402, 3589, 1329, 7670, 1269, 2113, 2982, 1771, 4501, 2617, 6625, 864, 5603, 8375, 5075, 3890, 2410, 5525, 2447, 9008, 1505, 7538, 2919, 7981};
    vector<int> y = {58, 61, 94, 81, 49, 48, 88, 31, 5, 92, 61, 52, 40, 68, 63, 55, 94, 41, 29, 14, 32, 53, 8, 37, 28, 26, 93, 53, 32, 89, 91, 85, 58, 26, 15, 48, 71, 59, 57, 1, 61, 21, 8, 87, 1, 38, 69, 31, 65, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> x = {39, 109, 288, 778, 1104, 1324, 1540, 1841, 1842, 2082, 2192, 2317, 2442, 2624, 2650, 2665, 2760, 2860, 2931, 3035, 3548, 3807, 3932, 4086, 4372, 4395, 4628, 4966, 5007, 5351, 5537, 5549, 5891, 6119, 6310, 6542, 6729, 6945, 7376, 7448, 7531, 7646, 8723, 8757, 8942, 9040, 9265, 9630, 9741, 9955};
    vector<int> y = {1, 6, 10, 14, 38, 44, 46, 51, 58, 58, 59, 66, 76, 115, 126, 129, 138, 147, 148, 150, 168, 171, 174, 176, 188, 190, 191, 199, 208, 209, 216, 216, 278, 411, 446, 501, 502, 517, 536, 587, 676, 828, 876, 944, 1118, 1320, 1538, 2082, 9999, 6541};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> x = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 4, 3, 8, 4, 5, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> x = {305, 316, 338, 365, 399, 441, 490, 546, 611, 689, 774, 865, 961, 1068, 1185, 1313, 1451, 1597, 1748, 1906, 2071, 2240, 2422, 2609, 2807, 3013, 3227, 3449, 3683, 3924, 4176, 4435, 4704, 4980, 5264, 5554, 5856, 6165, 6478, 6799, 7129, 7465, 7807, 8157, 8517, 8885, 9263, 9651, 947, 9449};
    vector<int> y = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> x = {9950, 9951, 9952, 9953, 9954, 9955, 9956, 9957, 9958, 9959, 9960, 9961, 9962, 9963, 9964, 9965, 9966, 9967, 9968, 9969, 9970, 9971, 9972, 9973, 9974, 9975, 9976, 9977, 9978, 9979, 9980, 9981, 9982, 9983, 9984, 9985, 9986, 9987, 9988, 9989, 9990, 9991, 9992, 9993, 9994, 9995, 9996, 9997, 9998, 9999};
    vector<int> y = {9950, 9951, 9952, 9953, 9954, 9955, 9956, 9957, 9958, 9959, 9960, 9961, 9962, 9963, 9964, 9965, 9966, 9967, 9968, 9969, 9970, 9971, 9972, 9973, 9974, 9975, 9976, 9977, 9978, 9979, 9980, 9981, 9982, 9983, 9984, 9985, 9986, 9987, 9988, 9989, 9990, 9991, 9992, 9993, 9994, 9995, 9996, 9997, 9998, 9999};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> x = {1, 2, 4, 6, 13, 15, 22, 3, 21, 30, 10000};
    vector<int> y = {1, 1, 2, 3, 4, 5, 6, 2, 5, 7, 10000};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> x = {1, 1, 9, 16, 49, 36, 25, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625, 10000, 729, 784, 841, 900, 961, 1024, 1089, 8900, 1225, 1296, 1369, 1444, 152, 1600, 1681, 1764, 1849, 1936, 2025, 9800, 2209, 9000, 9700, 10000};
    vector<int> y = {1, 2, 1, 4, 7, 6, 5, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> x = {2, 11, 28, 53, 88, 131, 184, 243, 312, 390, 473, 562, 659, 764, 873, 987, 1111, 1240, 1374, 1514, 1662, 1819, 1982, 2152, 2331, 2519, 2716, 2923, 3140, 3365, 3598, 3838, 4086, 4340, 4603, 4874, 5149, 5433, 5724, 6023, 6328, 6637, 6952, 7276, 7610, 100, 10000, 32, 200, 6331};
    vector<int> y = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 56, 10000, 1, 3, 19};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> x = {132, 363, 400, 541, 639, 742, 956, 1007, 1097, 1200, 1405, 2032, 2133, 2203, 2324, 2438, 2746, 2808, 3183, 3256, 3354, 3857, 3926, 4259, 4270, 4425, 4460, 4480, 4638, 4715, 5166, 5397, 5413, 5495, 5540, 5819, 5841, 5973, 6731, 6875, 7462, 7572, 8218, 8308, 9071, 9102, 9395, 9649, 9835, 9971};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> x = {43, 6336, 9171, 1480, 6964, 5707, 3283, 9963, 2997, 4829, 2393, 3904, 294, 7423, 9720, 5449, 4773, 1871, 5669, 7037, 8705, 1324, 7675, 5143, 8255, 5549, 2664, 39, 8725, 7531, 2318, 2192, 290, 9042, 9266, 7448, 5892, 4372, 5008, 4395, 9631, 4086, 8758, 4968, 3933, 6946, 4628, 5539, 6120, 2931};
    vector<int> y = {8469, 6502, 5726, 9360, 4466, 8147, 6829, 493, 1944, 5438, 4606, 155, 2384, 8718, 9897, 1728, 1540, 9914, 6301, 9896, 3813, 335, 4666, 7713, 6870, 7646, 2759, 2861, 9743, 780, 3037, 1844, 108, 8944, 2650, 3807, 6731, 5352, 1103, 3550, 2625, 9956, 1842, 7378, 6310, 2441, 1325, 1540, 2084, 6543};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> x = {1, 4000, 9000};
    vector<int> y = {1, 2, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> x = {8, 13};
    vector<int> y = {3, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> x = {401, 803, 1206, 1610, 2015, 2421, 2828, 3236, 3645, 4055, 4466, 4878, 5291, 5705, 6120, 6536, 6953, 7371, 7790, 8210, 8631, 9053, 9476, 9900, 865, 912, 961, 1012, 1065, 1120, 1177, 1236, 1297, 1360, 1425, 1492, 1561, 1632, 1705, 1780, 1857, 1936, 2017, 2100, 2185, 2272, 2361, 2452, 2545, 2640};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> x = {30, 5, 15};
    vector<int> y = {6, 5, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> x = {9, 13};
    vector<int> y = {3, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> x = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528, 561, 595, 630, 666, 703, 741, 780, 820, 861, 903, 946, 990, 1035, 1081, 1128, 1176, 1225, 1275};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> x = {1, 3, 8, 13, 19};
    vector<int> y = {1, 2, 3, 4, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> x = {4, 7};
    vector<int> y = {2, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> x = {1, 3, 5, 10, 15, 20, 25};
    vector<int> y = {1, 2, 1, 2, 3, 4, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> x = {33, 439, 553, 587, 925, 1157, 1681, 1740, 1879, 2100, 2166, 2256, 2266, 2485, 2573, 2712, 2930, 3060, 3071, 3283, 3295, 4036, 4225, 4289, 4333, 4390, 4513, 4640, 5480, 6100, 6110, 6172, 6184, 6204, 6512, 6582, 6764, 7128, 7396, 7490, 7696, 7753, 8199, 8249, 8255, 8360, 9145, 9146, 9238, 9659};
    vector<int> y = {1, 3, 4, 6, 6, 6, 6, 8, 10, 12, 14, 15, 15, 16, 17, 17, 19, 19, 19, 19, 19, 21, 23, 25, 27, 27, 29, 29, 31, 31, 32, 33, 35, 36, 36, 38, 39, 40, 42, 43, 44, 44, 46, 46, 46, 47, 49, 49, 50, 52};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> x = {1, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528, 561, 595, 630, 666, 703, 741, 780, 820, 861, 903, 946, 990, 1035, 1081, 1128, 1176, 1225, 1275};
    vector<int> y = {1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> x = {1, 2000, 8000};
    vector<int> y = {1, 2, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> x = {1, 3, 5};
    vector<int> y = {1, 2, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> x = {1200, 3000, 9999};
    vector<int> y = {1, 2, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> x = {11, 16};
    vector<int> y = {4, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> x = {1, 17, 23};
    vector<int> y = {1, 5, 6};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> x = {1};
    vector<int> y = {1};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> x = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> x = {5, 13, 24, 38, 55, 75, 98, 124, 153, 185, 220, 258, 299, 343, 390, 440, 493, 549, 608, 670, 735, 803, 874, 948, 1025, 1105, 1188, 1274, 1363, 1455, 1550, 1648, 1749, 1853, 1960, 2070, 2183, 2299, 2418, 2540, 2665, 2793, 2924, 3058, 3195, 3335, 3478, 3624, 3773, 3925};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> x = {1, 3, 6, 10, 16, 23, 31, 40, 50, 61, 73, 86, 90, 105, 121, 138, 156, 175, 195, 216, 238, 261, 285, 310, 336, 363, 391, 419, 449, 480, 512, 545, 579, 614, 650, 687, 725, 764, 804, 845, 887, 930, 990};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> x = {5, 9};
    vector<int> y = {2, 3};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> x = {5, 6, 10, 9, 11, 24, 24, 31, 47, 52, 62, 76, 90, 108, 115, 136, 149, 168, 189, 205, 227, 258, 277, 297, 329, 346, 381, 407, 436, 464, 493, 528, 566, 599, 634, 662, 705, 744, 776, 816, 866, 898, 945, 988, 1039, 1078, 1129, 1179, 1225, 1270};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000, 5200, 5400, 5600, 5800, 6000, 6200, 6400, 6600, 6800, 7000, 7200, 7400, 7600, 7800, 8000, 8200, 8400, 8600, 8800, 9000, 9200, 9400, 9600, 9800};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> y = {1, 2, 3, 4, 5};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> x = {6, 9};
    vector<int> y = {3, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> x = {10000};
    vector<int> y = {1};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> x = {1, 5, 17, 14, 19, 37, 25, 37, 48, 56, 70, 92, 111, 116, 128, 146, 171, 187, 219, 224, 252, 270, 300, 317, 358, 373, 398, 443, 463, 494, 520, 566, 601, 619, 658, 697, 749, 773, 817, 850, 895, 946, 991, 1042, 1086, 1130, 1167, 1218, 1283, 1316};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> x = {60, 71};
    vector<int> y = {10, 11};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> x = {11, 16};
    vector<int> y = {3, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> x = {1, 3, 6};
    vector<int> y = {2, 3, 4};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> x = {2};
    vector<int> y = {2};
    BaronsAndCoins* pObj = new BaronsAndCoins();
    clock_t start = clock();
    int result = pObj->getMaximum(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=13905&pm=10006
********************************************************************************
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
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
#include <cctype>  
#include <string>  
#include <cstring>  
#include <ctime>  
 
using namespace std; 
 
#define _int64 long long 
 
_int64 d[60][11000]; 
 
class BaronsAndCoins 
{ 
public: 
int getMaximum(vector <int> x, vector <int> y) 
{ 
    _int64 i,j,k,n,tmp,tmp1,best; 
    vector<pair<_int64,_int64> > a; 
    n=x.size(); 
    for (i=0;i<n;i++) 
    { 
        a.push_back(make_pair(x[i],y[i])); 
    } 
    sort(a.begin(),a.end()); 
    memset(d,-1,sizeof(d)); 
    for (i=0;i<n;i++) 
    { 
        tmp=(a[i].second+1)*a[i].second/2; 
        if (a[i].first<tmp) 
            continue; 
        if (a[i].first==tmp) 
            tmp1=a[i].second; 
        else 
        { 
            tmp1=a[i].second; 
            tmp1+=(a[i].first-tmp-1)/a[i].second+1; 
 
        } 
        d[i][tmp1]=1; 
    } 
    best=0; 
    for (i=0;i<n;i++) 
        for (j=0;j<=10000;j++) 
            if (d[i][j]>=0) 
            { 
                if (d[i][j]>best) best=d[i][j]; 
                for (k=i+1;k<n;k++) 
                    if ((a[k].first>a[i].first)&&(a[k].second>a[i].second)) 
                    { 
                        tmp=(a[k].second-a[i].second+1)*(a[k].second-a[i].second)/2+j*(a[k].second-a[i].second); 
                        if (a[k].first-a[i].first<tmp) continue; 
                        if (a[k].first-a[i].first==tmp) tmp1=a[k].second-a[i].second+j; 
                        else 
                        { 
                            tmp1=a[k].second-a[i].second+j; 
                            tmp1+=(a[k].first-a[i].first-tmp-1)/(a[k].second-a[i].second)+1; 
                        } 
                        if (d[i][j]+1>d[k][tmp1]) 
                            d[k][tmp1]=d[i][j]+1; 
                    } 
            } 
    return best; 
} 
};

********************************************************************************
*******************************************************************************/