/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8786
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

class RestaurantManager {
public:
    int allocateTables(vector<int> tables, vector<int> groupSizes, vector<int> arrivals, vector<int> departures);
};

int RestaurantManager::allocateTables(vector<int> tables, vector<int> groupSizes, vector<int> arrivals, vector<int> departures) {
    int ret;
    return ret;
}


int test0() {
    vector<int> tables = {4};
    vector<int> groupSizes = {4, 8, 4, 2, 2, 4};
    vector<int> arrivals = {0, 10, 12, 16, 18, 26};
    vector<int> departures = {10, 20, 18, 26, 36, 28};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {4, 4};
    vector<int> groupSizes = {4, 8, 4, 2, 2, 4};
    vector<int> arrivals = {0, 10, 12, 16, 18, 26};
    vector<int> departures = {10, 20, 18, 26, 36, 28};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> tables = {4, 8};
    vector<int> groupSizes = {4, 8, 4, 2, 2, 4};
    vector<int> arrivals = {0, 10, 12, 16, 18, 26};
    vector<int> departures = {10, 20, 18, 26, 36, 28};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> tables = {10, 8, 11, 16};
    vector<int> groupSizes = {14, 1, 15, 1, 19, 15, 9, 15, 20, 2};
    vector<int> arrivals = {4, 5, 7, 18, 21, 25, 29, 31, 46, 49};
    vector<int> departures = {8, 37, 11, 36, 36, 46, 40, 42, 47, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> tables = {5, 9, 20, 8};
    vector<int> groupSizes = {19, 18, 8, 13, 8, 1, 14, 6, 14, 13};
    vector<int> arrivals = {13, 14, 15, 19, 29, 32, 34, 38, 45, 48};
    vector<int> departures = {25, 28, 41, 41, 40, 44, 47, 44, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> tables = {18, 15, 2, 6};
    vector<int> groupSizes = {7, 9, 16, 3, 10, 3, 2, 10, 16, 16};
    vector<int> arrivals = {10, 15, 19, 20, 21, 22, 27, 35, 37, 43};
    vector<int> departures = {13, 24, 22, 32, 32, 32, 35, 48, 41, 44};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> tables = {3, 5, 15, 5};
    vector<int> groupSizes = {9, 18, 1, 8, 15, 6, 11, 13, 12, 2};
    vector<int> arrivals = {6, 7, 22, 25, 30, 34, 36, 42, 43, 44};
    vector<int> departures = {11, 50, 28, 28, 50, 44, 39, 47, 44, 48};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> tables = {17, 11, 15, 14};
    vector<int> groupSizes = {7, 1, 18, 15, 2, 15, 5, 12, 13, 12};
    vector<int> arrivals = {1, 9, 10, 31, 36, 37, 38, 40, 47, 48};
    vector<int> departures = {21, 45, 31, 45, 40, 38, 40, 48, 50, 49};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> tables = {17, 17, 11, 15, 4, 15, 19, 6, 14, 7};
    vector<int> groupSizes = {13, 3, 10, 7, 4, 14, 2, 20, 2, 7};
    vector<int> arrivals = {3, 12, 84, 106, 109, 113, 122, 143, 151, 178};
    vector<int> departures = {126, 94, 122, 197, 137, 143, 143, 200, 180, 187};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> tables = {19, 6, 13, 14, 14, 1, 17, 2, 14, 12};
    vector<int> groupSizes = {13, 4, 19, 15, 17, 7, 2, 12, 4, 10};
    vector<int> arrivals = {7, 31, 45, 48, 57, 58, 72, 106, 194, 198};
    vector<int> departures = {77, 148, 121, 186, 91, 137, 118, 138, 196, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> tables = {14, 12, 18, 15, 3, 14, 13, 8, 18, 4};
    vector<int> groupSizes = {13, 18, 3, 8, 19, 18, 6, 4, 3, 7};
    vector<int> arrivals = {17, 28, 40, 58, 68, 73, 83, 101, 178, 183};
    vector<int> departures = {186, 185, 125, 167, 138, 102, 126, 162, 198, 194};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> tables = {13, 9, 6, 1, 9, 8, 6, 2, 8, 20};
    vector<int> groupSizes = {20, 10, 11, 10, 1, 5, 16, 2, 9, 17};
    vector<int> arrivals = {12, 14, 64, 78, 100, 121, 151, 155, 162, 164};
    vector<int> departures = {19, 26, 159, 96, 155, 134, 169, 199, 169, 174};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> tables = {8, 15, 19, 6, 11, 10, 12, 7, 20, 18};
    vector<int> groupSizes = {5, 16, 11, 11, 14, 12, 19, 3, 14, 3};
    vector<int> arrivals = {11, 19, 53, 55, 82, 105, 118, 144, 175, 185};
    vector<int> departures = {120, 161, 56, 143, 131, 107, 130, 191, 179, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> tables = {3, 14, 11, 13, 5, 8, 4, 12, 9, 11, 17, 11, 12, 12, 20, 2, 10, 2, 3, 9, 8, 7, 1, 13, 12, 19, 12, 10, 2, 15};
    vector<int> groupSizes = {20, 7, 12, 17, 14, 7, 12, 16, 4, 19, 8, 3, 13, 20, 15, 1, 16, 18, 14, 4};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> departures = {3, 13, 12, 8, 9, 20, 11, 14, 15, 18, 18, 17, 20, 20, 15, 16, 18, 18, 20, 20};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> tables = {20, 5, 14, 15, 7, 6, 18, 14, 5, 10, 19, 12, 16, 12, 12, 15, 3, 12, 6, 18, 20, 12, 13, 19, 2, 17, 6, 5, 19, 12};
    vector<int> groupSizes = {16, 13, 13, 9, 6, 2, 8, 20, 8, 18, 11, 11, 8, 15, 12, 11, 14, 9, 1, 2};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> departures = {2, 12, 11, 19, 20, 13, 17, 8, 18, 18, 15, 20, 19, 14, 20, 18, 19, 19, 19, 20};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> tables = {10, 6, 15, 11, 3, 18, 8, 15, 15, 11, 8, 4, 13, 2, 18, 6, 12, 11, 11, 19, 11, 5, 15, 8, 19, 12, 11, 15, 6, 17};
    vector<int> groupSizes = {9, 14, 19, 15, 19, 19, 2, 1, 3, 5, 2, 7, 18, 13, 20, 14, 12, 4, 1, 13};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> departures = {10, 5, 19, 16, 19, 7, 14, 12, 12, 12, 20, 14, 16, 18, 18, 18, 18, 18, 19, 20};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> tables = {5, 14, 1, 16, 11, 12, 8, 13, 8, 2, 9, 7, 2, 4, 13, 6, 2, 13, 6, 12, 6, 7, 6, 9, 17, 15, 2, 8, 2, 10};
    vector<int> groupSizes = {2, 11, 9, 5, 14, 19, 2, 18, 17, 10, 20, 7, 17, 12, 1, 18, 4, 7, 10, 14};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> departures = {16, 16, 15, 16, 12, 19, 10, 19, 17, 18, 15, 20, 13, 20, 18, 20, 20, 18, 19, 20};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> tables = {13, 3, 9, 20, 19, 13, 19, 10, 4, 16, 9, 3, 5, 16, 17, 12, 17, 13, 5, 16, 2, 7, 20, 3, 11, 10, 15, 8, 9, 10};
    vector<int> groupSizes = {10, 5, 16, 5, 3, 14, 14, 1, 2, 1, 5, 9, 17, 4, 16, 18, 6, 11, 8, 10};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> departures = {7, 6, 4, 18, 14, 20, 13, 15, 20, 18, 14, 20, 20, 19, 17, 17, 17, 19, 19, 20};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> tables = {10, 3, 12, 4, 6, 14, 9, 17, 4, 15, 2, 19, 1, 16, 9, 10, 10, 4, 5, 2};
    vector<int> groupSizes = {19, 1, 3, 14, 10, 17, 1, 13, 8, 17, 1, 5, 14, 19, 7, 18, 4, 11, 14, 13, 10, 20, 12, 14, 15, 9, 15, 6, 15, 8, 2, 5, 8, 5, 1, 7, 9, 15, 12, 1, 1, 2, 6, 18, 14, 4, 4, 7, 17, 9};
    vector<int> arrivals = {6, 7, 8, 10, 15, 16, 22, 26, 32, 34, 39, 40, 48, 49, 51, 58, 62, 63, 71, 73, 78, 88, 93, 96, 97, 98, 101, 106, 107, 108, 109, 111, 116, 128, 130, 131, 134, 136, 147, 150, 166, 170, 171, 174, 175, 176, 179, 187, 189, 192};
    vector<int> departures = {81, 62, 27, 142, 99, 97, 62, 118, 174, 133, 148, 118, 104, 129, 151, 163, 97, 134, 125, 179, 137, 152, 177, 139, 173, 199, 141, 131, 141, 161, 113, 193, 182, 139, 191, 186, 181, 152, 150, 160, 175, 191, 185, 200, 185, 198, 194, 191, 195, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> tables = {15, 16, 18, 2, 11, 14, 6, 5, 15, 2, 2, 3, 15, 12, 13, 11, 20, 8, 15, 10};
    vector<int> groupSizes = {20, 6, 4, 16, 4, 6, 9, 10, 17, 12, 10, 1, 8, 6, 16, 2, 8, 16, 13, 4, 15, 3, 12, 11, 7, 17, 7, 6, 10, 20, 9, 7, 11, 13, 13, 9, 19, 11, 12, 11, 20, 4, 11, 15, 3, 2, 5, 2, 8, 18};
    vector<int> arrivals = {2, 7, 8, 12, 13, 15, 24, 27, 29, 31, 32, 38, 43, 45, 53, 58, 60, 63, 65, 67, 68, 77, 79, 84, 90, 91, 92, 102, 111, 123, 127, 130, 132, 135, 138, 139, 141, 144, 148, 150, 151, 154, 155, 162, 168, 176, 178, 189, 197, 198};
    vector<int> departures = {100, 132, 86, 111, 86, 159, 185, 181, 172, 178, 55, 181, 54, 143, 110, 190, 83, 160, 185, 182, 170, 178, 113, 121, 107, 114, 132, 136, 190, 182, 160, 199, 182, 191, 151, 190, 181, 171, 196, 173, 190, 173, 159, 197, 175, 187, 179, 194, 200, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 166;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> tables = {4, 17, 8, 14, 14, 3, 15, 17, 19, 3, 3, 16, 11, 10, 8, 12, 11, 14, 16, 13};
    vector<int> groupSizes = {7, 3, 14, 5, 2, 16, 10, 20, 19, 17, 2, 16, 2, 18, 8, 14, 18, 19, 16, 18, 10, 1, 5, 4, 14, 5, 11, 20, 8, 15, 8, 18, 14, 6, 16, 1, 17, 19, 20, 5, 2, 19, 18, 7, 4, 20, 5, 10, 11, 10};
    vector<int> arrivals = {7, 12, 15, 25, 28, 31, 38, 42, 51, 53, 59, 61, 64, 65, 75, 76, 77, 81, 85, 90, 95, 99, 103, 104, 110, 115, 123, 124, 127, 133, 134, 139, 141, 147, 150, 154, 156, 158, 159, 160, 162, 166, 171, 175, 176, 179, 180, 185, 192, 195};
    vector<int> departures = {192, 142, 190, 164, 77, 200, 70, 88, 56, 190, 166, 68, 186, 146, 159, 118, 128, 90, 124, 127, 119, 199, 198, 169, 190, 133, 178, 147, 185, 143, 135, 176, 180, 159, 185, 190, 182, 187, 197, 182, 199, 177, 191, 179, 192, 187, 188, 186, 197, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> tables = {4, 10, 8, 5, 20, 2, 9, 10, 20, 19, 2, 17, 10, 7, 6, 8, 2, 17, 13, 18};
    vector<int> groupSizes = {17, 15, 19, 4, 8, 16, 14, 18, 19, 2, 13, 3, 7, 4, 3, 14, 2, 11, 3, 10, 13, 1, 1, 2, 14, 2, 5, 13, 13, 11, 18, 17, 17, 5, 18, 3, 7, 4, 16, 6, 6, 3, 10, 15, 3, 5, 20, 17, 11, 8};
    vector<int> arrivals = {0, 2, 3, 4, 6, 7, 11, 12, 13, 15, 16, 20, 26, 27, 29, 30, 34, 36, 38, 44, 48, 54, 56, 68, 70, 77, 81, 83, 87, 94, 96, 105, 109, 122, 136, 141, 142, 155, 156, 160, 164, 166, 169, 179, 181, 187, 188, 194, 197, 198};
    vector<int> departures = {126, 16, 169, 6, 53, 32, 151, 116, 124, 135, 128, 81, 193, 87, 166, 174, 145, 197, 101, 192, 139, 82, 138, 196, 169, 148, 84, 89, 131, 156, 162, 123, 148, 196, 183, 149, 166, 185, 184, 176, 192, 183, 184, 183, 195, 190, 197, 195, 198, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> tables = {9, 4, 3, 18, 8, 18, 16, 20, 8, 15, 4, 3, 9, 10, 8, 15, 4, 15, 1, 6};
    vector<int> groupSizes = {6, 10, 10, 3, 16, 2, 14, 6, 13, 3, 6, 20, 17, 12, 6, 9, 19, 14, 13, 11, 18, 3, 4, 9, 15, 6, 18, 12, 14, 3, 9, 8, 17, 1, 8, 14, 1, 7, 17, 4, 20, 4, 9, 9, 3, 2, 14, 15, 1, 12};
    vector<int> arrivals = {5, 7, 15, 17, 23, 24, 27, 28, 31, 40, 42, 49, 52, 55, 56, 57, 63, 64, 66, 77, 79, 82, 86, 90, 91, 92, 95, 97, 100, 104, 107, 112, 115, 118, 122, 135, 139, 140, 144, 150, 158, 171, 175, 177, 178, 183, 187, 193, 194, 198};
    vector<int> departures = {18, 88, 56, 157, 48, 102, 161, 199, 122, 50, 179, 60, 151, 177, 112, 156, 179, 106, 187, 109, 121, 165, 100, 101, 123, 132, 163, 182, 103, 189, 173, 143, 157, 181, 196, 143, 169, 162, 175, 184, 192, 181, 195, 194, 186, 186, 191, 195, 198, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> tables = {10, 15, 2, 13, 4, 6, 15, 8, 6, 18, 11, 18, 5, 17, 12, 18, 19, 19, 12, 20};
    vector<int> groupSizes = {12, 14, 18, 4, 17, 4, 13, 7, 6, 6, 3, 11, 1, 4, 10, 9, 20, 14, 10, 18, 3, 5, 19, 10, 7, 9, 12, 2, 19, 1, 13, 19, 1, 10, 5, 16, 15, 5, 2, 15, 11, 12, 1, 6, 11, 1, 13, 1, 5, 7};
    vector<int> arrivals = {0, 1, 12, 13, 22, 24, 26, 30, 43, 51, 56, 62, 69, 70, 75, 76, 79, 89, 97, 98, 99, 103, 104, 108, 112, 113, 116, 117, 119, 125, 126, 128, 129, 131, 140, 147, 148, 150, 155, 163, 168, 170, 172, 173, 179, 185, 193, 194, 197, 199};
    vector<int> departures = {93, 161, 45, 18, 73, 84, 114, 140, 197, 196, 105, 126, 156, 167, 173, 148, 82, 180, 169, 175, 135, 166, 144, 174, 193, 157, 119, 139, 181, 190, 145, 153, 175, 155, 157, 182, 150, 154, 184, 169, 175, 183, 173, 175, 182, 191, 194, 199, 198, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> tables = {18, 8, 1, 9, 20, 8, 8, 15, 12, 7, 17, 2, 14, 3, 12, 19, 6, 5, 18, 6};
    vector<int> groupSizes = {15, 14, 10, 5, 8, 3, 19, 13, 9, 14, 4, 6, 2, 1, 1, 20, 3, 12, 1, 18, 7, 10, 1, 10, 9, 8, 8, 9, 12, 2, 19, 4, 9, 14, 3, 15, 3, 6, 13, 9, 17, 8, 17, 8, 12, 20, 18, 3, 7, 14};
    vector<int> arrivals = {0, 5, 7, 10, 16, 20, 23, 26, 30, 31, 34, 36, 38, 43, 49, 51, 58, 59, 63, 65, 68, 69, 76, 77, 82, 88, 101, 106, 109, 110, 111, 115, 126, 131, 140, 142, 143, 145, 150, 151, 158, 161, 164, 172, 175, 176, 180, 185, 189, 195};
    vector<int> departures = {101, 65, 56, 33, 130, 114, 195, 134, 61, 86, 170, 184, 72, 51, 169, 122, 64, 155, 92, 69, 160, 190, 179, 196, 136, 97, 120, 132, 197, 200, 172, 197, 178, 137, 195, 153, 176, 169, 157, 168, 179, 198, 190, 189, 190, 196, 190, 190, 193, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> tables = {13, 10, 3, 7, 7, 2, 19, 20, 5, 7, 14, 4, 4, 13, 20, 1, 15, 3, 13, 10};
    vector<int> groupSizes = {1, 13, 4, 19, 3, 4, 1, 13, 13, 3, 13, 19, 6, 12, 19, 8, 17, 10, 16, 13, 9, 18, 6, 13, 16, 11, 14, 4, 4, 3, 15, 5, 18, 14, 7, 3, 11, 1, 16, 5, 4, 19, 5, 9, 13, 2, 10, 2, 6, 6};
    vector<int> arrivals = {5, 7, 12, 14, 24, 27, 29, 31, 40, 42, 43, 44, 50, 53, 54, 56, 57, 60, 67, 73, 74, 76, 78, 80, 86, 93, 94, 97, 106, 108, 117, 121, 125, 133, 144, 146, 150, 151, 157, 158, 162, 164, 165, 166, 168, 182, 195, 196, 198, 199};
    vector<int> departures = {97, 183, 133, 179, 63, 77, 162, 175, 67, 103, 94, 147, 156, 97, 92, 88, 72, 155, 88, 156, 100, 124, 134, 175, 105, 110, 160, 112, 181, 170, 156, 146, 182, 199, 188, 199, 155, 178, 163, 167, 180, 187, 193, 182, 200, 190, 197, 197, 199, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> tables = {16, 10, 20, 5, 18, 13, 14, 20, 14, 7, 18, 7, 10, 5, 4, 10, 8, 9, 12, 7};
    vector<int> groupSizes = {17, 14, 11, 5, 18, 3, 6, 3, 1, 9, 10, 3, 8, 4, 4, 5, 15, 9, 19, 2, 16, 5, 16, 2, 6, 4, 2, 18, 14, 3, 10, 10, 10, 18, 8, 6, 6, 2, 15, 14, 14, 18, 9, 15, 13, 4, 19, 4, 18, 3};
    vector<int> arrivals = {4, 9, 11, 12, 13, 19, 22, 25, 26, 29, 30, 34, 38, 43, 44, 47, 52, 67, 68, 70, 71, 75, 78, 81, 84, 94, 95, 96, 97, 100, 101, 105, 110, 116, 121, 135, 140, 143, 146, 163, 170, 174, 176, 177, 178, 179, 189, 191, 195, 199};
    vector<int> departures = {127, 162, 18, 22, 195, 182, 122, 46, 92, 58, 51, 65, 148, 184, 45, 156, 173, 134, 96, 103, 177, 169, 118, 184, 185, 130, 195, 120, 120, 182, 194, 116, 198, 122, 162, 187, 182, 198, 200, 186, 184, 198, 190, 190, 186, 180, 192, 198, 196, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> tables = {9, 8, 11, 2, 17, 5, 11, 15, 17, 19, 13, 15, 4, 9, 1, 5, 17, 9, 15, 5};
    vector<int> groupSizes = {4, 2, 19, 15, 9, 19, 1, 5, 10, 17, 5, 14, 6, 19, 13, 16, 15, 20, 18, 7, 19, 10, 9, 20, 19, 10, 2, 1, 12, 9, 14, 9, 11, 1, 12, 13, 9, 3, 5, 8, 14, 11, 17, 9, 7, 16, 13, 15, 7, 7};
    vector<int> arrivals = {1, 20, 22, 26, 36, 40, 42, 44, 48, 51, 62, 64, 65, 66, 67, 69, 73, 80, 83, 98, 100, 105, 108, 113, 115, 118, 120, 123, 124, 130, 137, 142, 143, 144, 154, 159, 161, 165, 166, 169, 171, 173, 175, 176, 177, 181, 190, 191, 193, 199};
    vector<int> departures = {200, 178, 60, 71, 116, 117, 124, 172, 126, 68, 83, 150, 89, 84, 120, 90, 197, 93, 180, 192, 163, 146, 165, 182, 148, 141, 163, 184, 171, 168, 198, 190, 194, 191, 179, 160, 163, 192, 178, 191, 175, 179, 176, 198, 187, 187, 191, 193, 198, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> tables = {19, 20, 8, 18, 2, 14, 19, 15, 11, 18, 18, 11, 2, 7, 9, 16, 20, 4, 17, 20};
    vector<int> groupSizes = {18, 15, 11, 18, 11, 5, 11, 12, 19, 16, 16, 19, 11, 1, 1, 5, 3, 6, 11, 6, 2, 11, 4, 18, 12, 5, 3, 2, 2, 2, 9, 5, 2, 4, 8, 17, 13, 12, 9, 18, 13, 6, 20, 18, 18, 14, 2, 1, 7, 17};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {4, 18, 34, 25, 16, 30, 7, 43, 32, 34, 34, 50, 46, 14, 49, 50, 44, 44, 22, 34, 43, 46, 34, 42, 41, 33, 47, 34, 40, 46, 40, 42, 46, 47, 45, 36, 46, 44, 50, 45, 42, 49, 48, 44, 48, 47, 50, 49, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> tables = {20, 3, 4, 9, 10, 8, 4, 7, 16, 3, 19, 2, 11, 4, 17, 11, 8, 5, 14, 8};
    vector<int> groupSizes = {3, 5, 16, 4, 20, 1, 2, 16, 19, 6, 15, 6, 2, 20, 10, 5, 12, 14, 3, 4, 20, 14, 2, 10, 9, 10, 2, 5, 9, 3, 9, 18, 17, 12, 6, 9, 11, 18, 3, 4, 15, 19, 12, 13, 10, 13, 19, 15, 1, 13};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {19, 14, 34, 34, 9, 29, 48, 11, 18, 15, 41, 36, 34, 35, 25, 47, 24, 31, 50, 46, 34, 27, 30, 49, 48, 33, 37, 30, 34, 30, 32, 40, 48, 43, 48, 36, 50, 40, 41, 50, 43, 45, 50, 44, 46, 46, 48, 48, 50, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> tables = {3, 3, 7, 12, 12, 1, 14, 13, 10, 10, 8, 11, 6, 5, 5, 8, 15, 5, 4, 6};
    vector<int> groupSizes = {17, 20, 1, 17, 10, 20, 12, 5, 20, 19, 17, 13, 5, 4, 1, 7, 17, 10, 18, 1, 18, 8, 10, 19, 12, 9, 1, 15, 20, 13, 12, 13, 11, 12, 16, 11, 10, 3, 4, 7, 12, 4, 14, 10, 2, 13, 16, 9, 10, 9};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {23, 42, 8, 24, 45, 46, 49, 16, 43, 18, 45, 50, 44, 15, 28, 36, 43, 40, 38, 44, 23, 26, 40, 37, 38, 28, 36, 35, 48, 32, 37, 41, 43, 40, 41, 37, 39, 50, 39, 44, 49, 42, 50, 49, 45, 47, 47, 49, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> tables = {18, 18, 7, 8, 12, 16, 9, 5, 3, 12, 15, 7, 3, 13, 12, 7, 5, 18, 11, 13};
    vector<int> groupSizes = {18, 18, 15, 14, 11, 20, 14, 20, 2, 13, 10, 14, 11, 18, 12, 11, 2, 16, 8, 6, 9, 9, 17, 11, 1, 13, 12, 16, 2, 13, 19, 16, 15, 6, 4, 20, 2, 1, 19, 5, 15, 10, 16, 17, 19, 18, 8, 9, 20, 14};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {38, 9, 33, 26, 8, 20, 48, 15, 12, 30, 22, 18, 13, 49, 20, 48, 25, 36, 23, 27, 42, 23, 46, 28, 43, 42, 40, 33, 30, 44, 38, 35, 47, 48, 48, 38, 48, 45, 39, 44, 50, 43, 50, 48, 45, 47, 47, 49, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> tables = {7, 7, 11, 3, 9, 9, 11, 8, 10, 18, 4, 13, 18, 15, 14, 13, 8, 20, 6, 20};
    vector<int> groupSizes = {14, 18, 2, 8, 20, 11, 9, 12, 13, 19, 13, 7, 6, 9, 10, 7, 9, 3, 9, 11, 1, 10, 4, 5, 10, 17, 4, 6, 7, 19, 20, 7, 6, 3, 16, 5, 8, 20, 17, 19, 14, 13, 3, 18, 15, 2, 9, 5, 7, 12};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {33, 50, 22, 42, 38, 45, 26, 17, 9, 45, 46, 38, 30, 43, 37, 29, 21, 30, 29, 44, 35, 24, 30, 39, 30, 44, 35, 38, 29, 33, 33, 32, 39, 42, 38, 39, 40, 43, 40, 50, 44, 46, 46, 47, 46, 50, 50, 49, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> tables = {14, 16, 20, 5, 16, 7, 4, 13, 10, 7, 13, 18, 3, 20, 1, 16, 8, 20, 3, 15};
    vector<int> groupSizes = {13, 18, 5, 14, 10, 16, 12, 2, 4, 4, 13, 2, 5, 3, 6, 18, 20, 18, 9, 13, 15, 12, 19, 15, 5, 12, 19, 15, 12, 12, 11, 11, 20, 19, 20, 17, 18, 3, 6, 6, 11, 10, 18, 2, 11, 2, 12, 19, 12, 18};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {46, 8, 44, 28, 42, 42, 36, 21, 40, 15, 29, 45, 44, 36, 21, 19, 26, 48, 25, 39, 33, 23, 47, 42, 38, 42, 32, 30, 41, 44, 38, 32, 43, 37, 42, 44, 41, 43, 50, 40, 50, 46, 49, 50, 45, 49, 47, 50, 50, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> tables = {8, 12, 2, 6, 3, 14, 15, 20, 2, 18, 3, 7, 10, 13, 1, 20, 18, 3, 2, 18};
    vector<int> groupSizes = {14, 8, 19, 7, 8, 10, 9, 8, 8, 15, 15, 1, 1, 11, 4, 11, 8, 9, 2, 18, 10, 9, 2, 17, 10, 14, 1, 11, 8, 12, 6, 5, 1, 9, 1, 14, 10, 7, 11, 6, 3, 14, 3, 17, 5, 12, 13, 14, 6, 16};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {11, 28, 10, 19, 27, 41, 8, 30, 38, 46, 18, 43, 37, 22, 48, 50, 39, 42, 26, 31, 47, 43, 31, 43, 26, 50, 49, 38, 33, 30, 44, 43, 36, 34, 39, 46, 42, 40, 49, 46, 42, 49, 48, 49, 48, 50, 50, 50, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> tables = {15, 13, 18, 3, 3, 18, 14, 16, 13, 10, 15, 2, 2, 8, 19, 19, 16, 3, 12, 16};
    vector<int> groupSizes = {4, 14, 7, 3, 9, 10, 13, 17, 19, 11, 6, 15, 12, 18, 4, 14, 19, 3, 8, 15, 18, 17, 19, 20, 14, 6, 11, 12, 8, 16, 11, 9, 10, 4, 13, 16, 19, 11, 15, 1, 19, 14, 4, 4, 10, 15, 11, 18, 18, 16};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {8, 42, 4, 13, 40, 50, 37, 8, 19, 23, 21, 17, 22, 48, 42, 31, 40, 35, 35, 50, 29, 39, 38, 34, 30, 45, 39, 31, 49, 39, 36, 49, 42, 46, 46, 50, 46, 45, 47, 46, 48, 46, 50, 49, 45, 47, 50, 49, 50, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> tables = {17, 14, 18, 16, 11, 9, 5, 2, 20, 10, 1, 9, 4, 12, 2, 1, 16, 18, 17, 8};
    vector<int> groupSizes = {20, 15, 14, 9, 12, 16, 8, 17, 8, 7, 14, 14, 2, 1, 1, 18, 20, 7, 18, 20, 2, 16, 13, 4, 11, 1, 10, 13, 16, 11, 15, 18, 16, 9, 18, 13, 2, 5, 5, 12, 19, 1, 3, 13, 11, 9, 12, 2, 2, 15};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {16, 35, 45, 10, 35, 38, 29, 18, 15, 31, 40, 20, 30, 29, 37, 22, 25, 38, 37, 48, 23, 45, 32, 49, 33, 42, 43, 29, 42, 39, 32, 40, 33, 37, 39, 49, 50, 46, 48, 44, 50, 47, 49, 44, 50, 50, 49, 49, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> tables = {3, 5, 13, 2, 8, 9, 3, 18, 5, 20, 5, 8, 6, 5, 15, 13, 13, 16, 13, 17};
    vector<int> groupSizes = {17, 18, 4, 19, 16, 5, 3, 18, 1, 20, 12, 14, 13, 10, 7, 2, 9, 6, 8, 2, 5, 16, 8, 7, 8, 14, 8, 2, 8, 1, 13, 17, 11, 4, 15, 5, 17, 13, 4, 1, 16, 8, 8, 18, 2, 1, 3, 16, 2, 17};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> departures = {31, 39, 46, 49, 42, 31, 42, 37, 31, 25, 37, 32, 25, 16, 27, 42, 21, 44, 48, 40, 35, 24, 35, 36, 40, 47, 35, 50, 46, 30, 45, 43, 46, 37, 49, 39, 48, 40, 49, 49, 45, 50, 44, 44, 45, 47, 50, 50, 49, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> tables = {6, 17, 9, 8, 11, 7, 4, 9, 6, 2, 2, 20, 12, 12, 5, 16, 8, 7, 18, 1, 1, 9, 13, 19, 9, 15, 12, 16, 17, 18, 18, 4, 5, 3, 13, 16, 14, 1, 9, 12, 3, 8, 3, 12, 13, 12, 2, 18, 15, 14};
    vector<int> groupSizes = {17, 5, 20, 19, 6, 17, 2, 3, 9, 13, 3, 12, 3, 17, 18, 10, 17, 2, 12, 17, 3, 10, 15, 1, 2, 16, 14, 17, 2, 8, 11, 8, 20, 11, 10, 7, 7, 14, 2, 19, 15, 7, 5, 6, 15, 15, 15, 8, 15, 17};
    vector<int> arrivals = {0, 3, 4, 5, 6, 19, 20, 25, 33, 36, 39, 44, 45, 49, 51, 55, 62, 68, 77, 82, 85, 86, 92, 93, 97, 98, 102, 106, 108, 115, 121, 122, 125, 130, 135, 139, 145, 150, 154, 156, 162, 163, 164, 176, 179, 180, 184, 188, 191, 198};
    vector<int> departures = {106, 115, 196, 55, 128, 86, 187, 36, 139, 115, 199, 52, 95, 89, 153, 144, 164, 177, 184, 136, 101, 197, 165, 152, 114, 197, 198, 153, 162, 127, 131, 178, 129, 186, 175, 168, 172, 155, 169, 180, 169, 180, 171, 187, 198, 182, 186, 190, 200, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> tables = {15, 15, 4, 14, 17, 10, 10, 5, 19, 19, 19, 3, 3, 6, 5, 15, 1, 20, 1, 19, 20, 16, 5, 10, 8, 15, 7, 8, 5, 19, 16, 13, 15, 18, 11, 9, 2, 13, 2, 8, 20, 6, 11, 9, 5, 19, 7, 16, 18, 8};
    vector<int> groupSizes = {20, 9, 1, 20, 7, 15, 4, 18, 16, 8, 16, 18, 4, 9, 11, 11, 20, 2, 5, 19, 12, 8, 12, 17, 3, 10, 18, 13, 9, 1, 4, 9, 20, 7, 8, 15, 7, 17, 14, 3, 16, 12, 14, 18, 1, 1, 8, 3, 18, 15};
    vector<int> arrivals = {6, 13, 14, 20, 27, 28, 29, 32, 34, 35, 41, 43, 44, 48, 49, 56, 60, 61, 66, 68, 69, 84, 93, 95, 97, 98, 102, 115, 120, 124, 128, 133, 141, 144, 148, 149, 150, 152, 154, 156, 161, 170, 171, 175, 181, 184, 190, 193, 195, 199};
    vector<int> departures = {92, 136, 103, 97, 79, 123, 130, 192, 191, 195, 57, 195, 165, 51, 160, 143, 184, 107, 178, 76, 181, 167, 136, 160, 104, 153, 175, 143, 195, 140, 158, 148, 143, 157, 191, 151, 167, 172, 196, 183, 195, 183, 184, 186, 186, 197, 199, 196, 196, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> tables = {15, 4, 15, 13, 15, 8, 14, 11, 15, 10, 7, 16, 11, 12, 19, 1, 6, 10, 14, 9, 19, 18, 8, 15, 1, 11, 15, 2, 16, 17, 5, 12, 6, 7, 8, 11, 15, 17, 19, 13, 5, 12, 14, 19, 11, 18, 9, 4, 11, 18};
    vector<int> groupSizes = {13, 11, 10, 6, 15, 6, 10, 7, 17, 20, 11, 8, 6, 2, 19, 10, 18, 9, 11, 18, 10, 19, 15, 4, 5, 11, 8, 16, 19, 2, 16, 6, 16, 20, 8, 14, 1, 6, 1, 16, 18, 9, 4, 14, 20, 10, 4, 4, 1, 4};
    vector<int> arrivals = {0, 2, 8, 9, 10, 17, 18, 19, 33, 36, 43, 46, 52, 54, 56, 58, 59, 60, 63, 71, 75, 76, 77, 78, 83, 97, 99, 116, 117, 118, 121, 124, 126, 127, 129, 138, 142, 147, 150, 159, 163, 164, 166, 168, 173, 175, 178, 179, 186, 195};
    vector<int> departures = {114, 135, 88, 150, 155, 36, 166, 102, 53, 105, 141, 153, 186, 148, 131, 123, 145, 166, 121, 146, 190, 122, 175, 145, 187, 170, 106, 179, 195, 131, 190, 171, 187, 135, 198, 141, 190, 157, 175, 197, 180, 199, 171, 186, 180, 178, 197, 185, 193, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> tables = {4, 6, 1, 5, 6, 17, 14, 11, 1, 12, 14, 3, 12, 3, 3, 5, 12, 17, 7, 3, 13, 20, 10, 11, 4, 1, 8, 14, 6, 15, 11, 13, 15, 15, 15, 12, 15, 10, 16, 8, 19, 14, 4, 1, 19, 19, 10, 9, 14, 12};
    vector<int> groupSizes = {6, 12, 3, 1, 10, 20, 2, 2, 8, 6, 18, 19, 8, 6, 2, 9, 1, 8, 10, 17, 11, 4, 16, 7, 16, 10, 14, 2, 8, 17, 13, 11, 12, 5, 18, 7, 6, 15, 16, 4, 13, 18, 7, 18, 16, 11, 7, 6, 6, 4};
    vector<int> arrivals = {0, 16, 23, 28, 29, 31, 33, 34, 39, 42, 43, 44, 46, 47, 50, 56, 64, 66, 68, 71, 76, 81, 85, 87, 89, 96, 99, 104, 115, 118, 119, 123, 125, 127, 133, 134, 135, 144, 151, 155, 156, 157, 161, 166, 172, 173, 181, 186, 187, 193};
    vector<int> departures = {103, 121, 144, 53, 50, 175, 133, 132, 168, 180, 61, 135, 114, 164, 119, 101, 138, 131, 166, 191, 99, 191, 149, 89, 144, 113, 196, 186, 162, 195, 133, 138, 133, 150, 196, 192, 188, 161, 175, 197, 173, 158, 172, 174, 176, 184, 191, 194, 199, 195};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> tables = {4, 15, 6, 13, 18, 3, 14, 20, 18, 17, 9, 2, 1, 11, 7, 16, 16, 12, 10, 2, 19, 2, 1, 7, 15, 20, 15, 14, 6, 7, 19, 14, 9, 13, 1, 10, 2, 10, 5, 5, 17, 19, 14, 17, 5, 9, 6, 11, 15, 16};
    vector<int> groupSizes = {16, 14, 6, 3, 10, 11, 7, 1, 4, 5, 19, 20, 16, 12, 14, 20, 20, 8, 3, 8, 17, 6, 1, 13, 5, 6, 8, 11, 12, 15, 17, 5, 6, 11, 18, 2, 8, 16, 17, 5, 11, 13, 2, 17, 17, 13, 15, 5, 15, 13};
    vector<int> arrivals = {5, 8, 11, 16, 18, 28, 33, 41, 44, 59, 63, 70, 72, 76, 79, 83, 86, 90, 93, 94, 96, 100, 102, 103, 108, 110, 115, 116, 117, 118, 129, 134, 137, 139, 148, 150, 153, 154, 155, 158, 165, 166, 170, 182, 183, 185, 189, 190, 194, 196};
    vector<int> departures = {172, 36, 139, 97, 125, 72, 131, 118, 177, 132, 164, 104, 129, 156, 162, 169, 172, 164, 121, 138, 108, 147, 154, 193, 189, 144, 119, 147, 127, 155, 165, 178, 176, 199, 186, 197, 198, 198, 163, 178, 184, 199, 178, 188, 193, 197, 200, 197, 197, 198};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {13, 19, 6, 11, 12, 13, 3, 2, 14, 4, 18, 15, 5, 4, 13, 1, 8, 14, 5, 7, 13, 16, 12, 4, 13, 9, 3, 2, 18, 3, 1, 4, 12, 7, 19, 14, 8, 4, 17, 13, 16, 15, 5, 20, 19, 5, 19, 19, 8, 8};
    vector<int> groupSizes = {1, 6, 20, 15, 8, 16, 13, 1, 10, 16, 8, 13, 1, 7, 18, 15, 11, 4, 19, 9, 16, 20, 3, 12, 13, 2, 18, 9, 3, 2, 6, 20, 16, 8, 18, 3, 15, 4, 5, 10, 18, 15, 11, 2, 10, 1, 3, 15, 7, 8};
    vector<int> arrivals = {5, 7, 8, 10, 21, 22, 23, 25, 26, 27, 29, 30, 31, 32, 40, 47, 48, 49, 50, 62, 73, 74, 75, 80, 89, 93, 97, 100, 107, 114, 128, 131, 135, 139, 141, 146, 149, 150, 155, 162, 165, 168, 169, 173, 183, 184, 191, 192, 193, 198};
    vector<int> departures = {160, 25, 168, 164, 108, 186, 180, 144, 130, 181, 57, 137, 45, 175, 145, 54, 194, 95, 111, 79, 108, 131, 168, 173, 162, 97, 185, 154, 143, 119, 132, 165, 193, 180, 144, 167, 178, 183, 175, 185, 193, 182, 175, 185, 190, 189, 199, 194, 196, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> tables = {20, 8, 7, 4, 3, 3, 18, 8, 12, 20, 19, 3, 9, 12, 17, 5, 19, 18, 15, 3, 7, 4, 20, 6, 4, 9, 4, 5, 18, 13, 1, 1, 7, 13, 12, 19, 18, 4, 10, 18, 17, 6, 17, 9, 5, 5, 12, 11, 13, 5};
    vector<int> groupSizes = {1, 13, 19, 12, 4, 20, 18, 10, 17, 8, 1, 5, 9, 4, 7, 16, 11, 11, 15, 17, 20, 6, 1, 20, 3, 3, 2, 10, 7, 5, 12, 7, 9, 13, 14, 20, 14, 8, 11, 19, 13, 6, 8, 10, 13, 15, 11, 14, 14, 8};
    vector<int> arrivals = {0, 9, 11, 14, 20, 24, 27, 30, 32, 34, 37, 41, 43, 48, 49, 65, 68, 71, 74, 75, 76, 79, 84, 85, 86, 95, 99, 101, 102, 109, 111, 116, 119, 128, 134, 140, 141, 146, 150, 157, 158, 168, 169, 172, 174, 179, 181, 182, 184, 187};
    vector<int> departures = {183, 151, 146, 77, 101, 104, 43, 134, 176, 118, 156, 177, 68, 110, 105, 155, 86, 108, 118, 85, 196, 187, 125, 198, 113, 168, 131, 158, 195, 143, 164, 149, 138, 172, 194, 159, 185, 176, 155, 200, 164, 183, 191, 181, 183, 186, 192, 185, 196, 189};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> tables = {6, 7, 7, 3, 14, 8, 11, 6, 15, 7, 4, 15, 10, 4, 8, 17, 4, 6, 5, 20, 10, 4, 9, 19, 17, 11, 6, 10, 8, 8, 9, 20, 20, 4, 6, 16, 4, 13, 20, 6, 5, 3, 12, 12, 3, 3, 16, 1, 16, 2};
    vector<int> groupSizes = {10, 10, 1, 1, 14, 8, 3, 11, 4, 13, 11, 5, 17, 10, 14, 1, 5, 4, 2, 13, 18, 14, 1, 14, 7, 7, 11, 14, 11, 12, 17, 19, 18, 8, 4, 9, 4, 17, 19, 19, 9, 2, 17, 9, 8, 15, 19, 16, 17, 17};
    vector<int> arrivals = {0, 3, 5, 7, 9, 11, 16, 18, 23, 24, 25, 28, 30, 32, 35, 38, 40, 41, 42, 45, 53, 60, 66, 68, 70, 72, 73, 77, 82, 85, 88, 95, 104, 105, 109, 115, 124, 129, 132, 138, 144, 150, 151, 157, 169, 177, 178, 182, 195, 198};
    vector<int> departures = {41, 175, 31, 140, 186, 122, 62, 82, 107, 119, 101, 108, 161, 186, 70, 77, 112, 189, 158, 76, 194, 77, 115, 99, 123, 95, 132, 170, 134, 124, 187, 112, 139, 133, 183, 116, 144, 140, 192, 156, 177, 189, 158, 162, 194, 181, 187, 195, 198, 199};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> tables = {9, 7, 15, 20, 15, 14, 2, 20, 12, 12, 11, 17, 4, 12, 20, 12, 3, 3, 18, 8, 12, 15, 18, 18, 17, 2, 9, 12, 11, 7, 12, 18, 13, 8, 7, 17, 8, 8, 6, 4, 1, 15, 6, 16, 2, 8, 1, 6, 17, 2};
    vector<int> groupSizes = {4, 18, 3, 2, 15, 2, 5, 4, 2, 16, 5, 12, 19, 1, 14, 19, 9, 18, 19, 18, 15, 9, 5, 6, 3, 20, 8, 20, 9, 3, 13, 3, 2, 8, 9, 12, 14, 14, 8, 2, 14, 6, 19, 14, 14, 6, 18, 12, 18, 6};
    vector<int> arrivals = {2, 3, 5, 8, 10, 15, 17, 21, 24, 27, 39, 40, 46, 47, 49, 53, 54, 58, 61, 67, 72, 87, 88, 97, 104, 105, 106, 107, 113, 115, 116, 117, 118, 120, 128, 132, 138, 139, 145, 149, 151, 154, 164, 165, 166, 171, 174, 175, 177, 179};
    vector<int> departures = {33, 78, 44, 110, 49, 155, 92, 60, 187, 41, 84, 195, 62, 133, 88, 132, 65, 140, 101, 103, 135, 106, 135, 190, 200, 117, 109, 178, 174, 195, 179, 175, 149, 152, 173, 193, 172, 156, 198, 174, 187, 198, 165, 173, 174, 181, 178, 186, 187, 193};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> tables = {17, 4, 10, 10, 15, 16, 13, 14, 3, 1, 16, 5, 12, 15, 14, 1, 17, 19, 19, 17, 11, 5, 3, 4, 17, 5, 17, 9, 1, 3, 5, 12, 6, 11, 3, 13, 7, 13, 9, 14, 13, 1, 18, 10, 15, 9, 8, 15, 20, 6};
    vector<int> groupSizes = {11, 3, 18, 17, 4, 3, 2, 2, 9, 4, 13, 14, 9, 7, 5, 12, 17, 17, 7, 5, 16, 10, 3, 17, 5, 11, 4, 1, 19, 3, 7, 7, 18, 8, 10, 15, 3, 10, 5, 11, 8, 11, 7, 13, 5, 2, 16, 16, 18, 13};
    vector<int> arrivals = {8, 9, 13, 19, 21, 25, 27, 36, 38, 49, 50, 51, 57, 69, 71, 72, 73, 77, 79, 81, 82, 92, 99, 100, 103, 106, 108, 115, 121, 123, 124, 128, 131, 139, 146, 148, 160, 162, 165, 170, 172, 175, 176, 178, 187, 189, 192, 194, 197, 199};
    vector<int> departures = {99, 117, 164, 198, 66, 171, 121, 150, 157, 122, 108, 89, 90, 136, 198, 121, 166, 133, 159, 153, 137, 94, 180, 130, 153, 176, 139, 130, 123, 128, 198, 155, 157, 151, 196, 198, 198, 173, 198, 178, 198, 180, 178, 182, 198, 192, 196, 197, 199, 200};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> tables = {2, 14, 5, 7, 20, 7, 8, 12, 16, 13, 7, 14, 4, 14, 4, 5, 15, 8, 17, 9, 3, 6, 18, 12, 19, 17, 10, 7, 13, 5, 8, 6, 12, 8, 16, 18, 19, 20, 10, 19, 2, 18, 13, 18, 5, 5, 13, 20, 6, 17};
    vector<int> groupSizes = {5, 19, 5, 6, 18, 1, 15, 20, 18, 11, 11, 16, 20, 16, 1, 2, 12, 6, 16, 12, 13, 16, 17, 15};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {11, 21, 11, 7, 10, 18, 16, 10, 23, 12, 18, 20, 14, 18, 16, 22, 19, 20, 25, 21, 24, 25, 24, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {11, 4, 15, 7, 3, 10, 8, 11, 10, 8, 5, 19, 17, 20, 11, 12, 7, 7, 15, 1, 10, 8, 17, 7, 5, 5, 3, 8, 7, 14, 19, 7, 8, 16, 12, 14, 15, 9, 6, 2, 4, 1, 7, 2, 19, 8, 12, 9, 16, 13};
    vector<int> groupSizes = {1, 9, 4, 11, 18, 12, 8, 13, 3, 18, 17, 19, 13, 15, 16, 14, 1, 15, 18, 13, 4, 14, 15, 10};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24};
    vector<int> departures = {20, 23, 4, 5, 7, 25, 18, 16, 9, 20, 11, 19, 22, 21, 19, 20, 24, 23, 21, 25, 25, 25, 25, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {12, 13, 7, 19, 1, 10, 17, 1, 15, 4, 18, 13, 18, 7, 8, 19, 6, 2, 17, 10, 2, 12, 4, 5, 7, 2, 5, 8, 1, 2, 17, 1, 7, 11, 6, 20, 13, 2, 7, 16, 13, 8, 3, 19, 3, 13, 19, 13, 14, 17};
    vector<int> groupSizes = {5, 11, 14, 13, 2, 17, 19, 16, 8, 10, 1, 14, 8, 12, 6, 5, 14, 4, 6, 10, 7, 3, 13, 18};
    vector<int> arrivals = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {9, 13, 12, 19, 24, 20, 25, 19, 16, 13, 25, 23, 20, 22, 16, 23, 23, 23, 21, 22, 23, 24, 24, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {2, 5, 20, 16, 19, 9, 20, 8, 11, 9, 1, 16, 10, 6, 20, 10, 9, 3, 18, 6, 5, 7, 19, 14, 16, 3, 16, 14, 3, 18, 10, 14, 3, 18, 4, 12, 3, 10, 10, 16, 10, 14, 6, 11, 5, 15, 11, 4, 12, 12};
    vector<int> groupSizes = {7, 9, 6, 16, 13, 1, 10, 16, 8, 8, 11, 7, 15, 12, 10, 5, 1, 15, 10, 9, 2, 17, 8, 2};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {19, 21, 18, 10, 23, 18, 19, 21, 16, 19, 22, 19, 17, 24, 22, 23, 25, 20, 22, 22, 23, 25, 24, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {9, 3, 2, 8, 3, 7, 4, 6, 20, 20, 4, 1, 5, 1, 20, 11, 15, 3, 3, 4, 9, 15, 1, 19, 19, 19, 5, 5, 13, 17, 6, 7, 4, 6, 1, 6, 3, 19, 2, 8, 4, 18, 1, 20, 12, 18, 3, 12, 20, 10};
    vector<int> groupSizes = {5, 14, 6, 15, 4, 1, 7, 9, 2, 9, 6, 5, 16, 6, 5, 12, 20, 13, 11, 18, 16, 19, 14, 7};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {6, 25, 20, 20, 10, 23, 17, 18, 22, 19, 14, 16, 25, 25, 18, 18, 23, 19, 21, 21, 22, 24, 24, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> tables = {16, 20, 9, 12, 15, 1, 4, 16, 9, 12, 14, 6, 14, 20, 1, 14, 18, 6, 11, 10, 6, 20, 5, 18, 6, 10, 19, 17, 14, 11, 10, 1, 1, 15, 5, 7, 3, 10, 19, 8, 18, 7, 7, 15, 11, 14, 5, 14, 10, 19};
    vector<int> groupSizes = {9, 6, 11, 20, 18, 3, 14, 16, 20, 4, 5, 1, 16, 13, 17, 11, 7, 18, 2, 19, 14, 9, 7, 14};
    vector<int> arrivals = {0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {17, 7, 6, 23, 19, 14, 25, 9, 22, 11, 23, 18, 22, 24, 17, 18, 24, 25, 20, 23, 25, 23, 24, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {3, 20, 12, 7, 8, 12, 13, 12, 3, 14, 15, 15, 12, 20, 16, 9, 6, 3, 20, 14, 5, 3, 17, 5, 16, 18, 15, 8, 2, 15, 13, 20, 5, 3, 12, 11, 13, 1, 13, 3, 10, 3, 20, 10, 4, 3, 2, 10, 2, 14};
    vector<int> groupSizes = {20, 15, 5, 6, 5, 6, 19, 16, 14, 17, 15, 6, 3, 4, 10, 1, 6, 2, 6, 1, 7, 17, 2, 7};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {10, 16, 18, 10, 15, 7, 24, 22, 16, 19, 25, 18, 25, 19, 23, 20, 20, 19, 24, 21, 22, 25, 24, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> tables = {5, 8, 19, 17, 12, 2, 20, 5, 10, 7, 12, 8, 19, 5, 18, 14, 15, 13, 15, 2, 5, 18, 16, 13, 5, 5, 18, 3, 12, 12, 17, 10, 4, 17, 19, 16, 3, 17, 6, 15, 5, 5, 15, 6, 14, 11, 8, 3, 20, 11};
    vector<int> groupSizes = {16, 7, 1, 8, 13, 18, 11, 9, 14, 12, 13, 9, 11, 11, 1, 7, 18, 10, 11, 2, 7, 20, 8, 1};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {17, 2, 17, 9, 10, 12, 12, 8, 10, 14, 22, 13, 18, 14, 15, 19, 21, 23, 22, 23, 23, 23, 25, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> tables = {9, 12, 11, 16, 20, 8, 1, 1, 16, 20, 4, 6, 13, 11, 6, 16, 4, 7, 3, 19, 19, 7, 3, 9, 3, 17, 8, 7, 4, 18, 18, 4, 2, 11, 11, 14, 14, 12, 5, 2, 10, 15, 18, 15, 6, 7, 8, 2, 7, 5};
    vector<int> groupSizes = {13, 8, 5, 19, 12, 9, 12, 15, 4, 16, 6, 3, 1, 2, 12, 14, 13, 3, 10, 1, 13, 11, 8, 20};
    vector<int> arrivals = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> departures = {14, 20, 11, 9, 13, 11, 9, 25, 10, 15, 13, 15, 17, 15, 25, 24, 24, 19, 20, 23, 23, 23, 24, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
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
    vector<int> tables = {14, 14, 19, 4, 8, 17, 9, 18, 20, 20, 1, 13, 18, 4, 4, 11, 16, 1, 15, 20, 18, 18, 20, 7, 3, 10, 14, 16, 9, 15, 6, 16, 15, 7, 18, 18, 8, 12, 9, 3, 2, 20, 10, 17, 8, 14, 6, 3, 9, 3};
    vector<int> groupSizes = {20, 16, 3, 9, 11, 1, 3, 11, 20, 20, 1, 13, 8, 10, 5, 19, 8, 7, 3, 8, 6, 1, 17, 9};
    vector<int> arrivals = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 23, 24};
    vector<int> departures = {19, 19, 16, 5, 24, 22, 15, 14, 18, 13, 15, 19, 16, 20, 21, 19, 23, 23, 24, 25, 21, 25, 25, 25};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> tables = {13, 9, 6, 1, 9, 8, 6, 2, 8, 20};
    vector<int> groupSizes = {20, 10, 11, 10, 1, 5, 16, 2, 9, 17};
    vector<int> arrivals = {12, 14, 64, 78, 100, 121, 151, 155, 162, 164};
    vector<int> departures = {19, 26, 159, 96, 155, 134, 169, 199, 169, 174};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> tables = {4};
    vector<int> groupSizes = {4, 8, 4, 2, 2, 4};
    vector<int> arrivals = {0, 10, 12, 16, 18, 26};
    vector<int> departures = {10, 20, 18, 26, 36, 28};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> tables = {18, 15, 2, 6};
    vector<int> groupSizes = {7, 9, 16, 3, 10, 3, 2, 10, 16, 16};
    vector<int> arrivals = {10, 15, 19, 20, 21, 22, 27, 35, 37, 43};
    vector<int> departures = {13, 24, 22, 32, 32, 32, 35, 48, 41, 44};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> tables = {18, 1, 2, 6};
    vector<int> groupSizes = {7, 9, 16, 3, 10, 3, 2, 10, 16, 16};
    vector<int> arrivals = {10, 15, 19, 20, 21, 22, 27, 35, 37, 43};
    vector<int> departures = {13, 24, 22, 32, 32, 32, 35, 48, 41, 44};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> tables = {4, 4};
    vector<int> groupSizes = {4, 8, 4, 2, 2, 4};
    vector<int> arrivals = {0, 10, 12, 16, 18, 26};
    vector<int> departures = {10, 20, 18, 26, 36, 28};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> tables = {10, 8, 11, 16};
    vector<int> groupSizes = {14, 1, 15, 1, 19, 15, 9, 15, 20, 2};
    vector<int> arrivals = {4, 5, 7, 18, 21, 25, 29, 31, 46, 49};
    vector<int> departures = {8, 37, 11, 36, 36, 46, 40, 42, 47, 50};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> tables = {5, 2};
    vector<int> groupSizes = {4, 2, 3};
    vector<int> arrivals = {0, 1, 11};
    vector<int> departures = {10, 10, 30};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> tables = {4};
    vector<int> groupSizes = {4, 4};
    vector<int> arrivals = {0, 8};
    vector<int> departures = {8, 16};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> tables = {4, 11, 8, 10, 3};
    vector<int> groupSizes = {8, 11};
    vector<int> arrivals = {0, 5};
    vector<int> departures = {10, 20};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> tables = {10, 2};
    vector<int> groupSizes = {2, 10};
    vector<int> arrivals = {1, 2};
    vector<int> departures = {10, 10};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> tables = {6, 6};
    vector<int> groupSizes = {2, 4};
    vector<int> arrivals = {1, 3};
    vector<int> departures = {4, 6};
    RestaurantManager* pObj = new RestaurantManager();
    clock_t start = clock();
    int result = pObj->allocateTables(tables, groupSizes, arrivals, departures);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22646424&rd=13505&pm=8786
********************************************************************************
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
#include<sstream>
#include<cctype>
#include<cstdlib>
using namespace std;
class RestaurantManager
{
 public:
 int allocateTables(vector <int> t, vector <int> g, vector <int> a, vector <int> d)
 { 
  int count=0;
  sort(t.begin(),t.end());
  vector<int>end(t.size(),0);
  for(int i=0;i<a.size();i++)
  {
   bool found=false;
   for(int j=0;j<t.size();j++)
   { 
    if(g[i]>t[j])
    continue;
    if(a[i]>=end[j])
    {
     end[j]=d[i];
     found=true;
     break;
     }
    }
   if(!found)
   count+=g[i];
   }
  return count;
  }
};

********************************************************************************
*******************************************************************************/