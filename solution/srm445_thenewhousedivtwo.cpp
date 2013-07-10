/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10511
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

class TheNewHouseDivTwo {
public:
    int count(vector<int> x, vector<int> y);
};

int TheNewHouseDivTwo::count(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {4, 5, 0, 8, -3, 5, 4, 7};
    vector<int> y = {9, -4, 2, 1, 1, 11, 0, 2};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {4, 4, 4};
    vector<int> y = {7, 7, 7};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {1, 7, 3, 4, 9, 3, 7, 1, 1, 6, 1, 6, 1, 9, 7, 9, 4, 9, 1, 4, 7, 1, 2, 5, 3, 8, 7, 7, 1};
    vector<int> y = {7, 2, 8, 9, 4, 3, 4, 1, 4, 1, 7, 8, 1, 1, 1, 4, 7, 1, 9, 4, 9, 1, 4, 1, 1, 1, 2, 4, 3};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {44, -73, -78, 59, -55, 35, -25, 55, -80, -61, 31, 47, -94, 57, -13, 92, -72, -29, 17, 23, 98, -82, -48, -6, -91, -43, 99, -88, 20, -24, 53, -14, -56, 5, -88, -16, -28};
    vector<int> y = {64, 17, -76, 95, 53, 62, 6, 42, 98, 53, -14, 91, 44, 81, 23, -42, -42, 2, 80, -91, 28, -13, -15, 93, -65, 79, -1, -35, 7, -75, -54, 74, 53, -62, 53, 23, -98};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {-88, 92, -84, -84, 77, -25, -33, 36, 25, 48, 8, 46, -97, 20, 10, -89, -28, -37, -85, 16, 93, 66, 60, -94, -33, -71, -25, 14, -59, -38, 4, -1, 38, 35, 66, -14, -100, -55, -60, 37, 56, -31, 100, 67, -5, -18, -23};
    vector<int> y = {89, 49, -85, 89, -37, -49, -19, -46, 92, 22, 2, 2, 89, -10, 2, 75, 41, 86, 80, -43, 42, 2, 11, 27, 12, 53, 41, 83, 41, 26, -94, -34, -98, 86, 92, -64, -67, -93, 26, 35, -37, -19, 35, -4, -67, 52, -7};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {-9};
    vector<int> y = {-97};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {65, -73, 36, -63, -46, -48, 53, 24, -21, -72, -58, -61, -39, 4, 53, 38, 18, -28, -100, -64, 15, 68, -25, -54, -76, -31, 94, 65, 30, -10, -73, 53, 92, -22, -13, -70, -73, 98, -82, 91, 47, -98, 50};
    vector<int> y = {-27, -64, -63, -86, -85, 76, -52, 76, 74, -45, -76, 2, 74, -4, 74, 11, -43, -43, 55, -13, 61, -2, -22, -58, 73, 46, 44, -16, -94, -22, 32, 62, -58, -88, 0, 77, -85, -68, -52, 71, 11, 49, 53};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {25, -40, 50, -99, -67, 59, 11, 47, 26, 34, 41, 32, -25, -24, -22, -43, -55, -49, -39, 90, -32, 49, -67, -8, -9, -100, 85, 89, 46};
    vector<int> y = {-98, -7, -93, -31, 80, 23, -31, 88, 79, 99, -100, 75, 66, 84, -40, -21, -88, -3, 35, -87, -78, -10, 59, -89, 31, 80, -37, -49, 54};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {99, 91, 96, 91, 95, 99, 94, 95, 91, 91, 98, 91, 95, 99, 93, 91, 94, 95, 91, 91, 92, 100, 94, 91, 95, 91, 99, 97, 96, 91, 97, 96, 93, 98, 99, 93, 99, 93, 99, 98, 99, 95, 95, 97, 95, 91, 95, 100};
    vector<int> y = {93, 93, 93, 91, 97, 97, 93, 98, 97, 99, 100, 91, 91, 96, 93, 97, 91, 97, 97, 95, 95, 95, 97, 97, 94, 93, 91, 100, 91, 93, 95, 93, 91, 92, 96, 92, 91, 91, 99, 97, 97, 91, 96, 95, 99, 91, 98, 100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {91, 98, 100, 95, 95, 100, 97, 91, 98, 96, 94, 93, 91, 98, 98, 93, 91, 99, 97, 99, 97, 93, 93, 91, 95, 96, 91, 99, 93, 94, 100, 91, 97, 91, 92, 97, 92, 96, 92, 99, 95, 91, 96, 99, 97, 93, 97};
    vector<int> y = {91, 93, 96, 95, 99, 99, 97, 97, 97, 93, 91, 91, 97, 99, 96, 96, 95, 93, 97, 98, 91, 95, 96, 95, 99, 97, 91, 91, 97, 96, 91, 91, 97, 91, 91, 91, 93, 97, 94, 95, 93, 98, 91, 93, 97, 93, 91};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {91, 91, 93, 91, 93, 100, 92, 95, 97, 98, 99, 99, 96, 91, 99, 97, 91, 97, 92, 99, 95, 96, 99, 95, 95, 93, 93, 93, 96, 96, 92, 95, 100, 91, 98, 91, 92, 93, 97, 95, 93};
    vector<int> y = {96, 94, 91, 94, 100, 91, 91, 91, 93, 91, 95, 91, 91, 91, 97, 91, 91, 92, 94, 91, 95, 91, 95, 91, 99, 91, 94, 96, 91, 91, 96, 99, 97, 97, 91, 91, 96, 91, 99, 91, 99};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {91, 99, 99, 99, 97, 96, 93, 97, 91, 93, 91, 93, 97, 96, 100, 91, 99, 97, 95, 95, 98, 97, 96, 91, 95, 97, 91, 91, 100, 93, 99, 97, 96, 95, 98, 95, 91, 99, 100, 91, 91, 93, 97, 94, 95};
    vector<int> y = {97, 93, 91, 94, 91, 91, 91, 91, 92, 91, 91, 99, 99, 93, 91, 96, 94, 95, 94, 93, 91, 96, 98, 96, 94, 96, 91, 96, 99, 99, 97, 99, 91, 91, 99, 91, 95, 91, 95, 93, 93, 99, 91, 100, 97};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {91, 91, 95, 92, 97, 93, 99, 91, 97, 96, 91, 98, 93, 93, 91, 93, 97, 95, 95, 97, 97, 99, 95, 93, 95, 96, 93, 99, 91, 97, 97, 97, 91, 93, 91, 91, 99, 91, 91, 99, 96, 93, 91, 91, 93};
    vector<int> y = {91, 91, 96, 91, 91, 91, 93, 94, 93, 96, 91, 99, 91, 97, 94, 97, 97, 95, 93, 91, 91, 96, 99, 95, 98, 97, 97, 99, 95, 91, 98, 95, 91, 99, 99, 99, 97, 97, 97, 93, 94, 100, 93, 95, 91};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {97, 99, 91, 93, 97, 94, 95, 96, 97, 91, 91, 97, 91, 91, 99, 97, 93, 95, 97, 99, 95, 95, 95, 98, 98, 91, 91, 91, 91, 93, 95, 91, 92, 93, 91, 99, 95, 99, 96, 96, 93};
    vector<int> y = {95, 91, 95, 91, 91, 93, 95, 91, 99, 93, 99, 95, 97, 92, 97, 99, 100, 97, 91, 91, 97, 96, 96, 99, 97, 93, 98, 98, 95, 91, 93, 98, 92, 99, 97, 95, 93, 91, 99, 91, 95};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-1, -77, 86, -97, -58, -43, 85, -97, -52, 13, 8, -91, 82, -49, -19, -97, 21, 49, -58, 88, 14, -30, 69, -5, 23, 47, 65, -97, -82, -100, 94, 8, -17, -1, -20, 57, 41, 80, 71, -25, -71, 43, 43, 94, 27, 39, 34, 92, 93, 89};
    vector<int> y = {77, 30, 19, -93, 11, 93, 84, 14, 82, -80, 86, 82, -43, -92, -88, 35, 59, -73, 68, -49, 65, 23, 32, -73, -19, -70, -34, 50, -80, -79, -70, -45, 71, -91, -79, -10, -64, -33, -73, -91, -100, 62, -40, -20, 20, 4, 94, 13, 64, 95};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {-58, 66, 9, -59, -54, -1, 84, -76, -85, 86, 81, 55, -46, 26, 70, -58, 9, 48, -34, -30, -52, -90, 83, -72, -58, 2, 20, -9, -51, 51, 98, -83, -5, -46, -23, 56, -33, -26, 43, -85, -46, 41, -89, -36, 44, -22, -55};
    vector<int> y = {24, -44, 58, -65, -65, 26, -63, 39, 50, 9, 95, 94, -91, -22, 84, -70, -88, 54, 50, 85, 7, -76, 62, -23, 72, -46, -31, -13, 37, -95, 69, -41, 78, 88, 2, -88, -33, 18, -33, -46, -89, 39, -73, 46, -11, 81, -57};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {34, 8, 50, -64, 49, 44, -72, -43, -40, -22, 86, -12, 63, -29, -45, 14, -33, 89, 51, -82, -94, 79, 99, -52, 26, 32, 60, -39, 83, 47, -29, 77, 68, -88, 40, -16, 65, 86, 95, 44, -76, -91, -16, -70, -35, 65, 18};
    vector<int> y = {-18, -78, 93, 5, -65, -9, -54, -31, 67, -95, -16, -40, -21, -13, 62, 69, -87, -61, 11, -18, -28, -33, -46, 41, 92, 83, -89, 33, 77, -99, 92, -79, 5, -51, -100, 85, -82, -61, 1, 71, 56, -22, -66, -59, -48, 5, -1};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {60, 98, 65, -85, -79, -19, -79, -56, -89, -5, 53, 53, 31, -88, -28, 23, -72, -69, 47, -58, 35, -91, 37, 77, 10, 57, -25, -73, -14, 9, -37, -16, -25, -25, -78, 38, 99, -55, -55, -29, 4, -48, -82, 66, -92, 66, 55, -88, 83, -24};
    vector<int> y = {11, 28, 26, 80, -16, 92, 29, 53, 75, -67, -7, -54, -14, -35, -98, -91, -42, -7, 91, 58, 62, -65, 35, -37, 2, 81, 41, 17, -64, -43, 22, 23, 6, -21, -76, -98, -1, -93, 53, 2, -94, -15, -13, 92, 34, 2, 42, 53, 92, -75};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-56, -43, -25, -63, -46, -5, 29, -56, 28, -82, 23, 35, -44, 23, -16, -58, 25, -88, 89, -97, -51, -77, 74, -83, 56, 50, -53, 31, 50, -52, -8, 38, -65, -25, 35, 30, 2, -58, 62, 34, 51, -63, -22, -71, -11, 23, -99, -76, -91};
    vector<int> y = {30, -61, -35, 65, 31, 71, 11, 14, 27, 49, -43, 41, 2, 86, -75, 80, 50, -46, -91, 9, 71, 47, -100, -46, -87, 72, 32, 35, -53, 47, 2, -31, 89, 38, -4, 13, 33, -91, 9, 65, 58, -23, -88, 32, -10, -88, -91, -97, -15};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {25, 45, 12, 9, 5, -26, -19, -28, -3, 16, -48, 9, 47, -15, 19, -46, 42, -50, 21, 32, 49, 18, 15, -33, 31, -1, -32, -20};
    vector<int> y = {-14, 8, -1, -7, -26, 21, 47, 5, -46, 27, -15, 49, 0, -6, 25, 5, 1, 29, 38, -23, 20, 23, 39, 1, -23, -43, 46, 43};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {31, 18, 17, 33, 29, 38, 9, 17, 38, -26, -33, -3, 46, -35, -16, 38};
    vector<int> y = {38, 49, -48, 23, -36, -21, -32, 1, -16, -11, 6, -1, -19, 15, -16, 11};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {17, 1, 20, 36, -34, 33, -49, 4, 11, -34, -5, -17, -16, 17, 48, -50, -23, -30, 7, -1, 39};
    vector<int> y = {-21, 27, 11, -31, 28, 1, -35, -8, 37, -2, -10, -44, 27, -49, -9, -38, -13, 19, 7, 37, -12};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {16};
    vector<int> y = {27};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {100, 100, 0, 100, -100, -100, -100, -100, 0, 100, -100, -100, 100, 0, -100, -100, -100, -100, -100, 100, 100, -100, -100, -100, 100, -100, -100};
    vector<int> y = {0, -100, -100, -100, -100, 0, -100, 100, -100, -100, -100, -100, 100, -100, -100, -100, 100, 100, -100, -100, -100, -100, -100, 100, 0, 0, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-100, -100, -100, -100, -100, 0, 0, -100, 100, -100, -100, 100, -100, 0, 100, -100, 100, 100, 100, -100, 100, 100, 100, -100, -100, 100, -100, 0, -100};
    vector<int> y = {-100, -100, -100, -100, 0, -100, 0, -100, -100, 100, 100, 0, 0, 0, -100, -100, 100, -100, 100, -100, -100, -100, -100, -100, 100, -100, -100, 0, 0};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {100, -100, -100, -100, 100, 100, -100, -100, 0, 100, 100, -100, 100, 0, 0, -100, -100, -100, -100, 0, 0, 0, 0, 0, -100, -100, 0, -100, -100, 100};
    vector<int> y = {100, -100, -100, 100, -100, 100, 0, 100, -100, 0, -100, 100, -100, -100, -100, -100, -100, -100, 100, 100, -100, -100, 0, 100, 100, 100, -100, 100, 100, 0};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-100, 100, 0, 100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, 0, 100, -100, 100, 100, 0, 100, -100, -100, -100, 0, -100, 0, 100, -100, -100, 0, -100, 0, 100, 0, 0, 0, 100, -100, 0};
    vector<int> y = {-100, 0, -100, -100, 0, -100, -100, 100, -100, -100, -100, 100, 100, -100, -100, 0, -100, -100, 0, 0, -100, 100, 100, -100, 0, -100, -100, 0, 100, 100, 100, 0, 0, 0, -100, 0, 100, -100, -100, -100, -100, 0, 100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-10, -20, 50, 80, -100, -100, -80, -100, -70, -80, -100, -10, -80, -100, -10, -40, 30, 40, -100, 100, -100, -30, -30, -50, 20, -10, -40, -70, -100, -10, 70, -70, -80, 20, -80, 60, 80, 80, -70, 20, -20, 40, -80, 100, -60, 60, 40, -40, -30, -70};
    vector<int> y = {-100, -60, 40, 90, 20, 30, -30, -100, -20, -80, -10, -20, 80, 10, -10, 80, 20, -10, -10, -100, 20, -10, -100, -100, -100, -10, 50, -40, -80, -70, 20, -30, -70, 50, -10, 80, 80, -30, -40, 50, 80, 20, -10, -80, 20, -20, 40, -80, 40, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {70, -30, 80, 70, 40, 60, 60, -90, -100, 30, -100, -30, 50, 10, -10, -100, 50, -40, -60, 10, -30, 90, -100, 40, -70, -90, 100, -100, -40, 80, -40, -10, 20, -70, -30, 10, -100, 70, -100, 80, 40, 0, 10, 20, -60, -30, 50, 20, -40, -60};
    vector<int> y = {-60, 30, -70, -30, 40, 90, -100, -100, 40, 40, -70, -90, -10, -30, 80, -100, 30, -40, 10, -80, 40, 70, 70, 30, 100, -100, 90, -60, 30, 20, -100, 80, -80, 0, 40, -100, 60, 40, 0, -40, 40, -70, 80, -50, 10, 10, 60, 0, 20, -80};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-80, -100, 80, -100, 80, -60, -80, -30, 50, 20, 70, -70, -20, 20, -30, -100, 20, 40, 20, -100, -70, 20, 30, -100, 40, -100, 20, -100, 70, 60, -100, -10, 40, -30, 100, 80, -10, 80, -60, -10, 0, 100, 0, 50, 40, -100, -70, -40, 20, 40};
    vector<int> y = {-70, 20, -30, -50, -90, -40, -30, -100, 60, -90, 90, -50, -10, -100, 30, -60, -100, -10, -70, -100, -40, 0, -100, -100, -10, -40, 20, -10, -100, 40, 100, -100, 10, -40, 50, -60, -70, -70, -70, 90, 80, -30, -70, -20, 40, 100, -10, -100, -70, -70};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {49, -43, 47, 95, -64, -58, 68, -92, 82, 89, -91, 85, -73, 57, 13, 8, 21, 84, 77, -5, -1, -49, -93, 23, 92, 94, 62, 86, -77, 86, -97, 23, 88, -70, -73, 82, 30, -1, -19, -30, -97, 19, 41, 14, -49, -91, 59, 34, 43, -10};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {72, 79, 34, -78, -83, 34, -19, -29, -82, 35, 44, -19, 92, -25, 41, 92, 90, -87, 56, 15, 83, 67, -7, -72, 16, 23, -31, -92, -94, -75, -53, -46, 55, 29, -64, -1, 77, -34, 3, 50, -52, 44, -42, -10, 44, -12, 35, -41, -53, 100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {-89, -88, -52, -33, -58, 95, -91, -58, 15, 39, 24, -67, -75, -62, -43, -4, 60, -43, -89, 17, -31, 98, 64, 48, -10, -4, 4, 20, -44, -17, -73, -55, 50, 13, 67, 11, 59, -5, -56, -26, 87, -62, 81, 51, 44, -41, -91, -33, -31, -68};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {-59, -92, 26, 65, 56, 92, 34, 44, 98, 63, 0, -21, -72, -82, -22, 86, -76, -9, 14, -54, -12, -16, -1, 93, -76, -15, 18, -94, -91, -65, -33, -82, -48, -61, 26, 49, -10, 50, -39, 95, 71, 12, -70, -2, 33, -35, 79, -40, -28, 77};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {-73, 31, 36, -6, -42, 67, 2, -31, 34, -96, 26, 84, -11, 2, 8, 78, 56, -20, 62, 69, 98, 97, -7, -79, 98, -82, -88, -34, 53, 16, 17, -51, -79, -79, 65, -78, 98, -84, -70, -33, 80, -100, -79, 74, -73, 14, -88, 89, -71, 92};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {53, -25, 2, -21, -42, -25, -98, 22, 9, -16, -92, -29, -55, -48, 47, 35, -7, 53, 53, -43, -58, -54, -79, 31, 62, -82, 34, -91, -13, 6, 23, 29, -35, -7, -19, 92, 53, -88, -88, -28, -76, -15, -79, 91, -37, -78, -69, 58, -14, -72};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> y = {-31, -78, -76, -22, -76, 100, -88, -68, -56, 34, -25, -76, 32, -71, -65, -2, -65, 50, -56, 23, 27, 67, -43, 89, -100, -88, -70, -61, -70, 14, 59, 72, -22, -58, -31, -46, -97, -33, 11, -30, 23, -43, 14, 65, -21, 82, -28, -88, 87, 100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {49, -43, 47, 95, -64, -58, 68, -92, 82, 89, -91, 85, -73, 57, 13, 8, 21, 84, 77, -5, -1, -49, -93, 23, 92, 94, 62, 86, -77, 86, -97, 23, 88, -70, -73, 82, 30, -1, -19, -30, -97, 19, 41, 14, -49, -91, 59, 34, 43, -10};
    vector<int> y = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {72, 79, 34, -78, -83, 34, -19, -29, -82, 35, 44, -19, 92, -25, 41, 92, 90, -87, 56, 15, 83, 67, -7, -72, 16, 23, -31, -92, -94, -75, -53, -46, 55, 29, -64, -1, 77, -34, 3, 50, -52, 44, -42, -10, 44, -12, 35, -41, -53, 100};
    vector<int> y = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-89, -88, -52, -33, -58, 95, -91, -58, 15, 39, 24, -67, -75, -62, -43, -4, 60, -43, -89, 17, -31, 98, 64, 48, -10, -4, 4, 20, -44, -17, -73, -55, 50, 13, 67, 11, 59, -5, -56, -26, 87, -62, 81, 51, 44, -41, -91, -33, -31, -68};
    vector<int> y = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {-59, -92, 26, 65, 56, 92, 34, 44, 98, 63, 0, -21, -72, -82, -22, 86, -76, -9, 14, -54, -12, -16, -1, 93, -76, -15, 18, -94, -91, -65, -33, -82, -48, -61, 26, 49, -10, 50, -39, 95, 71, 12, -70, -2, 33, -35, 79, -40, -28, 77};
    vector<int> y = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-73, 31, 36, -6, -42, 67, 2, -31, 34, -96, 26, 84, -11, 2, 8, 78, 56, -20, 62, 69, 98, 97, -7, -79, 98, -82, -88, -34, 53, 16, 17, -51, -79, -79, 65, -78, 98, -84, -70, -33, 80, -100, -79, 74, -73, 14, -88, 89, -71, 92};
    vector<int> y = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {1, 7, 3, 4, 9, 3, 7, 1, 1, 6, 1, 6, 1, 9, 7, 9, 4, 9, 1, 4, 7, 1, 2, 5, 3, 8, 7, 7, 1};
    vector<int> y = {7, 2, 8, 9, 4, 3, 4, 1, 4, 1, 7, 8, 1, 1, 1, 4, 7, 1, 9, 4, 9, 1, 4, 1, 1, 1, 2, 4, 3};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {100, -100, 100, -100, 100, 0, 0, -91, 78, -28, -16, -91, 98, 7, 55, -7, 34, -93, 18, -60, -52, -76, -64, 25, 92, 89, -69, 64, 52, -45, -85, -60, -26, 90, -71, 25, -44, -17, 90, -22, -9, -96, 11, -36, 68, -86, 72, 54, -53, -100};
    vector<int> y = {100, 100, -100, 0, 0, -100, 100, 75, -86, 0, 26, -65, -44, 23, -43, -56, 34, -92, -23, -70, -64, -50, -84, -61, 49, -56, 12, 71, 56, 77, -84, -23, 17, -9, -35, -79, -81, -31, -55, 34, 69, -19, -31, -11, 52, -45, 47, 88, -100, -100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {1, 7, 3, 4, 9, 3, 7, 1, 1, 6, 1, 6, 1, 9, 7, 9, 4, 9, 1, 4, 7, 1, 2, 5, 3, 8, 7, 7, 1, 100};
    vector<int> y = {7, 2, 8, 9, 4, 3, 4, 1, 4, 1, 7, 8, 1, 1, 1, 4, 7, 1, 9, 4, 9, 1, 4, 1, 1, 1, 2, 4, 3, 100};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {4, 5, 0, 8, -3, 5, 4, 7};
    vector<int> y = {9, -4, 2, 1, 1, 11, 0, 2};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {1, 1, 1, 1, 1, 10, -10, -20};
    vector<int> y = {1, 2, 3, 4, 5, 2, 2, 2};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-1, 1, 0, 0, 0};
    vector<int> y = {0, 0, 1, -1, 0};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {10, 10, 10, 10, 8, 9, 11, 12};
    vector<int> y = {12, 11, 9, 8, 10, 10, 10, 10};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {-100, -50, 50, 0, 100, 0, 0, 34};
    vector<int> y = {0, 50, 0, 100, 50, 0, -100, 99};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {7, 1, 3, 4, 9, 3, 7, 1, 1, 6, 1, 6, 1, 9, 7, 9, 4, 9, 1, 4, 7, 1, 2, 5, 3, 8, 7, 7, 1};
    vector<int> y = {7, 2, 8, 9, 4, 3, 4, 1, 4, 1, 7, 8, 1, 1, 1, 4, 7, 1, 9, 4, 9, 1, 4, 1, 1, 1, 2, 4, 3};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {-9, -6, -6, -3};
    vector<int> y = {-6, -9, -3, -6};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-1, 1, 0, 0, 0};
    vector<int> y = {0, 0, -1, 1, 0};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {1, 0, -1, 0, 0};
    vector<int> y = {0, 1, 0, -1, 0};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {1, 5, 10, 15, 20, 25, 30, 45, 60, 70, 80, 90, 10, 10, 10, 10, 50, 55, 7, 77, 88, 99, 44, -11, -55, -23, -56, -1, 0, -55, -96, -1, -2, -5, -4, 54, 22, 23, 25, 2, 0, 19, 22, 35, -56, -78, 99, -99, 55, 50};
    vector<int> y = {0, 0, -1, 1, -99, 99, 50, -50, 2, 13, 45, 56, 21, -78, 23, 56, 89, 55, 0, 23, -28, 23, 45, -59, 23, 11, -29, 99, 59, -54, 0, 23, 78, -56, 11, 23, -89, 56, 45, 12, -2, 11, 23, -94, -12, -64, 22, 23, 0, 15};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {1, 3, 3, 5};
    vector<int> y = {3, 1, 5, 3};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {1, 1, 1, 1, 1, -10, -20, 10, 1};
    vector<int> y = {5, 3, 5, 4, 1, 2, 2, 2, 2};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-99, 47, 0, 0};
    vector<int> y = {0, 0, -2, 3};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-100, -49, 50, 0, 100, 0, 0, 34};
    vector<int> y = {0, 50, 0, 100, 50, 0, -100, 99};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {4, 3, 2};
    vector<int> y = {7, 7, 7};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-3, -3, 0, -6};
    vector<int> y = {4, -4, 0, 0};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {1, 1, 1, -5, 5};
    vector<int> y = {-8, 0, 2, 1, 1};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
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
    vector<int> x = {-100, 0, 99, 99, 100, 99, 0};
    vector<int> y = {1, 9, 10, 9, 9, 1, -3};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, 1, -1};
    TheNewHouseDivTwo* pObj = new TheNewHouseDivTwo();
    clock_t start = clock();
    int result = pObj->count(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22655751&rd=13899&pm=10511
********************************************************************************
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <ext/hash_set>
#include <ext/hash_map>
#include <ext/numeric>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <bitset>
#include <cstring>
 
using namespace std;
 
#define forn(a, b) for(int a = 0; a<(b); ++a)
 
class TheNewHouseDivTwo {
  public:
  int count(vector <int> x, vector <int> y);
};
 
int TheNewHouseDivTwo::count(vector <int> xs, vector <int> ys)
{
  int ans = 0;
  
  for(int x = -100; x<=100; ++x) for(int y = -100; y<=100; ++y)
  {
    bool izq, der, arr, baj;
    
    izq = der = arr = baj = false;
    
    forn(i, xs.size())
    {
      if(xs[i] == x)
      {
        if(ys[i] < y)
          baj = true;
        else if(ys[i] > y)
          arr = true;
      }
      else if(ys[i] == y)
      {
        if(xs[i] < x)
          izq = true;
        else if(xs[i] > x)
          der = true;
      }
    }
    
    if(izq && der && arr && baj) ++ans;
  }
  
  return ans;
}
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by L's Cleaner
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/