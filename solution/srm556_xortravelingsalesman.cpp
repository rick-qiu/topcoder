/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12175
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

class XorTravelingSalesman {
public:
    int maxProfit(vector<int> cityValues, vector<string> roads);
};

int XorTravelingSalesman::maxProfit(vector<int> cityValues, vector<string> roads) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cityValues = {0, 7, 11, 5, 2};
    vector<string> roads = {"NYNYY", "YNYNN", "NYNNN", "YNNNN", "YNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cityValues = {556};
    vector<string> roads = {"N"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 556;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cityValues = {0, 4, 8, 32, 512};
    vector<string> roads = {"NYYYY", "YNNNN", "YNNNN", "YNNNN", "YNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 556;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cityValues = {175, 432, 0};
    vector<string> roads = {"NYY", "YNN", "YNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 432;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cityValues = {580, 37, 468, 800, 867, 543, 879, 44, 213, 979};
    vector<string> roads = {"NNYNNNNNNY", "NNNNYNNYNN", "YNNYNNNNNN", "NNYNNNNNNN", "NYNNNNNNYN", "NNNNNNYNNY", "NNNNNYNNYN", "NYNNNNNNNN", "NNNNYNYNNN", "YNNNNYNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cityValues = {737, 732, 434, 781, 230, 389, 859, 816, 931, 594, 128, 300, 490, 391, 55};
    vector<string> roads = {"NNNNYNNNNYNNNNN", "NNNNNNNNNNNNNYN", "NNNYNNYNNNNNNNN", "NNYNNNNYNNNNNNN", "YNNNNNNNNNNNNNY", "NNNNNNNYNNNNYNN", "NNYNNNNNYNNNNNN", "NNNYNYNNNNNNNNN", "NNNNNNYNNNYNNNN", "YNNNNNNNNNNNYNN", "NNNNNNNNYNNYNNN", "NNNNNNNNNNYNNNN", "NNNNNYNNNYNNNNN", "NYNNNNNNNNNNNNY", "NNNNYNNNNNNNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cityValues = {448, 892, 810, 745, 415, 599, 835, 831, 174, 984, 961, 68, 77, 848, 192, 491, 570, 320, 973, 240};
    vector<string> roads = {"NNNNNNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYY", "NNNNNNYNNNNNNNNNYNNN", "NNNNNYNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNY", "NNNYNNNNNNNYNNNNNNNN", "NNNNNNNNYYNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNN", "YNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNYNN", "NYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNYNNN", "NNNNNNNNYNNNNNNNNNYN", "NNNYNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNNNYNNNN", "NNYNNYNNNNNNNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cityValues = {763, 859, 29, 59, 416, 385, 572, 464, 321, 244, 858, 641, 216, 730, 777, 999, 290, 635, 677, 479, 68, 452, 71, 549, 193};
    vector<string> roads = {"NNNNNNNNNNNNNNNNYNYNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNYN", "NYNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNYNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNYYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNYNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cityValues = {389, 29, 999, 596, 261, 365, 616, 950, 41, 101, 813, 95, 527, 762, 330, 412, 406, 695, 1003, 979, 696, 968, 891, 64, 913, 959, 614, 492, 960, 105, 777, 530, 587, 753, 102, 448, 94, 718, 374, 135, 887, 116, 230, 231, 427, 872, 363, 313, 349, 342};
    vector<string> roads = {"NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cityValues = {8, 512, 1};
    vector<string> roads = {"NNY", "NNY", "YYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 521;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cityValues = {128, 64, 4, 64, 16, 32, 725, 261, 2, 64};
    vector<string> roads = {"NNNNYNNNYN", "NNNNNNYNNN", "NNNYNNYNNN", "NNYNNNNNNY", "YNNNNNNYNN", "NNNNNNNYNN", "NYYNNNNNNN", "NNNNYYNNNN", "YNNNNNNNNY", "NNNYNNNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1014;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cityValues = {512, 365, 775, 4, 64, 8, 16, 2, 32, 218, 512, 1, 64, 4, 878};
    vector<string> roads = {"NYNNNYNNNNNNNNN", "YNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNY", "NNNNNNNNNYNNYNN", "NNNNNNNNYNNYNNN", "YNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNY", "NNNNNYYNNNNNNNN", "NNYNYNNNNNNNNNN", "NNNYNNNNNNNNNYN", "NYNNNNNNNNNNNYN", "NNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNN", "NNNNNNNNNYYNNNN", "NNYNNNYNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cityValues = {161, 617, 16, 512, 64, 1, 295, 270, 32, 4, 128, 128, 2, 64, 813, 32, 865, 512, 16, 32};
    vector<string> roads = {"NNNNNNNNNNYNNNNNYNNN", "NNNNNNNYYNNNNNNNNNNN", "NNNYNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNNYYNNNNNN", "NYNNNNNNNNNNNNNNNYNN", "NYNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNYNNNNNNNYN", "YNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNYNN", "NNNNNYNNNNNYNNNNNNNN", "NNYNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNYNNNNNN", "NNNNNNNNNYNNYNNNNNNN", "NNNNNYNNNNNNNNNNYNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cityValues = {256, 8, 2, 2, 512, 512, 88, 8, 2, 512, 2, 512, 16, 4, 620, 2, 8, 32, 951, 556, 16, 64, 256, 376, 4};
    vector<string> roads = {"NNNNNNNNNNYNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNY", "NNNNNYNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNYNNN", "NNYNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNN", "NNNNYNYNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNYNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNYN", "YNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNNNNYNNNNNNNNNNNYNNNN", "NNNYNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNYNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cityValues = {64, 4, 94, 1, 512, 128, 271, 8, 512, 8, 969, 128, 128, 4, 256, 256, 256, 4, 917, 256, 691, 4, 256, 1, 766, 653, 2, 16, 512, 256, 2, 996, 644, 4, 512, 1, 512, 8, 32, 1, 992, 512, 128, 16, 2, 128, 16, 4, 336, 8};
    vector<string> roads = {"NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cityValues = {878, 85, 760, 579};
    vector<string> roads = {"NYNN", "YNYY", "NYNY", "NYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cityValues = {39, 519, 294, 188, 649, 457, 309, 503, 543, 726, 58};
    vector<string> roads = {"NNNNNNYNNYY", "NNNNNYYNYNY", "NNNNYNNNNYN", "NNNNNNYYNNY", "NNYNNYYNNNY", "NYNNYNYNYYY", "YYNYYYNNNNY", "NNNYNNNNNNN", "NYNNNYNNNNN", "YNYNNYNNNNY", "YYNYYYYNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cityValues = {852, 433, 279, 198, 964, 28, 823, 394, 732, 938, 803, 121, 320, 61, 624, 514};
    vector<string> roads = {"NYNNYNNNYNNNNNNN", "YNYNYNNNNNNNNNNN", "NYNNYNNYNNNYYYNN", "NNNNYNNNNYYYYNYN", "YYYYNNNNNNNNNYNY", "NNNNNNNNNNYYNYNN", "NNNNNNNNYNNNNYYY", "NNYNNNNNYYNYNNNN", "YNNNNNYYNYNNNNNN", "NNNYNNNYYNYYNYNN", "NNNYNYNNNYNYNNNY", "NNYYNYNYNYYNNYYN", "NNYYNNNNNNNNNYNY", "NNYNYYYNNYNYYNYY", "NNNYNNYNNNNYNYNY", "NNNNYNYNNNYNYYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cityValues = {679, 757, 254, 1004, 931, 201, 142, 1016, 3, 109, 1002, 888, 800, 262, 78, 18, 123, 565, 87, 575, 109};
    vector<string> roads = {"NNNNNNYYYYYNYNNYNYNNY", "NNNYNNYNNYNNNNYNYNNYN", "NNNNNYNNNNNNYNYNYNYNN", "NYNNNNNYNYNYNNNNNNNNN", "NNNNNYNNNYNNNYYNNNNYY", "NNYNYNYNNNNYNYNNNNYNN", "YYNNNYNNNYNNNNYYNNNNN", "YNNYNNNNNNNNYNNYNNNNY", "YNNNNNNNNNYNNYYNNNYYY", "YYNYYNYNNNNNNYNYYNNNN", "YNNNNNNNYNNYYNNYYNNYN", "NNNYNYNNNNYNNYNNNNNYN", "YNYNNNNYNNYNNNNYNNNNY", "NNNNYYNNYYNYNNNYNNNNN", "NYYNYNYNYNNNNNNNNYNYY", "YNNNNNYYNYYNYYNNNNNYY", "NYYNNNNNNYYNNNNNNNYNN", "YNNNNNNNNNNNNNYNNNNYN", "NNYNNYNNYNNNNNNNYNNYY", "NYNNYNNNYNYYNNYYNYYNN", "YNNNYNNYYNNNYNYYNNYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cityValues = {609, 703, 396, 704, 875, 832, 389, 263, 410, 550, 860, 852, 816, 797, 1000, 448, 298, 68, 286, 70, 856, 48, 210, 336, 238, 536};
    vector<string> roads = {"NNNNNYYYYNNNYYNYNNYNNYNNNN", "NNYYNNNNYNNYNYNYNYNNNNNNYY", "NYNNNNNYYNNNYNNNNNNNNNNNNN", "NYNNNNNYNYYYYNNNYYNYNNNNNN", "NNNNNYYNNYYYNNYNNNNNNNYYNN", "YNNNYNYNNNNNNYYNNNYNNYNNNY", "YNNNYYNNNNYNYYNNNNNYNNNNNN", "YNYYNNNNNNNNNNNYNNNNNYNYNN", "YYYNNNNNNNNNNNNNNNNYYNNNYY", "NNNYYNNNNNNYNYYNNNNYNYYNNN", "NNNYYNYNNNNYNNNNNYNNNYNNNN", "NYNYYNNNNYYNNNNYYNYYYNYNNY", "YNYYNNYNNNNNNYYNYNNYNNNNNN", "YYNNNYYNNYNNYNYYYYYNNNYYNN", "NNNNYYNNNYNNYYNNNNNYNNNNYY", "YYNNNNNYNNNYNYNNYNYYYNNYNN", "NNNYNNNNNNNYYYNYNYNYYNNYYY", "NYNYNNNNNNYNNYNNYNYNNNNYYY", "YNNNNYNNNNNYNYNYNYNNNNNNNY", "NNNYNNYNYYNYYNYYYNNNNYNNYY", "NNNNNNNNYNNYNNNYYNNNNYYNNN", "YNNNNYNYNYYNNNNNNNNYYNNNNN", "NNNNYNNNNYNYNYNNNNNNYNNNNN", "NNNNYNNYNNNNNYNYYYNNNNNNNN", "NYNNNNNNYNNNNNYNYYNYNNNNNN", "NYNNNYNNYNNYNNYNYYYYNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cityValues = {179, 223, 973, 971, 934, 263, 221, 843, 866, 396, 330, 118, 364, 951, 120, 114, 699, 172, 109, 387, 376, 777, 924, 466, 160, 394, 806, 778, 431, 411, 892, 610, 91, 523, 558, 1, 813, 779, 845, 656, 183, 151, 774, 195, 78, 937, 309, 777, 85, 418};
    vector<string> roads = {"NNNNNYNNNNNNYNNYNNYNNNYNNNNNNNNNNNNNNNYYNNNNNYNNYY", "NNYNNNNNNYYNNNNNNYYNNYYNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNYNYYNNYNNYNYYNYNNNYNNNNNNYNYNNNNNNYNYNYNNNNNYY", "NNNNNNNNNYNNNNNNNNNYNNYNYNNNYYYNNNNYNYNNNNYNYYNNYN", "NNYNNNNNNNNYYNNNYNNNYNNNNYNYNNNNNNNNYNNNYNNNNNNYYN", "YNNNNNYNYYNNYNNNNNNYNNYNNNNNYNNYNYNNNNNNNYYNNYYYYN", "NNYNNYNYYNYNNNNYNNYYYNNNYNYNNNYNNNNNNNNYYNNYNYNYNN", "NNYNNNYNYNNNNNNYNNNNNYYNYNYNNNNNNNYNYNNNNNNNNNYNYN", "NNNNNYYYNNNNNYNNNNNNNNYYNNNYYNNNNNNNNNNNNNNNNYNNNY", "NYNYNYNNNNNYNYNNYNNYNNYNNNNNNYNYNNNYYNYNYYNNYYNNNN", "NYYNNNYNNNNNYNYNNNNNNNNYYNNNNYYYNYNNNNNYNYNYNYYNNN", "NNNNYNNNNYNNYYYYYYNYNNNNYNNNYNYYNNYNYYNNNYNYNNNYNN", "YNNNYYNNNNYYNNNNNNNYNYNNYNNYNYYNYYYNNYYNNYNNNYYNNY", "NNYNNNNNYYNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNYNNNNNY", "NNNNNNNNNNYYNNNYNNYNNNNYYNYNNYNNNNNNYNNNNNYNNNNNNN", "YNYNNNYYNNNYNNYNYYYNNNNYYNYNNNNNYYNYNNNNNYNNNNNYYN", "NNYNYNNNNYNYNNNYNYNNNNYNNNNNNNNYNYNNNNNYNYNYNYYYYN", "NYNNNNNNNNNYNNNYYNNNYNYNNNNNYNYNYNYNNNNNNNNYNNNNNN", "YYYNNNYNNNNNNNYYNNNNNYNYNYYYYYNNNNNNNNNNNNNNNNNYNN", "NNNYNYYNNYNYYNNNNNNNNYNNNNYYNNYYNNNYNYYYYNYNYYNYNN", "NNNNYNYNNNNNNNNNNYNNNNNYNNYNNNYNYYYNNYNNNNNNNNNYNY", "NYNNNNNYNNNNYNNNNNYYNNNNNYNNNYNYYNYNNNNNNNYNYYYNNN", "YYYYNYNYYYNNNNNNYYNNNNNNNNNNNNNNNNYNNNNNNYNNNYNNYN", "NNNNNNNNYNYNNNYYNNYNYNNNYNNYNNNYNYYNYNYNNNNNYNNNYN", "NNNYNNYYNNYYYYYYNNNNNNNYNNYNNNYNNNNYYNNNYNYNNYNNYY", "NNNNYNNNNNNNNNNNNNYNNYNNNNNYNNNNNNNNYNNNYYNNYNNYNN", "NNNNNNYYNNNNNNYYNNYYYNNNYNNNYNYYNNNNNYNYNNNNNNYNYY", "NNNNYNNNYNNNYNNNNNYYNNNYNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNYNNYNNYNNNNNYYNNNNNNNYNNNNNNYNYNNYNNNNNNNNNYY", "NNYYNNNNNYYNYNYNNNYNNYNNNNNNNNNYYNYYNNYNNNYNYNYNNN", "NNNYNNYNNNYYYNNNNYNYYNNNYNYNNNNYNNNNNNYNNYNNNYNNNN", "NNYNNYNNNYYYNNNNYNNYNYNYNNYNNYYNYNNYYNNNNYNNNYNNNY", "NNNNNNNNNNNNYNNYNYNNYYNNNNNNNYNYNNNNNYYYYNNNNYNYNN", "NNNNNYNNNNYNYNNYYNNNYNNYNNNNYNNNNNNNYNYYYNYYYNYNNN", "NNNNNNNYNNNYYNNNNYNNYYYYNNNNNYNNNNNNNNYYYNNNYNNNNN", "NNNYNNNNNYNNNNNYNNNYNNNNYNNNYYNYNNNNYNNNNNNNYNNNNY", "NYNNYNNYNYNYNNYNNNNNNNNYYYNNNNNYNYNYNNYYYYNYNNNNNN", "NNNYNNNNNNNYYNNNNNNYYNNNNNYNNNNNYNNNNNYNNYYNNNYNNN", "YNYNNNNNNYNNYNNNNNNYNNNYNNNNYYYNYYYNYYNYNYYNNYNNNN", "YNNNNNYNNNYNNNNNYNNYNNNNNNYNNNNNYYYNYNYNYYNNNYYNNN", "NNYNYNYNNYNNNYNNNNNYNNNNYYNNNNNNYYYNYNNYNYYNYNNNNN", "NNNNNYNNNYYYYNNYYNNNNNYNNYNYNNYYNNNNYYYYYNNNNNNNNN", "NNYYNYNNNNNNNNYNNNNYNYNNYNNNNYNNNYNNNYYNYNNYNNNNNN", "NNNNNNYNNNYYNYNNYYNNNNNNNNNNNNNNNYNNYNNNNNYNNNNNNN", "NNNYNNNNNYNNNNNNNNNYNYNYNYNNNYNNNYYYNNNNYNNNNNNNYN", "YNNYNYYNYYYNYNNNYNNYNYYNYNNNNNYYYNNNNNYYNNNNNNNNNN", "NNNNNYNYNNYNYNNNYNNNNYNNNNYNNYNNNYNNNYNYNNNNNNNYNN", "NNNNYYYNNNNYNNNYYNYYYNNNNYNNNNNNYNNNNNNNNNNNNNYNYN", "YNYYYYNYNNNNNNNYYNNNNNYYYNYNYNNNNNNNNNNNNNNNYNNYNY", "YNYNNNNNYNNNYYNNNNNNYNNNYNYNYNNYNNNYNNNNNNNNNNNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cityValues = {527, 294, 32, 520};
    vector<string> roads = {"NYYN", "YNYN", "YYNY", "NNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 814;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cityValues = {109, 583, 256, 1, 4, 694, 32, 32, 2, 64, 682};
    vector<string> roads = {"NYNNYNYNNYN", "YNNNNNYNYYN", "NNNNNNNYYNY", "NNNNNYNYNYN", "YNNNNYNNNNN", "NNNYYNNYYYY", "YYNNNNNNNNN", "NNYYNYNNNNY", "NYYNNYNNNNN", "YYNYNYNNNNN", "NNYNNYNYNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cityValues = {16, 256, 32, 128, 16, 1, 195, 188, 256, 64, 32, 323, 818, 199, 690, 256};
    vector<string> roads = {"NYNNYNNNNNNYYYNY", "YNYNYNNYYYYNNNNY", "NYNNNNYYNNYNNNNY", "NNNNYNYNNNYNYNYY", "YYNYNNNNNNNYYNNN", "NNNNNNNNNNNNYNNN", "NNYYNNNNNNNNYYNN", "NYYNNNNNYYNYNNYY", "NYNNNNNYNNNNNYNN", "NYNNNNNYNNYYYNNN", "NYYYNNNNNYNYYYNN", "YNNNYNNYNYYNNNYN", "YNNYYYYNNYYNNNYN", "YNNNNNYNYNYNNNNY", "NNNYNNNYNNNYYNNN", "YYYYNNNYNNNNNYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cityValues = {128, 2, 261, 868, 655, 16, 16, 0, 512, 1, 256, 16, 269, 512, 16, 256, 338, 703, 256, 16, 1};
    vector<string> roads = {"NNNNYNNYYYNNYYYNYYYYN", "NNYNNNNNNNYNNYNYNYNYN", "NYNNNNYYNNNNYYNNNNYNN", "NNNNYNNYNNNYYNYNYNNNY", "YNNYNNNNNNYYYYNNNNNYY", "NNNNNNNNNNNYNYNYNNNNN", "NNYNNNNNNNNNNYNNNNNNN", "YNYYNNNNNYNNNYNNNNNNN", "YNNNNNNNNNNNNNYNNNYNN", "YNNNNNNYNNNYNNYNYNNNN", "NYNNYNNNNNNNNYNNYNNNN", "NNNYYYNNNYNNNNNNNYNYN", "YNYYYNNNNNNNNYNYNNNYN", "YYYNYYYYNNYNYNNNYYNNN", "YNNYNNNNYYNNNNNNNNYNN", "NYNNNYNNNNNNYNNNNYNNY", "YNNYNNNNNYYNNYNNNNNNN", "YYNNNNNNNNNYNYNYNNYYN", "YNYNNNNNYNNNNNYNNYNNN", "YYNNYNNNNNNYYNNNNYNNY", "NNNYYNNNNNNNNNNYNNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cityValues = {32, 16, 256, 64, 4, 4, 64, 16, 4, 8, 32, 909, 1, 269, 64, 1, 520, 128, 223, 453, 16, 8, 1, 512, 16, 8};
    vector<string> roads = {"NNNNNYYYYNYNNYNYNNNNYNNNYN", "NNYYYYNNNYNNYNNNNYYYNYNYNN", "NYNYYYNNNNNNNNNNNYNNNNYNNN", "NYYNNNNNNNNNNNNYYNYNNYNNNN", "NYYNNNNNYNNNYYNYNNYNNNYNNN", "YYYNNNYYNYNYNYNYNYNNYNYYNN", "YNNNNYNNNYNNNNNNNYNNYNYYNY", "YNNNNYNNNNNNNNNNNYYNYYYNNN", "YNNNYNNNNNYNYNNNNYNYYNNYYN", "NYNNNYYNNNNNNNNYNYYNNYYNNN", "YNNNNNNNYNNNYNNNNNYNNYNNNN", "NNNNNYNNNNNNYNNYNNNYNNNYYN", "NYNNYNNNYNYYNNNYYNYYNYNNNY", "YNNNYYNNNNNNNNYYNNNYYYNNYY", "NNNNNNNNNNNNNYNNNNYYNNNYYN", "YNNYYYNNNYNYYYNNYNNNNYNNNN", "NNNYNNNNNNNNYNNYNYNNYNNYNN", "NYYNNYYYYYNNNNNNYNNNYYNNNN", "NYNYYNNYNYYNYNYNNNNYYNNNNN", "NYNNNNNNYNNYYYYNNNYNYNNYNY", "YNNNNYYYYNNNNYNNYYYYNNYNNN", "NYNYNNNYNYYNYYNYNYNNNNNNNN", "NNYNYYYYNYNNNNNNNNNNYNNNYN", "NYNNNYYNYNNYNNYNYNNYNNNNYN", "YNNNNNNNYNNYNYYNNNNNNNYYNN", "NNNNNNYNNNNNYYNNNNNYNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cityValues = {32, 128, 890, 1, 32, 32, 256, 256, 2, 512, 1, 16, 4, 64, 248, 32, 1, 32, 256, 8, 4, 4, 128, 64, 64, 256, 64, 191, 487, 28, 32, 8, 4, 197, 8, 128, 8, 8, 861, 623, 16, 256, 8, 128, 64, 2, 16, 64, 256};
    vector<string> roads = {"NNYYNYNNYNYNNNNYNYNNNNNNYNNNNNNYNNYNYYNYNYNYNNNYN", "NNYYNNYNNNNNNNNYYYYNNNYYNYNYNYNNNNNNNNNYNNYNNNNNN", "YYNNYNNYNNNYYNNYNNNNNNYYNNNNNNYYYNYNNNNNNNYNYNNYN", "YYNNYNYYNNNNNNNNNNNYYNNYYNNNNYNNNNNNNYYYNNNYNNYYY", "NNYYNNNNNYNNYNNYYNYYNNYNNNYYNNNNNNNNNNYNNNYYNNNNY", "YNNNNNNNNNYNYNNYNNNNNNYYYNYYNNNYNNNNNNNNYNNNNNYNY", "NYNYNNNNNNNNYNNNNNNNNNYNNNNYNNNNYYNNYNYNNNNNNNNYY", "NNYYNNNNNYYNNNNNYYYNNNYNYNYNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNNNNYYYNYYNNNNNNN", "NNNNYNNYNNNNNNNYYNNNYNNYNNNNYYNNNNNNNNYNNNNNYNNNN", "YNNNNYNYNNNNNNNNNNYNNNNNYNYNNNYNYNYNNNNNNNNYNNNNN", "NNYNNNNNNNNNYNNNNNNNNNNNNNNNYNYYNNYNNNNNYNNNNYYNN", "NNYNYYYNNNNYNNNYNNNNNNNNYNNNNNNNYYNNNNYNYNNNYNYNN", "NNNNNNNNNNNNNNYNNNNNYYNNNNNNNNNYNYYNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNYNNNNNNYNNNNNNNNYNNNNNNNNNNNYNNYNY", "YYYNYYNNNYNNYNYNNNNYNNNNNNNYNNYYNNYNNNNNYYNYYYNNN", "NYNNYNNYNYNNNNNNNNNNNYNNNNNNNNNYNNYYYNNNNNNNYNYNN", "YYNNNNNYNNNNNNNNNNNNYYYNNNNNNNNYNNNNNNNNNNNYNNNNY", "NYNNYNNYNNYNNNNNNNNNNNYNYYNNYYNNNNNYNNNNYYNNNNNNY", "NNNYYNNNNNNNNNNYNNNNYYNYNNNNNYYNYNNYNYYYNNYNNNYYN", "NNNYNNNNNYNNNYNNNYNYNNYYNNYNYYNNNNYNNYNNYNNNNNNYN", "NNNNNNNNNNNNNYNNYYNYNNNYNYNNNNYYYNYYNNNYNYNNNNYYN", "NYYNYYYYYNNNNNYNNYYNYNNNNNNYNYNYNYNNYNNNNYNNNYNNN", "NYYYNYNNNYNNNNNNNNNYYYNNNNNNNYNNNYNNNYNNYYNNNNNNN", "YNNYNYNYNNYNYNNNNNYNNNNNNYNNYNYNYNYYNNNNYNYYNYNNY", "NYNNNNNNNNNNNNNNNNYNNYNNYNYNYNYNNNNNYNNYYNNNNYYYN", "NNNNYYNYYNYNNNNNNNNNYNNNNYNYNNNNNYYNNNNYNNNNYNNNN", "NYNNYYYNNNNNNNNYNNNNNNYNNNYNNNNYNYYNYNYYYNNYNYNYN", "NNNNNNNNNYNYNNNNNNYNYNNNYYNNNNNNNNNYNYNNNYNNYYNYN", "NYNYNNNNNYNNNNNNNNYYYNYYNNNNNNNYNYNNYNNNNNNYYYNNN", "NNYNNNNNNNYYNNNYNNNYNYNNYYNNNNNYNNNNNYYNNNNYNYNYY", "YNYNNYNNYNNYNYYYYYNNNYYNNNNYNYYNNNNNNNNNNNNYNYYNN", "NNYNNNYNNNYNYNNNNNNYNYNNYNNNNNNNNYNYNYNNYNNNNNYNN", "NNNNNNYNNNNNYYNNNNNNNNYYNNYYNYNNYNYNNNNNNNYYYNNNY", "YNYNNNNNNNYYNYNYYNNNYYNNYNYYNNNNNYNNNNNYNNNNNYYNY", "NNNNNNNNNNNNNNNNYNYYNYNNYNNNYNNNYNNNNNYYYNNNNNNNN", "YNNNNNYNYNNNNNNNYNNNNNYNNYNYNYNNNNNNNYYNNNYNNNNYN", "YNNYNNNNYNNNNNNNNNNYYNNYNNNNYNYNYNNNYNNYNYYYYNNNN", "NNNYYNYNYYNNYNNNNNNYNNNNNNNYNNYNNNNYYNNYYNNYYNYNN", "YYNYNNNNNNNNNNNNNNNYNYNNNYYYNNNNNNYYNYYNNYNYNNNNY", "NNNNNYNNYNNYYNNYNNYNYNNYYYNYNNNNYNNYNNYNNNNNNNNNY", "YNNNNNNNYNNNNNNYNNYNNYYYNNNNYNNNNNNNNYNYNNNNYYNNN", "NYYNYNNNNNNNNNNNNNNYNNNNYNNNNNNNNYNNYYNNNNNNNNYNY", "YNNYYNNYNNYNNNYYNYNNNNNNYNNYNYYYNYNNNYYYNNNNYNYNN", "NNYNNNNNNYNNYNNYYNNNNNNNNNYNYYNNNYNNNYYNNYNYNNNNY", "NNNNNNNNNNNYNNNYNNNNNNYNYYNYYYYYNNYNNNNNNYNNNNNNY", "NNNYNYNNNNNYYNYNYNNYNYNNNYNNNNNYYNYNNNYNNNYYNNNNN", "YNYYNNYNNNNNNNNNNNNYYYNNNYNYYNYNNNNNYNNNNNNNNNNNY", "NNNYYYYNNNNNNYYNNYYNNNNNYNNNNNYNNYYNNNNYYNYNYYNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cityValues = {912, 621, 441, 671, 756};
    vector<string> roads = {"NNNYN", "NNNYN", "NNNYN", "YYYNY", "NNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1019;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cityValues = {526, 423, 276, 260, 450, 780, 533, 672, 544, 852, 811, 753};
    vector<string> roads = {"NNYNNNNNNNNN", "NNYNNNNNNNNN", "YYNYYYYYYYYY", "NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNYNNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cityValues = {895, 887, 65, 627, 597, 591, 27, 874, 733, 477, 630, 361, 126, 150, 189, 159, 903};
    vector<string> roads = {"NYNNNNNNNNNNNNNNN", "YNYYYYYYYYYYYYYYY", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cityValues = {82, 625, 640, 934, 79, 381, 271, 205, 396, 460, 364, 275, 12, 859, 126, 807, 810, 409, 153, 106, 721, 221};
    vector<string> roads = {"NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "YYYYYYYYYYYYYYYYNYYYYY", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cityValues = {592, 374, 344, 916, 236, 785, 792, 428, 652, 481, 851, 9, 848, 946, 472, 816, 728, 845, 863, 740, 465, 91, 124, 545, 707, 807, 983};
    vector<string> roads = {"NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYYYYY", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cityValues = {865, 536, 590, 629, 404, 284, 285, 860, 764, 654, 32, 872, 481, 16, 989, 132, 962, 554, 599, 588, 103, 905, 954, 815, 863, 420, 187, 359, 693, 543, 575, 269, 55, 141, 139, 123, 425, 668, 983, 166, 55, 1015, 14, 536, 7, 1004, 669, 969, 534, 244};
    vector<string> roads = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cityValues = {85, 128, 32, 64};
    vector<string> roads = {"NYYY", "YNNN", "YNNN", "YNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cityValues = {32, 1, 2, 128, 945, 256, 963, 256, 256, 256, 1};
    vector<string> roads = {"NNNNNYNNNNN", "NNNNNYNNNNN", "NNNNNYNNNNN", "NNNNNYNNNNN", "NNNNNYNNNNN", "YYYYYNYYYYY", "NNNNNYNNNNN", "NNNNNYNNNNN", "NNNNNYNNNNN", "NNNNNYNNNNN", "NNNNNYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 995;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cityValues = {739, 4, 512, 221, 990, 32, 750, 937, 256, 2, 4, 64, 2, 499, 16, 512};
    vector<string> roads = {"NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "YYYYYYYYYYYYYYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cityValues = {256, 128, 8, 128, 256, 16, 2, 512, 128, 16, 64, 8, 103, 8, 512, 932, 1, 256, 395, 64, 128};
    vector<string> roads = {"NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "YYYYYYYYYYYYYYYNYYYYY", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cityValues = {32, 256, 128, 2, 16, 665, 575, 256, 256, 4, 963, 8, 256, 16, 8, 723, 16, 4, 128, 4, 512, 961, 2, 753, 256, 64};
    vector<string> roads = {"NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYY", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cityValues = {8, 8, 2, 1, 8, 8, 512, 128, 4, 512, 512, 1, 582, 1011, 4, 32, 8, 1, 821, 2, 2, 128, 16, 1, 2, 512, 659, 4, 60, 1, 2, 128, 64, 32, 512, 2, 256, 256, 256, 8, 512, 512, 241, 4, 1, 512, 1, 371, 512};
    vector<string> roads = {"NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cityValues = {965, 427, 985, 45, 1010, 52, 960, 736, 680, 774, 744, 919, 149, 431, 604, 481, 763, 975, 404, 371, 455, 400, 463, 703, 33, 471, 764, 92, 2, 267, 220, 779, 828, 181, 485, 680, 205, 390, 392, 60, 168, 932, 979, 318, 282, 559, 90, 677, 510, 797};
    vector<string> roads = {"NNNYNYNNYNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNYNNNNNNNNNY", "NNNYNNYNNNNYNYYNNNNYNNNNYNYNNNNNNNNNNNNNNNYYNYNYNN", "NNNNNNYNNNNYNNNNYNNNNNNNYYNNYNNNNYYNNNYNYNNNNNYNNN", "YYNNNNNNNNNNYNNYNYNNNYNYNNYNNNNNNNNNNYNNNNNYNNNNYN", "NNNNNNNYNNNNYNYNNYNNNNYNNNNYNNNNYNNNNNYNNNNNYNNNNN", "YNNNNNNNYYNNNNNNNNNNYNNNNNNNYNNNNYYNYNNNNNNNYNNNNN", "NYYNNNNYNNNNNYNYNNYNNYNYNNNNYNNNYNNYYNNNYNYNYYNNYN", "NNNNYNYNNNNNYYYNNYNNNNNYYNNYNNNNYNNNYYNNNNNNYNYNYN", "YNNNNYNNNYNNNNNNNNYNNYNYNNNNYYNYYYNNNNYYNYNNYNYNNN", "NNNNNYNNYNYNYYYNNYNNNNYYYNNYYNNNNNYYNNNYNYYYYNNNNY", "NNNNNNNNNYNNYNNNNNNNYYNNYNYNYNNYNNNYYNNNNNYNNNYYNN", "NYYNNNNNNNNNNNYNNYNYYNNNYYNNNYNYNNNNNYNNNYNNNNNNNN", "NNNYYNNYNYYNNNYNYYYYNNNNNNYYNYNNNNYNNNYYYNNNNNNNNN", "NYNNNNYYNYNNNNNNYYYNNNNNNNYNNNNYYNNNNNYYYNNNNNYNNN", "NYNNYNNYNYNYYNNNNNNNNYNNYYNYNNNYNNNNNNNNNNYNNYNYYY", "NNNYNNYNNNNNNNNNYNYYNNYNNNNNNYNNNNYNNNYNNNNNNNNNYN", "NNYNNNNNNNNNYYNYNNYNNNYNNNYNNNNNNNNNNYNNYNNYNNYNYY", "NNNYYNNYNYNYYYNNNNNNNNNNYNYNNYYNNNYNNNNNNNYYYNYNNY", "NNNNNNYNYNNNYYNYYNNNYNNNNNNNNNNNYYNNNYNNYYNNYNNNYN", "NYNNNNNNNNNYYNNYNNNNNYNNYYNYNNYNNYNNYNNNNYNNNNYNYN", "NNNNNYNNNNYYNNNNNNYNNNNNNNNNNNNYNYNYNYNNYNNNNNNYYN", "YNNYNNYNYNYNNNYNNNNYNNNNNNYNYNNNNNNNNNNNNNNNNYNYYN", "NNNNYNNNNYNNNNNYYNNNNNNNNNNNNYNNNNYYYYNYNNNNNNNNNN", "NNNYNNYYYYNNNNNNNNNNNNNNNNYNNYYNNNNYNYNNNYNNNNYNNY", "NYYNNNNYNYYYNNYNNYNYNNNNNNNNNYNNNNYNNYNNNNYNNNNNYN", "NNYNNNNNNNNYNNYNNNNYNNNNNNYNNNYNNNNYNNYNNNNYNNNNNN", "NYNYNNNNNNYNYYNNYYNNNYNYNYNNNYYNNNNNYNYNNNNNNNNNNN", "NNNNYNNYNYNNYNYNNNNYNNNNNNNNNYYYYNNNYNNNYYYYNYNNYY", "NNYNNYYNYYYNNNNNNNNNNYNNNNNNNNNNNNNNNYNYNNNNNNYYYN", "NNNNNNNNYNNYYNNYNYNNNNYYYNYYNNYNYNYNYNNNYYNYNNNNYN", "YNNNNNNNNNNNNNNNNYNYNNNYNYYYNYNNYNNNNNYNYNNYNNYNNN", "NNNNNNNNYNYYNYYNNNNNYNNNNNNYNNNNNYNNNNNNNNNNNNNYNN", "NNNNYNYYYNNNNYNNNNYNNNNNNNNYNYYNNNNNNNNYNNNNNYNNNN", "NNYNNYNNYNNNNNNNNNYYYNNNNNNNNNNYNNYNNNNNNNYNYNNYNY", "NNYNNYNNNYNNYNNYNYNNNNYNYNNNNYNNNYNNNNNNNYNNYNNNNN", "NNNNNNYNNYYNNNNNNNNNYNYYNYNNNNNNNNNNYNNNNYNYNNNNNY", "NNNNNYYYNNYNNNNNNNNYNNYNNNYYNYNNNNNYNYNYNNYYNYYYYN", "NNNYNNNYNNNYNNNNYNYNYNYYYNNNYNNNNNNNYNYNNNYNNNNNNN", "NNYNYNNNYNNNYYNYNNNNNNNNNYYNNNYNNNNNNYNYYNNNNYNNNY", "YNNNNNNNYYNNYYNNNNNNNNYNNNNNYNNNYNNNYNYNNNYYNYNYYN", "NNYNNNYNNNNNYYNNYNYNYNNNNNNYNYYNNNNNNNYNNYNYNYNNNN", "NNNNNNNNYYNYNNNNNNYYNNNYNNNYNYNNNNYYNNNNYNNNNNYNNN", "NYNNNNYNNYYNNNYNNYNNNNNNYNNYNNNNNYNNYYNYNNNYYNYYYN", "NYNYNNNNNYNNNNNNYYNNNNNNNYNYNYYNNNNYYNNYYNYNYYNYNN", "NNNNYYYYYYNNNNNNNYYNNNNNNNNNNNNNNYYNNNNNNNYYNYYYYY", "NYNNNNYNNNNNNNYNNNNNNYNNNNNYNNNNYNNNYNYYYNNYYNNNYN", "NNYNNNNYYNYNNYNNYYNYNNNYNNNNYNYNNNNNYNNNNYYNYNNYNN", "NYNNNNNNNNYNNNYNNNNNYYNNNNNNYNNYNYNNYNNYNNYYYNYNYN", "NNNYNNYYNNNNNNYYYNYYYYNNYNNYYYNNNNNNYNNYNNYNYYNYNN", "YNNNNNNNNYNNNNYNYYNNNNNYNNNYNNNNNYNYNNYNNNNNYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cityValues = {362, 756, 756, 680, 144, 725, 624, 69, 771, 399};
    vector<string> roads = {"NNNNNNNNNN", "NNYYYYYYYN", "NYNYYNYNNY", "NYYNNNYNNY", "NYYNNYNNYN", "NYNNYNNYYY", "NYYYNNNYNN", "NYNNNYYNNN", "NYNNYYNNNN", "NNYYNYNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cityValues = {565, 285, 115, 364, 227, 898, 567, 332, 106, 96, 1021, 542, 47, 160, 883, 224, 890, 314, 2, 1019};
    vector<string> roads = {"NYYNNNNYYNYNYNYYNYNY", "YNNNYYNYYYNNYYYNNYYN", "YNNYNYYYNNNYYNNYNNYY", "NNYNNYYYYNNNYYYNYNNY", "NYNNNYYYYYYNYYNNNYYY", "NYYYYNYNNNYYNYNNYNYN", "NNYYYYNNYNNNYNNYNYYN", "YYYYYNNNYNNYYNYYNNYN", "YYNYYNYYNNYNNYYYYYNN", "NYNNYNNNNNYYYYYNYYNY", "YNNNYYNNYYNNNNYNYNYN", "NNYNNYNYNYNNYYYYNNNN", "YYYYYNYYNYNYNYNYNNYY", "NYNYYYNNYYNYYNNYNYNN", "YYNYNNNYYYYYNNNYYNNY", "YNYNNNYYYNNYYYYNYNNN", "NNNYNYNNYYYNNNYYNYNN", "YYNNYNYNYYNNNYNNYNNY", "NYYNYYYYNNYNYNNNNNNN", "YNYYYNNNNYNNYNYNNYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cityValues = {268, 290, 691, 556, 905, 821, 540, 196, 354, 866, 551, 73, 644, 52, 787, 14, 566, 119, 637, 944, 584, 70, 608, 903, 387, 678, 129, 572, 333, 382};
    vector<string> roads = {"NNNYYYYNYYNNYYYNNYYNYNNNYNNYYN", "NNYNNNNYNNYNNYYNNYNYNYYNYYNNNN", "NYNNNYYNNYYNYYNYNYYYYNYNYNYNNY", "YNNNNYNNYNYNNYNNYYNYYNNYNNNNNY", "YNNNNYNYNNYYNNNNNYYYNNNNYNYNYN", "YNYYYNNYYNNNYYYNNYNNYYNNYYYNNY", "YNYNNNNNNNYYNNYNYYNYNYYYYNNNNY", "NYNNYYNNNYNNNNNYYNYYYYYYYYYNYN", "YNNYNYNNNYYYYNNYNNYYYYYYNNYYNY", "YNYNNNNYYNYNNNNYYYNNYNYNYYNNNY", "NYYYYNYNYYNYNNNNYNNNNYNNYYYYNY", "NNNNYNYNYNYNNNYYNYYYYNNYYYNYNY", "YNYNNYNNYNNNNYNYYNNYNNYNYYNYYN", "YYYYNYNNNNNNYNNNNYNYYYNNYYNYNY", "YYNNNYYNNNNYNNNYNYNYYNNYYNYNNN", "NNYNNNNYYYNYYNYNNNYNYYNYYYNNYY", "NNNYNNYYNYYNYNNNNYYYYNYNNNYYYY", "YYYYYYYNNYNYNYYNYNNYYNYNYYNNYN", "YNYNYNNYYNNYNNNYYNNNNNYNYNYNYN", "NYYYYNYYYNNYYYYNYYNNNYNNYNNNYN", "YNYYNYNYYYNYNYYYYYNNNYYNYNYNNY", "NYNNNYYYYNYNNYNYNNNYYNNYNYNYYY", "NYYNNNYYYYNNYNNNYYYNYNNNYYYYYY", "NNNYNNYYYNNYNNYYNNNNNYNNNYNYYY", "YYYNYYYYNYYYYYYYNYYYYNYNNNNNNY", "NYNNNYNYNYYYYYNYNYNNNYYYNNYNNN", "NNYNYYNYYNYNNNYNYNYNYNYNNYNYNN", "YNNNNNNNYNYYYYNNYNNNNYYYNNYNYY", "YNNNYNNYNNNNYNNYYYYYNYYYNNNYNY", "NNYYNYYNYYYYNYNYYNNNYYYYYNNYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cityValues = {964, 645, 259, 223, 117, 316, 464, 673, 541, 441, 975, 262, 621, 753, 528, 3, 632, 16, 555, 140, 408, 49, 231, 574, 121, 198, 247, 724, 511, 131, 584, 451, 1021, 275, 593, 894, 429, 311, 543, 678};
    vector<string> roads = {"NNYYNYNYNNYNNNYYNNNNNNNYNYYYNNYNYNNNNNNN", "NNNNYYYNYNNNYYNYYNYNNYNNYNNYNYNYYNYYYNNY", "YNNNYYNYYYNYNNYYNNYYYYNNNYYNYNYYNYNNNYYN", "YNNNNNYYYYYYYNYYYNYNNNYNYYNNNNNNYNNNYNYN", "NYYNNNYYNNYNNNNYNNNNNYYYYYYYYYNNYNNNNNNN", "YYYNNNYYYYNYYYYNYYNYNNNYYYNYNYYYNNYNYYYY", "NYNYYYNNNNYNNYYYYYYYNYYNYYYNNNYYYYNNYNNN", "YNYYYYNNNYYYYYYNYNYNYYNNYYYYYNNYYYYYYYNY", "NYYYNYNNNYNYNYYYNNYYNYYYNNYYNNYYYNNYNYNY", "NNYYNYNYYNNYNYNNNNNNNNYYNNNYYNNYNYNYNNYN", "YNNYYNYYNNNNNNNYYYYYNYYYYYNYNNNYNNYYNNNN", "NNYYNYNYYYNNNNNNNNYYYNNNYYNNYNYYYNYNNYYN", "NYNYNYNYNNNNNYYNNNYNNYNNYYNYNYNNNYNYYYYN", "NYNNNYYYYYNNYNYNYYYYYNYNNNNNYNNYNYNYNYNY", "YNYYNYYYYNNNYYNNYNYYNNNNYNYYNYNYNNYYNYNN", "YYYYYNYNYNYNNNNNYNNYNYNYNYNYNYNYYYNYYNNY", "NYNYNYYYNNYNNYYYNNYYYYNNNNYNNYYYYNYYNNYY", "NNNNNYYNNNYNNYNNNNYYYNYNNNNYNYYNYNNNYYYN", "NYYYNNYYYNYYYYYNYYNNYNNNYNYYYYYNNYNNYNYN", "NNYNNYYNYNYYNYYYYYNNNYNYNNYYNNNYNYNNNNNN", "NNYNNNNYNNNYNYNNYYYNNNNNYNYYNYYNYYYNYYYY", "NYYNYNYYYNYNYNNYYNNYNNNNYNNNNYYYYNNYNNYY", "NNNYYNYNYYYNNYNNNYNNNNNNNNNNYNYNYNYYYYYN", "YNNNYYNNYYYNNNNYNNNYNNNNNNYNNYNYYNNYNNNY", "NYNYYYYYNNYYYNYNNNYNYYNNNNYNYYYYYYYNNYNY", "YNYYYYYYNNYYYNNYNNNNNNNNNNNYNYNNYYYYNNYN", "YNYNYNYYYNNNNNYNYNYYYNNYYNNNNYYNYNYYNNYY", "YYNNYYNYYYYNYNYYNYYYYNNNNYNNYYYYNYYYYNYY", "NNYNYNNYNYNYNYNNNNYNNNYNYNNYNYNYNNNYYYYN", "NYNNYYNNNNNNYNYYYYYNYYNYYYYYYNNNYNNNNYNY", "YNYNNYYNYNNYNNNNYYYNYYYNYNYYNNNYYYYNYNNN", "NYYNNYYYYYYYNYYYYNNYNYNYYNNYYNYNYYNYYYYY", "YYNYYNYYYNNYNNNYYYNNYYYYYYYNNYYYNNYYYYNN", "NNYNNNYYNYNNYYNYNNYYYNNNYYNYNNYYNNYNYYYN", "NYNNNYNYNNYYNNYNYNNNYNYNYYYYNNYNYYNYYNNY", "NYNNNNNYYYYNYYYYYNNNNYYYNYYYYNNYYNYNNYNY", "NYNYNYYYNNNNYNNYNYYNYNYNNNNYYNYYYYYNNNNN", "NNYNNYNYYNNYYYYNNYNNYNYNYNNNYYNYYYNYNNYN", "NNYYNYNNNYNYYNNNYYYNYYYNNYYYYNNYNYNNNYNN", "NYNNNYNYYNNNNYNYYNNNYYNYYNYYNYNYNNYYNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cityValues = {183, 306, 432, 834, 657, 260, 354, 14, 220, 223, 369, 500, 135, 599, 771, 32, 1012, 318, 910, 70, 480, 543, 637, 941, 50, 423, 685, 185, 104, 607, 603, 287, 430, 12, 249, 63, 384, 452, 791, 747, 675, 446, 223, 250, 74, 994, 767, 9, 928, 679};
    vector<string> roads = {"NNYYNNNYNNYYYNYNYYYYYNYYNNYYNNYNNNYYYNNYNNYYYNNNNY", "NNNNNYNNNYYYYNYYNYYYNYNYYNYNNYYNNYYNYNNYYYNYNYYYNN", "YNNNNYNNNYNYYNNNNYYNYYNYNNYNYYYNNNNNNNYNYYYYNNNNYY", "YNNNNNNYNNNYNYYYYNYNNYYYYYYNNNNNNYYYNNYNNYNNNNNYYY", "NNNNNNYYYYYYYNYYNNYNNNNYNYYYYNYYYYYNYNYNYYNNNYNNNY", "NYYNNNNNNYYYYYNNNNYYYNYNNYNYNYYYNNYNNYNNYNNYYNNYNN", "NNNNYNNNYYNYNYNNNNYYNYYYNNYYNNNYYNNYNYYYNNYYYNNNYY", "YNNYYNNNYYNYNYNNNYNYNYNYYYYNYYNYYNNYYYYYNNYYNYNNYN", "NNNNYNYYNNYNNNYYNYYNNNYYYNNNYYNYYYYYNNNYYYYNNYNYYY", "NYYNYYYYNNYYNNYYNYYYYYNNYNNNYYNYYYNNNNNNNNYYYNYYYY", "YYNNYYNNYYNNNNNYNNNNYYNNYYYNNYYYNNNYYYYYNYNNYNNNYN", "YYYYYYYYNYNNYNNNYYNYNNNYYYYYYNYNNNYNYYYYNNYYYYNYNY", "YYYNYYNNNNNYNYYYNYYYNYNYNNYNYNYNYNNYYNYNYYNYYYYNNY", "NNNYNYYYNNNNYNNYNNYYNNYNYYNNYYYNYNNNYNYNNNNNNYYYYY", "YYNYYNNNYYNNYNNYNNYNNNNNNNYNYYYYYNNNYNNNYNYNYNYNNN", "NYNYYNNNYYYNYYYNYNYNYNNNYNYYYNNNYNYYNYYYYYNYNNNNNY", "YNNYNNNNNNNYNNNYNNYNNNNNNNYYYNNYNYNYNYYNNYYNNYNNYN", "YYYNNNNYYYNYYNNNNNYNYNYYYYNYYNYYYYNNNNNNNNNYNYYNYY", "YYYYYYYNYYNNYYYYYYNNNNYYYYNYYYYYYNYNNYNYYNYNNYYYNN", "YYNNNYYYNYNYYYNNNNNNYNNNNNNNNYNNNYYYYNYYYNYNNNYYNN", "YNYNNYNNNYYNNNNYNYNYNYNYNNYNNYNYNNNYNYYYYYNNNNYNNY", "NYYYNNYYNYYNYNNNNNNNYNYYNYNYNNNNYNYYYNNNYNYNYNNYYY", "YNNYNYYNYNNNNYNNNYYNNYNYNYNYYYYNNNNNNNYYYNNNNNNNNN", "YYYYYNYYYNNYYNNNNYYNYYYNYYNNNYNNYYNYNYNYNNNYYYYNYN", "NYNYNNNYYYYYNYNYNYYNNNNYNNYYNNNNYYYNNNNNNNYNNNYYNN", "NNNYYYNYNNYYNYNNNYYNNYYYNNNNNYNNYNNYYNNYNNYYYYNYYY", "YYYYYNYYNNYYYNYYYNNNYNNNYNNNYYNNYNNNYYYNNYYYNYNNNY", "YNNNYYYNNNNYNNNYYYYNNYYNYNNNYNYYNNYYNNYNYYNYYYYYNN", "NNYNYNNYYYNYYYYYYYYNNNYNNNYYNYYYNYYYNNYNYNYNYYNYYY", "NYYNNYNYYYYNNYYNNNYYYNYYNYYNYNYNYNYYNYNYNNYYNYYYNY", "YYYNYYNNNNYYYYYNNYYNNNYNNNNYYYNNNNYYYYNNNYNNYYYNYN", "NNNNYYYYYYYNNNYNYYYNYNNNNNNYYNNNNYNNYNYYNNYYNYYNYY", "NNNNYNYYYYNNYYYYNYYNNYNYYYYNNYNNNYNYNYNYYYYNNNNNNY", "NYNYYNNNYYNNNNNNYYNYNNNYYNNNYNNYYNYYNYYYYNNYYYYYNY", "YYNYYYNNYNNYNNNYNNYYNYNNYNNYYYYNNYNYNYNYNNYNYNYYNN", "YNNYNNYYYNYNYNNYYNNYYYNYNYNYYYYNYYYNYYYYNNNNNYNNNY", "YYNNYNNYNNYYYYYNNNNYNYNNNYYNNNYYNNNYNNYYYYNNNYYNNY", "NNNNNYYYNNYYNNNYYNYNYNNYNNYNNYYNYYYYNNNNNNNYNNYYNY", "NNYYYNYYNNYYYYNYYNNYYNYNNNYYYNNYNYNYYNNNYNYYYYNNYY", "YYNNNNYYYNYYNNNYNNYYYNYYNYNNNYNYYYYYYNNNNNYYNNNYYY", "NYYNYYNNYNNNYNYYNNYYYYYNNNNYYNNNYYNNYNYNNNYNYYYYYY", "NYYYYNNNYNYNYNNYYNNNYNNNNNYYNNYNYNNNYNNNNNYNNYNYYY", "YNYNNNYYYYNYNNYNYNYYNYNNYYYNYYNYYNYNNNYYYYNNNNNYYN", "YYYNNYYYNYNYYNNYNYNNNNNYNYYYNYNYNYNNNYYYNNNNNNNYYN", "YNNNNYYNNYYYYNYNNNNNNYNYNYNYYNYNNYYNNNYNYNNNNNYNNN", "NYNNYNNYYNNYYYNNYYYNNNNYNYYYYYYYNYNYYNYNYYNNNNYYNN", "NYNNNNNNNYNNYYYNNYYYYNNYYNNYNYYYNYYNYYNNYNNNYYNYNN", "NYNYNYNNYYNYNYNNNNYYNYNNYYNYYYNNNYYNNYNYYYYYNYYNYN", "NNYYNNYYYYYNNYNNYYNNNYNYNYNNYNYYNNNNNNYYYYYYNNNYNY", "YNYYYNYNYYNYYYNYNYNNYYNNNYYNYYNYYYNYYYYYYYNNNNNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cityValues = {1, 16, 2, 64, 32, 128, 256, 512, 64, 128};
    vector<string> roads = {"NYNNYYNYYN", "YNNYYNNYNY", "NNNNNYYYNY", "NYNNYYNYNN", "YYNYNYNYYY", "YNYYYNNYNY", "NNYNNNNYNY", "YYYYYYYNNN", "YNNNYNNNNN", "NYYNYYYNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1011;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cityValues = {512, 64, 128, 512, 1, 512, 16, 512, 16, 8, 8, 1, 32, 16, 1, 1, 128, 16, 2, 128};
    vector<string> roads = {"NYYNNYYNNYNYNNYYNNNY", "YNNNYYNNYYNNNYNYNYYN", "YNNNNYYNNNYNYYNNYYNY", "NNNNYYNYYNYYNNNNNNYN", "NYNYNNNNYYNYNYYNNYNY", "YYYYNNYYYYYNNYNYYNNY", "YNYNNYNNYYNNNNNYYYNN", "NNNYNYNNYNNNNNYNNYYN", "NYNYYYYYNYNYYNYNYNYY", "YYNNYYYNYNYYYNNNYYNN", "NNYYNYNNNYNNNYNNYYNN", "YNNYYNNNYYNNYNNYYYYY", "NNYNNNNNYYNYNYNNYNNN", "NYYNYYNNNNYNYNNNYNYN", "YNNNYNNYYNNNNNNNNYYN", "YYNNNYYNNNNYNNNNYNYN", "NNYNNYYNYYYYYYNYNNNN", "NYYNYNYYNYYYNNYNNNNY", "NYNYNNNYYNNYNYYYNNNN", "YNYNYYNNYNNYNNNNNYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 763;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cityValues = {4, 512, 256, 512, 32, 1, 59, 32, 128, 449, 128, 128, 512, 502, 754, 2, 8, 8, 512, 8, 645, 1, 2, 619, 8, 64, 64, 617, 116, 783};
    vector<string> roads = {"NNNYYYNYYNYYNNNNNNNNNYNYYNYNYY", "NNYYNYNNNYNNYNNYYNYYYNNNNNNNNY", "NYNNNNYNYYYNYYNNNYYYYNNNYNNNNN", "YYNNYNNYYNNNYNYYNNNYNYNNNYYNNN", "YNNYNYNNYNNYYYNYYNYNNYNYNNNNNY", "YYNNYNYNNNYNNYNNNYYNYNYNNYYNNN", "NNYNNYNYNYYYYYYYNYNNNYYYYYYNNN", "YNNYNNYNNNNNYYYYNYYYYNYNNYNNNY", "YNYYYNNNNNYYNNNYYNYYYYYNYYYYNN", "NYYNNNYNNNNYYYNNNYNYNYNYYYNNNN", "YNYNNYYNYNNNNYYYNNNYNNNYNYYYNN", "YNNNYNYNYYNNYYNYNYYYYYYNNYNNNN", "NYYYYNYYNYNYNNYYYNYYNYYYNYYNYY", "NNYNYYYYNYYYNNNNNYYNYYYYNNNNNN", "NNNYNNYYNNYNYNNNYNNNNNYYYNYNYN", "NYNYYNYYYNYYYNNNYNNNYYYYYNNYYN", "NYNNYNNNYNNNYNYYNNNNYNYNNNNYYY", "NNYNNYYYNYNYNYNNNNNNNNYNNNYYYY", "NYYNYYNYYNNYYYNNNNNNYNNYNNYNYN", "NYYYNNNYYYYYYNNNNNNNYYNYNNNNNN", "NYYNNYNYYNNYNYNYYNYYNNYNNYYNNN", "YNNYYNYNYYNYYYNYNNNYNNNNYYNNYY", "NNNNNYYYYNNYYYYYYYNNYNNNNYNYNN", "YNNNYNYNNYYNYYYYNNYYNNNNYYYYYY", "YNYNNNYNYYNNNNYYNNNNNYNYNNNNYN", "NNNYNYYYYYYYYNNNNNNNYYYYNNYNNY", "YNNYNYYNYNYNYNYNNYYNYNNYNYNYNN", "NNNNNNNNYNYNNNNYYYNNNNYYNNYNNY", "YNNNNNNNNNNNYNYYYYYNNYNYYNNNNY", "YYNNYNNYNNNNYNNNYYNNNYNYNYNYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cityValues = {4, 32, 64, 8, 8, 1, 32, 32, 4, 8, 512, 461, 64, 23, 256, 1, 256, 102, 4, 512, 2, 64, 64, 823, 16, 8, 32, 4, 915, 16, 16, 4, 512, 1, 128, 16, 97, 4, 512, 16};
    vector<string> roads = {"NNYNNYYNYYYNNYNNYNYYYYNNYYYNYYNYNYNNYYNY", "NNNNYNYYYNYNNYNNNYYYYYYNYNNYNNYYYNNYYNYY", "YNNNYYYYYYYNNNNNYNYYYYNYYYYYYNNNNNYYNNYN", "NNNNYNNNYNNNNYNNYNNYNNYNNYYYYNNYYYYNNYYY", "NYYYNNNYNYNYYYYYNYYYNYYNNYYYNNNNYNNYNNYY", "YNYNNNYYYYYYNNYYYNNNYNYNNYYNNYNNNYNYNNNY", "YYYNNYNYYNNYYNNNNNYYYNYYNNNYNYYYYYNNYYNY", "NYYNYYYNNNNYYNYNYYNNNNYYNNYNYNYYNYNYNNYN", "YYYYNYYNNYYNNNYNYNYYYNNYNNNYYYNYYYNYNNYY", "YNYNYYNNYNYYNNNNYNYYNYYNNYNNNYYYNNYNNYNN", "YYYNNYNNYYNNNNNNYNNNYYNNYNNYNYYNYYYNNYNY", "NNNNYYYYNYNNNNYNNYNYNYYNYNYYYNYNNYYYYYNN", "NNNNYNYYNNNNNYYNNYYNYNNYNYNYYYYYYYNYNYYN", "YYNYYNNNNNNNYNNNNNNYNNNNNNNYYNYYNYYYNNNN", "NNNNYYNYYNNYYNNYYNNNNYNYNNYYYNYNNNNNNYNY", "NNNNYYNNNNNNNNYNNNNYNNYNYNYYNNYNYNYYYYNN", "YNYYNYNYYYYNNNYNNNYYNYNYYYYNNYYNYYYYNNYN", "NYNNYNNYNNNYYNNNNNYYNYNYNYYYNYYYYYYYNYYY", "YYYNYNYNYYNNYNNNYYNYYYYYNYNNNYNYYYNNYYYN", "YYYYYNYNYYNYNYNYYYYNNYYNYYYYNYNNYNNYNNNN", "YYYNNYYNYNYNYNNNNNYNNYNYYYYNYYNNYNYNNNYN", "YYYNYNNNNYYYNNYNYYYYYNNNNYNYYYYNYYYNNYYN", "NYNYYYYYNYNYNNNYNNYYNNNNNYNNNYNNYNYNNNNY", "NNYNNNYYYNNNYNYNYYYNYNNNYYNYNNYNYYYYYYYY", "YYYNNNNNNNYYNNNYYNNYYNNYNNYNNNYYNYNYNYNY", "YNYYYYNNNYNNYNNNYYYYYYYYNNNYYYNYNNYYYYYY", "YNYYYYNYNNNYNNYYYYNYYNNNYNNYYYNNNYYNNYNN", "NYYYYNYNYNYYYYYYNYNYNYNYNYYNYNNYNYYYNNNN", "YNYYNNNYYNNYYYYNNNNNYYNNNYYYNNYYNNYNYNNY", "YNNNNYYNYYYNYNNNYYYYYYYNNYYNNNNNNYNYNNYN", "NYNNNNYYNYYYYYYYYYNNNYNYYNNNYNNNNNNNNNYN", "YYNYNNYYYYNNYYNNNYYNNNNNYYNYYNNNNYYNNYNN", "NYNYYNYNYNYNYNNYYYYYYYYYNNNNNNNNNYYNYNNY", "YNNYNYYYYNYYYYNNYYYNNYNYYNYYNYNYYNYNYNYN", "NNYYNNNNNYYYNYNYYYNNYYYYNYYYYNNYYYNNYYYY", "NYYNYYNYYNNYYYNYYYNYNNNYYYNYNYNNNNNNNYYN", "YYNNNNYNNNNYNNNYNNYNNNNYNYNNYNNNYYYNNYYY", "YNNYNNYNNYYYYNYYNYYNNYNYYYYNNNNYNNYYYNNN", "NYYYYNNYYNNNYNNNYYYNYYNYNYNNNYYNNYYYYNNN", "YYNYYYYNYNYNNNYNNYNNNNYYYYNNYNNNYNYNYNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cityValues = {787, 16, 8, 567, 4, 32, 128, 2, 4, 168, 64, 806, 8, 2, 367, 887, 1, 16, 32, 164, 64, 535, 32, 1, 256, 512, 935, 2, 512, 503, 256, 1, 440, 16, 222, 512, 512, 509, 8, 16, 32, 2, 16, 512, 16, 767, 1, 808, 128, 128};
    vector<string> roads = {"NYNYYYNYNYYNNNYYNNNYNYYYNNYNNYYYNNYNNYYNNYNNYNYNYN", "YNYNNNYYYYYNYYYYNNYNYNNNYYYYYYNYNNYYNNYNNYYNYYYYYY", "NYNNNNNNYYNNYYNYYYNNYNYNYYYYYYNNNYNNYYYYYNYNYNNYNN", "YNNNYNNNNYYYNYNNYNYYYYYNYYYYNYNNNNYNNYYYNNNNNNYYYN", "YNNYNNYNYNYYNNYYYYYNYYYYNYYNYNYNNNYYNNNYNNYYYNYNYN", "YNNNNNNNNNYYNYYYYNNYYYNNNYNYNNYNNNYNYYYYNNNYNNYYNY", "NYNNYNNNYYYNNNYYNNNYNYNYNNNNNYYYYYNNNNYNNYNYYNYYYY", "YYNNNNNNYNNYYNYNNYYYYYYNYYNYYNYYYYYNNYYYNNNYYYNYNN", "NYYNYNYYNYNYNNNYNNYYYYNYYNYNYNYYYNNNNNYYNNNYNNNNYN", "YYYYNNYNYNYNYNYYYYYNNYNNNYYNYYYNNNYNNNNYYNNYYNNNYY", "YYNYYYYNNYNNNNYNNNNNNNNNYNNNYYNNYNYNNYNYYYYNYYYYYN", "NNNYYYNYYNNNYYNYYYNYNYNNYNNNNYNYYYNNYNYNYNNNYYYNYN", "NYYNNNNYNYNYNYYYYNNYNNNYNYYNYNNYYYNNNNNNYYNYYYYNYY", "NYYYNYNNNNNYYNYYYYNNNYYYNNYYYNYNYNNYYNYYNNYYYYNYNY", "YYNNYYYYNYYNYYNYYYNNNNYNNNYNNNYYNNYYYNNYNNNNNYYYYY", "YYYNYYYNYYNYYYYNNNNNYYYYNNYNNNNNYYNYNYNYYYYYYNYNYY", "NNYYYYNNNYNYYYYNNYYNNYYNYYNNNNYNYYYNYYYNNNNYNYNNNN", "NNYNYNNYNYNYNYYNYNNNNNYNNYYYNNYNNNYYNYNYYYNYNNNNYN", "NYNYYNNYYYNNNNNNYNNNNNNYNNNNNNNYNYYNYYNYNYNNNNYYNN", "YNNYNYYYYNNYYNNNNNNNNNNYNYNYNNNYNNYYNYNYYNNNNYNNNY", "NYYYYYNYYNNNNNNYNNNNNYYNNYYNNNYNYNYNYYYNNNNNYYNYNN", "YNNYYYYYYYNYNYNYYNNNYNYNNNYNYNNNNYNNYNYYYNNNNYYNYY", "YNYYYNNYNNNNNYYYYYNNYYNNNYYNNNNYNNYYYYYNYNYNNYYNYN", "YNNNYNYNYNNNYYNYNNYYNNNNYYYYYNYYNYYNNNYNNNNYNYYYYY", "NYYYNNNYYNYYNNNNYNNNNNNYNYYNNYYYYNNYYNYYNNYNNNYNYN", "NYYYYYNYNYNNYNNNYYNYYNYYYNNNNYYNNNNYYYYYNNNNYYNYYY", "YYYYYNNNYYNNYYYYNYNNYYYYYNNNYYNNNNNYNYYYNYNNNYNYYY", "NYYYNYNYNNNNNYNNNYNYNNNYNNNNYYNYNYNYNYYYNNNNNYNNNN", "NYYNYNNYYYYNYYNNNNNNNYNYNNYYNYNNYNNNYYNYYYYYYYNNNN", "YYYYNNYNNYYYNNNNNNNNNNNNYYYYYNNNNNYNNYYNYYYNNNNNNN", "YNNNYYYYYYNNNYYNYYNNYNNYYYNNNNNYNNNNNNNNNYNYYNNNYY", "YYNNNNYYYNNYYNYNNNYYNNYYYNNYNNYNYYYYYNNYNNYYNYYNYN", "NNNNNNYYYNYYYYNYYNNNYNNNYNNNYNNYNNNYNNYYNYNYYNYNNY", "NNYNNNYYNNNYYNNYYNYNNYNYNNNYNNNYNNNNYYYYNNNYYNNYYY", "YYNYYYNYNYYNNNYNYYYYYNYYNNNNNYNYNNNYNYYNNYYNNNNYNN", "NYNNYNNNNNNNNYYYNYNYNNYNYYYYNNNYYNYNYNYNNYYNNNYNYN", "NNYNNYNNNNNYNYYNYNYNYYYNYYNNYNNYNYNYNYYYNNNNYNYYYY", "YNYYNYNYNNYNNNNYYYYYYNYNNYYYYYNNNYYNYNYYNNYYYNYNNN", "YYYYNYYYYNNYNYNNYNNNYYYYYYYYNYNNYYYYYYNNNYNNYYYYYN", "NNYYYYNYYYYNNYYYNYYYNYNNYYYYYNNYYYNNYYNNYNNYNYNYNY", "NNYNNNNNNYYYYNNYNYNYNYYNNNNNYYNNNNNNNNNYNNNNYYYNYY", "YYNNNNYNNNYNYNNYNYYNNNNNNNYNYYYNYNYYNNYNNNYNNYNNNN", "NYYNYNNNNNYNNYNYNNNNNNYNYNNNYYNYNNYYNYNNNYNYYNYNYN", "NNNNYYYYYYNNYYNYYYNNNNNYNNNNYNYYYYNNNYNYNNYNNNNNNN", "YYYNYNYYNYYYYYNYNNNNYNNNNYNNYNYNYYNNYYYNYNYNNNYYNY", "NYNNNNNYNNYYYYYNYNNYYYYYNYYYYNNYNNNNNNYYYYNNNNNYYY", "YYNYYYYNNNYYYNYYNNYNNYYYYNNNNNNYYNNYYYYNYNYNYNNYYN", "NYYYNYYYNNYNNYYNNNYNYNNYNYYNNNNNNYYNYNYYNNNNYYYNNY", "YYNYYNYNYYYYYNYYNYNNNYYYYYYNNNYYNYNYYNYNYNYNNYYNNY", "NYNNNYYNNYNNYYYYNNNYNYNYNYYNNNYNYYNNYNNYYNNNYYNYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cityValues = {37, 1, 19, 64, 42, 41, 64, 64, 54, 16, 256, 36, 64, 2, 4, 2, 62, 29, 58, 64, 1, 32, 16, 256, 17, 2, 17, 4, 1, 64, 21, 8, 256, 63, 3, 1, 43, 15, 8, 39, 41, 8, 16, 8, 16, 256, 64, 512, 45, 64};
    vector<string> roads = {"NNNNNNYYYYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNYYNNNYYNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNYNNNNNNNNYNNYNNNYYNNNYNYNNNNYNNNNNNNNYNNNNNN", "YNYNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNYNN", "YNNYNNYNYNYYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNYNYNNNNNNNNNNYYYNNNNNNNYNNNY", "YNNNNNNNNNNNNNNNNYNYNYNYYNNNYNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNYNNNNNNNNYYNNNYYNNNNYNYYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNNYYNNNYNNYYNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNYNNNNNYNNNNYNNNNNNNNNNYNYNNYNYNNNYNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNYNYNNYYNNNNNYNNNNNNNNNYNNYNNYNNNN", "NNNNYYYNNNNNNYNNNYYNNYNNNYNYYNNNNNNNNNYYYNNYNNYNYN", "NYNNNNNNNNNNYNNNNNNNYNNNYYNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYYNNNNNNYNNNYNNNNNYNNYNYYNNNNYNNNYNN", "NNNYYYNNNNNNNNNYNNNNNYNYNYNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNYNNNNNNYNYYYNNNNNNNNNNNYNNYNNNNNYNNN", "NNNNYNNNNNNYNNNNYNNNNYNNNYYNNNYNNNYNNNNNNNNNNYNYNY", "NNNNNNNNNYYNYNNYNNYYYNYNNNNNNNNYNYNNNNNNNNNNYNNNNN", "NNNNNYNNYNYNNNYNNYNNNYNNNNNNNNNNNYNNYNYNNYNNNNNNNN", "NNNNNYNNNYNNNNYNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NYNNNNNNYYNYNNNNYNNYNNNNNNNNNNYNNNNNNYNNNYNNYNNNNN", "NNNNNNNNNNNNNYNYYNYYYNNNNNNYNNNNNNNNNNNYYNNNNNNNYN", "NNNNNNNNNNYNNNNNNYNNYNNNNNNNNYNNNNYNNNNNNYYNNNNYNN", "NNNNYYNNNNYYNNNYNNNNNNNNNYNNNYYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNNYNNNNNNNNNNNNNYNNNNYNNNNNNNNYNNYNYN", "NNNNNYNNNNNNNNYNYNNNNNNNNNYYYNNNNNNNNYNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNYNNNNYNNNNNNNNNYNNNYNNNYYNNNNNYNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNYYNNNNNNNYNNNNNNNYNNYNNNNNNNN", "NNNNNYNYNNYNYNNNYNYNYNNNNNYNYNNNNNNYYNYNYNYNNNNNYN", "YNNNNNYNYNYNNNNNNYNNNNNNNNNNNNNNYNYNNNNNYNNYNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNYNYNNNNNNYNNNNNNYN", "NNNNNNNYYNNNYNNNNYNYNNNNYNNNNYNNNNNNNNNNNYNNNNYNNN", "NNNNYNNNNNNNNYNYNYNNNNYNNNNNNNNNNYYNNNNYNNNNNNNNNY", "NNNNNNNNNNNNYNYYNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNYYNN", "NNNNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNYYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNYNYNNNNNNYNNYYNNNNNNNNNNNN", "NYNNNNNNNNNYNNYNNNNNNNNYNNYNNYNYYNYNNNNNNNNNYNNNNN", "NNNNNYNNNNNNYNNYNYNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNY", "NNNNNNYNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNYNNYNNYNNNY", "NNNNNNNNYNNNYNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNYNNNYNNNYNNNNYNNNYNNNNYNYNNNNNNNNNN", "NYNNNNYNNNNNNYNNNYNNYNNNNNYNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNYNNNNNNNNNYNNNNNNNYNNNNYYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 895;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cityValues = {0, 7, 11, 5, 2};
    vector<string> roads = {"NYNYY", "YNYNN", "NYNNN", "YNNNN", "YNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cityValues = {728, 807, 991, 57, 985};
    vector<string> roads = {"NNYNY", "NNNNY", "YNNNY", "NNNNY", "YYYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cityValues = {50, 1, 19, 64, 42, 41, 64, 64, 54, 16, 256, 36, 64, 2, 4, 2, 62, 29, 58, 64, 1, 32, 16, 256, 17, 2, 17, 4, 1, 64, 21, 8, 256, 63, 3, 1, 43, 15, 8, 39, 41, 8, 16, 8, 16, 256, 64, 512, 45, 64};
    vector<string> roads = {"NNNNNNYYYYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNYYNNNYYNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNYNNNNNNNNYNNYNNNYYNNNYNYNNNNYNNNNNNNNYNNNNNN", "YNYNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNYNN", "YNNYNNYNYNYYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNYNYNNNNNNNNNNYYYNNNNNNNYNNNY", "YNNNNNNNNNNNNNNNNYNYNYNYYNNNYNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNYNNNNNNNNYYNNNYYNNNNYNYYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNNYYNNNYNNYYNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNYNNNNNYNNNNYNNNNNNNNNNYNYNNYNYNNNYNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNYNYNNYYNNNNNYNNNNNNNNNYNNYNNYNNNN", "NNNNYYYNNNNNNYNNNYYNNYNNNYNYYNNNNNNNNNYYYNNYNNYNYN", "NYNNNNNNNNNNYNNNNNNNYNNNYYNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYYNNNNNNYNNNYNNNNNYNNYNYYNNNNYNNNYNN", "NNNYYYNNNNNNNNNYNNNNNYNYNYNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNYNNNNNNYNYYYNNNNNNNNNNNYNNYNNNNNYNNN", "NNNNYNNNNNNYNNNNYNNNNYNNNYYNNNYNNNYNNNNNNNNNNYNYNY", "NNNNNNNNNYYNYNNYNNYYYNYNNNNNNNNYNYNNNNNNNNNNYNNNNN", "NNNNNYNNYNYNNNYNNYNNNYNNNNNNNNNNNYNNYNYNNYNNNNNNNN", "NNNNNYNNNYNNNNYNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NYNNNNNNYYNYNNNNYNNYNNNNNNNNNNYNNNNNNYNNNYNNYNNNNN", "NNNNNNNNNNNNNYNYYNYYYNNNNNNYNNNNNNNNNNNYYNNNNNNNYN", "NNNNNNNNNNYNNNNNNYNNYNNNNNNNNYNNNNYNNNNNNYYNNNNYNN", "NNNNYYNNNNYYNNNYNNNNNNNNNYNNNYYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNNYNNNNNNNNNNNNNYNNNNYNNNNNNNNYNNYNYN", "NNNNNYNNNNNNNNYNYNNNNNNNNNYYYNNNNNNNNYNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNYNNNNYNNNNNNNNNYNNNYNNNYYNNNNNYNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNYYNNNNNNNYNNNNNNNYNNYNNNNNNNN", "NNNNNYNYNNYNYNNNYNYNYNNNNNYNYNNNNNNYYNYNYNYNNNNNYN", "YNNNNNYNYNYNNNNNNYNNNNNNNNNNNNNNYNYNNNNNYNNYNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNYNYNNNNNNYNNNNNNYN", "NNNNNNNYYNNNYNNNNYNYNNNNYNNNNYNNNNNNNNNNNYNNNNYNNN", "NNNNYNNNNNNNNYNYNYNNNNYNNNNNNNNNNYYNNNNYNNNNNNNNNY", "NNNNNNNNNNNNYNYYNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNYYNN", "NNNNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNYYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNYNYNNNNNNYNNYYNNNNNNNNNNNN", "NYNNNNNNNNNYNNYNNNNNNNNYNNYNNYNYYNYNNNNNNNNNYNNNNN", "NNNNNYNNNNNNYNNYNYNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNY", "NNNNNNYNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNYNNYNNYNNNY", "NNNNNNNNYNNNYNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNYNNNYNNNYNNNNYNNNYNNNNYNYNNNNNNNNNN", "NYNNNNYNNNNNNYNNNYNNYNNNNNYNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNYNNNNNNNNNYNNNNNNNYNNNNYYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 895;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cityValues = {0, 1023};
    vector<string> roads = {"NY", "YN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cityValues = {8, 1};
    vector<string> roads = {"NN", "NN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cityValues = {0, 3, 255};
    vector<string> roads = {"NNN", "NNY", "NYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cityValues = {0, 1, 2, 4, 8, 16, 32};
    vector<string> roads = {"NYNNYNN", "YNYNNNN", "NYNYNNN", "NNYNNNN", "YNNNNYN", "NNNNYNY", "NNNNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cityValues = {1};
    vector<string> roads = {"N"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cityValues = {666, 13, 78, 548, 511};
    vector<string> roads = {"NYYYY", "YNNNN", "YNNNN", "YNNNN", "YNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 987;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cityValues = {1, 512, 1};
    vector<string> roads = {"NNY", "NNY", "YYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 513;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cityValues = {4, 1, 3};
    vector<string> roads = {"NYN", "YNY", "NYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
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

int test62() {
    vector<int> cityValues = {1, 4, 2, 2, 2};
    vector<string> roads = {"NNYNN", "NNYYN", "YYNNN", "NYNNY", "NNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cityValues = {0, 0, 5};
    vector<string> roads = {"NYN", "YNY", "NYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cityValues = {1, 2};
    vector<string> roads = {"NN", "NN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cityValues = {2, 1, 5};
    vector<string> roads = {"NYY", "YNY", "YYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cityValues = {4, 1, 4, 6};
    vector<string> roads = {"NYYN", "YNYY", "YYNN", "NYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cityValues = {12, 15, 742, 131, 623, 131, 153, 12, 74, 46, 253, 324};
    vector<string> roads = {"NYYYYYYYYYYY", "YNYYYYYYYYYY", "YYNYYYYYYYYY", "YYYNYYYYYYYY", "YYYYNYYYYYYY", "YYYYYNYYYYYY", "YYYYYYNYYYYY", "YYYYYYYNYYYY", "YYYYYYYYNYYY", "YYYYYYYYYNYY", "YYYYYYYYYYNY", "YYYYYYYYYYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1022;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cityValues = {1, 2, 4};
    vector<string> roads = {"NNN", "NNN", "NNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cityValues = {1, 5, 5};
    vector<string> roads = {"NNN", "NNY", "NYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cityValues = {197, 584, 952, 236, 592, 514, 230, 603, 805, 255, 750, 189, 102, 674, 842, 784, 613, 743, 460, 163, 786, 744, 261, 852, 333, 814, 585, 656, 626, 691, 734, 623};
    vector<string> roads = {"NNYYYNYNNYYNYYYNYNYYNYYNYNYNNNYN", "NNYYYNYNYNNYYNNNNYNYNYNYYNYNYNNY", "YYNYNYYYYYYYNNYYNYNYNYNNYYNYNNYN", "YYYNNNNYNYNNYYNNNYYYYNNNYYNYNNYN", "YYNNNYYYNNNNNYYNYNNNNNYYYYNNYNNN", "NNYNYNYYYYNYYYNNYYNNYYYYYNNNYYYN", "YYYNYYNNNNNYYNNYYYYNNNNYNNYYYYYN", "NNYYYYNNYNYYYYNNNYYNYYNYYNYNNNNN", "NYYNNYNYNYNNNYNNYYNNNNNYNYYYYYYY", "YNYYNYNNYNYYYYYNNYNNNNYNYYYYNYYN", "YNYNNNNYNYNYYNNYNYNYNYNNYNNYYNNY", "NYYNNYYYNYYNNNYYNYYNYNYYNYNYNNNN", "YYNYNYYYNYYNNNYYYNNYNYYYNYYNNNYN", "YNNYYYNYYYNNNNNYNNNNNYYNYNNYYNNY", "YNYNYNNNNYNYYNNYYYYNNYNYYYYYNYNY", "NNYNNNYNNNYYYYYNYYNYYNNNNNYNYNYY", "YNNNYYYNYNNNYNYYNNNYNYYNYNNNYNNN", "NYYYNYYYYYYYNNYYNNNYYNNYNNYNNYNN", "YNNYNNYYNNNYNNYNNNNYNYNNNNNNNNNY", "YYYYNNNNNNYNYNNYYYYNNYYNYYYYNNYN", "NNNYNYNYNNNYNNNYNYNNNNYNYYYNNNNY", "YYYNNYNYNNYNYYYNYNYYNNYYYYNYYYYY", "YNNNYYNNNYNYYYNNYNNYYYNYNNYNNNNN", "NYNNYYYYYNNYYNYNNYNNNYYNYNYNYYNN", "YYYYYYNYNYYNNYYNYNNYYYNYNYYYNYNY", "NNYYYNNNYYNYYNYNNNNYYYNNYNNYNNNY", "YYNNNNYYYYNNYNYYNYNYYNYYYNNNYYYY", "NNYYNNYNYYYYNYYNNNNYNYNNYYNNYYYY", "NYNNYYYNYNYNNYNYYNNNNYNYNNYYNNYY", "NNNNNYYNYYNNNNYNNYNNNYNYYNYYNNNY", "YNYYNYYNYYNNYNNYNNNYNYNNNNYYYNNN", "NYNNNNNNYNYNNYYYNNYNYYNNYYYYYYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cityValues = {15, 33};
    vector<string> roads = {"NY", "YN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cityValues = {1, 2, 4, 8, 16, 32, 64, 128, 256};
    vector<string> roads = {"NYNNNNNNN", "YNYNNNNNN", "NYNYNNNNN", "NNYNYNNNN", "NNNYNYNNN", "NNNNYNYNN", "NNNNNYNYN", "NNNNNNYNY", "NNNNNNNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 511;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cityValues = {37, 1, 19, 64, 42, 41, 64, 64, 54, 16, 256, 36, 64, 2, 4, 2, 62, 29, 58, 64, 1, 32, 16, 256, 17, 2, 17, 4, 1, 64, 21, 8, 256, 63, 3, 1, 43, 15, 8, 39, 41, 8, 16, 8, 16, 256, 64, 512, 45, 64};
    vector<string> roads = {"NNNNNNYYYYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNYYNNNYYNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNYNNNNNNNNYNNYNNNYYNNNYNYNNNNYNNNNNNNNYNNNNNN", "YNYNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNYNN", "YNNYNNYNYNYYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNYNYNNNNNNNNNNYYYNNNNNNNYNNNY", "YNNNNNNNNNNNNNNNNYNYNYNYYNNNYNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNYNNNNNNNNYYNNNYYNNNNYNYYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNNYYNNNYNNYYNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNYNNNNNYNNNNYNNNNNNNNNNYNYNNYNYNNNYNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNYNYNNYYNNNNNYNNNNNNNNNYNNYNNYNNNN", "NNNNYYYNNNNNNYNNNYYNNYNNNYNYYNNNNNNNNNYYYNNYNNYNYN", "NYNNNNNNNNNNYNNNNNNNYNNNYYNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYYNNNNNNYNNNYNNNNNYNNYNYYNNNNYNNNYNN", "NNNYYYNNNNNNNNNYNNNNNYNYNYNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNYNNNNNNYNYYYNNNNNNNNNNNYNNYNNNNNYNNN", "NNNNYNNNNNNYNNNNYNNNNYNNNYYNNNYNNNYNNNNNNNNNNYNYNY", "NNNNNNNNNYYNYNNYNNYYYNYNNNNNNNNYNYNNNNNNNNNNYNNNNN", "NNNNNYNNYNYNNNYNNYNNNYNNNNNNNNNNNYNNYNYNNYNNNNNNNN", "NNNNNYNNNYNNNNYNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NYNNNNNNYYNYNNNNYNNYNNNNNNNNNNYNNNNNNYNNNYNNYNNNNN", "NNNNNNNNNNNNNYNYYNYYYNNNNNNYNNNNNNNNNNNYYNNNNNNNYN", "NNNNNNNNNNYNNNNNNYNNYNNNNNNNNYNNNNYNNNNNNYYNNNNYNN", "NNNNYYNNNNYYNNNYNNNNNNNNNYNNNYYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNNYNNNNNNNNNNNNNYNNNNYNNNNNNNNYNNYNYN", "NNNNNYNNNNNNNNYNYNNNNNNNNNYYYNNNNNNNNYNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNYNNNNYNNNNNNNNNYNNNYNNNYYNNNNNYNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNYYNNNNNNNYNNNNNNNYNNYNNNNNNNN", "NNNNNYNYNNYNYNNNYNYNYNNNNNYNYNNNNNNYYNYNYNYNNNNNYN", "YNNNNNYNYNYNNNNNNYNNNNNNNNNNNNNNYNYNNNNNYNNYNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNYNYNNNNNNYNNNNNNYN", "NNNNNNNYYNNNYNNNNYNYNNNNYNNNNYNNNNNNNNNNNYNNNNYNNN", "NNNNYNNNNNNNNYNYNYNNNNYNNNNNNNNNNYYNNNNYNNNNNNNNNY", "NNNNNNNNNNNNYNYYNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNYYNN", "NNNNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNYYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNYNYNNNNNNYNNYYNNNNNNNNNNNN", "NYNNNNNNNNNYNNYNNNNNNNNYNNYNNYNYYNYNNNNNNNNNYNNNNN", "NNNNNYNNNNNNYNNYNYNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNY", "NNNNNNYNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNYNNYNNYNNNY", "NNNNNNNNYNNNYNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNYNNNYNNNYNNNNYNNNYNNNNYNYNNNNNNNNNN", "NYNNNNYNNNNNNYNNNYNNYNNNNNYNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNYNNNNNNNNNYNNNNNNNYNNNNYYNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 895;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cityValues = {0, 20};
    vector<string> roads = {"NN", "NN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cityValues = {1, 100};
    vector<string> roads = {"NN", "NN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cityValues = {1, 8, 2, 4};
    vector<string> roads = {"NNYY", "NNNN", "YNNN", "YNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cityValues = {0, 11, 6, 4};
    vector<string> roads = {"NYYY", "YNNN", "YNNN", "YNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cityValues = {556};
    vector<string> roads = {"N"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 556;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cityValues = {1, 2, 31};
    vector<string> roads = {"NYN", "YNY", "NYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cityValues = {818, 165, 899, 4};
    vector<string> roads = {"NNNN", "NNYN", "NYNN", "NNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 818;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cityValues = {1, 11};
    vector<string> roads = {"NN", "NN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cityValues = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 359, 966, 105, 115, 81, 255, 74, 236, 809, 205, 186, 939, 498, 763, 483, 326, 124, 706, 84, 1016, 795, 488, 487, 909, 886, 346, 302, 611, 563, 927, 201, 922, 870, 306, 13, 951, 561, 88, 163, 346};
    vector<string> roads = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1023;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cityValues = {138, 577, 27, 509, 184, 847, 872, 758, 626, 123, 20, 665, 973, 979, 781, 240, 68, 58, 948, 934, 870, 339, 51, 267, 971, 673, 16, 94, 588, 492};
    vector<string> roads = {"NNNNNNNNNNNNNYNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1019;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cityValues = {0, 2, 4, 5};
    vector<string> roads = {"NYYY", "YNYY", "YYNY", "YYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cityValues = {264, 264, 64, 512};
    vector<string> roads = {"NYNN", "YNYN", "NYNY", "NNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 840;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cityValues = {0, 7, 11, 5, 2};
    vector<string> roads = {"NNNNN", "NNNNN", "NNNNN", "NNNNN", "NNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
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
    vector<int> cityValues = {1, 1023};
    vector<string> roads = {"NN", "NN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cityValues = {0, 1};
    vector<string> roads = {"NN", "NN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cityValues = {2, 32, 2, 64, 128, 32, 512, 4, 4, 2, 32, 512, 16, 2, 16, 16, 2, 32, 32, 0, 512, 64, 512, 64, 16, 0, 4, 128, 128, 32, 8, 64, 512, 16, 8, 256, 2, 256, 128, 128, 64, 128, 2, 128, 2, 16, 128, 4, 512, 32};
    vector<string> roads = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1022;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cityValues = {0, 1, 0, 3};
    vector<string> roads = {"NYNN", "YNNN", "NNNY", "NNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cityValues = {6, 2, 3};
    vector<string> roads = {"NYY", "YNY", "YYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cityValues = {37, 1, 19, 64, 42, 41, 64, 64, 54, 16, 256, 36, 64, 2, 4, 2, 62, 29, 58, 64, 1, 32, 16, 256, 17, 2, 17, 4, 1, 64, 21, 8, 256, 63, 3, 1, 43, 15, 8, 39, 41, 8, 16, 8, 16, 256, 64, 512, 45, 64};
    vector<string> roads = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 895;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cityValues = {10, 9, 111};
    vector<string> roads = {"NYN", "YNY", "NYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cityValues = {5, 6, 7};
    vector<string> roads = {"NYY", "YNY", "YYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cityValues = {5, 6, 6, 7};
    vector<string> roads = {"NYYY", "YNYY", "YYNY", "YYYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cityValues = {5, 1, 0, 3};
    vector<string> roads = {"NYYN", "YNNY", "YNNN", "NYNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cityValues = {0, 4, 8, 32, 512};
    vector<string> roads = {"NYYYY", "YNNNN", "YNNNN", "YNNNN", "YNNNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 556;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cityValues = {0, 10, 19};
    vector<string> roads = {"NYN", "YNN", "NNN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cityValues = {13, 7, 10, 5};
    vector<string> roads = {"NYNN", "YNYN", "NYNY", "NNYN"};
    XorTravelingSalesman* pObj = new XorTravelingSalesman();
    clock_t start = clock();
    int result = pObj->maxProfit(cityValues, roads);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23064626&rd=15178&pm=12175
********************************************************************************
#include <cstdio> 
#include <vector> 
#include <string> 
#include <queue> 
#include <map> 
#include <set> 
#include <cstring> 
#include <algorithm> 
using namespace std; 
 
typedef pair<int,int> PII; 
typedef long long LL; 
const int INF = 1000000007; 
 
class XorTravelingSalesman{ 
public: 
    int dp[50][1024]; 
    int maxProfit(vector<int> a, vector<string> e){ 
        int n=a.size(); 
        memset(dp,0,sizeof(dp)); 
        dp[0][a[0]]=1; 
        queue<PII> q; 
        q.push(PII(0,a[0])); 
        int ans=0; 
        while(q.size()){ 
            int x=q.front().first; 
            int t=q.front().second; 
            ans=max(ans,t); 
            q.pop(); 
            for(int y=0;y<n;y++){ 
                if(e[x][y]=='N') continue; 
                int r=t^a[y]; 
                if(!dp[y][r]){ 
                    dp[y][r]=1; 
                    q.push(PII(y,r)); 
                } 
            } 
        } 
        return ans; 
    } 
};

********************************************************************************
*******************************************************************************/