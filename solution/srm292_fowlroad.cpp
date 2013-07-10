/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5931
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

class FowlRoad {
public:
    int crossings(int roadY, vector<int> bobX, vector<int> bobY);
};

int FowlRoad::crossings(int roadY, vector<int> bobX, vector<int> bobY) {
    int ret;
    return ret;
}


int test0() {
    int roadY = 6;
    vector<int> bobX = {3, 7, 9, 2};
    vector<int> bobY = {-3, 8, 8, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = 10;
    vector<int> bobX = {3, 7, 9, 2};
    vector<int> bobY = {-3, 8, 8, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = 0;
    vector<int> bobX = {3, 2, 5, 6, 9};
    vector<int> bobY = {2, 0, 0, 2, -88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int roadY = 0;
    vector<int> bobX = {3, 2, 5, 6, 9};
    vector<int> bobY = {-2, 0, 0, 2, -88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int roadY = 66;
    vector<int> bobX = {20, 10};
    vector<int> bobY = {100, -100};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int roadY = -23;
    vector<int> bobX = {72, -72};
    vector<int> bobY = {20, 24};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int roadY = -23;
    vector<int> bobX = {72, -72};
    vector<int> bobY = {20, -24};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int roadY = 0;
    vector<int> bobX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> bobY = {5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int roadY = 3;
    vector<int> bobX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> bobY = {5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 0};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int roadY = 4;
    vector<int> bobX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> bobY = {5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int roadY = 8;
    vector<int> bobX = {5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3};
    vector<int> bobY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int roadY = 99;
    vector<int> bobX = {5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, -20, 3, 0, 3, 5, 0, 3, 5, -20, 3, 0, 3};
    vector<int> bobY = {-100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int roadY = 100;
    vector<int> bobX = {-100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100};
    vector<int> bobY = {-100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, -100};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = -21;
    vector<int> bobX = {3, -21, 3, -21, 34, -24, 21, -21, 9, 31, -31, -21, -21, -21, -21, -21, -21, -21, -20};
    vector<int> bobY = {3, -21, 3, -21, 34, -24, 21, -21, 9, 31, -31, -21, -21, -21, -21, -21, -21, -21, -20};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int roadY = 15;
    vector<int> bobX = {6, 8, 10, 22, 14, 15, 16, 15, 14, 15, 16, 15, 14, -100};
    vector<int> bobY = {6, 8, 10, 22, 14, 15, 16, 15, 14, 15, 16, 15, 14, -100};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int roadY = -2;
    vector<int> bobX = {8, 14, -97, -59, 7, 78, 87, -22, -31, 93, 20, -67, 60, 89, -88, -67, 44, 22, -70, 7, 89, 78, -87, 3, -99, 24, 50, 53};
    vector<int> bobY = {-88, -13, -18, 11, 3, 19, 19, 26, -70, -95, 64, -43, -46, 34, 70, -16, 73, -74, 96, 82, 65, 22, -77, 93, 79, 38, -38, 67};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int roadY = -28;
    vector<int> bobX = {66, -93};
    vector<int> bobY = {16, 3};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int roadY = 52;
    vector<int> bobX = {11, 93, -3, -29};
    vector<int> bobY = {39, 39, 28, 78};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int roadY = -68;
    vector<int> bobX = {52, -22, -77, -22, 38, 16, 51, 29, 44, 78, 45, 8, 1, -55, 50, 76, 54, 84};
    vector<int> bobY = {-53, 29, 98, 2, -56, 40, 51, -55, 82, 15, 49, -77, 12, 50, 89, 52, -57, -47};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int roadY = 43;
    vector<int> bobX = {-34, -5, 2, -52, -45, -66, 22, 27, 23, 70, -7, 12, 21, -26, 87, -56, -74};
    vector<int> bobY = {30, -57, 13, 89, 61, -76, 29, 90, 67, 33, 42, -20, -59, -81, -49, 20, -39};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int roadY = -60;
    vector<int> bobX = {-10, 2, 47, -80, 41, -42, 31, 62, 85, -35, -30, 28, -56, 77, 73, 37, -17, 91, -69, -57, -77, 54, -41, 59, -17, -29, 87, -32, -26, 20, 58, 90, 45, 43};
    vector<int> bobY = {-32, -42, 44, -14, 62, 51, -67, 60, -3, -54, -83, 13, 55, -81, -90, 42, -99, -8, 16, -39, -23, -82, -49, 40, -34, -50, 18, -23, 43, 30, -64, 30, -75, -57};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int roadY = -68;
    vector<int> bobX = {-86, -19, -94, 62, -55, -89, -7};
    vector<int> bobY = {-16, 93, 44, 98, -30, 65, 10};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int roadY = 13;
    vector<int> bobX = {62, -85, -17, -75, -75, 66, -49, -92, 30, -28, 85, 48, 60, -100, -6, -74, 54, -20, 88, 73, 69, 97, -89, -22, 0, -48, 38, 26, -84, -76, 63, 67, 17, -93, -58, 17, 25, -27, 81, -46, 69, -43, 87, 63, 63, 26, -30, -3, 90};
    vector<int> bobY = {61, 91, 81, 51, 61, -3, -67, 2, -18, -56, 39, 1, -42, -79, 86, -46, 38, -37, -62, -92, -14, 15, -89, 36, 52, 83, 6, 37, 21, 47, -16, -49, -58, 52, 95, -19, 53, 63, 87, -58, -73, 39, -7, 71, 83, 9, -28, -100, -71};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int roadY = 29;
    vector<int> bobX = {-28, 34, 34, -82, -63, 20, -4, 8, 20, -3, 37, 88, -82, 86, -54, 60, -69, 97, 52, 84, -80, 68, 59, -53, -43, -4, -20, -41, 77, -99, 9, 26, -92, 64, -94, -22, 41, -26, -16, -43};
    vector<int> bobY = {-90, 6, -99, -26, 18, -61, 25, -23, -89, 98, 80, 36, -17, 18, 38, -41, -74, -10, -4, -77, 52, 69, 68, 97, -21, 28, 22, 31, -74, 70, 96, 98, -50, 34, 47, 82, -23, -42, -84, -3};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int roadY = 41;
    vector<int> bobX = {-27, 3, -54, -3, 72, 96, 40, -47, -6, -2, 19, -88, 81, 75, -37, 74, -20};
    vector<int> bobY = {-33, 90, 19, -50, 52, 22, -70, 67, 20, -7, -82, -5, 16, 71, 5, -42, -93};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int roadY = -30;
    vector<int> bobX = {97, 44, -2, -90, -83, -94, -7, 24, -27, -94, 84, -37, -6, -13, -53, -51, 75, -7, 51, 52, 61, -77, 59, 17};
    vector<int> bobY = {-16, -48, -9, 67, 92, -29, -28, -50, -49, -73, -8, -60, 35, -45, -56, 86, 23, 34, -93, -55, 47, -8, 98, 26};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int roadY = 83;
    vector<int> bobX = {62, -71, -85, 6, 51, -34, -47, -76, 20, 74, 90, -52, 25, -14, 61, 97, -7, 41, 76, 38, -68, 64, 73, 46, -22, -42, 66, 86, 95, 33, -69, -94, 47, -37, -48, 5, 83, -35, -95, -92, 32, 61, 58, 23};
    vector<int> bobY = {-89, -51, 47, -9, 41, 16, 12, 100, -11, -59, 45, -82, 65, 40, 41, -47, 59, 9, 66, -65, 47, 34, 39, 43, 65, 71, 24, 39, -67, 74, 66, -49, -87, -87, 14, -70, -25, 62, -6, -30, 6, -89, 70, -26};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int roadY = -45;
    vector<int> bobX = {-24, -53, 63, -12, 36, -23, -74, -7, -75, -87, 77, -46, -61, 50, 59, -100, -86, 72, -60, 30, -91, -41, -85, -27, 42, 49, -42, -38, -40, 23, 49, -5, -70, 4, -41, -97, -42, -49, 22, -30};
    vector<int> bobY = {78, -4, 48, -60, 64, -37, -14, 0, -41, -93, -44, -51, 54, 84, -16, 2, -10, -37, 94, 74, -99, 28, -84, -61, -75, 12, 68, 42, -2, -36, -13, 8, 0, 41, 59, -6, -99, 49, -38, 91};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int roadY = 38;
    vector<int> bobX = {46, -69, 12, 10, 76, -17, 83, -77, 100, 6, 91, -97, -63, -21, 64, 66, -36, 64, 46, 49, 7, 20, -98, 27, -11, -61, -86, -54, 47, -58};
    vector<int> bobY = {60, 62, 77, -40, 68, -76, 72, 65, 73, -39, 91, -5, -9, -19, 57, -77, 58, 79, -70, 69, -93, 54, -95, -87, -100, -46, 42, 17, 75, -88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int roadY = -34;
    vector<int> bobX = {64, 35, 47, 42, 94, 74, -99, -94, 28, 5, 26, 93, 30, -34, -5, -49, -39, -37, 54, -21, 50, -92, 75};
    vector<int> bobY = {-53, 66, 43, 15, -65, 18, -39, 38, 20, 76, 41, -20, -42, 32, 34, -53, -27, -13, 90, -10, -82, 22, -91};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int roadY = -1;
    vector<int> bobX = {20, 32, 33, -23, 27, 74, 55, 4, -40, -71, 97, -97, 34, 0, 47, -47, 89, 84, -85, -92, 9, -10, -2, -89, 68, 11, -90, -54, -27, 20, -31, 97, 74, 67, -14, 49, -6, -74, -76, -64, -87, 13, -92};
    vector<int> bobY = {8, 55, 98, -46, 73, -4, -69, -69, 97, -82, 93, 40, 14, 83, -93, 84, 12, 72, 86, -52, -8, 76, -94, -27, -21, -42, 27, -53, 36, -10, 99, 26, 23, -66, 47, -99, -6, 92, 68, 21, 65, 90, 82};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int roadY = -90;
    vector<int> bobX = {-96, 35, -60, -50, 54, 96, 97, 67, -90, 0, 59, 20, -76};
    vector<int> bobY = {-30, 30, -67, -45, 96, -9, -82, 30, -81, 45, 19, -36, -62};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int roadY = 21;
    vector<int> bobX = {-36, 84, 14, -92, -61, 27, 20, -46, -42, 17, 98, -10, 85, 32, -56, -52, 64, -73, 83, -97, -38, 7, 5, 40, 11, -49, -8, -11, -10, 21, -70, 12};
    vector<int> bobY = {72, 83, 42, 3, 44, -8, 33, 16, 2, 70, -34, -73, 68, 12, -58, 43, -62, 7, 95, -35, -44, -20, -34, -52, 33, -17, -38, -74, 21, -16, 86, 88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int roadY = -94;
    vector<int> bobX = {63, -63, 58, -5, -21, -66, -51, 11, 8, 73, 95, 85, -82, -89, 98, -85, 61, 84, -4, -62, -68, 26};
    vector<int> bobY = {-64, -77, -51, 94, 20, 65, -76, -82, 38, -11, -79, -16, -18, 83, 62, -87, 4, -90, -51, 35, 80, 7};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = -19;
    vector<int> bobX = {76, 87, -79, 62, -67, -13, 79, 93, -95, -29, -34, -59, 49, -60, -44, -56, -35, 53, -3, -21, -39, 36, -97, -34, 34, 45, 92, 11, -10, 95, 48, 89, -89, -37, 7, 42, -82, 94, -12, -12};
    vector<int> bobY = {4, 53, 82, 82, 91, 65, -27, 83, 63, 63, 26, 69, -30, 68, -46, 67, 34, 27, 96, 55, -73, 89, 62, 89, 75, -60, 94, 41, 15, -14, 30, 69, 73, 33, 46, -64, 39, -43, -35, 20};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int roadY = 48;
    vector<int> bobX = {9, -85, -94, 55, -97, -40, -94, -99};
    vector<int> bobY = {-3, 29, 17, 31, -74, 54, 8, 64};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int roadY = 49;
    vector<int> bobX = {-70, 90, 19, 12, 57, -72, -96, -26, -43, -4, 79, 56, -18, 3, -34, 72, -18, 4, 39};
    vector<int> bobY = {-39, 42, 86, -14, 10, -39, -29, 1, 51, 34, 95, 65, 59, 67, 21, 67, -9, -15, -5};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int roadY = -86;
    vector<int> bobX = {66, -34, -23, 33, -18, 1, 94, 46, -82, 60, 59, 66, 12, -34, -73, -77, -48, 81, 61, -97, -32, -80, 69, -40, -67, -81, 68, -38, 42, -72};
    vector<int> bobY = {-71, -27, 47, 21, -75, 24, 13, 83, 6, -46, 99, 97, 68, 56, -42, -8, -3, 81, 36, -6, 61, -17, 0, 42, 74, 20, 28, -1, 19, -95};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int roadY = -23;
    vector<int> bobX = {97, -22, 24, -13, -64, -100, 86, -82, -69, -91, 72, -8, 97, -38, -95, 34, 56, -100, 1, -42, 64, 39, -15, -50, -39, 63, -21};
    vector<int> bobY = {-28, -22, 98, -80, 22, 15, 17, 10, 35, -56, 10, -51, -12, 54, -15, -97, 4, -60, -30, -41, 78, -64, 24, -93, 9, 18, 48};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = -20;
    vector<int> bobX = {54, -47, -40, -52, 61, -20, 82, 74, -49, 65, -70, 51, -68, -70, 84, 85, 38, -70, 47, -36, 26, -67, -23, -14, -31, 73, -3, 12, -4, -37, -36, 4, -37, 76, 67, -86, 61, -48, -56, 30, 83, -61, 71, -84};
    vector<int> bobY = {-9, 87, 9, -17, 70, -43, 42, -27, -52, -72, 91, -46, 29, 100, -59, 72, 73, 28, 7, -45, -30, -50, -92, 27, -21, 71, 13, -50, -22, -64, 36, -62, 35, 50, -71, 96, 72, -31, 95, -78, -66, -70, -19, 21};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int roadY = -79;
    vector<int> bobX = {21, -44, -67, -64, -21, 93, -61, -81, -32, 93, 64, 22, -59, -51, -62, 46, 100, 45, -61, 42, 98, 26, -71, -25, -63, -85, -73, 61, 15, 32, -75, -89, 40, -1};
    vector<int> bobY = {58, 16, -7, 32, -88, -93, 76, 56, 56, 43, 14, -53, 4, 41, -99, 24, -6, 70, 1, -84, 54, 36, 12, 10, -52, 17, -66, -96, -10, -87, -74, 6, -62, 99};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int roadY = -67;
    vector<int> bobX = {42, 98, -99, 35, -89, 71, 67, 45, 20, 5, 44, 82, 78, 22, -66, 52, -52, 49, -17, -87, -23, 26, -94, 95, -31, 14, -30, -59, 24, -31, -80, 57};
    vector<int> bobY = {100, 95, -92, 5, 13, -52, -96, -99, 74, 79, 34, 90, 93, -4, 84, -58, -42, 17, 32, -99, 7, 68, -73, 74, 66, 93, 85, -73, 48, 51, -19, 5};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int roadY = -9;
    vector<int> bobX = {78, -21, 61, 95, 62, 95, 40, 96, 73, 59, 28, 28, 46, -79, 80, -99, 29, 82, 84, -11, -75, -57, 75, -25, 67};
    vector<int> bobY = {63, 82, 18, 28, 2, 100, 77, -56, -2, -84, -67, 56, 76, -50, -66, -9, 46, -78, -37, 67, 75, 3, -85, -24, 93};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int roadY = 26;
    vector<int> bobX = {41, -82, -28, 22, 32, -95, -78, 49, 97, 10, -85, 7, 4, 52, -91, -2, -66, 57, 7, -81, -17, -14, -31, 25, -41, -23, -90, -7, -5, 89, -81, 70, -64, -52, -29, -42, -61, 35, 58, -53, 87, -37};
    vector<int> bobY = {-89, 100, -22, -25, -48, 37, -31, -48, 90, 24, 90, 16, 63, 73, 46, -87, 12, -95, -31, 60, -53, 37, 86, 6, 19, 99, -6, -85, 8, -86, 65, -41, 8, 53, 4, 65, 22, 89, 40, 93, -53, -69};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int roadY = -85;
    vector<int> bobX = {-17, -35, -77, -88, 32, 51, -9, 46, -62, -57, 55, -37, 55, 61, -5, 98, 60, 33, -86, -35, -41, 40, -20, 74, 0, 70, -83};
    vector<int> bobY = {43, -74, -52, -67, 38, -67, -48, 51, 7, -63, -7, 63, 75, 96, 26, 47, 85, 8, 72, -94, 65, 61, 3, -86, 66, -95, 16};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int roadY = -22;
    vector<int> bobX = {22, 26, 34, 53, -54, 22, 5, 20, 3, 27, -73, -92, 66, 18, -1, -45, 1, 64, -2, 8, -40, -32, 75, 25, 63, -58, 61, 92, 45, -35, 86, 68, -63, 45, -95};
    vector<int> bobY = {-47, 60, -36, 51, 71, 46, 15, -29, -35, -57, 97, 82, 37, 4, -95, -10, 43, -51, -68, 63, -58, -19, -65, -28, 92, 41, 2, 74, -33, -12, -62, 38, -68, -100, 73};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int roadY = -62;
    vector<int> bobX = {77, 10, 98, -24, 5, -40, -80, -76, 97, 41, 52, 56, -64, 23, -54, -39, -56, 50, -8, 70, 70, 10, -7, -82, -13, 27, -14, -33, -29, 17, 45, 18, -69, -51, -96, 40, 3, -16, 69, 66, 100, -17};
    vector<int> bobY = {-13, 77, -96, -97, 12, -19, 66, 97, -40, 27, 95, -5, 94, -93, 20, 53, -46, 29, 28, -34, 38, -25, -1, 46, 95, -35, -82, 88, 84, 38, -13, 89, 43, -64, 39, -100, -29, 13, -1, 13, 49, -83};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int roadY = 14;
    vector<int> bobX = {76, -59, -6, -61, -11};
    vector<int> bobY = {-9, -11, 84, 58, -84};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = -99;
    vector<int> bobX = {-37, 10, -92, -21, 3, 8, 19, 90, -53, -21, -72, 61, 80, 38};
    vector<int> bobY = {-80, -61, -43, 59, -13, 24, 60, 23, 14, 82, 64, -31, 51, 62};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = 72;
    vector<int> bobX = {47, -76, 25, -65, 63, 36, -38, -54, 62, -77, -12, -95, 40, -100, -82, -95, 99, -37, 16, -46, -1, 65, -44, -19, -47, 36, -83, -93, -25, 29, 42, 30, -65, -65, 95, -63, -60, 19, 27, 57, -30, -87, 16, 37, 34, 44, 91, -73, -19, -42};
    vector<int> bobY = {19, -79, -23, 93, -33, -59, -48, -70, -31, 49, -19, 87, -15, -69, 85, -24, 20, 92, 16, 16, -86, 14, -46, -6, -12, -31, 39, 53, -92, 57, 77, 1, 46, -72, 48, 65, -61, -44, 8, -63, -48, -2, 66, -22, 55, -38, -90, 51, 64, -72};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int roadY = -13;
    vector<int> bobX = {86, 76, 56, -49, -18, -12, -35, -1, 17, -25, -99, -81, -81, -54, -26, -80, -5, -80, 100, 9, -90, 29, -80, -67, -84, -87, -23, -76, -73, 23, -88};
    vector<int> bobY = {22, 72, 85, 17, -100, -100, 78, 94, -18, -98, 56, 71, -31, -45, 100, 54, -45, 17, 57, 51, -25, -79, -78, -69, 95, -98, 80, -99, -94, 46, 60};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int roadY = 54;
    vector<int> bobX = {-75, 53, 4, 73, 1, -6, 34, -75, -72, 33, -95, -45, -7, -67, 65, -98, -40, 27, -27, 61, 86, 53, 28, -27, -58, 36, -80, 39, 6};
    vector<int> bobY = {67, -48, 97, 2, 49, 20, 48, -39, -23, -34, 86, 67, 8, -21, -30, 75, 88, -17, 1, -78, -87, -99, 54, -20, -38, -49, -22, 56, -6};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int roadY = -32;
    vector<int> bobX = {-61, -78, 85, -26, -36, -4, 24, -59, -25, 27, -87, 81, 55, 52};
    vector<int> bobY = {42, -24, 99, -72, 46, -77, 35, 85, 62, 55, -9, -82, 44, 85};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int roadY = 43;
    vector<int> bobX = {-25, -80, 45, 80, 61, 74, -22, -63, 97, 95, 29, 25, 26, 27, 94, 45, -76, -89, -80, -13, -70, -61, 12, 23, -69, 70, 4, -73, -61, -31, -72, 15, -45, -38, -21, 69, -30, 54, 16, 8, -93, 7, -43, 64, -42, -42, -28, 21};
    vector<int> bobY = {-82, -64, 41, 15, -68, 38, 28, -65, -30, -14, -78, 16, -69, -13, 61, 86, -23, -26, 34, -36, -80, 66, -38, -81, -82, 78, -64, -80, -88, -60, 88, -60, -9, 3, 73, 88, 17, -59, -56, 37, -39, 97, -53, 77, 94, -32, -40, 7};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int roadY = 41;
    vector<int> bobX = {24, 28, 39, 29, -23, 63, 58, -2, -99, 47, 18, -28, 87, -80, 79, -32, 8, 73, -89, 67, -27, 7, 15, -4, 83, 31, 26, 97, 71, 11, 45, 17, -40, 20, 62};
    vector<int> bobY = {-73, 1, 13, 17, -62, 4, -56, 74, 92, -92, -3, 62, 24, 64, 60, -32, -12, -67, -82, 72, 33, 6, 50, -96, 20, -33, -38, -88, 12, 99, -65, -74, -97, 83, -47};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int roadY = 94;
    vector<int> bobX = {90, -93, -18, -99, 93, 87, 60, -22, -83, 91, 25, 49, -58, -52, -10, 41, -40, -47, 51, -15, 60, -33, -37, -15, -46, 2, 62, -26, 85, 59, 29, 71, -79, 10, 50, 12, 89, -63, -25, 98, -14, 58, -63, 8, -41, 53, -34, -90};
    vector<int> bobY = {6, -92, -80, 55, 60, -62, 5, -69, -97, 68, 11, -100, -81, 43, -60, -11, 67, -1, -29, 3, -64, -20, 98, 53, -72, 51, 1, 9, 55, 78, 94, 45, -38, 7, -57, 6, 85, 69, -32, -43, 53, 38, 17, 18, -36, -90, -51, -30};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int roadY = -66;
    vector<int> bobX = {33, 91, -54, -89, 99, -21, 8, 76, -98};
    vector<int> bobY = {20, -11, 29, -42, 15, -60, 45, -11, 49};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = 54;
    vector<int> bobX = {11, -92, -17, 50, 88, -70, -48, 35, -96, -11, -67, -57, 52, -19, -4, 83, 5, -19, -86, 18, 7, -9, 62, 38, -36, -59, -81, 31, -59, -14, -10, -71, 2, 40, 27, -39, -83, 61, 42, -69, 100, -87, -46};
    vector<int> bobY = {-39, 83, -81, -71, -30, -50, 61, -47, 76, -26, -100, -82, 27, 11, 73, -73, 49, 43, 91, 13, 51, -39, 24, 9, -36, 100, 14, 15, 5, -18, 58, -46, -8, -41, -75, -77, -3, 7, 86, 47, -5, -88, -100};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int roadY = 72;
    vector<int> bobX = {84, 46, 46, -62, 92, 73, 94, -1, -73, -34, -77, -89, 86, 3, -42, -95, 51, 78, 7, -95, -94, 73, -45, -8, -51, 32, 93, -30};
    vector<int> bobY = {62, 58, -32, -29, 52, 45, 31, 43, -84, -36, -60, 67, -18, -46, -24, 30, -13, -24, 61, -57, 52, 75, -65, -50, 35, -91, 93, -47};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int roadY = 16;
    vector<int> bobX = {-5, 93, 64, -96, -10, -48, 87, -67, 11, 21, 6, -4, 1};
    vector<int> bobY = {73, 56, 8, -90, 87, 33, 68, -93, -84, -26, 43, 82, 56};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int roadY = -77;
    vector<int> bobX = {-25, -15, 15, 6, -2, 73, 57, 15, 93, 45, 33, -11, 38, 22, -41, -8, 1, -83, -20, -81, -45, 93, -50, -55, 29, -93, 98, -81, 4, 55, 70, 44, -26, -54, 67, -39, -11, 6, 18, -95, 16, -70, -57, -27};
    vector<int> bobY = {-21, 30, -7, 100, -28, -97, -16, -54, -54, 16, -26, 81, 54, 29, -65, -58, 7, -63, -39, -8, 96, 34, -9, 12, 11, -91, 23, -89, -43, 69, 73, 80, -45, -36, -28, -56, 43, -50, 33, -14, 21, 76, -36, -33};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int roadY = -54;
    vector<int> bobX = {26, 0, 54, 28, 73, -41, -44, -37, -8, -34, -62, 9, 51, -28, 95, -5, -10, 88, 63, -40, -55, -78, -97, -18, 3, -39, 0, 45, 56, 16, -33, -57, 71, -14, -91, 46, -63};
    vector<int> bobY = {-53, 60, 32, -26, -55, 68, -9, -91, 13, -76, -58, 42, 92, 11, 96, 53, -41, 95, -50, -44, -17, 77, 43, -31, 87, 79, -25, 81, 8, 9, 36, 38, -70, 90, 93, -89, 64};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int roadY = 60;
    vector<int> bobX = {-40, 24, -80, -57, -65, 68, -23, 54, 42, 57, -81, 31};
    vector<int> bobY = {-46, -74, 97, 77, -54, 59, -32, -46, -94, 88, 75, -66};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int roadY = 24;
    vector<int> bobX = {51, -98, -97, 78, 98, -48, 62, -13, 1, 44, 76, 47, -21, 77, -97, -33, 18, -37, -83, 82, 54, -72, 62, 83, -84, 74, -67, -22, -60, -44, 83, -18, -10, -18, -100, -26, -26, -85, 0, 49, -84, -88, -29, 47, -80, 59};
    vector<int> bobY = {-89, 51, -68, -45, -34, 70, -35, 36, -10, 71, -64, -76, 58, 62, -20, 16, -97, -50, 49, -49, -31, 89, 21, -6, -92, 92, 1, 47, 42, 76, -47, 39, -2, 98, -81, 35, 73, -64, -32, -27, 62, 22, -98, -62, 80, -34};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int roadY = 18;
    vector<int> bobX = {-51, -6, 5, -30, 81, 7, -81};
    vector<int> bobY = {-84, 10, -92, -56, -70, -1, 95};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = -41;
    vector<int> bobX = {-39, 98, -40, -36, 87, 1, -50, 81, 23, -72, 29, 26, -22, 74, 84, -16, 90, -11, 0, -82, 83, 51, -30, -46, 53, -83, 69, -55, -77, 38, -52, 99, -80, 74, 74, -47, 65, 93, 90};
    vector<int> bobY = {-71, 29, -75, -97, -50, -1, 84, -71, 47, -40, -73, -59, 70, 46, -62, -77, 25, 70, 79, -11, 21, 19, -33, 80, 59, -89, -90, -90, 92, -11, -58, -59, 97, 48, 16, -81, -65, -71, -82};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int roadY = 36;
    vector<int> bobX = {-94, 44, -95, 3, 52, 85, 17, -79, -71, -44, 16, 49, -38, 6, 48, 74, -43, -10, -33, -86, -22, -47, -24, 73, 98, -58, 71, 10, 29, -3, -6, -76, 97, 6, -92, -30, -55, -16, -16, 30, 12, -15, -50};
    vector<int> bobY = {-73, -21, 76, -5, 33, -100, 32, 72, -1, 87, 31, -38, 32, -19, 34, 37, 47, 56, 41, -14, -83, 63, -79, -30, -60, 79, 69, -35, 78, -27, 73, -32, 30, 18, 62, -22, -37, -97, 40, -9, -8, 10, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int roadY = 79;
    vector<int> bobX = {74, 94, 39, 76, 96, -56, 81, 9, 79, -35, 67, -46, -69, 6, -63, 69, 94, -36, -53, -55, 42, 14, -25, 90, 1, 45, -32, -81, 60, -73, -31, 62, -51, 22, -72, 99, 82, -13, -67, 74, -56, 65, 58, 52, -90, 70, 6, -53, -100};
    vector<int> bobY = {-60, 31, 43, 83, -45, 89, 42, -64, 13, 12, -78, 8, -44, -16, 65, 49, 21, -2, 74, 70, -45, -36, -26, -29, 14, -49, 19, 78, 60, -42, -98, -62, 27, -63, -83, 55, 47, 84, 48, 91, -54, -65, 30, 97, 88, 17, -41, 9, 90};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int roadY = -44;
    vector<int> bobX = {9, -45, 47, -35, -29, -9, 13, -52, 63, 29, 81, 52, -96, -61, 59, 100, -79, -22, 91, 20, -54, -51, -9, 6, 64, 11, -79, -10, -35, 53, 11, -90, 68, -10, 65, -48};
    vector<int> bobY = {91, 55, -7, -31, 50, 71, 39, 60, -66, 40, -5, 47, 92, 14, 24, 76, 46, -63, -2, -19, 92, -47, 82, 72, -27, 67, 44, 68, 91, -81, -80, 99, 9, -55, -48, 52};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int roadY = 64;
    vector<int> bobX = {67, 40, -93, -77, 94, -92, -42, 100, -30, -93, -67, 10, -25, 14, 69, -37, -45, -82, 55, 30, 12, 62, -20, -9, 49, -6, 27, -32, 64, 15, 39, -85, 74, -7, 45, -80, -44};
    vector<int> bobY = {-87, -43, 45, -97, -16, 92, -28, 13, 84, 18, -4, 5, -24, -97, -96, -55, 17, -98, -95, -14, 65, 8, 71, 57, -25, -87, -18, 12, -78, 32, -15, -86, -70, -62, 56, 3, 48};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int roadY = 10;
    vector<int> bobX = {-53, 62, 93, 87, 51, 100, 83, -2, 2, 7, -43, -5, 5, -56, -69, 14, -19, -65, 68, 67, 58, -56, -15, 89, -80, 10, -7, -61, -91, 47, -33, 73, 77, 17, 97, -72, 93, 28, 63, 6, -69, 9, 90, -10, -12};
    vector<int> bobY = {43, -64, -68, 31, -29, 6, 9, 47, 19, 86, 3, -53, -60, -54, -34, -67, -87, -8, 11, -64, 48, -41, -72, -83, 3, 61, 60, 16, 42, -97, -97, -22, 73, -82, 37, 72, -93, 97, -50, -7, 77, 63, -61, 70, 40};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int roadY = 55;
    vector<int> bobX = {95, -77, -52, -94, 99, 46};
    vector<int> bobY = {42, -70, -75, -12, -23, 0};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int roadY = -4;
    vector<int> bobX = {-32, 99, 69, 18, 90, 61, -21, 89, -18, 27, 44, 20, 99, 80, -59, 8, 38, -45, 71, 9, -9, -22, 99, -4, -53, -91, -21, 25, 68, -14, 50, 92, 37, 75, 14, 22, 71};
    vector<int> bobY = {-58, -3, -8, 0, 65, -30, -85, -27, -85, -98, -28, -83, 62, -25, -4, 44, 18, -74, -53, -89, -68, -12, -99, 22, -57, -98, -66, -57, -65, 80, 57, -43, 57, 87, 88, 96, 75};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int roadY = 63;
    vector<int> bobX = {-67, 15, -50, -15, 35, -21, 44, 44};
    vector<int> bobY = {52, -50, 99, 23, 98, 93, 6, 49};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int roadY = 47;
    vector<int> bobX = {-51, 97, 17, 25, -31, 19, -84, -20, -98, -16, -46, -34, -6, -98, 12, 11, 20, 68};
    vector<int> bobY = {-62, 8, -2, -82, -61, 85, 45, 53, -28, 13, -89, 98, -96, -71, -94, 45, -15, 3};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int roadY = 51;
    vector<int> bobX = {52, 6, -82, 77, -69, 12, 86, 61, -96, -32, -62, -90, -67, 84, 71, -40, -64, 75, -84, -49, 85, -86, 61, 23};
    vector<int> bobY = {27, 47, -36, 0, 27, -17, 34, 45, -38, 91, -85, 30, 35, 65, 41, -84, 55, 66, 87, 9, 61, -55, -91, -67};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int roadY = -70;
    vector<int> bobX = {-22, 54, -23, 12, -34, -57, 21, -47, -17, 86, 25, -46, 67, -82, -98, 7, -71, -93, -81, 96, -17, 63};
    vector<int> bobY = {-45, -96, -16, -79, 20, -48, -62, 29, -49, -6, 55, 7, 50, -25, 2, -48, 41, -18, -93, 9, 69, 74};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int roadY = 72;
    vector<int> bobX = {46, 68, 60, 100, -70, -25, 12, 0, 42, -10, -59, 98, -35, 74, 48, -7, -74, 49, 65, 68, -44, 55, 83, 16, -76, 1, -85, -10, -47, 44, 66};
    vector<int> bobY = {-80, 6, 15, 86, 80, 51, 71, -85, -95, 59, -63, -38, -14, 6, -64, -4, 57, 80, -91, 68, -44, 49, 92, 62, 47, 85, -45, -61, 9, 29, 1};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int roadY = 58;
    vector<int> bobX = {-55, -71, -9, -24, -88};
    vector<int> bobY = {95, -40, 2, -75, 45};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int roadY = -86;
    vector<int> bobX = {20, 91, 89, 49, -66, 92, 36, 15, 15, 82, -28};
    vector<int> bobY = {-12, 99, -56, 73, -35, 44, -51, 34, 40, -50, 46};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int roadY = -89;
    vector<int> bobX = {53, 69, -74, 41, -34, 96, -27, -9, -75, 34, 13, 54, 27, -100, -2, -78, -43, 19, 70, 37, -65, -5, 50, -4, 97, 99, 66, 7, 50, 2, -20, 9, 30, 83, 76, 36, 39, -72, 23, -10, 23, -93};
    vector<int> bobY = {9, -48, 65, 69, 8, 65, -44, -47, -29, -32, -2, 98, -42, -95, 24, 0, 24, -28, -12, -13, 33, 22, 91, 25, 15, 20, 33, 40, 95, 95, -15, 41, -58, -86, 78, -100, 27, 8, 44, 76, 4, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int roadY = -46;
    vector<int> bobX = {18, -82, -50, 41, 13, -6, 48, -30, 72, 24, -50, -45, -68, 94, -85, -9, 8, -13, -29, 80, -38, 67, 66, -87, 92, -64, 51, -40, 40, 15, -94, 89, 13, 69, 73, -25, 74, 27, -18, 33, -10};
    vector<int> bobY = {26, -85, -99, 94, 46, -6, -91, 44, 90, 90, -94, -41, -36, -82, 48, -12, 79, -94, 39, -4, 7, 28, -90, -81, 85, 57, 21, 31, 95, -71, 85, -52, 53, -24, -6, 51, 26, 29, 44, 25, 100};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int roadY = 44;
    vector<int> bobX = {-35, 42, -58, 60, 13, 15, 31, 90, -77, 53, 50, 95, -57, -94, -29, 51, -58, -3, 60, 24, 12, -6, 87, 78, 8, -21, -89};
    vector<int> bobY = {-90, 1, -67, -80, 6, -3, 64, 15, -10, -57, -39, 64, 97, 51, -43, -24, -76, -92, -17, 80, -65, 56, 87, -11, -64, 61, -32};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int roadY = 14;
    vector<int> bobX = {17, -64, -7, -5, -41, 59, -6, 74, 96, -97};
    vector<int> bobY = {88, 23, -60, -16, -8, -78, 81, 7, 71, -14};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int roadY = -30;
    vector<int> bobX = {-29, -19, 20, 34, -71, 46, 95, 15, 51, -98, -90, 68, -21, -62, 43, -62, -16, 27};
    vector<int> bobY = {-43, 28, 16, 3, -83, -97, 66, 15, -69, -40, 100, 28, -47, 55, -47, 34, -93, -43};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int roadY = 41;
    vector<int> bobX = {-36, -61, 83, -100, 24, 38, -26, -10, -57, -93, 92, -56, -93, -48, -59, -43, 83, 14, 58, 20, -24, -2, -23, 34, 17, 22, 74, -83, -64, -9};
    vector<int> bobY = {-89, -45, -6, -12, 85, -93, -94, -72, 42, -9, -53, -28, 13, -88, 27, 8, -47, 22, -99, 100, -85, -80, 99, -48, -51, -98, -8, 99, -35, -16};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int roadY = 25;
    vector<int> bobX = {28, -66, -21, -11, 19, 100, 15, -87, -34, -32, -38, 32, -54, 8, -95, 78, 98, 18, -59, 69, -94, -57, -26, -49, -13};
    vector<int> bobY = {-15, -10, 54, 67, 10, 42, -75, -21, -2, -16, 8, 52, -69, -96, -54, -22, 65, 49, -25, 43, 25, 60, 39, -85, -61};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int roadY = 76;
    vector<int> bobX = {54, -62, -24, 41, 56};
    vector<int> bobY = {40, 97, 15, -91, 95};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int roadY = -73;
    vector<int> bobX = {-84, 87, 3, -75, -17};
    vector<int> bobY = {30, -4, 53, -71, -20};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
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
    int roadY = -94;
    vector<int> bobX = {-21, -61, -72, 32, 86, -15, -64, -30, -87, 72, 9, -82, 0, -59, 76, 34, -64, 9, 48, 13, -35, 9, -21, 80, -30, -88, 89, -62, -61, -4, -86, -13, -13, -87, 71, 37, 33, -93, -61, -18, 50, 49, -87, -97};
    vector<int> bobY = {5, 52, -5, -17, 91, -49, 96, -38, 15, 72, 88, 79, -38, -51, -41, -57, 86, 16, -78, 58, 99, 34, 53, -33, 8, 52, 84, -22, -2, -59, -46, 7, 73, -44, -15, -54, 77, -62, 79, 30, 76, -91, 18, -17};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int roadY = 0;
    vector<int> bobX = {3, 2, 5, 6, 9};
    vector<int> bobY = {-2, 0, 0, 2, -88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int roadY = 7;
    vector<int> bobX = {1, 2, 3, 4, 5};
    vector<int> bobY = {4, 7, 7, 7, 8};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int roadY = 0;
    vector<int> bobX = {3, 3, 3, 3};
    vector<int> bobY = {-2, 0, 0, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int roadY = 0;
    vector<int> bobX = {3, 2, 5, 6, 9};
    vector<int> bobY = {2, 0, 0, 2, -88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int roadY = 0;
    vector<int> bobX = {1, 0, 2, 0, 0};
    vector<int> bobY = {1, 0, 0, 0, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int roadY = 5;
    vector<int> bobX = {4, 6, 7, 3};
    vector<int> bobY = {4, 5, 6, 6};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int roadY = 0;
    vector<int> bobX = {2, 0, 2, 0, 0, 2, 0, 0, 2};
    vector<int> bobY = {2, 0, 0, 0, 0, 2, 2, 0, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int roadY = 2;
    vector<int> bobX = {0, 1, 2, 3};
    vector<int> bobY = {3, 2, 2, 3};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int roadY = 0;
    vector<int> bobX = {3, 2, 5, 6, 9, 1, 1, 1, 1, 1, 1};
    vector<int> bobY = {2, 0, 0, 2, 2, 0, 0, 0, 0, 0, 2};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int roadY = 0;
    vector<int> bobX = {3, 2, 5, 6, 9};
    vector<int> bobY = {-2, 0, 0, -2, -88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int roadY = 1;
    vector<int> bobX = {1, 2, 3, 4};
    vector<int> bobY = {0, 3, 0, 3};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int roadY = 0;
    vector<int> bobX = {-5, 0, 0, 0, 0, 0, 0, 0, 9};
    vector<int> bobY = {2, 0, 0, 0, 0, 2, 0, 0, -100};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int roadY = 0;
    vector<int> bobX = {0, 0, 0};
    vector<int> bobY = {-2, 0, -1};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int roadY = 1;
    vector<int> bobX = {0, 2, 3};
    vector<int> bobY = {0, 0, 0};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int roadY = 5;
    vector<int> bobX = {0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> bobY = {4, 5, 5, 5, 6, 5, 5, 6};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int roadY = 4;
    vector<int> bobX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    vector<int> bobY = {3, 4, 4, 5, 4, 4, 4, 4, 3, 3, 3, 4, 4, 5, 4, 4, 5};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int roadY = 1;
    vector<int> bobX = {3, 2, 5, 6, 9};
    vector<int> bobY = {2, 1, 1, -2, 88};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int roadY = 3;
    vector<int> bobX = {2, 2, 2, 2};
    vector<int> bobY = {0, 3, 3, 6};
    FowlRoad* pObj = new FowlRoad();
    clock_t start = clock();
    int result = pObj->crossings(roadY, bobX, bobY);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20213936&rd=9813&pm=5931
********************************************************************************
#include <string>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <sstream>
#include <stdio.h>
#include <iostream.h>
 
using namespace std;
 
class FowlRoad 
{
public:
  int crossings(int roadY, vector <int> bX, vector <int> bY) 
  {
    int num = 0, i, l, ile = bX.size();
    bool lewa = false;
    
    if (ile == 0) return 0;
    
    if (bY[0] < roadY) lewa = true;
    
    for (i=1; i<ile; i++)
    {
      if (lewa && (bY[i] > roadY)) { num++; lewa = !lewa; }
      if (!lewa && (bY[i] < roadY)) { num++; lewa = !lewa; }
    }
    
    return num;    
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/