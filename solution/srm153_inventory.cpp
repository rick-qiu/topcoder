/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1772
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

class Inventory {
public:
    int monthlyOrder(vector<int> sales, vector<int> daysAvailable);
};

int Inventory::monthlyOrder(vector<int> sales, vector<int> daysAvailable) {
    int ret;
    return ret;
}


int test0() {
    vector<int> sales = {5};
    vector<int> daysAvailable = {15};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sales = {75, 120, 0, 93};
    vector<int> daysAvailable = {24, 30, 0, 30};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sales = {8773};
    vector<int> daysAvailable = {16};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16450;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sales = {1115, 7264, 3206, 6868, 7301};
    vector<int> daysAvailable = {1, 3, 9, 4, 18};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 36091;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sales = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> daysAvailable = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 299970;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sales = {6709, 3119, 9767, 805, 8272, 9067, 1485, 8406, 1692, 3891, 6412, 6837, 1370, 6687, 5588, 4579, 1661, 4765, 6660, 7124, 5579, 9940, 7285, 7737, 2194, 7837, 8061, 9622, 9105, 8520, 4440, 120, 0, 3408, 5921, 3407, 6672, 8748, 3548, 9884, 4600, 1807, 976, 3762, 8595};
    vector<int> daysAvailable = {27, 26, 13, 21, 25, 4, 11, 14, 29, 29, 25, 12, 17, 24, 3, 12, 24, 23, 18, 8, 5, 4, 14, 20, 10, 25, 30, 24, 19, 19, 5, 8, 0, 23, 16, 12, 10, 24, 2, 15, 14, 6, 23, 12, 12};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 15791;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sales = {3179, 502, 2481, 8901};
    vector<int> daysAvailable = {26, 27, 28, 29};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 4024;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sales = {1606, 5854, 7677, 2747, 2875, 5832, 1412, 3806, 7955, 5848, 6799, 6235, 18, 5091, 4250, 717, 2673};
    vector<int> daysAvailable = {9, 25, 21, 27, 2, 5, 17, 27, 2, 1, 26, 14, 14, 11, 16, 2, 10};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 27522;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sales = {8514, 6386, 2876, 8878, 3832, 6676, 7371, 0, 3513, 9508, 3336, 1740, 2913, 7194, 8017, 6514, 3914, 6034, 3546, 647, 8034, 1703, 9470, 5021, 1921, 5717, 1599, 4858, 222, 1648, 9636, 1119, 690, 7644, 887, 9396, 8997, 2759, 9522};
    vector<int> daysAvailable = {8, 25, 2, 18, 20, 20, 3, 0, 25, 12, 26, 20, 7, 9, 12, 25, 24, 2, 11, 28, 17, 8, 21, 15, 5, 22, 8, 13, 8, 12, 20, 11, 29, 26, 28, 23, 15, 19, 21};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 14562;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sales = {5874, 1405, 6468, 1187, 2415, 7586, 3336, 6116, 3483, 8604, 6197, 4688, 58, 2768, 675};
    vector<int> daysAvailable = {26, 8, 8, 26, 18, 16, 10, 13, 9, 12, 3, 17, 11, 8, 12};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 13043;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sales = {356, 2759, 3928, 6623, 8557, 9569, 7859, 603, 2837, 6872, 8087, 1909, 9583, 2216, 3108, 5405, 7107, 2857, 2883, 8872, 8975, 8746, 8961, 6454, 623, 3188, 8119, 0, 7158, 2239, 5853, 1658, 4355, 3234, 354, 8725};
    vector<int> daysAvailable = {11, 14, 29, 1, 23, 7, 4, 1, 25, 3, 1, 9, 13, 1, 15, 9, 5, 1, 7, 4, 9, 12, 29, 8, 10, 18, 5, 0, 20, 18, 14, 18, 9, 28, 5, 13};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 34034;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sales = {5817, 7936, 9671, 9315, 5755, 5120, 7662};
    vector<int> daysAvailable = {5, 24, 7, 10, 27, 3, 11};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 27530;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sales = {5218, 3332, 2125, 1159, 4602, 5056, 9142, 5835, 6108, 8999, 3697, 4966, 4458, 8561, 6715, 8545, 933, 8830};
    vector<int> daysAvailable = {2, 1, 21, 20, 7, 29, 12, 9, 30, 2, 26, 29, 30, 19, 23, 22, 15, 21};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 25202;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sales = {6250, 2445, 3641, 440, 2624, 2770, 2695, 886, 2421, 9488, 5972, 4280, 3031, 268, 4606, 1024, 7447, 7562, 1547, 1706, 7026, 4634, 5261, 9407, 6243, 5837, 1774, 3278, 9921, 2304, 7091, 4701, 2262, 0, 4372, 1098, 1388, 7448, 6407, 8165, 3706};
    vector<int> daysAvailable = {25, 8, 17, 28, 14, 2, 30, 24, 3, 29, 30, 5, 7, 18, 23, 28, 9, 10, 27, 29, 19, 14, 3, 26, 11, 18, 2, 17, 6, 21, 15, 16, 30, 0, 25, 8, 23, 1, 15, 20, 16};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 17505;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sales = {827, 2707, 5453, 8236, 6742, 3419, 6210, 7071, 1004, 9399, 0, 731, 6202, 5211, 489, 3432, 8156, 2104, 9826, 8538, 6047, 6480, 2917, 9936};
    vector<int> daysAvailable = {17, 27, 22, 19, 10, 13, 10, 26, 14, 23, 0, 24, 4, 2, 27, 21, 4, 6, 8, 2, 12, 10, 4, 26};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 23034;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sales = {1112, 5630, 2575, 2126, 8610};
    vector<int> daysAvailable = {24, 27, 29, 8, 25};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 5723;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sales = {8940, 4269, 3920, 8049, 5137};
    vector<int> daysAvailable = {3, 28, 15, 23, 3};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 32737;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sales = {1909, 6223, 6585, 6533, 3227, 4318, 7631, 5096, 2680, 3249, 9298, 8453, 9355, 8512, 6160, 3484, 2415, 6952, 9744, 232, 8367, 7882, 10};
    vector<int> daysAvailable = {9, 9, 6, 12, 24, 12, 30, 1, 15, 22, 28, 14, 22, 28, 9, 22, 6, 12, 21, 13, 4, 3, 4};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 22709;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sales = {2043, 2554, 0, 851, 7549, 7567, 6621, 1379, 6610, 2992, 9208, 4133, 7521, 0, 7489, 5398, 790, 6632, 3262, 5313, 7944, 2594, 6149, 4040, 7165, 3907, 7963, 7464, 1355, 4398, 3144, 833, 3418, 2731, 6833, 5403, 5523, 9175, 9329, 4953, 3423, 6475, 8400, 205, 8913, 149, 1148, 552, 110};
    vector<int> daysAvailable = {19, 20, 0, 29, 15, 3, 16, 11, 14, 1, 18, 12, 2, 0, 28, 6, 4, 12, 3, 26, 10, 17, 22, 28, 11, 11, 21, 21, 1, 20, 27, 15, 17, 28, 26, 19, 11, 16, 1, 9, 16, 17, 25, 6, 30, 11, 24, 18, 19};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 21153;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sales = {9284, 3574, 8527, 648, 204, 5549, 5283, 5382, 9218, 4553, 841, 6177, 1476, 1069, 4227, 424, 2024, 8736, 9758, 2482, 5102, 9129, 5098, 9212, 0, 1339, 4342, 0, 4688, 2694, 4805, 9384, 1777, 4092, 5335, 4557, 6347, 179, 1946, 7412, 4956, 6673};
    vector<int> daysAvailable = {17, 20, 3, 14, 8, 18, 1, 25, 21, 9, 20, 18, 30, 15, 13, 7, 7, 2, 23, 4, 28, 9, 20, 23, 0, 1, 15, 0, 3, 9, 13, 15, 12, 26, 28, 26, 13, 2, 9, 8, 7, 25};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 20016;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sales = {4010, 6439, 282, 9089, 95, 3176, 8042, 4084, 6350, 2239, 7659, 8792, 41};
    vector<int> daysAvailable = {17, 27, 16, 25, 19, 8, 30, 9, 3, 26, 27, 15, 10};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11668;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sales = {3102, 375, 4102, 4785, 6866, 8797, 7474, 2130, 0, 292, 2396, 641, 7051, 0, 1667, 9182, 2302, 2999, 6944, 7494, 6679, 4487, 0, 2884, 6614, 4163, 4463, 690, 4677, 146, 6106, 5815, 8665, 9810, 1331, 0, 888, 6508, 4851, 4561, 8529, 9003, 515, 1492, 9316, 7207, 2596, 2951};
    vector<int> daysAvailable = {19, 17, 1, 18, 18, 19, 9, 10, 0, 6, 26, 18, 10, 0, 23, 1, 19, 1, 11, 26, 29, 22, 0, 15, 7, 3, 26, 8, 10, 6, 8, 20, 26, 8, 19, 0, 13, 20, 29, 13, 3, 8, 25, 3, 22, 8, 7, 3};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 23923;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sales = {6653, 3960, 7474, 7436, 5614, 66, 3301, 0, 7094, 187, 9833, 9436, 2563, 8159, 2469, 3060, 2423, 0, 863, 2022, 5054, 1268, 8602, 4020, 0, 1368, 0, 7557, 4007, 9446, 2303, 6933, 3931, 5236, 1733, 4082, 3432, 0, 2077};
    vector<int> daysAvailable = {28, 8, 29, 29, 17, 28, 27, 0, 23, 21, 21, 24, 22, 18, 17, 19, 4, 0, 19, 16, 11, 13, 14, 13, 0, 20, 0, 30, 2, 10, 20, 24, 2, 18, 4, 15, 22, 0, 7};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11561;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sales = {7680, 9971, 9702, 0, 3020, 0, 574, 4482, 5847, 7283, 1350, 8271, 1775, 690, 653, 362, 8526, 7182, 4683, 5595, 9582, 3633, 4882};
    vector<int> daysAvailable = {24, 20, 13, 0, 25, 0, 1, 23, 22, 7, 27, 8, 3, 15, 30, 28, 2, 18, 4, 12, 8, 10, 27};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 19369;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sales = {2468, 1227, 704, 6128, 478, 6399, 8144, 2047, 3653, 9150, 9416, 99, 4596, 7321, 0, 3442, 4686, 992, 698, 3662, 6472, 4344, 0, 4540, 0, 7134, 3229, 8868, 9937, 3161, 1636, 6045, 8331, 1787, 9906, 5512, 5388};
    vector<int> daysAvailable = {27, 25, 26, 16, 21, 25, 3, 19, 21, 16, 20, 10, 27, 16, 0, 24, 27, 8, 16, 3, 6, 13, 0, 7, 0, 26, 15, 8, 22, 26, 30, 22, 16, 16, 19, 18, 25};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11867;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sales = {6492, 4280, 8331, 528, 7579, 3313, 6358, 3245, 3544, 4703, 6910, 1634, 7775, 1953, 8576, 7651, 379, 3588, 1515, 6082, 3483, 3879, 5719, 8803, 1325, 8136, 8830, 4792, 9305, 7170, 5077, 1459, 3105, 6332, 6519, 3145, 2443, 7569, 6142, 9410, 3543, 1507, 1299, 5355};
    vector<int> daysAvailable = {4, 18, 1, 20, 10, 29, 18, 17, 25, 5, 25, 23, 22, 12, 24, 23, 15, 21, 16, 13, 9, 8, 23, 7, 6, 8, 5, 18, 30, 22, 21, 7, 28, 11, 17, 24, 23, 7, 4, 10, 16, 5, 27, 19};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 18738;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sales = {2008, 0, 6923, 9599, 2801, 6220, 7087, 8648, 9466};
    vector<int> daysAvailable = {12, 0, 26, 3, 7, 18, 15, 22, 17};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 21756;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sales = {4866, 6478, 1596, 1427, 5917, 2006, 3867, 2873, 431, 7735, 7369, 9697, 1561, 7788, 5774, 4175};
    vector<int> daysAvailable = {2, 25, 9, 19, 29, 24, 22, 11, 17, 28, 4, 6, 28, 27, 23, 29};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 15316;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sales = {2951, 372, 5221, 6564, 9787, 8834, 9306, 8344, 6535, 5236, 3180, 5653, 2356, 3678, 7422, 6483, 5092, 6160, 9579, 584, 2597, 5324, 6008, 4476, 736, 1594, 3412, 5072, 8258, 1015, 9617, 559, 2193, 292, 1085};
    vector<int> daysAvailable = {21, 15, 28, 11, 15, 8, 8, 18, 28, 25, 2, 30, 18, 28, 5, 20, 23, 9, 22, 16, 21, 18, 25, 26, 23, 3, 29, 14, 20, 28, 7, 10, 22, 15, 20};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11940;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sales = {4397, 4507, 1910, 682, 3131, 548, 15, 6341, 7367, 5732, 9045, 311, 9096, 8083, 7270, 8586, 3895, 7496, 870, 2841, 7804, 802, 3955, 9238, 0, 7248, 4408, 2342, 2529, 0, 9821, 2848, 4509, 1231, 3584, 6354, 632};
    vector<int> daysAvailable = {8, 25, 6, 20, 10, 23, 24, 7, 4, 5, 25, 24, 18, 13, 10, 15, 7, 30, 3, 4, 5, 12, 6, 11, 0, 27, 21, 21, 23, 0, 9, 28, 13, 4, 27, 4, 3};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 15024;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sales = {9540, 5665, 7120, 4752, 4394, 7246, 4735, 0, 2233, 2831, 0, 1333, 828, 8340, 1777, 249, 2453, 9957, 5171, 6783, 1883, 478, 4539, 6185, 6612, 284, 323, 3901, 9962, 4210, 4397, 9885, 653, 5519, 8672, 203, 7896, 0, 3754, 349, 2925, 9691, 3689, 7552, 1031, 5448, 4904, 9197, 1084};
    vector<int> daysAvailable = {12, 15, 11, 18, 30, 29, 7, 0, 14, 22, 0, 17, 14, 15, 15, 9, 29, 27, 7, 7, 2, 24, 1, 8, 18, 9, 27, 20, 26, 23, 12, 5, 2, 5, 18, 27, 19, 0, 28, 14, 1, 13, 10, 26, 20, 15, 29, 21, 29};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 15730;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sales = {604, 7527, 6174, 8382, 5370, 7297, 4065, 2437, 7371, 7121, 7162, 6156, 8489, 4948, 3022, 6901, 9350, 8563, 1434, 841, 7546, 2286, 9814, 1456, 9199, 2265, 0, 1959, 7123, 1003, 4809, 5808, 6666, 8719, 9131, 831, 7981, 3184, 4898, 2506, 6659, 0};
    vector<int> daysAvailable = {4, 19, 1, 13, 5, 20, 7, 24, 1, 13, 17, 24, 23, 13, 27, 15, 8, 21, 2, 16, 16, 11, 24, 17, 8, 9, 0, 4, 23, 14, 27, 2, 20, 10, 26, 13, 19, 12, 26, 23, 28, 0};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 23341;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sales = {2070, 4810, 8050, 6949, 7218, 6017, 5047, 2563, 6402, 2752, 452, 7153, 4169, 3518, 7244, 8524, 8414, 0, 9498, 0, 7213, 7941, 8800, 1734, 8568, 2452, 1667, 4920, 9133, 7294, 851, 2912, 7910, 0, 1037, 3464, 2417};
    vector<int> daysAvailable = {5, 7, 27, 19, 24, 13, 14, 22, 8, 26, 14, 22, 9, 6, 18, 15, 22, 0, 28, 0, 10, 11, 13, 3, 30, 11, 4, 21, 19, 14, 26, 5, 7, 0, 29, 18, 13};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 12380;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sales = {243, 5496, 5001, 3563, 9754, 4417, 6635, 695, 8695, 310, 8989, 6908, 3509, 7049, 5312, 3423, 3964, 760, 2509, 5076, 9562, 9340, 1183, 4598, 4608, 1833, 3563, 7244};
    vector<int> daysAvailable = {7, 25, 29, 30, 22, 14, 21, 23, 8, 15, 25, 17, 21, 24, 23, 20, 7, 2, 21, 2, 13, 28, 11, 1, 28, 16, 2, 29};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 17225;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sales = {6113, 656, 4030, 4041, 8679, 2426, 7538, 6376, 471, 3144, 2205, 7735, 9956, 6136, 2968, 0, 2914, 0, 7432, 5644, 2654, 7758, 7664};
    vector<int> daysAvailable = {29, 16, 2, 19, 16, 2, 3, 28, 27, 27, 3, 22, 11, 4, 28, 0, 5, 0, 21, 14, 11, 5, 9};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 21036;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sales = {1340, 5876, 0, 9687, 451, 5259, 3835, 5921, 9002, 2846, 8668, 6025, 2478, 2398, 2838, 8284, 1276, 9459, 161, 4852, 7382, 6380, 6213, 1154, 2586, 9092, 9928, 7880, 8863, 2096, 4567, 3985, 5650, 5503, 2702, 6089, 1678, 3542, 626, 3271, 7186, 0, 4295, 6971, 8191, 0, 7003};
    vector<int> daysAvailable = {16, 13, 0, 29, 25, 23, 3, 15, 29, 30, 16, 8, 13, 19, 18, 20, 7, 19, 24, 3, 12, 5, 23, 26, 6, 3, 19, 4, 23, 15, 13, 5, 26, 22, 13, 22, 2, 2, 6, 29, 9, 0, 28, 11, 26, 0, 6};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16611;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sales = {2955, 8518, 7502};
    vector<int> daysAvailable = {19, 23, 21};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 8832;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sales = {5597, 5626, 4852, 1141, 2001, 4332, 9161, 4292, 4938, 7509, 4345, 1063, 8987, 1615, 0, 4894, 9539, 2851, 1235, 148, 6262, 9592, 8694, 4597, 7546, 6922, 8854, 0, 3444, 3112, 8427, 6967, 5148, 4384, 3017};
    vector<int> daysAvailable = {14, 21, 20, 18, 17, 13, 20, 30, 6, 13, 12, 4, 7, 26, 0, 26, 11, 6, 15, 28, 3, 30, 4, 30, 30, 23, 19, 0, 2, 18, 23, 8, 20, 20, 24};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 15005;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sales = {7800, 5031, 802, 5497, 2889, 7255, 4322, 8152, 9093, 8167, 3151, 5094, 259, 8591, 9766, 8506, 2278, 2565, 4249, 4779, 9790, 8318, 2445, 595, 2287, 5387, 9585, 5526};
    vector<int> daysAvailable = {7, 13, 9, 17, 8, 30, 21, 3, 15, 8, 23, 3, 2, 30, 17, 20, 22, 28, 26, 18, 29, 1, 8, 2, 23, 21, 17, 12};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 23123;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sales = {6559, 661, 1713, 2799, 8193, 885, 4779, 0, 2620, 4219, 834, 7772, 5946, 8169, 1855};
    vector<int> daysAvailable = {28, 24, 5, 19, 30, 28, 5, 0, 13, 3, 18, 9, 28, 18, 18};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11356;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sales = {750, 8490, 4199, 8851, 4776, 3117, 3433, 9450, 8264, 8173, 5265, 8864, 7713, 3108, 1602, 9093, 4365, 2884, 7127, 6298, 8315, 1248, 1926, 6441, 6795, 6291, 7, 2897, 1508, 2950, 5752, 9142, 5382, 962, 1583, 5763, 7035, 1283, 1744, 8792, 1696, 4157};
    vector<int> daysAvailable = {5, 26, 25, 12, 8, 23, 3, 26, 9, 13, 26, 21, 22, 16, 5, 12, 25, 15, 8, 2, 22, 11, 11, 17, 11, 16, 5, 25, 22, 10, 21, 27, 5, 9, 17, 2, 13, 16, 21, 14, 14, 29};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 14806;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sales = {0, 3240, 945, 3393, 6839, 5238, 7376, 8263, 2724, 6323, 1635, 7571, 6665, 1025, 9036, 1657, 4816, 1264, 9585, 5856};
    vector<int> daysAvailable = {0, 16, 29, 11, 23, 29, 24, 9, 18, 2, 22, 17, 19, 12, 6, 29, 13, 20, 9, 6};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16664;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sales = {5933, 862, 4531, 898, 3211, 624, 1129};
    vector<int> daysAvailable = {27, 28, 26, 7, 19, 13, 19};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 3556;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sales = {3275, 4386, 8700, 0, 0, 6015, 305, 9610, 5426, 4112, 6843, 4872, 5440, 1751, 1026, 8734, 2079, 9490, 7168, 3811, 4997, 7722, 1785, 5200, 5745, 4168, 3214, 1462, 8205, 2039, 6520, 2966, 739, 225, 5811, 6456, 1458, 2034, 4446, 5310};
    vector<int> daysAvailable = {29, 29, 26, 0, 0, 27, 17, 9, 13, 28, 15, 1, 30, 2, 12, 6, 14, 12, 14, 11, 20, 12, 7, 16, 23, 1, 13, 28, 29, 3, 13, 2, 23, 9, 18, 26, 11, 12, 23, 2};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 19826;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sales = {4911, 7152, 2041, 8030, 8264, 5987, 9235, 5279, 6609, 4575, 9950, 3226, 0, 0, 549, 4960, 8835, 8235, 7554, 4883, 3211, 7419, 5145, 4729, 3370, 2669, 3706, 5497, 4257, 5071, 5019, 5884, 9907, 4741, 5051, 8602, 6345};
    vector<int> daysAvailable = {9, 19, 25, 28, 7, 15, 5, 15, 20, 1, 16, 26, 0, 0, 19, 8, 26, 19, 10, 7, 25, 21, 17, 25, 20, 15, 13, 30, 18, 2, 17, 4, 11, 4, 8, 30, 22};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 19899;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sales = {8423, 1032, 9070, 3535, 2494, 8564, 3057, 2767, 3895, 8400, 887, 1832, 1431, 6210, 751, 6545, 1059, 885, 2183, 9003, 5035, 337, 1692, 3901, 1064, 1144, 9941, 3658, 5082, 8193, 2261, 340, 7164, 0, 315, 0, 827, 3686, 3060, 8325, 9295};
    vector<int> daysAvailable = {9, 4, 25, 14, 28, 15, 14, 19, 18, 19, 24, 20, 14, 12, 1, 1, 9, 25, 18, 10, 20, 8, 21, 4, 3, 5, 25, 20, 15, 11, 9, 26, 11, 0, 21, 0, 30, 13, 29, 2, 1};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 23933;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sales = {5844, 2131, 6273, 4827, 4341, 913, 9628, 4799, 7503, 1941, 0, 7376, 1719, 5952, 8121, 0, 5601, 6329, 2754, 4857, 8085, 8876, 2780, 9369, 4831, 8063, 9701, 8590, 6064};
    vector<int> daysAvailable = {5, 24, 11, 13, 28, 9, 21, 16, 15, 30, 0, 5, 23, 29, 23, 0, 13, 13, 19, 16, 16, 3, 1, 14, 21, 4, 24, 10, 19};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 19995;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sales = {1527, 9008, 6874, 669, 5658, 7025, 7790, 4389, 9640, 6059, 124, 4487, 7535, 7560, 6830, 3363, 9997, 9701, 3914, 1669, 3453, 0, 8093, 9728, 9322, 5076, 708};
    vector<int> daysAvailable = {24, 19, 2, 25, 9, 6, 2, 8, 6, 1, 29, 22, 6, 20, 24, 27, 12, 6, 25, 20, 7, 0, 30, 27, 8, 19, 10};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 29398;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sales = {4034, 9882, 5046, 1736, 5538, 6597, 9308, 6067, 7314, 5993, 9545, 1003, 8237, 740, 4918, 7174, 104, 8203, 7664, 5376, 7984, 9783, 9964, 1247, 3445, 9514, 6651, 9011, 5205, 7234, 9763, 6253, 3671, 203, 1706, 3954, 7487, 9122, 1862, 7469};
    vector<int> daysAvailable = {21, 7, 10, 15, 24, 30, 5, 10, 16, 18, 25, 21, 15, 26, 22, 6, 5, 23, 10, 5, 26, 29, 9, 13, 24, 1, 4, 1, 28, 8, 25, 5, 14, 6, 8, 7, 5, 14, 30, 19};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 29376;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sales = {7440, 9649, 7841, 658, 2330, 2989, 8428, 7641, 4927, 5648, 9021, 999, 8179, 8163, 736, 9956};
    vector<int> daysAvailable = {28, 2, 15, 9, 9, 26, 13, 16, 20, 15, 6, 18, 27, 27, 2, 30};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 20012;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sales = {8692, 944, 2151, 7553, 9818, 6075, 9091, 9200, 153, 3168, 7773, 1094, 6547, 5427, 9731, 7704, 6469, 1731, 2601, 7431, 3432, 6434, 8984, 2006, 1761, 9421, 2246};
    vector<int> daysAvailable = {29, 15, 28, 27, 13, 10, 13, 25, 14, 9, 23, 30, 22, 18, 17, 25, 4, 19, 5, 11, 8, 21, 21, 20, 10, 19, 4};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11964;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sales = {7251, 1119, 0, 8451, 558, 2109, 9035, 7845, 6374, 5543, 1409, 496, 4484, 73, 8174, 871, 1547, 3387, 6364, 2316, 19};
    vector<int> daysAvailable = {20, 22, 0, 18, 20, 15, 22, 25, 23, 8, 14, 11, 21, 19, 19, 22, 3, 24, 29, 27, 20};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 6813;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sales = {4305, 4889, 7777, 4787, 7907, 9651, 2037, 5564, 1186, 6406, 972, 5816, 0, 1072, 7766, 4100, 5432, 8584, 4561, 5171, 4327, 2510, 7438, 6434, 9452, 1754, 1606, 2866, 9801, 4758, 2748, 4993, 9957, 1799, 3218, 2166, 8090, 3602, 5236};
    vector<int> daysAvailable = {3, 26, 14, 10, 13, 19, 13, 30, 4, 30, 14, 2, 0, 23, 26, 2, 18, 28, 19, 9, 22, 7, 20, 6, 5, 16, 16, 9, 13, 2, 17, 17, 20, 26, 26, 29, 21, 17, 30};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16552;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sales = {1954, 2395, 5072, 3982, 3797, 5516, 1201, 6996, 6555, 9693, 4218, 605, 0, 4427, 2490, 1552, 5100, 3556, 3347, 6014, 3337, 4617, 5950, 4830, 1179, 7873, 3602, 2110, 791, 7523, 0, 6950, 1884, 3027, 4721, 7285, 158, 1095, 5201, 6778, 6492, 5695};
    vector<int> daysAvailable = {9, 1, 18, 30, 22, 24, 21, 5, 15, 13, 15, 29, 0, 5, 26, 21, 24, 5, 23, 17, 9, 3, 17, 15, 21, 5, 10, 20, 3, 18, 0, 12, 11, 23, 17, 1, 11, 3, 10, 25, 30, 4};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 19098;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sales = {1784, 2966, 3235, 6738, 4779, 7713, 9145, 2130, 6241, 615, 5173, 8881, 2032, 7229, 3319, 7580, 8954, 8744, 8429, 2820, 5121, 250, 1963, 847, 0, 9927, 9169, 7689, 5252, 7229, 4951, 6264, 2449, 4061, 9464, 3375, 2840, 7814};
    vector<int> daysAvailable = {19, 4, 27, 17, 9, 6, 3, 23, 17, 25, 3, 5, 27, 3, 5, 7, 2, 19, 9, 30, 11, 17, 14, 24, 0, 25, 12, 12, 6, 6, 20, 10, 28, 22, 8, 10, 6, 22};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 23055;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sales = {1139, 2560, 1677, 6420, 9085, 3006};
    vector<int> daysAvailable = {15, 13, 4, 30, 27, 3};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11223;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sales = {9332, 3545, 3296, 1928, 7564, 8201, 7192, 8994, 9843, 5251, 8718, 9591, 8875, 6907, 4020, 7320, 3783, 9654, 4614, 8567, 2211, 8369, 6232, 1307, 347, 263, 4652, 1484, 4879, 17, 6415, 0, 5213, 2073, 3382, 5239, 5990};
    vector<int> daysAvailable = {3, 11, 28, 6, 23, 20, 24, 8, 13, 10, 11, 28, 6, 14, 25, 22, 22, 10, 8, 6, 2, 13, 30, 23, 25, 21, 29, 22, 16, 27, 1, 0, 15, 13, 23, 25, 5};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 20926;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sales = {7113, 4988, 8499, 4380, 7312, 6421, 2878};
    vector<int> daysAvailable = {7, 28, 2, 17, 5, 8, 5};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 36609;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sales = {5806, 7433, 6707, 9021, 2202, 5578, 6596, 2690, 533, 5753, 2152, 7811, 3267, 2593, 4300, 348, 7593, 4115, 3741, 3834, 9693, 6431, 2933, 469, 9226, 571, 3442, 8506, 1076, 0};
    vector<int> daysAvailable = {22, 15, 2, 28, 27, 21, 25, 16, 27, 9, 18, 12, 5, 10, 27, 7, 17, 16, 23, 21, 18, 15, 4, 13, 1, 21, 23, 15, 28, 0};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 21269;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sales = {5533, 5906, 3941, 8776, 2797, 6502, 8654, 7075, 6422, 2367, 9180, 2812, 1995, 9524, 0, 9890, 3080, 6070, 6417, 9122, 3924, 5326, 728, 9144, 3546, 8316, 1481, 3951, 981, 3198, 8523, 6541, 6998, 7729, 4263, 5819, 7764, 6532, 3241, 396, 5227};
    vector<int> daysAvailable = {14, 2, 2, 13, 8, 16, 26, 2, 3, 1, 29, 22, 6, 30, 0, 24, 3, 20, 19, 2, 11, 2, 15, 22, 22, 9, 1, 10, 6, 16, 10, 26, 5, 22, 21, 22, 21, 4, 8, 7, 17};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 26825;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sales = {6374, 8535, 671, 4908, 3858, 1349, 4723, 4636, 5296, 9863};
    vector<int> daysAvailable = {5, 28, 21, 22, 19, 17, 24, 4, 4, 11};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 17081;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sales = {1776, 1645, 7204, 137, 2427};
    vector<int> daysAvailable = {12, 23, 7, 30, 2};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 14801;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sales = {3438, 4264, 1501, 6868, 4858, 3866, 8276, 1304, 2151, 5967, 8204, 9510, 3530, 4296, 8589, 8693, 8930, 6621, 1158, 9672, 0, 5126, 1752, 3268, 2807, 8825, 4459, 2118, 8041};
    vector<int> daysAvailable = {28, 16, 23, 8, 12, 1, 4, 3, 6, 16, 15, 25, 15, 16, 23, 15, 30, 25, 13, 11, 0, 18, 5, 30, 11, 8, 26, 21, 20};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16619;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sales = {2202, 5807, 5087, 538, 2403, 8583, 2114, 8262, 2068, 144, 8296, 8461, 4074, 167, 3493, 9501, 7528, 7614, 371, 8488, 9455, 9779, 2741, 8527, 4221, 3298};
    vector<int> daysAvailable = {20, 20, 10, 12, 30, 27, 23, 17, 24, 22, 9, 9, 7, 28, 22, 11, 16, 20, 28, 14, 3, 22, 11, 20, 6, 16};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 14016;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sales = {5656, 8826, 6450, 9144, 1457, 6290, 3310, 1131, 9080, 6294, 2925, 6424, 6272, 7169};
    vector<int> daysAvailable = {13, 22, 10, 3, 9, 8, 20, 9, 24, 5, 5, 1, 7, 9};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 34516;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sales = {7096, 9508, 3783, 7192, 2192, 5052, 3997, 2971, 5192, 0, 250, 3967, 9645, 2886, 1578, 3093, 9935, 221, 5606, 8884, 305, 2982, 5771, 5001, 9155, 6545, 9458, 9303, 1570, 7714, 7911, 4910, 4513, 5062, 8468, 8813, 3045, 2856, 322, 4837, 7141, 9776};
    vector<int> daysAvailable = {10, 7, 9, 8, 7, 24, 6, 14, 3, 0, 5, 28, 20, 10, 28, 10, 9, 6, 20, 20, 18, 21, 3, 26, 26, 24, 19, 18, 27, 2, 8, 11, 11, 26, 16, 20, 17, 30, 13, 12, 16, 9};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16674;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sales = {5184, 412, 776, 681, 6237};
    vector<int> daysAvailable = {19, 22, 12, 7, 28};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 4058;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sales = {7164, 2070, 3372, 5516, 816, 1560, 4307, 1569, 711, 5353, 8484, 1388, 6402, 5071, 5360, 3607, 8499, 256, 9491, 1859, 5953, 2071, 8323, 9951, 6978, 4739, 3088, 1252, 8082, 4088, 6079, 1706, 898, 293, 5338, 1202, 1153, 9731, 3480, 5838, 1367, 1980};
    vector<int> daysAvailable = {19, 4, 28, 18, 14, 1, 9, 9, 19, 17, 14, 8, 11, 18, 12, 19, 10, 5, 30, 6, 19, 19, 6, 20, 16, 15, 17, 28, 3, 8, 7, 2, 3, 8, 18, 23, 17, 6, 3, 17, 29, 1};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 15621;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sales = {3601, 1938, 1318, 7268, 2232, 4940, 7159, 4702, 4476, 4028, 3691, 3811, 7555, 2529, 0, 3129, 3710, 4699, 8163, 5993, 7315, 9058, 9759, 5837, 2562, 8791, 1555, 4755, 2911, 7036, 4330, 4180, 2307, 9300, 5812, 239, 8977, 6281, 4025, 4363, 4469, 909, 7715, 2997, 3672, 3054, 5057, 7461, 6072};
    vector<int> daysAvailable = {1, 4, 24, 9, 13, 25, 24, 26, 11, 6, 18, 28, 12, 29, 0, 4, 28, 18, 10, 20, 30, 8, 23, 3, 12, 3, 20, 26, 11, 26, 6, 2, 14, 11, 4, 14, 29, 25, 13, 8, 30, 19, 23, 2, 3, 25, 17, 23, 29};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 18017;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sales = {8544, 6897, 3293, 2253, 5304, 3578, 7870, 7673, 2942, 1470, 7359, 2898, 2697, 437, 2647, 1575, 1036, 5788, 7862, 5490, 6152, 2934, 938, 1689, 2133, 4606, 1403, 4415, 6525, 5316, 914, 6824, 3651, 8320, 2723, 0, 712, 1007, 27, 4536, 4939, 8340};
    vector<int> daysAvailable = {4, 28, 20, 18, 10, 28, 26, 23, 1, 20, 11, 29, 21, 4, 17, 15, 18, 13, 19, 22, 8, 5, 21, 21, 2, 2, 3, 2, 8, 13, 28, 9, 1, 14, 11, 0, 5, 21, 10, 30, 26, 23};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 17815;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sales = {9289, 400, 0, 223, 9175, 1565, 5799, 3053, 980, 7153, 7712, 6652, 6904, 568};
    vector<int> daysAvailable = {9, 18, 0, 19, 28, 4, 19, 20, 9, 15, 15, 19, 1, 24};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 24509;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sales = {4089, 6807, 982, 8927, 5039, 7404, 3985, 297, 5758, 4771, 4093, 5989, 7427, 7910, 4345, 3738, 3592, 965, 0, 8023, 9022, 4333, 8017, 7533, 4383, 4802, 5776, 9331, 3636, 8492, 5891, 7308, 3719, 8132, 2455, 4633, 9284, 4166, 6213, 3241, 5845, 6774, 5095, 4848, 545, 5288};
    vector<int> daysAvailable = {1, 16, 4, 19, 25, 3, 11, 5, 13, 30, 6, 9, 23, 30, 24, 7, 6, 30, 0, 27, 6, 14, 29, 7, 16, 15, 27, 2, 1, 2, 26, 3, 16, 2, 6, 21, 13, 22, 2, 9, 18, 14, 19, 7, 8, 13};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 28818;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sales = {0, 3132, 0, 868, 9698, 2131, 2398, 3694, 4440, 7603, 951, 6140};
    vector<int> daysAvailable = {0, 28, 0, 12, 4, 15, 24, 23, 21, 15, 27, 28};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11953;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> sales = {6958, 8638, 9187, 5275, 1964, 3683, 9738, 7000, 8582, 7767, 5995, 6583, 7280, 5683, 8432, 9623, 9425, 1171, 7657, 4345, 5125, 4587, 8466, 3088, 9000, 9048, 8259, 5969, 3757, 668, 7075, 2922, 2014, 7423, 4186, 3154, 5186, 9617};
    vector<int> daysAvailable = {8, 3, 19, 17, 16, 7, 14, 28, 5, 23, 28, 22, 3, 8, 13, 6, 18, 30, 23, 25, 10, 18, 5, 5, 3, 25, 11, 12, 4, 7, 28, 30, 22, 18, 24, 24, 15, 16};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 20521;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> sales = {6511, 6964, 374};
    vector<int> daysAvailable = {26, 10, 18};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 9677;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> sales = {6338, 3528, 8488, 3319, 5380, 6285, 9676, 3391, 7933, 7003, 7784, 8944, 899, 0, 9904, 3959, 3986, 2460, 6530, 177, 7920, 2191, 1951, 7971, 8063, 375, 6495, 1688, 4548, 5350, 5391, 3367, 9008, 9000, 5937, 3005, 8426, 278, 4629, 4433, 3412, 7111, 0, 2187, 2329, 3092, 6219, 811};
    vector<int> daysAvailable = {5, 27, 18, 14, 25, 16, 25, 15, 11, 27, 30, 2, 19, 0, 29, 26, 29, 23, 30, 20, 18, 12, 30, 26, 1, 25, 4, 1, 2, 22, 5, 24, 28, 1, 22, 25, 16, 13, 10, 13, 25, 29, 0, 20, 11, 10, 23, 9};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 25180;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sales = {2503, 7474, 5245, 6454, 7707, 8030, 487, 5938, 532, 8407, 9715};
    vector<int> daysAvailable = {14, 28, 25, 5, 19, 23, 5, 4, 21, 23, 8};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16059;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sales = {1855};
    vector<int> daysAvailable = {8};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 6957;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> sales = {5219, 2217, 8815, 9408, 8738, 5189, 1056, 5650, 9792, 1765, 1829, 6760, 2669, 9731, 1191, 3443, 6511, 9622, 9550, 6560, 9392, 1443};
    vector<int> daysAvailable = {30, 16, 6, 22, 28, 5, 20, 11, 12, 14, 26, 15, 24, 19, 17, 10, 23, 5, 2, 9, 18, 24};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 20346;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> sales = {6911, 5986, 4783, 5395, 9089, 2667, 5971, 2838, 8604, 2880, 7440, 8776, 4227, 4619, 8458, 2312, 6343, 1463, 3167, 817, 8668, 1158, 8469, 7076, 6704, 1838, 3514, 826, 1371, 4168, 5664, 1000, 2117, 3394, 5765, 9534, 0, 5004, 9302, 6365, 2805, 7228, 7565, 8038, 0, 6930};
    vector<int> daysAvailable = {9, 9, 17, 23, 29, 6, 12, 25, 12, 29, 16, 29, 27, 24, 27, 10, 29, 4, 12, 11, 13, 27, 16, 10, 22, 16, 14, 25, 16, 29, 27, 28, 19, 25, 29, 2, 0, 30, 28, 20, 17, 12, 26, 18, 0, 2};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 14212;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> sales = {2048, 6519, 6229, 2027, 4756, 5249, 9788, 1147, 86, 1629, 0, 7822, 2373, 0};
    vector<int> daysAvailable = {6, 4, 15, 5, 26, 3, 21, 6, 9, 3, 0, 8, 4, 0};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 18763;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> sales = {5649, 7970, 631, 4875, 8785, 1222, 8170, 4931, 7875, 0, 9889, 2797, 1254, 5123, 4988, 7624, 1674, 3846};
    vector<int> daysAvailable = {11, 28, 21, 23, 19, 22, 16, 22, 22, 0, 14, 3, 1, 7, 13, 22, 2, 28};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 14083;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> sales = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> daysAvailable = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 99990;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> sales = {8843, 5373, 6946, 1975};
    vector<int> daysAvailable = {26, 29, 22, 27};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 6858;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> sales = {1, 1, 3};
    vector<int> daysAvailable = {28, 29, 27};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> sales = {75, 120, 0, 93};
    vector<int> daysAvailable = {24, 30, 0, 30};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> sales = {0, 0};
    vector<int> daysAvailable = {10, 10};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> sales = {5, 0};
    vector<int> daysAvailable = {2, 0};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> sales = {5};
    vector<int> daysAvailable = {15};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> sales = {8773};
    vector<int> daysAvailable = {16};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 16450;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> sales = {1115, 7264, 3206, 6868, 7301};
    vector<int> daysAvailable = {1, 3, 9, 4, 18};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 36091;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> sales = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> daysAvailable = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> sales = {100, 200, 121};
    vector<int> daysAvailable = {1, 30, 2};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1672;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> sales = {75, 120, 0, 93};
    vector<int> daysAvailable = {24, 30, 2, 30};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> sales = {10, 0};
    vector<int> daysAvailable = {30, 30};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> sales = {0};
    vector<int> daysAvailable = {1};
    Inventory* pObj = new Inventory();
    clock_t start = clock();
    int result = pObj->monthlyOrder(sales, daysAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4570&pm=1772
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
#include <cmath> 
 
using namespace std; 
 
class Inventory { 
  public: 
  int monthlyOrder(vector <int> a, vector <int> b) { 
    int mct = 0; 
    double tot = 0; 
    for( int i = 0; i < a.size(); i++ ) { 
      if( b[ i ] == 0 ) 
        continue; 
      tot += 30.0 * a[ i ] / b[ i ]; 
      mct++; 
    } 
    return (int)ceil( tot / mct ); 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/