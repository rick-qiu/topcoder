/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8224
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

class HockeyFault {
public:
    int numPlayers(int width, int height, int x, int y, vector<int> px, vector<int> py);
};

int HockeyFault::numPlayers(int width, int height, int x, int y, vector<int> px, vector<int> py) {
    int ret;
    return ret;
}


int test0() {
    int width = 20;
    int height = 10;
    int x = 5;
    int y = 0;
    vector<int> px = {15, 1, 1};
    vector<int> py = {5, 5, 1};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 20;
    int height = 10;
    int x = 0;
    int y = 0;
    vector<int> px = {-5, -4, -4, -3, -3, 0, 0, 20, 20, 23, 23, 24, 24, 25};
    vector<int> py = {5, 2, 8, 1, 9, 0, 10, 0, 10, 1, 9, 2, 8, 5};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 52;
    int height = 84;
    int x = -44;
    int y = 66;
    vector<int> px = {26, -33, -49, 40, -10, 47, 25, -16, -82, 7};
    vector<int> py = {118, 106, 128, 114, 101, 85, 142, 140, 126, 145};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 24;
    int height = 100;
    int x = -61;
    int y = 71;
    vector<int> px = {-63, -26, -9, -113, -124, -95, -89, -55};
    vector<int> py = {109, 164, 91, 80, 75, 140, 116, 113};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 8;
    int height = 54;
    int x = -10;
    int y = 56;
    vector<int> px = {-34, 14, -24, 9, 6, -36, 22, -11, 2, 19, -10, 13, 0, 5, -40, -17, -39, -30, 35, 15, 4, 26, -44, 6, -20, 6, 25, 27, -21, -28, -21, -36, 11, -38, 2, -23};
    vector<int> py = {112, 78, 107, 87, 81, 62, 86, 116, 76, 110, 66, 98, 77, 92, 95, 86, 107, 114, 90, 83, 114, 86, 86, 96, 46, 91, 100, 104, 120, 67, 94, 85, 61, 110, 82, 95};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 37;
    int height = 94;
    int x = -52;
    int y = -35;
    vector<int> px = {12, -79, 1, -18, 17, -82, 27, -62, -82, -80, -4, 33, -19, -42, -75, -21, -19, -3, 33, -26, -98, -45, 32, -60, -53, 24, -55, -51, -49, 31, -31, -58, -28, 21, -39, -11, 4, -29, -45, 6, -31, -81};
    vector<int> py = {14, -16, -1, 0, 61, -36, 3, 9, -38, 18, 9, -15, 23, 63, 10, 12, 6, 63, 22, 63, 27, 9, 38, -39, 42, -14, 40, -31, -12, -11, -32, 2, 29, -34, 49, -23, -11, -18, -7, 41, -3, 0};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 74;
    int height = 18;
    int x = 67;
    int y = -39;
    vector<int> px = {151, 104, 71, 96, 87, 77, 134, 78, 60, 104, 99, 131, 92, 107, 126, 60, 101, 115, 119, 67, 121, 144, 131, 81, 130, 112, 61, 72, 58};
    vector<int> py = {-28, -35, -40, -40, -14, -25, -44, -46, -45, -46, -44, -37, -42, -35, -44, -17, -29, -20, -40, -43, -25, -17, -26, -37, -29, -38, -44, -43, -29};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 38;
    int height = 80;
    int x = 83;
    int y = 96;
    vector<int> px = {93, 97, 80, 140, 61, 73, 98, 155, 69, 74, 149, 110, 88, 88, 164, 159, 82, 62, 40, 58, 82, 158, 95, 158, 61, 129, 48, 156};
    vector<int> py = {120, 132, 160, 98, 119, 92, 126, 140, 139, 98, 105, 149, 130, 90, 165, 155, 102, 90, 107, 100, 117, 158, 133, 132, 172, 177, 155, 177};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 80;
    int height = 42;
    int x = 76;
    int y = -24;
    vector<int> px = {57, 109, 159, 125, 131, 125, 106, 94, 174, 49, 156, 43, 186, 91, 175, 125, 136, 87, 60, 65, 87, 122, 130, 188, 179, 181, 113, 134};
    vector<int> py = {30, -29, 22, 0, 8, 30, 33, -37, -28, -40, 4, -17, -24, -4, 19, -29, -28, 1, -36, -14, -14, -39, 30, -26, 17, 33, 10, -9};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 7;
    int height = 84;
    int x = -59;
    int y = 25;
    vector<int> px = {-84, -85, -84, -73, -56, -71, -71, -93, -13, -66, -98, -95, -35, -38, -93, -19, -36, -57, -35, -19, -39, -100, -86, -57, -61, -67, -22, -16, -44, -65, -22};
    vector<int> py = {74, 50, 84, 76, 84, 108, 62, 65, 28, 46, 69, 95, 27, 35, 105, 42, 38, 94, 97, 53, 39, 32, 83, 27, 59, 110, 68, 75, 42, 93, 86};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 15;
    int height = 22;
    int x = -40;
    int y = -61;
    vector<int> px = {-42, -35, -59, -25, -54, -16, -50, -37, -37, -44, -51, -21, -39, -50, -46, -31, -46, -45, -56, -21, -29, -43, -29, -51, -48, -21, -42, -13, -10, -30, -54, -23, -43, -32, -58, -51, -52, -50, -26, -51, -51, -20};
    vector<int> py = {-67, -36, -51, -65, -52, -52, -34, -51, -42, -58, -46, -53, -56, -58, -40, -43, -63, -38, -39, -46, -68, -42, -42, -47, -43, -54, -45, -43, -62, -58, -52, -43, -44, -31, -33, -60, -40, -46, -64, -54, -42, -59};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 9;
    int height = 54;
    int x = 53;
    int y = -67;
    vector<int> px = {76, 38, 88, 25, 91, 58, 26, 72, 67, 35, 83, 70, 69, 69, 77, 32, 84, 76, 29, 68, 79, 88, 49, 24, 54, 44, 57, 32, 38, 35, 72, 56, 45, 38, 92, 72, 62, 77, 68, 49, 44, 36, 30, 40, 86, 67};
    vector<int> py = {-57, -47, -20, -34, -69, -54, -57, -30, -56, -32, -63, -9, -22, -57, -20, -55, -9, -23, -41, -67, -71, -28, -21, -20, -60, -52, -24, -36, -9, -50, -65, -68, -33, -34, -36, -60, -20, -45, -32, -52, -45, -66, -58, -43, -30, -45};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 39;
    int height = 68;
    int x = 38;
    int y = 52;
    vector<int> px = {-2, 105, 123, 11, 58, 67, 87, 94, 48, 4, 46, -6, 110, 123, -11, 81, -3, 10, 54, 118, -6, 50, 29, 101, 67, 63, 95, 25, 102, 117, 63, 107};
    vector<int> py = {97, 129, 132, 124, 114, 45, 63, 53, 105, 83, 119, 38, 89, 85, 71, 124, 119, 90, 60, 80, 106, 38, 58, 125, 55, 39, 76, 75, 60, 89, 91, 129};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 57;
    int height = 80;
    int x = 22;
    int y = -86;
    vector<int> px = {58, 65, -5, -17, -20, 8, 19, 103, 134, 90, 6, -7, 44, -7, 68, 39, 75, 76, 92, -37, -24, -26, 62, 33, 45, -24, 1, 21, 126, -4, 83, -9, 27, 36, 102, 54, 130, -6, 51, 11, 138, 109, 104, -1, -25};
    vector<int> py = {2, -66, -33, -99, -102, -79, -26, -104, -1, -25, -47, 1, -21, 9, -10, 11, -26, -10, 4, -38, -105, -73, 7, -87, -20, -47, -45, -97, -37, -87, -44, -21, -66, -13, 1, 0, -43, -101, -25, -51, -9, -105, -5, -21, -80};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 18;
    int height = 90;
    int x = 61;
    int y = 30;
    vector<int> px = {75, 36, 118, 101, 54, 23, 120, 74, 76, 30, 122, 126, 22, 18, 84, 113, 71, 12, 81, 105, 18, 56, 8, 68, 67, 71, 39, 67, 120};
    vector<int> py = {75, 109, 48, 68, 99, 94, 76, 30, 50, 31, 121, 119, 39, 91, 124, 87, 82, 102, 28, 39, 121, 44, 63, 87, 88, 49, 94, 45, 79};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 73;
    int height = 12;
    int x = 75;
    int y = -86;
    vector<int> px = {143, 90, 84, 71, 73, 87, 86, 131, 119, 76, 66, 82, 88, 81, 89, 142, 95, 102, 82, 100, 140, 65, 124, 92, 128, 83, 115, 136, 69, 106, 127};
    vector<int> py = {-80, -81, -90, -89, -77, -74, -90, -78, -86, -70, -86, -73, -86, -81, -83, -76, -75, -86, -70, -76, -71, -78, -90, -79, -84, -75, -76, -87, -72, -85, -90};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 7;
    int height = 6;
    int x = -49;
    int y = -98;
    vector<int> px = {-50, -39, -38, -40, -38, -37, -46, -45, -39, -49, -37, -50, -51, -41, -46, -40, -49, -53, -37, -44, -39, -44, -49, -40, -43, -45, -46, -52, -50, -47};
    vector<int> py = {-99, -99, -92, -93, -97, -90, -91, -97, -95, -100, -98, -91, -91, -93, -100, -92, -100, -99, -91, -95, -98, -92, -100, -95, -95, -99, -92, -91, -93, -96};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 89;
    int height = 82;
    int x = -54;
    int y = 79;
    vector<int> px = {-10, 64, 43, 21, 21, -103, -38, -74, -24, 37, -76, 47, 36, -12, 20, -35, 47, -28, -96, 69, 27, -16, 58, 31, -2, 65, 79, -17, -39, 0, 33, 28, 43, -59, 72, 24};
    vector<int> py = {92, 122, 169, 117, 98, 102, 125, 118, 149, 74, 121, 143, 113, 73, 107, 98, 118, 120, 150, 81, 125, 100, 75, 140, 108, 139, 145, 116, 107, 145, 132, 138, 119, 92, 87, 121};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 40;
    int height = 10;
    int x = 2;
    int y = 12;
    vector<int> px = {19, 15, 29, 53, 34, -9, 36, 20, 50, 26, 4, 51, -12, 27, 51, 4, 50, 53, 9, -13, 23, 38, 49, 28, 58, 54, 55, 62, 53, 54, 28, 64, 35, 47, -14, 15};
    vector<int> py = {33, 8, 27, 32, 39, 8, 15, 0, 28, 35, 27, 7, 16, 23, -4, 21, 9, 17, 13, 28, 7, 7, 6, 32, -2, 17, -2, 38, 24, 0, 20, 9, 29, 26, 3, 15};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 96;
    int height = 4;
    int x = 2;
    int y = 58;
    vector<int> px = {83, 49, 84, 94, 61, -18, -19, -16, -16, -11, 86, 82, 68, 96, -4, 86, 59, 21, -9, 118, -16, 79, 42, 71, -5, 96};
    vector<int> py = {41, 64, 60, 65, 42, 81, 44, 53, 56, 44, 77, 64, 73, 43, 59, 57, 70, 62, 74, 54, 67, 65, 52, 43, 57, 65};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 27;
    int height = 42;
    int x = -48;
    int y = -16;
    vector<int> px = {-41, -44, -3, 5, -7, -33, -48, -64, -28, -6, -2, -21, -37, -34, -59, -27, -52, 6, -71, -80, -24, -71, -55, -72, -30, -31};
    vector<int> py = {-26, 7, 27, 36, -24, -21, 12, 4, -14, -5, -10, 32, 31, -17, -15, 13, 21, 27, 35, 38, -1, 20, 15, 9, -13, 19};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 49;
    int height = 10;
    int x = -80;
    int y = -21;
    vector<int> px = {-50, -70, -84, -72, -61, -72, -26, -53, -75, -23, -45, -83, -60, -71, -67, -55, -51, -60, -43, -29, -87, -62, -83, -52, -42, -69, -35, -91, -63, -44, -94, -69, -68, -69, -84, -92, -48, -60, -33, -54, -88, -45, -65, -89, -66, -39, -47, -63};
    vector<int> py = {-16, -18, -3, -11, -13, -23, -26, -5, -24, -13, -30, -23, -20, -16, -30, -26, -28, -25, -10, -9, -14, -20, -14, -11, -16, -11, -13, -25, -3, -29, -17, -8, -2, -13, -29, -30, -21, -15, -20, -13, -15, -9, -13, -18, -20, -26, -27, -20};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int width = 49;
    int height = 100;
    int x = -83;
    int y = -22;
    vector<int> px = {-77, -135, -104, -24, -127, -18, -109, -81, -81, 8, -47, -21, -83, 2, -66, -30, -124, -41, -90, -101, -76, -6, -76, -123, -109, -81, -124, -36, -58, -89, -75, -9, -25, -118, 10, -36, -62, -50, -19, -19, -97};
    vector<int> py = {67, 32, 81, 40, 73, 20, 78, 89, 10, 2, 50, 3, 81, 77, -26, 21, -7, 33, -11, 38, 66, 32, -34, 41, 82, -16, 74, -4, -17, -31, -17, 36, 57, -28, 67, 58, 86, 10, -26, 50, -21};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int width = 7;
    int height = 32;
    int x = -99;
    int y = -5;
    vector<int> px = {-92, -67, -62, -69, -116, -78, -62, -68, -130, -67, -76, -111, -68, -120, -89, -132, -65, -120, -102, -95, -131, -101, -105, -67, -67, -102, -125, -85, -98, -92, -121, -120, -73, -117, -109};
    vector<int> py = {36, 18, 38, 21, 7, 11, 44, -1, 34, 17, 4, -11, -13, 23, 1, 12, -10, 23, -19, -11, 39, -11, 41, 19, -10, -8, 17, 17, 38, -10, 17, -9, -16, 30, -17};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 80;
    int height = 56;
    int x = -3;
    int y = 72;
    vector<int> px = {96, 97, 96, -20, -35, -26, -33, 55, 96, 27, 93, 28, 11, -20, -23, 27, 18, 15, 95, 98, 90, 111, 100, 20, 31, 96, 104, 9, 50};
    vector<int> py = {133, 93, 88, 88, 121, 74, 117, 91, 79, 90, 109, 89, 66, 134, 119, 92, 95, 95, 115, 108, 98, 131, 133, 128, 103, 73, 72, 119, 131};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 100;
    int height = 2;
    int x = 39;
    int y = -4;
    vector<int> px = {155, 81, 40, 95, 86, 94, 105, 67, 120, 154, 154, 43, 25, 108, 24, 145, 54, 130, 24, 31, 90, 23, 128, 75, 73, 146, 37, 148, 80, 145, 120, 151, 71, 42, 80, 101, 122, 35, 98, 100, 96, 37, 67, 53, 145, 48, 38, 95};
    vector<int> py = {11, 1, -13, -13, -7, 5, -20, -4, 12, 0, -18, -19, -1, -5, -9, 4, 9, -10, 13, -1, 14, -6, 4, -14, -14, -12, -8, 0, -13, 2, 8, 3, -3, -14, -5, 13, -20, 3, 1, -10, -3, 1, 0, 8, 7, 2, 5, -3};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 73;
    int height = 4;
    int x = -98;
    int y = 40;
    vector<int> px = {-82, -44, -56, -46, -79, -87, -62, -69, -70, -66, -54, -20, -94, -68, -52, -62, -71, -73, -70, -56, -71, -95, -47, -47, -41, -52, -60, -79, -54, -91, -25, -65, -98, -99, -24, -88, -93, -34};
    vector<int> py = {49, 48, 40, 35, 49, 45, 38, 48, 40, 44, 40, 36, 38, 44, 42, 40, 35, 46, 39, 41, 44, 40, 36, 47, 46, 41, 37, 48, 47, 36, 41, 35, 49, 44, 36, 40, 44, 38};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 44;
    int height = 64;
    int x = -40;
    int y = 42;
    vector<int> px = {-45, -30, 8, -47, 24, -22, -19, -61, -9, 23, 26, -47, 38, -37, -77, -76, -7, -66, -26, 34, -38, -68, -40, -63, 32, 10, -30, -72, 33, -81, -71};
    vector<int> py = {67, 47, 62, 79, 45, 52, 112, 65, 86, 65, 31, 67, 50, 103, 49, 54, 74, 113, 68, 81, 82, 33, 109, 112, 90, 44, 80, 71, 111, 97, 105};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 86;
    int height = 74;
    int x = 33;
    int y = -72;
    vector<int> px = {47, 77, 114, 84, 12, 85, 74, 36, -3, 147, 164, 84, 121, 58, 63, 136, 132, 59, 89, 101, 120, 89, 13, 76, 2, 83, 48, 160, 34, 2, 41, 52, 106, 37, 147, 47, 6, 0, 107, 161, 22, 25, 126, 9, 64, 161, 3};
    vector<int> py = {-8, 10, -59, -36, -89, 6, -66, -77, 8, -20, -7, -8, -28, -69, -71, -26, -83, -14, -57, 0, -35, 16, -64, -63, -73, -80, -75, -18, -29, -61, 15, -27, -57, -44, -15, -83, -17, -59, -84, -33, -62, -6, -72, 13, -22, -18, -55};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 81;
    int height = 20;
    int x = -35;
    int y = 34;
    vector<int> px = {0, 23, 29, 2, 52, 53, -17, -7, -30, -47, 46, 5, 43, 37, -32, 41, 23, 8, -46, -55, -18, 18, -17, -21, 21, 58, -40, -39, 46, -6, 35, -26, 47, -40, 26, 51, 55, 7, 33, -2, 29};
    vector<int> py = {26, 51, 50, 64, 42, 36, 35, 29, 32, 55, 57, 56, 43, 59, 51, 30, 46, 36, 64, 33, 52, 48, 33, 41, 39, 59, 37, 25, 66, 53, 23, 28, 43, 27, 56, 34, 45, 23, 64, 32, 61};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int width = 88;
    int height = 22;
    int x = 35;
    int y = -24;
    vector<int> px = {44, 139, 55, 128, 82, 60, 39, 51, 24, 111, 51, 102, 131, 27, 134, 56, 100, 30, 21, 45, 50, 35, 79, 43, 130, 40, 26, 95, 117, 96, 69, 70, 102, 69};
    vector<int> py = {-25, -9, -15, -19, -29, -28, -8, -27, -22, -10, -12, 1, -4, -4, -22, -28, -14, 2, -11, -22, -22, -28, -9, -19, -23, -28, -9, -9, -1, -9, 1, -26, -21, -12};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int width = 83;
    int height = 94;
    int x = 12;
    int y = -24;
    vector<int> px = {121, 55, -34, 138, 80, 59, -24, 112, -1, 130, -24, 102, -7, 8, 134, 49, -24, 137, 77, 75, 104, 45, 2, 17, 56, 96, 70, 110, 10};
    vector<int> py = {-18, 22, 11, 62, 72, -9, 54, -19, 49, 21, 5, 35, 23, 33, 46, 51, 49, -9, -7, -19, 17, -22, 56, 21, 21, 42, 58, -22, -8};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 58;
    int height = 76;
    int x = -35;
    int y = -86;
    vector<int> px = {-13, 1, -65, -83, -48, -84, 63, -18, 68, -17, -43, 3, -35, -14, -19, -72, 70, 9, 65, 45, -13, 8, -5, -68, -60, 27, -63, -2, 45, -19, -58, -82, -73, -50, -36, -43};
    vector<int> py = {-67, -71, -13, -93, -23, -85, -84, -71, -41, -33, -70, -26, -71, -91, -26, -44, -44, -37, -61, -37, -72, -12, -71, -76, -22, -65, -26, -65, -32, -43, -25, -44, -7, -70, -13, -17};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 13;
    int height = 94;
    int x = -59;
    int y = -32;
    vector<int> px = {-66, -8, -43, -84, -50, -105, -89, -42, -71, -34, -77, -111, -32, -45, -14, -53, -71, -25, -57, -17, -23, -106, -93, -81, -25, -52, -54, -19, -87, -49, -59, -59};
    vector<int> py = {39, 57, 51, 19, -9, 10, -6, 58, 8, -15, -13, 3, 48, 14, 52, 14, 38, 16, -3, -12, 4, 36, -6, 64, -14, 46, -22, 8, -34, 15, -20, -5};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 68;
    int height = 52;
    int x = -61;
    int y = -10;
    vector<int> px = {46, -42, -79, -17, -45, 4, -85, -83, -21, -86, 39, -39, -11, -46, -44, 4, 34, -74, -26, 38, 16, -34, 28, 25, -60, -4, 0, 40, -76, -33, -58, 24, -2, 18, 24, -70, 11, -27, -15, -62, -90, -7, 12, -47, -31, -33, 22, -72, 39};
    vector<int> py = {-16, 53, 7, 23, 37, 25, -22, -3, 20, 26, 49, -7, 28, 8, -18, -16, 42, 50, 24, 20, 45, 52, 4, -5, -9, 14, 38, 33, 12, 3, 37, 36, -14, -9, 11, 27, 40, 29, -3, -1, 15, -23, 53, -1, 22, -23, 5, 37, 38};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 24;
    int height = 60;
    int x = 64;
    int y = 92;
    vector<int> px = {107, 71, 85, 90, 72, 107, 82, 66, 113, 29, 122, 49, 53, 72, 124, 123, 94, 41, 67, 28, 119, 80, 49, 81, 56, 131, 126, 101, 89, 53, 98, 105, 121, 72, 131, 28, 46, 56, 116, 119, 69, 95, 23, 45, 62};
    vector<int> py = {105, 164, 123, 119, 157, 114, 165, 134, 106, 123, 115, 147, 115, 141, 110, 145, 139, 148, 80, 149, 144, 151, 111, 144, 104, 158, 80, 115, 82, 152, 117, 110, 160, 162, 91, 137, 163, 122, 126, 154, 149, 134, 97, 162, 147};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 47;
    int height = 20;
    int x = -11;
    int y = 10;
    vector<int> px = {49, -10, 5, 47, 27, -2, 13, 6, 9, 17, 31, 28, -21, -17, 2, -18, 28, 34, 20, -6, -17, 0, -24, 31, 22, 26, 43, 21, 36, -11, 4, -6};
    vector<int> py = {14, 14, 12, 7, 33, 17, 32, 5, 7, 12, 12, 9, 13, 8, 10, 17, 20, 31, 8, 21, 16, 10, 23, 24, 9, 35, 20, 19, 35, 15, 27, 19};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int width = 65;
    int height = 4;
    int x = -51;
    int y = 79;
    vector<int> px = {-23, -7, -3, -47, -26, -29, -49, -34, -6, -28, -19, 2, -11, -24, -21, -36, -14, -2, 18, 16, -56, -54, -26, -2, -30, 10, 6, 2, -12, -42, -46, -8, -12, -34, 6, -55, -28, 7, -42, -18, -11};
    vector<int> py = {84, 84, 83, 78, 78, 75, 76, 85, 75, 84, 83, 81, 76, 86, 79, 75, 79, 77, 85, 85, 77, 85, 76, 80, 84, 78, 78, 83, 83, 82, 78, 82, 78, 78, 82, 83, 83, 82, 78, 79, 80};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 81;
    int height = 10;
    int x = 68;
    int y = -10;
    vector<int> px = {152, 119, 61, 79, 83, 63, 81, 130, 86, 78, 90, 140, 144, 98, 115, 135, 81, 148, 101, 87, 118, 107, 136, 71, 118, 135, 111, 108, 144, 85, 82, 148, 73, 117, 78, 148, 83, 141, 149, 109, 117};
    vector<int> py = {-8, -11, -9, -10, -6, -11, -5, -7, -13, 0, 2, -8, -12, -7, 3, 1, -1, -5, -9, -10, 1, 2, -4, -13, 2, 2, -6, -3, 1, 1, -4, -9, -7, -5, -3, -4, -7, -7, -6, -12, -12};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 69;
    int height = 84;
    int x = 34;
    int y = -80;
    vector<int> px = {1, 63, 16, 10, 68, -7, 42, 20, 35, 13, 20, 102, 120, 105, 141, 145, 53, 87, 86, 125, 60, 48, 92, 50, 151, 48, 7, 104, 78, -14, 117, -6, 52, 10, 65, 98, 37, 105, 78, -6, 40, -1, 119};
    vector<int> py = {-66, -26, -1, -38, -21, 5, -11, -41, 1, -11, 1, -17, -30, -43, -37, -60, -12, -48, -11, -42, -25, 10, -76, -84, -71, 7, -44, -77, -76, -62, -23, -81, -43, -69, -69, -16, -24, -49, -65, -34, -1, -72, -36};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int width = 26;
    int height = 30;
    int x = 72;
    int y = -4;
    vector<int> px = {55, 72, 73, 108, 97, 60, 109, 96, 52, 72, 60, 90, 69, 110, 43, 98, 81, 126, 64, 104, 80, 105, 50, 106, 57, 78, 63, 65, 118, 120, 99, 72, 56, 76, 51, 70, 127, 111, 111, 59, 70, 100, 87};
    vector<int> py = {-14, 19, -2, -4, 33, 17, 13, 13, 26, 28, 23, -4, 27, -4, 21, -8, -16, 24, 24, 40, 29, 18, 5, 18, 5, -1, 8, 20, 29, 23, 36, 34, 3, 14, 30, 25, 26, 17, 39, -10, 19, 4, 5};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 27;
    int height = 50;
    int x = -69;
    int y = -48;
    vector<int> px = {-50, -57, -91, -87, -79, -93, -12, -53, -39, -22, -20, -5, -21, -67, -41, -8, -60, -106, -98, -35, -73, -24, -2, -57, -101, -5, -107, -86, -1, -73, -100, -14, -57, -50, -2, -88};
    vector<int> py = {-50, 12, 9, -1, 0, -1, -41, -52, -3, 11, 7, -58, -61, -61, -18, -53, -55, -56, 14, 17, -57, -47, -21, -30, -27, -18, -1, -32, -25, -30, -23, -64, -15, -57, -30, -17};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int width = 67;
    int height = 56;
    int x = -97;
    int y = 26;
    vector<int> px = {-6, -11, -114, -81, -115, -48, -9, -81, -62, -66, -123, -11, -65, -31, -29, -137, -118, -121, 5, -69, -26, 3, -94, -61, -81, -58, -11, 5};
    vector<int> py = {51, 58, 39, 74, 87, 27, 60, 59, 71, 93, 52, 89, 57, 21, 17, 81, 60, 39, 33, 55, 48, 36, 22, 21, 79, 13, 45, 31};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 53;
    int height = 40;
    int x = -46;
    int y = 49;
    vector<int> px = {27, 30, -27, -66, -52, 28, -72, 23, -32, -1, 29, -54, -43, -4, 9, -15, 4, -7, -32, 31, 25, -62, -40, 34, -55, -9, -25, 29, -32};
    vector<int> py = {84, 70, 62, 73, 89, 94, 84, 96, 62, 78, 48, 51, 77, 98, 71, 80, 53, 58, 80, 94, 71, 76, 88, 42, 66, 73, 66, 48, 71};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 69;
    int height = 26;
    int x = -32;
    int y = -62;
    vector<int> px = {19, -32, 18, -5, -25, -51, -3, 21, -18, -47, -43, -59, 1, 4, 9, 23, 59, -34, 6, 20, -34, -47, -25, -58, 43, 54, -21};
    vector<int> py = {-67, -41, -38, -38, -57, -72, -50, -30, -55, -46, -69, -71, -51, -66, -54, -51, -40, -60, -64, -68, -49, -74, -32, -71, -20, -52, -55};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 34;
    int height = 72;
    int x = -100;
    int y = 78;
    vector<int> px = {-53, -110, -55, -91, -102, -151, -149, -104, -47, -70, -33, -62, -74, -83, -143, -132, -85, -43, -46, -114, -139, -91, -117, -26, -55, -137, -105, -152, -35, -97, -97, -69, -89, -143, -69, -136, -73, -57, -135, -132, -56, -47, -145, -47};
    vector<int> py = {93, 81, 86, 65, 141, 158, 159, 101, 60, 149, 98, 168, 118, 82, 115, 90, 87, 121, 106, 117, 79, 143, 117, 159, 125, 151, 99, 79, 140, 167, 143, 69, 62, 74, 64, 98, 83, 128, 145, 140, 124, 71, 103, 83};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 4;
    int height = 84;
    int x = -82;
    int y = -43;
    vector<int> px = {-129, -96, -109, -88, -113, -49, -25, -30, -48, -80, -53, -122, -82, -51, -66, -87, -64, -59, -80, -97, -71, -59, -76, -62, -125, -79, -88, -109, -44, -81, -125, -49, -127, -116, -55, -134, -115, -33, -41};
    vector<int> py = {-48, 2, 7, -54, 10, -32, 40, 43, -26, -43, 13, 17, -25, -16, -39, -53, 51, -17, 18, 26, 34, -28, -5, 19, -35, 48, -30, 42, 15, 7, 16, 35, 3, 51, 5, -36, 7, 39, -45};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 28;
    int height = 32;
    int x = -70;
    int y = -31;
    vector<int> px = {-65, -53, -56, -32, -32, -22, -26, -90, -44, -26, -33, -57, -71, -60, -42, -56, -48, -63, -36, -90, -48, -73, -44, -68, -31, -73, -74, -63, -22, -74, -82};
    vector<int> py = {-33, 6, 2, -16, -17, -17, -24, -2, -6, -35, -8, 4, -18, -29, -5, 4, 0, -26, 6, -2, -5, -8, -14, -30, -6, -8, -30, -12, -31, -9, -20};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 81;
    int height = 50;
    int x = -84;
    int y = 95;
    vector<int> px = {-69, 33, 36, -124, 15, -111, 19, -17, -17, -112, -97, 12, 8, -31, 17, -59, -47, -38, 36, -122, 35, -72, 5, 15, -52, -19, -119, 34, -49, -1, 4, -120, -57};
    vector<int> py = {120, 160, 137, 97, 155, 135, 90, 118, 82, 160, 114, 121, 129, 130, 145, 85, 118, 85, 141, 159, 148, 109, 136, 106, 110, 145, 84, 103, 101, 97, 128, 93, 90};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int width = 97;
    int height = 74;
    int x = 5;
    int y = -67;
    vector<int> px = {13, 147, 124, 32, 13, 93, -31, 95, 44, -35, 33, 95, 11, -36, -35, -39, -21, 71, 23, 131, 122, 20, 24, 4, 83, 95, -34, 72, 108, 148, -34};
    vector<int> py = {-76, -50, 15, -53, -35, -33, -23, -16, -27, -67, -65, 6, 2, -8, -47, -29, -18, -43, -22, -52, -30, -66, -58, -42, -43, 13, -61, -62, -8, -29, -58};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int width = 30;
    int height = 94;
    int x = -60;
    int y = -99;
    vector<int> px = {20, -81, -113, -59, -34, -68, 16, -92, 22, -105, -46, -80, 8, -50, -31, -107, -113, -13, -74, -102, -48, -10, 4, -101, -17, 2, -27, -6, -80, -1, 32, -64, -62, -44, -108, 34, -98, -52, -50, -16, -103, 31, -12};
    vector<int> py = {0, -104, -3, 2, -48, -51, -54, 3, -38, -24, -41, -93, -95, -30, 0, -43, 14, 13, 1, -83, -28, -76, -98, -106, -64, -48, -81, -55, -43, 12, -5, -87, -114, -33, -15, 0, -101, 4, -6, -99, -106, 0, -99};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 58;
    int height = 36;
    int x = -85;
    int y = -78;
    vector<int> px = {-103, -19, -23, -32, -70, -46, -37, -7, -41, -64, -50, -17, -67, -59, -58, -95, -35, -64, -119, -85, -39, 6, -65, -95, -98, -93, -17, -117, -4, -21, 3, -110, -11, -8, -61, -53};
    vector<int> py = {-55, -28, -60, -54, -34, -61, -54, -69, -87, -28, -49, -84, -28, -72, -71, -32, -65, -45, -46, -54, -42, -39, -60, -80, -52, -26, -59, -74, -74, -41, -63, -26, -67, -33, -92, -65};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 20;
    int height = 10;
    int x = 0;
    int y = 0;
    vector<int> px = {-5, -4, -4, -3, -3, 0, 0, 20, 20, 23, 23, 24, 24, 25};
    vector<int> py = {5, 2, 8, 1, 9, 0, 10, 0, 10, 1, 9, 2, 8, 5};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int width = 5;
    int height = 8;
    int x = 4;
    int y = 8;
    vector<int> px = {3, 2, 0};
    vector<int> py = {1, 2, 3};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 1;
    int height = 4;
    int x = 0;
    int y = 0;
    vector<int> px = {0};
    vector<int> py = {100};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 100;
    int height = 100;
    int x = -10;
    int y = -10;
    vector<int> px = {-10};
    vector<int> py = {-10};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 5;
    int height = 100;
    int x = 0;
    int y = 0;
    vector<int> px = {20, 20, 20};
    vector<int> py = {0, 10, 20};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int width = 4;
    int height = 4;
    int x = 2;
    int y = 2;
    vector<int> px = {3};
    vector<int> py = {1};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 10;
    int height = 10;
    int x = 0;
    int y = 0;
    vector<int> px = {1, 2, 3};
    vector<int> py = {10, 10, 10};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int width = 100;
    int height = 2;
    int x = 0;
    int y = 0;
    vector<int> px = {59};
    vector<int> py = {0};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 20;
    int height = 10;
    int x = 5;
    int y = 0;
    vector<int> px = {15};
    vector<int> py = {0};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 100;
    int height = 2;
    int x = 1;
    int y = 1;
    vector<int> px = {50};
    vector<int> py = {3};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int width = 20;
    int height = 20;
    int x = 0;
    int y = 0;
    vector<int> px = {0};
    vector<int> py = {-100};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 10;
    int height = 10;
    int x = 10;
    int y = 10;
    vector<int> px = {30};
    vector<int> py = {12};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int width = 4;
    int height = 4;
    int x = 2;
    int y = 3;
    vector<int> px = {3};
    vector<int> py = {3};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 20;
    int height = 10;
    int x = 0;
    int y = 0;
    vector<int> px = {3, 4, 5};
    vector<int> py = {50, 50, 50};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 10;
    int height = 20;
    int x = 20;
    int y = 20;
    vector<int> px = {30};
    vector<int> py = {10};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 10;
    int height = 10;
    int x = -10;
    int y = -100;
    vector<int> px = {-9};
    vector<int> py = {-9};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 10;
    int height = 2;
    int x = 5;
    int y = 3;
    vector<int> px = {11};
    vector<int> py = {3};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 10;
    int height = 20;
    int x = 5;
    int y = 10;
    vector<int> px = {12};
    vector<int> py = {30};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 4;
    int height = 4;
    int x = 1;
    int y = 1;
    vector<int> px = {0, 6, 3};
    vector<int> py = {3, 3, 3};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int width = 10;
    int height = 10;
    int x = 0;
    int y = 0;
    vector<int> px = {-5};
    vector<int> py = {5};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int width = 6;
    int height = 4;
    int x = 20;
    int y = 20;
    vector<int> px = {23};
    vector<int> py = {24};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int width = 10;
    int height = 10;
    int x = 0;
    int y = 0;
    vector<int> px = {11};
    vector<int> py = {4};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int width = 100;
    int height = 100;
    int x = 0;
    int y = 0;
    vector<int> px = {0, 50};
    vector<int> py = {0, 0};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int width = 1;
    int height = 2;
    int x = 0;
    int y = 0;
    vector<int> px = {-1, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2};
    vector<int> py = {2, 1, 0, 2, 1, 0, 2, 1, 0, 2, 1, 0};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
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
    int width = 20;
    int height = 10;
    int x = 5;
    int y = 0;
    vector<int> px = {28};
    vector<int> py = {5};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int width = 10;
    int height = 4;
    int x = 0;
    int y = 0;
    vector<int> px = {-1};
    vector<int> py = {2};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int width = 100;
    int height = 10;
    int x = 0;
    int y = 0;
    vector<int> px = {0, 0, 1, 2, 3, 4, 5, 10, 20, 30};
    vector<int> py = {0, 1, 10, 20, 30, 20, 0, 10, 20, 30};
    HockeyFault* pObj = new HockeyFault();
    clock_t start = clock();
    int result = pObj->numPlayers(width, height, x, y, px, py);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22658315&rd=10793&pm=8224
********************************************************************************
#include<iostream> 
#include<vector> 
#include<cmath> 
 
using namespace std; 
 
class HockeyFault 
{ 
  double dis(int x1,int y1,int x2,int y2) 
  { 
    return sqrt(pow((double)abs(x1-x2),2)+pow((double)abs(y1-y2),2)); 
  } 
  public : 
    int numPlayers(int width, int height, int x, int y, vector<int> px, vector<int> py) 
    { 
      int dx = x + width; 
      int dy = y + height; 
      int mxr = x ; 
      int my = y + height/2; 
      int mxl = dx; 
      int count = 0; 
      for(int i = 0 ; i < py.size() ; i ++) 
      { 
        if(px[i]<= dx && px[i] >= x&&py[i]<= dy && py[i] >= y) 
          count ++; 
        else 
          if((dis(mxr,my,px[i],py[i]) <= height/2) || dis(mxl,my,px[i],py[i]) <= height/2) 
            count ++; 
         
      } 
      return count; 
    } 
};

********************************************************************************
*******************************************************************************/