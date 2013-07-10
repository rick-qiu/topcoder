/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10297
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

class CirclesCountry {
public:
    int leastBorders(vector<int> X, vector<int> Y, vector<int> R, int x1, int y1, int x2, int y2);
};

int CirclesCountry::leastBorders(vector<int> X, vector<int> Y, vector<int> R, int x1, int y1, int x2, int y2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {2};
    int x1 = -5;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> X = {0, -6, 6};
    vector<int> Y = {0, 1, 2};
    vector<int> R = {2, 2, 2};
    int x1 = -5;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> X = {1, -3, 2, 5, -4, 12, 12};
    vector<int> Y = {1, -1, 2, 5, 5, 1, 1};
    vector<int> R = {8, 1, 2, 1, 1, 1, 2};
    int x1 = -5;
    int y1 = 1;
    int x2 = 12;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> X = {-3, 2, 2, 0, -4, 12, 12, 12};
    vector<int> Y = {-1, 2, 3, 1, 5, 1, 1, 1};
    vector<int> R = {1, 3, 1, 7, 1, 1, 2, 3};
    int x1 = 2;
    int y1 = 3;
    int x2 = 13;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-107, -38, 140, 148, -198, 172, -179, 148, 176, 153, -56, -187};
    vector<int> Y = {175, -115, 23, -2, -49, -151, -52, 42, 0, 68, 109, -174};
    vector<int> R = {135, 42, 70, 39, 89, 39, 43, 150, 10, 120, 16, 8};
    int x1 = 102;
    int y1 = 16;
    int x2 = 19;
    int y2 = -108;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> X = {7, 5};
    vector<int> Y = {-5, 0};
    vector<int> R = {12, 6};
    int x1 = -9;
    int y1 = 8;
    int x2 = 6;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> X = {8, -14, 6, 8, 8};
    vector<int> Y = {-1, 5, 0, 2, -1};
    vector<int> R = {15, 3, 4, 10, 14};
    int x1 = 4;
    int y1 = -7;
    int x2 = 3;
    int y2 = 3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> X = {-1, -17, 7, 22, 15, -23, -11, 22, 3, 0, -19, -20};
    vector<int> Y = {-1, 22, -20, 16, -19, -15, 21, 11, -15, 1, 21, -10};
    vector<int> R = {8, 19, 12, 19, 3, 15, 7, 10, 5, 3, 16, 5};
    int x1 = -22;
    int y1 = 18;
    int x2 = -20;
    int y2 = -23;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-1, -9, 20, 5, 21, -28, -18, -18, -30, 25, -29, -10, -1, -2, 30, -25};
    vector<int> Y = {29, -6, -13, 23, 15, 11, -27, -28, -22, -15, 7, 0, 28, 30, 28, 17};
    vector<int> R = {16, 12, 16, 3, 9, 13, 5, 9, 3, 5, 3, 4, 14, 5, 6, 5};
    int x1 = 8;
    int y1 = 7;
    int x2 = 10;
    int y2 = -12;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {7, 21, -1, -26, -32, -7, -3, -25, -24, -17, 21, 22, 14, 31, -30, -13};
    vector<int> Y = {-20, 21, -31, 25, 26, 1, 10, 25, 13, -27, 25, 21, 31, -26, -13, -33};
    vector<int> R = {14, 18, 28, 3, 26, 3, 3, 7, 3, 4, 25, 4, 4, 4, 4, 3};
    int x1 = 30;
    int y1 = -33;
    int x2 = 9;
    int y2 = 21;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> X = {-24, 8, -19, 7, 15, 21, 27, -21, -24, 29, -20, 25, -8, -4, 20, 26, 20, -28, 29, 11, -9, -27, 10, -15, 18, -27};
    vector<int> Y = {14, -27, 13, -10, -24, 31, -22, 24, 8, 12, -26, 11, 18, 9, 29, -25, -12, -22, -11, 23, 4, -32, -24, -2, -29, -3};
    vector<int> R = {30, 8, 22, 6, 23, 7, 8, 8, 8, 12, 4, 7, 6, 3, 3, 3, 4, 3, 3, 5, 4, 4, 4, 4, 29, 3};
    int x1 = -23;
    int y1 = 12;
    int x2 = 16;
    int y2 = -16;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> X = {3, -44, -8, -20, 77, 24, 36, 72, 70, 46, 49, -48, -55, 12, -39, -39, -1, 49, -4, 75, 64, -12, 43, 37, 9, 25, 76, -13, 50, -44, 41, 78, -33, 59};
    vector<int> Y = {-42, 69, -25, 76, -45, -36, 1, 79, 13, 43, 34, 78, 28, -55, 70, -61, 52, 29, -69, 35, -33, -46, -79, 8, 17, 78, -6, 14, -43, -1, -23, -72, 52, -22};
    vector<int> R = {71, 38, 22, 8, 3, 6, 15, 34, 7, 5, 16, 13, 4, 10, 29, 11, 6, 8, 8, 10, 5, 48, 16, 4, 6, 8, 3, 4, 12, 5, 3, 6, 7, 5};
    int x1 = 38;
    int y1 = -65;
    int x2 = -64;
    int y2 = 75;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> X = {-49, 45, 73, 50, -55, -90, 11, -70, -58, 12, -96, 12, -68, 85, 91, -87, -57, 23, -75, -35, 52, -20, 89, 92, -77, -40, -36, 67, -9, 58, -45, -97, -14, 11, 8, 0, 12, 87, -9, -50, 26};
    vector<int> Y = {-71, -19, 6, -36, -68, 82, -12, 40, -66, 27, 76, -40, 97, -67, 82, -98, -75, 89, -20, 95, -52, 12, 96, -27, 75, 60, 48, 1, -48, -55, -17, -40, 67, -60, 55, 22, 90, 73, 5, -16, 12};
    vector<int> R = {35, 68, 27, 8, 28, 89, 17, 17, 20, 6, 21, 5, 10, 3, 17, 7, 9, 18, 13, 5, 28, 3, 35, 4, 73, 3, 17, 16, 5, 5, 17, 12, 8, 6, 3, 4, 5, 3, 3, 8, 3};
    int x1 = -92;
    int y1 = 98;
    int x2 = -64;
    int y2 = 80;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-53, -19, 70, 74, -99, 86, -89, 96, -10, 98, 39, 88, -28, -93, -35, 49, -33, 82, 6, -51, 5, 78, -13, -94, -60, -49, -74, 48, -59, -88, -4, -24, 95, -51, -52, -11, -22, 58, 8, -56, 13};
    vector<int> Y = {87, -57, 11, -1, -24, -75, -26, 83, 11, 93, -56, 0, 54, -87, 30, -68, 94, 99, -15, 58, 32, 2, -96, -38, 66, -29, -99, 71, 33, 77, 67, -14, 61, 98, -55, -56, -57, -85, -6, -89, 48};
    vector<int> R = {69, 22, 36, 21, 46, 21, 23, 34, 12, 3, 28, 6, 9, 5, 3, 8, 10, 8, 16, 5, 6, 3, 9, 9, 7, 3, 33, 13, 5, 21, 16, 12, 4, 3, 5, 5, 6, 6, 6, 6, 3};
    int x1 = -83;
    int y1 = -23;
    int x2 = -92;
    int y2 = 63;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-72, 88, -35, 88, -10, 84, -38, -85, 77, 95, 36, -67, 19, 82, -64, -10, -89, 19, 54, -9, -72, 51, 93, 19, -27, 82, 78, 83, -51, -69, 22, -53, 85, -62, 38, -12, 27, -91, -36, -55, -8, -98};
    vector<int> Y = {-71, -2, 69, -91, -71, -80, -40, 25, 38, 75, 43, 57, 87, -76, 70, 1, 97, -16, -87, 99, 81, -34, 93, 29, 51, -18, -8, 28, 75, -24, 75, -70, -76, -89, 3, -95, -52, -54, 32, 55, -71, -20};
    vector<int> R = {35, 9, 92, 54, 18, 16, 4, 9, 19, 11, 8, 55, 6, 24, 30, 19, 6, 6, 3, 12, 16, 9, 34, 8, 6, 3, 24, 3, 3, 5, 24, 10, 3, 5, 6, 5, 10, 8, 8, 10, 15, 4};
    int x1 = 27;
    int y1 = 75;
    int x2 = -30;
    int y2 = -17;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> X = {26, -11, 98, 86, -69, 25, -5, -10, -5, -23, 93, -71, -70, 12, -83, 89, -78, -14, 91, 73, -44, -43, 62, -58, -56, 29, 24, 88, 18, 18, -63, 23, 6, -99, 98, 86, -30, 12, 44, -81, 3, -15, 82, 13, 98};
    vector<int> Y = {-18, 58, -72, 86, -42, -89, 48, 85, -60, -7, 80, -45, -64, -10, -41, -20, 39, -33, 14, 35, 65, -98, 91, -6, 27, -92, 12, -68, -27, 64, 77, -89, 94, -97, 19, -66, -75, 80, -1, 77, 24, -24, 96, -36, 65};
    vector<int> R = {38, 45, 31, 36, 31, 14, 3, 11, 10, 3, 22, 35, 8, 3, 49, 13, 17, 4, 12, 8, 7, 3, 10, 3, 4, 21, 6, 15, 22, 6, 5, 28, 4, 3, 3, 8, 7, 3, 12, 4, 3, 3, 48, 11, 5};
    int x1 = 48;
    int y1 = 61;
    int x2 = -91;
    int y2 = -38;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> X = {-95, 81, -24, -7, -109, -53, 64, 99, 19, -81, -53, -17, 85, -19, 51, -70, -25, -100, -31, 17, -72, 103, -76, -15, 32, -97, 85, 80, -30, 104, 88, 85, -54, 49, -70, -82, -48, 12, 32, 73, 3, 89, -94, 32, -3, 15, 46, -95};
    vector<int> Y = {40, 38, 0, 73, -30, -37, 72, 25, 102, -46, -61, 3, -56, -78, -105, 69, -41, 34, -106, -105, -93, 25, -88, 105, -41, 92, 92, -49, -77, 18, 34, -52, -63, 105, -57, -87, 95, -28, 52, -6, -73, -109, -101, 51, 66, -62, -102, -36};
    vector<int> R = {57, 64, 23, 23, 10, 8, 3, 28, 14, 10, 13, 10, 24, 16, 16, 15, 8, 29, 11, 10, 4, 22, 11, 4, 14, 4, 3, 8, 4, 9, 50, 17, 4, 7, 3, 23, 12, 6, 5, 5, 5, 14, 42, 8, 4, 9, 6, 3};
    int x1 = 81;
    int y1 = 10;
    int x2 = 18;
    int y2 = 43;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> X = {54, 48, 67, -102, 44, -62, 29, -104, -91, 29, -4, 21, 92, -83, 20, -56, -13, -47, 85, 70, -91, 73, -101, 53, 96, 1, -59, -83, 105, -22, 55, 50, -97, -64, 70, 52, -31, 34, 70, -94, 3, -26, 1, -96, -108, 18, -99, 30, 100, 6};
    vector<int> Y = {-34, -13, 85, 96, 2, -54, 96, 101, 24, -96, 89, -45, -12, 21, -96, 85, 83, -6, 9, 86, -92, -92, -43, 24, -105, -77, 76, 44, 97, 106, 9, -14, 29, -62, 26, -54, -107, 68, -48, -103, 6, -36, -12, 13, -61, 60, 40, 9, 35, 64};
    vector<int> R = {93, 63, 16, 23, 31, 20, 5, 9, 31, 22, 4, 13, 11, 8, 5, 24, 19, 8, 4, 12, 13, 17, 6, 3, 7, 11, 4, 4, 7, 4, 8, 11, 43, 11, 3, 8, 18, 5, 7, 26, 10, 6, 7, 7, 5, 5, 5, 6, 4, 5};
    int x1 = 69;
    int y1 = 64;
    int x2 = -50;
    int y2 = 95;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {493, 443, 615, -935, -663, 400, -563, 635, 269, -954, 769, -198, 264, -43, -484, 194, 838, 957, -756, 182, -559, -430, 779, 641, -176, 664, -926, 485, 875, -86, -872, 65, 9, -540, -757, 959, 351, -206, 502, -863, 126, 459, 556, -755, 642, 472, 317, -925, -531, 640};
    vector<int> Y = {-310, -124, 781, 879, 542, 21, -490, 774, 881, 925, 56, 484, -879, 812, 143, -411, -109, -509, 195, -874, -910, -59, 84, 790, 992, -839, -397, 223, -957, 855, 827, 681, -703, 699, 403, 889, -488, 970, 87, -419, 168, -128, 462, -697, 242, -494, 624, -755, -957, -438};
    vector<int> R = {823, 556, 124, 185, 217, 262, 162, 269, 26, 65, 90, 185, 182, 17, 108, 101, 79, 71, 50, 29, 246, 55, 19, 89, 322, 130, 36, 3, 44, 14, 33, 61, 80, 13, 20, 42, 70, 19, 55, 142, 30, 76, 34, 40, 11, 50, 25, 661, 147, 39};
    int x1 = -160;
    int y1 = -741;
    int x2 = -92;
    int y2 = 170;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> X = {388, -960, -10, 788, -818, -26, 525, 445, 273, -406, 840, -923, 441, 169, 232, -838, -945, 729, -43, 862, 948, -84, -136, -29, 973, -652, -616, 787, -855, 93, -246, -833, -9, -557, -409, 739, 988, -539, -569, 19, 371, 858, 161, -944, -769, -886, -517, -886, -154, 554};
    vector<int> Y = {985, 497, -703, -164, -560, -796, -566, 735, -194, -318, 922, 310, -578, -195, 435, -861, 515, -835, 966, -128, 827, -499, 744, 239, 939, -927, 610, 625, 345, 701, 278, 994, 394, -555, -562, -827, 993, 238, -398, 501, -4, 162, -763, 280, 462, 696, -825, -570, -119, 890};
    vector<int> R = {8, 667, 317, 255, 74, 55, 21, 48, 4, 144, 632, 306, 19, 212, 25, 66, 55, 269, 63, 150, 61, 56, 93, 28, 196, 109, 74, 142, 10, 92, 46, 99, 84, 66, 74, 186, 92, 44, 7, 18, 26, 63, 61, 18, 42, 53, 59, 146, 93, 65};
    int x1 = 793;
    int y1 = -211;
    int x2 = 430;
    int y2 = 183;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> X = {-380, 939, 867, -150, 393, -796, -471, -60, -955, 921, 631, -898, -804, -929, 290, 32, -29, 700, -44, -875, 974, -237, 832, -319, -400, 461, -430, -893, 872, 588, -797, -556, 412, -138, 710, -805, -726, -875, -900, 586, -537, 311, -487, 855, 44, 875, 631, 809, -790, 295};
    vector<int> Y = {-989, -944, 211, 271, -141, 989, -553, -951, 922, -113, -329, -675, 940, 217, 946, -734, 252, 600, 387, 665, 273, -70, -485, 956, -496, 132, 345, -720, -770, -430, -907, -554, 604, -445, -653, 374, 69, -305, -243, 925, -661, 695, 211, -909, 644, 458, -960, 82, 119, 926};
    vector<int> R = {736, 255, 488, 492, 3, 69, 220, 334, 440, 130, 60, 13, 15, 113, 8, 98, 331, 8, 175, 59, 79, 18, 45, 156, 30, 72, 34, 71, 15, 172, 19, 14, 59, 23, 8, 36, 40, 79, 165, 46, 39, 65, 26, 351, 26, 80, 4, 70, 36, 82};
    int x1 = 652;
    int y1 = -695;
    int x2 = 137;
    int y2 = 435;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> X = {129, 807, 391, -845, 197, 910, -843, -442, 977, -770, 666, 404, 71, 865, 113, -961, -49, 395, 17, -267, -202, 892, 366, 708, -121, -96, -254, -920, 348, -164, 649, -323, -84, 967, -432, 873, 534, -43, -652, 515, 226, -625, 436, -472, -952, 834, 86, 724, -977, -183};
    vector<int> Y = {714, -716, 43, -610, 922, -158, -878, 345, -993, 157, -814, 812, -584, -401, 83, -870, 888, 916, -120, -310, -892, -793, 671, -776, -147, 517, -838, -572, 872, 217, 727, -926, 181, -19, 330, 506, -511, -409, -481, -315, -963, -625, 321, -662, 506, 573, 958, -354, 232, 771};
    vector<int> R = {953, 437, 191, 510, 577, 73, 208, 73, 12, 37, 169, 241, 100, 55, 77, 12, 12, 129, 97, 122, 175, 19, 89, 66, 36, 49, 78, 100, 326, 45, 4, 27, 39, 26, 231, 140, 72, 31, 89, 45, 137, 46, 48, 87, 15, 21, 16, 24, 89, 67};
    int x1 = 98;
    int y1 = 358;
    int x2 = 789;
    int y2 = -901;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> X = {-217, 544, -323, 574, 102, -272, 356, -451, 533, 168, -130, 346, -92, 182, 41, -496, 583, 558, -233, -241, 416, 354, 636, 519, 129, -679, -548, -443, -676, -392, 213, -629, -502, 259, -386, -396, -394, -672, 289, -202, -370, -355, -645, 23, -522, -389, -151, -31, -354, -184};
    vector<int> Y = {-34, 105, -181, -639, 571, -26, -563, 101, -547, -266, 540, 652, -13, -273, 489, -659, 43, 96, -306, -9, -38, 609, -576, -638, -392, 36, 475, 280, 100, 397, -23, -413, 676, 575, -494, 622, -241, -667, 94, -605, 391, -412, -274, 10, 539, -634, -569, -20, -72, 593};
    vector<int> R = {343, 269, 634, 261, 140, 132, 6, 67, 53, 38, 12, 10, 40, 21, 34, 33, 23, 112, 45, 69, 57, 112, 373, 18, 60, 120, 26, 39, 11, 35, 64, 32, 241, 5, 7, 68, 10, 7, 11, 25, 5, 38, 81, 35, 6, 3, 190, 20, 30, 26};
    int x1 = -499;
    int y1 = 215;
    int x2 = 186;
    int y2 = -249;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-389, -473, 344, 265, 607, 382, 599, 324, 67, -383, 398, 196, -394, -306, 561, -661, -583, 184, -648, -236, 471, 528, -520, -120, -278, -157, -309, -17, 298, -285, 671, -338, -141, -106, -215, -34, -549, 403, 366, -204, -640, 233, -259, 152, -415, 343, -608, 313, -159, -545};
    vector<int> Y = {223, -467, 417, 107, 406, -177, 585, -486, 35, 451, 458, -352, 333, -499, -684, -454, 140, 531, 567, -557, -609, 273, 396, 562, 650, -249, 350, 296, 11, 645, 52, 18, 560, 500, 16, -98, -632, 414, 406, -145, -678, -103, 412, 614, -206, 629, -580, 430, 512, -196};
    vector<int> R = {323, 348, 100, 37, 48, 19, 623, 449, 6, 20, 302, 197, 56, 150, 46, 31, 94, 44, 55, 35, 8, 65, 79, 9, 44, 18, 18, 31, 14, 104, 64, 44, 3, 11, 44, 64, 12, 10, 138, 49, 27, 48, 18, 6, 11, 37, 63, 48, 3, 23};
    int x1 = 415;
    int y1 = 118;
    int x2 = 236;
    int y2 = -485;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> X = {-355, -432, 314, 242, 553, 348, 546, 61, -349, 363, 178, -360, -279, 512, -603, -532, 168, -592, -216, 430, 481, -474, 313, -110, -254, -143, -282, 586, -16, 271};
    vector<int> Y = {204, -426, 380, 98, 371, -161, 534, 32, 411, 418, -321, 304, -455, -624, -415, 127, 484, 517, -508, -555, 249, 361, -510, 512, 593, -227, 320, -581, 270, 10};
    vector<int> R = {295, 318, 91, 34, 44, 18, 568, 6, 19, 276, 180, 51, 137, 42, 28, 86, 40, 51, 32, 8, 59, 72, 431, 9, 40, 17, 17, 139, 29, 13};
    int x1 = 602;
    int y1 = 422;
    int x2 = 71;
    int y2 = -260;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> X = {115, 716, 347, -750, 175, 808, -748, -393, 868, -684, 591, 359, 63, 768, 100, -854, -44, 351, 15, -237, -179, 792, 325, 629, -107, -85, -226, -817, 309, -146};
    vector<int> Y = {634, -636, 38, -541, 819, -141, -779, 307, -881, 139, -722, 721, -518, -356, 74, -772, 788, 813, -107, -276, -792, -704, 596, -689, -130, 459, -744, -508, 775, 193};
    vector<int> R = {847, 389, 170, 453, 513, 65, 185, 65, 11, 34, 151, 214, 90, 49, 68, 11, 11, 115, 86, 109, 156, 17, 80, 59, 32, 44, 69, 90, 290, 40};
    int x1 = 82;
    int y1 = 482;
    int x2 = -183;
    int y2 = 135;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> X = {-79, 568, -368, 518, 325, -695, -65, 348, 651, -902, 545, 891, -146, 437, 101, -175, 873, 984, -938, -220, -840, 659, -675, 966, -92, 727, -367, -908, -16, -799};
    vector<int> Y = {559, 472, -638, 217, -625, 904, -939, -136, -649, -642, 835, -424, 198, 837, -42, 476, -337, 543, 843, 987, -209, -953, -747, 610, 216, 361, 76, 137, -923, -235};
    vector<int> R = {920, 156, 150, 43, 107, 147, 131, 37, 54, 155, 114, 385, 458, 227, 56, 173, 165, 22, 13, 244, 79, 138, 63, 12, 98, 13, 16, 10, 16, 150};
    int x1 = 904;
    int y1 = -137;
    int x2 = -619;
    int y2 = 826;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> X = {95, 198, -248};
    vector<int> Y = {-579, 738, -946};
    vector<int> R = {959, 64, 161};
    int x1 = -696;
    int y1 = -492;
    int x2 = 235;
    int y2 = 383;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-9, 919, 177, 228};
    vector<int> Y = {210, -997, 86, 82};
    vector<int> R = {409, 122, 906, 32};
    int x1 = 809;
    int y1 = -998;
    int x2 = -717;
    int y2 = 713;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-412, -418, 55, 439, 647};
    vector<int> Y = {240, 247, 152, 397, -163};
    vector<int> R = {22, 309, 882, 307, 107};
    int x1 = -205;
    int y1 = 772;
    int x2 = -683;
    int y2 = -319;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> X = {-41};
    vector<int> Y = {952};
    vector<int> R = {447};
    int x1 = -318;
    int y1 = -219;
    int x2 = -390;
    int y2 = 649;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> X = {-41};
    vector<int> Y = {952};
    vector<int> R = {447};
    int x1 = -31;
    int y1 = 819;
    int x2 = -390;
    int y2 = 649;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> X = {42, -94, -60, -161, -113, -45, 111, -20, 166, -147};
    vector<int> Y = {-123, 127, 71, 154, 39, 10, -17, 61, -101, 79};
    vector<int> R = {72, 199, 125, 5, 42, 3, 27, 4, 38, 6};
    int x1 = -101;
    int y1 = 8;
    int x2 = 36;
    int y2 = -175;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> X = {-217, 185, -56, -17, -249, -121, 147, 225, 43, -184, -63, -39, 195, 172, -44};
    vector<int> Y = {92, 87, -1, 167, -68, -84, 165, 57, 232, -105, -158, 7, -128, -198, -177};
    vector<int> R = {126, 141, 49, 50, 19, 14, 4, 61, 28, 19, 77, 18, 52, 141, 33};
    int x1 = -55;
    int y1 = 115;
    int x2 = -91;
    int y2 = -17;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> X = {165, -281, 126, -9, -285, 17, -159, -144, -187, -113, 171, -207, 205, 7, 204};
    vector<int> Y = {-26, 105, -10, -240, -109, -52, 31, 221, 84, -127, -22, -282, 182, -58, -152};
    vector<int> R = {240, 15, 34, 16, 130, 46, 15, 64, 76, 30, 226, 16, 13, 30, 30};
    int x1 = 124;
    int y1 = 33;
    int x2 = -112;
    int y2 = 240;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> X = {-190, 469, 433, -75, 196, -398, -235, -30, -477, 460, 315, -449, -402, -464, 145, 16, -14, 350, -22, -437, 487, -118, 416};
    vector<int> Y = {-494, -472, 105, 135, -70, 494, -276, -475, 461, -56, -164, -337, 470, 108, 473, -367, 126, 300, 193, 332, 136, -35, -242};
    vector<int> R = {369, 129, 245, 247, 3, 36, 111, 168, 221, 66, 31, 8, 9, 58, 5, 50, 167, 5, 89, 31, 41, 10, 24};
    int x1 = -123;
    int y1 = -120;
    int x2 = -56;
    int y2 = -487;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> X = {371, -389, 280, -288, -351, 84, 493, -403, 32, 328, 311, -439, -476, -424, 339, -374, 202, 86, 392, -383, 22, -333, 365, 302};
    vector<int> Y = {-254, 240, -25, 238, -383, -300, -363, 297, -109, -138, -402, 292, 231, -401, 494, 413, 316, -304, -315, 271, -184, -388, -208, 448};
    vector<int> R = {482, 256, 175, 43, 218, 85, 8, 444, 12, 6, 26, 366, 52, 17, 118, 17, 102, 3, 8, 14, 18, 165, 408, 19};
    int x1 = -426;
    int y1 = -105;
    int x2 = 23;
    int y2 = -341;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> X = {741, 824, 256, -800, -589, 725, -687, -313, -401, 297, -636, -530, 701, 581, 576, -540, -485, 785, -380, 589, -564, 446, -358, -36, -293};
    vector<int> Y = {81, -5, -538, -602, 217, 157, 389, 801, -705, -832, 687, 752, 398, 14, 227, 613, -145, -489, 192, 324, 633, 333, -698, 726, 685};
    vector<int> R = {825, 146, 19, 144, 483, 478, 147, 78, 263, 168, 8, 24, 47, 32, 7, 54, 94, 50, 124, 20, 14, 64, 87, 124, 10};
    int x1 = -475;
    int y1 = 419;
    int x2 = -434;
    int y2 = 160;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-746, 258, -577, 216, 475, 648, 788, 821, -930, -649, -725, -441, -832, 989, 130, 504, 963, -245, 181, -133, 617, 786, 617, 971, -744, 16, -203, -125, 291, 59, -957};
    vector<int> Y = {447, -822, 403, -323, -743, 956, 844, -686, -826, 738, 264, 451, -226, 561, 135, -947, -908, 542, 823, 285, 887, -768, -379, -876, -456, -653, 575, 361, -474, -534, 640};
    vector<int> R = {841, 170, 589, 119, 626, 140, 704, 163, 320, 175, 180, 75, 24, 324, 48, 889, 53, 108, 55, 31, 23, 14, 33, 14, 30, 36, 47, 18, 37, 63, 85};
    int x1 = 172;
    int y1 = -436;
    int x2 = 732;
    int y2 = 145;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> X = {346, -858, -381, 383, -341, 410, -649, 924, 641, -860, -293, -937, -462, -787, 683, 856, 315, 367, 469, -123, 938, -280, 666, 967, -369, -934, -819, 705, 745, 621, 926, 180, -814, -813, -662, 124, 893, 746};
    vector<int> Y = {-487, 572, 298, 837, -793, -727, -574, -24, 864, 930, 285, 482, 818, 869, 900, 633, 279, -354, 983, 93, -691, -893, -545, 789, -427, -431, 241, 541, 121, 941, 89, -532, 213, 79, 204, 729, -470, 0};
    vector<int> R = {519, 830, 274, 242, 200, 210, 137, 25, 628, 236, 63, 109, 117, 128, 737, 33, 4, 135, 27, 15, 52, 48, 14, 249, 50, 164, 25, 90, 7, 8, 21, 75, 64, 9, 7, 7, 21, 22};
    int x1 = 306;
    int y1 = 29;
    int x2 = -75;
    int y2 = 73;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> X = {-337, -948, -238, 855, -602, 14, 207, -252, -575, -616, 222, -55, -168, 929, -936, -10, 901, 518, -811, 995, -588, -604, -970, 818, -424, -744, 757, -280, 15, 511, 799, 237, 444, 288, 165, 397, -100, -604, -676, 928, 629, -682, -992};
    vector<int> Y = {448, -457, 258, -421, -797, -818, -634, -617, -269, 707, 636, 386, 633, -445, 428, 381, -457, -818, 18, -979, 685, -233, 416, 27, -542, -758, 521, -335, -251, -155, -920, -538, -348, 89, -157, -870, 828, 734, -459, -965, 455, 542, -615};
    vector<int> R = {871, 23, 35, 40, 27, 221, 12, 57, 49, 13, 124, 510, 133, 123, 63, 144, 244, 223, 44, 161, 9, 112, 217, 213, 98, 66, 211, 82, 82, 15, 27, 41, 71, 47, 63, 46, 13, 91, 77, 62, 17, 39, 55};
    int x1 = 788;
    int y1 = -598;
    int x2 = -720;
    int y2 = 594;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> X = {-33, 912, 786, 808, 575, -888, -829, -997, 265, -601, -977, 672, 576, 892, -584, 54, -170, -947, -709, -883, 75, -1, -816, 422, -628, 496, -861, -987, -268, 740, 263, -256, 926, -650, -792, -344, 803, 592, -344, 304, -72, -785, -252, -484, 837, -296};
    vector<int> Y = {730, -865, 274, 104, 390, 754, -291, 803, -880, -288, -369, 270, 355, 279, -837, 468, -231, 838, -264, 475, 11, -972, 927, -715, 126, -974, -575, -128, -33, 897, -924, -906, 226, 736, 242, 261, 970, -45, 680, -21, 766, 707, 110, 108, -117, -998};
    vector<int> R = {212, 241, 451, 673, 30, 318, 378, 31, 182, 755, 68, 4, 101, 201, 177, 38, 281, 26, 177, 33, 6, 59, 127, 30, 43, 32, 29, 52, 3, 54, 3, 23, 52, 71, 130, 131, 30, 5, 89, 94, 121, 30, 10, 40, 34, 12};
    int x1 = -864;
    int y1 = 10;
    int x2 = 925;
    int y2 = -323;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> X = {144, -195, 128, 132, -215, 105, -114, 120, 117, 38, 211, 155, 164, -220, 78, 10, 203, 171, -173, -97, -15, -14, -46, -70, -7, 217, 47, -224, 143, -229, -99, 36, -142, -226, -114, -91, 184, 57, -129, 67, -160, -203, -111, 105, 78, -225, -220, 159, 39};
    vector<int> Y = {-98, 21, -125, 122, -209, 41, -59, 5, 191, -205, -133, -73, 191, 130, -121, 49, -155, 23, 85, -222, -13, -129, 226, -119, 155, 185, -135, -19, 184, -200, 131, 215, -168, 127, 4, 57, 221, -209, 194, 101, 76, 91, -24, 193, -192, -13, 228, 147, 55};
    vector<int> R = {98, 163, 137, 13, 25, 16, 49, 4, 122, 9, 10, 47, 9, 22, 3, 19, 9, 5, 41, 21, 12, 3, 44, 19, 6, 10, 3, 19, 89, 47, 10, 3, 3, 14, 11, 12, 18, 9, 19, 17, 21, 9, 8, 10, 13, 37, 12, 3, 5};
    int x1 = 120;
    int y1 = 176;
    int x2 = -153;
    int y2 = -91;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> X = {144, -195, 128, 132, -215, 105, -114, 120, 117, 38, 211, 155, 164, -220, 78, 10, 203, 171, -173, -97, -15, -14, -46, -70, -7, 217, 47, -224, 143, -229, -99, 36, -142, -226, -114, -91, 184, 57, -129, 67, -160, -203, -111, 105};
    vector<int> Y = {-98, 21, -125, 122, -209, 41, -59, 5, 191, -205, -133, -73, 191, 130, -121, 49, -155, 23, 85, -222, -13, -129, 226, -119, 155, 185, -135, -19, 184, -200, 131, 215, -168, 127, 4, 57, 221, -209, 194, 101, 76, 91, -24, 193};
    vector<int> R = {98, 163, 137, 13, 25, 16, 49, 4, 122, 9, 10, 47, 9, 22, 3, 19, 9, 5, 41, 21, 12, 3, 44, 19, 6, 10, 3, 19, 89, 47, 10, 3, 3, 14, 11, 12, 18, 9, 19, 17, 21, 9, 8, 10};
    int x1 = -148;
    int y1 = -31;
    int x2 = 75;
    int y2 = 177;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> X = {-126, -159, 105, 159, -69, 24, 173, -203, 145, -86, -44, 171, -82, 122, -110, -144, 136, 163, 126, -167, -203, 37, -104, 24, 5, -116, 153, 39, -74, -62, -39, 20, -99, 95, 88, -86, -183, 140, -131, 194, 10, -156, 96, -190, 106};
    vector<int> Y = {190, -109, -113, -156, 27, 146, -74, -134, 154, -176, -37, -46, -197, 165, 3, -57, -2, 207, 205, -204, 42, -66, 61, -161, 200, 207, 98, 19, -76, -98, 79, -153, 200, -204, -80, 74, -122, 0, 158, -187, -97, -202, 114, -9, 35};
    vector<int> R = {74, 8, 19, 193, 84, 18, 49, 41, 94, 29, 5, 10, 7, 24, 11, 18, 13, 19, 165, 130, 27, 13, 35, 33, 13, 11, 19, 8, 3, 6, 4, 3, 37, 31, 18, 4, 7, 24, 4, 20, 17, 6, 16, 23, 3};
    int x1 = -111;
    int y1 = 134;
    int x2 = -35;
    int y2 = -31;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> X = {-29, -40, 396, -108, 632, 459, -443, 288, -603, 659, 167, -83, 602, -102, 462, 601, -631, 575, -271, -306, 597, -462, -602, -27, -124, -430, 166, 456, 645, -187, -260, 505, -584, -260};
    vector<int> Y = {-213, -235, 109, 424, -147, -575, -94, -117, 444, 528, 314, -186, 574, -649, -541, -619, -340, 71, -13, -586, 652, 329, 597, 394, -178, -657, 411, -148, -204, -190, 427, 506, 346, -392};
    vector<int> R = {61, 356, 103, 180, 16, 200, 49, 4, 53, 36, 83, 240, 254, 15, 144, 366, 198, 65, 5, 44, 399, 100, 21, 90, 172, 96, 9, 98, 30, 44, 19, 72, 226, 18};
    int x1 = -472;
    int y1 = -529;
    int x2 = 265;
    int y2 = -269;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {315, 416, 528, 276, 646, 129, 263, 474, 441, 28, 660, 279, 474, 603, 194, 29, 540, 413, 619, 200, 165, 98, 440, 659, 102, 414, 350, 211, 491, 466, 398, 28, 392, 413};
    vector<int> Y = {223, 434, 385, 542, 256, 178, 588, 271, 414, 552, 594, 5, 58, 2, 323, 629, 179, 536, 312, 544, 57, 335, 400, 167, 410, 425, 100, 39, 567, 422, 34, 584, 529, 348};
    vector<int> R = {59, 505, 101, 178, 14, 99, 94, 2, 553, 51, 34, 13, 43, 4, 3, 19, 67, 7, 232, 17, 15, 36, 597, 38, 5, 495, 44, 21, 10, 648, 15, 1, 45, 16};
    int x1 = 15;
    int y1 = 643;
    int x2 = 479;
    int y2 = 192;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> X = {544, 183, 559, 446, 139, 530, 41, 544, 483, 320, 135, 393, 439, 76, 340, 585};
    vector<int> Y = {613, 81, 356, 163, 292, 592, 277, 602, 158, 529, 513, 615, 564, 162, 158, 415};
    vector<int> R = {272, 91, 600, 165, 2, 152, 8, 1, 7, 6, 50, 7, 9, 38, 23, 16};
    int x1 = 238;
    int y1 = -22;
    int x2 = 157;
    int y2 = -215;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> X = {63, 102, 44, 4, 118, 78, 5, 5, 113, 9, 95, 56, 48, 18, 119, 56, 88, 56, 17};
    vector<int> Y = {28, 44, 118, 13, 26, 32, 78, 5, 70, 26, 93, 80, 93, 81, 44, 35, 88, 8, 80};
    vector<int> R = {104, 36, 9, 35, 1, 5, 25, 13, 7, 8, 4, 21, 3, 3, 14, 114, 1, 9, 11};
    int x1 = -115;
    int y1 = -4;
    int x2 = 39;
    int y2 = 83;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> X = {42, 55, 28, 43, 6, 39, 56, 3, 32, 42, 19, 60, 10, 36, 43, 34, 25, 15, 77, 55};
    vector<int> Y = {80, 76, 76, 20, 22, 11, 59, 75, 57, 73, 60, 37, 29, 26, 16, 43, 38, 41, 55, 39};
    vector<int> R = {79, 3, 43, 14, 3, 3, 5, 16, 10, 71, 1, 7, 5, 3, 1, 4, 1, 5, 10, 1};
    int x1 = 4;
    int y1 = 33;
    int x2 = -48;
    int y2 = 66;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> X = {-26, -47, -15, -39, -45, -32, -40, -30, -40, -25, -48, -1, -41, -3, -39, -3, -34, -14, -15, -4};
    vector<int> Y = {-21, -37, -10, -37, -33, -24, -8, -9, -22, -36, -6, -10, -47, -48, -30, -39, -31, -13, -32, -25};
    vector<int> R = {18, 49, 1, 2, 3, 3, 1, 4, 2, 2, 2, 2, 7, 2, 1, 3, 1, 2, 2, 3};
    int x1 = -38;
    int y1 = -11;
    int x2 = 18;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> X = {-8, 13, -10, -2, -7, 2, -10, 13, 8, 13, 2, -11, -11, -11, 10, -7, -13, -2, -7, -9, -8, 8, -11, -12, -13, -3, 10, -6, -2, -11, 0, 11, 6, 13, 4, -10, 11, 8, 1, -4, 7, 3, 3, 4, -11, 13, -13, 6, 11, -12};
    vector<int> Y = {-6, 4, 10, -1, -6, 12, -8, 3, -2, -7, 11, -7, -9, 0, 13, -5, 3, -5, 0, -11, -5, 7, 4, -4, 13, -10, 10, -2, -8, 0, 7, -1, 2, 11, -2, 11, -7, 3, 11, 4, 5, 4, 0, -8, 9, -8, -9, -13, -13, -11};
    vector<int> R = {9, 4, 3, 1, 13, 4, 6, 2, 2, 5, 6, 1, 4, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int x1 = 14;
    int y1 = -9;
    int x2 = -11;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> X = {-4, 0, 7, -4, -7, -2, -5, 1, -6, 8, 9, 6, -6, 6, -3, 3, 6, -9, -1, 8, 1, -5, -9, -4, 8, -2, 0, 3, 9, 5, -6, -6, 3, -9, 6};
    vector<int> Y = {-7, 5, 0, 8, 0, 7, -6, -4, 9, -6, 8, -8, 5, -9, 9, -8, -1, -4, 6, 1, 9, -6, -8, 2, 5, -9, 4, -1, -9, -6, -9, 5, 8, 1, -9};
    vector<int> R = {4, 3, 3, 10, 1, 7, 2, 1, 1, 1, 2, 1, 2, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6};
    int x1 = 9;
    int y1 = -9;
    int x2 = -7;
    int y2 = 7;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> X = {10, -11, 0, 4, 11, 1, 7, -9, 1, -9, -9, 8, -8, 10, 5, -2, -2, 1, 10, -3, 3, -11, -9, -11, 9, -3, 10, 11, 7, -5, 7, 9, -3, 4, -10, -5, -6, -7, 5, -10, 11, -5, -3, 4, 10, 0, 4, 1, -8, -4};
    vector<int> Y = {-6, -4, -5, -4, 0, 6, 11, 4, -9, 10, 10, 4, -3, -11, 11, 0, 9, 0, -10, 2, 10, -7, -5, -2, -8, 5, -4, -1, -2, 1, -10, 7, -11, 2, -11, 6, 3, -11, 0, 0, 11, 11, -8, -8, 9, 3, -4, -3, -7, -6};
    vector<int> R = {12, 6, 1, 2, 3, 2, 1, 2, 2, 3, 2, 1, 1, 5, 4, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int x1 = 9;
    int y1 = -2;
    int x2 = -6;
    int y2 = -5;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> X = {5, 12, -12, 14, -11, 0, 7, 14, -8, 5, 6, -5, 13, -7, 9, -13, -12, 6, 7, -10, -14, -10, -9, 1, 14, 14, 3, 0, 2, -13, -6, 7, -7, -4, 13, 0, -2, -10, 6, -12, -7, -13};
    vector<int> Y = {10, -3, -6, -10, 6, -2, 10, -11, 6, -1, -4, -11, 9, 1, -9, -11, -14, -11, -8, 0, 10, 6, 13, -8, 13, 5, -12, -12, 13, 11, -6, 9, 7, -12, -8, 11, 0, -12, -4, -5, 7, 2};
    vector<int> R = {7, 3, 3, 4, 9, 4, 4, 1, 4, 1, 2, 3, 1, 1, 1, 2, 1, 1, 1, 2, 3, 1, 1, 2, 2, 3, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int x1 = 10;
    int y1 = -3;
    int x2 = 5;
    int y2 = -5;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-47, 44, 33, 22, -39, 55, 44, -40, -4, 21, 16, 11, -46, 22, 29, -11, -34, -37, 19, 22, -53, -9, 9, 0, 3, -9, 34, 38, -29, 45, 51, -5, 0, 55, -14, -35, 36, -7, 2, 46, 27, -16, -51, 2, -18, 3};
    vector<int> Y = {11, 0, -1, -52, 24, 49, -44, 7, -44, -17, -54, -16, -14, 43, -55, -8, 19, -53, -45, 34, 40, -33, -19, 11, 46, 1, 30, 47, -9, -2, 51, 15, 55, -15, -15, -22, 7, 33, -32, 3, -4, -54, 48, 6, 19, -16};
    vector<int> R = {53, 21, 2, 14, 10, 15, 1, 38, 9, 2, 1, 1, 12, 6, 24, 4, 18, 9, 2, 19, 1, 1, 10, 1, 1, 3, 2, 1, 2, 8, 8, 2, 5, 2, 1, 1, 3, 1, 4, 16, 1, 3, 2, 2, 1, 2};
    int x1 = 51;
    int y1 = -26;
    int x2 = 0;
    int y2 = -11;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-13, 12, 9, 6, -11, 15, 12, -11, -1, 6, 4, 3, -13, 14, 6, -3, -10, -15, -7, 0, -2};
    vector<int> Y = {3, 0, 0, -15, 6, 14, -12, 2, -12, -4, -15, -4, -4, -1, 12, -2, -15, 11, 0, 13, 0};
    vector<int> R = {15, 6, 1, 4, 3, 5, 1, 11, 3, 1, 1, 1, 4, 10, 2, 1, 3, 1, 2, 1, 1};
    int x1 = -4;
    int y1 = 7;
    int x2 = -7;
    int y2 = 9;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-471, 441, 335, 224, -391, 546, 444, -402, -48, 217, 36, 166, 110, -461, 227, 296, -119, -341, -370, 195, 26, -168, -527, -244, -99, -82, 91, -2, 33, 60, -93, 345, -418, 386, -293, 449, 510, -485, -289, -142, -354};
    vector<int> Y = {113, 5, -12, -524, 241, 493, -440, 70, -445, -171, 293, -541, -164, -142, 433, -555, -85, 195, -532, -451, 518, 376, 398, -1, -336, -126, -195, 111, 456, -163, 15, 302, -29, 473, -93, -23, 513, -448, -449, -155, -223};
    vector<int> R = {520, 208, 13, 139, 95, 143, 9, 370, 80, 15, 11, 4, 8, 115, 55, 231, 32, 172, 88, 17, 76, 6, 8, 41, 1, 3, 97, 1, 6, 36, 28, 14, 4, 4, 18, 74, 77, 40, 24, 9, 1};
    int x1 = 12;
    int y1 = 112;
    int x2 = -359;
    int y2 = 364;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> X = {-447, -567, 372, 564, -247, 88, 615, -723, 518, -506, -244, 703, -158, 608, -345, -293, 435, 587, -393, -513, 486, 580, -706, -723, -226, 132, 85, 18, -412, 543, -530, 140, -265, -220, -141, 74, 196, -277, -351, 315, -307, -652, 649, 498, -503, -465, 690, 38};
    vector<int> Y = {675, -389, -402, -556, 96, 518, -265, -477, 549, -479, -683, -744, -134, -166, -543, -700, 589, 187, 13, -204, -10, 737, -250, 151, -605, -234, -574, 713, 738, 351, -99, 68, -272, -348, 283, -546, 243, -415, 712, -284, 262, -435, 636, -3, 264, 561, -664, -345};
    vector<int> R = {255, 19, 60, 679, 289, 54, 166, 137, 324, 78, 126, 310, 9, 28, 31, 16, 78, 41, 32, 57, 36, 59, 44, 88, 20, 37, 108, 38, 30, 57, 45, 20, 3, 12, 6, 3, 101, 48, 124, 55, 7, 16, 52, 78, 13, 5, 63, 51};
    int x1 = -490;
    int y1 = -671;
    int x2 = -370;
    int y2 = -251;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> X = {721, -681, 171, 399, -771, 221, 550, 697, 270, -529, -468, 73, 766, 766, 749, -611, -280, 101, -702, -719, 353, 692, -11, 724, -616, -504, -431, -421, 378, -280, 210, 458, -514, 39, -706, 591, 610, -251, -223, 188, 550, -760, 173, 532, 308, 573, -742, 372, -263};
    vector<int> Y = {716, -186, 486, -426, 107, -299, -628, -238, -254, -343, -130, 91, -646, -240, 728, -86, 739, -592, 292, -230, 202, -402, 722, 703, -756, 416, -270, 464, -681, 151, 599, -303, 775, 560, 558, -704, 193, 137, -529, -530, -486, -185, 411, -585, -524, -484, 427, -348, -667};
    vector<int> R = {348, 308, 212, 470, 629, 115, 172, 34, 231, 24, 81, 75, 15, 19, 163, 5, 162, 87, 109, 105, 72, 88, 51, 371, 173, 33, 13, 29, 740, 105, 4, 30, 72, 3, 93, 4, 44, 19, 49, 17, 8, 6, 85, 53, 39, 9, 289, 8, 46};
    int x1 = -645;
    int y1 = -455;
    int x2 = -394;
    int y2 = 101;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {22, -276, -54, -128, 483, 391, 151, -455, 230, 451, -455, 438, 290, -96, -305, 80, -357, -245, -248, 212, -12, 231, -29, 403, 135, -8, 206, 179, -125, -486, -233, 232, -125, 253, 57, 158, 480, -84, 192, 313, -276, -191, -243, 489, 208, 209, 256, -63, -226};
    vector<int> Y = {-267, 435, -159, 475, -284, 144, -229, 148, 6, 498, -458, 84, 271, 273, 487, -343, 4, 441, -386, -309, 330, 234, -432, -208, -213, 396, -251, 214, -16, -165, -357, 51, 430, 359, 111, 489, -38, 93, 200, -271, -8, -161, 195, -60, -390, -368, -144, 207, -34};
    vector<int> R = {427, 223, 121, 35, 1, 113, 19, 104, 81, 200, 54, 28, 15, 12, 66, 46, 22, 166, 53, 183, 20, 3, 36, 19, 47, 14, 22, 72, 14, 88, 114, 8, 10, 21, 22, 34, 2, 8, 38, 62, 15, 6, 9, 14, 18, 50, 3, 32, 15};
    int x1 = 161;
    int y1 = 53;
    int x2 = -456;
    int y2 = 54;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> X = {0, 0, 5, 5, 12, 12};
    vector<int> Y = {0, 0, 0, 0, 0, 0};
    vector<int> R = {2, 1, 2, 1, 3, 2};
    int x1 = 0;
    int y1 = 0;
    int x2 = 11;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> X = {0, 0, 5, 5, 12, 12, 15, 13};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 5};
    vector<int> R = {2, 1, 2, 1, 3, 2, 7, 1};
    int x1 = 0;
    int y1 = 0;
    int x2 = 11;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> X = {0, 0, 5, 5, 12, 12, 15, 13, 6, 14};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 5, 4, 23};
    vector<int> R = {2, 1, 2, 1, 3, 2, 7, 1, 2, 73};
    int x1 = -80;
    int y1 = 0;
    int x2 = 11;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {45, 23, 27, 7, 3, 28, 29, 17, 2, 10, 42, 39, 44, 19, 6, 16, 8, 14, 49, 18, 5, 1, 26, 30, 25, 11, 12, 40, 21, 24, 31, 13, 48, 20, 35, 50, 36, 15, 38, 43, 41, 33, 47, 34, 22, 9, 46, 32, 4, 37};
    int x1 = 0;
    int y1 = 0;
    int x2 = 110;
    int y2 = -60;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {5, 153, 259, 441, 418, 331, 35, 79, 429, 91, 205, 169, 432, 13, 143, 134, 387, 175, 494, 362, 215, 319, 128, 328, 65, 28, 261, 342, 286, 473, 304, 233, 466, 196, 459, 106, 353, 483, 392, 373, 409, 114, 274, 59, 224, 86, 294, 49, 185, 244};
    int x1 = 0;
    int y1 = 0;
    int x2 = 110;
    int y2 = -60;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {5, 153, 259, 441, 418, 331, 35, 79, 429, 91, 205, 169, 432, 13, 143, 134, 387, 175, 494, 362, 215, 319, 128, 328, 65, 28, 261, 342, 286, 473, 304, 233, 466, 196, 459, 106, 353, 483, 392, 373, 409, 114, 274, 59, 224, 86, 294, 49, 185, 244};
    int x1 = 38;
    int y1 = 34;
    int x2 = 131;
    int y2 = 23;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {356, 85, 103, 396, 366, 55, 138, 279, 163, 91, 317, 115, 202, 386, 146, 155, 324, 171, 187, 447, 37, 124, 222, 234, 244, 345, 434, 69, 285, 418, 13, 407, 301, 465, 29, 218, 292, 425, 457, 265, 75, 49, 379, 474, 337, 193, 252, 485, 9, 494};
    int x1 = 462;
    int y1 = 320;
    int x2 = 457;
    int y2 = 29;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {252, 13, 171, 296, 29, 55, 118, 75, 84, 146, 336, 366, 489, 264, 184, 345, 273, 397, 418, 137, 217, 152, 126, 433, 242, 382, 167, 467, 303, 31, 372, 311, 493, 91, 329, 356, 229, 68, 281, 446, 194, 407, 423, 203, 109, 453, 239, 474, 8, 47};
    int x1 = 20;
    int y1 = 385;
    int x2 = 199;
    int y2 = 30;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 132, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 50, 234, 0, 0, 0, 11};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 111, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 497, 12, 0, 0, 0, 480};
    vector<int> R = {184, 99, 106, 27, 132, 53, 217, 66, 3, 41, 144, 2, 39, 2, 11, 158, 74, 177, 5, 196, 115, 167, 224, 127, 1, 2, 84, 205, 231, 3};
    int x1 = 329;
    int y1 = 101;
    int x2 = 61;
    int y2 = 243;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> X = {0, 0, 295, 152, 343, 0, 0, 0, 43, 0, 324, 0, 0, 0, 417, 0, 0, 0, 0, 48, 0, 0, 0, 289, 0, 495, 341, 164, 446, 405, 0, 187, 246, 4, 460, 0, 317, 0, 0, 463, 0, 211, 413, 467, 62, 0, 359, 0};
    vector<int> Y = {0, 0, 63, 342, 282, 0, 0, 0, 439, 0, 387, 0, 0, 0, 299, 0, 0, 0, 0, 461, 0, 0, 0, 282, 0, 324, 201, 370, 306, 125, 0, 214, 425, 447, 295, 0, 380, 0, 0, 336, 0, 42, 331, 233, 278, 0, 3, 0};
    vector<int> R = {84, 13, 2, 7, 2, 107, 66, 167, 51, 33, 17, 112, 124, 21, 196, 159, 78, 177, 147, 75, 202, 213, 223, 12, 132, 308, 53, 2, 10, 3, 238, 2, 1, 135, 98, 182, 36, 92, 197, 270, 56, 1, 31, 7, 19, 2, 40, 41};
    int x1 = 477;
    int y1 = 24;
    int x2 = 481;
    int y2 = 208;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> X = {337, 0, 186, 0, 307, 0, 0, 0, 397, 0, 17, 0, 0, 269, 0, 345, 0, 69, 0, 330, 317, 0, 0, 0, 303, 0, 60, 0, 0, 327, 272, 220, 164, 375, 11, 397, 41, 393, 0, 126, 0, 262, 121, 0, 0, 0, 0, 0};
    vector<int> Y = {242, 0, 307, 0, 27, 0, 0, 0, 309, 0, 227, 0, 0, 172, 0, 272, 0, 264, 0, 69, 123, 0, 0, 0, 243, 0, 381, 0, 0, 215, 356, 191, 295, 257, 369, 106, 350, 322, 0, 215, 0, 239, 226, 0, 0, 0, 0, 0};
    vector<int> R = {54, 156, 33, 38, 2, 202, 63, 77, 8, 147, 3, 115, 133, 15, 18, 5, 192, 11, 183, 21, 19, 5, 223, 29, 17, 162, 59, 52, 88, 17, 33, 22, 69, 95, 5, 44, 21, 4, 47, 6, 108, 13, 4, 238, 216, 92, 178, 125};
    int x1 = 68;
    int y1 = 158;
    int x2 = 46;
    int y2 = 326;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> X = {0, 393, 21, 0, 0, 0, 27, 0, 0, 48, 0, 0, 0, 353, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 310, 375, 272, 367, 368, 383, 141, 357, 0, 243, 0, 252, 0, 0, 0, 303, 184, 13, 0, 321, 386, 332, 380, 50};
    vector<int> Y = {0, 363, 102, 0, 0, 0, 366, 0, 0, 314, 0, 0, 0, 94, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 277, 299, 263, 152, 27, 313, 340, 301, 0, 374, 0, 248, 0, 0, 0, 108, 249, 378, 0, 41, 243, 203, 106, 300};
    vector<int> R = {179, 281, 1, 32, 45, 52, 5, 76, 156, 27, 141, 113, 124, 5, 101, 41, 169, 83, 212, 243, 204, 184, 227, 237, 3, 2, 13, 186, 55, 26, 2, 45, 27, 6, 193, 6, 25, 15, 97, 15, 68, 3, 4, 39, 134, 36, 21, 15, 5, 45};
    int x1 = 102;
    int y1 = 7;
    int x2 = 186;
    int y2 = 110;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> X = {0, 873, 0, 0, 0, 762, 0, 0, 780, 727, 0, 301, 61, 0, 0, 0, 80, 0, 247, 0, 0, 0, 0, 0, 379, 894, 0, 347, 0, 0, 0, 194, 167, 839, 700, 644, 345, 0, 0, 0, 442, 378, 0, 526, 762, 222, 887, 0, 520, 733};
    vector<int> Y = {0, 468, 0, 0, 0, 88, 0, 0, 678, 476, 0, 366, 824, 0, 0, 0, 809, 0, 302, 0, 0, 0, 0, 0, 810, 306, 0, 237, 0, 0, 0, 345, 608, 513, 440, 296, 562, 0, 0, 0, 223, 151, 0, 751, 811, 739, 449, 0, 658, 343};
    vector<int> R = {25, 437, 7, 32, 41, 24, 69, 77, 60, 141, 109, 26, 280, 132, 181, 154, 19, 176, 15, 12, 202, 219, 228, 236, 2, 89, 111, 11, 53, 91, 194, 142, 2, 20, 22, 12, 94, 129, 245, 144, 34, 5, 166, 9, 38, 89, 332, 84, 30, 5};
    int x1 = 232;
    int y1 = 48;
    int x2 = 833;
    int y2 = 650;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> X = {-4, 139, 874, 481, 0, -2, 680, 738, -3, -2, -3, -4, 678, -1, -4, -3, -2, -2, -4, -3, 0, 645, 710, -3, -4, 711, -3, 0, 659, -4, 592, 882, 230, 657, -2, 846, 457, 356, -2, 0, -2, 829, 0, 572, 193, 635, 673, 72, 515, 164};
    vector<int> Y = {-2, 6, 647, 123, -1, 0, 319, 88, 0, -1, 0, -4, 773, -3, -4, 0, -2, 0, -2, 0, -3, 439, 298, 0, -1, 694, -3, -3, 496, -3, 890, 415, 626, 660, 0, 579, 317, 526, -3, -4, -3, 896, -3, 598, 476, 627, 472, 827, 899, 151};
    vector<int> R = {124, 9, 90, 1, 603, 86, 4, 2, 321, 364, 408, 443, 37, 921, 806, 205, 245, 49, 728, 764, 163, 9, 3, 528, 962, 27, 649, 561, 14, 487, 60, 3, 16, 5, 887, 6, 3, 3, 8, 847, 283, 50, 687, 10, 2, 2, 6, 1, 6, 13};
    int x1 = 713;
    int y1 = 852;
    int x2 = 36;
    int y2 = 496;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-3, -3, -4, -1, -2, 0, 777, -1, 0, 709, -3, 0, -3, -4, 420, -3, -3, 205, 760, 837, 18, 928, 984, 65, 203, 322, 398, 379, 936, 297, 497, 0, -2, 694, 591, 963, 996, 771, 543, 923, 499, 951, 560, -1, 293, 453, 258, 559};
    vector<int> Y = {-4, -2, -4, -2, -1, -3, 88, -4, -3, 946, -4, -2, -1, -2, 909, 0, -4, 653, 731, 699, 881, 161, 189, 855, 758, 977, 562, 675, 868, 802, 852, -2, -4, 734, 526, 363, 119, 598, 779, 677, 611, 828, 950, -3, 297, 527, 699, 612};
    vector<int> R = {3, 525, 82, 126, 163, 443, 27, 285, 322, 31, 403, 203, 486, 47, 41, 248, 643, 12, 335, 247, 188, 5, 196, 88, 26, 30, 2, 44, 9, 6, 23, 562, 367, 54, 51, 16, 290, 42, 5, 87, 19, 28, 28, 601, 8, 3, 28, 36};
    int x1 = 494;
    int y1 = 937;
    int x2 = 135;
    int y2 = 300;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> X = {1000, -1000};
    vector<int> Y = {1000, -1000};
    vector<int> R = {1000, 1000};
    int x1 = 1000;
    int y1 = 997;
    int x2 = -666;
    int y2 = -666;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> X = {1000, -1000, -1000, 1000};
    vector<int> Y = {1000, -1000, 1000, -1000};
    vector<int> R = {999, 999, 999, 999};
    int x1 = 1000;
    int y1 = 997;
    int x2 = -666;
    int y2 = -666;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> X = {1000, -1000, 1000, 753, -409, -595, -549, 708, -864, -682, 669, 752, 514, 557};
    vector<int> Y = {1000, 1000, -1000, 974, -739, 760, -59, 909, -107, -106, 183, 939, -922, -488};
    vector<int> R = {999, 999, 999, 437, 147, 236, 3, 245, 13, 99, 41, 2, 461, 11};
    int x1 = 505;
    int y1 = 799;
    int x2 = -737;
    int y2 = -23;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> X = {1000, -1000, 1000, -553, -109, -257, -920, 966, 782, 934, 303, -910, 903, -911};
    vector<int> Y = {1000, 1000, -1000, 870, -318, 950, -777, -569, 288, -798, -458, 297, 997, -916};
    vector<int> R = {999, 999, 999, 446, 241, 69, 284, 1, 225, 768, 38, 207, 399, 107};
    int x1 = 877;
    int y1 = 168;
    int x2 = -889;
    int y2 = -886;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {1000, -1000, 1000, -553, -109, -257, -920, 966, 782, 934, 303, -910, 903, -911};
    vector<int> Y = {1000, 1000, -1000, 870, -318, 950, -777, -569, 288, -798, -458, 297, 997, -916};
    vector<int> R = {999, 999, 999, 446, 241, 69, 284, 1, 225, 768, 38, 207, 399, 107};
    int x1 = -911;
    int y1 = -916;
    int x2 = -666;
    int y2 = -666;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {1000, -1000, 1000, 926, -346, -875, -525, 369, -506, 426, 310, -84, 798, -993};
    vector<int> Y = {1000, 1000, -1000, 452, -545, -413, -526, -785, -487, -381, -977, 270, 442, 961};
    vector<int> R = {999, 999, 999, 85, 387, 42, 21, 10, 158, 148, 79, 133, 396, 763};
    int x1 = 1000;
    int y1 = 997;
    int x2 = -666;
    int y2 = -666;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> X = {1000, -1000, -1000, 1000, 864, -899, 948, 965, -101, 986, -635, -282, 477, -975, -935, -359, 367, 497, -331, 823, 399, 660, 406, -578, -37, -911, 62, 798, -250, -514, 984, 415, -946, -601, -888, -494};
    vector<int> Y = {1000, -1000, 1000, -1000, -759, -260, -577, 839, 110, 938, -646, 549, 464, 266, -873, 307, 101, -688, 948, 995, -975, 557, -714, -53, 389, 521, -151, 263, -880, 582, 148, 842, -386, 667, -702, -297};
    vector<int> R = {999, 999, 999, 999, 183, 202, 391, 317, 92, 6, 114, 68, 141, 115, 30, 4, 94, 52, 78, 56, 218, 57, 28, 12, 121, 501, 134, 129, 118, 28, 68, 208, 62, 47, 135, 2};
    int x1 = 776;
    int y1 = -931;
    int x2 = 392;
    int y2 = -848;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> X = {1000, -1000, -1000, 1000, -484, -851, 914, 982, -985, -34, -934, -974, -394, -991, 477, 813, -894, 242, -840, -78, 904, -159, -212, -811, 763, 548, -940, 827, -932, -519, 72, 899, -781, -591, 549, 522, -219, 70, 924, -447, 386, 369, -939, -733, 297, 723, -562, 947, -930, -698};
    vector<int> Y = {1000, -1000, 1000, -1000, 388, -664, 559, 928, 711, -184, -185, -455, 902, 820, -664, -250, -714, 571, -966, 143, -632, 321, 671, 304, 639, -796, 422, -133, 870, -315, 229, -511, 153, -826, 297, 0, 504, -264, 438, -9, 702, -6, -641, -190, -445, 884, 873, 421, 438, 703};
    vector<int> R = {999, 999, 999, 999, 98, 443, 6, 653, 418, 234, 32, 154, 63, 159, 358, 38, 658, 80, 81, 85, 33, 71, 7, 4, 69, 119, 11, 55, 10, 16, 7, 6, 106, 55, 36, 90, 61, 22, 5, 9, 1, 28, 27, 42, 24, 125, 21, 132, 54, 18};
    int x1 = 891;
    int y1 = 502;
    int x2 = -85;
    int y2 = 799;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> X = {1000, -1000, -1000, 1000, 594, 905, -726, -714, -340, 296, -915, -56, -195, -998, 792, -935, -264, 858, -67, 638, 743, -515, -954, -819, -685, -413, -475, 99, -767, 363, -379, 274, -329, 306, -363, 12, -219, 672, 163, 862, -309, 833, 459, -977, 646, -46, -345, -583, -218, -589};
    vector<int> Y = {1000, -1000, 1000, -1000, 17, -707, 769, 995, -348, 687, 387, 193, 307, -410, 174, 897, -894, 836, 385, 711, -615, 443, 712, 401, -137, -718, -707, -189, -946, -377, -35, 384, 845, 19, -413, -539, -42, -923, -187, -725, -708, -657, 287, -413, -718, -461, -435, -252, 573, -831};
    vector<int> R = {999, 999, 999, 999, 33, 571, 34, 34, 14, 223, 167, 104, 49, 263, 142, 830, 62, 331, 13, 6, 231, 15, 499, 63, 25, 159, 42, 129, 166, 48, 8, 5, 134, 36, 27, 36, 175, 12, 24, 493, 16, 41, 60, 2, 76, 61, 57, 93, 1, 8};
    int x1 = 144;
    int y1 = -144;
    int x2 = -729;
    int y2 = -615;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> X = {-466, 850, -481, 959, 156, 297, -544, -418, 45, 754, -729, 614, -282, -332, -156, 79, -677, 43, -255, -266, 795, 869, -49, 276, 713, 602, 485, -53, -5, 61, 898, 888, 483, 26, -439, -330, -750, -970, 75, -372, 338, -8, -193, -628, -752, 653, -764, -791, -174, 851};
    vector<int> Y = {-617, 988, -703, 99, 757, 297, -382, -423, -207, 57, 293, 701, 962, 860, -996, -381, 670, -622, 838, -499, -732, -270, -891, -238, -688, 772, -131, -142, -339, -215, 103, 376, 768, 83, 436, 920, -412, -141, 424, 938, -687, 950, -887, -226, 139, -657, -459, 787, 794, -306};
    vector<int> R = {714, 111, 830, 260, 55, 166, 365, 90, 30, 44, 9, 190, 363, 608, 74, 14, 87, 131, 199, 24, 344, 104, 11, 23, 196, 15, 110, 72, 46, 8, 42, 19, 38, 12, 89, 690, 30, 17, 10, 39, 3, 20, 4, 77, 21, 66, 98, 13, 78, 51};
    int x1 = -742;
    int y1 = -443;
    int x2 = -448;
    int y2 = 856;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> X = {-38, -2, 40, -91, 74, 69, -69, -38, 57, 83, -93, -72, -36, -64, 88, 86, 11, 1, -88, 68, -71, 18, 67, -78, 57, -99, -10, 16, -57, 56, -17, -58, -40, 73, -79, 21, 11, 10, -98, -70, 9, -1, -38, 87, -94, 91, 90};
    vector<int> Y = {41, -8, -46, 60, -69, 50, -81, -97, 32, -64, 82, 17, 76, -93, -69, -72, 97, -11, -81, 76, 41, -13, -68, 73, 68, 30, -40, 82, -54, 92, -30, -67, 99, -66, -48, 33, -4, 48, 2, -81, -23, -67, -49, -17, -77, 68, -64};
    vector<int> R = {18, 28, 5, 77, 34, 45, 55, 19, 21, 22, 43, 20, 8, 5, 64, 74, 23, 6, 7, 5, 3, 5, 42, 18, 4, 7, 4, 7, 8, 1, 1, 3, 6, 3, 5, 2, 6, 9, 7, 1, 3, 11, 8, 8, 20, 6, 14};
    int x1 = 93;
    int y1 = -68;
    int x2 = -78;
    int y2 = -78;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> X = {-260, -790, -788, -670, -668, 13, -663, -721, -464, -769, -371, -184, -152, -643, -454, -351, -788, -666, -787, -439, -660, -661, -758, -728, -654, -446, -575, -726, -364, -664, -659, -788, 74, -659, 42, -570, -662, -359, -765};
    vector<int> Y = {-664, 474, 619, 552, 556, 363, 576, 718, 497, 738, 885, -582, -351, 782, 498, 891, 478, 556, 622, 507, 572, 577, 640, 700, 573, 511, 624, 720, 896, 560, 573, 492, 400, 577, 386, 628, 578, 897, 798};
    vector<int> R = {553, 398, 249, 73, 68, 247, 26, 38, 51, 95, 75, 394, 96, 25, 40, 53, 393, 56, 244, 22, 38, 21, 208, 16, 12, 13, 24, 48, 30, 51, 36, 378, 174, 31, 124, 17, 23, 20, 31};
    int x1 = -658;
    int y1 = 575;
    int x2 = -783;
    int y2 = 619;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> X = {-526, -508, -501, -479, -473, 779, -503, -503, -315, -491, -475, 784, -470, -332, -484, -375, -469, -493, -468, -371, -419, -482, -373, 947, -472, -449, -468, -100};
    vector<int> Y = {-399, -396, -273, -389, -319, 279, -384, -386, -265, -269, -210, 353, -203, -264, -213, -370, -384, -265, -383, -201, -255, -211, -369, 334, -205, -199, -383, -751};
    vector<int> R = {340, 312, 125, 261, 45, 327, 290, 286, 46, 114, 51, 249, 40, 12, 22, 31, 242, 109, 245, 12, 16, 19, 27, 76, 44, 14, 240, 139};
    int x1 = -472;
    int y1 = -382;
    int x2 = -447;
    int y2 = -195;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> X = {-274, 504, -111, 511, -217, 43, -236, 32, 156, 715, 157, 45, 423, 157, 170, 718, 660, 157, 168, 687, 115, 553, -271, -24, 720, 735, 676, 567, 724, 167, 468, 515, 721, 663, 726, 722, -254, 512, -234, 505, -168};
    vector<int> Y = {231, -320, 425, -305, 294, 309, 298, 683, 614, 304, 618, 684, -606, 618, 625, 304, -614, 618, 627, -610, 440, -296, 234, 783, 305, 307, -600, -286, 310, 627, -576, -312, 306, -611, 306, 307, 241, -240, 299, -319, 317};
    vector<int> R = {826, 121, 447, 94, 655, 225, 694, 71, 48, 48, 43, 55, 145, 40, 25, 44, 70, 41, 18, 17, 70, 42, 819, 24, 40, 15, 38, 17, 32, 21, 79, 105, 38, 62, 27, 36, 800, 13, 690, 119, 583};
    int x1 = 663;
    int y1 = -616;
    int x2 = 734;
    int y2 = 304;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {531, -413, 834, 861, 871, 861, 873, 835, 879, 887, 887, 889, 875, 884, 884, 876, 605, 875, 865, -696, 874, -317, -279, 835, -412, 877, -839, 875, 876, 887, 849, 875, 835, 877, 887, -296, 888, -683, -344, -262, -746};
    vector<int> Y = {-116, -1, 0, 529, 547, 529, 555, 2, 562, 560, 578, 578, 549, 567, 569, 560, -68, 549, 530, 732, 561, 46, -638, 6, 2, 560, -606, 549, 559, 579, 34, 550, 6, 560, 577, 45, 577, 749, 28, -619, -578};
    vector<int> R = {541, 301, 67, 113, 86, 112, 71, 64, 53, 44, 22, 17, 81, 36, 33, 59, 363, 80, 106, 108, 62, 174, 205, 59, 296, 56, 282, 79, 65, 12, 14, 77, 58, 57, 20, 75, 24, 58, 207, 151, 28};
    int x1 = 604;
    int y1 = -66;
    int x2 = -292;
    int y2 = 47;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-750, -338, -213, -746, -730, -722, -725, -713, -737, -697, -543, -740, -677, 85, -694, -715, -693, -676, -734, -724, -262, -670, -696, -689, -670, -723, -691, -734, -548, -669, -571, -705, -686, -211, -667, -678, -723, -672, -745, -746, -641, -726, -711, -695, -674, -669, -573, -713};
    vector<int> Y = {99, -862, 51, 162, 165, 185, 167, 191, 170, 199, 288, 174, 195, 687, 202, 186, 202, 198, 168, 169, -736, 206, 203, 200, 203, 172, 207, 171, 347, 204, 185, 194, 202, 51, 205, -740, 171, 203, 124, 103, -717, 173, 191, 201, 200, 203, -692, 189};
    vector<int> R = {302, 718, 24, 226, 193, 123, 177, 106, 209, 85, 12, 145, 41, 441, 79, 113, 77, 37, 199, 171, 123, 26, 72, 57, 13, 166, 65, 203, 11, 22, 12, 96, 53, 21, 18, 171, 168, 30, 273, 295, 92, 184, 103, 82, 34, 11, 13, 109};
    int x1 = -726;
    int y1 = 165;
    int x2 = -681;
    int y2 = -737;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> X = {-725, -715, -543, -695, -723, -213, -689, -750, -548, 85, -745, -262, -669, -697, -641, -674, -686, -338, -724, -672, -730, -677, -740, -694, -667, -678, -734, -723, -746, -211, -746, -722, -670, -693, -670, -676, -705, -571, -696, -691, -726, -713, -711, -734, -737, -669, -573, -713};
    vector<int> Y = {167, 186, 288, 201, 172, 51, 200, 99, 347, 687, 124, -736, 204, 199, -717, 200, 202, -862, 169, 203, 165, 195, 174, 202, 205, -740, 171, 171, 162, 51, 103, 185, 206, 202, 203, 198, 194, 185, 203, 207, 173, 191, 191, 168, 170, 203, -692, 189};
    vector<int> R = {177, 113, 12, 82, 166, 24, 57, 302, 11, 441, 273, 123, 22, 85, 92, 34, 53, 718, 171, 30, 193, 41, 145, 79, 18, 171, 203, 168, 226, 21, 295, 123, 26, 77, 13, 37, 96, 12, 72, 65, 184, 106, 103, 199, 209, 11, 13, 109};
    int x1 = -567;
    int y1 = 185;
    int x2 = -729;
    int y2 = 175;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> X = {-433, 618, 442, -430, -308, -389, -412, 163, -417, -439, 682, -329, 112, 461, -442, -339, -321, 621, 165, -423, 620, -341, -338, -421, -316, -426, 383, 646, 623, -407, 111, 379, 121, -331, 378, -332};
    vector<int> Y = {418, -539, 334, 413, 445, 417, 438, -119, 420, 409, -498, 425, -217, 344, 408, 422, 426, -533, -102, 419, -528, 420, 425, 672, 440, 668, 427, -509, -524, 425, -218, 334, -214, 425, 332, 424};
    vector<int> R = {393, 198, 66, 333, 35, 226, 281, 189, 192, 405, 18, 80, 341, 27, 410, 97, 60, 115, 151, 319, 170, 100, 93, 16, 45, 23, 32, 65, 146, 300, 348, 141, 330, 85, 145, 72};
    int x1 = -327;
    int y1 = 427;
    int x2 = 437;
    int y2 = 331;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> X = {36, -535, 51, 190, 156, 281, -526, 242, -554, -677, -536, 234, -552, -530, -613, 184, 263, 148, 224, 69, -601, 36, 148, 43, -475, 46, -564, 353, 263, 180, 178, -615, -537, 265, -695, 268, 192, -559, -539, 236};
    vector<int> Y = {-465, 118, -448, -378, -415, -441, 161, -225, 102, -676, 119, -241, 103, 158, 99, -397, -331, -445, -252, -321, 111, -421, -446, 642, 141, -455, 97, -341, -330, -408, -411, 96, 119, -396, -717, -330, -375, 104, 115, -230};
    vector<int> R = {483, 88, 397, 196, 256, 81, 31, 11, 125, 18, 98, 47, 122, 40, 195, 216, 22, 291, 64, 35, 213, 429, 293, 439, 17, 466, 142, 21, 20, 228, 233, 234, 91, 17, 77, 11, 192, 132, 104, 28};
    int x1 = -477;
    int y1 = 141;
    int x2 = -555;
    int y2 = 98;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {-478, 624, 502, 615, 528, 500, 499, -665, -579, 552, 652, 380, 625, 628, 617, 629, 447, 457, 503, 526, 617, -568, 455, 525, -552, 613, 550, 503, -437, 447, 630};
    vector<int> Y = {-307, -299, -183, -308, -120, -140, -165, -370, -412, -157, 672, -327, -297, -299, -307, -298, -304, -284, -164, -123, -306, -396, -284, -123, -333, -313, -158, -164, -354, -285, -298};
    vector<int> R = {125, 28, 28, 48, 18, 15, 77, 354, 614, 20, 583, 296, 11, 22, 39, 20, 68, 30, 72, 13, 43, 571, 23, 11, 482, 57, 14, 70, 14, 46, 17};
    int x1 = 625;
    int y1 = -296;
    int x2 = -666;
    int y2 = -368;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> X = {60, 62, 211, 67, 63, 58, -68, 38, -458, 205, -101, -89, 227, -468, 40, -162, -96, -463, 68, -465};
    vector<int> Y = {269, 264, 286, 276, 257, 256, 215, 240, -121, 420, 118, 142, 118, -132, 241, -397, 126, -127, 278, -129};
    vector<int> R = {39, 102, 15, 78, 115, 122, 271, 157, 28, 21, 384, 348, 21, 50, 149, 80, 373, 42, 53, 45};
    int x1 = -166;
    int y1 = -394;
    int x2 = -463;
    int y2 = -124;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> X = {490, -394, -403, -243, -393, -276, -383, -390, -381, -518, -383, -283, -605, 492, -274, 491, 364, 489, 490, -384, 495, -388, -376, -277, -390, 419, -396};
    vector<int> Y = {20, 552, 481, 581, 481, 523, 552, -30, 555, 184, -26, 522, 165, 19, 527, 20, -176, 17, 17, 567, 24, 554, 483, 526, 552, -152, 481};
    vector<int> R = {82, 70, 175, 11, 162, 29, 12, 99, 20, 496, 87, 43, 135, 66, 20, 73, 408, 92, 88, 38, 46, 54, 144, 34, 61, 287, 166};
    int x1 = 491;
    int y1 = 24;
    int x2 = -379;
    int y2 = -26;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> X = {-651, -643, -648, 556, -608, -641, -610, -628, 192, -637, 67, 488, -635, 53, -528, 351, -73, -603, -385, 341, 562, 204, -607, -605, 71, -428, -629, -658, -606};
    vector<int> Y = {-162, -217, -219, 533, -178, -170, -179, -114, 486, -117, 489, 508, -213, 457, -84, 285, -215, -202, 40, 271, 535, 501, -177, -205, 490, -163, -115, -202, -174};
    vector<int> R = {90, 314, 320, 45, 234, 187, 237, 25, 562, 40, 41, 157, 303, 89, 15, 44, 158, 264, 39, 63, 33, 520, 232, 268, 32, 22, 27, 145, 226};
    int x1 = -606;
    int y1 = -179;
    int x2 = 347;
    int y2 = 283;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> X = {-223, -247, -384, -157, -329, -152, -397, -251, -239, -255, -396, 220, 290, -317, -332, -259, -254, -333, 364, -380, -248, -244, -380, 295, -223, -5, 303, -174, 301, -248, -228, 93, -247, -251, 32, -370, -6, 27, -248, -197, -276, 290, 276, -326, -204, -362, -249, -254, 38};
    vector<int> Y = {127, 202, 0, 358, 49, 359, -7, 203, 135, 193, -5, 526, -653, 114, 46, 177, 194, 45, -622, 22, 203, 198, 16, -649, 143, 153, -644, 206, -641, 202, 182, 356, 196, 199, 156, 55, 152, 155, 203, 151, 132, -643, -682, 60, 241, 59, 203, 191, 178};
    vector<int> R = {376, 30, 720, 58, 594, 51, 748, 41, 345, 123, 744, 15, 96, 517, 600, 142, 120, 602, 13, 688, 35, 12, 703, 42, 411, 90, 79, 17, 21, 32, 85, 14, 23, 114, 46, 652, 92, 56, 34, 288, 468, 62, 131, 577, 13, 643, 37, 57, 14};
    int x1 = -391;
    int y1 = -2;
    int x2 = 364;
    int y2 = -626;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> X = {-18, -231, -13, -21, -170, 1, 242, -102, -160, -196, 2, 240, 49, 245, -208, 219, 3, -69, -108, -24, -130, 29, -220, -186, -470, 388, -108, -119, -132, -5, -127, -230, -195, -107, 79, -188, -108, 401, -498, 203, -224, 171, -174, -128, -49, -109, -7, 421, -106};
    vector<int> Y = {602, 375, 585, 595, 366, 608, -621, 681, 414, 300, 621, -683, 761, 838, 400, 486, 623, 593, 680, 593, 578, 618, 571, 361, -684, 595, 678, 590, 576, 603, 583, 375, 300, 684, 423, 359, 586, 514, -693, 486, 375, 606, 367, 581, 693, 677, 601, 948, 685};
    vector<int> R = {64, 598, 12, 74, 716, 41, 32, 22, 468, 799, 11, 107, 17, 34, 535, 28, 14, 131, 30, 79, 201, 11, 295, 733, 86, 28, 34, 183, 204, 49, 194, 596, 797, 13, 19, 736, 171, 15, 125, 71, 585, 51, 678, 197, 24, 36, 52, 65, 11};
    int x1 = 249;
    int y1 = 833;
    int x2 = 240;
    int y2 = 838;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> X = {1, -3, 2, 5, -4, 12, 12};
    vector<int> Y = {1, -1, 2, 5, 5, 1, 1};
    vector<int> R = {8, 1, 2, 1, 1, 1, 2};
    int x1 = -5;
    int y1 = 1;
    int x2 = 12;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> X = {0, 5};
    vector<int> Y = {0, 5};
    vector<int> R = {20, 1};
    int x1 = 0;
    int y1 = 0;
    int x2 = 5;
    int y2 = 5;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 25;
    int y1 = 25;
    int x2 = 30;
    int y2 = 30;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> X = {-107, -38, 140, 148, -198, 172, -179, 148, 176, 153, -56, -187};
    vector<int> Y = {175, -115, 23, -2, -49, -151, -52, 42, 0, 68, 109, -174};
    vector<int> R = {135, 42, 70, 39, 89, 39, 43, 150, 10, 120, 16, 8};
    int x1 = 102;
    int y1 = 16;
    int x2 = 19;
    int y2 = -108;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0, -6, 6};
    vector<int> Y = {0, 1, 2};
    vector<int> R = {2, 2, 2};
    int x1 = -5;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> X = {2};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 0;
    int y1 = 0;
    int x2 = 4;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> X = {0, 0, 3};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {1, 10, 1};
    int x1 = 0;
    int y1 = 0;
    int x2 = 3;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 0;
    int y1 = 1;
    int x2 = 0;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {2, 6};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> X = {0, -1, 2};
    vector<int> Y = {0, 1, 1};
    vector<int> R = {10, 1, 1};
    int x1 = -1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> X = {1, -3, 2, 5, -4, 12, 12, 0};
    vector<int> Y = {1, -1, 2, 5, 5, 1, 1, 0};
    vector<int> R = {8, 1, 2, 1, 1, 1, 2, 1000};
    int x1 = -5;
    int y1 = 1;
    int x2 = 12;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> X = {0, -6, 6};
    vector<int> Y = {0, 1, 2};
    vector<int> R = {2, 2, 2};
    int x1 = 5;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {10, 15};
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> X = {3};
    vector<int> Y = {3};
    vector<int> R = {3};
    int x1 = 2;
    int y1 = 3;
    int x2 = 4;
    int y2 = 3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {5, 10};
    int x1 = 0;
    int y1 = 0;
    int x2 = 4;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = -1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> X = {0, -10, 10};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {100, 5, 5};
    int x1 = -10;
    int y1 = 0;
    int x2 = 10;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {2, 4};
    int x1 = 1;
    int y1 = 0;
    int x2 = 3;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = -5;
    int y1 = 0;
    int x2 = 5;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> X = {0, 0, 0};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {5, 10, 15};
    int x1 = 0;
    int y1 = 0;
    int x2 = 11;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 0;
    int y1 = 1;
    int x2 = 0;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> X = {0, 999, 0, -12, 0, 500, -12};
    vector<int> Y = {0, 999, 0, 0, 300, 31, 0};
    vector<int> R = {599, 10, 998, 50, 33, 2, 47};
    int x1 = -61;
    int y1 = 1;
    int x2 = 499;
    int y2 = 30;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> X = {0, -2, -2};
    vector<int> Y = {0, 2, -2};
    vector<int> R = {100, 1, 1};
    int x1 = -2;
    int y1 = -2;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> X = {1, -3, 2, 5, -4, 12, 12};
    vector<int> Y = {1, -1, 2, 5, 5, 1, 1};
    vector<int> R = {8, 1, 2, 1, 1, 1, 2};
    int x1 = -5;
    int y1 = 1;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {200};
    int x1 = 0;
    int y1 = 1;
    int x2 = 0;
    int y2 = -1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> X = {0, 1};
    vector<int> Y = {0, 1};
    vector<int> R = {2, 800};
    int x1 = -5;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = 0;
    int y1 = 1;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> X = {-107, -38, 140, 148, -198, 172, -179, 148, 176, 153, -56, -187, 0};
    vector<int> Y = {175, -115, 23, -2, -49, -151, -52, 42, 0, 68, 109, -174, 0};
    vector<int> R = {135, 42, 70, 39, 89, 39, 43, 150, 10, 120, 16, 8, 1000};
    int x1 = 102;
    int y1 = 16;
    int x2 = 19;
    int y2 = -108;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {50};
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {4, 5};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> X = {0, 5, -5};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {20, 1, 1};
    int x1 = 5;
    int y1 = 0;
    int x2 = -5;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 3;
    int y1 = 0;
    int x2 = 4;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> X = {0, 0, 15, 15, 7, 7, 7, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 9, -9, 0, 0};
    vector<int> R = {1, 2, 1, 2, 4, 4, 4, 200, 1000};
    int x1 = 0;
    int y1 = 0;
    int x2 = 15;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = -1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> X = {0, -6, 6, 0};
    vector<int> Y = {0, 1, 2, 0};
    vector<int> R = {2, 2, 2, 100};
    int x1 = -5;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> X = {1};
    vector<int> Y = {1};
    vector<int> R = {100};
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> X = {8, 6, 3};
    vector<int> Y = {3, 5, 8};
    vector<int> R = {5, 100, 1000};
    int x1 = 12;
    int y1 = 16;
    int x2 = 100;
    int y2 = 100;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {2};
    int x1 = -1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> X = {0, 0, 0};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {2, 4, 10};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 5;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 1;
    int y1 = 1;
    int x2 = 5;
    int y2 = 5;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {2, 2, 2, 15};
    vector<int> Y = {2, 2, 2, 2};
    vector<int> R = {1, 10, 50, 1};
    int x1 = 2;
    int y1 = 2;
    int x2 = 15;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> X = {0, 1, 2};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {5, 3, 1};
    int x1 = 0;
    int y1 = 0;
    int x2 = 2;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 1;
    int y1 = 1;
    int x2 = -1;
    int y2 = -1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {1, 3};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> X = {0, 0, 0, 0};
    vector<int> Y = {0, 0, 10, -10};
    vector<int> R = {1000, 500, 2, 2};
    int x1 = 0;
    int y1 = 9;
    int x2 = 0;
    int y2 = -9;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> X = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    int x1 = -28;
    int y1 = 0;
    int x2 = 12;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = -1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0};
    vector<int> R = {2, 3, 4, 5};
    int x1 = -1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {2};
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> X = {1, 1, 1, 4};
    vector<int> Y = {1, 1, 1, 1};
    vector<int> R = {100, 5, 1, 1};
    int x1 = 4;
    int y1 = 1;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> X = {-3, 2, 2, 0, -4, 12, 12, 12};
    vector<int> Y = {-1, 2, 3, 1, 5, 1, 1, 1};
    vector<int> R = {1, 3, 1, 7, 1, 1, 2, 3};
    int x1 = 2;
    int y1 = 3;
    int x2 = 2;
    int y2 = 3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {2};
    int x1 = 1;
    int y1 = 0;
    int x2 = -1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {2, 10};
    int x1 = 1;
    int y1 = 1;
    int x2 = 3;
    int y2 = 3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {10, 100};
    int x1 = 0;
    int y1 = 0;
    int x2 = 50;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0, 6, 3, 3};
    vector<int> Y = {0, 0, 0, 0};
    vector<int> R = {2, 2, 10, 25};
    int x1 = 0;
    int y1 = 0;
    int x2 = 6;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {10, 9};
    int x1 = 1;
    int y1 = -1;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> X = {2};
    vector<int> Y = {2};
    vector<int> R = {2};
    int x1 = 1;
    int y1 = 2;
    int x2 = 3;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> X = {0, 0, 0};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {4, 6, 8};
    int x1 = -1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {5, 10};
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {4};
    int x1 = 1;
    int y1 = 0;
    int x2 = 0;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {1000};
    int x1 = -1;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {10, 1000};
    int x1 = 1;
    int y1 = 1;
    int x2 = 50;
    int y2 = 50;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> X = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74};
    vector<int> Y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74};
    vector<int> R = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int x1 = 0;
    int y1 = 0;
    int x2 = 74;
    int y2 = 74;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {1, 1, 1, 4};
    vector<int> Y = {1, 1, 1, 1};
    vector<int> R = {10, 5, 1, 1};
    int x1 = 1;
    int y1 = 1;
    int x2 = 4;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 1;
    int y1 = 1;
    int x2 = 0;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> X = {0, 0, 0, -6, -2, 2};
    vector<int> Y = {0, 0, 0, 0, 0, 0};
    vector<int> R = {99, 98, 97, 6, 1, 1};
    int x1 = -2;
    int y1 = 0;
    int x2 = 2;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 1;
    int y1 = 0;
    int x2 = 0;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> X = {1, 2};
    vector<int> Y = {0, 0};
    vector<int> R = {2, 15};
    int x1 = 0;
    int y1 = 0;
    int x2 = 5;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> X = {0, -2, 2};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {10, 1, 1};
    int x1 = -2;
    int y1 = 0;
    int x2 = 2;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {5, 10};
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {1, 2};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {2, 5};
    int x1 = 1;
    int y1 = 0;
    int x2 = 3;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {1000};
    int x1 = 2;
    int y1 = 2;
    int x2 = -2;
    int y2 = -2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> X = {1, 1, 1, 1};
    vector<int> Y = {1, 1, 1, 1};
    vector<int> R = {10, 11, 12, 13};
    int x1 = 0;
    int y1 = 0;
    int x2 = 2;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> X = {-3, 2, 2, 0, -4, 12, 12, 12};
    vector<int> Y = {-1, 2, 3, 1, 5, 1, 1, 1};
    vector<int> R = {1, 3, 1, 7, 1, 1, 2, 3};
    int x1 = 2;
    int y1 = 3;
    int x2 = -3;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> X = {-1000, -1};
    vector<int> Y = {1000, 1};
    vector<int> R = {1000, 1};
    int x1 = -1000;
    int y1 = 1000;
    int x2 = -1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {999};
    int x1 = 5;
    int y1 = 5;
    int x2 = 15;
    int y2 = 15;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> X = {1, 4, 1};
    vector<int> Y = {1, 1, 1};
    vector<int> R = {1, 1, 10};
    int x1 = 1;
    int y1 = 1;
    int x2 = 4;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> X = {1};
    vector<int> Y = {1};
    vector<int> R = {2};
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
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
    vector<int> X = {0, 2, 4};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {1, 4, 1};
    int x1 = 0;
    int y1 = 0;
    int x2 = 4;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> X = {2};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = 3;
    int y1 = 0;
    int x2 = -5;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {100};
    int x1 = 99;
    int y1 = 99;
    int x2 = 101;
    int y2 = 101;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 0;
    int y1 = 0;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> X = {0, 10};
    vector<int> Y = {0, 0};
    vector<int> R = {100, 5};
    int x1 = 0;
    int y1 = 0;
    int x2 = 10;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> X = {0, 3, 1, 1};
    vector<int> Y = {0, 0, 0, 0};
    vector<int> R = {1, 1, 5, 10};
    int x1 = 0;
    int y1 = 0;
    int x2 = 3;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {999, 2};
    int x1 = -5;
    int y1 = 1;
    int x2 = 5;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> X = {0, 3, -3};
    vector<int> Y = {0, 3, -3};
    vector<int> R = {10, 1, 1};
    int x1 = 3;
    int y1 = 3;
    int x2 = -3;
    int y2 = -3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> X = {0, 0, 0};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {10, 5, 2};
    int x1 = 0;
    int y1 = 0;
    int x2 = 7;
    int y2 = 7;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> X = {0, -3, 3, 3};
    vector<int> Y = {0, 0, 0, 0};
    vector<int> R = {6, 1, 1, 2};
    int x1 = -3;
    int y1 = 0;
    int x2 = 3;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {4};
    int x1 = -2;
    int y1 = 0;
    int x2 = 2;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> X = {2, -1, 0};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {1, 1, 10};
    int x1 = -1;
    int y1 = 0;
    int x2 = 2;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> X = {-3, 2, 2, 0, -4, 12, 12, 12, 12};
    vector<int> Y = {-1, 2, 3, 1, 5, 1, 1, 1, 12};
    vector<int> R = {1, 3, 1, 7, 1, 1, 2, 3, 50};
    int x1 = 2;
    int y1 = 3;
    int x2 = 13;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {4};
    int x1 = 3;
    int y1 = 3;
    int x2 = 10;
    int y2 = 10;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> X = {0, 0, 2, -2};
    vector<int> Y = {0, 0, 0, 0};
    vector<int> R = {100, 10, 1, 1};
    int x1 = -2;
    int y1 = 0;
    int x2 = 2;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {20};
    int x1 = 19;
    int y1 = 19;
    int x2 = 25;
    int y2 = 25;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 0;
    int y1 = 0;
    int x2 = 4;
    int y2 = -4;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> X = {0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0};
    vector<int> R = {100, 50, 25, 15, 5};
    int x1 = 40;
    int y1 = 40;
    int x2 = 3;
    int y2 = 3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> X = {0, 1};
    vector<int> Y = {0, 1};
    vector<int> R = {1000, 10};
    int x1 = 100;
    int y1 = 100;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 1;
    int y1 = 1;
    int x2 = -1;
    int y2 = -1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> X = {2, 2, 11, 11, 7};
    vector<int> Y = {1, 1, 1, 1, 2};
    vector<int> R = {1, 4, 1, 4, 100};
    int x1 = 4;
    int y1 = 1;
    int x2 = 11;
    int y2 = 3;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> X = {10, 0, 5, 10, 5};
    vector<int> Y = {0, 0, 0, 0, 0};
    vector<int> R = {4, 2, 20, 2, 100};
    int x1 = 0;
    int y1 = 1;
    int x2 = 10;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> X = {0, 0};
    vector<int> Y = {0, 0};
    vector<int> R = {10, 20};
    int x1 = 1;
    int y1 = 0;
    int x2 = -1;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> X = {0, 0, 0};
    vector<int> Y = {0, -1, 2};
    vector<int> R = {4, 1, 1};
    int x1 = 0;
    int y1 = -1;
    int x2 = 0;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> X = {0, 10, 0};
    vector<int> Y = {0, 0, 0};
    vector<int> R = {2, 2, 100};
    int x1 = 0;
    int y1 = 0;
    int x2 = 10;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> X = {5, 3, 7};
    vector<int> Y = {5, 5, 5};
    vector<int> R = {5, 1, 2};
    int x1 = 3;
    int y1 = 5;
    int x2 = 7;
    int y2 = 5;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> X = {-3, 2, 2, 0, -4, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> Y = {-1, 2, 3, 1, 5, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> R = {1, 3, 1, 7, 1, 1, 2, 3, 50, 51, 52, 53, 54, 55, 56, 57};
    int x1 = 2;
    int y1 = 3;
    int x2 = 13;
    int y2 = 2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> X = {0, 1000};
    vector<int> Y = {0, 1000};
    vector<int> R = {100, 1};
    int x1 = 99;
    int y1 = 99;
    int x2 = 1000;
    int y2 = 1000;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> X = {0, 2, -2};
    vector<int> Y = {0, 2, -2};
    vector<int> R = {100, 1, 1};
    int x1 = 2;
    int y1 = 2;
    int x2 = -2;
    int y2 = -2;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> X = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> Y = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> R = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47};
    int x1 = 101;
    int y1 = 101;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {400};
    int x1 = 399;
    int y1 = 399;
    int x2 = 399;
    int y2 = 401;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {10};
    int x1 = -9;
    int y1 = 9;
    int x2 = 0;
    int y2 = 0;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {5};
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> X = {0};
    vector<int> Y = {0};
    vector<int> R = {2};
    int x1 = 1;
    int y1 = 2;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> X = {0, 0, 0, 0, 0, 0};
    vector<int> Y = {0, 0, 0, 0, 0, 0};
    vector<int> R = {10, 9, 8, 7, 6, 5};
    int x1 = 1;
    int y1 = 1;
    int x2 = -1;
    int y2 = -1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> X = {0, 20, -20};
    vector<int> Y = {0, 20, -20};
    vector<int> R = {1000, 10, 10};
    int x1 = 20;
    int y1 = 20;
    int x2 = -20;
    int y2 = -20;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> X = {0, 0, 0, 0};
    vector<int> Y = {0, 7, 6, -6};
    vector<int> R = {10, 1, 3, 2};
    int x1 = 0;
    int y1 = 7;
    int x2 = 0;
    int y2 = -6;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> X = {1, 1, 1, 1, 1};
    vector<int> Y = {1, 1, 1, 1, 1};
    vector<int> R = {1, 2, 3, 4, 5};
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 1;
    CirclesCountry* pObj = new CirclesCountry();
    clock_t start = clock();
    int result = pObj->leastBorders(X, Y, R, x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22504795&rd=13751&pm=10297
********************************************************************************
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
#include <complex>
#include <setjmp.h>
#include <ext/hash_map>
#include <queue>
using namespace std;
 
#define FR(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,v) FOR(i,(int)v.size())
#define FORALL(i,v) for(typeof(v.end())i=v.begin();i!=v.end();++i)
#define BEND(v) v.begin(),v.end()
#define dump(x) cerr << #x << " = " << (x) << endl;
typedef long long ll; typedef long double ld;
 
int sqr(int x) { return x*x; }
struct CirclesCountry {
int leastBorders(vector <int> X, vector <int> Y, vector <int> R, int x1, int y1, int x2, int y2) {
  int ans = 0;
  
  FORI(i,X) {
    if ( (sqr(x1-X[i])+sqr(y1-Y[i]) < sqr(R[i]))
      != (sqr(x2-X[i])+sqr(y2-Y[i]) < sqr(R[i]))) ++ans;
  }
 
  return ans;
}
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/